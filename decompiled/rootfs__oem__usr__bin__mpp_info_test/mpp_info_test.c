// mpp_info_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010b48 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::_mpp_err @ 00010b6c size=12 ===== */

void _mpp_err(void)

{
  (*(code *)PTR__mpp_err_0002200c)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010b78 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022010)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00010b84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00022014)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00010b90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00022018)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::feof @ 00010b9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_0002201c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00022020)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00022024)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 00010bcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002202c)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010bd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00022030)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00010be4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00022034)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00010bf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_00022038)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 00010bfc size=12 ===== */

void __fgetc_unlocked(void)

{
  (*(code *)PTR___fgetc_unlocked_0002203c)();
  return;
}



/* ===== <EXTERNAL>::fclose @ 00010c08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00022040)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fgetc @ 00010c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fgetc_00022044)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_create @ 00010c20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00022048)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::_mpp_log @ 00010c2c size=12 ===== */

void _mpp_log(void)

{
  (*(code *)PTR__mpp_log_0002204c)();
  return;
}



/* ===== <EXTERNAL>::pthread_cond_signal @ 00010c38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_signal_00022050)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00010c44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00022054)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_cond_timedwait @ 00010c50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_timedwait_00022058)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::pthread_cond_init @ 00010c5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_init_0002205c)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010c68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00022060)();
  return;
}



/* ===== <EXTERNAL>::show_mpp_version @ 00010c74 size=12 ===== */

void show_mpp_version(void)

{
  (*(code *)PTR_show_mpp_version_00022064)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00010c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00022068)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::mpp_env_set_u32 @ 00010c8c size=12 ===== */

void mpp_env_set_u32(void)

{
  (*(code *)PTR_mpp_env_set_u32_0002206c)();
  return;
}



/* ===== <EXTERNAL>::pthread_cond_destroy @ 00010c98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_destroy_00022070)(__cond);
  return iVar1;
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 00010ca4 size=12 ===== */

void __aeabi_idivmod(void)

{
  (*(code *)PTR___aeabi_idivmod_00022074)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010cbc size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002207c)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 00010cc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00022080)(__th);
  return iVar1;
}



/* ===== main @ 00010cd4 size=112 ===== */

undefined4 main(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00010d44 + 0x10cec;
  iVar2 = DAT_00010d48 + 0x10cf0;
  mpp_env_set_u32(iVar1,0);
  _mpp_log(iVar2,DAT_00010d4c + 0x10d08,0);
  show_mpp_version();
  mpp_env_set_u32(iVar1,1);
  _mpp_log(iVar2,DAT_00010d50 + 0x10d2c,0);
  show_mpp_version();
  mpp_env_set_u32(iVar1,0);
  return 0;
}



/* ===== _start @ 00010d54 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00022028)
            (DAT_00010d88,param_2,&stack0x00000004,DAT_00010d8c,DAT_00010d84,param_1);
  return;
}



/* ===== FUN_00010d90 @ 00010d90 size=32 ===== */

void FUN_00010d90(void)

{
  if (DAT_00010db4 == DAT_00010db0) {
    return;
  }
  if (DAT_00010db8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010db8)();
  return;
}



/* ===== _FINI_0 @ 00010df4 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010e30;
  if (*DAT_00010e30 != '\0') {
    return;
  }
  FUN_00010d90();
  if (DAT_00010e34 != 0) {
    __deregister_frame_info(DAT_00010e38);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010e3c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010e60 != 0) {
    __register_frame_info(DAT_00010e68,DAT_00010e64);
  }
  if ((DAT_00010dec - DAT_00010de8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010df0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010df0)();
  return;
}



/* ===== FUN_00010e6c @ 00010e6c size=844 ===== */

