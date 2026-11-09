// ts_harvest — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010980 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::ioctl @ 000109a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002300c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000109b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00023010)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 000109bc size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00023014)();
  return;
}



/* ===== <EXTERNAL>::munmap @ 000109c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00023018)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 000109d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002301c)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::usleep @ 000109e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00023020)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::qsort @ 000109ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_00023024)(__base);
  return;
}



/* ===== <EXTERNAL>::ts_close @ 000109f8 size=12 ===== */

void ts_close(void)

{
  (*(code *)PTR_ts_close_00023028)();
  return;
}



/* ===== <EXTERNAL>::perror @ 00010a04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002302c)(__s);
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010a10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023030)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010a1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00023034)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::mmap @ 00010a28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap_00023038)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::abort @ 00010a34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002303c)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010a40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023040)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_read @ 00010a4c size=12 ===== */

void ts_read(void)

{
  (*(code *)PTR_ts_read_00023044)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010a58 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023048)();
  return;
}



/* ===== <EXTERNAL>::ts_read_raw @ 00010a64 size=12 ===== */

void ts_read_raw(void)

{
  (*(code *)PTR_ts_read_raw_0002304c)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00010a70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00023050)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::read @ 00010a7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00023054)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fopen @ 00010a94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0002305c)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 00010aa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00023060)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00010aac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00023064)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_fd @ 00010ab8 size=12 ===== */

void ts_fd(void)

{
  (*(code *)PTR_ts_fd_00023068)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010ac4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002306c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010ad0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00023070)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_setup @ 00010adc size=12 ===== */

void ts_setup(void)

{
  (*(code *)PTR_ts_setup_00023074)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00010ae8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023078)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::tslib_version @ 00010af4 size=12 ===== */

void tslib_version(void)

{
  (*(code *)PTR_tslib_version_0002307c)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010b00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00023080)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010b0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00023084)(__status);
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010b18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00023088)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 00010b24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0002308c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010b30 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00023090)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00023094)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00010b48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00023098)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010b54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002309c)(__ptr);
  return;
}



/* ===== entry @ 0001111c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00023058)
            (DAT_00011150,param_2,&stack0x00000004,DAT_00011154,DAT_0001114c,param_1);
  return;
}



/* ===== FUN_00011158 @ 00011158 size=32 ===== */

void FUN_00011158(void)

{
  if (DAT_0001117c == DAT_00011178) {
    return;
  }
  if (DAT_00011180 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011180)();
  return;
}



/* ===== _FINI_0 @ 000111bc size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000111f8;
  if (*DAT_000111f8 != '\0') {
    return;
  }
  FUN_00011158();
  if (DAT_000111fc != 0) {
    __deregister_frame_info(DAT_00011200);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011204 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011228 != 0) {
    __register_frame_info(DAT_00011230,DAT_0001122c);
  }
  if ((DAT_000111b4 - DAT_000111b0 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000111b8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000111ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000111b8)();
  return;
}



/* ===== FUN_00011234 @ 00011234 size=76 ===== */

void FUN_00011234(undefined4 param_1)

{
  int iVar1;
  
  FUN_00011dac();
  iVar1 = DAT_00011280 + 0x11250;
  fflush((FILE *)**(undefined4 **)(iVar1 + DAT_00011284));
  printf((char *)(DAT_00011288 + 0x11268),param_1);
  fflush((FILE *)**(undefined4 **)(iVar1 + DAT_0001128c));
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011290 @ 00011290 size=76 ===== */

void FUN_00011290(void)

{
  FUN_00012650(0,0,**(int **)(DAT_000112dc + 0x112a4 + DAT_000112e4) + -1,
               **(int **)(DAT_000112dc + 0x112a4 + DAT_000112e0) + -1,0);
  return;
}



/* ===== FUN_000112e8 @ 000112e8 size=120 ===== */

void FUN_000112e8(int param_1,int param_2)

{
  FUN_000122ac(param_1 + -10,param_2,param_1 + -2,param_2,0x80000002);
  FUN_000122ac(param_1 + 2,param_2,param_1 + 10,param_2,0x80000002);
  FUN_000122ac(param_1,param_2 + -10,param_1,param_2 + -2,0x80000002);
  FUN_000122ac(param_1,param_2 + 2,param_1,param_2 + 10,0x80000002);
  return;
}



/* ===== FUN_00011380 @ 00011380 size=176 ===== */

void FUN_00011380(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1[5] & 1U) == 0) {
    uVar1 = 2;
    uVar2 = 4;
  }
  else {
    uVar1 = 0;
    uVar2 = 5;
  }
  FUN_000125d4(*param_1,param_1[1],*param_1 + param_1[2],param_1[1] + param_1[3],1);
  FUN_00012650(*param_1 + 1,param_1[1] + 1,*param_1 + param_1[2] + -2,param_1[1] + param_1[3] + -2,
               uVar2);
  FUN_00012250(*param_1 + param_1[2] / 2,param_1[1] + param_1[3] / 2,param_1[4],uVar1);
  return;
}



