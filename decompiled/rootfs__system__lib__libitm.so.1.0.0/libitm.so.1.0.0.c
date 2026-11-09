// libitm.so.1.0.0 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00013a58 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::qsort @ 00013a7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0002c00c)(__base);
  return;
}



/* ===== <EXTERNAL>::abort @ 00013a88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002c010)();
  return;
}



/* ===== <EXTERNAL>::realloc @ 00013a94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002c014)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_throw @ 00013aa0 size=12 ===== */

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_0002c018)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00013ab8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002c020)();
  return;
}



/* ===== <EXTERNAL>::memset @ 00013ac4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002c024)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::malloc @ 00013ad0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002c028)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::operator.delete @ 00013adc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,nothrow_t *param_2)

{
  (*(code *)PTR_operator_delete_0002c02c)(param_1);
  return;
}



/* ===== <EXTERNAL>::memmove @ 00013ae8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002c030)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::operator.new @ 00013af4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0002c034)(param_1);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00013b00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002c038)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::open @ 00013b0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0002c03c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00013b18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_0002c040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_setspecific @ 00013b24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setspecific_0002c044)(__key);
  return iVar1;
}



/* ===== <EXTERNAL>::operator.new @ 00013b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0002c048)(param_1);
  return pvVar1;
}



/* ===== <EXTERNAL>::operator.new[] @ 00013b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new__(uint param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___0002c04c)(param_1);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00013b48 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0002c050)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00013b54 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002c054)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00013b60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002c058)(__status);
  return;
}



/* ===== <EXTERNAL>::posix_memalign @ 00013b78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_posix_memalign_0002c060)(__memptr);
  return iVar1;
}



/* ===== <EXTERNAL>::_Unwind_DeleteException @ 00013b84 size=12 ===== */

void _Unwind_DeleteException(void)

{
  (*(code *)PTR__Unwind_DeleteException_0002c064)();
  return;
}



/* ===== <EXTERNAL>::__cxa_get_globals @ 00013b90 size=12 ===== */

void __cxa_get_globals(void)

{
  (*(code *)PTR___cxa_get_globals_0002c068)();
  return;
}



/* ===== <EXTERNAL>::close @ 00013b9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002c06c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 00013ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002c070)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::read @ 00013bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002c074)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::__cxa_allocate_exception @ 00013bc0 size=12 ===== */

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_0002c078)();
  return;
}



/* ===== <EXTERNAL>::__cxa_tm_cleanup @ 00013bd8 size=12 ===== */

void __cxa_tm_cleanup(void)

{
  (*(code *)PTR___cxa_tm_cleanup_0002c080)();
  return;
}



/* ===== <EXTERNAL>::operator.new[] @ 00013be4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new__(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___0002c084)(param_1);
  return pvVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00013bf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002c088)();
  return piVar1;
}



/* ===== <EXTERNAL>::fputs @ 00013c08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0002c090)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__assert @ 00013c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
  (*(code *)PTR___assert_0002c094)(__assertion);
  return;
}



/* ===== <EXTERNAL>::syscall @ 00013c20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_0002c098)(__sysno);
  return lVar1;
}



/* ===== <EXTERNAL>::free @ 00013c2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002c09c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::operator.delete[] @ 00013c38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete__(void *param_1,nothrow_t *param_2)

{
  (*(code *)PTR_operator_delete___0002c0a0)(param_1);
  return;
}



/* ===== <EXTERNAL>::strerror @ 00013c44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002c0a4)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::isspace @ 00013c50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isspace(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isspace_0002c0a8)(param_1);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 00013c5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002c0ac)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00013c68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002c0b0)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::pthread_once @ 00013c74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_once_0002c0b4)(__once_control);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_key_create @ 00013c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_create_0002c0b8)(__key);
  return iVar1;
}



/* ===== <EXTERNAL>::operator.delete @ 00013c8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,uint param_2,nothrow_t *param_3)

{
  (*(code *)PTR_operator_delete_0002c0bc)(param_1);
  return;
}



/* ===== _ITM_error @ 00013c98 size=8 ===== */

void processEntry _ITM_error(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== _INIT_1 @ 00013cb0 size=36 ===== */

void _INIT_1(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_00013cd8;
  puVar4 = (undefined4 *)(DAT_00013cd8 + 0x13cc4);
  uVar2 = *(undefined4 *)(DAT_00013cd4 + 0x13cc0);
  uVar3 = *(undefined4 *)(DAT_00013cd4 + 0x13cc4);
  *(undefined4 *)(DAT_00013cd8 + 0x13ccc) = 0;
  *puVar4 = uVar2;
  *(undefined4 *)(iVar1 + 0x13cc8) = uVar3;
  return;
}



/* ===== _INIT_2 @ 00013cdc size=32 ===== */

void _INIT_2(void)

{
  int iVar1;
  
  iVar1 = DAT_00013cfc;
  *(undefined4 *)(DAT_00013cfc + 0x13d2c) = 0;
  *(undefined4 *)(iVar1 + 0x13d30) = 0;
  *(undefined4 *)(iVar1 + 0x13d34) = 0;
  *(undefined4 *)(iVar1 + 0x13d38) = 0;
  return;
}



/* ===== _INIT_3 @ 00013d00 size=144 ===== */

void _INIT_3(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  iVar2 = DAT_00013d98;
  iVar1 = DAT_00013d90;
  piVar6 = (int *)(DAT_00013d90 + 0x13d14);
  *(undefined4 *)(DAT_00013d90 + 0x13d28) = DAT_00013d94;
  iVar3 = DAT_00013d9c;
  *(int *)(iVar1 + 0x13d24) = iVar2 + 0x13d28;
  uVar4 = DAT_00013da0;
  iVar5 = iVar3 + 0x13d38;
  *(int *)(iVar1 + 0x13d30) = iVar5;
  *(int *)(iVar1 + 0x13d20) = iVar5;
  *(int *)(iVar1 + 0x13d40) = iVar5;
  *(int *)(iVar1 + 0x13d50) = iVar3 + 0x13d3c;
  iVar3 = DAT_00013da4;
  *(undefined4 *)(iVar1 + 0x13d18) = uVar4;
  *(undefined4 *)(iVar1 + 0x13d1c) = 1;
  *piVar6 = iVar2 + 0x13e68;
  *(undefined4 *)(iVar1 + 0x13d2c) = 3;
  *(undefined4 *)(iVar1 + 0x13d38) = 0x100;
  *(undefined4 *)(iVar1 + 0x13d3c) = 0;
  *(int *)(iVar1 + 0x13d34) = iVar2 + 0x13fa8;
  *(undefined4 *)(iVar1 + 0x13d48) = 0x100;
  *(undefined4 *)(iVar1 + 0x13d4c) = 3;
  *(int *)(iVar1 + 0x13d44) = iVar3 + 0x13d68;
  return;
}



/* ===== _INIT_4 @ 00013da8 size=52 ===== */

void _INIT_4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = DAT_00013de0;
  iVar1 = DAT_00013ddc;
  piVar4 = (int *)(DAT_00013ddc + 0x13dbc);
  iVar3 = DAT_00013de0 + 0x13dc8;
  *(int **)(DAT_00013ddc + 0x13e48) = piVar4;
  *piVar4 = iVar3;
  *(int *)(iVar1 + 0x13e3c) = (int)&DAT_00013ddc + iVar2;
  *(undefined4 *)(iVar1 + 0x13e40) = 0x100;
  *(undefined4 *)(iVar1 + 0x13e44) = 0;
  return;
}



/* ===== _INIT_5 @ 00013de4 size=52 ===== */

void _INIT_5(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = DAT_00013e1c;
  iVar1 = DAT_00013e18;
  piVar4 = (int *)(DAT_00013e18 + 0x13df8);
  iVar3 = DAT_00013e1c + 0x13e04;
  *(int **)(DAT_00013e18 + 0x13ec4) = piVar4;
  *piVar4 = iVar3;
  *(int *)(iVar1 + 0x13eb8) = (int)&DAT_00013e18 + iVar2;
  *(undefined4 *)(iVar1 + 0x13ebc) = 0x100;
  *(undefined4 *)(iVar1 + 0x13ec0) = 0;
  return;
}



/* ===== _INIT_6 @ 00013e20 size=132 ===== */

void _INIT_6(void)

{
  int __fd;
  uint uVar1;
  uint uVar2;
  int local_1010 [1024];
  
  __fd = open((char *)(DAT_00013ea4 + 0x13e34),0);
  if (-1 < __fd) {
    uVar1 = read(__fd,local_1010,0x1000);
    close(__fd);
    if (-1 < (int)uVar1) {
      for (uVar2 = 0; uVar2 != uVar1 >> 3; uVar2 = uVar2 + 1) {
        if (local_1010[uVar2 * 2] == 0x10) {
          *(int *)(DAT_00013ea8 + 0x13e94) = local_1010[uVar2 * 2 + 1];
          return;
        }
      }
    }
  }
  return;
}



/* ===== FUN_00013eac @ 00013eac size=72 ===== */

void FUN_00013eac(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_00013ef8 + 0x13ec4 == DAT_00013ef4 + 0x13ebc) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(DAT_00013efc + 0x13ecc + DAT_00013f00);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00013ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00013f68 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00013fdc + 0x13f84;
  if (*(char *)(DAT_00013fd8 + 0x13f78) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00013fe0) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00013fe4 + 0x13fa4));
  }
  FUN_00013eac();
  if (*(int *)(iVar1 + DAT_00013fe8) != 0) {
    __deregister_frame_info(DAT_00013fec + 0x13fc4);
  }
  *(undefined1 *)(DAT_00013ff0 + 0x13fd4) = 1;
  return;
}



/* ===== _INIT_0 @ 00013ff4 size=140 ===== */

void _INIT_0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(DAT_0001402c + 0x14004 + DAT_00014030) != 0) {
    __register_frame_info(DAT_00014038 + 0x14024,DAT_00014034 + 0x14020);
  }
  if (((DAT_00013f5c + 0x13f1c) - (DAT_00013f58 + 0x13f14) >> 2) / 2 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(DAT_00013f60 + 0x13f24 + DAT_00013f64);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00013f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* ===== FUN_0001403c @ 0001403c size=44 ===== */

undefined4 * FUN_0001403c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1[2] != 0) {
    puVar1 = (undefined4 *)*param_1;
    if (param_1[2] == puVar1[2]) {
      *param_1 = puVar1[1];
      puVar1[1] = param_1;
      param_1 = puVar1;
    }
    return param_1;
  }
  return param_1;
}



/* ===== FUN_00014068 @ 00014068 size=64 ===== */

int * FUN_00014068(int *param_1)

{
  int *piVar1;
  
  if (param_1[2] == 0) {
    return param_1;
  }
  piVar1 = (int *)param_1[1];
  if (param_1[2] != *(int *)(piVar1[1] + 8)) {
    return param_1;
  }
  param_1[1] = *piVar1;
  *piVar1 = (int)param_1;
  piVar1[2] = piVar1[2] + 1;
  return piVar1;
}



/* ===== FUN_000140a8 @ 000140a8 size=56 ===== */

void FUN_000140a8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1[1] + 8);
  uVar2 = *(uint *)(*param_1 + 8);
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  uVar2 = uVar2 + 1;
  if ((uint)param_1[2] <= uVar2) {
    return;
  }
  param_1[2] = uVar2;
  if (uVar2 < uVar1) {
    *(uint *)(param_1[1] + 8) = uVar2;
  }
  return;
}



/* ===== FUN_0001412c @ 0001412c size=80 ===== */

void FUN_0001412c(int param_1,int param_2)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_2 + 0xc)) {
    iVar1 = 4;
  }
  else {
    iVar1 = 0;
  }
  if (*(int *)(param_1 + iVar1) != DAT_0001417c + 0x14158) {
    param_2 = FUN_0001412c();
  }
  *(int *)(param_1 + iVar1) = param_2;
  FUN_0001403c(param_1);
  FUN_00014068();
  return;
}



/* ===== FUN_00014180 @ 00014180 size=44 ===== */

void FUN_00014180(int *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 == 0) {
    *param_1 = param_2;
    return;
  }
  iVar1 = FUN_0001412c(*param_1);
  *param_1 = iVar1;
  return;
}



/* ===== FUN_000141ac @ 000141ac size=224 ===== */

int * FUN_000141ac(int *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  if (param_1[3] == param_2) {
    piVar1 = (int *)*param_1;
    piVar5 = (int *)param_1[1];
    iVar4 = DAT_0001428c + 0x141d4;
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_1;
    }
    if (piVar1 == (int *)iVar4) {
      if (piVar5 == piVar1) {
        return piVar5;
      }
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
      piVar5 = piVar1;
    }
    piVar1 = piVar5;
    do {
      param_1 = piVar1;
      piVar1 = (int *)param_1[uVar6];
    } while ((int *)param_1[uVar6] != (int *)(DAT_00014290 + 0x14208));
    iVar4 = FUN_000141ac(piVar5,param_1[3],0);
    param_1[uVar6 ^ 1] = iVar4;
  }
  else {
    if ((uint)param_1[3] < param_2) {
      iVar4 = 4;
    }
    else {
      iVar4 = 0;
    }
    uVar3 = FUN_000141ac(*(undefined4 *)((int)param_1 + iVar4));
    *(undefined4 *)((int)param_1 + iVar4) = uVar3;
  }
  FUN_000140a8(param_1);
  iVar4 = FUN_0001403c();
  iVar2 = FUN_0001403c(*(undefined4 *)(iVar4 + 4));
  *(int *)(iVar4 + 4) = iVar2;
  uVar3 = FUN_0001403c(*(undefined4 *)(iVar2 + 4));
  *(undefined4 *)(iVar2 + 4) = uVar3;
  piVar5 = (int *)FUN_00014068(iVar4);
  iVar4 = FUN_00014068(piVar5[1]);
  piVar5[1] = iVar4;
  return piVar5;
}



/* ===== FUN_00014294 @ 00014294 size=68 ===== */

undefined4 FUN_00014294(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  if (*param_1 != 0) {
    local_c = 0;
    iVar1 = FUN_000141ac(*param_1,param_2,&local_c,0,param_1);
    if (DAT_000142d8 + 0x142c4 == iVar1) {
      iVar1 = 0;
    }
    *param_1 = iVar1;
  }
  return local_c;
}



/* ===== FUN_0001430c @ 0001430c size=68 ===== */

void FUN_0001430c(int *param_1)

{
  if (*param_1 != DAT_00014350 + 0x14324) {
    FUN_0001430c();
  }
  if (param_1[1] != DAT_00014354 + 0x1433c) {
    FUN_0001430c();
  }
  free(param_1);
  return;
}



/* ===== FUN_00014358 @ 00014358 size=40 ===== */

void FUN_00014358(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_000144ac(param_1 + 0xbc);
  *puVar1 = param_3;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  return;
}



/* ===== FUN_00014400 @ 00014400 size=36 ===== */

void FUN_00014400(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_000144ac(*param_3,param_1);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  return;
}



/* ===== FUN_00014424 @ 00014424 size=124 ===== */

void FUN_00014424(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_10;
  int *local_c;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  local_c = param_2;
  if (param_3 == 0) {
    local_10 = param_1;
    if (iVar1 == 0) goto LAB_00014458;
    iVar2 = (int)&DAT_000144a0 + DAT_000144a8;
  }
  else {
    local_10 = param_3;
    if (iVar1 == 0) goto LAB_00014458;
    iVar2 = DAT_000144a0 + 0x14458;
    param_2 = &local_10;
  }
  FUN_000144fc(iVar1,iVar2,param_2);
LAB_00014458:
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    if (iVar1 != DAT_000144a4 + 0x14478) {
      FUN_0001430c();
    }
  }
  return;
}



/* ===== FUN_000144ac @ 000144ac size=76 ===== */

undefined4 * FUN_000144ac(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_00018014(0x20,0);
  uVar2 = *(undefined4 *)(DAT_000144f8 + 0x144d0);
  uVar3 = *(undefined4 *)(DAT_000144f8 + 0x144d4);
  puVar1[3] = param_2;
  puVar1[2] = 1;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  FUN_00014180(param_1,puVar1);
  return puVar1 + 4;
}



/* ===== FUN_000144fc @ 000144fc size=72 ===== */

void FUN_000144fc(undefined4 *param_1,code *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(DAT_00014544 + 0x14518);
  for (; param_1 != puVar1; param_1 = (undefined4 *)param_1[1]) {
    (*param_2)(param_1[3],param_1 + 4,param_3);
    FUN_000144fc(*param_1,param_2,param_3);
  }
  return;
}



/* ===== _ITM_malloc @ 00014548 size=76 ===== */

void * _ITM_malloc(size_t param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 != (void *)0x0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    uVar3 = *(undefined4 *)(DAT_00014594 + 0x1455c + DAT_00014598);
    FUN_00014358(*(undefined4 *)(iVar2 + *(int *)(DAT_0001459c + 0x14584)),pvVar1,uVar3,
                 *(int *)(DAT_0001459c + 0x14584),param_1,uVar3,param_3);
  }
  return pvVar1;
}



/* ===== _ITM_calloc @ 000145a0 size=76 ===== */