undefined4 FUN_00010e6c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar4;
  pthread_cond_t *__cond;
  undefined4 *puVar5;
  pthread_mutex_t *__mutex;
  undefined4 uVar6;
  timeval local_40;
  timespec local_38;
  timeval local_30;
  
  __cond = (pthread_cond_t *)(param_1 + 8);
  gettimeofday(&local_40,(__timezone_ptr_t)0x0);
  __mutex = (pthread_mutex_t *)(param_1 + 0x38);
  iVar2 = local_40.tv_usec / 1000;
  iVar1 = local_40.tv_sec * 1000;
  iVar3 = pthread_cond_init(__cond,(pthread_condattr_t *)0x0);
  if ((iVar3 == 0) && (iVar3 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0), iVar3 == 0))
  {
    iVar4 = DAT_000111b8 + 0x10efc;
    iVar3 = DAT_000111bc + 0x10f00;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 8);
    _mpp_log(0,iVar3,iVar4);
  }
  do {
    iVar3 = *(int *)(param_1 + 0x50);
    gettimeofday(&local_30,(__timezone_ptr_t)0x0);
    iVar3 = iVar3 * 10000000 + local_30.tv_usec;
    local_38.tv_sec = local_30.tv_sec + iVar3 / 1000000;
    local_38.tv_nsec = (iVar3 % 1000000) * 1000;
    pthread_mutex_lock(__mutex);
    if (*(int *)(param_1 + 0x50) == 0) {
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      pthread_mutex_unlock(__mutex);
      iVar3 = *(int *)(param_1 + 0x58);
joined_r0x000111b0:
      if (iVar3 == 0) goto LAB_00011100;
    }
    else {
      do {
        while (iVar3 = pthread_cond_timedwait(__cond,__mutex,&local_38), iVar3 == 0) {
          if (*(int *)(param_1 + 0x50) == 0) {
            *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
            pthread_mutex_unlock(__mutex);
            iVar3 = *(int *)(param_1 + 0x58);
            goto joined_r0x000111b0;
          }
        }
        iVar4 = *(int *)(param_1 + 0x50) + -1;
        *(int *)(param_1 + 0x50) = iVar4;
      } while (iVar4 != 0);
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      pthread_mutex_unlock(__mutex);
      if (*(int *)(param_1 + 0x58) == 0) goto LAB_00011100;
      if (iVar3 == 0x6e) {
        _mpp_err(0,DAT_000111dc + 0x11184,0);
        goto LAB_00011100;
      }
    }
    gettimeofday(&local_40,(__timezone_ptr_t)0x0);
    _mpp_log(0,DAT_000111c0 + 0x11000,0,
             (local_40.tv_sec * 1000 + local_40.tv_usec / 1000) - (iVar1 + iVar2),
             *(undefined4 *)(param_1 + 0x60));
    _mpp_log(0,DAT_000111c4 + 0x1102c,0,**(undefined4 **)(param_1 + 0x5c));
    puVar5 = *(undefined4 **)(param_1 + 0x5c);
    __aeabi_idivmod(*(undefined4 *)(param_1 + 0x60),*puVar5);
    (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 100),puVar5[extraout_r1 * 2 + 3]);
    pthread_mutex_lock(__mutex);
    puVar5 = *(undefined4 **)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x60);
    uVar6 = *puVar5;
    iVar4 = iVar3 + 1;
    *(int *)(param_1 + 0x60) = iVar4;
    __aeabi_idivmod(iVar3,uVar6);
    __aeabi_idivmod(iVar4,uVar6);
    uVar6 = puVar5[extraout_r1_01 * 2 + 2];
    _mpp_log(0,DAT_000111c8 + 0x110a4,0,puVar5[extraout_r1_00 * 2 + 2],uVar6);
    iVar3 = puVar5[extraout_r1_01 * 2 + 2];
    if ((int)puVar5[extraout_r1_00 * 2 + 2] < iVar3) {
LAB_000110cc:
      iVar3 = iVar3 - puVar5[extraout_r1_00 * 2 + 2];
      *(int *)(param_1 + 0x50) = iVar3;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
      if (0 < iVar4) {
        iVar3 = iVar3 + iVar4;
        goto LAB_000110cc;
      }
      iVar3 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    _mpp_log(0,DAT_000111d0 + 0x110ec,DAT_000111cc + 0x110e8,iVar3,uVar6);
    pthread_mutex_unlock(__mutex);
    if (*(int *)(param_1 + 0x58) == 0) {
LAB_00011100:
      pthread_cond_destroy(__cond);
      pthread_mutex_destroy(__mutex);
      _mpp_log(0,DAT_000111d8 + 0x11128,DAT_000111d4 + 0x11124);
      return 0;
    }
  } while( true );
}