/* ===== FUN_00011430 @ 00011430 size=188 ===== */

uint FUN_00011430(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1[5];
  uVar1 = uVar2 & 1;
  if ((((param_2 < *param_1) || (param_3 < param_1[1])) || (*param_1 + param_1[2] <= param_2)) ||
     (param_1[1] + param_1[3] <= param_3)) {
    if (param_4 != 0) {
      if (uVar1 == 0) {
        return 0;
      }
      param_1[5] = uVar2 & 0xfffffffe;
      FUN_00011380(param_1);
      return 0;
    }
  }
  else if (param_4 != 0) {
    if (uVar1 == 0) {
      param_1[5] = uVar2 | 1;
      FUN_00011380();
      return 0;
    }
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  param_1[5] = uVar2 & 0xfffffffe;
  FUN_00011380(param_1);
  return uVar1;
}



/* ===== FUN_000114ec @ 000114ec size=456 ===== */

void FUN_000114ec(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint __nmemb;
  int local_a34 [645];
  
  do {
    iVar1 = ts_read_raw(param_1,local_a34 + 5,1);
    if (iVar1 < 0) goto LAB_0001169c;
  } while (local_a34[7] == 0);
  __nmemb = 0;
  do {
    if ((int)__nmemb < 0x7f) {
      __nmemb = __nmemb + 1;
    }
    iVar1 = ts_read_raw(param_1,local_a34 + __nmemb * 5 + 5,1);
    if (iVar1 < 0) {
LAB_0001169c:
      perror((char *)(DAT_000116c8 + 0x116a8));
      FUN_00011dac();
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  } while (local_a34[__nmemb * 5 + 7] != 0);
  iVar1 = (int)__nmemb >> 1;
  printf((char *)(DAT_000116b4 + 0x1157c),__nmemb);
  if (param_2 == (int *)0x0) {
    if (param_3 == (int *)0x0) {
      return;
    }
    qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_000116c4 + 0x1168c));
    if ((__nmemb & 1) == 0) goto LAB_0001163c;
  }
  else {
    qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_000116b8 + 0x1159c));
    if ((__nmemb & 1) == 0) {
      *param_2 = (local_a34[(iVar1 + -1) * 5 + 5] + local_a34[iVar1 * 5 + 5]) / 2;
      if (param_3 == (int *)0x0) {
        return;
      }
      qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_000116c0 + 0x1163c));
LAB_0001163c:
      *param_3 = (local_a34[(iVar1 + -1) * 5 + 6] + local_a34[iVar1 * 5 + 6]) / 2;
      return;
    }
    *param_2 = local_a34[iVar1 * 5 + 5];
    if (param_3 == (int *)0x0) {
      return;
    }
    qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_000116bc + 0x115d4));
  }
  *param_3 = local_a34[iVar1 * 5 + 6];
  return;
}



/* ===== FUN_000116cc @ 000116cc size=228 ===== */

