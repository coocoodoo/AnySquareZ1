// rk_mpi_amix_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010b58 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010b7c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002300c)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010b88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00023010)();
  return piVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010b94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023014)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AMIX_ListContents @ 00010ba0 size=12 ===== */

void RK_MPI_AMIX_ListContents(void)

{
  (*(code *)PTR_RK_MPI_AMIX_ListContents_00023018)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010bac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002301c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010bb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00023020)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010bd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00023028)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 00010bdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002302c)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00010be8 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00023030)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00010bf4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00023034)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AMIX_SetControl @ 00010c00 size=12 ===== */

void RK_MPI_AMIX_SetControl(void)

{
  (*(code *)PTR_RK_MPI_AMIX_SetControl_00023038)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00010c0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0002303c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::fputs @ 00010c18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00023040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010c24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023044)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_AMIX_ListControls @ 00010c30 size=12 ===== */

void RK_MPI_AMIX_ListControls(void)

{
  (*(code *)PTR_RK_MPI_AMIX_ListControls_00023048)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010c3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002304c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 00010c48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_00023050)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::abort @ 00010c54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00023054)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00010c60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00023058)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_AMIX_GetControl @ 00010c6c size=12 ===== */

void RK_MPI_AMIX_GetControl(void)

{
  (*(code *)PTR_RK_MPI_AMIX_GetControl_0002305c)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010c78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00023060)(__ptr);
  return;
}



/* ===== <EXTERNAL>::strerror @ 00010c84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00023064)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00010c90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00023068)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00010c9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002306c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010ca8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023070)();
  return;
}



/* ===== main @ 00010cb4 size=720 ===== */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  undefined4 *__ptr;
  undefined1 auStack_188 [40];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined1 auStack_11c [4];
  undefined *local_118;
  char *local_110;
  code *local_10c;
  undefined4 local_104;
  undefined4 local_100;
  char *local_f0;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined *local_d8;
  undefined4 *local_d4;
  char *local_d0;
  undefined4 local_c0;
  char *local_b8;
  undefined8 *local_b4;
  char *local_b0;
  undefined4 local_a0;
  char *local_98;
  undefined4 *local_94;
  char *local_90;
  undefined4 local_80;
  char *local_78;
  undefined8 *local_74;
  char *local_70;
  undefined4 local_60;
  char *local_58;
  undefined4 *local_54;
  char *local_50;
  
  __ptr = malloc(0x14);
  *__ptr = 0;
  *(undefined8 *)(__ptr + 1) = 0;
  *(undefined8 *)(__ptr + 3) = 0;
  memset(auStack_11c,0,0xfc);
  local_94 = __ptr + 2;
  local_54 = __ptr + 4;
  local_118 = &DAT_00011b44;
  local_104 = 1;
  local_100 = 1;
  local_110 = "show this help message and exit";
  local_dc = 0x43;
  local_10c = argparse_help_cb;
  local_f0 = "basic options:";
  local_d8 = &DAT_00011b7c;
  local_d0 = "specifies the card number of the mixer. default(0)";
  local_b8 = "control";
  local_b0 = "sets (or gets without control value) the name of a control. default(required)";
  local_98 = "value";
  local_90 = "sets the value of a control. default(required)";
  local_78 = "list_controls";
  local_70 = "lists controls of the mixer. default(false).";
  local_58 = "list_contents";
  local_50 = "lists controls of the mixer and their contents. default(false).";
  local_120 = 2;
  local_80 = 2;
  local_60 = 2;
  local_e0 = 4;
  local_c0 = 6;
  local_a0 = 6;
  local_d4 = __ptr;
  local_b4 = (undefined8 *)(__ptr + 1);
  local_74 = (undefined8 *)(__ptr + 3);
  argparse_init(auStack_188,&local_120,&DAT_00011b3c,0);
  argparse_describe(auStack_188,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_188,param_1,param_2);
  puts("cmd parse result:");
  printf("sound control id      : %d\n",*__ptr);
  printf("control name          : %s\n",__ptr[1]);
  printf("control value         : %s\n",__ptr[2]);
  printf("list controls         : %d\n",__ptr[3]);
  printf("list contents         : %d\n",__ptr[4]);
  if (__ptr[1] == 0) {
    if (__ptr[2] != 0) goto LAB_00010eb8;
    if (__ptr[3] != 0) goto LAB_00010f68;
    if (__ptr[4] == 0) {
      argparse_usage(auStack_188);
      return 0xffffffff;
    }
  }
  else {
    if (__ptr[2] == 0) {
      uStack_15c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_158 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_154 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      local_150 = 0;
      local_160 = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 0;
      uStack_14c = uStack_15c;
      uStack_144 = uStack_15c;
      uStack_13c = uStack_15c;
      uStack_134 = uStack_15c;
      uStack_12c = uStack_15c;
      uStack_124 = uStack_15c;
      RK_MPI_AMIX_GetControl(*__ptr);
      printf("Get current control value: %s\n",&local_160);
      puts("List the control values:");
      RK_MPI_AMIX_GetControl(*__ptr,__ptr[1],0);
    }
    else {
      RK_MPI_AMIX_SetControl(*__ptr,__ptr[1],__ptr[2]);
    }
LAB_00010eb8:
    if (__ptr[3] != 0) {
LAB_00010f68:
      RK_MPI_AMIX_ListControls(*__ptr);
    }
    if (__ptr[4] == 0) goto LAB_00010ed0;
  }
  RK_MPI_AMIX_ListContents(*__ptr);