/* ===== FUN_000111f4 @ 000111f4 size=56 ===== */

undefined4 FUN_000111f4(int param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 8));
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return 0;
}



/* ===== event_ctx_create @ 0001122c size=124 ===== */

int * event_ctx_create(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *__arg;
  
  __arg = malloc(0x68);
  iVar1 = DAT_000112a8;
  if (__arg == (int *)0x0) {
    _mpp_err(0,DAT_000112b0 + 0x112a4,0);
  }
  else {
    __arg[0x16] = 1;
    iVar2 = DAT_000112ac;
    __arg[0x17] = param_1;
    *__arg = iVar1 + 0x11268;
    __arg[1] = param_2;
    __arg[0x19] = param_3;
    __arg[0x18] = 0;
    pthread_create((pthread_t *)(__arg + 0x15),(pthread_attr_t *)0x0,
                   (__start_routine *)(iVar2 + 0x11288),__arg);
  }
  return __arg;
}



/* ===== event_ctx_release @ 000112b4 size=88 ===== */

void event_ctx_release(int param_1)

{
  void *pvStack_c;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    pthread_cond_signal((pthread_cond_t *)(param_1 + 8));
  }
  pthread_join(*(pthread_t *)(param_1 + 0x54),&pvStack_c);
  (*(code *)PTR_free_00022078)(param_1);
  return;
}



/* ===== FUN_00011300 @ 00011300 size=312 ===== */

char * FUN_00011300(undefined4 *param_1)

{
  int iVar1;
  FILE *__stream;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  byte *pbVar5;
  char *pcVar6;
  char *__s;
  int iVar7;
  undefined1 *puVar8;
  
LAB_0001130c:
  if (param_1[0x21] == 0) {
    puVar8 = (undefined1 *)((int)param_1 + 3);
    iVar7 = 0;
    do {
      __stream = (FILE *)*param_1;
      if (__stream->_chain == (_IO_FILE *)0x0) {
        uVar2 = fgetc(__stream);
        if (iVar7 == 0 && uVar2 == 0xffffffff) {
          return (char *)0x0;
        }
LAB_00011384:
        if (uVar2 == 0xffffffff) goto LAB_000113b4;
        __stream = (FILE *)*param_1;
      }
      else {
        pbVar5 = (byte *)__stream->_IO_write_base;
        if (__stream->_IO_write_end <= pbVar5) {
          uVar2 = __fgetc_unlocked();
          if (iVar7 == 0 && uVar2 == 0xffffffff) {
            return (char *)0x0;
          }
          goto LAB_00011384;
        }
        __stream->_IO_write_base = (char *)(pbVar5 + 1);
        uVar2 = (uint)*pbVar5;
      }
      iVar1 = feof(__stream);
      if (uVar2 == 10 || iVar1 != 0) goto LAB_000113b4;
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = (char)uVar2;
    } while( true );
  }
  cVar4 = *(char *)(param_1 + 1);
  goto LAB_000113c8;
LAB_000113b4:
  *(undefined1 *)((int)param_1 + iVar7 + 4) = 0;
  cVar4 = *(char *)(param_1 + 1);
  if (cVar4 != '#') {
LAB_000113c8:
    __s = (char *)(param_1 + 1);
    param_1[0x21] = 1;
    while (cVar4 == ' ') {
      __s = __s + 1;
      cVar4 = *__s;
    }
    pcVar3 = (char *)strlen(__s);
    if ((__s + (int)pcVar3)[-1] == ' ') {
      pcVar6 = __s + (int)(pcVar3 + -2);
      do {
        pcVar3 = pcVar6 + (1 - (int)__s);
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + -1;
      } while (cVar4 == ' ');
    }
    __s[(int)pcVar3] = '\0';
    return __s;
  }
  goto LAB_0001130c;
}