void FUN_000116cc(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_a20 [640];
  
  do {
    iVar1 = ts_read(param_1,aiStack_a20,1);
    if (iVar1 < 0) goto LAB_00011798;
  } while (aiStack_a20[2] == 0);
  iVar1 = 0;
  while( true ) {
    if (iVar1 < 0x7f) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = ts_read(param_1,aiStack_a20 + iVar1 * 5,1);
    if (iVar2 < 0) break;
    if (aiStack_a20[iVar1 * 5 + 2] == 0) {
      printf((char *)(DAT_000117b0 + 0x11758),iVar1);
      if (param_2 != (int *)0x0) {
        *param_2 = aiStack_a20[(iVar1 + -1) * 5];
      }
      if (param_3 != (int *)0x0) {
        *param_3 = aiStack_a20[(iVar1 + -1) * 5 + 1];
      }
      return;
    }
  }
LAB_00011798:
  perror((char *)(DAT_000117b4 + 0x117a4));
  FUN_00011dac();
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000117b8 @ 000117b8 size=76 ===== */

void FUN_000117b8(void)

{
  int __fd;
  ssize_t sVar1;
  
  __fd = ts_fd();
  sVar1 = read(__fd,(void *)(DAT_00011804 + 0x117d0),0x8000);
  if (sVar1 != -1) {
    return;
  }
  fwrite((void *)(DAT_00011810 + 0x117fc),1,0x14,
         (FILE *)**(undefined4 **)(DAT_00011808 + 0x117dc + DAT_0001180c));
  return;
}



/* ===== FUN_00011814 @ 00011814 size=28 ===== */

void FUN_00011814(void)

{
  undefined4 uVar1;
  
  uVar1 = tslib_version();
  printf((char *)((int)&DAT_00011830 + DAT_00011830),uVar1);
  return;
}



/* ===== FUN_00011834 @ 00011834 size=204 ===== */

void FUN_00011834(int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00011900 + 0x11844;
  iVar2 = *(int *)(DAT_00011908 + 0x11854);
  iVar4 = *(int *)(DAT_00011908 + 0x11858);
  cVar1 = **(char **)(iVar3 + DAT_00011904);
  if (cVar1 == '\x02') {
    *param_3 = iVar4 * ((**(int **)(iVar3 + DAT_00011910) + -1) - param_1) +
               *(int *)(iVar2 + ((**(int **)(iVar3 + DAT_0001190c) + 0x3fffffff) - param_2) * 4);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x01') {
      *param_3 = iVar4 * param_1 + *(int *)(iVar2 + param_2 * 4);
      return;
    }
    *param_3 = iVar4 * ((**(int **)(iVar3 + DAT_0001190c) + -1) - param_2) +
               *(int *)(iVar2 + param_1 * 4);
    return;
  }
  *param_3 = iVar4 * param_2 +
             *(int *)(iVar2 + ((**(int **)(iVar3 + DAT_00011910) + 0x3fffffff) - param_1) * 4);
  return;
}



/* ===== FUN_00011914 @ 00011914 size=1048 ===== */

undefined4 FUN_00011914(void)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *__s;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int extraout_r1;
  undefined4 uVar10;
  void *extraout_r3;
  void *pvVar11;
  int iVar12;
  undefined4 *puVar13;
  char *__format;
  undefined4 local_a4;
  ushort local_a0 [4];
  char acStack_98 [128];
  
  iVar12 = DAT_00011d30;
  pcVar1 = getenv((char *)(DAT_00011d2c + 0x11924));
  iVar12 = iVar12 + 0x11934;
  if (pcVar1 == (char *)0x0) {
    *(int *)(DAT_00011d70 + 0x11c10) = DAT_00011d74 + 0x11c0c;
  }
  else {
    *(char **)(DAT_00011d34 + 0x1194c) = pcVar1;
  }
  pcVar1 = getenv((char *)(DAT_00011d38 + 0x11950));
  iVar2 = DAT_00011d3c;
  *(char **)(DAT_00011d3c + 0x11968) = pcVar1;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)(DAT_00011d6c + 0x11bf4);
    *(char **)(iVar2 + 0x11968) = pcVar1;
  }
  else {
    iVar2 = strcmp(pcVar1,(char *)(DAT_00011d40 + 0x11974));
    if (iVar2 == 0) goto LAB_00011a7c;
    sVar3 = strlen(pcVar1);
    if (0x7f < sVar3) {
      return 0xffffffff;
    }
  }
  __format = (char *)(DAT_00011d44 + 0x119a4);
  sprintf(acStack_98,__format,pcVar1,1);
  iVar2 = open(acStack_98,1);
  if (iVar2 < 0) {
    perror((char *)(DAT_00011d88 + 0x11c78));
    return 0xffffffff;
  }
  iVar4 = ioctl(iVar2,0x5600,&local_a4);
  iVar5 = DAT_00011d48;
  if (iVar4 < 0) {
    close(iVar2);
    perror((char *)(DAT_00011d8c + 0x11c94));
    return 0xffffffff;
  }
  close(iVar2);
  sprintf(acStack_98,__format,*(undefined4 *)(iVar5 + 0x119f8),local_a4);
  iVar2 = open(acStack_98,0x802);
  *(int *)(iVar5 + 0x119fc) = iVar2;
  if (iVar2 < 0) {
    perror((char *)(DAT_00011d90 + 0x11ca8));
    return 0xffffffff;
  }
  iVar5 = ioctl(iVar2,0x5603,local_a0);
  if (iVar5 == 0) {
    *(uint *)(DAT_00011d4c + 0x11a34) = (uint)local_a0[0];
  }
  iVar5 = ioctl(iVar2,0x5606,local_a4);
  if (iVar5 < 0) {
    perror((char *)(DAT_00011d94 + 0x11cbc));
    close(*(int *)(DAT_00011d98 + 0x11cd8));
    return 0xffffffff;
  }
  iVar5 = ioctl(iVar2,0x5607,local_a4);
  if (iVar5 < 0) {
    perror((char *)(DAT_00011d9c + 0x11ce0));
    close(*(int *)(DAT_00011da0 + 0x11cfc));
    return 0xffffffff;
  }
  iVar2 = ioctl(iVar2,0x4b3a,1);
  if (iVar2 < 0) {
    perror((char *)(DAT_00011d78 + 0x11c20));
    close(*(int *)(DAT_00011d7c + 0x11c3c));
    return 0xffffffff;
  }