void * _ITM_calloc(size_t param_1,size_t param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  pvVar1 = calloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    uVar3 = *(undefined4 *)(DAT_000145ec + 0x145b4 + DAT_000145f0);
    FUN_00014358(*(undefined4 *)(iVar2 + *(int *)(DAT_000145f4 + 0x145dc)),pvVar1,uVar3,
                 *(int *)(DAT_000145f4 + 0x145dc),param_1,uVar3,param_3);
  }
  return pvVar1;
}



/* ===== _ITM_free @ 000145f8 size=60 ===== */

void _ITM_free(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar3 = *(undefined4 *)(DAT_00014634 + 0x14608 + DAT_00014638);
  puVar1 = (undefined4 *)FUN_000144ac(*(int *)(iVar2 + *(int *)(DAT_0001463c + 0x1462c)) + 0xbc);
  *puVar1 = uVar3;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* ===== _ITM_dropReferences @ 00014640 size=16 ===== */

void _ITM_dropReferences(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00017ff4((int)&DAT_00014650 + DAT_00014650);
}



/* ===== new @ 0001466c size=76 ===== */

/* operator new(unsigned int) */

void * new(uint param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = operator_new(param_1);
  if (pvVar1 != (void *)0x0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    FUN_00014358(*(undefined4 *)(iVar2 + *(int *)(DAT_000146c0 + 0x146a8)),pvVar1,
                 *(undefined4 *)(DAT_000146b8 + 0x14680 + DAT_000146bc),
                 *(int *)(DAT_000146c0 + 0x146a8),param_1);
  }
  return pvVar1;
}



/* ===== operator_new(unsigned_int,std::nothrow_t_const&) @ 000146c4 size=56 ===== */

/* transaction clone for operator new(unsigned int, std::nothrow_t const&) */

void * operator_new(unsigned_int,std::nothrow_t_const__(uint param_1,nothrow_t *param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = operator_new(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    FUN_00014358(*(undefined4 *)(iVar2 + *(int *)(DAT_000146fc + 0x146ec)),pvVar1,
                 DAT_00014700 + 0x146f0);
  }
  return pvVar1;
}



/* ===== new[] @ 00014704 size=76 ===== */

/* operator new[](unsigned int) */

void * new__(uint param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = operator_new__(param_1);
  if (pvVar1 != (void *)0x0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    FUN_00014358(*(undefined4 *)(iVar2 + *(int *)(DAT_00014758 + 0x14740)),pvVar1,
                 *(undefined4 *)(DAT_00014750 + 0x14718 + DAT_00014754),
                 *(int *)(DAT_00014758 + 0x14740),param_1);
  }
  return pvVar1;
}



/* ===== operator_new[](unsigned_int,std::nothrow_t_const&) @ 0001475c size=56 ===== */

/* transaction clone for operator new[](unsigned int, std::nothrow_t const&) */

void * operator_new[](unsigned_int,std::nothrow_t_const__(uint param_1,nothrow_t *param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = operator_new__(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    FUN_00014358(*(undefined4 *)(iVar2 + *(int *)(DAT_00014794 + 0x14784)),pvVar1,
                 DAT_00014798 + 0x14788);
  }
  return pvVar1;
}



/* ===== delete @ 0001479c size=60 ===== */

/* operator delete(void*) */

void delete(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar3 = *(undefined4 *)(DAT_000147d8 + 0x147ac + DAT_000147dc);
  puVar1 = (undefined4 *)FUN_000144ac(*(int *)(iVar2 + *(int *)(DAT_000147e0 + 0x147d0)) + 0xbc);
  *puVar1 = uVar3;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* ===== operator_delete(void*,std::nothrow_t_const&) @ 000147e4 size=36 ===== */

/* transaction clone for operator delete(void*, std::nothrow_t const&) */

void operator_delete(void*,std::nothrow_t_const__(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar3 = DAT_0001480c + 0x14804;
  piVar1 = (int *)FUN_000144ac(*(int *)(iVar2 + *(int *)(DAT_00014808 + 0x14800)) + 0xbc);
  *piVar1 = iVar3;
  piVar1[1] = 0;
  *(undefined1 *)(piVar1 + 3) = 0;
  return;
}



/* ===== delete[] @ 00014810 size=96 ===== */

/* operator delete[](void*) */

void delete__(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar3 = *(undefined4 *)(DAT_0001484c + 84000 + DAT_00014850);
  puVar1 = (undefined4 *)FUN_000144ac(*(int *)(iVar2 + *(int *)(DAT_00014854 + 0x14844)) + 0xbc);
  *puVar1 = uVar3;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* ===== operator_delete[](void*,std::nothrow_t_const&) @ 00014858 size=36 ===== */

/* transaction clone for operator delete[](void*, std::nothrow_t const&) */

void operator_delete[](void*,std::nothrow_t_const__(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar3 = DAT_00014880 + 0x14878;
  piVar1 = (int *)FUN_000144ac(*(int *)(iVar2 + *(int *)(DAT_0001487c + 0x14874)) + 0xbc);
  *piVar1 = iVar3;
  piVar1[1] = 0;
  *(undefined1 *)(piVar1 + 3) = 0;
  return;
}



/* ===== delete @ 00014884 size=104 ===== */

/* operator delete(void*, unsigned int) */

void delete(void *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  uVar3 = *(undefined4 *)(DAT_000148c4 + 0x14894 + DAT_000148c8);
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar1 = (undefined4 *)
           FUN_000144ac(*(int *)(iVar2 + *(int *)(DAT_000148cc + 0x148bc)) + 0xbc,param_1);
  puVar1[2] = param_2;
  *puVar1 = 0;
  puVar1[1] = uVar3;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* ===== operator_delete(void*,unsigned_int,std::nothrow_t_const&) @ 000148d0 size=40 ===== */

/* transaction clone for operator delete(void*, unsigned int, std::nothrow_t const&) */

void operator_delete(void*,unsigned_int,std::nothrow_t_const__(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar3 = DAT_000148fc + 0x148f4;
  puVar1 = (undefined4 *)FUN_000144ac(*(int *)(iVar2 + *(int *)(DAT_000148f8 + 0x148f0)) + 0xbc);
  puVar1[2] = param_2;
  *puVar1 = 0;
  puVar1[1] = iVar3;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* ===== FUN_00014900 @ 00014900 size=60 ===== */

void FUN_00014900(uint param_1,uint param_2,int param_3)

{
  bool bVar1;
  
  if (param_2 < param_1) {
    bVar1 = param_2 + param_3 <= param_1;
  }
  else {
    bVar1 = param_1 + param_3 <= param_2;
  }
  if (!bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00017ff4(DAT_0001493c + 0x14930);
  }
  return;
}



/* ===== _ITM_RU1 @ 0001495c size=40 ===== */

void _ITM_RU1(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014984 + 0x14970) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x18))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaRU1 @ 00014988 size=40 ===== */

void _ITM_RaRU1(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000149b0 + 0x1499c) + 4);
                    /* WARNING: Could not recover jumptable at 0x000149ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x1c))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaWU1 @ 000149b4 size=40 ===== */

void _ITM_RaWU1(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000149dc + 0x149c8) + 4);
                    /* WARNING: Could not recover jumptable at 0x000149d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x20))(piVar2,param_1);
  return;
}



/* ===== _ITM_RfWU1 @ 000149e0 size=40 ===== */

void _ITM_RfWU1(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014a08 + 0x149f4) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x24))(piVar2,param_1);
  return;
}



/* ===== _ITM_WU1 @ 00014a0c size=56 ===== */

void _ITM_WU1(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014a44 + 0x14a20) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x28))(piVar2,param_1,param_2);
  return;
}



/* ===== _ITM_WaRU1 @ 00014a48 size=56 ===== */

void _ITM_WaRU1(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014a80 + 0x14a5c) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x2c))(piVar2,param_1,param_2);
  return;
}



/* ===== _ITM_WaWU1 @ 00014a84 size=56 ===== */

void _ITM_WaWU1(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014abc + 0x14a98) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x30))(piVar2,param_1,param_2);
  return;
}



/* ===== _ITM_RU2 @ 00014ac0 size=40 ===== */

void _ITM_RU2(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014ae8 + 0x14ad4) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x34))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaRU2 @ 00014aec size=40 ===== */

void _ITM_RaRU2(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014b14 + 0x14b00) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x38))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaWU2 @ 00014b18 size=40 ===== */

void _ITM_RaWU2(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014b40 + 0x14b2c) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x3c))(piVar2,param_1);
  return;
}



/* ===== _ITM_RfWU2 @ 00014b44 size=40 ===== */

void _ITM_RfWU2(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014b6c + 0x14b58) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x40))(piVar2,param_1);
  return;
}



/* ===== _ITM_WU2 @ 00014b70 size=56 ===== */

void _ITM_WU2(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014ba8 + 0x14b84) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x44))(piVar2,param_1,param_2);
  return;
}



/* ===== _ITM_WaRU2 @ 00014bac size=56 ===== */

void _ITM_WaRU2(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014be4 + 0x14bc0) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x48))(piVar2,param_1,param_2);
  return;
}



/* ===== _ITM_WaWU2 @ 00014be8 size=56 ===== */

void _ITM_WaWU2(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014c20 + 0x14bfc) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x4c))(piVar2,param_1,param_2);
  return;
}



/* ===== _ITM_RU4 @ 00014c24 size=40 ===== */

void _ITM_RU4(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014c4c + 0x14c38) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x50))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaRU4 @ 00014c50 size=40 ===== */

void _ITM_RaRU4(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014c78 + 0x14c64) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x54))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaWU4 @ 00014c7c size=40 ===== */

void _ITM_RaWU4(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014ca4 + 0x14c90) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x58))(piVar2,param_1);
  return;
}



/* ===== _ITM_RfWU4 @ 00014ca8 size=40 ===== */

void _ITM_RfWU4(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014cd0 + 0x14cbc) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x5c))(piVar2,param_1);
  return;
}



/* ===== _ITM_WU4 @ 00014cd4 size=56 ===== */

void _ITM_WU4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014d0c + 0x14ce8) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x60))(piVar2,param_1,param_2);
  return;
}



/* ===== _ITM_WaRU4 @ 00014d10 size=56 ===== */

void _ITM_WaRU4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014d48 + 0x14d24) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 100))(piVar2,param_1,param_2);
  return;
}



/* ===== _ITM_WaWU4 @ 00014d4c size=56 ===== */

void _ITM_WaWU4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014d84 + 0x14d60) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x68))(piVar2,param_1,param_2);
  return;
}



/* ===== _ITM_RU8 @ 00014d88 size=40 ===== */

void _ITM_RU8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014db0 + 0x14d9c) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x6c))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaRU8 @ 00014db4 size=40 ===== */

void _ITM_RaRU8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014ddc + 0x14dc8) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x70))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaWU8 @ 00014de0 size=40 ===== */

void _ITM_RaWU8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014e08 + 0x14df4) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x74))(piVar2,param_1);
  return;
}



/* ===== _ITM_RfWU8 @ 00014e0c size=40 ===== */

void _ITM_RfWU8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014e34 + 0x14e20) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x78))(piVar2,param_1);
  return;
}



/* ===== _ITM_WU8 @ 00014e38 size=52 ===== */

void _ITM_WU8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014e6c + 0x14e4c) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x7c))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaRU8 @ 00014e70 size=52 ===== */

void _ITM_WaRU8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014ea4 + 0x14e84) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x80))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaWU8 @ 00014ea8 size=52 ===== */

void _ITM_WaWU8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014edc + 0x14ebc) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x84))(piVar2,param_1);
  return;
}



/* ===== _ITM_RF @ 00014ee0 size=40 ===== */

void _ITM_RF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014f08 + 0x14ef4) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x88))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaRF @ 00014f0c size=40 ===== */

void _ITM_RaRF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014f34 + 0x14f20) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x8c))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaWF @ 00014f38 size=40 ===== */

void _ITM_RaWF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014f60 + 0x14f4c) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x90))(piVar2,param_1);
  return;
}



/* ===== _ITM_RfWF @ 00014f64 size=40 ===== */

void _ITM_RfWF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014f8c + 0x14f78) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x94))(piVar2,param_1);
  return;
}



/* ===== _ITM_WF @ 00014f90 size=40 ===== */

void _ITM_WF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014fb8 + 0x14fa4) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x98))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaRF @ 00014fbc size=40 ===== */

void _ITM_WaRF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00014fe4 + 0x14fd0) + 4);
                    /* WARNING: Could not recover jumptable at 0x00014fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x9c))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaWF @ 00014fe8 size=40 ===== */

void _ITM_WaWF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015010 + 0x14ffc) + 4);
                    /* WARNING: Could not recover jumptable at 0x0001500c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xa0))(piVar2,param_1);
  return;
}



/* ===== _ITM_RD @ 00015014 size=40 ===== */

void _ITM_RD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_0001503c + 0x15028) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xa4))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaRD @ 00015040 size=40 ===== */

void _ITM_RaRD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015068 + 0x15054) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xa8))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaWD @ 0001506c size=40 ===== */

void _ITM_RaWD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015094 + 0x15080) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xac))(piVar2,param_1);
  return;
}



/* ===== _ITM_RfWD @ 00015098 size=40 ===== */

void _ITM_RfWD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000150c0 + 0x150ac) + 4);
                    /* WARNING: Could not recover jumptable at 0x000150bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xb0))(piVar2,param_1);
  return;
}



/* ===== _ITM_WD @ 000150c4 size=40 ===== */

void _ITM_WD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000150ec + 0x150d8) + 4);
                    /* WARNING: Could not recover jumptable at 0x000150e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xb4))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaRD @ 000150f0 size=40 ===== */

void _ITM_WaRD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015118 + 0x15104) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xb8))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaWD @ 0001511c size=40 ===== */

void _ITM_WaWD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015144 + 0x15130) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xbc))(piVar2,param_1);
  return;
}



/* ===== _ITM_RE @ 00015148 size=40 ===== */

void _ITM_RE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015170 + 0x1515c) + 4);
                    /* WARNING: Could not recover jumptable at 0x0001516c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xc0))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaRE @ 00015174 size=40 ===== */

void _ITM_RaRE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_0001519c + 0x15188) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xc4))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaWE @ 000151a0 size=40 ===== */

void _ITM_RaWE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000151c8 + 0x151b4) + 4);
                    /* WARNING: Could not recover jumptable at 0x000151c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 200))(piVar2,param_1);
  return;
}



/* ===== _ITM_RfWE @ 000151cc size=40 ===== */

void _ITM_RfWE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000151f4 + 0x151e0) + 4);
                    /* WARNING: Could not recover jumptable at 0x000151f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xcc))(piVar2,param_1);
  return;
}



/* ===== _ITM_WE @ 000151f8 size=40 ===== */

void _ITM_WE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015220 + 0x1520c) + 4);
                    /* WARNING: Could not recover jumptable at 0x0001521c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xd0))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaRE @ 00015224 size=40 ===== */

void _ITM_WaRE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_0001524c + 0x15238) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xd4))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaWE @ 00015250 size=40 ===== */

void _ITM_WaWE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015278 + 0x15264) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xd8))(piVar2,param_1);
  return;
}



/* ===== _ITM_RCF @ 0001527c size=40 ===== */

void _ITM_RCF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000152a4 + 0x15290) + 4);
                    /* WARNING: Could not recover jumptable at 0x000152a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xdc))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaRCF @ 000152a8 size=40 ===== */

void _ITM_RaRCF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000152d0 + 0x152bc) + 4);
                    /* WARNING: Could not recover jumptable at 0x000152cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xe0))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaWCF @ 000152d4 size=40 ===== */

void _ITM_RaWCF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000152fc + 0x152e8) + 4);
                    /* WARNING: Could not recover jumptable at 0x000152f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xe4))(piVar2,param_1);
  return;
}



/* ===== _ITM_RfWCF @ 00015300 size=40 ===== */

void _ITM_RfWCF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015328 + 0x15314) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xe8))(piVar2,param_1);
  return;
}



/* ===== _ITM_WCF @ 0001532c size=40 ===== */

void _ITM_WCF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015354 + 0x15340) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xec))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaRCF @ 00015358 size=40 ===== */

void _ITM_WaRCF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015380 + 0x1536c) + 4);
                    /* WARNING: Could not recover jumptable at 0x0001537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xf0))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaWCF @ 00015384 size=40 ===== */

void _ITM_WaWCF(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000153ac + 0x15398) + 4);
                    /* WARNING: Could not recover jumptable at 0x000153a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xf4))(piVar2,param_1);
  return;
}



/* ===== _ITM_RCD @ 000153b0 size=40 ===== */

void _ITM_RCD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000153d8 + 0x153c4) + 4);
                    /* WARNING: Could not recover jumptable at 0x000153d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xf8))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaRCD @ 000153dc size=40 ===== */

void _ITM_RaRCD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015404 + 0x153f0) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xfc))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaWCD @ 00015408 size=40 ===== */

void _ITM_RaWCD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015430 + 0x1541c) + 4);
                    /* WARNING: Could not recover jumptable at 0x0001542c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x100))(piVar2,param_1);
  return;
}



/* ===== _ITM_RfWCD @ 00015434 size=40 ===== */