/* ===== mpp_parse_config @ 00011438 size=1792 ===== */

undefined4 mpp_parse_config(char *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  char *__s1;
  char *__s1_00;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *__format;
  int iVar10;
  int iVar11;
  char *pcVar12;
  bool bVar13;
  FILE *local_b0 [33];
  undefined4 local_2c;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    _mpp_err(0,DAT_00011bb0 + 0x11b18);
    uVar7 = 0xffffffff;
  }
  else {
    local_b0[0] = fopen64(param_1,(char *)(DAT_00011b38 + 0x11464));
    if (local_b0[0] == (FILE *)0x0) {
      _mpp_err(0,DAT_00011bb4 + 0x11b30,0,param_1);
      uVar7 = 0xffffffff;
    }
    else {
      __s1 = (char *)(DAT_00011b3c + 0x1148c);
      __format = (char *)(DAT_00011b40 + 0x11490);
      iVar10 = DAT_00011b44 + 0x11498;
      __s1_00 = (char *)(DAT_00011b48 + 0x114a0);
      local_2c = 0;
LAB_000114c0:
      pcVar2 = (char *)FUN_00011300(local_b0);
      if (pcVar2 != (char *)0x0) {
        local_2c = 0;
        if (*pcVar2 == '[') {
          iVar3 = strncmp(__s1,pcVar2,8);
          if (iVar3 == 0) {
            iVar3 = 0;
            pcVar9 = __s1;
          }
          else {
            iVar3 = strncmp(__s1_00,pcVar2,7);
            if (iVar3 == 0) {
              iVar3 = 1;
              pcVar9 = __s1_00;
            }
            else {
              pcVar9 = (char *)(DAT_00011b4c + 0x11530);
              iVar3 = strncmp(pcVar9,pcVar2,5);
              if (iVar3 == 0) {
                iVar3 = 2;
              }
              else {
                pcVar9 = (char *)(DAT_00011b50 + 0x11550);
                iVar3 = strncmp(pcVar9,pcVar2,4);
                if (iVar3 == 0) {
                  iVar3 = 3;
                }
                else {
                  pcVar9 = (char *)(DAT_00011b54 + 0x11570);
                  iVar3 = strncmp(pcVar9,pcVar2,3);
                  if (iVar3 == 0) {
                    iVar3 = 4;
                  }
                  else {
                    pcVar9 = (char *)(DAT_00011b58 + 0x11590);
                    iVar3 = strncmp(pcVar9,pcVar2,4);
                    if (iVar3 != 0) goto LAB_0001159c;
                    iVar3 = 5;
                  }
                }
              }
            }
          }
          _mpp_log(0,DAT_00011b60 + 0x115e0,0,pcVar9);
          iVar3 = *(int *)(DAT_00011b64 + 0x115ec + iVar3 * 8);
          if (iVar3 == 0) {
            iVar3 = DAT_00011b68 + 0x11608;
            pcVar2 = (char *)(DAT_00011b6c + 0x11610);
            iVar11 = DAT_00011b70 + 0x11614;
            while ((pcVar9 = (char *)FUN_00011300(local_b0), pcVar9 != (char *)0x0 &&
                   (*pcVar9 != '\n' && *pcVar9 != '['))) {
              iVar4 = strncmp(pcVar2,pcVar9,8);
              if (iVar4 == 0) {
                iVar4 = 0;
LAB_00011710:
                _mpp_log(0,iVar11);
                iVar4 = *(int *)(iVar3 + iVar4 * 8);
                if (iVar4 == 2) {
                  sVar5 = strlen(pcVar9);
                  pcVar6 = (char *)0x0;
                  if (sVar5 != 0) {
                    if (*pcVar9 == ':') {
                      pcVar12 = (char *)0x1;
                    }
                    else {
                      pcVar6 = pcVar9;
                      do {
                        bVar13 = pcVar6 == pcVar9 + (sVar5 - 1);
                        pcVar6 = pcVar6 + 1;
                        pcVar12 = pcVar6 + (1 - (int)pcVar9);
                        if (bVar13) {
                          pcVar6 = (char *)0x0;
                          goto LAB_0001177c;
                        }
                      } while (*pcVar6 != ':');
                    }
                    pcVar6 = pcVar9 + (int)pcVar12;
                    if (pcVar6 != (char *)0x0) {
                      cVar1 = pcVar9[(int)pcVar12];
                      while (cVar1 == ' ') {
                        pcVar6 = pcVar6 + 1;
                        cVar1 = *pcVar6;
                      }
                      pcVar9 = (char *)strlen(pcVar6);
                      if ((pcVar6 + (int)pcVar9)[-1] == ' ') {
                        pcVar12 = pcVar6 + (int)(pcVar9 + -2);
                        do {
                          pcVar9 = pcVar12 + (1 - (int)pcVar6);
                          cVar1 = *pcVar12;
                          pcVar12 = pcVar12 + -1;
                        } while (cVar1 == ' ');
                      }
                      pcVar6[(int)pcVar9] = '\0';
                    }
                  }
LAB_0001177c:
                  iVar4 = strncmp((char *)(DAT_00011b88 + 0x11790),pcVar6,8);
                  if (iVar4 == 0) {
                    iVar4 = 0;
LAB_00011a44:
                    _mpp_log(0,DAT_00011ba8 + 0x11a58);
                    uVar7 = *(undefined4 *)(DAT_00011bac + 0x11a64 + iVar4 * 8);
                  }
                  else {
                    iVar4 = strncmp((char *)(DAT_00011b8c + 0x117b0),pcVar6,7);
                    if (iVar4 == 0) {
                      iVar4 = 1;
                      goto LAB_00011a44;
                    }
                    iVar4 = strncmp((char *)(DAT_00011b90 + 0x117d0),pcVar6,5);
                    if (iVar4 == 0) {
                      iVar4 = 2;
                      goto LAB_00011a44;
                    }
                    iVar4 = strncmp((char *)(DAT_00011b94 + 0x117f0),pcVar6,4);
                    if (iVar4 == 0) {
                      iVar4 = 3;
                      goto LAB_00011a44;
                    }
                    iVar4 = strncmp((char *)(DAT_00011b98 + 0x11810),pcVar6,3);
                    if (iVar4 == 0) {
                      iVar4 = 4;
                      goto LAB_00011a44;
                    }
                    iVar4 = strncmp((char *)(DAT_00011b9c + 0x11830),pcVar6,4);
                    if (iVar4 == 0) {
                      iVar4 = 5;
                      goto LAB_00011a44;
                    }
                    uVar7 = 0xffffffff;
                  }
                  *param_2 = uVar7;
                }
                else if (iVar4 == 3) {
                  sVar5 = strlen(pcVar9);
                  pcVar6 = (char *)0x0;
                  if (sVar5 != 0) {
                    if (*pcVar9 == ':') {
                      pcVar12 = (char *)0x1;
                    }
                    else {
                      pcVar6 = pcVar9;
                      do {
                        bVar13 = pcVar6 == pcVar9 + (sVar5 - 1);
                        pcVar6 = pcVar6 + 1;
                        pcVar12 = pcVar6 + (1 - (int)pcVar9);
                        if (bVar13) {
                          pcVar6 = (char *)0x0;
                          goto LAB_000118a8;
                        }
                      } while (*pcVar6 != ':');
                    }
                    pcVar6 = pcVar9 + (int)pcVar12;
                    if (pcVar6 != (char *)0x0) {
                      cVar1 = pcVar9[(int)pcVar12];
                      while (cVar1 == ' ') {
                        pcVar6 = pcVar6 + 1;
                        cVar1 = *pcVar6;
                      }
                      pcVar9 = (char *)strlen(pcVar6);
                      if ((pcVar6 + (int)pcVar9)[-1] == ' ') {
                        pcVar12 = pcVar6 + (int)(pcVar9 + -2);
                        do {
                          pcVar9 = pcVar12 + (1 - (int)pcVar6);
                          cVar1 = *pcVar12;
                          pcVar12 = pcVar12 + -1;
                        } while (cVar1 == ' ');
                      }
                      pcVar6[(int)pcVar9] = '\0';
                    }
                  }
LAB_000118a8:
                  sscanf(pcVar6,(char *)(DAT_00011ba0 + 0x118bc),param_2 + 1);
                  _mpp_log(0,DAT_00011ba4 + 0x118d4,0,param_2[1]);
                }
              }
              else {
                iVar4 = strncmp((char *)(DAT_00011b74 + 0x11644),pcVar9,7);
                if (iVar4 == 0) {
                  iVar4 = 1;
                  goto LAB_00011710;
                }
                iVar4 = strncmp((char *)(DAT_00011b78 + 0x11664),pcVar9,5);
                if (iVar4 == 0) {
                  iVar4 = 2;
                  goto LAB_00011710;
                }
                iVar4 = strncmp((char *)(DAT_00011b7c + 0x11684),pcVar9,4);
                if (iVar4 == 0) {
                  iVar4 = 3;
                  goto LAB_00011710;
                }
                iVar4 = strncmp((char *)(DAT_00011b80 + 0x116a4),pcVar9,3);
                if (iVar4 == 0) {
                  iVar4 = 4;
                  goto LAB_00011710;
                }
                iVar4 = strncmp((char *)(DAT_00011b84 + 0x116c4),pcVar9,4);
                if (iVar4 == 0) {
                  iVar4 = 5;
                  goto LAB_00011710;
                }
              }
              local_2c = 0;
            }
          }
          else {
            if (iVar3 != 1) {
LAB_0001159c:
              _mpp_err(0,DAT_00011b5c + 0x115b0);
              fclose(local_b0[0]);
              return 0xffffffff;
            }
            iVar3 = 0;
            puVar8 = param_2;
            do {
              pcVar2 = (char *)FUN_00011300(local_b0);
              if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\n' || *pcVar2 == '[')) {
                param_2[0x182] = iVar3;
                break;
              }
              iVar3 = iVar3 + 1;
              sscanf(pcVar2,__format,puVar8 + 2,puVar8 + 4,puVar8 + 3);
              _mpp_log(0,iVar10,0,puVar8[2],puVar8[4]);
              local_2c = 0;
              puVar8 = puVar8 + 3;
            } while (iVar3 != 0x80);
          }
        }
        goto LAB_000114c0;
      }
      fclose(local_b0[0]);
      uVar7 = 0;
    }
  }
  return uVar7;
}



/* ===== _fini @ 00011bb8 size=16 ===== */

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



/* ===== <EXTERNAL>::mpp_env_set_u32 @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mpp_env_set_u32(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_timedwait @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_mpp_err @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _mpp_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_mpp_log @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _mpp_log(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgetc @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fgetc(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_signal @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

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



/* ===== <EXTERNAL>::strlen @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

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



/* ===== <EXTERNAL>::sscanf @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_init @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::feof @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_destroy @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::show_mpp_version @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void show_mpp_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fgetc_unlocked @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fgetc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_cond_destroy @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