LAB_00011a7c:
  iVar2 = DAT_00011d50;
  iVar5 = open(*(char **)(DAT_00011d50 + 0x11a94),2);
  *(int *)(iVar2 + 0x11aa0) = iVar5;
  if (iVar5 == -1) {
    perror((char *)(DAT_00011d84 + 0x11c64));
    uVar9 = 0xffffffff;
  }
  else {
    iVar4 = ioctl(iVar5,0x4602,iVar2 + 0x11aa4);
    if (iVar4 < 0) {
      uVar9 = 0xffffffff;
      perror((char *)(DAT_00011d80 + 0x11c4c));
      close(*(int *)(iVar2 + 0x11aa0));
    }
    else {
      iVar6 = ioctl(iVar5,0x4600,iVar2 + 0x11ae8);
      iVar4 = DAT_00011d58;
      if (iVar6 < 0) {
        uVar9 = 0xffffffff;
        perror((char *)(DAT_00011da8 + 0x11d20));
        close(*(int *)(iVar2 + 0x11aa0));
      }
      else {
        uVar9 = *(undefined4 *)(iVar2 + 0x11ae8);
        uVar10 = *(undefined4 *)(iVar2 + 0x11aec);
        **(undefined4 **)(iVar12 + DAT_00011d54) = uVar9;
        iVar2 = DAT_00011d5c;
        **(undefined4 **)(iVar12 + iVar4) = uVar10;
        iVar6 = DAT_00011d64;
        iVar4 = DAT_00011d60;
        if ((**(byte **)(iVar12 + iVar2) & 1) == 0) {
          **(undefined4 **)(iVar12 + DAT_00011d60) = uVar9;
          **(undefined4 **)(iVar12 + iVar6) = uVar10;
        }
        else {
          **(undefined4 **)(iVar12 + DAT_00011d64) = uVar9;
          **(undefined4 **)(iVar12 + iVar4) = uVar10;
        }
        iVar12 = DAT_00011d68;
        puVar13 = (undefined4 *)(DAT_00011d68 + 0x11b30);
        __s = mmap((void *)0x0,*(size_t *)(DAT_00011d68 + 0x11b5c),3,1,iVar5,0);
        *(void **)(iVar12 + 0x11c2c) = __s;
        if (__s == (void *)0xffffffff) {
          perror((char *)(DAT_00011da4 + 0x11d04));
          close(*(int *)(iVar12 + 0x11b44));
          uVar9 = 0xffffffff;
        }
        else {
          memset(__s,0,*(size_t *)(iVar12 + 0x11b5c));
          iVar5 = *(int *)(iVar12 + 0x11b98);
          *(uint *)(iVar12 + 0x11b34) = *(int *)(iVar12 + 0x11ba4) + 7U >> 3;
          *(int *)(iVar12 + 0x11c30) =
               ~(-1 << (*(uint *)(iVar12 + 0x11bd4) & 0xff)) << (*(uint *)(iVar12 + 0x11bd0) & 0xff)
          ;
          puVar7 = malloc(iVar5 * 4);
          pvVar11 = extraout_r3;
          iVar2 = extraout_r1;
          if (iVar5 != 0) {
            iVar2 = *(int *)(iVar12 + 0x11b74);
            pvVar11 = __s;
          }
          *puVar13 = puVar7;
          if (iVar5 != 0) {
            puVar13 = puVar7;
            do {
              puVar8 = puVar13 + 1;
              *puVar13 = pvVar11;
              pvVar11 = (void *)((int)pvVar11 + iVar2);
              puVar13 = puVar8;
            } while (puVar7 + iVar5 != puVar8);
          }
          uVar9 = 0;
        }
      }
    }
  }
  return uVar9;
}