void _ITM_RfWCD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_0001545c + 0x15448) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x104))(piVar2,param_1);
  return;
}



/* ===== _ITM_WCD @ 00015460 size=40 ===== */

void _ITM_WCD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015488 + 0x15474) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x108))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaRCD @ 0001548c size=40 ===== */

void _ITM_WaRCD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000154b4 + 0x154a0) + 4);
                    /* WARNING: Could not recover jumptable at 0x000154b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x10c))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaWCD @ 000154b8 size=40 ===== */

void _ITM_WaWCD(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000154e0 + 0x154cc) + 4);
                    /* WARNING: Could not recover jumptable at 0x000154dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x110))(piVar2,param_1);
  return;
}



/* ===== _ITM_RCE @ 000154e4 size=40 ===== */

void _ITM_RCE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_0001550c + 0x154f8) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x114))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaRCE @ 00015510 size=40 ===== */

void _ITM_RaRCE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015538 + 0x15524) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x118))(piVar2,param_1);
  return;
}



/* ===== _ITM_RaWCE @ 0001553c size=40 ===== */

void _ITM_RaWCE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015564 + 0x15550) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x11c))(piVar2,param_1);
  return;
}



/* ===== _ITM_RfWCE @ 00015568 size=40 ===== */

void _ITM_RfWCE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015590 + 0x1557c) + 4);
                    /* WARNING: Could not recover jumptable at 0x0001558c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x120))(piVar2,param_1);
  return;
}



/* ===== _ITM_WCE @ 00015594 size=40 ===== */

void _ITM_WCE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000155bc + 0x155a8) + 4);
                    /* WARNING: Could not recover jumptable at 0x000155b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x124))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaRCE @ 000155c0 size=40 ===== */

void _ITM_WaRCE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000155e8 + 0x155d4) + 4);
                    /* WARNING: Could not recover jumptable at 0x000155e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x128))(piVar2,param_1);
  return;
}



/* ===== _ITM_WaWCE @ 000155ec size=40 ===== */

void _ITM_WaWCE(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015614 + 0x15600) + 4);
                    /* WARNING: Could not recover jumptable at 0x00015610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 300))(piVar2,param_1);
  return;
}



/* ===== _ITM_memcpyRnWt @ 00015618 size=76 ===== */

void _ITM_memcpyRnWt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015664 + 0x1562c) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,5,0,param_4);
  return;
}



/* ===== _ITM_memmoveRnWt @ 00015668 size=92 ===== */

void _ITM_memmoveRnWt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar3 + *(int *)(DAT_000156c4 + 0x15688) + 4);
  uVar1 = FUN_00014900();
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,uVar1,5,0,param_4);
  return;
}



/* ===== _ITM_memcpyRnWtaR @ 000156c8 size=76 ===== */

void _ITM_memcpyRnWtaR(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015714 + 0x156dc) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,6,0,param_4);
  return;
}



/* ===== _ITM_memmoveRnWtaR @ 00015718 size=92 ===== */

void _ITM_memmoveRnWtaR(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar3 + *(int *)(DAT_00015774 + 0x15738) + 4);
  uVar1 = FUN_00014900();
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,uVar1,6,0,param_4);
  return;
}



/* ===== _ITM_memcpyRnWtaW @ 00015778 size=76 ===== */

void _ITM_memcpyRnWtaW(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000157c4 + 0x1578c) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,7,0,param_4);
  return;
}



/* ===== _ITM_memmoveRnWtaW @ 000157c8 size=92 ===== */

void _ITM_memmoveRnWtaW(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar3 + *(int *)(DAT_00015824 + 0x157e8) + 4);
  uVar1 = FUN_00014900();
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,uVar1,7,0,param_4);
  return;
}



/* ===== _ITM_memcpyRtWn @ 00015828 size=80 ===== */

void _ITM_memcpyRtWn(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015878 + 0x1583c) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,0,1,param_4);
  return;
}



/* ===== _ITM_memmoveRtWn @ 0001587c size=92 ===== */

void _ITM_memmoveRtWn(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar3 + *(int *)(DAT_000158d8 + 0x1589c) + 4);
  uVar1 = FUN_00014900();
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,uVar1,0,1,param_4);
  return;
}



/* ===== _ITM_memcpyRtWt @ 000158dc size=80 ===== */

void _ITM_memcpyRtWt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_0001592c + 0x158f0) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,5,1,param_4);
  return;
}



/* ===== _ITM_memmoveRtWt @ 00015930 size=76 ===== */

void _ITM_memmoveRtWt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_0001597c + 0x15944) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,1,5,1,param_4);
  return;
}



/* ===== _ITM_memcpyRtWtaR @ 00015980 size=80 ===== */

void _ITM_memcpyRtWtaR(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000159d0 + 0x15994) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,6,1,param_4);
  return;
}



/* ===== _ITM_memmoveRtWtaR @ 000159d4 size=76 ===== */

void _ITM_memmoveRtWtaR(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015a20 + 0x159e8) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,1,6,1,param_4);
  return;
}



/* ===== _ITM_memcpyRtWtaW @ 00015a24 size=80 ===== */

void _ITM_memcpyRtWtaW(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015a74 + 0x15a38) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,7,1,param_4);
  return;
}



/* ===== _ITM_memmoveRtWtaW @ 00015a78 size=76 ===== */

void _ITM_memmoveRtWtaW(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015ac4 + 0x15a8c) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,1,7,1,param_4);
  return;
}



/* ===== _ITM_memcpyRtaRWn @ 00015ac8 size=80 ===== */

void _ITM_memcpyRtaRWn(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015b18 + 0x15adc) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,0,2,param_4);
  return;
}



/* ===== _ITM_memmoveRtaRWn @ 00015b1c size=92 ===== */

void _ITM_memmoveRtaRWn(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar3 + *(int *)(DAT_00015b78 + 0x15b3c) + 4);
  uVar1 = FUN_00014900();
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,uVar1,0,2,param_4);
  return;
}



/* ===== _ITM_memcpyRtaRWt @ 00015b7c size=80 ===== */

void _ITM_memcpyRtaRWt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015bcc + 0x15b90) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,5,2,param_4);
  return;
}



/* ===== _ITM_memmoveRtaRWt @ 00015bd0 size=80 ===== */

void _ITM_memmoveRtaRWt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015c20 + 0x15be4) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,1,5,2,param_4);
  return;
}



/* ===== _ITM_memcpyRtaRWtaR @ 00015c24 size=80 ===== */

void _ITM_memcpyRtaRWtaR(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015c74 + 0x15c38) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,6,2,param_4);
  return;
}



/* ===== _ITM_memmoveRtaRWtaR @ 00015c78 size=80 ===== */

void _ITM_memmoveRtaRWtaR
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015cc8 + 0x15c8c) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,1,6,2,param_4);
  return;
}



/* ===== _ITM_memcpyRtaRWtaW @ 00015ccc size=80 ===== */

void _ITM_memcpyRtaRWtaW(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015d1c + 0x15ce0) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,7,2,param_4);
  return;
}



/* ===== _ITM_memmoveRtaRWtaW @ 00015d20 size=80 ===== */

void _ITM_memmoveRtaRWtaW
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015d70 + 0x15d34) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,1,7,2,param_4);
  return;
}



/* ===== _ITM_memcpyRtaWWn @ 00015d74 size=80 ===== */

void _ITM_memcpyRtaWWn(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015dc4 + 0x15d88) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,0,3,param_4);
  return;
}



/* ===== _ITM_memmoveRtaWWn @ 00015dc8 size=92 ===== */

void _ITM_memmoveRtaWWn(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar3 + *(int *)(DAT_00015e24 + 0x15de8) + 4);
  uVar1 = FUN_00014900();
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,uVar1,0,3,param_4);
  return;
}



/* ===== _ITM_memcpyRtaWWt @ 00015e28 size=80 ===== */

void _ITM_memcpyRtaWWt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015e78 + 0x15e3c) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,5,3,param_4);
  return;
}



/* ===== _ITM_memmoveRtaWWt @ 00015e7c size=80 ===== */

void _ITM_memmoveRtaWWt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015ecc + 0x15e90) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,1,5,3,param_4);
  return;
}



/* ===== _ITM_memcpyRtaWWtaR @ 00015ed0 size=80 ===== */

void _ITM_memcpyRtaWWtaR(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015f20 + 0x15ee4) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,6,3,param_4);
  return;
}



/* ===== _ITM_memmoveRtaWWtaR @ 00015f24 size=80 ===== */

void _ITM_memmoveRtaWWtaR
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015f74 + 0x15f38) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,1,6,3,param_4);
  return;
}



/* ===== _ITM_memcpyRtaWWtaW @ 00015f78 size=80 ===== */

void _ITM_memcpyRtaWWtaW(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00015fc8 + 0x15f8c) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,0,7,3,param_4);
  return;
}



/* ===== _ITM_memmoveRtaWWtaW @ 00015fcc size=80 ===== */

void _ITM_memmoveRtaWWtaW
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_0001601c + 0x15fe0) + 4);
  (**(code **)(*piVar2 + 0x130))(piVar2,param_1,param_2,param_3,1,7,3,param_4);
  return;
}



/* ===== _ITM_memsetW @ 00016020 size=68 ===== */

void _ITM_memsetW(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_00016064 + 0x16038) + 4);
  (**(code **)(*piVar2 + 0x134))(piVar2,param_1,param_2,param_3,5,param_2);
  return;
}



/* ===== _ITM_memsetWaR @ 00016068 size=68 ===== */

void _ITM_memsetWaR(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000160ac + 0x16080) + 4);
  (**(code **)(*piVar2 + 0x134))(piVar2,param_1,param_2,param_3,6,param_2);
  return;
}



/* ===== _ITM_memsetWaW @ 000160b0 size=68 ===== */

void _ITM_memsetWaW(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar2 = *(int **)(iVar1 + *(int *)(DAT_000160f4 + 0x160c8) + 4);
  (**(code **)(*piVar2 + 0x134))(piVar2,param_1,param_2,param_3,7,param_2);
  return;
}



/* ===== FUN_00016130 @ 00016130 size=68 ===== */

void FUN_00016130(int *param_1)

{
  if (*param_1 != DAT_00016174 + 0x16148) {
    FUN_00016130();
  }
  if (param_1[1] != DAT_00016178 + 0x16160) {
    FUN_00016130();
  }
  free(param_1);
  return;
}



/* ===== FUN_0001617c @ 0001617c size=72 ===== */

void FUN_0001617c(size_t param_1)

{
  size_t extraout_r0;
  void *__s;
  
  if (param_1 != 0x180) {
    __assert((char *)(DAT_000161cc + 0x161a8),(char *)(DAT_000161c8 + 0x161a4),0x40);
    param_1 = extraout_r0;
  }
  __s = (void *)FUN_00018014();
  memset(__s,0,param_1);
  return;
}



/* ===== FUN_000161d4 @ 000161d4 size=276 ===== */

int FUN_000161d4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_000162ec;
  if (*(int *)(param_1 + 0xdc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00017ff4(DAT_000162e8 + 0x161f0);
  }
  FUN_00017d34(DAT_000162ec + 0x16240);
  piVar2 = (int *)(iVar1 + 0x16204);
  iVar1 = *piVar2;
  do {
    if (iVar1 == 0) {
LAB_00016224:
      iVar1 = DAT_000162f0;
      *(int *)(DAT_000162f0 + 0x16284) = *(int *)(DAT_000162f0 + 0x16284) + -1;
      FUN_000177f0(param_1);
      FUN_00017b6c(iVar1 + 0x16274);
      if (*(int *)(param_1 + 0x100) != 0) {
        free(*(void **)(param_1 + 0x108));
      }
      if (*(int *)(param_1 + 0xc0) != 0) {
        free(*(void **)(param_1 + 200));
      }
      iVar1 = *(int *)(param_1 + 0xbc);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0xbc) = 0;
        if (iVar1 != DAT_000162f4 + 0x16290) {
          FUN_00016130();
        }
      }
      if (*(int *)(param_1 + 0xb0) != 0) {
        free(*(void **)(param_1 + 0xb8));
      }
      if (*(int *)(param_1 + 0xa4) != 0) {
        free(*(void **)(param_1 + 0xac));
      }
      if (*(int *)(param_1 + 0x98) != 0) {
        free(*(void **)(param_1 + 0xa0));
      }
      return param_1;
    }
    if (param_1 == iVar1) {
      *piVar2 = *(int *)(iVar1 + 0x140);
      goto LAB_00016224;
    }
    piVar2 = (int *)(iVar1 + 0x140);
    iVar1 = *(int *)(iVar1 + 0x140);
  } while( true );
}



/* ===== FUN_00016340 @ 00016340 size=288 ===== */

void * FUN_00016340(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  pthread_key_t *ppVar4;
  int iVar5;
  
  *(undefined4 *)((int)param_1 + 0x9c) = 0;
  *(undefined4 *)((int)param_1 + 0x98) = 0x20;
  uVar1 = FUN_00018014(0x80,1);
  *(undefined4 *)((int)param_1 + 0xa4) = 0x20;
  *(undefined4 *)((int)param_1 + 0xa8) = 0;
  *(undefined4 *)((int)param_1 + 0xa0) = uVar1;
  uVar1 = FUN_00018014(0x100,1);
  *(undefined4 *)((int)param_1 + 0xb0) = 0x20;
  *(undefined4 *)((int)param_1 + 0xb4) = 0;
  *(undefined4 *)((int)param_1 + 0xac) = uVar1;
  uVar1 = FUN_00018014(0x100,1);
  *(undefined4 *)((int)param_1 + 0xbc) = 0;
  *(undefined4 *)((int)param_1 + 0xc0) = 0x20;
  *(undefined4 *)((int)param_1 + 0xc4) = 0;
  *(undefined4 *)((int)param_1 + 0xb8) = uVar1;
  uVar1 = FUN_00018014(0x300,1);
  *(undefined4 *)((int)param_1 + 0x100) = 0x20;
  *(undefined4 *)((int)param_1 + 0x104) = 0;
  iVar2 = DAT_00016460;
  ppVar4 = (pthread_key_t *)(DAT_00016460 + 0x163c8);
  iVar5 = DAT_00016460 + 0x16408;
  *(undefined4 *)((int)param_1 + 200) = uVar1;
  uVar1 = FUN_00018014(0x1900,1);
  *(undefined4 *)((int)param_1 + 0x108) = uVar1;
  *(undefined4 *)((int)param_1 + 0x144) = 0xffffffff;
  FUN_00017d34(iVar5);
  uVar1 = *(undefined4 *)(iVar2 + 0x163cc);
  iVar3 = *(int *)(iVar2 + 0x16418);
  *(void **)(iVar2 + 0x163cc) = param_1;
  *(undefined4 *)((int)param_1 + 0x140) = uVar1;
  *(int *)(iVar2 + 0x16418) = iVar3 + 1;
  FUN_000177f0(param_1);
  FUN_00017b6c(iVar5);
  FUN_000171c8(param_1);
  iVar2 = pthread_once((pthread_once_t *)(iVar2 + 0x1641c),
                       (__init_routine *)(DAT_00016464 + 0x16428));
  if (iVar2 == 0) {
    iVar2 = pthread_setspecific(*ppVar4,param_1);
    if (iVar2 == 0) {
      return param_1;
    }
    iVar2 = DAT_0001646c + 0x16458;
  }
  else {
    iVar2 = DAT_00016468 + 0x1643c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00017ff4(iVar2);
}



/* ===== FUN_00016470 @ 00016470 size=112 ===== */

void FUN_00016470(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  pvVar2 = memcpy(param_1,param_2,0x98);
  *(undefined4 *)((int)pvVar2 + 0x98) = *(undefined4 *)((int)param_2 + 0x9c);
  *(undefined4 *)((int)pvVar2 + 0x9c) = *(undefined4 *)((int)param_2 + 0xbc);
  *(undefined4 *)((int)pvVar2 + 0xa0) = *(undefined4 *)((int)param_2 + 0xc4);
  uVar3 = *(undefined4 *)((int)param_2 + 0xd0);
  uVar4 = *(undefined4 *)((int)param_2 + 0xd4);
  *(undefined4 *)((int)pvVar2 + 0xb0) = *(undefined4 *)((int)param_2 + 0xd8);
  uVar5 = *(undefined4 *)((int)param_2 + 0xf0);
  *(undefined4 *)((int)pvVar2 + 0xa8) = uVar3;
  *(undefined4 *)((int)pvVar2 + 0xac) = uVar4;
  iVar1 = DAT_000164e0;
  *(undefined4 *)((int)pvVar2 + 0xb4) = uVar5;
  *(undefined4 *)((int)pvVar2 + 0xb8) = *(undefined4 *)((int)param_2 + 0xf8);
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)((int)pvVar2 + 0xbc) = *(undefined4 *)(iVar6 + *(int *)(iVar1 + 0x164cc) + 4);
  *(undefined4 *)((int)pvVar2 + 0xc0) = *(undefined4 *)((int)param_2 + 0xdc);
  return;
}



/* ===== FUN_000164e4 @ 000164e4 size=60 ===== */