LAB_00010ed0:
  free(__ptr);
  return 0;
}



/* ===== _start @ 00010f84 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023024)
            (DAT_00010fb8,param_2,&stack0x00000004,DAT_00010fbc,DAT_00010fb4,param_1);
  return;
}



/* ===== FUN_00010fc0 @ 00010fc0 size=32 ===== */

void FUN_00010fc0(void)

{
  if (DAT_00010fe4 == DAT_00010fe0) {
    return;
  }
  if (DAT_00010fe8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010fe8)();
  return;
}



/* ===== _FINI_0 @ 00011024 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011060;
  if (*DAT_00011060 != '\0') {
    return;
  }
  FUN_00010fc0();
  if (DAT_00011064 != 0) {
    __deregister_frame_info(DAT_00011068);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001106c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011090 != 0) {
    __register_frame_info(DAT_00011098,DAT_00011094);
  }
  if ((DAT_0001101c - DAT_00011018 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011020 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011020)();
  return;
}



/* ===== FUN_0001109c @ 0001109c size=64 ===== */

void FUN_0001109c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0x1e6c;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0x1e50;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000110dc @ 000110dc size=588 ===== */

undefined4 FUN_000110dc(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  char *local_24 [2];
  
  pfVar5 = (float *)param_2[3];
  local_24[0] = (char *)0x0;
  if (pfVar5 == (float *)0x0) goto switchD_00011110_default;
  switch(*param_2) {
  case 2:
    if ((param_3 & 1) == 0) {
      fVar6 = (float)((int)*pfVar5 + 1);
    }
    else {
      fVar6 = (float)((int)*pfVar5 - 1);
    }
    if ((int)fVar6 < 0) {
      *pfVar5 = 0.0;
      break;
    }
    goto LAB_0001114c;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_0001114c:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_00011324:
                    /* WARNING: Subroutine does not return */
        FUN_0001109c(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x18) = iVar4 + 4;
      fVar6 = (float)strtol(*(char **)(iVar4 + 4),local_24,0);
      *pfVar5 = fVar6;
    }
    else {
      fVar6 = (float)strtol(pcVar3,local_24,0);
      *pfVar5 = fVar6;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    iVar4 = *piVar2;
    if (iVar4 != 0) {
LAB_0001130c:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_0001109c(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_0001109c(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00011324;
      iVar4 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x18) = iVar4 + 4;
      fVar6 = strtof(*(char **)(iVar4 + 4),local_24);
      *pfVar5 = fVar6;
    }
    else {
      fVar6 = strtof(pcVar3,local_24);
      *pfVar5 = fVar6;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    iVar4 = *piVar2;
    if (iVar4 != 0) goto LAB_0001130c;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_0001109c(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_00011324;
      iVar4 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x18) = iVar4 + 4;
      *pfVar5 = *(float *)(iVar4 + 4);
    }
    else {
      *pfVar5 = *(float *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
switchD_00011110_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 0001133c size=48 ===== */

undefined4
argparse_init(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[5] = 0;
  param_1[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[8] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[8] = 0;
  param_1[9] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  return 0;
}



/* ===== argparse_describe @ 0001136c size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 00011380 size=1052 ===== */

undefined4 argparse_usage(undefined4 *param_1)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 == (undefined4 *)0x0) {
    fwrite("Usage:\n",1,7,stdout);
  }
  else {
    puVar6 = puVar8 + 1;
    fprintf(stdout,"Usage: %s\n",*puVar8);
    if ((char *)puVar8[1] != (char *)0x0) {
      cVar1 = *(char *)puVar8[1];
      while (cVar1 != '\0') {
        fprintf(stdout,"   or: %s\n");
        puVar6 = puVar6 + 1;
        if ((char *)*puVar6 == (char *)0x0) break;
        cVar1 = *(char *)*puVar6;
      }
    }
  }
  if (param_1[3] != 0) {
    fprintf(stdout,"%s\n");
  }
  if (stdout->_chain == (_IO_FILE *)0x0) {
    fputc(10,stdout);
  }
  else {
    pcVar5 = stdout->_IO_write_base;
    if (pcVar5 < stdout->_IO_buf_base) {
      stdout->_IO_write_base = pcVar5 + 1;
      *pcVar5 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  piVar7 = (int *)*param_1;
  iVar13 = *piVar7;
  if (iVar13 != 0) {
    uVar10 = 0;
    piVar11 = piVar7;
    iVar12 = iVar13;
    do {
      pcVar5 = (char *)piVar11[2];
      if ((char)piVar11[1] == '\0') {
        iVar9 = 0;
        iVar4 = 0;
        if (pcVar5 != (char *)0x0) goto LAB_00011478;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_00011478:
        sVar2 = strlen(pcVar5);
        iVar4 = sVar2 + iVar9 + 2;
      }
      if (((iVar12 == 4) || (iVar12 == 5)) || (iVar12 == 6)) {
        iVar4 = iVar4 + 6;
      }
      piVar11 = piVar11 + 8;
      iVar12 = *piVar11;
      uVar3 = iVar4 + 3U & 0xfffffffc;
      if (uVar10 < uVar3) {
        uVar10 = uVar3;
      }
    } while (iVar12 != 0);
    uVar10 = uVar10 + 4;
    do {
      if (iVar13 == 1) {
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else {
          pcVar5 = stdout->_IO_write_base;
          if (pcVar5 < stdout->_IO_buf_base) {
            stdout->_IO_write_base = pcVar5 + 1;
            *pcVar5 = '\n';
          }
          else {
            __fputc_unlocked(10,stdout);
          }
        }
        fputs((char *)piVar7[4],stdout);
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else {
          pcVar5 = stdout->_IO_write_base;
          if (pcVar5 < stdout->_IO_buf_base) {
            stdout->_IO_write_base = pcVar5 + 1;
            *pcVar5 = '\n';
          }
          else {
            __fputc_unlocked(10);
          }
        }
      }
      else {
        uVar3 = fprintf(stdout,"    ");
        if ((char)piVar7[1] == '\0') {
          if (piVar7[2] != 0) goto LAB_0001155c;
LAB_00011574:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_000116d0;
LAB_00011580:
          if (iVar13 == 5) {
            iVar13 = fprintf(stdout,"=<flt>");
            uVar3 = uVar3 + iVar13;
          }
          else if (iVar13 == 6) {
            iVar13 = fprintf(stdout,"=<str>");
            uVar3 = uVar3 + iVar13;
          }
        }
        else {
          iVar13 = fprintf(stdout,"-%c");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] == 0) goto LAB_00011574;
          if ((char)piVar7[1] == '\0') {
LAB_0001155c:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_00011574;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_0001155c;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_00011580;
LAB_000116d0:
          iVar13 = fprintf(stdout,"=<int>");
          uVar3 = uVar3 + iVar13;
        }
        if (uVar10 < uVar3) {
          uVar3 = uVar10;
          if (stdout->_chain == (_IO_FILE *)0x0) {
            fputc(10,stdout);
          }
          else {
            pcVar5 = stdout->_IO_write_base;
            if (pcVar5 < stdout->_IO_buf_base) {
              stdout->_IO_write_base = pcVar5 + 1;
              *pcVar5 = '\n';
            }
            else {
              __fputc_unlocked(10);
            }
          }
        }
        else {
          uVar3 = uVar10 - uVar3;
        }
        fprintf(stdout,"%*s%s\n",uVar3 + 2,"",piVar7[4]);
      }
      piVar7 = piVar7 + 8;
      iVar13 = *piVar7;
    } while (iVar13 != 0);
  }
  if (param_1[4] != 0) {
    fprintf(stdout,"%s\n");
  }
  return 0;
}



/* ===== argparse_parse @ 0001179c size=892 ===== */

void argparse_parse(int *param_1,int param_2,int param_3)

{
  char cVar1;
  void *__dest;
  size_t __n;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char cVar8;
  undefined4 *__src;
  uint *puVar9;
  char *pcVar10;
  int *piVar11;
  char *__s;
  char *__s1;
  
  __src = (undefined4 *)(param_3 + 4);
  puVar9 = (uint *)*param_1;
  param_2 = param_2 + -1;
  param_1[7] = param_3;
  param_1[6] = (int)__src;
  uVar4 = *puVar9;
  param_1[5] = param_2;
  if (uVar4 != 0) {
    do {
      while (6 < uVar4) {
        fprintf(stderr,"wrong option type: %d");
        puVar9 = puVar9 + 8;
        uVar4 = *puVar9;
        if (uVar4 == 0) goto LAB_000117fc;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_000117fc:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x00011808:
  if (param_2 == 0) {
    __dest = (void *)(param_1[7] + param_1[8] * 4);
  }
  else {
    pcVar10 = (char *)*__src;
    if ((*pcVar10 == '-') && (pcVar10[1] != '\0')) {
      if (pcVar10[1] != '-') {
        piVar11 = (int *)*param_1;
        param_1[9] = (int)(pcVar10 + 1);
        if (*piVar11 != 0) {
          cVar1 = (char)piVar11[1];
          while (cVar1 != pcVar10[1]) {
            if (piVar11[8] == 0) goto LAB_000119c0;
            cVar1 = (char)piVar11[9];
            piVar11 = piVar11 + 8;
          }
          if (pcVar10[2] == '\0') {
            pcVar10 = (char *)0x0;
          }
          else {
            pcVar10 = pcVar10 + 2;
          }
          param_1[9] = (int)pcVar10;
          while (iVar5 = FUN_000110dc(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_0001194c;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_00011ab8;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_00011ab8;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_000110dc(param_1);
              if (iVar5 == -2) goto LAB_00011ab8;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_00011ab8:
          pcVar10 = *(char **)param_1[6];
          goto LAB_000119c4;
        }
        goto LAB_000119c0;
      }
      cVar1 = pcVar10[2];
      if (cVar1 != '\0') {
        piVar11 = (int *)*param_1;
        iVar5 = *piVar11;
        if (iVar5 != 0) {
          __s1 = pcVar10 + 2;
          do {
            __s = (char *)piVar11[2];
            if (__s != (char *)0x0) {
              __n = strlen(__s);
              iVar2 = strncmp(__s1,__s,__n);
              if ((iVar2 == 0) && (pcVar3 = __s1 + __n, pcVar3 != (char *)0x0)) {
                uVar6 = 2;
LAB_00011918:
                if (*pcVar3 == '\0') goto LAB_00011934;
                if (*pcVar3 == '=') goto code_r0x0001192c;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_00011b18;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_0001196c;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_00011918;
                }
              }
            }
LAB_0001196c:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_000119c4;
      }
      param_2 = param_2 + -1;
      __src = __src + 1;
      param_1[5] = param_2;
      param_1[6] = (int)__src;
      __dest = (void *)(param_1[7] + param_1[8] * 4);
    }
    else {
      iVar5 = param_1[8];
      __dest = (void *)(param_1[7] + iVar5 * 4);
      if ((param_1[2] & 1U) == 0) {
        param_1[8] = iVar5 + 1;
        *(char **)(param_1[7] + iVar5 * 4) = pcVar10;
        goto LAB_00011840;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x0001192c:
  param_1[9] = (int)(pcVar3 + 1);
LAB_00011934:
  iVar5 = FUN_000110dc(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_000119c0:
    pcVar10 = (char *)*__src;
LAB_000119c4:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_0001194c:
  param_2 = param_1[5];
LAB_00011840:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x00011808;
}



/* ===== argparse_help_cb @ 00011b1c size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== _fini @ 00011b2c size=16 ===== */

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



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 00024004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AMIX_SetControl @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AMIX_SetControl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AMIX_GetControl @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AMIX_GetControl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AMIX_ListControls @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AMIX_ListControls(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_AMIX_ListContents @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_AMIX_ListContents(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