/* ===== FUN_00011dac @ 00011dac size=260 ===== */

void FUN_00011dac(void)

{
  void *__addr;
  int iVar1;
  int iVar2;
  int iVar3;
  int __fd;
  
  iVar2 = DAT_00011eb0;
  iVar3 = DAT_00011eb4 + 0x11dc8;
  __addr = memset(*(void **)((int)&DAT_00011ec0 + DAT_00011eb0),0,
                  *(size_t *)(DAT_00011eb0 + 0x11df0));
  munmap(__addr,*(size_t *)(iVar2 + 0x11df0));
  close(*(int *)(iVar2 + 0x11dd8));
  iVar1 = strcmp(*(char **)(iVar2 + 0x11dd0),(char *)(DAT_00011eb8 + 0x11df4));
  if (iVar1 != 0) {
    __fd = *(int *)(iVar2 + 0x11dd4);
    iVar1 = ioctl(__fd,0x4b3a,0);
    if (iVar1 < 0) {
      perror((char *)(DAT_00011ed8 + 0x11ea8));
      __fd = *(int *)(iVar2 + 0x11dd4);
    }
    if ((-1 < *(int *)(DAT_00011ecc + 0x11e5c)) && (iVar2 = ioctl(__fd,0x5606), iVar2 != 0)) {
      perror((char *)(DAT_00011ed0 + 0x11e8c));
      __fd = *(int *)(DAT_00011ed4 + 0x11ea8);
    }
    close(__fd);
  }
  free(*(void **)(DAT_00011ebc + 0x11e08));
  iVar1 = DAT_00011ec8;
  iVar2 = DAT_00011ec4;
  **(undefined4 **)(iVar3 + DAT_00011ec0) = 0;
  **(undefined4 **)(iVar3 + iVar2) = 0;
  **(undefined1 **)(iVar3 + iVar1) = 0;
  return;
}



/* ===== FUN_00011edc @ 00011edc size=264 ===== */

void FUN_00011edc(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ushort local_2e;
  ushort local_2c;
  undefined2 local_2a;
  uint local_28 [2];
  ushort *local_20;
  ushort *local_1c;
  undefined2 *local_18;
  undefined4 local_14;
  
  if (0xff < param_1) {
    return;
  }
  if (*(int *)(DAT_00011fe4 + 0x11efc) - 2U < 3) {
    uVar2 = ((int)((param_2 & 0xffffff) >> 8 & 0xff) >>
            (8U - *(int *)(DAT_00011fe4 + 0x11f84) & 0xff)) <<
            (*(uint *)(DAT_00011fe4 + 0x11f80) & 0xff) |
            ((int)((param_2 & 0xffffff) >> 0x10) >> (8U - *(int *)(DAT_00011fe4 + 0x11f78) & 0xff))
            << (*(uint *)(DAT_00011fe4 + 0x11f74) & 0xff) |
            ((int)(param_2 & 0xff) >> (8U - *(int *)(DAT_00011fe4 + 0x11f90) & 0xff)) <<
            (*(uint *)(DAT_00011fe4 + 0x11f8c) & 0xff);
  }
  else {
    local_2e = (ushort)(param_2 >> 8) & 0xff00;
    local_2c = (ushort)param_2 & 0xff00;
    local_2a = (undefined2)((param_2 & 0xffff) << 8);
    local_28[1] = 1;
    local_20 = &local_2e;
    local_1c = &local_2c;
    local_18 = &local_2a;
    local_14 = 0;
    local_28[0] = param_1;
    iVar1 = ioctl(*(int *)(DAT_00011fe4 + 0x11f0c),0x4605,local_28);
    uVar2 = param_1;
    if (iVar1 < 0) {
      perror((char *)(DAT_00011fec + 0x11fdc));
    }
  }
  *(uint *)(DAT_00011fe8 + param_1 * 4 + 0x12068) = uVar2;
  return;
}



/* ===== FUN_00011ff0 @ 00011ff0 size=364 ===== */