void FUN_000164e4(void *param_1,void *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  pvVar1 = memcpy(param_2,param_1,0x98);
  *(undefined4 *)((int)pvVar1 + 0xbc) = *(undefined4 *)((int)param_1 + 0x9c);
  uVar2 = *(undefined4 *)((int)param_1 + 0xac);
  uVar3 = *(undefined4 *)((int)param_1 + 0xb0);
  *(undefined4 *)((int)pvVar1 + 0xd0) = *(undefined4 *)((int)param_1 + 0xa8);
  *(undefined4 *)((int)pvVar1 + 0xd4) = uVar2;
  *(undefined4 *)((int)pvVar1 + 0xd8) = uVar3;
  return;
}



/* ===== FUN_00016520 @ 00016520 size=364 ===== */

void FUN_00016520(void *param_1,void *param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *__src;
  int iVar4;
  bool bVar5;
  
  if (param_2 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)((int)param_2 + 0x98);
  }
  FUN_000172b4((int)param_1 + 0x98,param_1,uVar2);
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar1 = *(int **)(iVar4 + *(int *)(DAT_0001668c + 0x16558) + 4);
  (**(code **)(*piVar1 + 8))(piVar1,param_2);
  if (param_2 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)((int)param_2 + 0xa0);
  }
  FUN_00017d40(param_1,uVar2);
  if (param_2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)param_2 + 0x9c;
  }
  FUN_00014424(param_1,1,iVar3);
  FUN_00017218(param_1,param_2);
  if (param_2 == (void *)0x0) {
    if (*(int *)((int)param_1 + 0x104) != 0) {
      __src = *(void **)((int)param_1 + 0x108);
      memcpy(param_1,__src,0x98);
      uVar2 = *(undefined4 *)((int)__src + 0xac);
      *(undefined4 *)((int)param_1 + 0xd0) = *(undefined4 *)((int)__src + 0xa8);
      *(undefined4 *)((int)param_1 + 0xd4) = uVar2;
      *(undefined4 *)((int)param_1 + 0xd8) = *(undefined4 *)((int)__src + 0xb0);
    }
    *(uint *)((int)param_1 + 0xdc) = param_3 ^ 1;
    *(undefined4 *)((int)param_1 + 0x104) = 0;
  }
  else {
    if (param_3 == 0) {
      __assert((char *)(DAT_00016698 + 0x165d4),(char *)(DAT_00016694 + 0x165d0),0x1e1);
    }
    memcpy(param_1,param_2,0x98);
    uVar2 = *(undefined4 *)((int)param_2 + 0xac);
    *(undefined4 *)((int)param_1 + 0xd0) = *(undefined4 *)((int)param_2 + 0xa8);
    *(undefined4 *)((int)param_1 + 0xd4) = uVar2;
    iVar3 = *(int *)((int)param_2 + 0xbc);
    *(undefined4 *)((int)param_1 + 0xd8) = *(undefined4 *)((int)param_2 + 0xb0);
    bVar5 = iVar3 != *(int *)(iVar4 + *(int *)(DAT_0001669c + 0x16604) + 4);
    if (bVar5) {
      iVar4 = iVar4 + *(int *)(DAT_000166a0 + 0x16618);
    }
    uVar2 = *(undefined4 *)((int)param_2 + 0x9c);
    if (bVar5) {
      *(int *)(iVar4 + 4) = iVar3;
    }
    *(undefined4 *)((int)param_1 + 0xbc) = uVar2;
    *(undefined4 *)((int)param_1 + 0xdc) = *(undefined4 *)((int)param_2 + 0xc0);
  }
  if (*(int *)((int)param_1 + 0xfc) != 0) {
    _Unwind_DeleteException();
    *(undefined4 *)((int)param_1 + 0xfc) = 0;
    return;
  }
  return;
}



/* ===== FUN_000166a4 @ 000166a4 size=184 ===== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000166a4(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_00016520(param_1,0);
  if (param_3 != 0) {
    FUN_00017b28(iRam00016758 + 0x16718,param_1);
  }
  FUN_000175ec(param_1,param_2);
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(DAT_0001675c + 0x166f8);
  while( true ) {
    puVar3 = *(undefined4 **)(iVar4 + iVar2 + 4);
    iVar2 = (**(code **)*puVar3)(puVar3);
    if (iVar2 == 10) break;
    FUN_000175ec(param_1,iVar2);
    iVar2 = *(int *)(DAT_00016760 + 0x1672c);
  }
  if ((*(uint *)(param_1 + 0xd8) & 2) == 0) {
    uVar1 = 1;
  }
  else if (*(char *)((int)puVar3 + 6) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  FUN_0001812c(uVar1 | 8,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== _ITM_abortTransaction @ 00016764 size=352 ===== */

void _ITM_abortTransaction(uint param_1)

{
  char *__assertion;
  uint extraout_r0;
  undefined4 uVar1;
  char *__file;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *__src;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_b0 [152];
  
  uVar4 = param_1 & 0xffffffef;
  if (uVar4 == 1) goto LAB_0001679c;
  iVar3 = 0x20a;
  __file = (char *)(DAT_000168c8 + 0x16798);
  __assertion = (char *)(DAT_000168cc + 0x1679c);
  while( true ) {
    __assert(__assertion,__file,iVar3);
    param_1 = extraout_r0;
LAB_0001679c:
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    __src = *(undefined1 **)(iVar3 + *(int *)(DAT_000168d0 + 0x167ac));
    if ((*(uint *)(__src + 0xd8) & 8) == 0) break;
    iVar3 = 0x20b;
    __file = (char *)(DAT_000168d8 + 0x167d8);
    __assertion = (char *)(DAT_000168dc + 0x167dc);
  }
  if ((*(uint *)(__src + 0xe0) & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((*(int *)(__src + 0x104) != 0) && ((param_1 & 0x10) == 0)) {
    if (*(char *)(*(int *)(iVar3 + *(int *)(DAT_000168e0 + 0x1680c) + 4) + 7) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_000166a4(__src,8);
    }
    uVar1 = FUN_00016e00((int)__src + 0x100);
    uVar5 = *(undefined4 *)(__src + 0xd8);
    memcpy(auStack_b0,__src,0x98);
    FUN_00016520(__src,uVar1,uVar4);
    puVar2 = auStack_b0;
    do {
      FUN_0001812c(0x18,puVar2,uVar5);
LAB_000168a0:
      FUN_00017b6c(FUN_000168ec + DAT_000168e8);
LAB_000168b0:
      uVar5 = *(undefined4 *)(__src + 0xd8);
      *(undefined4 *)(__src + 0xe0) = 0;
      puVar2 = __src;
    } while( true );
  }
  FUN_00016520(__src,0,1);
  if ((*(uint *)(__src + 0xe0) & 1) != 0) goto LAB_000168a0;
  FUN_00017b38(DAT_000168e4 + 0x16894,__src);
  goto LAB_000168b0;
}



/* ===== FUN_000168ec @ 000168ec size=452 ===== */

int FUN_000168ec(uint param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_18;
  undefined4 local_14;
  
  uVar3 = *(int *)(param_1 + 0xdc) - 1;
  *(uint *)(param_1 + 0xdc) = uVar3;
  local_14 = param_2;
  if (uVar3 == 0) {
    iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
    piVar2 = *(int **)(iVar1 + *(int *)(DAT_00016ab0 + 0x16978) + 4);
    local_18 = uVar3;
    iVar1 = (**(code **)(*piVar2 + 4))(piVar2,&local_18);
    if (iVar1 != 0) {
      if ((*(uint *)(param_1 + 0xe0) & 1) == 0) {
        if (local_18 == 0) {
          FUN_00017b38(DAT_00016abc + 0x16aa0,param_1);
          iVar4 = 0;
        }
        else {
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          *(undefined4 *)(param_1 + 0x144) = 0xfffffffe;
          local_14 = 0;
          iVar4 = iVar1;
        }
      }
      else {
        FUN_00017b6c(DAT_00016ab4 + 0x169e8);
        iVar4 = 0;
        local_18 = uVar3;
      }
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xf0) = 0;
      *(undefined4 *)(param_1 + 0x134) = 0;
      if (local_18 != 0) {
        if (iVar4 != 0) {
          DataMemoryBarrier(0xb);
        }
        for (uVar3 = *(uint *)(DAT_00016ab8 + 0x169ec); uVar3 != 0; uVar3 = *(uint *)(uVar3 + 0x140)
            ) {
          if (param_1 != uVar3) {
            while( true ) {
              DataMemoryBarrier(0xb);
              if (local_18 <= *(uint *)(uVar3 + 0x144)) break;
              DataMemoryBarrier(0xb);
            }
          }
        }
      }
      if (iVar4 != 0) {
        FUN_00017b38(DAT_00016ac0 + 0x16ac8,param_1);
      }
      FUN_00017da4(param_1);
      FUN_00014424(param_1,0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x104) != 0) {
      if (uVar3 <= *(uint *)((*(int *)(param_1 + 0x104) + -1) * 200 + *(int *)(param_1 + 0x108) +
                            0xc0)) {
        local_18 = param_1;
        iVar1 = FUN_00016e00(param_1 + 0x100);
        FUN_00014424(param_1,0,iVar1 + 0x9c);
        FUN_000164e4(iVar1,param_1);
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}



/* ===== _ITM_commitTransaction @ 00016ac4 size=48 ===== */

void _ITM_commitTransaction(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar2 = *(undefined4 *)(iVar1 + *(int *)(DAT_00016af4 + 0x16ad8));
  iVar1 = FUN_000168ec(uVar2);
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_000166a4(uVar2,5);
}



/* ===== _ITM_commitTransactionEH @ 00016af8 size=56 ===== */

void _ITM_commitTransactionEH(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(iVar1 + *(int *)(DAT_00016b30 + 0x16b10));
  iVar1 = FUN_000168ec(iVar2);
  if (iVar1 != 0) {
    return;
  }
  *(undefined4 *)(iVar2 + 0xfc) = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_000166a4(iVar2,5);
}



/* ===== FUN_00016b34 @ 00016b34 size=668 ===== */

uint FUN_00016b34(uint param_1,void *param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *__dest;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  
  if ((param_1 & 0x400) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00017ff4(DAT_00016dd0 + 0x16b4c);
  }
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  __dest = *(void **)(iVar6 + *(int *)(DAT_00016dd4 + 0x16b64));
  if (__dest == (void *)0x0) {
    __dest = (void *)FUN_0001617c(0x180);
    FUN_00016340();
    *(void **)(iVar6 + *(int *)(DAT_00016dd8 + 0x16b88)) = __dest;
  }
  if (*(int *)((int)__dest + 0xdc) == 0) {
    piVar5 = (int *)FUN_00017510(__dest,param_1);
    *(int **)(iVar6 + *(int *)(DAT_00016df8 + 0x16d50) + 4) = piVar5;
  }
  else {
    if ((param_1 & 8) != 0) {
      if (((param_1 & 1) == 0) && ((*(uint *)((int)__dest + 0xe0) & 3) != 3)) {
        FUN_00018324(__dest);
      }
      *(int *)((int)__dest + 0xdc) = *(int *)((int)__dest + 0xdc) + 1;
      if ((param_1 & 2) == 0) {
        return 1;
      }
      if (*(char *)(*(int *)(iVar6 + *(int *)(DAT_00016ddc + 0x16be0) + 4) + 6) == '\0') {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      return uVar2;
    }
    if ((param_1 & 1) == 0) {
      __assert((char *)(DAT_00016de8 + 0x16c24),(char *)(DAT_00016de4 + 0x16c20),0x15a);
    }
    if (*(int *)((int)__dest + 0x104) == *(int *)((int)__dest + 0x100)) {
      FUN_00016e24((int)__dest + 0x100);
    }
    iVar4 = *(int *)((int)__dest + 0x104);
    *(int *)((int)__dest + 0x104) = iVar4 + 1;
    FUN_00016470(iVar4 * 200 + *(int *)((int)__dest + 0x108),__dest);
    *(undefined4 *)((int)__dest + 0xbc) = 0;
    piVar5 = *(int **)(iVar6 + *(int *)(DAT_00016dec + 0x16c70) + 4);
    if ((*(char *)((int)piVar5 + 7) == '\0') &&
       (piVar3 = (int *)(**(code **)(*piVar5 + 0x10))(piVar5), piVar3 != (int *)0x0)) {
      *(int **)(iVar6 + *(int *)(DAT_00016df0 + 0x16ca8) + 4) = piVar3;
      piVar5 = piVar3;
    }
  }
  *(uint *)((int)__dest + 0xd8) = param_1;
  *(int *)((int)__dest + 0xdc) = *(int *)((int)__dest + 0xdc) + 1;
  memcpy(__dest,param_2,0x98);
  iVar4 = DAT_00016dfc;
  uVar2 = *(uint *)((int)__dest + 0xe8);
  if ((uVar2 & 0xffff) == 0) {
    puVar8 = (uint *)(DAT_00016dfc + 0x16dc8);
    do {
      uVar2 = *puVar8;
      iVar7 = *(int *)(DAT_00016dfc + 0x16dcc);
      bVar1 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar1);
    *puVar8 = uVar2 + 0x10000;
    *(uint *)(iVar4 + 0x16dcc) = iVar7 + (uint)(0xfffeffff < uVar2);
    *(uint *)((int)__dest + 0xd0) = uVar2;
    *(int *)((int)__dest + 0xd4) = iVar7;
    *(uint *)((int)__dest + 0xe8) = uVar2 + 1;
    *(uint *)((int)__dest + 0xec) = iVar7 + (uint)(0xfffffffe < uVar2);
  }
  else {
    *(uint *)((int)__dest + 0xd0) = uVar2;
    *(int *)((int)__dest + 0xd4) = *(int *)((int)__dest + 0xec);
    *(uint *)((int)__dest + 0xe8) = uVar2 + 1;
    *(uint *)((int)__dest + 0xec) = *(int *)((int)__dest + 0xec) + (uint)(0xfffffffe < uVar2);
  }
  if (*(undefined4 **)((int)__dest + 0xf4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)__dest + 0xf8) = **(undefined4 **)((int)__dest + 0xf4);
  }
  while (iVar4 = (**(code **)*piVar5)(piVar5), iVar4 != 10) {
    FUN_000175ec(__dest,iVar4);
    piVar5 = *(int **)(iVar6 + *(int *)(DAT_00016df4 + 0x16d30) + 4);
  }
  if ((param_1 & 2) == 0) {
    uVar2 = 1;
  }
  else if (*(char *)((int)piVar5 + 6) == '\0') {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  if ((*(uint *)((int)__dest + 0xe0) & 2) == 0) {
    uVar2 = uVar2 | 4;
  }
  return uVar2;
}



/* ===== FUN_00016e00 @ 00016e00 size=36 ===== */

int FUN_00016e00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + -1;
    *(int *)(param_1 + 4) = iVar1;
    iVar1 = iVar1 * 200 + *(int *)(param_1 + 8);
  }
  return iVar1;
}



/* ===== FUN_00016e24 @ 00016e24 size=112 ===== */

void FUN_00016e24(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 1;
  if (uVar1 < 0x801) {
    while (*param_1 < uVar1) {
      *param_1 = *param_1 << 1;
    }
  }
  else {
    *param_1 = *param_1 + 0x800 & 0xfffff800;
  }
  if (*param_1 < 0x20) {
    *param_1 = 0x20;
  }
  uVar1 = FUN_000180ac(param_1[2],*param_1 * 200,1);
  param_1[2] = uVar1;
  return;
}



/* ===== FUN_00016e94 @ 00016e94 size=160 ===== */

uint FUN_00016e94(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = *(int **)(DAT_00016f34 + 0x16ea0);
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    puVar2 = (uint *)*piVar4;
    if ((*puVar2 <= param_1) && (uVar3 = piVar4[1], param_1 <= puVar2[(uVar3 + 0x1fffffff) * 2]))
    break;
    piVar4 = (int *)piVar4[2];
  }
  uVar5 = 0;
  if (uVar3 == 0) {
    return 0;
  }
  do {
    uVar1 = uVar5 + uVar3 >> 1;
    if (puVar2[uVar1 * 2] <= param_1) {
      if (param_1 <= puVar2[uVar1 * 2]) {
        return puVar2[uVar1 * 2 + 1];
      }
      uVar5 = uVar1 + 1;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
  } while (uVar5 < uVar3);
  return 0;
}



/* ===== FUN_00016f5c @ 00016f5c size=84 ===== */

undefined1 * FUN_00016f5c(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00016fb4;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(iVar2 + *(int *)(DAT_00016fb0 + 0x16f74));
  if ((iVar2 == 0) || ((*(uint *)(iVar2 + 0xe0) & 1) == 0)) {
    *param_1 = 1;
    FUN_00017d34(iVar1 + 0x16f90);
  }
  else {
    *param_1 = 0;
  }
  return param_1;
}



/* ===== _ITM_getTMCloneOrIrrevocable @ 00016fb8 size=48 ===== */

int _ITM_getTMCloneOrIrrevocable(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00016e94();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018324(*(undefined4 *)(iVar1 + *(int *)(DAT_00016fe8 + 0x16fdc)));
  return param_1;
}



/* ===== _ITM_getTMCloneSafe @ 00016fec size=20 ===== */

void _ITM_getTMCloneSafe(void)

{
  int iVar1;
  
  iVar1 = FUN_00016e94();
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== _ITM_registerTMCloneTable @ 00017000 size=116 ===== */

void _ITM_registerTMCloneTable(void *param_1,size_t param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  __compar_fn_t __compar;
  size_t local_14;
  
  local_14 = param_2;
  puVar1 = (undefined4 *)FUN_00018014(0xc,0,param_3,param_4,param_1);
  __compar = (__compar_fn_t)(DAT_00017074 + 0x1702c);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  qsort(param_1,param_2,8,__compar);
  FUN_00016f5c(&local_14);
  uVar2 = *(undefined4 *)(DAT_00017078 + 0x1704c);
  *(undefined4 *)(DAT_00017078 + 0x1704c) = puVar1;
  puVar1[2] = uVar2;
  if ((local_14 & 0xff) != 0) {
    FUN_00017b6c(DAT_0001707c + 0x1706c);
  }
  return;
}



/* ===== _ITM_deregisterTMCloneTable @ 00017080 size=96 ===== */

void _ITM_deregisterTMCloneTable(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int *__ptr;
  uint local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  FUN_00016f5c(&local_14);
  piVar1 = (int *)(DAT_000170e0 + 0x1709c);
  __ptr = (int *)*piVar1;
  while (*__ptr != param_1) {
    piVar1 = __ptr + 2;
    __ptr = (int *)__ptr[2];
  }
  *piVar1 = __ptr[2];
  if ((local_14 & 0xff) != 0) {
    FUN_00017b6c(DAT_000170e4 + 0x170d0);
  }
  free(__ptr);
  return;
}



/* ===== _ITM_cxa_allocate_exception @ 000170f8 size=52 ===== */

undefined4 _ITM_cxa_allocate_exception(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = __cxa_allocate_exception();
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00014358(*(undefined4 *)(iVar2 + *(int *)(DAT_0001712c + 0x17110)),uVar1,
               DAT_00017130 + 0x17114);
  return uVar1;
}



/* ===== _ITM_cxa_free_exception @ 00017134 size=32 ===== */

void _ITM_cxa_free_exception(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar3 = DAT_00017158 + 0x17150;
  piVar1 = (int *)FUN_000144ac(*(int *)(iVar2 + *(int *)(DAT_00017154 + 0x1714c)) + 0xbc,param_1);
  *piVar1 = iVar3;
  piVar1[1] = 0;
  *(undefined1 *)(piVar1 + 3) = 0;
  return;
}



/* ===== _ITM_cxa_throw @ 0001715c size=4 ===== */

void _ITM_cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_0002c018)();
  return;
}



/* ===== _ITM_cxa_begin_catch @ 00017160 size=76 ===== */

void _ITM_cxa_begin_catch(undefined4 param_1)

{
  void *__ptr;
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar1 = *(int *)(iVar1 + *(int *)(DAT_000171a0 + 0x17178));
  __ptr = (void *)FUN_00014294(iVar1 + 0xbc,param_1);
  free(__ptr);
  *(int *)(iVar1 + 0xf0) = *(int *)(iVar1 + 0xf0) + 1;
  (*(code *)PTR___cxa_begin_catch_0002c08c)(param_1);
  return;
}



/* ===== _ITM_cxa_end_catch @ 000171a4 size=44 ===== */

void _ITM_cxa_end_catch(void)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar1 = *(int *)(iVar1 + *(int *)(DAT_000171c4 + 0x171b4));
  *(int *)(iVar1 + 0xf0) = *(int *)(iVar1 + 0xf0) + -1;
  (*(code *)PTR___cxa_end_catch_0002c01c)();
  return;
}



/* ===== FUN_000171c8 @ 000171c8 size=72 ===== */

void FUN_000171c8(int param_1)

{
  int iVar1;
  
  if ((*(int *)(DAT_00017210 + 0x171d8 + DAT_00017214) != 0) &&
     (iVar1 = __cxa_get_globals(), iVar1 != 0)) {
    iVar1 = __cxa_get_globals();
    *(int *)(param_1 + 0xf4) = iVar1 + 4;
    return;
  }
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return;
}



/* ===== FUN_00017218 @ 00017218 size=144 ===== */

void FUN_00017218(int param_1,int param_2)

{
  uint uVar1;
  uint extraout_r2;
  uint uVar2;
  uint extraout_r3;
  
  uVar1 = *(uint *)(param_1 + 0xf0);
  if (param_2 == 0) {
    if (uVar1 != 0) {
      __cxa_tm_cleanup(0);
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xb4);
    if (uVar1 < uVar2) {
      __assert((char *)(DAT_000172b0 + 0x17258),(char *)(DAT_000172ac + 0x17254),0xc2);
      uVar1 = extraout_r2;
      uVar2 = extraout_r3;
    }
    if (uVar1 != uVar2) {
      __cxa_tm_cleanup(0);
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xb4);
    }
  }
  if (*(undefined4 **)(param_1 + 0xf4) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xf8);
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return;
}



/* ===== FUN_000172b4 @ 000172b4 size=120 ===== */

void FUN_000172b4(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  void *__dest;
  int iVar2;
  size_t __n;
  uint uVar3;
  void *pvVar4;
  
  uVar3 = *(uint *)(param_1 + 4);
  pvVar4 = *(void **)(param_2 + 0x90);
  uVar1 = FUN_00018170(param_2);
  if (uVar3 == 0) {
    return;
  }
  while (param_3 < uVar3) {
    iVar2 = *(int *)(param_1 + 8);
    __dest = *(void **)(iVar2 + (uVar3 - 1) * 4);
    __n = *(size_t *)(iVar2 + (uVar3 - 1) * 4 + -4);
    uVar3 = (uVar3 - 2) - (__n + 3 >> 2);
    if ((pvVar4 < __dest) || ((int)__dest + __n <= uVar1)) {
      memcpy(__dest,(void *)(iVar2 + uVar3 * 4),__n);
    }
  }
  *(uint *)(param_1 + 4) = param_3;
  return;
}



/* ===== _ITM_LB @ 000173ac size=4 ===== */

void _ITM_LB(void *param_1,size_t param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar1 = param_2 + 3 >> 2;
  iVar5 = uVar1 + 2;
  iVar3 = *(int *)(iVar3 + *(int *)(DAT_000173a8 + 0x17344));
  if (*(uint *)(iVar3 + 0x98) < (uint)(iVar5 + *(int *)(iVar3 + 0x9c))) {
    FUN_00017400(iVar3 + 0x98,iVar5);
  }
  iVar4 = *(int *)(iVar3 + 0x9c);
  *(int *)(iVar3 + 0x9c) = iVar5 + iVar4;
  pvVar2 = memcpy((void *)(*(int *)(iVar3 + 0xa0) + iVar4 * 4),param_1,param_2);
  *(size_t *)((int)pvVar2 + (param_2 + 3 & 0xfffffffc)) = param_2;
  *(void **)((int)pvVar2 + (uVar1 + 1) * 4) = param_1;
  return;
}



/* ===== _ITM_LU1 @ 000173b0 size=8 ===== */

void _ITM_LU1(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(iVar2 + *(int *)(DAT_000173a8 + 0x17344));
  if (*(uint *)(iVar2 + 0x98) < *(int *)(iVar2 + 0x9c) + 3U) {
    FUN_00017400(iVar2 + 0x98,3);
  }
  iVar3 = *(int *)(iVar2 + 0x9c);
  *(int *)(iVar2 + 0x9c) = iVar3 + 3;
  pvVar1 = memcpy((void *)(*(int *)(iVar2 + 0xa0) + iVar3 * 4),param_1,1);
  *(undefined4 *)((int)pvVar1 + 4) = 1;
  *(void **)((int)pvVar1 + 8) = param_1;
  return;
}



/* ===== _ITM_LU2 @ 000173b8 size=132 ===== */

void _ITM_LU2(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(iVar2 + *(int *)(DAT_000173a8 + 0x17344));
  if (*(uint *)(iVar2 + 0x98) < *(int *)(iVar2 + 0x9c) + 3U) {
    FUN_00017400(iVar2 + 0x98,3);
  }
  iVar3 = *(int *)(iVar2 + 0x9c);
  *(int *)(iVar2 + 0x9c) = iVar3 + 3;
  pvVar1 = memcpy((void *)(*(int *)(iVar2 + 0xa0) + iVar3 * 4),param_1,2);
  *(undefined4 *)((int)pvVar1 + 4) = 2;
  *(void **)((int)pvVar1 + 8) = param_1;
  return;
}



/* ===== _ITM_LU4 @ 000173c0 size=8 ===== */

void _ITM_LU4(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(iVar2 + *(int *)(DAT_000173a8 + 0x17344));
  if (*(uint *)(iVar2 + 0x98) < *(int *)(iVar2 + 0x9c) + 3U) {
    FUN_00017400(iVar2 + 0x98,3);
  }
  iVar3 = *(int *)(iVar2 + 0x9c);
  *(int *)(iVar2 + 0x9c) = iVar3 + 3;
  pvVar1 = memcpy((void *)(*(int *)(iVar2 + 0xa0) + iVar3 * 4),param_1,4);
  *(undefined4 *)((int)pvVar1 + 4) = 4;
  *(void **)((int)pvVar1 + 8) = param_1;
  return;
}



/* ===== _ITM_LU8 @ 000173c8 size=8 ===== */

void _ITM_LU8(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(iVar2 + *(int *)(DAT_000173a8 + 0x17344));
  if (*(uint *)(iVar2 + 0x98) < *(int *)(iVar2 + 0x9c) + 4U) {
    FUN_00017400(iVar2 + 0x98,4);
  }
  iVar3 = *(int *)(iVar2 + 0x9c);
  *(int *)(iVar2 + 0x9c) = iVar3 + 4;
  pvVar1 = memcpy((void *)(*(int *)(iVar2 + 0xa0) + iVar3 * 4),param_1,8);
  *(undefined4 *)((int)pvVar1 + 8) = 8;
  *(void **)((int)pvVar1 + 0xc) = param_1;
  return;
}



/* ===== _ITM_LF @ 000173d0 size=8 ===== */

void _ITM_LF(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(iVar2 + *(int *)(DAT_000173a8 + 0x17344));
  if (*(uint *)(iVar2 + 0x98) < *(int *)(iVar2 + 0x9c) + 3U) {
    FUN_00017400(iVar2 + 0x98,3);
  }
  iVar3 = *(int *)(iVar2 + 0x9c);
  *(int *)(iVar2 + 0x9c) = iVar3 + 3;
  pvVar1 = memcpy((void *)(*(int *)(iVar2 + 0xa0) + iVar3 * 4),param_1,4);
  *(undefined4 *)((int)pvVar1 + 4) = 4;
  *(void **)((int)pvVar1 + 8) = param_1;
  return;
}



/* ===== _ITM_LD @ 000173d8 size=8 ===== */

void _ITM_LD(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(iVar2 + *(int *)(DAT_000173a8 + 0x17344));
  if (*(uint *)(iVar2 + 0x98) < *(int *)(iVar2 + 0x9c) + 4U) {
    FUN_00017400(iVar2 + 0x98,4);
  }
  iVar3 = *(int *)(iVar2 + 0x9c);
  *(int *)(iVar2 + 0x9c) = iVar3 + 4;
  pvVar1 = memcpy((void *)(*(int *)(iVar2 + 0xa0) + iVar3 * 4),param_1,8);
  *(undefined4 *)((int)pvVar1 + 8) = 8;
  *(void **)((int)pvVar1 + 0xc) = param_1;
  return;
}



/* ===== _ITM_LE @ 000173e0 size=8 ===== */

void _ITM_LE(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(iVar2 + *(int *)(DAT_000173a8 + 0x17344));
  if (*(uint *)(iVar2 + 0x98) < *(int *)(iVar2 + 0x9c) + 4U) {
    FUN_00017400(iVar2 + 0x98,4);
  }
  iVar3 = *(int *)(iVar2 + 0x9c);
  *(int *)(iVar2 + 0x9c) = iVar3 + 4;
  pvVar1 = memcpy((void *)(*(int *)(iVar2 + 0xa0) + iVar3 * 4),param_1,8);
  *(undefined4 *)((int)pvVar1 + 8) = 8;
  *(void **)((int)pvVar1 + 0xc) = param_1;
  return;
}



/* ===== _ITM_LCF @ 000173e8 size=8 ===== */

void _ITM_LCF(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(iVar2 + *(int *)(DAT_000173a8 + 0x17344));
  if (*(uint *)(iVar2 + 0x98) < *(int *)(iVar2 + 0x9c) + 4U) {
    FUN_00017400(iVar2 + 0x98,4);
  }
  iVar3 = *(int *)(iVar2 + 0x9c);
  *(int *)(iVar2 + 0x9c) = iVar3 + 4;
  pvVar1 = memcpy((void *)(*(int *)(iVar2 + 0xa0) + iVar3 * 4),param_1,8);
  *(undefined4 *)((int)pvVar1 + 8) = 8;
  *(void **)((int)pvVar1 + 0xc) = param_1;
  return;
}



/* ===== _ITM_LCD @ 000173f0 size=8 ===== */

void _ITM_LCD(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(iVar2 + *(int *)(DAT_000173a8 + 0x17344));
  if (*(uint *)(iVar2 + 0x98) < *(int *)(iVar2 + 0x9c) + 6U) {
    FUN_00017400(iVar2 + 0x98,6);
  }
  iVar3 = *(int *)(iVar2 + 0x9c);
  *(int *)(iVar2 + 0x9c) = iVar3 + 6;
  pvVar1 = memcpy((void *)(*(int *)(iVar2 + 0xa0) + iVar3 * 4),param_1,0x10);
  *(undefined4 *)((int)pvVar1 + 0x10) = 0x10;
  *(void **)((int)pvVar1 + 0x14) = param_1;
  return;
}



/* ===== _ITM_LCE @ 000173f8 size=8 ===== */

void _ITM_LCE(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(iVar2 + *(int *)(DAT_000173a8 + 0x17344));
  if (*(uint *)(iVar2 + 0x98) < *(int *)(iVar2 + 0x9c) + 6U) {
    FUN_00017400(iVar2 + 0x98,6);
  }
  iVar3 = *(int *)(iVar2 + 0x9c);
  *(int *)(iVar2 + 0x9c) = iVar3 + 6;
  pvVar1 = memcpy((void *)(*(int *)(iVar2 + 0xa0) + iVar3 * 4),param_1,0x10);
  *(undefined4 *)((int)pvVar1 + 0x10) = 0x10;
  *(void **)((int)pvVar1 + 0x14) = param_1;
  return;
}



/* ===== FUN_00017400 @ 00017400 size=112 ===== */

void FUN_00017400(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + *param_1;
  if (uVar1 < 0x801) {
    while (*param_1 < uVar1) {
      *param_1 = *param_1 << 1;
    }
  }
  else {
    *param_1 = uVar1 + 0x7ff & 0xfffff800;
  }
  if (*param_1 < 0x20) {
    *param_1 = 0x20;
  }
  uVar1 = FUN_000180ac(param_1[2],*param_1 << 2,1);
  param_1[2] = uVar1;
  return;
}



/* ===== _ITM_versionCompatible @ 00017470 size=16 ===== */

bool _ITM_versionCompatible(int param_1)

{
  return param_1 == 0x5a;
}



/* ===== _ITM_libraryVersion @ 00017480 size=12 ===== */

int _ITM_libraryVersion(void)

{
  return (int)&DAT_0001748c + DAT_0001748c;
}



/* ===== _ITM_inTransaction @ 00017490 size=64 ===== */

undefined4 _ITM_inTransaction(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(iVar2 + *(int *)(DAT_000174d0 + 0x174a0));
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0xdc) != 0) {
    if ((*(uint *)(iVar2 + 0xe0) & 2) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 0;
}



/* ===== _ITM_getTransactionId @ 000174d4 size=56 ===== */

undefined8 _ITM_getTransactionId(void)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar1 = *(int *)(iVar1 + *(int *)(DAT_0001750c + 0x174e4));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xdc) != 0)) {
    return *(undefined8 *)(iVar1 + 0xd0);
  }
  return 1;
}



/* ===== FUN_00017510 @ 00017510 size=204 ===== */

int * FUN_00017510(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_2 & 0x41) == 1) {
    piVar3 = *(int **)(DAT_000175e0 + 0x17558);
    piVar1 = piVar3;
    if ((((param_2 & 8) == 0) && (*(char *)((int)piVar3 + 7) == '\0')) &&
       (iVar2 = (**(code **)(*piVar3 + 0x10))(piVar3), iVar2 != 0)) {
      piVar1 = (int *)(**(code **)(*piVar3 + 0x10))(piVar3);
    }
    if ((piVar1[2] & 1U) != 0) goto LAB_0001752c;
    iVar2 = DAT_000175e4 + 0x175ac;
    FUN_00017a90(iVar2,param_1);
    if (piVar3 == *(int **)(DAT_000175e8 + 0x175bc)) {
      return piVar1;
    }
    FUN_00017b38(iVar2,param_1);
  }
  piVar1 = (int *)FUN_000182d8();