void FUN_00011ff0(uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  byte extraout_r12;
  bool bVar9;
  uint *local_c;
  
  if (-1 < (int)param_1) {
    if (((param_1 < **(uint **)(DAT_0001215c + 0x12000 + DAT_00012160) && -1 < (int)param_2) &&
        (param_2 < **(uint **)(DAT_0001215c + 0x12000 + DAT_00012164))) &&
       ((param_3 & 0x7fffff00) == 0)) {
      FUN_00011834(param_1,param_2,&local_c);
      iVar4 = *(int *)(DAT_00012168 + 0x12078);
      uVar8 = *(uint *)((int)&DAT_00012178 + DAT_00012168 + param_3 * 4);
      bVar6 = (byte)uVar8;
      if (iVar4 == 3) {
        bVar9 = (int)param_3 < 0;
        bVar3 = (byte)(uVar8 >> 8);
        bVar2 = (byte)(uVar8 >> 0x10);
        bVar1 = extraout_r12;
        if (bVar9) {
          bVar1 = (byte)*local_c;
          bVar3 = bVar3 ^ *(byte *)((int)local_c + 1);
        }
        *(byte *)((int)local_c + 1) = bVar3;
        iVar4 = DAT_00012170;
        if (bVar9) {
          bVar2 = bVar2 ^ bVar1;
          *(byte *)local_c = bVar2;
          bVar6 = bVar6 ^ *(byte *)((int)local_c + 2);
        }
        *(byte *)((int)local_c + 2) = bVar6;
        uVar5 = *(undefined4 *)(iVar4 + 0x121f0);
        if (!bVar9) {
          *(byte *)local_c = bVar2;
        }
        *(byte *)((int)local_c + 2) = *(byte *)((int)local_c + 2) | (byte)uVar5;
      }
      else if (iVar4 == 4) {
        if ((int)param_3 < 0) {
          uVar8 = uVar8 ^ *local_c;
        }
        *local_c = *(uint *)(FUN_00012250 + DAT_00012178) | uVar8;
      }
      else if (iVar4 == 2) {
        uVar7 = (ushort)uVar8;
        if ((int)param_3 < 0) {
          uVar7 = uVar7 ^ (ushort)*local_c;
        }
        *(ushort *)local_c = uVar7 | (ushort)*(undefined4 *)(DAT_00012174 + 0x1222c);
      }
      else {
        if ((int)param_3 < 0) {
          bVar6 = bVar6 ^ (byte)*local_c;
        }
        *(byte *)local_c = bVar6 | (byte)*(undefined4 *)(DAT_0001216c + 0x121b0);
      }
    }
    return;
  }
  return;
}



/* ===== FUN_00012250 @ 00012250 size=288 ===== */