LAB_0001752c:
  FUN_00017d34(DAT_000175dc + 0x17538);
  *(int *)(param_1 + 0xe0) = piVar1[2];
  return piVar1;
}



/* ===== FUN_000175ec @ 000175ec size=364 ===== */

void FUN_000175ec(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_1 + param_2 * 4;
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar6 = *(int *)(iVar5 + *(int *)(DAT_00017758 + 0x17604) + 4);
  *(int *)(iVar3 + 0x10c) = *(int *)(iVar3 + 0x10c) + 1;
  uVar4 = *(int *)(param_1 + 0x134) + 1;
  *(uint *)(param_1 + 0x134) = uVar4;
  iVar3 = DAT_0001776c;
  if (param_2 == 9) {
    if ((*(uint *)(param_1 + 0xe0) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000176b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(iVar6 + 0xc) + 8))();
      return;
    }
    iVar3 = DAT_0001775c + 0x17648;
    FUN_00017b38(iVar3,param_1);
    FUN_00017d34(iVar3);
    piVar1 = *(int **)(iVar6 + 0xc);
    if (piVar1 == *(int **)(*(int *)(DAT_00017760 + 0x17664) + 0xc)) {
      (**(code **)(*piVar1 + 8))();
    }
    FUN_00017b6c(DAT_00017764 + 0x17688);
    uVar2 = FUN_00017510(param_1,*(undefined4 *)(param_1 + 0xd8));
    iVar3 = *(int *)(DAT_00017768 + 0x176a0);
  }
  else {
    if (uVar4 < 0x65 && (param_2 - 6U & 0xfffffffd) != 0) {
      return;
    }
    if ((*(uint *)(param_1 + 0xe0) & 1) == 0) {
      *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 1;
      FUN_00017b38(iVar3 + 0x17708,param_1);
      FUN_00017d34(iVar3 + 0x17708);
    }
    if ((((uint)(param_2 != 8) & *(uint *)(param_1 + 0xd8) >> 3) == 0) && (param_2 != 6)) {
      uVar2 = FUN_000182ec();
      iVar3 = *(int *)((int)&DAT_00017758 + DAT_00017774);
    }
    else {
      *(undefined4 *)(param_1 + 0xe0) = 3;
      uVar2 = FUN_000182d8();
      iVar3 = *(int *)(DAT_00017770 + 0x17740);
    }
  }
  *(undefined4 *)(iVar5 + iVar3 + 4) = uVar2;
  return;
}



/* ===== FUN_000177f0 @ 000177f0 size=736 ===== */

int * FUN_000177f0(int *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  
  iVar3 = DAT_00017a64;
  piVar5 = param_1;
  if (param_2 == 0) {
    puVar9 = (undefined4 *)(DAT_00017a60 + 0x17810);
    if (*(char *)(DAT_00017a60 + 0x17814) == '\0') {
      *(undefined1 *)(DAT_00017a60 + 0x17814) = 1;
      DataMemoryBarrier(0xb);
      *puVar9 = 0;
      DataMemoryBarrier(0xb);
      pbVar2 = (byte *)getenv((char *)(iVar3 + 0x17830));
      piVar5 = (int *)0x0;
      uVar4 = 0;
      if (pbVar2 != (byte *)0x0) {
        do {
          pbVar10 = pbVar2;
          iVar3 = isspace((uint)*pbVar10);
          pbVar2 = pbVar10 + 1;
        } while (iVar3 != 0);
        iVar3 = strncmp((char *)pbVar10,(char *)(DAT_00017a68 + 0x1786c),0x11);
        if (iVar3 == 0) {
          uVar4 = FUN_000182fc();
          pbVar10 = pbVar10 + 0x11;
LAB_00017880:
          pbVar10 = pbVar10 + -1;
          do {
            pbVar10 = pbVar10 + 1;
            bVar1 = *pbVar10;
            iVar3 = isspace((uint)bVar1);
          } while (iVar3 != 0);
          piVar5 = (int *)0x0;
          if (bVar1 == 0) goto LAB_00017978;
        }
        else {
          iVar3 = strncmp((char *)pbVar10,(char *)(DAT_00017a6c + 0x178b8),9);
          if (iVar3 == 0) {
            uVar4 = FUN_000182d8();
            pbVar10 = pbVar10 + 9;
            goto LAB_00017880;
          }
          iVar3 = strncmp((char *)pbVar10,(char *)(DAT_00017a70 + 0x178e4),6);
          if (iVar3 == 0) {
            uVar4 = FUN_000182ec();
            pbVar10 = pbVar10 + 6;
            goto LAB_00017880;
          }
          iVar3 = strncmp((char *)pbVar10,(char *)(DAT_00017a74 + 0x17910),5);
          if (iVar3 == 0) {
            uVar4 = FUN_00018af8();
LAB_0001791c:
            pbVar10 = pbVar10 + 5;
            goto LAB_00017880;
          }
          iVar3 = strncmp((char *)pbVar10,(char *)(DAT_00017a78 + 0x1793c),5);
          if (iVar3 == 0) {
            uVar4 = FUN_00019b48();
            goto LAB_0001791c;
          }
          iVar3 = strncmp((char *)pbVar10,(char *)(DAT_00017a7c + 0x17960),3);
          if (iVar3 == 0) {
            uVar4 = FUN_00018310();
            pbVar10 = pbVar10 + 3;
            goto LAB_00017880;
          }
        }
        uVar4 = 0;
        piVar5 = (int *)FUN_00017fcc(DAT_00017a80 + 0x17978);
      }
LAB_00017978:
      *(undefined4 *)(DAT_00017a84 + 0x1798c) = uVar4;
    }
LAB_00017984:
    if (param_3 == 1) {
      iVar3 = DAT_00017a88 + 0x17998;
      piVar5 = *(int **)(DAT_00017a88 + 0x179a0);
      if ((piVar5 == (int *)0x0) || (iVar6 = (**(code **)(*piVar5 + 0x14))(piVar5,1), iVar6 == 0))
      goto LAB_000179d8;
    }
    else {
      if (1 < param_2 || param_3 < 2) {
        return piVar5;
      }
      iVar3 = DAT_00017a8c + 0x17a0c;
      piVar5 = *(int **)(DAT_00017a8c + 0x17a14);
      if ((piVar5 == (int *)0x0) ||
         (iVar6 = (**(code **)(*piVar5 + 0x14))(piVar5,param_3), iVar6 == 0)) {
        piVar5 = (int *)FUN_00019b48();
        iVar3 = (**(code **)(*piVar5 + 0x14))(piVar5,param_3);
        if (iVar3 != 0) goto LAB_00017778;
        goto LAB_000179d8;
      }
    }
    piVar5 = *(int **)(iVar3 + 8);
  }
  else {
    if (param_3 != 0) goto LAB_00017984;
LAB_000179d8:
    piVar5 = (int *)FUN_000182d8();
  }
LAB_00017778:
  piVar7 = *(int **)(DAT_000177e8 + 0x17784);
  if (piVar5 != piVar7) {
    piVar8 = (int *)piVar5[3];
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)(**(code **)*piVar8)(piVar8);
    }
    else {
      piVar7 = (int *)piVar7[3];
      if (piVar7 != piVar8) {
        (**(code **)(*piVar7 + 4))();
        piVar7 = (int *)(*(code *)**(undefined4 **)piVar5[3])();
      }
    }
    *(int **)(DAT_000177ec + 0x177d0) = piVar5;
    return piVar7;
  }
  return param_1;
}



/* ===== FUN_00017a90 @ 00017a90 size=152 ===== */

void FUN_00017a90(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1 + 3;
  while( true ) {
    *(undefined4 *)(param_2 + 0x144) = 0;
    DataMemoryBarrier(0xb);
    if (*param_1 == 0) break;
    *(undefined4 *)(param_2 + 0x144) = 0xffffffff;
    DataMemoryBarrier(0xb);
    if (0 < param_1[2]) {
      param_1[2] = 0;
      FUN_0001a8c4(param_1 + 2,1);
    }
    while (*param_1 != 0) {
      *piVar1 = 1;
      DataMemoryBarrier(0xb);
      if (*param_1 == 0) {
        *piVar1 = 0;
        FUN_0001a8c4(piVar1,0x7fffffff);
      }
      else {
        FUN_0001a834(piVar1,1);
      }
    }
  }
  return;
}



/* ===== FUN_00017b28 @ 00017b28 size=16 ===== */

void FUN_00017b28(undefined4 param_1,int param_2)

{
  DataMemoryBarrier(0xb);
  *(undefined4 *)(param_2 + 0x144) = 0xffffffff;
  return;
}



/* ===== FUN_00017b38 @ 00017b38 size=52 ===== */

void FUN_00017b38(int param_1,int param_2)

{
  DataMemoryBarrier(0xb);
  *(undefined4 *)(param_2 + 0x144) = 0xffffffff;
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 8) < 1) {
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_0001a8c4(param_1 + 8,1);
  return;
}



/* ===== FUN_00017b6c @ 00017b6c size=100 ===== */

void FUN_00017b6c(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 0;
  if ((iVar2 == 2) && (iVar2 = FUN_0001a8c4(param_1,1), 0 < iVar2)) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (0 < param_1[3]) {
    param_1[3] = 0;
    FUN_0001a8c4(param_1 + 3,0x7fffffff);
    return;
  }
  return;
}



/* ===== FUN_00017bd0 @ 00017bd0 size=348 ===== */

undefined4 FUN_00017bd0(int *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar2 = 1;
  do {
    iVar3 = *param_1;
    bVar5 = iVar3 == 0;
    if (!bVar5) goto LAB_00017bf8;
    bVar5 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar5);
  *param_1 = 1;
  bVar5 = true;
LAB_00017bf8:
  if (!bVar5) {
    if (param_2 != 0) {
      return 0;
    }
    if (iVar3 != 2) {
      uVar2 = 2;
      do {
        iVar3 = *param_1;
        bVar5 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar5);
      *param_1 = 2;
    }
    uVar7 = 0;
    piVar6 = param_1;
    while (iVar3 != 0) {
      FUN_0001a834(param_1,2,uVar2,iVar3,piVar6,uVar7);
      do {
        iVar3 = *param_1;
        bVar5 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar5);
      *param_1 = 2;
      uVar2 = 0;
    }
  }
  DataMemoryBarrier(0xb);
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar3 = *(int *)(DAT_00017d2c + 0x17c6c);
  do {
    if (iVar3 == 0) {
      return 1;
    }
    if (iVar3 != param_2) {
      piVar6 = param_1 + 2;
      while( true ) {
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        if (*(int *)(iVar3 + 0x144) == -1) break;
        if (param_2 == 0) {
          *piVar6 = 1;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          if (*(int *)(iVar3 + 0x144) == -1) {
            *piVar6 = 0;
          }
          else {
            FUN_0001a834(piVar6);
          }
        }
        else {
          iVar1 = (**(code **)(**(int **)(iVar4 + *(int *)(DAT_00017d30 + 0x17cb4) + 4) + 0xc))();
          if (iVar1 == 0) {
            FUN_00017b6c(param_1);
            return 0;
          }
        }
      }
    }
    iVar3 = *(int *)(iVar3 + 0x140);
  } while( true );
}



/* ===== FUN_00017d34 @ 00017d34 size=8 ===== */

void FUN_00017d34(undefined4 param_1)

{
  FUN_00017bd0(param_1,0);
  return;
}



/* ===== thunk_FUN_00017bd0 @ 00017d3c size=4 ===== */

undefined4 thunk_FUN_00017bd0(int *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar2 = 1;
  do {
    iVar3 = *param_1;
    bVar5 = iVar3 == 0;
    if (!bVar5) goto LAB_00017bf8;
    bVar5 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar5);
  *param_1 = 1;
  bVar5 = true;
LAB_00017bf8:
  if (!bVar5) {
    if (param_2 != 0) {
      return 0;
    }
    if (iVar3 != 2) {
      uVar2 = 2;
      do {
        iVar3 = *param_1;
        bVar5 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar5);
      *param_1 = 2;
    }
    uVar7 = 0;
    piVar6 = param_1;
    while (iVar3 != 0) {
      FUN_0001a834(param_1,2,uVar2,iVar3,piVar6,uVar7);
      do {
        iVar3 = *param_1;
        bVar5 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar5);
      *param_1 = 2;
      uVar2 = 0;
    }
  }
  DataMemoryBarrier(0xb);
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar3 = *(int *)(DAT_00017d2c + 0x17c6c);
  do {
    if (iVar3 == 0) {
      return 1;
    }
    if (iVar3 != param_2) {
      piVar6 = param_1 + 2;
      while( true ) {
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        if (*(int *)(iVar3 + 0x144) == -1) break;
        if (param_2 == 0) {
          *piVar6 = 1;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          if (*(int *)(iVar3 + 0x144) == -1) {
            *piVar6 = 0;
          }
          else {
            FUN_0001a834(piVar6);
          }
        }
        else {
          iVar1 = (**(code **)(**(int **)(iVar4 + *(int *)(DAT_00017d30 + 0x17cb4) + 4) + 0xc))();
          if (iVar1 == 0) {
            FUN_00017b6c(param_1);
            return 0;
          }
        }
      }
    }
    iVar3 = *(int *)(iVar3 + 0x140);
  } while( true );
}



/* ===== FUN_00017d40 @ 00017d40 size=100 ===== */

void FUN_00017d40(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0xc4);
  while( true ) {
    if (uVar4 <= param_2) {
      return;
    }
    if (*(int *)(param_1 + 0xc4) == 0) break;
    iVar3 = *(int *)(param_1 + 0xc4) + -1;
    *(int *)(param_1 + 0xc4) = iVar3;
    iVar3 = iVar3 * 0x18;
    iVar2 = *(int *)(param_1 + 200) + iVar3;
    if (*(char *)(iVar2 + 8) == '\0') {
      (**(code **)(*(int *)(param_1 + 200) + iVar3))(*(undefined4 *)(iVar2 + 4));
    }
    uVar4 = uVar4 - 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x17da0);
  (*pcVar1)();
}



/* ===== FUN_00017da4 @ 00017da4 size=76 ===== */

void FUN_00017da4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 200);
  puVar2 = puVar1 + *(int *)(param_1 + 0xc4) * 6;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 6) {
    if (*(char *)(puVar1 + 2) != '\0') {
      (*(code *)*puVar1)(puVar1[1]);
    }
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  return;
}



/* ===== _ITM_addUserCommitAction @ 00017df0 size=92 ===== */

void _ITM_addUserCommitAction
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (param_4 != 0 || param_3 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00017ff4(DAT_00017e50 + 0x17e28);
  }
  puVar1 = (undefined4 *)FUN_00017f00(*(int *)(iVar2 + *(int *)(DAT_00017e4c + 0x17e18)) + 0xc0);
  *puVar1 = param_1;
  puVar1[1] = param_5;
  puVar1[4] = param_3;
  puVar1[5] = param_4;
  *(undefined1 *)(puVar1 + 2) = 1;
  return;
}



/* ===== _ITM_addUserUndoAction @ 00017e54 size=56 ===== */

void _ITM_addUserUndoAction(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar1 = (undefined4 *)FUN_00017f00(*(int *)(iVar2 + *(int *)(DAT_00017e8c + 0x17e6c)) + 0xc0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



/* ===== FUN_00017e90 @ 00017e90 size=112 ===== */

void FUN_00017e90(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 1;
  if (uVar1 < 0x801) {
    while (*param_1 < uVar1) {
      *param_1 = *param_1 << 1;
    }
  }
  else {
    *param_1 = *param_1 + 0x800 & 0xfffff800;
  }
  if (*param_1 < 0x20) {
    *param_1 = 0x20;
  }
  uVar1 = FUN_000180ac(param_1[2],*param_1 * 0x18,1);
  param_1[2] = uVar1;
  return;
}



/* ===== FUN_00017f00 @ 00017f00 size=56 ===== */

int FUN_00017f00(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == *param_1) {
    FUN_00017e90();
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x18 + param_1[2];
}



/* ===== FUN_00017f38 @ 00017f38 size=160 ===== */

void FUN_00017f38(char *param_1,__gnuc_va_list param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_00017fc0 + 0x17f48 + DAT_00017fc4);
  fputs((char *)(DAT_00017fc8 + 0x17f64),(FILE *)*piVar3);
  vfprintf((FILE *)*piVar3,param_1,param_2);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x34) == 0) {
    (*(code *)PTR_fputc_0002c07c)(10);
    return;
  }
  puVar2 = *(undefined1 **)(iVar1 + 0x10);
  if (puVar2 < *(undefined1 **)(iVar1 + 0x1c)) {
    *(undefined1 **)(iVar1 + 0x10) = puVar2 + 1;
    *puVar2 = 10;
    return;
  }
  (*(code *)PTR___fputc_unlocked_0002c05c)(10);
  return;
}



/* ===== FUN_00017fcc @ 00017fcc size=40 ===== */

void FUN_00017fcc(undefined4 param_1)

{
  FUN_00017f38(param_1);
  return;
}



/* ===== FUN_00017ff4 @ 00017ff4 size=32 ===== */

void FUN_00017ff4(undefined4 param_1)

{
  FUN_00017f38(param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00018014 @ 00018014 size=96 ===== */

void * FUN_00018014(size_t param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  void *local_c;
  
  local_c = param_2;
  if (param_2 == (void *)0x0) {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    iVar1 = DAT_00018078 + 0x1806c;
  }
  else {
    iVar1 = posix_memalign(&local_c,0x40,param_1);
    if (iVar1 == 0) {
      return local_c;
    }
    iVar1 = DAT_00018074 + 0x18050;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00017ff4(iVar1,param_1);
}



/* ===== FUN_0001807c @ 0001807c size=44 ===== */

void FUN_0001807c(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,param_1);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00017ff4((int)&DAT_000180a8 + DAT_000180a8,param_1);
}



/* ===== FUN_000180ac @ 000180ac size=36 ===== */

void FUN_000180ac(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = realloc(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00017ff4((int)&DAT_000180d0 + DAT_000180d0,param_2);
}



/* ===== _ITM_beginTransaction @ 000180d4 size=88 ===== */

void _ITM_beginTransaction(undefined4 param_1)

{
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  
  if ((DAT_0002c118 & 0x200) != 0) {
    coprocessor_storelong(1,in_cr10,auStack_58);
    coprocessor_storelong(1,in_cr11,auStack_50);
    coprocessor_storelong(1,in_cr12,auStack_48);
    coprocessor_storelong(1,in_cr13,auStack_40);
    coprocessor_storelong(1,in_cr14,auStack_38);
    coprocessor_storelong(1,in_cr15,auStack_30);
  }
  FUN_00016b34(param_1,&stack0xffffff68);
  return;
}



/* ===== FUN_0001812c @ 0001812c size=68 ===== */

void FUN_0001812c(undefined4 param_1,int param_2)

{
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if ((DAT_0002c118 & 0x200) != 0) {
    coprocessor_loadlong(1,in_cr10,param_2 + 0x40);
    coprocessor_loadlong(1,in_cr11,param_2 + 0x48);
    coprocessor_loadlong(1,in_cr12,param_2 + 0x50);
    coprocessor_loadlong(1,in_cr13,param_2 + 0x58);
    coprocessor_loadlong(1,in_cr14,param_2 + 0x60);
    coprocessor_loadlong(1,in_cr15,param_2 + 0x68);
  }
  return;
}



/* ===== FUN_00018170 @ 00018170 size=8 ===== */

undefined1 * FUN_00018170(void)

{
  undefined1 auStack_100 [256];
  
  return auStack_100;
}



/* ===== FUN_000182d8 @ 000182d8 size=16 ===== */

int FUN_000182d8(void)

{
  return DAT_000182e8 + 0x182f4;
}



/* ===== FUN_000182ec @ 000182ec size=12 ===== */

int FUN_000182ec(void)

{
  return (int)&DAT_000182f8 + DAT_000182f8;
}



/* ===== FUN_000182fc @ 000182fc size=16 ===== */

int FUN_000182fc(void)

{
  return DAT_0001830c + 0x18328;
}



/* ===== FUN_00018310 @ 00018310 size=16 ===== */

int FUN_00018310(void)

{
  return DAT_00018320 + 0x1834c;
}



/* ===== FUN_00018324 @ 00018324 size=260 ===== */

void FUN_00018324(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_r0;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint local_1c;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  piVar3 = *(int **)(iVar2 + *(int *)(DAT_00018428 + 0x18338) + 4);
  uVar5 = *(uint *)(param_1 + 0xe0) & 1;
  iVar1 = param_1;
  local_1c = param_2;
  if (uVar5 != 0) {
    local_1c = *(uint *)(param_1 + 0xe0) & 2;
    if (local_1c != 0) {
      return;
    }
    iVar1 = (**(code **)(*piVar3 + 4))(piVar3,&local_1c,param_3,*(code **)(*piVar3 + 4),param_1);
    if (iVar1 != 0) goto LAB_000183ec;
    __assert((char *)(DAT_00018434 + 0x18394),(char *)(DAT_00018430 + 0x18390),0x137);
    iVar1 = extraout_r0;
  }
  iVar4 = DAT_00018438 + 0x183a4;
  iVar1 = thunk_FUN_00017bd0(iVar4,iVar1);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 1;
    local_1c = uVar5;
    iVar1 = (**(code **)(*piVar3 + 4))(piVar3,&local_1c);
    if (iVar1 != 0) {
      FUN_00017b28(iVar4,param_1);
LAB_000183ec:
      *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 3;
      *(int *)(iVar2 + *(int *)(DAT_0001843c + 0x18404) + 4) = DAT_00018440 + 0x18420;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_000166a4(param_1,6);
}



/* ===== FUN_00018444 @ 00018444 size=32 ===== */

void FUN_00018444(void)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if ((*(uint *)(*(int *)(iVar1 + *(int *)(DAT_00018464 + 0x18454)) + 0xe0) & 3) != 0) {
    return;
  }
  FUN_00018324();
  return;
}



/* ===== FUN_00018468 @ 00018468 size=44 ===== */

void FUN_00018468(undefined4 param_1,void *param_2,int param_3,size_t param_4)

{
  if (param_4 == 0) {
    return;
  }
  FUN_00018444();
  memset(param_2,param_3,param_4);
  return;
}



/* ===== FUN_00018494 @ 00018494 size=64 ===== */

void FUN_00018494(undefined4 param_1,void *param_2,void *param_3,size_t param_4,char param_5)

{
  if (param_4 == 0) {
    return;
  }
  FUN_00018444();
  if (param_5 == '\0') {
    memcpy(param_2,param_3,param_4);
    return;
  }
  memmove(param_2,param_3,param_4);
  return;
}



/* ===== FUN_000184d4 @ 000184d4 size=40 ===== */

void FUN_000184d4(undefined4 param_1,undefined8 *param_2)

{
  undefined8 in_d0;
  undefined8 in_d1;
  
  FUN_00018444();
  *param_2 = in_d0;
  param_2[1] = in_d1;
  return;
}



/* ===== FUN_000184fc @ 000184fc size=40 ===== */

void FUN_000184fc(undefined4 param_1,undefined8 *param_2)

{
  undefined8 in_d0;
  undefined8 in_d1;
  
  FUN_00018444();
  *param_2 = in_d0;
  param_2[1] = in_d1;
  return;
}



/* ===== FUN_00018524 @ 00018524 size=40 ===== */

void FUN_00018524(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00018444();
  *param_4 = param_1;
  param_4[1] = param_2;
  return;
}



/* ===== FUN_0001854c @ 0001854c size=32 ===== */

void FUN_0001854c(undefined4 param_1,undefined8 *param_2)

{
  undefined8 in_d0;
  
  FUN_00018444();
  *param_2 = in_d0;
  return;
}



/* ===== FUN_0001856c @ 0001856c size=32 ===== */

void FUN_0001856c(undefined4 param_1,undefined8 *param_2)

{
  undefined8 in_d0;
  
  FUN_00018444();
  *param_2 = in_d0;
  return;
}



/* ===== FUN_0001858c @ 0001858c size=32 ===== */

void FUN_0001858c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_00018444();
  *param_3 = param_1;
  return;
}



/* ===== FUN_000185ac @ 000185ac size=32 ===== */

void FUN_000185ac(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00018444();
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}



/* ===== FUN_000185cc @ 000185cc size=24 ===== */

void FUN_000185cc(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  FUN_00018444();
  *param_2 = param_3;
  return;
}



/* ===== FUN_000185e4 @ 000185e4 size=24 ===== */

void FUN_000185e4(undefined4 param_1,undefined2 *param_2,undefined2 param_3)

{
  FUN_00018444();
  *param_2 = param_3;
  return;
}



/* ===== FUN_000185fc @ 000185fc size=24 ===== */

void FUN_000185fc(undefined4 param_1,undefined1 *param_2,undefined1 param_3)

{
  FUN_00018444();
  *param_2 = param_3;
  return;
}



/* ===== _ITM_changeTransactionMode @ 00018614 size=68 ===== */

void _ITM_changeTransactionMode(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    __assert((char *)(DAT_00018660 + 0x18644),(char *)(DAT_0001865c + 0x18640),0x151);
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018324(*(undefined4 *)(iVar1 + *(int *)(DAT_00018664 + 0x18654)));
  return;
}



/* ===== FUN_00018668 @ 00018668 size=124 ===== */

void FUN_00018668(void *param_1,size_t param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar1 = param_2 + 3 >> 2;
  iVar5 = uVar1 + 2;
  iVar3 = *(int *)(iVar3 + *(int *)(DAT_000186e4 + 0x18680));
  if (*(uint *)(iVar3 + 0x98) < (uint)(iVar5 + *(int *)(iVar3 + 0x9c))) {
    FUN_00017400(iVar3 + 0x98,iVar5);
  }
  iVar4 = *(int *)(iVar3 + 0x9c);
  *(int *)(iVar3 + 0x9c) = iVar5 + iVar4;
  pvVar2 = memcpy((void *)(*(int *)(iVar3 + 0xa0) + iVar4 * 4),param_1,param_2);
  *(size_t *)((int)pvVar2 + (param_2 + 3 & 0xfffffffc)) = param_2;
  *(void **)((int)pvVar2 + (uVar1 + 1) * 4) = param_1;
  return;
}



/* ===== FUN_000186e8 @ 000186e8 size=64 ===== */

void FUN_000186e8(undefined4 param_1,void *param_2,int param_3,size_t param_4,int param_5)

{
  if (param_4 == 0) {
    return;
  }
  if (param_5 != 7) {
    FUN_00018668(param_2,param_4);
  }
  memset(param_2,param_3,param_4);
  return;
}



/* ===== FUN_00018728 @ 00018728 size=88 ===== */

void FUN_00018728(undefined4 param_1,void *param_2,void *param_3,size_t param_4,char param_5,
                 int param_6)

{
  if (param_4 == 0) {
    return;
  }
  if (param_6 != 7 && param_6 != 0) {
    FUN_00018668(param_2,param_4);
  }
  if (param_5 == '\0') {
    memcpy(param_2,param_3,param_4);
    return;
  }
  memmove(param_2,param_3,param_4);
  return;
}



/* ===== FUN_00018780 @ 00018780 size=48 ===== */

void FUN_00018780(undefined4 param_1,undefined8 *param_2)

{
  undefined8 in_d0;
  undefined8 in_d1;
  
  FUN_00018668(param_2,0x10);
  *param_2 = in_d0;
  param_2[1] = in_d1;
  return;
}



/* ===== FUN_000187b0 @ 000187b0 size=48 ===== */

void FUN_000187b0(undefined4 param_1,undefined8 *param_2)

{
  undefined8 in_d0;
  undefined8 in_d1;
  
  FUN_00018668(param_2,0x10);
  *param_2 = in_d0;
  param_2[1] = in_d1;
  return;
}



/* ===== FUN_000187e0 @ 000187e0 size=48 ===== */

void FUN_000187e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00018668(param_4,8);
  *param_4 = param_1;
  param_4[1] = param_2;
  return;
}



/* ===== FUN_00018810 @ 00018810 size=40 ===== */

void FUN_00018810(undefined4 param_1,undefined8 *param_2)

{
  undefined8 in_d0;
  
  FUN_00018668(param_2,8);
  *param_2 = in_d0;
  return;
}



/* ===== FUN_00018838 @ 00018838 size=40 ===== */

void FUN_00018838(undefined4 param_1,undefined8 *param_2)

{
  undefined8 in_d0;
  
  FUN_00018668(param_2,8);
  *param_2 = in_d0;
  return;
}



/* ===== FUN_00018860 @ 00018860 size=40 ===== */

void FUN_00018860(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_00018668(param_3,4);
  *param_3 = param_1;
  return;
}



/* ===== FUN_00018888 @ 00018888 size=40 ===== */

void FUN_00018888(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00018668(param_2,8);
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}



/* ===== FUN_000188b0 @ 000188b0 size=32 ===== */

void FUN_000188b0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  FUN_00018668(param_2,4);
  *param_2 = param_3;
  return;
}



/* ===== FUN_000188d0 @ 000188d0 size=32 ===== */

void FUN_000188d0(undefined4 param_1,undefined2 *param_2,undefined2 param_3)

{
  FUN_00018668(param_2,2);
  *param_2 = param_3;
  return;
}



/* ===== FUN_000188f0 @ 000188f0 size=32 ===== */

void FUN_000188f0(undefined4 param_1,undefined1 *param_2,undefined1 param_3)

{
  FUN_00018668(param_2,1);
  *param_2 = param_3;
  return;
}



/* ===== FUN_00018a7c @ 00018a7c size=40 ===== */

void FUN_00018a7c(int param_1)

{
  if (*(int *)(param_1 + 0x144) == *(int *)(DAT_00018aa4 + 0x18ac8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_000166a4(param_1,3,0);
}



/* ===== FUN_00018af8 @ 00018af8 size=16 ===== */

int FUN_00018af8(void)

{
  return DAT_00018b08 + 0x18b84;
}



/* ===== FUN_00018b0c @ 00018b0c size=244 ===== */

void FUN_00018b0c(void *param_1,size_t param_2,int param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  bool bVar8;
  
  uVar4 = *(uint *)(param_3 + 0x144);
  if ((int)uVar4 < 0) {
LAB_00018ba0:
    uVar4 = param_2 + 3 >> 2;
    iVar7 = uVar4 + 2;
    if (*(uint *)(param_3 + 0x98) < (uint)(iVar7 + *(int *)(param_3 + 0x9c))) {
      FUN_00017400(param_3 + 0x98,iVar7);
    }
    iVar5 = *(int *)(param_3 + 0x9c);
    *(int *)(param_3 + 0x9c) = iVar7 + iVar5;
    pvVar1 = memcpy((void *)(*(int *)(param_3 + 0xa0) + iVar5 * 4),param_1,param_2);
    *(size_t *)((int)pvVar1 + (param_2 + 3 & 0xfffffffc)) = param_2;
    *(void **)((int)pvVar1 + (uVar4 + 1) * 4) = param_1;
    return;
  }
  if (uVar4 < 0x7ffffffe) {
    if (uVar4 == *(uint *)(DAT_00018c00 + 0x18b84)) {
      puVar6 = (uint *)(DAT_00018c00 + 0x18b84);
      do {
        uVar3 = *puVar6;
        bVar8 = uVar3 == uVar4;
        if (!bVar8) goto LAB_00018b7c;
        bVar8 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar8);
      *puVar6 = uVar4 | 0x80000000;
      bVar8 = true;
LAB_00018b7c:
      DataMemoryBarrier(0xb);
      if (bVar8) {
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        *(uint *)(param_3 + 0x144) = uVar3 | 0x80000000;
        goto LAB_00018ba0;
      }
      uVar2 = 2;
    }
    else {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_000166a4(param_3,uVar2,0);
}



/* ===== FUN_00018c04 @ 00018c04 size=80 ===== */

void FUN_00018c04(undefined4 param_1,void *param_2,int param_3,size_t param_4,int param_5)

{
  int iVar1;
  
  if (param_4 == 0) {
    return;
  }
  if (param_5 != 7) {
    iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
    FUN_00018b0c(param_2,param_4,*(undefined4 *)(iVar1 + *(int *)(DAT_00018c54 + 0x18c3c)));
  }
  memset(param_2,param_3,param_4);
  return;
}



/* ===== FUN_00018c58 @ 00018c58 size=184 ===== */

void FUN_00018c58(undefined4 param_1,void *param_2,void *param_3,size_t param_4,char param_5,
                 int param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 == 0) {
    return;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar2 = *(undefined4 *)(iVar1 + *(int *)(DAT_00018d10 + 0x18c94));
  if (param_6 != 0 && param_6 != 7) {
    FUN_00018b0c(param_2,param_4,uVar2);
  }
  if (param_7 == 4) {
    FUN_00018b0c(param_3,param_4,uVar2);
  }
  if (param_5 == '\0') {
    memcpy(param_2,param_3,param_4);
  }
  else {
    memmove(param_2,param_3,param_4);
  }
  if (param_7 != 0 && (1 < param_7 - 3U && param_6 != 7)) {
    FUN_00018a7c(uVar2);
    return;
  }
  return;
}



/* ===== FUN_00018d14 @ 00018d14 size=64 ===== */

void FUN_00018d14(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018b0c(param_2,0x10,*(undefined4 *)(iVar1 + *(int *)(DAT_00018d54 + 0x18d3c)));
  *param_2 = in_d0;
  param_2[1] = in_d1;
  return;
}



/* ===== FUN_00018e00 @ 00018e00 size=64 ===== */

void FUN_00018e00(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018b0c(param_2,0x10,*(undefined4 *)(iVar1 + *(int *)(DAT_00018e40 + 0x18e28)));
  *param_2 = in_d0;
  param_2[1] = in_d1;
  return;
}



/* ===== FUN_00018fa0 @ 00018fa0 size=56 ===== */

void FUN_00018fa0(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 in_d0;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018b0c(param_2,8,*(undefined4 *)(iVar1 + *(int *)(DAT_00018fd8 + 0x18fc8)));
  *param_2 = in_d0;
  return;
}



/* ===== FUN_00019458 @ 00019458 size=56 ===== */

void FUN_00019458(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 in_d0;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018b0c(param_2,8,*(undefined4 *)(iVar1 + *(int *)(DAT_00019490 + 0x19480)));
  *param_2 = in_d0;
  return;
}



/* ===== FUN_0001949c @ 0001949c size=64 ===== */

void FUN_0001949c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018b0c(param_4,8,*(undefined4 *)(iVar1 + *(int *)(DAT_000194dc + 0x194c4)));
  *param_4 = param_1;
  param_4[1] = param_2;
  return;
}



/* ===== FUN_000194e0 @ 000194e0 size=64 ===== */

void FUN_000194e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018b0c(param_4,8,*(undefined4 *)(iVar1 + *(int *)(DAT_00019520 + 0x19508)));
  *param_4 = param_1;
  param_4[1] = param_2;
  return;
}



/* ===== FUN_00019524 @ 00019524 size=52 ===== */

void FUN_00019524(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018b0c(param_2,8,*(undefined4 *)(iVar1 + *(int *)(DAT_00019558 + 0x1954c)));
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}



/* ===== FUN_0001955c @ 0001955c size=52 ===== */

void FUN_0001955c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018b0c(param_2,8,*(undefined4 *)(iVar1 + *(int *)(DAT_00019590 + 0x19584)));
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}



/* ===== FUN_00019594 @ 00019594 size=56 ===== */

void FUN_00019594(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 in_d0;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018b0c(param_2,8,*(undefined4 *)(iVar1 + *(int *)(DAT_000195cc + 0x195bc)));
  *param_2 = in_d0;
  return;
}



/* ===== FUN_000195d0 @ 000195d0 size=56 ===== */

void FUN_000195d0(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 in_d0;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018b0c(param_2,8,*(undefined4 *)(iVar1 + *(int *)(DAT_00019608 + 0x195f8)));
  *param_2 = in_d0;
  return;
}



/* ===== FUN_0001960c @ 0001960c size=56 ===== */

void FUN_0001960c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018b0c(param_3,4,*(undefined4 *)(iVar1 + *(int *)(DAT_00019644 + 0x19634)));
  *param_3 = param_1;
  return;
}