void FUN_00012250(int param_1,int param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  sVar2 = strlen((char *)param_3);
  iVar9 = *(int *)(DAT_000122a4 + 0x12280 + DAT_000122a8);
  iVar8 = *(int *)(iVar9 + 0xc);
  param_1 = param_1 - *(int *)(iVar9 + 8) * (sVar2 >> 1);
  uVar7 = (uint)*param_3;
  if (uVar7 != 0) {
    iVar5 = *(int *)(DAT_00012248 + 0x1219c + DAT_0001224c);
    iVar9 = *(int *)(iVar5 + 8);
    do {
      iVar3 = *(int *)(iVar5 + 0xc);
      if (0 < iVar3) {
        iVar4 = 0;
        do {
          bVar6 = *(byte *)(iVar3 * uVar7 + *(int *)(iVar5 + 0x10) + iVar4);
          if (0 < iVar9) {
            iVar3 = 0;
            do {
              while (bVar1 = bVar6 & 0x80, bVar6 = bVar6 << 1, bVar1 != 0) {
                iVar9 = iVar3 + param_1;
                iVar3 = iVar3 + 1;
                FUN_00011ff0(iVar9,iVar4 + (param_2 - iVar8 / 2),param_4);
                iVar9 = *(int *)(iVar5 + 8);
                if (iVar9 <= iVar3) goto LAB_00012220;
              }
              iVar9 = *(int *)(iVar5 + 8);
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar9);
          }
LAB_00012220:
          iVar3 = *(int *)(iVar5 + 0xc);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
      param_3 = param_3 + 1;
      uVar7 = (uint)*param_3;
      param_1 = param_1 + iVar9;
    } while (uVar7 != 0);
  }
  return;
}



/* ===== FUN_000122ac @ 000122ac size=256 ===== */

void FUN_000122ac(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_3 - param_1;
  uVar1 = param_4 - param_2;
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
      (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
    iVar3 = param_2;
    if (param_4 < param_2) {
      uVar5 = param_1 - param_3;
      uVar1 = param_2 - param_4;
      param_1 = param_3;
      iVar3 = param_4;
      param_4 = param_2;
    }
    iVar2 = FUN_000128a8(uVar5 << 0x10,uVar1);
    param_1 = param_1 << 0x10;
    do {
      iVar4 = iVar3 + 1;
      FUN_00011ff0(param_1 >> 0x10,iVar3,param_5);
      param_1 = param_1 + iVar2;
      iVar3 = iVar4;
    } while (iVar4 <= param_4);
    return;
  }
  if (param_3 < param_1) {
    uVar1 = param_2 - param_4;
    param_4 = param_4 << 0x10;
    uVar5 = param_1 - param_3;
    iVar3 = param_1;
    param_1 = param_3;
  }
  else {
    param_4 = param_2 << 0x10;
    iVar3 = param_3;
    if (uVar5 == 0) goto LAB_00012378;
  }
  uVar5 = FUN_000128a8(uVar1 << 0x10,uVar5);
  param_3 = iVar3;
LAB_00012378:
  do {
    iVar3 = param_1 + 1;
    FUN_00011ff0(param_1,param_4 >> 0x10,param_5);
    param_4 = param_4 + uVar5;
    param_1 = iVar3;
  } while (iVar3 <= param_3);
  return;
}



/* ===== FUN_000123ac @ 000123ac size=544 ===== */

void FUN_000123ac(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_000125cc;
  FUN_000122ac(param_1 + -10,param_2,param_1 + -2,param_2,param_3);
  FUN_000122ac(param_1 + 2,param_2,param_1 + 10,param_2,param_3);
  FUN_000122ac(param_1,param_2 + -10,param_1,param_2 + -2,param_3);
  FUN_000122ac(param_1,param_2 + 2,param_1,param_2 + 10,param_3);
  cVar1 = **(char **)(iVar2 + 0x1242c + DAT_000125d0);
  if (cVar1 == '\0') {
    iVar3 = param_1 + -9;
    iVar2 = param_2 + -9;
    param_3 = param_3 + 1;
    iVar5 = param_2 + 9;
    FUN_000122ac(param_1 + -6,iVar2,iVar3,iVar2,param_3);
    FUN_000122ac(iVar3,param_2 + -8,iVar3,param_2 + -6,param_3);
    iVar4 = param_1 + 9;
    FUN_000122ac(iVar3,param_2 + 6,iVar3,iVar5,param_3);
    FUN_000122ac(param_1 + -8,iVar5,param_1 + -6,iVar5,param_3);
    FUN_000122ac(param_1 + 6,iVar5,iVar4,iVar5,param_3);
    FUN_000122ac(iVar4,param_2 + 8,iVar4,param_2 + 6,param_3);
    FUN_000122ac(iVar4,param_2 + -6,iVar4,iVar2,param_3);
    FUN_000122ac(param_1 + 8,iVar2,param_1 + 6,iVar2,param_3);
    return;
  }
  if (cVar1 != '\x01') {
    return;
  }
  param_3 = param_3 + 1;
  FUN_000122ac(param_1 + -7,param_2 + -7,param_1 + -4,param_2 + -4,param_3);
  FUN_000122ac(param_1 + -7,param_2 + 7,param_1 + -4,param_2 + 4,param_3);
  FUN_000122ac(param_1 + 4,param_2 + -4,param_1 + 7,param_2 + -7,param_3);
  FUN_000122ac(param_1 + 4,param_2 + 4,param_1 + 7,param_2 + 7,param_3);
  return;
}



/* ===== FUN_000125d4 @ 000125d4 size=124 ===== */

void FUN_000125d4(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  FUN_000122ac();
  FUN_000122ac(param_3,param_2 + 1,param_3,param_4 + -1,param_5);
  FUN_000122ac(param_3,param_4,param_1,param_4,param_5);
  FUN_000122ac(param_1,param_4 + -1,param_1,param_2 + 1);
  return;
}



/* ===== FUN_00012650 @ 00012650 size=568 ===== */

void FUN_00012650(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  uint local_38;
  uint local_34;
  uint *local_2c [2];
  
  iVar6 = DAT_000128a4;
  iVar5 = DAT_000128a0;
  iVar4 = DAT_0001289c;
  iVar3 = DAT_00012898;
  uVar11 = param_1;
  if ((int)param_1 <= (int)param_3) {
    uVar11 = param_3;
    param_3 = param_1;
  }
  uVar11 = uVar11 & ~((int)uVar11 >> 0x1f);
  local_34 = param_2;
  if ((int)param_2 <= (int)param_4) {
    local_34 = param_4;
    param_4 = param_2;
  }
  uVar10 = **(uint **)(DAT_00012888 + 0x12664 + DAT_0001288c);
  local_38 = param_3 & ~((int)param_3 >> 0x1f);
  param_4 = param_4 & ~((int)param_4 >> 0x1f);
  local_34 = local_34 & ~((int)local_34 >> 0x1f);
  if (uVar10 <= local_38) {
    local_38 = uVar10 - 1;
  }
  if (uVar10 <= uVar11) {
    uVar11 = uVar10 - 1;
  }
  uVar10 = **(uint **)(DAT_00012888 + 0x12664 + DAT_00012890);
  if (uVar10 <= param_4) {
    param_4 = uVar10 - 1;
  }
  if (uVar10 <= local_34) {
    local_34 = uVar10 - 1;
  }
  bVar15 = SBORROW4(param_4,local_34);
  iVar13 = param_4 - local_34;
  bVar14 = param_4 == local_34;
  if ((int)param_4 <= (int)local_34) {
    bVar15 = SBORROW4(local_38,uVar11);
    iVar13 = local_38 - uVar11;
    bVar14 = local_38 == uVar11;
  }
  if ((bVar14 || iVar13 < 0 != bVar15) && ((param_5 & 0x7fffff00) == 0)) {
    iVar13 = *(int *)(DAT_00012894 + 0x12718);
    uVar12 = *(uint *)(DAT_00012894 + param_5 * 4 + 0x12818);
    bVar1 = (byte)(uVar12 >> 0x10);
    bVar2 = (byte)(uVar12 >> 8);
    uVar10 = local_38;
    do {
      FUN_00011834(uVar10,param_4,local_2c);
      bVar8 = (byte)uVar12;
      if (iVar13 == 3) {
        if ((int)param_5 < 0) {
          *(byte *)local_2c[0] = (byte)*local_2c[0] ^ bVar1;
          *(byte *)((int)local_2c[0] + 2) = bVar8 ^ *(byte *)((int)local_2c[0] + 2);
          *(byte *)((int)local_2c[0] + 1) = *(byte *)((int)local_2c[0] + 1) ^ bVar2;
        }
        else {
          *(byte *)((int)local_2c[0] + 2) = bVar8;
          *(byte *)local_2c[0] = bVar1;
          *(byte *)((int)local_2c[0] + 1) = bVar2;
        }
        *(byte *)((int)local_2c[0] + 2) =
             *(byte *)((int)local_2c[0] + 2) | (byte)*(undefined4 *)(iVar3 + 0x12820);
      }
      else if (iVar13 == 4) {
        uVar7 = uVar12;
        if ((int)param_5 < 0) {
          uVar7 = uVar12 ^ *local_2c[0];
        }
        *local_2c[0] = *(uint *)(iVar4 + 0x12828) | uVar7;
      }
      else if (iVar13 == 2) {
        uVar9 = (ushort)uVar12;
        if ((int)param_5 < 0) {
          uVar9 = uVar9 ^ (ushort)*local_2c[0];
        }
        *(ushort *)local_2c[0] = uVar9 | (ushort)*(undefined4 *)(iVar5 + 0x12838);
      }
      else {
        if ((int)param_5 < 0) {
          bVar8 = bVar8 ^ (byte)*local_2c[0];
        }
        *(byte *)local_2c[0] = bVar8 | (byte)*(undefined4 *)(iVar6 + 0x12854);
      }
      uVar10 = uVar10 + 1;
      local_2c[0] = (uint *)((int)local_2c[0] + iVar13);
    } while (((int)uVar10 <= (int)uVar11) ||
            (param_4 = param_4 + 1, uVar10 = local_38, (int)param_4 <= (int)local_34));
  }
  return;
}



/* ===== FUN_000128a8 @ 000128a8 size=236 ===== */

ulonglong FUN_000128a8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    uVar2 = raise(8);
    return (ulonglong)uVar2;
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
    return CONCAT44(uVar2,param_1);
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
    return CONCAT44(uVar2,param_1);
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return CONCAT44(uVar2,uVar4);
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
  return CONCAT44(uVar3,uVar1);
}



/* ===== _fini @ 000129b4 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002d004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002d014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002d018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002d01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002d020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002d024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0002d028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002d02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002d030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 0002d034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002d038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_version @ 0002d03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002d040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002d044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002d048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002d04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_fd @ 0002d050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_close @ 0002d054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_raw @ 0002d058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_raw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002d05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002d060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0002d064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_setup @ 0002d068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read @ 0002d06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002d070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002d074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002d078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0002d07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002d080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0002d084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0002d088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap @ 0002d08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0002d090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0002d094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002d098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002d09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002d0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