/* ===== FUN_00019684 @ 00019684 size=56 ===== */

void FUN_00019684(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00018b0c(param_3,4,*(undefined4 *)(iVar1 + *(int *)(DAT_000196bc + 0x196ac)));
  *param_3 = param_1;
  return;
}



/* ===== FUN_00019840 @ 00019840 size=100 ===== */

undefined4 FUN_00019840(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xac);
  puVar1 = puVar2 + *(int *)(param_1 + 0xa8) * 2;
  if (puVar2 == puVar1) {
    return 1;
  }
  do {
    if (*(uint *)*puVar2 != (param_1 >> 1 | 0x80000000) &&
        (uint)puVar2[1] >> 3 != *(uint *)*puVar2 >> 3) {
      return 0;
    }
    puVar2 = puVar2 + 2;
  } while (puVar2 != puVar1);
  return 1;
}



/* ===== FUN_00019a10 @ 00019a10 size=64 ===== */

undefined4 FUN_00019a10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_00019a50 + 0x19a60);
  DataMemoryBarrier(0xb);
  iVar1 = FUN_00019840();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_000166a4(param_1,3);
  }
  DataMemoryBarrier(0xb);
  *(undefined4 *)(param_1 + 0x144) = uVar2;
  return uVar2;
}



/* ===== FUN_00019b0c @ 00019b0c size=60 ===== */

void FUN_00019b0c(int param_1,undefined4 *param_2)

{
  while( true ) {
    if (param_2 == (undefined4 *)(*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8) * 8)) {
      return;
    }
    if (param_2[1] != *(int *)*param_2) break;
    param_2 = param_2 + 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_000166a4(param_1,3,0);
}



/* ===== FUN_00019b48 @ 00019b48 size=16 ===== */

int FUN_00019b48(void)

{
  return DAT_00019b58 + 0x19c14;
}



/* ===== FUN_00019b5c @ 00019b5c size=384 ===== */

void FUN_00019b5c(uint param_1,void *param_2,size_t param_3)

{
  uint *puVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  
  iVar7 = DAT_00019ce4;
  iVar10 = DAT_00019ce0;
  uVar8 = *(uint *)(param_1 + 0x144);
  uVar11 = param_1 >> 1 | 0x80000000;
  uVar9 = DAT_00019cdc * ((uint)param_2 >> 5);
  uVar6 = DAT_00019cdc * (param_3 + 0x1f + (int)param_2 >> 5);
  uVar4 = uVar9 >> 0x10;
  do {
    uVar9 = uVar9 + 0x13c6f;
    uVar12 = *(uint *)(*(int *)(iVar7 + 0x19c40) + uVar4 * 4);
    if (uVar12 != uVar11) {
      if ((int)uVar12 < 0) {
LAB_00019be8:
                    /* WARNING: Subroutine does not return */
        FUN_000166a4(param_1,2,0);
      }
      if (uVar8 < uVar12 >> 3) {
        uVar8 = FUN_00019a10(param_1);
      }
      puVar1 = (uint *)(*(int *)(iVar10 + 0x19c20) + uVar4 * 4);
      do {
        uVar5 = *puVar1;
        bVar14 = uVar5 == uVar12;
        if (!bVar14) goto LAB_00019c30;
        bVar14 = (bool)hasExclusiveAccess(puVar1);
      } while (!bVar14);
      *puVar1 = uVar11;
      bVar14 = true;
LAB_00019c30:
      DataMemoryBarrier(0xb);
      if (!bVar14) goto LAB_00019be8;
      DataMemoryBarrier(0xb);
      piVar2 = (int *)FUN_0001a7c4(param_1 + 0xb0);
      iVar13 = *(int *)(iVar10 + 0x19c20);
      piVar2[1] = uVar5;
      *piVar2 = iVar13 + uVar4 * 4;
    }
    uVar4 = uVar9 >> 0x10;
    if (uVar6 >> 0x10 == uVar4) {
      uVar4 = param_3 + 3 >> 2;
      iVar10 = uVar4 + 2;
      if (*(uint *)(param_1 + 0x98) < (uint)(iVar10 + *(int *)(param_1 + 0x9c))) {
        FUN_00017400(param_1 + 0x98,iVar10);
      }
      iVar7 = *(int *)(param_1 + 0x9c);
      *(int *)(param_1 + 0x9c) = iVar10 + iVar7;
      pvVar3 = memcpy((void *)(*(int *)(param_1 + 0xa0) + iVar7 * 4),param_2,param_3);
      *(size_t *)((int)pvVar3 + (param_3 + 3 & 0xfffffffc)) = param_3;
      *(void **)((int)pvVar3 + (uVar4 + 1) * 4) = param_2;
      return;
    }
  } while( true );
}



/* ===== FUN_00019ce8 @ 00019ce8 size=28 ===== */

void FUN_00019ce8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  FUN_00019b5c(*(undefined4 *)(iVar1 + *(int *)(DAT_00019d04 + 0x19d00)),param_1,param_2);
  return;
}



/* ===== FUN_00019d08 @ 00019d08 size=64 ===== */

void FUN_00019d08(undefined4 param_1,void *param_2,int param_3,size_t param_4,int param_5)

{
  if (param_4 == 0) {
    return;
  }
  if (param_5 != 7) {
    FUN_00019ce8(param_2,param_4);
  }
  memset(param_2,param_3,param_4);
  return;
}



/* ===== FUN_00019d48 @ 00019d48 size=48 ===== */

void FUN_00019d48(undefined4 param_1,undefined8 *param_2)

{
  undefined8 in_d0;
  undefined8 in_d1;
  
  FUN_00019ce8(param_2,0x10);
  *param_2 = in_d0;
  param_2[1] = in_d1;
  return;
}



/* ===== FUN_00019d78 @ 00019d78 size=48 ===== */

void FUN_00019d78(undefined4 param_1,undefined8 *param_2)

{
  undefined8 in_d0;
  undefined8 in_d1;
  
  FUN_00019ce8(param_2,0x10);
  *param_2 = in_d0;
  param_2[1] = in_d1;
  return;
}



/* ===== FUN_00019da8 @ 00019da8 size=48 ===== */

void FUN_00019da8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00019ce8(param_4,8);
  *param_4 = param_1;
  param_4[1] = param_2;
  return;
}



/* ===== FUN_00019dd8 @ 00019dd8 size=40 ===== */

void FUN_00019dd8(undefined4 param_1,undefined8 *param_2)

{
  undefined8 in_d0;
  
  FUN_00019ce8(param_2,8);
  *param_2 = in_d0;
  return;
}



/* ===== FUN_00019e00 @ 00019e00 size=40 ===== */

void FUN_00019e00(undefined4 param_1,undefined8 *param_2)

{
  undefined8 in_d0;
  
  FUN_00019ce8(param_2,8);
  *param_2 = in_d0;
  return;
}



/* ===== FUN_00019e28 @ 00019e28 size=40 ===== */

void FUN_00019e28(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_00019ce8(param_3,4);
  *param_3 = param_1;
  return;
}



/* ===== FUN_00019e50 @ 00019e50 size=40 ===== */

void FUN_00019e50(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00019ce8(param_2,8);
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}



/* ===== FUN_00019e78 @ 00019e78 size=32 ===== */

void FUN_00019e78(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  FUN_00019ce8(param_2,4);
  *param_2 = param_3;
  return;
}



/* ===== FUN_00019e98 @ 00019e98 size=32 ===== */

void FUN_00019e98(undefined4 param_1,undefined2 *param_2,undefined2 param_3)

{
  FUN_00019ce8(param_2,2);
  *param_2 = param_3;
  return;
}



/* ===== FUN_00019eb8 @ 00019eb8 size=32 ===== */

void FUN_00019eb8(undefined4 param_1,undefined1 *param_2,undefined1 param_3)

{
  FUN_00019ce8(param_2,1);
  *param_2 = param_3;
  return;
}



/* ===== FUN_00019ed8 @ 00019ed8 size=248 ===== */

int FUN_00019ed8(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  iVar2 = DAT_00019fd8;
  iVar1 = DAT_00019fd4;
  iVar6 = *(int *)(param_1 + 0xa8);
  uVar7 = DAT_00019fd0 * (param_2 >> 5);
  uVar8 = DAT_00019fd0 * (param_3 + 0x1f + param_2 >> 5);
  uVar5 = *(uint *)(param_1 + 0x144);
  uVar3 = uVar7 >> 0x10;
  do {
    uVar7 = uVar7 + 0x13c6f;
    uVar9 = *(uint *)(*(int *)(iVar1 + 0x19fb4) + uVar3 * 4);
    DataMemoryBarrier(0xb);
    if (uVar5 < uVar9 >> 3) {
      if (-1 < (int)uVar9) {
        uVar5 = FUN_00019a10(param_1);
        goto LAB_00019f58;
      }
      if (uVar9 != (param_1 >> 1 | 0x80000000)) {
                    /* WARNING: Subroutine does not return */
        FUN_000166a4(param_1,1,0);
      }
    }
    else {
LAB_00019f58:
      piVar4 = (int *)FUN_0001a7c4(param_1 + 0xa4);
      iVar10 = *(int *)(iVar2 + 0x19fbc);
      piVar4[1] = uVar9;
      *piVar4 = iVar10 + uVar3 * 4;
    }
    uVar3 = uVar7 >> 0x10;
    if (uVar8 >> 0x10 == uVar3) {
      return *(int *)(param_1 + 0xac) + iVar6 * 8;
    }
  } while( true );
}



/* ===== FUN_00019fdc @ 00019fdc size=304 ===== */

void FUN_00019fdc(undefined4 param_1,void *param_2,void *param_3,size_t param_4,byte param_5,
                 int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)param_5;
  if (param_4 != 0) {
    if (param_7 == 4) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      uVar4 = 0;
      uVar3 = *(undefined4 *)(iVar2 + *(int *)(DAT_0001a10c + 0x1a024));
      FUN_00019b5c(uVar3,param_3,param_4);
    }
    else if (param_7 == 3 || param_7 == 0) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      uVar3 = *(undefined4 *)(iVar2 + *(int *)(DAT_0001a114 + 0x1a0e4));
      uVar4 = FUN_00019ed8(uVar3,param_3,param_4,param_4,param_1,uVar1,param_3);
    }
    if (param_6 != 0 && param_6 != 7) {
      if ((param_7 != 4) && (param_7 == 0 || param_7 == 3)) {
        iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
        uVar3 = *(undefined4 *)(iVar2 + *(int *)(DAT_0001a110 + 0x1a060));
      }
      FUN_00019b5c(uVar3,param_2,param_4);
    }
    if (uVar1 == 0) {
      memcpy(param_2,param_3,param_4);
    }
    else {
      memmove(param_2,param_3,param_4);
    }
    if (1 < param_7 - 3U && param_7 != 0) {
      DataMemoryBarrier(0xb);
      FUN_00019b0c(uVar3,uVar4);
      return;
    }
  }
  return;
}



/* ===== FUN_0001a758 @ 0001a758 size=108 ===== */

void FUN_0001a758(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 1;
  if (uVar1 < 0x801) {
    while (*param_1 < uVar1) {
      *param_1 = *param_1 << 1;
    }
  }
  else {
    *param_1 = *param_1 + 0x800 & 0xfffff800;
  }
  if (*param_1 < 0x20) {
    *param_1 = 0x20;
  }
  uVar1 = FUN_000180ac(param_1[2],*param_1 << 3,1);
  param_1[2] = uVar1;
  return;
}



/* ===== FUN_0001a7c4 @ 0001a7c4 size=52 ===== */

int FUN_0001a7c4(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == *param_1) {
    FUN_0001a758();
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return param_1[2] + iVar1 * 8;
}



/* ===== FUN_0001a7f8 @ 0001a7f8 size=60 ===== */

int FUN_0001a7f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = syscall(0xf0,param_1,param_2,param_3,0,param_2,param_3);
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    iVar1 = -*piVar2;
  }
  return iVar1;
}



/* ===== FUN_0001a834 @ 0001a834 size=132 ===== */

void FUN_0001a834(char *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = DAT_0001a8b8;
  puVar3 = (undefined4 *)(DAT_0001a8b8 + 0x1a850);
  iVar1 = FUN_0001a7f8(param_1,*puVar3,param_2);
  if (iVar1 == -0x26) {
    *puVar3 = 0;
    *(undefined4 *)(iVar2 + 0x1a854) = 1;
    iVar1 = FUN_0001a7f8(param_1,0,param_2);
  }
  if (-1 < iVar1) {
    return;
  }
  if (iVar1 == -0xb || iVar1 == -0x6e) {
    return;
  }
  if (iVar1 == -0xe) {
    iVar2 = DAT_0001a8bc + 0x1a8a0;
  }
  else {
    param_1 = strerror(-iVar1);
    iVar2 = (int)&DAT_0001a8b8 + DAT_0001a8c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00017ff4(iVar2,param_1);
}



/* ===== FUN_0001a8c4 @ 0001a8c4 size=100 ===== */

void FUN_0001a8c4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_0001a928;
  puVar4 = (undefined4 *)(DAT_0001a928 + 0x1a8e0);
  iVar2 = FUN_0001a7f8(param_1,*(undefined4 *)(DAT_0001a928 + 0x1a8e4),param_2);
  if (iVar2 == -0x26) {
    *(undefined4 *)(iVar1 + 0x1a8e4) = 1;
    *puVar4 = 0;
    iVar2 = FUN_0001a7f8(param_1,1,param_2);
  }
  if (-1 < iVar2) {
    return;
  }
  pcVar3 = strerror(-iVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00017ff4((int)&DAT_0001a928 + DAT_0001a92c,pcVar3);
}



/* ===== _DT_FINI @ 0001a930 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::qsort @ 0002d000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002d008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0002d00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_throw @ 0002d010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_throw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_end_catch @ 0002d014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_end_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002d018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002d01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002d020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete @ 0002d024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,nothrow_t *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 0002d028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.new @ 0002d02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002d030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002d034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 0002d038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_setspecific @ 0002d03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.new @ 0002d040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1,nothrow_t *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 0002d044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.new[] @ 0002d048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new__(uint param_1,nothrow_t *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0002d04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002d050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002d054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 0002d058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::posix_memalign @ 0002d05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_Unwind_DeleteException @ 0002d060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _Unwind_DeleteException(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 0002d064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_get_globals @ 0002d068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_get_globals(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002d06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002d070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete[] @ 0002d074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* operator delete[](void*) */

void operator_delete__(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002d078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_allocate_exception @ 0002d07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_allocate_exception(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0002d080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_tm_cleanup @ 0002d084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_tm_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete @ 0002d088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* operator delete(void*) */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.new[] @ 0002d08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new__(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002d090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_begin_catch @ 0002d094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_begin_catch(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 0002d098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__assert @ 0002d09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __assert(char *__assertion,char *__file,int __line)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syscall @ 0002d0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002d0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete[] @ 0002d0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete__(void *param_1,nothrow_t *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete @ 0002d0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* operator delete(void*, unsigned int) */

void operator_delete(void *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002d0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isspace @ 0002d0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isspace(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0002d0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002d0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_once @ 0002d0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_key_create @ 0002d0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete @ 0002d0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1,uint param_2,nothrow_t *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


