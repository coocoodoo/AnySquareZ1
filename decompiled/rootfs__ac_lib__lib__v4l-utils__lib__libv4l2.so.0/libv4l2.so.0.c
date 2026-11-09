// libv4l2.so.0 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010fb8 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::v4lconvert_vidioc_queryctrl @ 00010fdc size=12 ===== */

void v4lconvert_vidioc_queryctrl(void)

{
  (*(code *)PTR_v4lconvert_vidioc_queryctrl_0002c00c)();
  return;
}



/* ===== <EXTERNAL>::dlerror @ 00010fe8 size=12 ===== */

void dlerror(void)

{
  (*(code *)PTR_dlerror_0002c010)();
  return;
}



/* ===== <EXTERNAL>::sysconf @ 00010ff4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_0002c014)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011000 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002c018)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::snprintf @ 0001100c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002c01c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::syscall @ 00011018 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_0002c020)(__sysno);
  return lVar1;
}



/* ===== <EXTERNAL>::v4lconvert_get_default_dev_ops @ 00011024 size=12 ===== */

void v4lconvert_get_default_dev_ops(void)

{
  (*(code *)PTR_v4lconvert_get_default_dev_ops_0002c024)();
  return;
}



/* ===== <EXTERNAL>::v4lconvert_vidioc_s_ext_ctrls @ 00011030 size=12 ===== */

void v4lconvert_vidioc_s_ext_ctrls(void)

{
  (*(code *)PTR_v4lconvert_vidioc_s_ext_ctrls_0002c028)();
  return;
}



/* ===== <EXTERNAL>::v4lconvert_vidioc_s_ctrl @ 0001103c size=12 ===== */

void v4lconvert_vidioc_s_ctrl(void)

{
  (*(code *)PTR_v4lconvert_vidioc_s_ctrl_0002c02c)();
  return;
}



/* ===== <EXTERNAL>::getenv @ 00011048 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002c030)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::v4lconvert_enum_fmt @ 00011054 size=12 ===== */

void v4lconvert_enum_fmt(void)

{
  (*(code *)PTR_v4lconvert_enum_fmt_0002c034)();
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00011060 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002c038)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::glob @ 0001106c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int glob(char *__pattern,int __flags,__errfunc *__errfunc,glob_t *__pglob)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_glob_0002c03c)(__pattern);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00011078 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0002c040)();
  return;
}



/* ===== v4l2_fd_open @ 00011084 size=12 ===== */

void v4l2_fd_open(void)

{
  (*(code *)PTR_v4l2_fd_open_0002c044)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 00011090 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0002c048)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::v4lconvert_convert @ 0001109c size=12 ===== */

void v4lconvert_convert(void)

{
  (*(code *)PTR_v4lconvert_convert_0002c04c)();
  return;
}



/* ===== <EXTERNAL>::dlclose @ 000110a8 size=12 ===== */

void dlclose(void)

{
  (*(code *)PTR_dlclose_0002c050)();
  return;
}



/* ===== <EXTERNAL>::v4lconvert_create_with_dev_ops @ 000110b4 size=12 ===== */

void v4lconvert_create_with_dev_ops(void)

{
  (*(code *)PTR_v4lconvert_create_with_dev_ops_0002c054)();
  return;
}



/* ===== <EXTERNAL>::v4lconvert_enum_frameintervals @ 000110c0 size=12 ===== */

void v4lconvert_enum_frameintervals(void)

{
  (*(code *)PTR_v4lconvert_enum_frameintervals_0002c058)();
  return;
}



/* ===== <EXTERNAL>::v4lconvert_enum_framesizes @ 000110cc size=12 ===== */

void v4lconvert_enum_framesizes(void)

{
  (*(code *)PTR_v4lconvert_enum_framesizes_0002c05c)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 000110d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002c060)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000110e4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002c064)();
  return;
}



/* ===== <EXTERNAL>::v4lconvert_get_error_message @ 000110f0 size=12 ===== */

void v4lconvert_get_error_message(void)

{
  (*(code *)PTR_v4lconvert_get_error_message_0002c068)();
  return;
}



/* ===== <EXTERNAL>::v4lconvert_vidioc_g_ext_ctrls @ 000110fc size=12 ===== */

void v4lconvert_vidioc_g_ext_ctrls(void)

{
  (*(code *)PTR_v4lconvert_vidioc_g_ext_ctrls_0002c06c)();
  return;
}



/* ===== <EXTERNAL>::v4lconvert_set_fps @ 00011108 size=12 ===== */

void v4lconvert_set_fps(void)

{
  (*(code *)PTR_v4lconvert_set_fps_0002c070)();
  return;
}



/* ===== <EXTERNAL>::dlopen @ 00011114 size=12 ===== */

void dlopen(void)

{
  (*(code *)PTR_dlopen_0002c074)();
  return;
}



/* ===== <EXTERNAL>::realloc @ 00011120 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002c078)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::dlsym @ 0001112c size=12 ===== */

void dlsym(void)

{
  (*(code *)PTR_dlsym_0002c07c)();
  return;
}



/* ===== <EXTERNAL>::v4lconvert_needs_conversion @ 00011138 size=12 ===== */

void v4lconvert_needs_conversion(void)

{
  (*(code *)PTR_v4lconvert_needs_conversion_0002c080)();
  return;
}



/* ===== <EXTERNAL>::fopen @ 00011144 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0002c084)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 00011150 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002c088)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::v4lconvert_fixup_fmt @ 0001115c size=12 ===== */

void v4lconvert_fixup_fmt(void)

{
  (*(code *)PTR_v4lconvert_fixup_fmt_0002c08c)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00011168 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0002c090)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::v4lconvert_supported_dst_format @ 00011174 size=12 ===== */

void v4lconvert_supported_dst_format(void)

{
  (*(code *)PTR_v4lconvert_supported_dst_format_0002c094)();
  return;
}



/* ===== <EXTERNAL>::v4lconvert_vidioc_try_ext_ctrls @ 00011180 size=12 ===== */

void v4lconvert_vidioc_try_ext_ctrls(void)

{
  (*(code *)PTR_v4lconvert_vidioc_try_ext_ctrls_0002c098)();
  return;
}



/* ===== <EXTERNAL>::v4lconvert_try_format @ 0001118c size=12 ===== */

void v4lconvert_try_format(void)

{
  (*(code *)PTR_v4lconvert_try_format_0002c09c)();
  return;
}



/* ===== <EXTERNAL>::v4lconvert_destroy @ 00011198 size=12 ===== */

void v4lconvert_destroy(void)

{
  (*(code *)PTR_v4lconvert_destroy_0002c0a0)();
  return;
}



/* ===== <EXTERNAL>::globfree @ 000111a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void globfree(glob_t *__pglob)

{
  (*(code *)PTR_globfree_0002c0a4)(__pglob);
  return;
}



/* ===== <EXTERNAL>::fwrite @ 000111b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002c0a8)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::v4lconvert_vidioc_g_ctrl @ 000111bc size=12 ===== */

void v4lconvert_vidioc_g_ctrl(void)

{
  (*(code *)PTR_v4lconvert_vidioc_g_ctrl_0002c0ac)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 000111c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0002c0b0)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000111d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002c0b4)();
  return piVar1;
}



/* ===== <EXTERNAL>::v4lconvert_supported_dst_fmt_only @ 000111e0 size=12 ===== */

void v4lconvert_supported_dst_fmt_only(void)

{
  (*(code *)PTR_v4lconvert_supported_dst_fmt_only_0002c0b8)();
  return;
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 000111ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0002c0bc)(__mutex);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000111f8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002c0c0)();
  return;
}



/* ===== <EXTERNAL>::raise @ 00011204 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002c0c4)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011210 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002c0c8)(__ptr);
  return;
}



/* ===== entry @ 0001121c size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00011268 + 0x11234 == DAT_00011264 + 0x1122c) {
    return;
  }
  pcVar1 = *(code **)(DAT_0001126c + 0x1123c + DAT_00011270);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000112d8 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_0001134c + 0x112f4;
  if (*(char *)(DAT_00011348 + 0x112e8) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00011350) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00011354 + 0x11314));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00011358) != 0) {
    __deregister_frame_info(DAT_0001135c + 0x11334);
  }
  *(undefined1 *)(DAT_00011360 + 0x11344) = 1;
  return;
}



/* ===== _INIT_0 @ 00011364 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_0001139c + 0x11374 + DAT_000113a0) != 0) {
    __register_frame_info(DAT_000113a8 + 0x11394,DAT_000113a4 + 0x11390);
  }
  if (((DAT_000112cc + 0x1128c) - (DAT_000112c8 + 0x11284) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000112d0 + 0x11294 + DAT_000112d4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_000113ac @ 000113ac size=524 ===== */

undefined4 FUN_000113ac(int param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_000115b8 + 0x113c8;
  if (*(int *)(DAT_000115bc + param_1 * 800 + 0x115a8) == -1) {
    *(int *)(DAT_000115c8 + param_1 * 800 + 0x11620) =
         *(int *)((int)&DAT_000115e4 + DAT_000115c4 + param_1 * 800) *
         *(int *)((int)&DAT_000115e0 + DAT_000115c0 + param_1 * 800);
    lVar1 = syscall(0xc0,0,*(undefined4 *)(DAT_000115cc + param_1 * 800 + 0x11640),3,0x22,0xffffffff
                    ,0);
    *(long *)(DAT_000115d0 + param_1 * 800 + 0x1168c) = lVar1;
    if (*(int *)(DAT_000115d4 + param_1 * 800 + 0x116ac) == -1) {
      *(undefined4 *)(DAT_000115d8 + param_1 * 800 + 0x116d8) = 0;
      piVar2 = __errno_location();
      iVar4 = *piVar2;
      if (**(int **)(iVar5 + DAT_000115dc) == 0) {
        fwrite((void *)(DAT_000115e8 + 0x11590),1,0x2c,
               (FILE *)**(undefined4 **)(iVar5 + DAT_000115e4));
      }
      else {
        fwrite((void *)(DAT_000115e0 + 71000),1,0x2c,(FILE *)**(undefined4 **)(iVar5 + DAT_000115dc)
              );
        fflush((FILE *)**(undefined4 **)(iVar5 + DAT_000115dc));
      }
      piVar2 = __errno_location();
      *piVar2 = iVar4;
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_000115ec @ 000115ec size=604 ===== */

int FUN_000115ec(int param_1)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  FILE *__stream;
  uint local_34 [5];
  int local_20;
  int local_1c;
  
  iVar4 = DAT_00011848 + 0x11608;
  if (*(int *)(DAT_0001184c + param_1 * 800 + 0x117d4) == 0) {
    local_34[0] = *(uint *)(DAT_00011854 + param_1 * 800 + 0x11824);
  }
  else {
    local_34[0] = *(uint *)(DAT_00011850 + param_1 * 800 + 0x117fc);
  }
  local_34[1] = 1;
  local_34[2] = 1;
  local_1c = (**(code **)(*(int *)(DAT_00011858 + param_1 * 800 + 0x119ac) + 8))
                       (*(undefined4 *)(DAT_0001185c + param_1 * 800 + 0x119cc),
                        *(undefined4 *)(DAT_00011860 + 0x116d4 + param_1 * 800),0xc0145608,local_34)
  ;
  if (local_1c < 0) {
    piVar2 = __errno_location();
    uVar1 = local_34[0];
    local_20 = *piVar2;
    if (**(int **)(iVar4 + DAT_00011864) != 0) {
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00011864);
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      fprintf(__stream,(char *)(DAT_00011868 + 0x11760),uVar1,pcVar3);
      fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00011864));
    }
    piVar2 = __errno_location();
    *piVar2 = local_20;
  }
  else {
    if ((*(int *)(DAT_0001186c + param_1 * 800 + 0x11960) == 0) && (local_34[0] != 0)) {
      *(uint *)(DAT_00011874 + param_1 * 800 + 0x117f8) =
           *(uint *)(DAT_00011870 + param_1 * 800 + 0x117d4) | 0x200;
    }
    if (0x1f < local_34[0]) {
      local_34[0] = 0x20;
    }
    *(uint *)(DAT_00011878 + param_1 * 800 + 0x119e8) = local_34[0];
    local_1c = 0;
  }
  return local_1c;
}



/* ===== FUN_0001187c @ 0001187c size=428 ===== */

void FUN_0001187c(int param_1)

{
  int iVar1;
  uint local_24 [6];
  
  if (((*(uint *)(DAT_00011a28 + param_1 * 800 + 0x1189c) & 0x200) != 0) &&
     (*(int *)(DAT_00011a2c + param_1 * 800 + 0x11a88) != 0)) {
    local_24[0] = 0;
    local_24[1] = 1;
    local_24[2] = 1;
    iVar1 = (**(code **)(*(int *)(DAT_00011a30 + param_1 * 800 + 0x11c20) + 8))
                      (*(undefined4 *)(DAT_00011a34 + param_1 * 800 + 0x11c40),
                       *(undefined4 *)(DAT_00011a38 + 0x11948 + param_1 * 800),0xc0145608,local_24);
    if (-1 < iVar1) {
      if (0x1f < local_24[0]) {
        local_24[0] = 0x20;
      }
      *(uint *)(DAT_00011a3c + param_1 * 800 + 0x11b54) = local_24[0];
      if (*(int *)(DAT_00011a40 + param_1 * 800 + 0x11b74) == 0) {
        *(uint *)(DAT_00011a48 + param_1 * 800 + 0x11a00) =
             *(uint *)(DAT_00011a44 + param_1 * 800 + 0x119dc) & 0xfffffdff;
      }
    }
  }
  return;
}



/* ===== FUN_00011a4c @ 00011a4c size=1200 ===== */

int FUN_00011a4c(int param_1)

{
  int *piVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  FILE *pFVar5;
  uint local_64 [12];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  iVar4 = DAT_00011efc + 0x11a68;
  local_14 = 0;
  local_18 = 0;
  do {
    if (*(uint *)(DAT_00011f48 + param_1 * 800 + 0x12090) <= local_18) {
      return local_14;
    }
    if (*(int *)(DAT_00011f00 + (param_1 * 200 + local_18 + 0x78) * 4 + 0x11a88) == -1) {
      local_64[1] = 1;
      local_34 = 1;
      local_64[0] = local_18;
      local_28 = 0;
      local_24 = 0;
      local_14 = (**(code **)(*(int *)(DAT_00011f04 + param_1 * 800 + 0x11dfc) + 8))
                           (*(undefined4 *)(DAT_00011f08 + param_1 * 800 + 0x11e1c),
                            *(undefined4 *)(DAT_00011f0c + 0x11b24 + param_1 * 800),0xc0445609,
                            local_64);
      if (local_14 != 0) {
        piVar1 = __errno_location();
        local_1c = *piVar1;
        piVar1 = __errno_location();
        if (*piVar1 == 0x13) {
          *(undefined4 *)(DAT_00011f10 + param_1 * 800 + 0x11b90) = 1;
        }
        else if (**(int **)(iVar4 + DAT_00011f14) == 0) {
          pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00011f1c);
          piVar1 = __errno_location();
          pcVar2 = strerror(*piVar1);
          fprintf(pFVar5,(char *)(DAT_00011f20 + 0x11c38),local_18,pcVar2);
        }
        else {
          pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00011f14);
          piVar1 = __errno_location();
          pcVar2 = strerror(*piVar1);
          fprintf(pFVar5,(char *)(DAT_00011f18 + 0x11be8),local_18,pcVar2);
          fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00011f14));
        }
        piVar1 = __errno_location();
        *piVar1 = local_1c;
        return local_14;
      }
      lVar3 = syscall(0xc0,0,local_2c,3,1,*(undefined4 *)(DAT_00011f24 + 0x11c60 + param_1 * 800),
                      local_30 >> 0xc);
      *(long *)(DAT_00011f28 + (param_1 * 200 + local_18 + 0x78) * 4 + 0x11cb4) = lVar3;
      if (*(int *)(DAT_00011f2c + (param_1 * 200 + local_18 + 0x78) * 4 + 0x11ce0) == -1) {
        piVar1 = __errno_location();
        local_20 = *piVar1;
        piVar1 = __errno_location();
        if (*piVar1 == 0x13) {
          *(undefined4 *)(DAT_00011f30 + param_1 * 800 + 0x11d40) = 1;
        }
        else if (**(int **)(iVar4 + DAT_00011f14) == 0) {
          pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00011f1c);
          piVar1 = __errno_location();
          pcVar2 = strerror(*piVar1);
          fprintf(pFVar5,(char *)(DAT_00011f38 + 0x11de8),local_18,pcVar2);
        }
        else {
          pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00011f14);
          piVar1 = __errno_location();
          pcVar2 = strerror(*piVar1);
          fprintf(pFVar5,(char *)(DAT_00011f34 + 0x11d98),local_18,pcVar2);
          fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00011f14));
        }
        piVar1 = __errno_location();
        *piVar1 = local_20;
        return -1;
      }
      if (**(int **)(iVar4 + DAT_00011f14) != 0) {
        fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00011f14),(char *)(DAT_00011f40 + 0x11e64),
                local_18,*(undefined4 *)
                          (DAT_00011f3c + (param_1 * 200 + local_18 + 0x78) * 4 + 0x11e38));
        fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00011f14));
      }
      *(undefined4 *)(DAT_00011f44 + (param_1 * 200 + local_18 + 0x98) * 4 + 0x11e90) = local_2c;
    }
    local_18 = local_18 + 1;
  } while( true );
}



/* ===== FUN_00011f4c @ 00011f4c size=380 ===== */

void FUN_00011f4c(int param_1)

{
  int iVar1;
  undefined4 local_14;
  
  iVar1 = DAT_000120c8 + 0x11f68;
  for (local_14 = 0; local_14 < *(uint *)(DAT_000120e4 + param_1 * 800 + 0x12260);
      local_14 = local_14 + 1) {
    if (*(int *)(DAT_000120cc + (param_1 * 200 + local_14 + 0x78) * 4 + 0x11f80) != -1) {
      syscall(0x5b,*(undefined4 *)(DAT_000120d0 + (param_1 * 200 + local_14 + 0x78) * 4 + 0x11fb4),
              *(undefined4 *)(DAT_000120d4 + (param_1 * 200 + local_14 + 0x98) * 4 + 0x11fe0));
      *(undefined4 *)(DAT_000120d8 + (param_1 * 200 + local_14 + 0x78) * 4 + 0x1201c) = 0xffffffff;
      if (**(int **)(iVar1 + DAT_000120dc) != 0) {
        fprintf((FILE *)**(undefined4 **)(iVar1 + DAT_000120dc),(char *)(DAT_000120e0 + 0x1206c),
                local_14);
        fflush((FILE *)**(undefined4 **)(iVar1 + DAT_000120dc));
      }
    }
  }
  return;
}



/* ===== FUN_000120e8 @ 000120e8 size=588 ===== */

int FUN_000120e8(int param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  FILE *pFVar4;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  iVar3 = DAT_00012334 + 0x12104;
  local_1c = 1;
  if ((*(uint *)(DAT_00012338 + param_1 * 800 + 0x12118) & 0x100) == 0) {
    local_14 = (**(code **)(*(int *)(DAT_0001233c + param_1 * 800 + 0x1245c) + 8))
                         (*(undefined4 *)(DAT_00012340 + param_1 * 800 + 0x1247c),
                          *(undefined4 *)(DAT_00012344 + 0x12184 + param_1 * 800),0x40045612,
                          &local_1c);
    if (local_14 != 0) {
      piVar1 = __errno_location();
      local_18 = *piVar1;
      piVar1 = __errno_location();
      if (*piVar1 == 0x13) {
        *(undefined4 *)(DAT_00012348 + param_1 * 800 + 0x121f0) = 1;
      }
      else if (**(int **)(iVar3 + DAT_0001234c) == 0) {
        pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00012354);
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        fprintf(pFVar4,(char *)(DAT_00012358 + 0x1229c),pcVar2);
      }
      else {
        pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_0001234c);
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        fprintf(pFVar4,(char *)(DAT_00012350 + 0x12248),pcVar2);
        fflush((FILE *)**(undefined4 **)(iVar3 + DAT_0001234c));
      }
      piVar1 = __errno_location();
      *piVar1 = local_18;
      return local_14;
    }
    *(uint *)(DAT_00012360 + param_1 * 800 + 0x122f0) =
         *(uint *)(DAT_0001235c + param_1 * 800 + 0x122cc) | 0x100;
    *(undefined4 *)(DAT_00012364 + param_1 * 800 + 0x124dc) = 3;
  }
  return 0;
}



/* ===== FUN_00012368 @ 00012368 size=588 ===== */

int FUN_00012368(int param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  FILE *pFVar4;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  iVar3 = DAT_000125b4 + 0x12384;
  local_1c = 1;
  if ((*(uint *)(DAT_000125b8 + param_1 * 800 + 0x12398) & 0x100) != 0) {
    local_14 = (**(code **)(*(int *)(DAT_000125bc + param_1 * 800 + 0x126dc) + 8))
                         (*(undefined4 *)(DAT_000125c0 + param_1 * 800 + 0x126fc),
                          *(undefined4 *)(DAT_000125c4 + 0x12404 + param_1 * 800),0x40045613,
                          &local_1c);
    if (local_14 != 0) {
      piVar1 = __errno_location();
      local_18 = *piVar1;
      piVar1 = __errno_location();
      if (*piVar1 == 0x13) {
        *(undefined4 *)(DAT_000125c8 + param_1 * 800 + 0x12470) = 1;
      }
      else if (**(int **)(iVar3 + DAT_000125cc) == 0) {
        pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_000125d4);
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        fprintf(pFVar4,(char *)(DAT_000125d8 + 0x1251c),pcVar2);
      }
      else {
        pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_000125cc);
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        fprintf(pFVar4,(char *)(DAT_000125d0 + 0x124c8),pcVar2);
        fflush((FILE *)**(undefined4 **)(iVar3 + DAT_000125cc));
      }
      piVar1 = __errno_location();
      *piVar1 = local_18;
      return local_14;
    }
    *(uint *)(DAT_000125e0 + param_1 * 800 + 0x12570) =
         *(uint *)(DAT_000125dc + param_1 * 800 + 0x1254c) & 0xfffffeff;
    *(undefined4 *)((int)&DAT_00012870 + DAT_000125e4 + param_1 * 800) = 0;
  }
  return 0;
}



/* ===== FUN_000125e8 @ 000125e8 size=612 ===== */

int FUN_000125e8(int param_1,uint param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  FILE *pFVar4;
  uint local_5c [12];
  undefined4 local_2c;
  int local_18;
  int local_14;
  
  iVar3 = DAT_0001284c + 0x12608;
  if ((*(int *)(DAT_00012850 + param_1 * 800 + 0x128f4) >> (param_2 & 0xff) & 1U) == 0) {
    memset(local_5c,0,0x44);
    local_5c[1] = 1;
    local_2c = 1;
    local_5c[0] = param_2;
    local_14 = (**(code **)(*(int *)(DAT_00012854 + param_1 * 800 + 0x12994) + 8))
                         (*(undefined4 *)(DAT_00012858 + param_1 * 800 + 0x129b4),
                          *(undefined4 *)(DAT_0001285c + 0x126bc + param_1 * 800),0xc044560f,
                          local_5c);
    if (local_14 == 0) {
      *(uint *)(DAT_00012878 + param_1 * 800 + 0x12b0c) =
           *(uint *)(DAT_00012874 + param_1 * 800 + 0x12adc) | 1 << (param_2 & 0xff);
      local_14 = 0;
    }
    else {
      piVar1 = __errno_location();
      local_18 = *piVar1;
      piVar1 = __errno_location();
      if (*piVar1 == 0x13) {
        *(undefined4 *)(DAT_00012860 + param_1 * 800 + 0x12728) = 1;
      }
      else if (**(int **)(iVar3 + DAT_00012864) == 0) {
        pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_0001286c);
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        fprintf(pFVar4,(char *)(DAT_00012870 + 0x127d0),param_2,pcVar2);
      }
      else {
        pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00012864);
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        fprintf(pFVar4,(char *)(DAT_00012868 + 0x12780),param_2,pcVar2);
        fflush((FILE *)**(undefined4 **)(iVar3 + DAT_00012864));
      }
      piVar1 = __errno_location();
      *piVar1 = local_18;
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}



/* ===== FUN_0001287c @ 0001287c size=2152 ===== */

int FUN_0001287c(int param_1,uint *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  FILE *pFVar7;
  int local_28;
  
  iVar6 = DAT_000130e4 + 0x128a4;
  local_28 = 4;
  iVar1 = FUN_00011a4c(param_1);
  if (iVar1 == 0) {
    do {
      iVar5 = *(int *)(DAT_000130e8 + param_1 * 800 + 0x12bc4);
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 * 800 + DAT_000130ec + 0x12abc));
      iVar1 = (**(code **)(*(int *)(DAT_000130f0 + param_1 * 800 + 0x12c44) + 8))
                        (*(undefined4 *)(DAT_000130f4 + param_1 * 800 + 0x12c64),
                         *(undefined4 *)(DAT_000130f8 + 0x1296c + param_1 * 800),0xc0445611,param_2)
      ;
      pthread_mutex_lock((pthread_mutex_t *)(param_1 * 800 + DAT_000130fc + 0x12b58));
      if (iVar1 != 0) {
        piVar2 = __errno_location();
        if (*piVar2 == 0xb) {
          return iVar1;
        }
        piVar2 = __errno_location();
        iVar5 = *piVar2;
        piVar2 = __errno_location();
        if (*piVar2 == 0x13) {
          *(undefined4 *)(DAT_00013100 + param_1 * 800 + 0x12a14) = 1;
        }
        else if (**(int **)(iVar6 + DAT_00013104) == 0) {
          pFVar7 = (FILE *)**(undefined4 **)(iVar6 + DAT_0001310c);
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          fprintf(pFVar7,(char *)(DAT_00013110 + 0x12ac0),pcVar3);
        }
        else {
          pFVar7 = (FILE *)**(undefined4 **)(iVar6 + DAT_00013104);
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          fprintf(pFVar7,(char *)(DAT_00013108 + 0x12a6c),pcVar3);
          fflush((FILE *)**(undefined4 **)(iVar6 + DAT_00013104));
        }
        piVar2 = __errno_location();
        *piVar2 = iVar5;
        return iVar1;
      }
      *(uint *)(DAT_00013118 + param_1 * 800 + 0x12e08) =
           *(uint *)(DAT_00013114 + param_1 * 800 + 0x12dd0) & ~(1 << (*param_2 & 0xff));
      if (iVar5 != *(int *)(DAT_0001311c + param_1 * 800 + 0x12e2c)) {
        piVar2 = __errno_location();
        *piVar2 = -0x16;
        return -1;
      }
      iVar1 = param_3;
      if (param_3 == 0) {
        iVar1 = *(int *)(DAT_00013130 + param_1 * 800 + 0x12e04) +
                *(int *)(DAT_00013134 + param_1 * 800 + 0x12e34) * *param_2;
      }
      iVar1 = v4lconvert_convert(*(undefined4 *)(DAT_00013120 + param_1 * 800 + 0x12d5c),
                                 param_1 * 800 + DAT_00013124 + 0x12bcc,
                                 param_1 * 800 + DAT_00013128 + 0x12cb8,
                                 *(undefined4 *)
                                  (DAT_0001312c + (param_1 * 200 + *param_2 + 0x78) * 4 + 0x12bf0),
                                 param_2[2],iVar1,param_4);
      if (*(int *)(DAT_00013138 + param_1 * 800 + 0x12e7c) != 0) {
        if (iVar1 < 0) {
          piVar2 = __errno_location();
          *piVar2 = 0xb;
        }
        *(int *)(DAT_00013140 + param_1 * 800 + 0x12ee4) =
             *(int *)(DAT_0001313c + param_1 * 800 + 0x12ec0) + -1;
      }
      if (iVar1 < 0) {
        piVar2 = __errno_location();
        iVar5 = *piVar2;
        piVar2 = __errno_location();
        if ((*piVar2 == 0xb) || (piVar2 = __errno_location(), *piVar2 == 0x20)) {
          if (**(int **)(iVar6 + DAT_00013104) != 0) {
            pFVar7 = (FILE *)**(undefined4 **)(iVar6 + DAT_00013104);
            uVar4 = v4lconvert_get_error_message
                              (*(undefined4 *)(DAT_00013144 + param_1 * 800 + 0x12f6c));
            fprintf(pFVar7,(char *)(DAT_00013148 + 0x12dc8),uVar4);
            fflush((FILE *)**(undefined4 **)(iVar6 + DAT_00013104));
          }
        }
        else if (**(int **)(iVar6 + DAT_00013104) == 0) {
          pFVar7 = (FILE *)**(undefined4 **)(iVar6 + DAT_0001310c);
          uVar4 = v4lconvert_get_error_message
                            (*(undefined4 *)(DAT_00013154 + param_1 * 800 + 0x13050));
          fprintf(pFVar7,(char *)(DAT_00013158 + 0x12eac),uVar4);
        }
        else {
          pFVar7 = (FILE *)**(undefined4 **)(iVar6 + DAT_00013104);
          uVar4 = v4lconvert_get_error_message
                            (*(undefined4 *)(DAT_0001314c + param_1 * 800 + 0x12fe8));
          fprintf(pFVar7,(char *)(DAT_00013150 + 0x12e44),uVar4);
          fflush((FILE *)**(undefined4 **)(iVar6 + DAT_00013104));
        }
        if ((local_28 != 1) || (piVar2 = __errno_location(), *piVar2 != 0x20)) {
          FUN_000125e8(param_1,*param_2);
        }
        piVar2 = __errno_location();
        *piVar2 = iVar5;
      }
      local_28 = local_28 + -1;
    } while ((iVar1 < 0) &&
            (((piVar2 = __errno_location(), *piVar2 == 0xb ||
              (piVar2 = __errno_location(), *piVar2 == 0x20)) && (local_28 != 0))));
    if ((iVar1 < 0) && (piVar2 = __errno_location(), *piVar2 == 0xb)) {
      if (**(int **)(iVar6 + DAT_00013104) == 0) {
        pFVar7 = (FILE *)**(undefined4 **)(iVar6 + DAT_0001310c);
        uVar4 = v4lconvert_get_error_message
                          (*(undefined4 *)(DAT_00013164 + param_1 * 800 + 0x131c8));
        fprintf(pFVar7,(char *)(DAT_00013168 + 0x13024),4,uVar4);
      }
      else {
        pFVar7 = (FILE *)**(undefined4 **)(iVar6 + DAT_00013104);
        uVar4 = v4lconvert_get_error_message
                          (*(undefined4 *)((int)&DAT_00013164 + DAT_0001315c + param_1 * 800));
        fprintf(pFVar7,(char *)(DAT_00013160 + 0x12fc0),4,uVar4);
        fflush((FILE *)**(undefined4 **)(iVar6 + DAT_00013104));
      }
      piVar2 = __errno_location();
      *piVar2 = 5;
    }
    if ((iVar1 < 0) && (piVar2 = __errno_location(), *piVar2 == 0x20)) {
      if (**(int **)(iVar6 + DAT_00013104) != 0) {
        fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00013104),(char *)(DAT_0001316c + 0x13088),4);
        fflush((FILE *)**(undefined4 **)(iVar6 + DAT_00013104));
      }
      iVar1 = *(int *)(DAT_00013170 + param_1 * 800 + 0x131a4);
      piVar2 = __errno_location();
      *piVar2 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00013174 @ 00013174 size=1932 ===== */

int FUN_00013174(int param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  size_t __size;
  int iVar6;
  int iVar7;
  FILE *pFVar8;
  int local_18;
  
  iVar7 = DAT_00013900 + 0x13198;
  local_18 = 4;
  __size = *(size_t *)(DAT_00013904 + param_1 * 800 + 0x132a8);
  if (*(int *)(DAT_00013908 + param_1 * 800 + 0x134e0) < (int)__size) {
    pvVar1 = realloc(*(void **)(DAT_0001390c + param_1 * 800 + 0x13510),__size);
    if (pvVar1 == (void *)0x0) {
      return -1;
    }
    *(void **)(DAT_00013910 + param_1 * 800 + 0x13558) = pvVar1;
    *(size_t *)(DAT_00013914 + param_1 * 800 + 0x13578) = __size;
  }
  while (iVar2 = (**(code **)(*(int *)(DAT_00013918 + param_1 * 800 + 0x135ac) + 0xc))
                           (*(undefined4 *)(DAT_0001391c + param_1 * 800 + 0x135cc),
                            *(undefined4 *)(DAT_00013920 + 0x132d4 + param_1 * 800),
                            *(undefined4 *)(DAT_00013924 + param_1 * 800 + 0x13600),__size),
        0 < iVar2) {
    iVar2 = v4lconvert_convert(*(undefined4 *)(DAT_0001393c + param_1 * 800 + 0x13628),
                               param_1 * 800 + DAT_00013940 + 79000,
                               param_1 * 800 + DAT_00013944 + 0x13584,
                               *(undefined4 *)(DAT_00013948 + param_1 * 800 + 0x137c0),iVar2,param_2
                               ,param_3);
    if (*(int *)(DAT_0001394c + param_1 * 800 + 0x136cc) != 0) {
      if (iVar2 < 0) {
        piVar3 = __errno_location();
        *piVar3 = 0xb;
      }
      *(int *)(DAT_00013954 + param_1 * 800 + 0x13734) =
           *(int *)(DAT_00013950 + param_1 * 800 + 0x13710) + -1;
    }
    if (iVar2 < 0) {
      piVar3 = __errno_location();
      iVar6 = *piVar3;
      piVar3 = __errno_location();
      if ((*piVar3 == 0xb) || (piVar3 = __errno_location(), *piVar3 == 0x20)) {
        if (**(int **)(iVar7 + DAT_0001392c) != 0) {
          pFVar8 = (FILE *)**(undefined4 **)(iVar7 + DAT_0001392c);
          uVar5 = v4lconvert_get_error_message
                            (*(undefined4 *)(DAT_00013958 + param_1 * 800 + 0x137bc));
          fprintf(pFVar8,(char *)(DAT_0001395c + 0x13618),uVar5);
          fflush((FILE *)**(undefined4 **)(iVar7 + DAT_0001392c));
        }
      }
      else if (**(int **)(iVar7 + DAT_0001392c) == 0) {
        pFVar8 = (FILE *)**(undefined4 **)(iVar7 + DAT_00013934);
        uVar5 = v4lconvert_get_error_message
                          (*(undefined4 *)(DAT_00013968 + param_1 * 800 + 0x138a0));
        fprintf(pFVar8,(char *)(DAT_0001396c + 0x136fc),uVar5);
      }
      else {
        pFVar8 = (FILE *)**(undefined4 **)(iVar7 + DAT_0001392c);
        uVar5 = v4lconvert_get_error_message
                          (*(undefined4 *)(DAT_00013960 + param_1 * 800 + 0x13838));
        fprintf(pFVar8,(char *)(DAT_00013964 + 0x13694),uVar5);
        fflush((FILE *)**(undefined4 **)(iVar7 + DAT_0001392c));
      }
      piVar3 = __errno_location();
      *piVar3 = iVar6;
    }
    local_18 = local_18 + -1;
    if ((-1 < iVar2) ||
       (((piVar3 = __errno_location(), *piVar3 != 0xb &&
         (piVar3 = __errno_location(), *piVar3 != 0x20)) || (local_18 == 0)))) {
      if ((iVar2 < 0) && (piVar3 = __errno_location(), *piVar3 == 0xb)) {
        if (**(int **)(iVar7 + DAT_0001392c) == 0) {
          pFVar8 = (FILE *)**(undefined4 **)(iVar7 + DAT_00013934);
          uVar5 = v4lconvert_get_error_message
                            (*(undefined4 *)(DAT_00013978 + param_1 * 800 + 0x139e4));
          fprintf(pFVar8,(char *)(DAT_0001397c + 0x13840),4,uVar5);
        }
        else {
          pFVar8 = (FILE *)**(undefined4 **)(iVar7 + DAT_0001392c);
          uVar5 = v4lconvert_get_error_message
                            (*(undefined4 *)((int)&DAT_00013980 + DAT_00013970 + param_1 * 800));
          fprintf(pFVar8,(char *)(DAT_00013974 + 0x137dc),4,uVar5);
          fflush((FILE *)**(undefined4 **)(iVar7 + DAT_0001392c));
        }
        piVar3 = __errno_location();
        *piVar3 = 5;
      }
      if ((iVar2 < 0) && (piVar3 = __errno_location(), *piVar3 == 0x20)) {
        if (**(int **)(iVar7 + DAT_0001392c) != 0) {
          fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_0001392c),(char *)(DAT_00013980 + 0x138a4),4
                 );
          fflush((FILE *)**(undefined4 **)(iVar7 + DAT_0001392c));
        }
        iVar2 = *(int *)(DAT_00013984 + param_1 * 800 + 0x139c0);
        piVar3 = __errno_location();
        *piVar3 = 0;
      }
      return iVar2;
    }
  }
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = __errno_location();
  if (*piVar3 == 0xb) {
    return iVar2;
  }
  piVar3 = __errno_location();
  iVar6 = *piVar3;
  piVar3 = __errno_location();
  if (*piVar3 == 0x13) {
    *(undefined4 *)(DAT_00013928 + param_1 * 800 + 0x1337c) = 1;
  }
  else if (**(int **)(iVar7 + DAT_0001392c) == 0) {
    pFVar8 = (FILE *)**(undefined4 **)(iVar7 + DAT_00013934);
    piVar3 = __errno_location();
    pcVar4 = strerror(*piVar3);
    fprintf(pFVar8,(char *)(DAT_00013938 + 0x13428),pcVar4);
  }
  else {
    pFVar8 = (FILE *)**(undefined4 **)(iVar7 + DAT_0001392c);
    piVar3 = __errno_location();
    pcVar4 = strerror(*piVar3);
    fprintf(pFVar8,(char *)(DAT_00013930 + 0x133d4),pcVar4);
    fflush((FILE *)**(undefined4 **)(iVar7 + DAT_0001392c));
  }
  piVar3 = __errno_location();
  *piVar3 = iVar6;
  return iVar2;
}



/* ===== FUN_00013988 @ 00013988 size=264 ===== */

undefined4 FUN_00013988(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 5;
  local_14 = 0;
  for (local_c = 0; local_c < *(uint *)(DAT_00013a94 + param_1 * 800 + 0x13c00);
      local_c = local_c + 1) {
    if (*(int *)(DAT_00013a90 + (param_1 * 200 + local_c + 0x78) * 4 + 0x139c4) != -1) {
      iVar1 = FUN_000125e8(param_1,local_c);
      if (iVar1 == 0) {
        local_14 = local_14 + 1;
      }
      else {
        piVar2 = __errno_location();
        local_10 = *piVar2;
      }
    }
  }
  if (local_14 == 0) {
    piVar2 = __errno_location();
    *piVar2 = local_10;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_00013a98 @ 00013a98 size=296 ===== */

int FUN_00013a98(int param_1)

{
  int *piVar1;
  int local_c;
  
  if (((*(uint *)(DAT_00013bc0 + param_1 * 800 + 0x13ab8) & 0x100) == 0) &&
     (*(int *)(DAT_00013bc4 + param_1 * 800 + 0x13dc4) == 0)) {
    local_c = FUN_000115ec(param_1);
    if (local_c == 0) {
      local_c = FUN_00011a4c(param_1);
    }
    if (local_c == 0) {
      local_c = FUN_00013988(param_1);
    }
    if (local_c == 0) {
      *(uint *)(DAT_00013bcc + param_1 * 800 + 0x13b98) =
           *(uint *)(DAT_00013bc8 + param_1 * 800 + 0x13b74) | 0x400;
      local_c = FUN_000120e8(param_1);
    }
  }
  else {
    piVar1 = __errno_location();
    *piVar1 = 0x10;
    local_c = -1;
  }
  return local_c;
}



/* ===== FUN_00013bd0 @ 00013bd0 size=148 ===== */

int FUN_00013bd0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00012368(param_1);
  if (iVar1 == 0) {
    FUN_00011f4c(param_1);
    FUN_0001187c(param_1);
    *(uint *)(DAT_00013c68 + param_1 * 800 + 0x13c44) =
         *(uint *)(DAT_00013c64 + param_1 * 800 + 0x13c20) & 0xfffffbff;
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00013c6c @ 00013c6c size=180 ===== */

undefined4 FUN_00013c6c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_00013d20 + param_1 * 800 + 0x13e5c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = v4lconvert_needs_conversion
                      (*(undefined4 *)(DAT_00013d24 + param_1 * 800 + 0x13e8c),
                       param_1 * 800 + DAT_00013d28 + 0x13cfc,param_1 * 800 + DAT_00013d2c + 0x13de8
                      );
  }
  return uVar1;
}



/* ===== FUN_00013d30 @ 00013d30 size=280 ===== */

void FUN_00013d30(int param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00013c6c(param_1);
  if (iVar1 != 0) {
    if (*(uint *)(DAT_00013e48 + param_1 * 800 + 0x13f30) <= *param_2) {
      *param_2 = 0;
    }
    param_2[0xd] = *param_2 | 0xabcdef00;
    param_2[0xe] = *(uint *)(DAT_00013e4c + param_1 * 800 + 0x13f9c);
    if (*(char *)(DAT_00013e50 + param_1 * 800 + *param_2 + 0x140d8) == '\0') {
      param_2[3] = param_2[3] & 0xfffffffe;
    }
    else {
      param_2[3] = param_2[3] | 1;
    }
  }
  return;
}



/* ===== FUN_00013e54 @ 00013e54 size=860 ===== */

bool FUN_00013e54(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  FILE *pFVar5;
  uint local_5c [3];
  uint local_50;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  iVar4 = DAT_000141b0 + 0x13e70;
  iVar1 = FUN_00013c6c(param_1);
  if (iVar1 == 0) {
    for (local_14 = 0; local_14 < *(uint *)(DAT_000141d4 + param_1 * 800 + 0x14218);
        local_14 = local_14 + 1) {
      local_5c[1] = 1;
      local_2c = 1;
      local_5c[0] = local_14;
      local_20 = 0;
      local_1c = 0;
      iVar1 = (**(code **)(*(int *)((int)&DAT_000141dc + DAT_000141b4 + param_1 * 800) + 8))
                        (*(undefined4 *)(DAT_000141b8 + param_1 * 800 + 0x141fc),
                         *(undefined4 *)(DAT_000141bc + 0x13f04 + param_1 * 800),0xc0445609,local_5c
                        );
      if (iVar1 != 0) {
        piVar2 = __errno_location();
        local_18 = *piVar2;
        piVar2 = __errno_location();
        if (*piVar2 == 0x13) {
          *(undefined4 *)(DAT_000141c0 + param_1 * 800 + 0x13f6c) = 1;
        }
        else if (**(int **)(iVar4 + DAT_000141c4) == 0) {
          pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_000141cc);
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          fprintf(pFVar5,(char *)(DAT_000141d0 + 0x14014),local_14,pcVar3);
        }
        else {
          pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_000141c4);
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          fprintf(pFVar5,(char *)(DAT_000141c8 + 0x13fc4),local_14,pcVar3);
          fflush((FILE *)**(undefined4 **)(iVar4 + DAT_000141c4));
        }
        piVar2 = __errno_location();
        *piVar2 = local_18;
        break;
      }
      if ((local_50 & 1) != 0) break;
    }
  }
  else {
    for (local_14 = 0;
        (local_14 < *(uint *)(DAT_000141dc + param_1 * 800 + 0x14290) &&
        (*(char *)(DAT_000141d8 + param_1 * 800 + local_14 + 0x1437c) == '\0'));
        local_14 = local_14 + 1) {
    }
  }
  if ((local_14 != *(uint *)(DAT_000141e0 + param_1 * 800 + 0x142cc)) &&
     (**(int **)(iVar4 + DAT_000141c4) != 0)) {
    fwrite((void *)(DAT_000141e4 + 0x1415c),1,0x35,(FILE *)**(undefined4 **)(iVar4 + DAT_000141c4));
    fflush((FILE *)**(undefined4 **)(iVar4 + DAT_000141c4));
  }
  return local_14 != *(uint *)(DAT_000141e8 + param_1 * 800 + 0x14340);
}



/* ===== FUN_000141ec @ 000141ec size=236 ===== */

void FUN_000141ec(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((*(uint *)(DAT_000142d8 + param_1 * 800 + 0x14210) & 0x4000) == 0) ||
     (*(int *)(param_2 + 0xc) == 0)) {
    *(undefined4 *)(DAT_000142e0 + param_1 * 800 + 0x14480) = 0;
  }
  else {
    uVar1 = FUN_00019e6c(*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x10) + -1,
                         *(undefined4 *)(param_2 + 0xc));
    *(undefined4 *)(DAT_000142dc + param_1 * 800 + 0x14458) = uVar1;
  }
  return;
}



/* ===== v4l2_open @ 000142e4 size=252 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int v4l2_open(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int local_1c;
  
  if ((param_2 & 0x40) == 0) {
    local_1c = syscall(0x142,0xffffff9c,param_1,param_2,0);
  }
  else {
    local_1c = syscall(0x142,0xffffff9c,param_1,param_2,param_3);
  }
  if ((local_1c != -1) && (iVar1 = v4l2_fd_open(local_1c,0), iVar1 == -1)) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    syscall(6,local_1c);
    piVar2 = __errno_location();
    *piVar2 = iVar1;
    local_1c = -1;
  }
  return local_1c;
}



/* ===== v4l2_fd_open @ 000143e0 size=2892 ===== */

undefined4 v4l2_fd_open(undefined4 param_1,uint param_2)

{
  FILE *pFVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int local_240;
  undefined4 local_23c;
  undefined4 local_238;
  int local_234;
  uint local_230;
  undefined4 local_168 [51];
  undefined1 auStack_9c [84];
  uint local_48;
  uint local_44;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  long local_24;
  char *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar5 = DAT_00014f2c + 0x14400;
  memset(local_168,0,0xcc);
  memset(&local_234,0,0xcc);
  local_1c = 0;
  FUN_00019374(param_1,&local_238,&local_23c,&local_240);
  if ((**(int **)(iVar5 + DAT_00014f30) == 0) &&
     (local_20 = getenv((char *)(DAT_00014f34 + 0x14460)), local_20 != (char *)0x0)) {
    pFVar1 = fopen(local_20,(char *)(DAT_00014f38 + 0x14480));
    **(undefined4 **)(iVar5 + DAT_00014f30) = pFVar1;
  }
  local_24 = sysconf(0x1e);
  if (local_24 < 0) {
    piVar2 = __errno_location();
    local_28 = *piVar2;
    if (**(int **)(iVar5 + DAT_00014f30) == 0) {
      pFVar1 = (FILE *)**(undefined4 **)(iVar5 + DAT_00014f40);
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      fprintf(pFVar1,(char *)(DAT_00014f44 + 0x1455c),pcVar3);
    }
    else {
      pFVar1 = (FILE *)**(undefined4 **)(iVar5 + DAT_00014f30);
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      fprintf(pFVar1,(char *)(DAT_00014f3c + 0x14508),pcVar3);
      fflush((FILE *)**(undefined4 **)(iVar5 + DAT_00014f30));
    }
    FUN_000196dc(local_238,local_23c,local_240);
    piVar2 = __errno_location();
    *piVar2 = local_28;
    param_1 = 0xffffffff;
  }
  else {
    iVar4 = (**(code **)(local_240 + 8))(local_23c,param_1,0x80685600,auStack_9c);
    if (iVar4 == 0) {
      if ((int)local_48 < 0) {
        local_48 = local_44;
      }
      if (((local_48 & 1) != 0) && ((local_48 & 0x5000000) != 0)) {
        local_168[0] = 1;
        iVar4 = (**(code **)(local_240 + 8))(local_23c,param_1,0xc0cc5604,local_168);
        if (iVar4 != 0) {
          piVar2 = __errno_location();
          local_30 = *piVar2;
          if (**(int **)(iVar5 + DAT_00014f30) == 0) {
            pFVar1 = (FILE *)**(undefined4 **)(iVar5 + DAT_00014f40);
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            fprintf(pFVar1,(char *)(DAT_00014f54 + 0x147b0),pcVar3);
          }
          else {
            pFVar1 = (FILE *)**(undefined4 **)(iVar5 + DAT_00014f30);
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            fprintf(pFVar1,(char *)(DAT_00014f50 + 0x1475c),pcVar3);
            fflush((FILE *)**(undefined4 **)(iVar5 + DAT_00014f30));
          }
          FUN_000196dc(local_238,local_23c,local_240);
          piVar2 = __errno_location();
          *piVar2 = local_30;
          return 0xffffffff;
        }
        local_234 = 1;
        iVar4 = (**(code **)(local_240 + 8))(local_23c,param_1,0xc0cc5615,&local_234);
        if (iVar4 != 0) {
          local_234 = 0;
        }
        if (((param_2 & 1) == 0) &&
           (local_1c = v4lconvert_create_with_dev_ops(param_1,local_23c,local_240), local_1c == 0))
        {
          piVar2 = __errno_location();
          local_34 = *piVar2;
          FUN_000196dc(local_238,local_23c,local_240);
          piVar2 = __errno_location();
          *piVar2 = local_34;
          return 0xffffffff;
        }
      }
      pthread_mutex_lock((pthread_mutex_t *)(DAT_00014f58 + 0x148a8));
      for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
        if (*(int *)(DAT_00014f5c + 0x148c4 + local_18 * 800) == -1) {
          *(undefined4 *)(DAT_00014f60 + 0x148e8 + local_18 * 800) = param_1;
          *(undefined4 *)(DAT_00014f64 + local_18 * 800 + 0x14c20) = local_238;
          *(undefined4 *)(DAT_00014f68 + local_18 * 800 + 0x14c48) = local_23c;
          *(int *)(DAT_00014f6c + local_18 * 800 + 0x14c70) = local_240;
          break;
        }
      }
      pthread_mutex_unlock((pthread_mutex_t *)(DAT_00014f70 + 0x14990));
      if (local_18 == 0x10) {
        if (**(int **)(iVar5 + DAT_00014f30) == 0) {
          fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00014f40),(char *)(DAT_00014f78 + 0x14a08),
                  0x10);
        }
        else {
          fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00014f30),(char *)(DAT_00014f74 + 0x149d0),
                  0x10);
          fflush((FILE *)**(undefined4 **)(iVar5 + DAT_00014f30));
        }
        FUN_000196dc(local_238,local_23c,local_240);
        piVar2 = __errno_location();
        *piVar2 = 0x10;
        param_1 = 0xffffffff;
      }
      else {
        *(uint *)(DAT_00014f7c + local_18 * 800 + 0x14a48) = param_2;
        if ((local_48 & 0x1000000) != 0) {
          *(uint *)(DAT_00014f84 + local_18 * 800 + 0x14aa0) =
               *(uint *)(DAT_00014f80 + local_18 * 800 + 0x14a7c) | 0x800;
        }
        if ((local_48 & 0x4000000) == 0) {
          *(uint *)(DAT_00014f8c + local_18 * 800 + 0x14af4) =
               *(uint *)(DAT_00014f88 + local_18 * 800 + 0x14ad0) | 0x2000;
          *(undefined4 *)(DAT_00014f90 + local_18 * 800 + 0x14ce0) = 3;
        }
        if ((local_234 == 1) && ((local_230 & 0x1000) != 0)) {
          *(uint *)(DAT_00014f98 + local_18 * 800 + 0x14b78) =
               *(uint *)(DAT_00014f94 + local_18 * 800 + 0x14b54) | 0x4000;
        }
        *(undefined4 *)(DAT_00014f9c + local_18 * 800 + 0x14b9c) = 1;
        *(long *)(DAT_00014fa0 + local_18 * 800 + 0x14bc8) = local_24;
        memcpy((void *)(DAT_00014fa4 + local_18 * 800 + 0x14bf0),local_168,0xcc);
        memcpy((void *)(DAT_00014fa8 + local_18 * 800 + 0x14cec),local_168,0xcc);
        FUN_000159b4(local_18,local_18 * 800 + DAT_00014fac + 0x14c60,
                     local_18 * 800 + DAT_00014fb0 + 0x14d4c);
        pthread_mutex_init((pthread_mutex_t *)(local_18 * 800 + DAT_00014fb4 + 0x14e40),
                           (pthread_mutexattr_t *)0x0);
        *(undefined4 *)(DAT_00014fb8 + local_18 * 800 + 0x14e74) = 0;
        *(undefined4 *)(DAT_00014fbc + local_18 * 800 + 0x14e9c) = 4;
        *(int *)(DAT_00014fc0 + local_18 * 800 + 0x14ecc) = local_1c;
        *(undefined4 *)(DAT_00014fc4 + local_18 * 800 + 0x14ef4) = 0xffffffff;
        *(undefined4 *)(DAT_00014fc8 + local_18 * 800 + 0x14f1c) = 0;
        for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
          *(undefined4 *)(DAT_00014fcc + (local_18 * 200 + local_14 + 0x78) * 4 + 0x14d74) =
               0xffffffff;
          *(undefined1 *)(DAT_00014fd0 + local_18 * 800 + local_14 + 0x1508c) = 0;
        }
        *(undefined4 *)(DAT_00014fd4 + local_18 * 800 + 0x150c8) = 0;
        *(undefined4 *)(DAT_00014fd8 + local_18 * 800 + 0x15118) = 0;
        *(undefined4 *)(DAT_00014fdc + local_18 * 800 + 0x15138) = 0;
        if (*(int *)(DAT_00014fe0 + 0x14e50) <= local_18) {
          *(int *)(DAT_00014fe4 + 0x14e70) = local_18 + 1;
        }
        if (*(int *)(DAT_00014fe8 + local_18 * 800 + 0x15050) != 0) {
          v4lconvert_set_fps(*(undefined4 *)(DAT_00014fec + local_18 * 800 + 0x15078),0x1e);
        }
        FUN_000141ec(local_18,&local_234);
        if (**(int **)(iVar5 + DAT_00014f30) != 0) {
          fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00014f30),(char *)(DAT_00014ff0 + 0x14f04),
                  param_1);
          fflush((FILE *)**(undefined4 **)(iVar5 + DAT_00014f30));
        }
      }
    }
    else {
      piVar2 = __errno_location();
      local_2c = *piVar2;
      if (**(int **)(iVar5 + DAT_00014f30) == 0) {
        pFVar1 = (FILE *)**(undefined4 **)(iVar5 + DAT_00014f40);
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        fprintf(pFVar1,(char *)(DAT_00014f4c + 0x14668),pcVar3);
      }
      else {
        pFVar1 = (FILE *)**(undefined4 **)(iVar5 + DAT_00014f30);
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        fprintf(pFVar1,(char *)(DAT_00014f48 + 0x14614),pcVar3);
        fflush((FILE *)**(undefined4 **)(iVar5 + DAT_00014f30));
      }
      FUN_000196dc(local_238,local_23c,local_240);
      piVar2 = __errno_location();
      *piVar2 = local_2c;
      param_1 = 0xffffffff;
    }
  }
  return param_1;
}



/* ===== FUN_00014ff4 @ 00014ff4 size=184 ===== */

int FUN_00014ff4(int param_1)

{
  int local_c;
  
  if (param_1 == -1) {
    local_c = -1;
  }
  else {
    for (local_c = 0;
        (local_c < *(int *)(DAT_000150b0 + 0x15064) &&
        (param_1 != *(int *)(DAT_000150ac + 0x15030 + local_c * 800))); local_c = local_c + 1) {
    }
    if (local_c == *(int *)(DAT_000150b4 + 0x15084)) {
      local_c = -1;
    }
  }
  return local_c;
}



/* ===== v4l2_close @ 000150b8 size=1088 ===== */

long v4l2_close(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_000154f8 + 0x150d4;
  iVar1 = FUN_00014ff4(param_1);
  if (iVar1 == -1) {
    lVar2 = syscall(6,param_1);
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(iVar1 * 800 + DAT_000154fc + 0x152c4));
    *(int *)(DAT_00015504 + iVar1 * 800 + 0x1515c) =
         *(int *)(DAT_00015500 + iVar1 * 800 + 0x15138) + -1;
    iVar4 = *(int *)(DAT_00015508 + iVar1 * 800 + 0x1517c);
    pthread_mutex_unlock((pthread_mutex_t *)(iVar1 * 800 + DAT_0001550c + 0x15364));
    if (iVar4 == 0) {
      FUN_000196dc(*(undefined4 *)((int)&DAT_000154f8 + DAT_00015510 + iVar1 * 800),
                   *(undefined4 *)((int)&DAT_0001551c + DAT_00015514 + iVar1 * 800),
                   *(undefined4 *)((int)&DAT_00015540 + DAT_00015518 + iVar1 * 800));
      FUN_00011f4c(iVar1);
      if (*(int *)(DAT_0001551c + iVar1 * 800 + 0x15430) != -1) {
        iVar4 = FUN_00013e54(iVar1);
        if (iVar4 == 0) {
          syscall(0x5b,*(undefined4 *)((int)&DAT_00015504 + DAT_00015534 + iVar1 * 800),
                  *(undefined4 *)((int)&DAT_00015528 + DAT_00015538 + iVar1 * 800));
        }
        else if (*(int *)(DAT_00015520 + iVar1 * 800 + 0x152a0) == 0) {
          if (**(int **)(iVar5 + DAT_00015524) == 0) {
            fwrite((void *)(DAT_00015530 + 0x1531c),1,0x3b,
                   (FILE *)**(undefined4 **)(iVar5 + DAT_0001552c));
          }
          else {
            fwrite((void *)(DAT_00015528 + 0x152e4),1,0x3b,
                   (FILE *)**(undefined4 **)(iVar5 + DAT_00015524));
            fflush((FILE *)**(undefined4 **)(iVar5 + DAT_00015524));
          }
        }
        *(undefined4 *)((int)&DAT_00015554 + DAT_0001553c + iVar1 * 800) = 0xffffffff;
        *(undefined4 *)(DAT_00015540 + iVar1 * 800 + 0x1557c) = 0;
      }
      v4lconvert_destroy(*(undefined4 *)(DAT_00015544 + iVar1 * 800 + 0x15598));
      free(*(void **)(DAT_00015548 + iVar1 * 800 + 0x156fc));
      *(undefined4 *)(DAT_0001554c + iVar1 * 800 + 0x15724) = 0;
      *(undefined4 *)(DAT_00015550 + iVar1 * 800 + 0x15744) = 0;
      *(undefined4 *)(DAT_00015554 + 0x1545c + iVar1 * 800) = 0xffffffff;
      do {
        lVar2 = syscall(6,param_1);
        if (lVar2 != -1) break;
        piVar3 = __errno_location();
      } while (*piVar3 == 4);
      if (**(int **)(iVar5 + DAT_00015524) != 0) {
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00015524),(char *)(DAT_00015558 + 0x154d0),
                param_1);
        fflush((FILE *)**(undefined4 **)(iVar5 + DAT_00015524));
      }
    }
    else {
      lVar2 = 0;
    }
  }
  return lVar2;
}



/* ===== v4l2_dup @ 0001555c size=144 ===== */

long v4l2_dup(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00014ff4(param_1);
  if (iVar1 == -1) {
    param_1 = syscall(0x29,param_1);
  }
  else {
    *(int *)(DAT_000155f0 + iVar1 * 800 + 0x155d0) =
         *(int *)(DAT_000155ec + iVar1 * 800 + 0x155ac) + 1;
  }
  return param_1;
}



/* ===== FUN_000155f4 @ 000155f4 size=644 ===== */

undefined4 FUN_000155f4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_00015878 + 0x15610;
  *(int *)(DAT_00015880 + param_1 * 800 + 0x15924) =
       *(int *)(DAT_0001587c + param_1 * 800 + 0x15900) + 1;
  FUN_00011f4c(param_1);
  iVar1 = FUN_00013e54(param_1);
  if ((iVar1 == 0) &&
     (((*(uint *)(DAT_00015884 + param_1 * 800 + 0x1567c) & 0x400) != 0 ||
      (((*(uint *)(DAT_00015888 + param_1 * 800 + 0x156a8) & 0x100) == 0 &&
       (*(int *)(FUN_000159b4 + DAT_0001588c + param_1 * 800) == 0)))))) {
    syscall(0x5b,*(undefined4 *)(DAT_00015898 + param_1 * 800 + 0x15930),
            *(undefined4 *)(DAT_0001589c + param_1 * 800 + 0x15954));
    *(undefined4 *)(DAT_000158a0 + param_1 * 800 + 0x15980) = 0xffffffff;
    *(undefined4 *)(DAT_000158a4 + param_1 * 800 + 0x159a8) = 0;
    if ((*(uint *)(DAT_000158a8 + param_1 * 800 + 0x157f4) & 0x400) == 0) {
      uVar3 = 0;
    }
    else {
      if (**(int **)(iVar4 + DAT_00015890) != 0) {
        fwrite((void *)(DAT_000158ac + 0x15844),1,0x36,
               (FILE *)**(undefined4 **)(iVar4 + DAT_00015890));
        fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00015890));
      }
      uVar3 = FUN_00013bd0(param_1);
    }
  }
  else {
    if (**(int **)(iVar4 + DAT_00015890) != 0) {
      fwrite((void *)(DAT_00015894 + 0x15720),1,0x34,(FILE *)**(undefined4 **)(iVar4 + DAT_00015890)
            );
      fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00015890));
    }
    piVar2 = __errno_location();
    *piVar2 = 0x10;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* ===== FUN_000158b0 @ 000158b0 size=144 ===== */

undefined4 FUN_000158b0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) &&
       (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
      (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
     (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00015940 @ 00015940 size=116 ===== */

undefined4 FUN_00015940(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000158b0(param_1,param_2);
  if (((iVar1 == 0) || (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14))) ||
     (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_000159b4 @ 000159b4 size=520 ===== */

void FUN_000159b4(int param_1,void *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = v4lconvert_supported_dst_format(*(undefined4 *)((int)param_3 + 0xc));
  if (iVar1 != 0) {
    *(uint *)((int)param_3 + 4) = *(uint *)((int)param_3 + 4) & 0xfffffff8;
    *(uint *)((int)param_3 + 8) = *(uint *)((int)param_3 + 8) & 0xfffffffe;
  }
  *(undefined4 *)((int)param_3 + 0x10) = *(undefined4 *)((int)param_2 + 0x10);
  *(undefined4 *)((int)param_3 + 0x1c) = *(undefined4 *)((int)param_2 + 0x1c);
  *(undefined4 *)((int)param_3 + 0x30) = *(undefined4 *)((int)param_2 + 0x30);
  *(undefined4 *)((int)param_3 + 0x28) = *(undefined4 *)((int)param_2 + 0x28);
  *(undefined4 *)((int)param_3 + 0x2c) = *(undefined4 *)((int)param_2 + 0x2c);
  iVar1 = FUN_000158b0(param_2,param_3);
  if (iVar1 == 0) {
    v4lconvert_fixup_fmt(param_3);
  }
  else {
    *(undefined4 *)((int)param_3 + 0x14) = *(undefined4 *)((int)param_2 + 0x14);
    *(undefined4 *)((int)param_3 + 0x18) = *(undefined4 *)((int)param_2 + 0x18);
  }
  memcpy((void *)(DAT_00015bbc + param_1 * 800 + 0x15ac4),param_2,0xcc);
  memcpy((void *)((int)&DAT_00015bc4 + DAT_00015bc0 + param_1 * 800),param_3,0xcc);
  iVar1 = FUN_00019e6c(*(int *)((int)param_3 + 0x18) +
                       *(int *)(DAT_00015bc4 + param_1 * 800 + 0x15b30) + -1,
                       *(undefined4 *)(DAT_00015bc8 + param_1 * 800 + 0x15b58));
  *(int *)(DAT_00015bd0 + param_1 * 800 + 0x15d7c) =
       *(int *)(DAT_00015bcc + param_1 * 800 + 0x15b88) * iVar1;
  return;
}



/* ===== FUN_00015bd4 @ 00015bd4 size=1412 ===== */

int FUN_00015bd4(int param_1,void *param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  FILE *pFVar4;
  undefined4 local_1ec [51];
  int local_120;
  int local_11c;
  uint local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [4];
  int local_ec;
  int local_e8;
  uint local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  iVar3 = DAT_00016158 + 0x15bf4;
  if (**(int **)(iVar3 + DAT_0001615c) != 0) {
    local_14 = *(uint *)((int)param_2 + 0xc);
    fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_0001615c),(char *)(DAT_00016160 + 0x15c60),
            local_14 & 0xff,(int)local_14 >> 8 & 0xff,(int)local_14 >> 0x10 & 0xff,
            (int)local_14 >> 0x18);
  }
  local_18 = v4lconvert_try_format
                       (*(undefined4 *)(DAT_00016164 + param_1 * 800 + 0x15e40),param_2,auStack_f0);
  if (local_18 == 0) {
    if ((local_e4 != *(uint *)((int)param_2 + 0xc)) && (**(int **)(iVar3 + DAT_0001615c) != 0)) {
      local_20 = local_e4;
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_0001615c),(char *)(DAT_0001616c + 0x15dac),
              local_e4 & 0xff,(int)local_e4 >> 8 & 0xff,(int)local_e4 >> 0x10 & 0xff,
              (int)local_e4 >> 0x18);
    }
    local_18 = FUN_000155f4(param_1);
    if (local_18 == 0) {
      local_120 = local_ec;
      local_11c = local_e8;
      local_118 = local_e4;
      uStack_114 = uStack_e0;
      local_110 = local_dc;
      uStack_10c = uStack_d8;
      uStack_108 = uStack_d4;
      uStack_104 = uStack_d0;
      local_100 = local_cc;
      uStack_fc = uStack_c8;
      uStack_f8 = uStack_c4;
      uStack_f4 = uStack_c0;
      local_18 = (**(code **)(*(int *)(DAT_00016170 + param_1 * 800 + 0x16114) + 8))
                           (*(undefined4 *)(DAT_00016174 + param_1 * 800 + 0x16134),
                            *(undefined4 *)(DAT_00016178 + 0x15e3c + param_1 * 800),0xc0cc5605,
                            auStack_f0);
      if (local_18 == 0) {
        if (((local_ec != local_120) || (local_e8 != local_11c)) || (local_e4 != local_118)) {
          if (**(int **)(iVar3 + DAT_0001615c) == 0) {
            fwrite((void *)(DAT_00016194 + 0x16040),1,0x40,
                   (FILE *)**(undefined4 **)(iVar3 + DAT_00016184));
          }
          else {
            fwrite((void *)(DAT_00016190 + 0x16008),1,0x40,
                   (FILE *)**(undefined4 **)(iVar3 + DAT_0001615c));
            fflush((FILE *)**(undefined4 **)(iVar3 + DAT_0001615c));
          }
          memcpy(param_2,auStack_f0,0xcc);
        }
        FUN_000159b4(param_1,auStack_f0,param_2);
        if ((*(uint *)(DAT_00016198 + param_1 * 800 + 0x1607c) & 0x4000) != 0) {
          memset(local_1ec,0,0xcc);
          local_1ec[0] = 1;
          iVar3 = (**(code **)(*(int *)(DAT_0001619c + param_1 * 800 + 0x163dc) + 8))
                            (*(undefined4 *)(DAT_000161a0 + param_1 * 800 + 0x163fc),
                             *(undefined4 *)(DAT_000161a4 + 0x16104 + param_1 * 800),0xc0cc5615,
                             local_1ec);
          if (iVar3 != 0) {
            return 0;
          }
          FUN_000141ec(param_1,local_1ec);
        }
        local_18 = 0;
      }
      else {
        piVar1 = __errno_location();
        local_24 = *piVar1;
        piVar1 = __errno_location();
        if (*piVar1 == 0x13) {
          *(undefined4 *)(DAT_0001617c + param_1 * 800 + 0x15ea8) = 1;
        }
        else if (**(int **)(iVar3 + DAT_0001615c) == 0) {
          pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_00016184);
          piVar1 = __errno_location();
          pcVar2 = strerror(*piVar1);
          fprintf(pFVar4,(char *)(DAT_00016188 + 0x15f54),pcVar2);
        }
        else {
          pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_0001615c);
          piVar1 = __errno_location();
          pcVar2 = strerror(*piVar1);
          fprintf(pFVar4,(char *)(DAT_00016180 + 0x15f00),pcVar2);
          fflush((FILE *)**(undefined4 **)(iVar3 + DAT_0001615c));
        }
        memcpy(param_2,(void *)(DAT_0001618c + param_1 * 800 + 0x1604c),0xcc);
        piVar1 = __errno_location();
        *piVar1 = local_24;
      }
    }
  }
  else {
    piVar1 = __errno_location();
    local_1c = *piVar1;
    if (**(int **)(iVar3 + DAT_0001615c) != 0) {
      pFVar4 = (FILE *)**(undefined4 **)(iVar3 + DAT_0001615c);
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      fprintf(pFVar4,(char *)(DAT_00016168 + 0x15cf8),pcVar2);
      fflush((FILE *)**(undefined4 **)(iVar3 + DAT_0001615c));
    }
    piVar1 = __errno_location();
    *piVar1 = local_1c;
  }
  return local_18;
}



/* ===== v4l2_ioctl @ 000161a8 size=6384 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint v4l2_ioctl(undefined4 param_1,uint param_2,uint *param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  FILE *pFVar6;
  undefined4 uVar7;
  undefined4 local_12c [3];
  undefined4 local_120;
  undefined4 *local_60;
  int local_5c;
  uint *local_58;
  int local_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_44;
  undefined4 local_40;
  uint *local_3c;
  uint *local_38;
  int local_34;
  uint *local_30;
  int local_2c;
  int local_28;
  uint local_24;
  undefined4 uStack_4;
  
  iVar5 = DAT_000170d4 + 0x161c8;
  local_28 = 0;
  local_2c = 0;
  local_60 = &uStack_4;
  local_30 = param_3;
  uStack_4 = param_4;
  local_34 = FUN_00014ff4(param_1);
  if (local_34 == -1) {
    uVar1 = syscall(0x36,param_1,param_2,local_30);
    return uVar1;
  }
  if (*(int *)(DAT_000170d8 + local_34 * 800 + 0x16404) == 0) goto LAB_000165ec;
  if (param_2 == 0xc02c564a) {
LAB_0001646c:
    local_28 = 1;
  }
  else {
    if (0xc02c564a < param_2) {
      if (param_2 != 0xc0445624) {
        if (param_2 < 0xc0445625) {
          if (param_2 == 0xc0445609) {
LAB_000164f8:
            if (local_30[1] == 1) {
              local_28 = 1;
              local_2c = 1;
            }
          }
          else if (param_2 < 0xc044560a) {
            if (param_2 == 0xc034564b) goto LAB_0001646c;
            if ((param_2 == 0xc0405602) && (local_30[1] == 1)) {
              local_28 = 1;
            }
          }
          else if ((param_2 == 0xc044560f) || (param_2 == 0xc0445611)) goto LAB_000164f8;
        }
        else if (param_2 < 0xc0cc5606) {
          if (param_2 < 0xc0cc5604) {
            if (param_2 == 0xc0845657) goto LAB_00016590;
          }
          else if (*local_30 == 1) {
            local_28 = 1;
            local_2c = 1;
          }
        }
        else if (param_2 == 0xc0cc5616) {
          if ((*local_30 == 1) &&
             (local_28 = 1, (*(uint *)(DAT_000170dc + local_34 * 800 + 0x16568) & 0x4000) != 0)) {
            local_2c = 1;
          }
        }
        else if ((param_2 == 0xc0cc5640) && (*local_30 == 1)) {
          local_28 = 1;
        }
        goto LAB_000165d8;
      }
      goto LAB_0001646c;
    }
    if (param_2 == 0xc0045627) {
LAB_00016590:
      local_28 = 1;
      local_2c = 1;
    }
    else if (param_2 < 0xc0045628) {
      if (param_2 == 0x40085618) goto LAB_00016590;
      if (param_2 < 0x40085619) {
        if ((param_2 + 0xbffba9ee < 2) && (*local_30 == 1)) {
          local_28 = 1;
          local_2c = 1;
        }
      }
      else if (param_2 == 0x80685600) goto LAB_0001646c;
    }
    else if (param_2 == 0xc0145608) {
      if (local_30[1] == 1) {
        local_28 = 1;
        local_2c = 1;
      }
    }
    else if (param_2 < 0xc0145609) {
      if (param_2 + 0x3ff7a9e5 < 2) goto LAB_0001646c;
    }
    else if (param_2 + 0x3fe7a9b9 < 3) goto LAB_0001646c;
  }
LAB_000165d8:
  if (local_28 == 0) {
LAB_000165ec:
    local_24 = (**(code **)(*(int *)(DAT_000170e0 + local_34 * 800 + 0x16914) + 8))
                         (*(undefined4 *)(DAT_000170e4 + local_34 * 800 + 0x16934),param_1,param_2,
                          local_30);
    piVar2 = __errno_location();
    local_54 = *piVar2;
    FUN_00019724(param_2,local_30,local_24);
    piVar2 = __errno_location();
    *piVar2 = local_54;
    return local_24;
  }
  if (local_2c != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(local_34 * 800 + DAT_000170e8 + 0x16850));
    if ((((*(uint *)(DAT_000170ec + local_34 * 800 + 0x166c0) & 0x1000) == 0) &&
        (iVar3 = v4lconvert_supported_dst_fmt_only
                           (*(undefined4 *)(DAT_000170f0 + local_34 * 800 + 0x168bc)), iVar3 != 0))
       && (iVar3 = v4lconvert_supported_dst_format
                             (*(undefined4 *)(DAT_000170f4 + local_34 * 800 + 0x16808)), iVar3 == 0)
       ) {
      memcpy(local_12c,(void *)(DAT_000170f8 + local_34 * 800 + 0x16830),0xcc);
      if (**(int **)(iVar5 + DAT_000171d4) != 0) {
        fwrite((void *)(DAT_000170fc + 0x167a8),1,0x3e,
               (FILE *)**(undefined4 **)(iVar5 + DAT_000171d4));
        fflush((FILE *)**(undefined4 **)(iVar5 + DAT_000171d4));
      }
      local_120 = 0x33424752;
      FUN_00015bd4(local_34,local_12c);
      if (**(int **)(iVar5 + DAT_000171d4) != 0) {
        fwrite((void *)(DAT_00017100 + 0x1680c),1,0x3a,
               (FILE *)**(undefined4 **)(iVar5 + DAT_000171d4));
        fflush((FILE *)**(undefined4 **)(iVar5 + DAT_000171d4));
      }
    }
    *(uint *)(DAT_00017108 + local_34 * 800 + 0x16854) =
         *(uint *)(DAT_00017104 + local_34 * 800 + 0x16830) | 0x1000;
  }
  if (param_2 == 0xc02c564a) {
    local_24 = v4lconvert_enum_framesizes
                         (*(undefined4 *)(DAT_00017130 + local_34 * 800 + 0x16eb4),local_30);
    goto LAB_00017b48;
  }
  if (param_2 < 0xc02c564b) {
    if (param_2 == 0xc008561b) {
      local_24 = v4lconvert_vidioc_g_ctrl
                           (*(undefined4 *)(DAT_00017110 + local_34 * 800 + 0x16ce0),local_30);
      goto LAB_00017b48;
    }
    if (param_2 < 0xc008561c) {
      if (param_2 == 0x40085618) {
LAB_00016e50:
        memset(local_12c,0,0xcc);
        local_40 = *(undefined4 *)(DAT_00017148 + local_34 * 800 + 0x16f5c);
        local_24 = (**(code **)(*(int *)((int)&DAT_000171b0 + DAT_0001714c + local_34 * 800) + 8))
                             (*(undefined4 *)((int)&DAT_000171d0 + DAT_00017150 + local_34 * 800),
                              param_1,param_2,local_30);
        if (local_24 == 0) {
          local_12c[0] = 1;
          local_24 = (**(code **)(*(int *)(DAT_00017154 + local_34 * 800 + 0x1721c) + 8))
                               (*(undefined4 *)(DAT_00017158 + local_34 * 800 + 0x1723c),param_1,
                                0xc0cc5604,local_12c);
          if (local_24 == 0) {
            iVar3 = FUN_000158b0(local_34 * 800 + DAT_00017168 + 0x17098,local_12c);
            if (iVar3 == 0) {
              memcpy((void *)(DAT_00017170 + local_34 * 800 + 0x17220),local_12c,0xcc);
              memcpy((void *)(DAT_00017174 + local_34 * 800 + 0x1731c),local_12c,0xcc);
              FUN_000159b4(local_34,local_34 * 800 + DAT_00017178 + 0x17290,
                           local_34 * 800 + DAT_0001717c + 0x1737c);
              local_120 = local_40;
              local_24 = FUN_00015bd4(local_34,local_12c);
              if (local_24 != 0) {
                if (**(int **)(iVar5 + DAT_000171d4) == 0) {
                  fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_000171d8),
                          (char *)(DAT_00017188 + 0x17360),
                          *(undefined4 *)(*(int *)(iVar5 + DAT_00017184) + (param_2 & 0xff) * 4));
                }
                else {
                  fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_000171d4),
                          (char *)(DAT_00017180 + 0x17314),
                          *(undefined4 *)(*(int *)(iVar5 + DAT_00017184) + (param_2 & 0xff) * 4));
                  fflush((FILE *)**(undefined4 **)(iVar5 + DAT_000171d4));
                }
                local_24 = 0;
              }
            }
            else {
              FUN_000159b4(local_34,local_12c,(int)&DAT_000171a0 + local_34 * 800 + DAT_0001716c);
            }
          }
          else {
            piVar2 = __errno_location();
            if (*piVar2 == 0x13) {
              *(undefined4 *)(DAT_0001715c + local_34 * 800 + 0x16f88) = 1;
            }
            else if (**(int **)(iVar5 + DAT_000171d4) == 0) {
              pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000171d8);
              uVar7 = *(undefined4 *)(*(int *)(iVar5 + DAT_00017184) + (param_2 & 0xff) * 4);
              piVar2 = __errno_location();
              pcVar4 = strerror(*piVar2);
              fprintf(pFVar6,(char *)(DAT_00017164 + 0x17058),uVar7,pcVar4);
            }
            else {
              pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000171d4);
              uVar7 = *(undefined4 *)(*(int *)(iVar5 + DAT_00017184) + (param_2 & 0xff) * 4);
              piVar2 = __errno_location();
              pcVar4 = strerror(*piVar2);
              fprintf(pFVar6,(char *)(DAT_00017160 + 0x16ff4),uVar7,pcVar4);
              fflush((FILE *)**(undefined4 **)(iVar5 + DAT_000171d4));
            }
            local_24 = 0;
          }
        }
        goto LAB_00017b48;
      }
      if (param_2 < 0x40085619) {
        if (param_2 + 0xbffba9ee < 2) {
          if (((*(uint *)(DAT_000171e4 + local_34 * 800 + 0x1790c) & 0x400) == 0) ||
             (local_24 = FUN_00013bd0(local_34), local_24 == 0)) {
            if (param_2 == 0x40045612) {
              local_24 = FUN_000120e8(local_34);
            }
            else {
              local_24 = FUN_00012368(local_34);
            }
          }
          goto LAB_00017b48;
        }
      }
      else {
        if (param_2 == 0x80685600) {
          local_38 = local_30;
          local_24 = (**(code **)(*(int *)(DAT_00017124 + local_34 * 800 + 0x16f34) + 8))
                               (*(undefined4 *)(DAT_00017128 + local_34 * 800 + 0x16f54),param_1,
                                0x80685600,local_30);
          if (local_24 == 0) {
            local_38[0x15] = local_38[0x15] | 0x1000000;
            local_38[0x16] = local_38[0x16] | 0x1000000;
          }
          goto LAB_00017b48;
        }
        if (param_2 == 0xc0045627) goto LAB_00016e50;
      }
    }
    else {
      if (param_2 == 0xc0185647) {
        local_24 = v4lconvert_vidioc_g_ext_ctrls
                             (*(undefined4 *)(DAT_00017118 + local_34 * 800 + 0x16d48),local_30);
        goto LAB_00017b48;
      }
      if (param_2 < 0xc0185648) {
        if (param_2 == 0xc008561c) {
          local_24 = v4lconvert_vidioc_s_ctrl
                               (*(undefined4 *)(DAT_00017114 + local_34 * 800 + 0x16d14),local_30);
          goto LAB_00017b48;
        }
        if (param_2 == 0xc0145608) {
          local_44 = local_30;
          if (local_30[2] == 1) {
            local_24 = FUN_000155f4(local_34);
            if (local_24 == 0) {
              if (0x20 < *local_44) {
                *local_44 = 0x20;
              }
              local_24 = (**(code **)(*(int *)(DAT_0001718c + local_34 * 800 + 0x17704) + 8))
                                   (*(undefined4 *)(DAT_00017190 + local_34 * 800 + 0x17724),param_1
                                    ,0xc0145608,local_44);
              if (-1 < (int)local_24) {
                local_24 = 0;
                uVar1 = *local_44;
                if (0x1f < uVar1) {
                  uVar1 = 0x20;
                }
                *(uint *)(DAT_00017194 + local_34 * 800 + 0x17630) = uVar1;
                *(uint *)(DAT_0001719c + local_34 * 800 + 0x174b4) =
                     *(uint *)(DAT_00017198 + local_34 * 800 + 0x17490) & 0xfffffdff;
              }
            }
          }
          else {
            piVar2 = __errno_location();
            *piVar2 = 0x16;
            local_24 = 0xffffffff;
          }
          goto LAB_00017b48;
        }
      }
      else {
        if (param_2 == 0xc0185648) {
          local_24 = v4lconvert_vidioc_s_ext_ctrls
                               (*(undefined4 *)(DAT_00017120 + local_34 * 800 + 0x16db0),local_30);
          goto LAB_00017b48;
        }
        if (param_2 == 0xc0185649) {
          local_24 = v4lconvert_vidioc_try_ext_ctrls
                               (*(undefined4 *)(DAT_0001711c + local_34 * 800 + 0x16d7c),local_30);
          goto LAB_00017b48;
        }
      }
    }
  }
  else {
    if (param_2 == 0xc0445624) {
      local_24 = v4lconvert_vidioc_queryctrl
                           (*(undefined4 *)(DAT_0001710c + local_34 * 800 + 0x16cac),local_30);
      goto LAB_00017b48;
    }
    if (param_2 < 0xc0445625) {
      if (param_2 == 0xc0445609) {
        local_48 = local_30;
        if (((*(uint *)(DAT_000171a0 + local_34 * 800 + 0x174e0) & 0x400) == 0) ||
           (local_24 = FUN_00013bd0(local_34), local_24 == 0)) {
          local_24 = (**(code **)(*(int *)(DAT_000171a4 + local_34 * 800 + 0x1783c) + 8))
                               (*(undefined4 *)(DAT_000171a8 + local_34 * 800 + 0x1785c),param_1,
                                0xc0445609,local_48);
          FUN_00013d30(local_34,local_48);
        }
        goto LAB_00017b48;
      }
      if (param_2 < 0xc044560a) {
        if (param_2 == 0xc034564b) {
          local_24 = v4lconvert_enum_frameintervals
                               (*(undefined4 *)(DAT_00017134 + local_34 * 800 + 0x16ee8),local_30);
          if ((local_24 != 0) && (**(int **)(iVar5 + DAT_000171d4) != 0)) {
            pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000171d4);
            uVar7 = v4lconvert_get_error_message
                              (*(undefined4 *)(DAT_00017138 + local_34 * 800 + 0x16f44));
            fprintf(pFVar6,(char *)(DAT_0001713c + 0x16da0),uVar7);
            fflush((FILE *)**(undefined4 **)(iVar5 + DAT_000171d4));
          }
          goto LAB_00017b48;
        }
        if (param_2 == 0xc0405602) {
          local_24 = v4lconvert_enum_fmt(*(undefined4 *)(DAT_0001712c + local_34 * 800 + 0x16e80),
                                         local_30);
          goto LAB_00017b48;
        }
      }
      else {
        if (param_2 == 0xc044560f) {
          local_4c = local_30;
          if ((((*(uint *)(DAT_000171ac + local_34 * 800 + 0x17598) & 0x400) == 0) ||
              (local_24 = FUN_00013bd0(local_34), local_24 == 0)) &&
             ((iVar5 = FUN_00013c6c(local_34), iVar5 == 0 ||
              (local_24 = FUN_00011a4c(local_34), local_24 == 0)))) {
            local_24 = (**(code **)(*(int *)(DAT_000171b0 + local_34 * 800 + 0x17920) + 8))
                                 (*(undefined4 *)(DAT_000171b4 + local_34 * 800 + 0x17940),param_1,
                                  0xc044560f,local_30);
            FUN_00013d30(local_34,local_4c);
          }
          goto LAB_00017b48;
        }
        if (param_2 == 0xc0445611) {
          local_50 = local_30;
          if (((*(uint *)(DAT_000171b8 + local_34 * 800 + 0x1767c) & 0x400) == 0) ||
             (local_24 = FUN_00013bd0(local_34), local_24 == 0)) {
            iVar3 = FUN_00013c6c(local_34);
            if (iVar3 == 0) {
              pthread_mutex_unlock((pthread_mutex_t *)(local_34 * 800 + DAT_000171bc + 0x1788c));
              local_24 = (**(code **)(*(int *)(DAT_000171c0 + local_34 * 800 + 0x17a14) + 8))
                                   (*(undefined4 *)(DAT_000171c4 + local_34 * 800 + 0x17a34),param_1
                                    ,0xc0445611,local_50);
              pthread_mutex_lock((pthread_mutex_t *)(local_34 * 800 + DAT_000171c8 + 0x17910));
              if (local_24 != 0) {
                piVar2 = __errno_location();
                local_54 = *piVar2;
                piVar2 = __errno_location();
                if (*piVar2 == 0x13) {
                  *(undefined4 *)(DAT_000171cc + local_34 * 800 + 0x177b8) = 1;
                }
                else if (**(int **)(iVar5 + DAT_000171d4) == 0) {
                  pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000171d8);
                  piVar2 = __errno_location();
                  pcVar4 = strerror(*piVar2);
                  fprintf(pFVar6,(char *)(DAT_000171dc + 0x17864),pcVar4);
                }
                else {
                  pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_000171d4);
                  piVar2 = __errno_location();
                  pcVar4 = strerror(*piVar2);
                  fprintf(pFVar6,(char *)(DAT_000171d0 + 0x17810),pcVar4);
                  fflush((FILE *)**(undefined4 **)(iVar5 + DAT_000171d4));
                }
                piVar2 = __errno_location();
                *piVar2 = local_54;
              }
            }
            else {
              local_24 = FUN_000113ac(local_34);
              if (local_24 == 0) {
                local_24 = FUN_0001287c(local_34,local_50,0,
                                        *(undefined4 *)(DAT_000171e0 + local_34 * 800 + 0x17a84));
                if (-1 < (int)local_24) {
                  local_50[2] = local_24;
                  local_24 = 0;
                }
                FUN_00013d30(local_34,local_50);
              }
            }
          }
          goto LAB_00017b48;
        }
      }
    }
    else {
      if (param_2 == 0xc0cc5605) {
        local_24 = FUN_00015bd4(local_34,local_30);
        goto LAB_00017b48;
      }
      if (param_2 < 0xc0cc5606) {
        if (param_2 == 0xc0845657) goto LAB_00016e50;
        if (param_2 == 0xc0cc5604) {
          local_3c = local_30;
          memcpy(local_30,(void *)(DAT_00017144 + local_34 * 800 + 0x16f04),0xcc);
          local_24 = 0;
          goto LAB_00017b48;
        }
      }
      else {
        if (param_2 == 0xc0cc5616) {
          local_58 = local_30;
          if (((*(uint *)(DAT_000171e8 + local_34 * 800 + 0x1798c) & 0x4000) != 0) &&
             (local_30[3] != 0)) {
            local_5c = local_30[3] + local_30[4] + -1;
            local_5c = FUN_00019e6c(local_5c,local_30[3]);
            FUN_00017bc4(local_34,local_5c);
          }
          local_24 = (**(code **)(*(int *)(DAT_000171ec + local_34 * 800 + 0x17d30) + 8))
                               (*(undefined4 *)(DAT_000171f0 + local_34 * 800 + 0x17d50),param_1,
                                0xc0cc5616,local_58);
          if (local_24 == 0) {
            FUN_000141ec(local_34,local_58);
          }
          goto LAB_00017b48;
        }
        if (param_2 == 0xc0cc5640) {
          local_24 = v4lconvert_try_format
                               (*(undefined4 *)(DAT_00017140 + local_34 * 800 + 0x16fa0),local_30,0)
          ;
          goto LAB_00017b48;
        }
      }
    }
  }
  local_24 = (**(code **)(*(int *)(DAT_000171f4 + local_34 * 800 + 0x17da8) + 8))
                       (*(undefined4 *)(DAT_000171f8 + local_34 * 800 + 0x17dc8),param_1,param_2,
                        local_30);
LAB_00017b48:
  if (local_2c != 0) {
    pthread_mutex_unlock((pthread_mutex_t *)(local_34 * 800 + DAT_000171fc + 0x17d1c));
  }
  piVar2 = __errno_location();
  local_54 = *piVar2;
  FUN_00019724(param_2,local_30,local_24);
  piVar2 = __errno_location();
  *piVar2 = local_54;
  return local_24;
}



/* ===== FUN_00017bc4 @ 00017bc4 size=1604 ===== */

void FUN_00017bc4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  FILE *pFVar5;
  undefined1 auStack_378 [204];
  undefined1 auStack_2ac [12];
  uint local_2a0;
  undefined1 auStack_1e0 [204];
  undefined1 auStack_114 [4];
  int local_110;
  int local_10c;
  uint local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int local_48;
  int local_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  int local_14;
  
  iVar4 = DAT_00018208 + 0x17be4;
  memcpy(auStack_1e0,(void *)(DAT_0001820c + param_1 * 800 + 0x17ccc),0xcc);
  memcpy(auStack_2ac,(void *)(DAT_00018210 + param_1 * 800 + 0x17c30),0xcc);
  memcpy(auStack_378,(void *)(DAT_00018214 + param_1 * 800 + 0x17d2c),0xcc);
  if ((param_2 != *(int *)(DAT_00018218 + param_1 * 800 + 0x17e48)) &&
     (iVar1 = FUN_000155f4(param_1), iVar1 == 0)) {
    v4lconvert_set_fps(*(undefined4 *)(DAT_0001821c + param_1 * 800 + 0x17e90),param_2);
    local_14 = v4lconvert_try_format
                         (*(undefined4 *)(DAT_00018220 + param_1 * 800 + 0x17ebc),auStack_1e0,
                          auStack_114);
    v4lconvert_set_fps(*(undefined4 *)(DAT_00018224 + param_1 * 800 + 0x17ef0),0x1e);
    if ((local_14 == 0) &&
       ((local_2a0 != local_108 && (iVar1 = FUN_000158b0(auStack_378,auStack_1e0), iVar1 != 0)))) {
      local_48 = local_110;
      local_44 = local_10c;
      local_40 = local_108;
      uStack_3c = uStack_104;
      local_38 = local_100;
      uStack_34 = uStack_fc;
      uStack_30 = uStack_f8;
      uStack_2c = uStack_f4;
      local_28 = local_f0;
      uStack_24 = uStack_ec;
      uStack_20 = uStack_e8;
      uStack_1c = uStack_e4;
      iVar1 = (**(code **)(*(int *)(DAT_00018228 + param_1 * 800 + 0x180c0) + 8))
                        (*(undefined4 *)(DAT_0001822c + param_1 * 800 + 0x180e0),
                         *(undefined4 *)(DAT_00018230 + 0x17de8 + param_1 * 800),0xc0cc5605,
                         auStack_114);
      if (iVar1 == 0) {
        FUN_000159b4(param_1,auStack_114,auStack_1e0);
        if ((((local_110 == local_48) && (local_10c == local_44)) && (local_108 == local_40)) &&
           (iVar1 = FUN_00015940(auStack_378,auStack_1e0), iVar1 != 0)) {
          if (**(int **)(iVar4 + DAT_00018234) != 0) {
            local_18 = local_108;
            fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00018234),(char *)(DAT_00018238 + 0x17ee4)
                    ,local_108 & 0xff,(int)local_108 >> 8 & 0xff,(int)local_108 >> 0x10 & 0xff,
                    (int)local_108 >> 0x18);
          }
        }
        else {
          if (**(int **)(iVar4 + DAT_00018234) == 0) {
            fwrite((void *)(DAT_00018244 + 0x17f54),1,100,
                   (FILE *)**(undefined4 **)(iVar4 + DAT_00018240));
          }
          else {
            fwrite((void *)(DAT_0001823c + 0x17f1c),1,100,
                   (FILE *)**(undefined4 **)(iVar4 + DAT_00018234));
            fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00018234));
          }
          memcpy(auStack_114,auStack_2ac,0xcc);
          memcpy(auStack_1e0,auStack_378,0xcc);
          local_48 = local_110;
          local_44 = local_10c;
          local_40 = local_108;
          uStack_3c = uStack_104;
          local_38 = local_100;
          uStack_34 = uStack_fc;
          uStack_30 = uStack_f8;
          uStack_2c = uStack_f4;
          local_28 = local_f0;
          uStack_24 = uStack_ec;
          uStack_20 = uStack_e8;
          uStack_1c = uStack_e4;
          iVar1 = (**(code **)(*(int *)(DAT_00018248 + param_1 * 800 + 0x182c4) + 8))
                            (*(undefined4 *)(DAT_0001824c + param_1 * 800 + 0x182e4),
                             *(undefined4 *)(DAT_00018250 + 0x17fec + param_1 * 800),0xc0cc5605,
                             auStack_114);
          if (iVar1 == 0) {
            FUN_000159b4(param_1,auStack_114,auStack_1e0);
            if (((local_110 != local_48) || (local_10c != local_44)) ||
               ((local_108 != local_40 ||
                (iVar1 = FUN_00015940(auStack_378,auStack_1e0), iVar1 == 0)))) {
              if (**(int **)(iVar4 + DAT_00018234) == 0) {
                fwrite((void *)(DAT_00018264 + 0x181d0),1,0x39,
                       (FILE *)**(undefined4 **)(iVar4 + DAT_00018240));
              }
              else {
                fwrite((void *)(DAT_00018260 + 0x18198),1,0x39,
                       (FILE *)**(undefined4 **)(iVar4 + DAT_00018234));
                fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00018234));
              }
            }
          }
          else {
            piVar2 = __errno_location();
            if (*piVar2 == 0x13) {
              *(undefined4 *)(DAT_00018254 + param_1 * 800 + 0x18044) = 1;
            }
            else if (**(int **)(iVar4 + DAT_00018234) == 0) {
              pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00018240);
              piVar2 = __errno_location();
              pcVar3 = strerror(*piVar2);
              fprintf(pFVar5,(char *)(DAT_0001825c + 0x180f4),pcVar3);
            }
            else {
              pFVar5 = (FILE *)**(undefined4 **)(iVar4 + DAT_00018234);
              piVar2 = __errno_location();
              pcVar3 = strerror(*piVar2);
              fprintf(pFVar5,(char *)(DAT_00018258 + 0x180a0),pcVar3);
              fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00018234));
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== v4l2_read @ 00018268 size=824 ===== */

int v4l2_read(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_30;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = FUN_00014ff4(param_1);
  if (local_18 == -1) {
    lVar1 = syscall(3,param_1,param_2,param_3);
    return lVar1;
  }
  if (*(int *)(*(int *)(DAT_000185a0 + local_18 * 800 + 0x185dc) + 0xc) != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(local_18 * 800 + DAT_000185a4 + 0x184c0));
    if ((*(int *)(DAT_000185a8 + local_18 * 800 + 0x18500) == 0) ||
       (((*(uint *)(DAT_000185ac + local_18 * 800 + 0x18358) & 0x800) != 0 &&
        (iVar3 = FUN_00013c6c(local_18), iVar3 == 0)))) {
      local_14 = (**(code **)(*(int *)(DAT_000185b0 + local_18 * 800 + 0x186b0) + 0xc))
                           (*(undefined4 *)((int)&DAT_000186d0 + DAT_000185b4 + local_18 * 800),
                            param_1,param_2,param_3);
    }
    else {
      if ((((*(uint *)(DAT_000185b8 + local_18 * 800 + 0x183f4) & 0x400) == 0) &&
          ((*(uint *)(DAT_000185bc + local_18 * 800 + 0x18420) & 0x2000) == 0)) &&
         (local_14 = FUN_00013a98(local_18), local_14 != 0)) {
        *(uint *)(DAT_000185c4 + local_18 * 800 + 0x18488) =
             *(uint *)(DAT_000185c0 + local_18 * 800 + 0x18464) | 0x2000;
        *(undefined4 *)(DAT_000185c8 + local_18 * 800 + 0x18674) = 3;
      }
      if ((*(uint *)(DAT_000185cc + local_18 * 800 + 0x184cc) & 0x2000) == 0) {
        local_5c = 1;
        local_30 = 1;
        local_14 = FUN_0001287c(local_18,&local_60,param_2,param_3);
        if (-1 < local_14) {
          FUN_000125e8(local_18,local_60);
        }
      }
      else {
        local_14 = FUN_00013174(local_18,param_2,param_3);
      }
    }
    piVar2 = __errno_location();
    local_1c = *piVar2;
    pthread_mutex_unlock((pthread_mutex_t *)(local_18 * 800 + DAT_000185d0 + 0x18720));
    piVar2 = __errno_location();
    *piVar2 = local_1c;
    return local_14;
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return -1;
}



/* ===== v4l2_write @ 000185d4 size=244 ===== */

long v4l2_write(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  iVar1 = FUN_00014ff4(param_1);
  if (iVar1 == -1) {
    lVar2 = syscall(4,param_1,param_2,param_3);
  }
  else if (*(int *)(*(int *)(DAT_000186c8 + iVar1 * 800 + 0x18948) + 0x10) == 0) {
    piVar3 = __errno_location();
    *piVar3 = 0x16;
    lVar2 = -1;
  }
  else {
    lVar2 = (**(code **)(*(int *)(DAT_000186cc + iVar1 * 800 + 0x1898c) + 0x10))
                      (*(undefined4 *)(DAT_000186d0 + iVar1 * 800 + 0x189ac),param_1,param_2,param_3
                      );
  }
  return lVar2;
}



/* ===== v4l2_mmap @ 000186d4 size=856 ===== */

long v4l2_mmap(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
              undefined4 param_6,uint param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long local_14;
  
  iVar4 = DAT_00018a2c + 0x186fc;
  iVar1 = FUN_00014ff4(param_5);
  if ((((iVar1 == -1) || (param_1 != 0)) ||
      (param_2 != *(int *)(DAT_00018a30 + iVar1 * 800 + 0x18908))) ||
     ((param_7 & 0xffffff00) != 0xabcdef00)) {
    if ((iVar1 != -1) && (**(int **)(iVar4 + DAT_00018a34) != 0)) {
      fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00018a34),(char *)(DAT_00018a38 + 0x187ac),
              param_1,param_2,param_7);
      fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00018a34));
    }
    if ((param_7 & 0xfff) == 0) {
      local_14 = syscall(0xc0,param_1,param_2,param_3,param_4,param_5,
                         param_7 >> 0xc | param_8 << 0x14);
    }
    else {
      piVar2 = __errno_location();
      *piVar2 = 0x16;
      local_14 = -1;
    }
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(iVar1 * 800 + DAT_00018a3c + 0x18a00));
    param_7 = param_7 & 0xff;
    if ((param_7 < *(uint *)((int)&DAT_00018a3c + DAT_00018a40 + iVar1 * 800)) &&
       (iVar3 = FUN_00013c6c(iVar1), iVar3 != 0)) {
      iVar3 = FUN_000113ac(iVar1);
      if (iVar3 == 0) {
        *(char *)(DAT_00018a48 + iVar1 * 800 + param_7 + 0x18c20) =
             *(char *)(DAT_00018a44 + iVar1 * 800 + param_7 + 0x18bf0) + '\x01';
        local_14 = *(int *)(DAT_00018a4c + iVar1 * 800 + 0x18b38) +
                   param_7 * *(int *)(DAT_00018a50 + iVar1 * 800 + 0x18b60);
        if (**(int **)(iVar4 + DAT_00018a34) != 0) {
          fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00018a34),(char *)(DAT_00018a54 + 0x189d8),
                  param_7,local_14);
          fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00018a34));
        }
      }
      else {
        piVar2 = __errno_location();
        *piVar2 = 0x16;
        local_14 = -1;
      }
    }
    else {
      piVar2 = __errno_location();
      *piVar2 = 0x16;
      local_14 = -1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(iVar1 * 800 + DAT_00018a58 + 0x18bbc));
  }
  return local_14;
}



/* ===== v4l2_munmap @ 00018a5c size=1084 ===== */

long v4l2_munmap(uint param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int extraout_r1;
  int extraout_r1_00;
  int iVar4;
  int local_14;
  
  iVar4 = DAT_00018e98 + 0x18a7c;
  if (param_1 != 0xffffffff) {
    local_14 = 0;
    while ((local_14 < *(int *)(DAT_00018eb0 + 0x18b94) &&
           ((((*(int *)(DAT_00018e9c + 0x18aa4 + local_14 * 800) == -1 ||
              (*(int *)(DAT_00018ea0 + local_14 * 800 + 0x18ca0) == -1)) ||
             (param_2 != *(int *)(DAT_00018ea4 + local_14 * 800 + 0x18cd0))) ||
            ((param_1 < *(uint *)(DAT_00018ea8 + local_14 * 800 + 0x18cf4) ||
             (FUN_00019f14(param_1 - *(int *)(DAT_00018eac + local_14 * 800 + 0x18d20),param_2),
             extraout_r1 != 0))))))) {
      local_14 = local_14 + 1;
    }
    if (local_14 != *(int *)(DAT_00018eb4 + 0x18bb4)) {
      bVar1 = false;
      pthread_mutex_lock((pthread_mutex_t *)(local_14 * 800 + DAT_00018eb8 + 0x18d90));
      uVar2 = FUN_00019e6c(param_1 - *(int *)(DAT_00018ebc + local_14 * 800 + 0x18dd4),param_2);
      if (((*(int *)(DAT_00018ec0 + local_14 * 800 + 0x18e10) != -1) &&
          (param_2 == *(int *)(DAT_00018ec4 + local_14 * 800 + 0x18e40))) &&
         ((*(uint *)(DAT_00018ec8 + local_14 * 800 + 0x18e64) <= param_1 &&
          ((FUN_00019f14(param_1 - *(int *)(DAT_00018ecc + local_14 * 800 + 0x18e90),param_2),
           extraout_r1_00 == 0 &&
           (uVar2 < *(uint *)((int)&DAT_00018ebc + DAT_00018ed0 + local_14 * 800))))))) {
        if (*(char *)(DAT_00018ed4 + local_14 * 800 + uVar2 + 0x19010) != '\0') {
          *(char *)(DAT_00018edc + local_14 * 800 + uVar2 + 0x19070) =
               *(char *)(DAT_00018ed8 + local_14 * 800 + uVar2 + 0x19040) + -1;
        }
        bVar1 = true;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(local_14 * 800 + DAT_00018ee0 + 0x18f74));
      if (bVar1) {
        if (**(int **)(iVar4 + DAT_00018ee4) != 0) {
          fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00018ee4),(char *)(DAT_00018ee8 + 0x18e14),
                  param_1,param_2);
          fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00018ee4));
        }
        return 0;
      }
    }
  }
  if (**(int **)(iVar4 + DAT_00018ee4) != 0) {
    fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_00018ee4),(char *)(DAT_00018eec + 0x18e64),param_1
            ,param_2);
    fflush((FILE *)**(undefined4 **)(iVar4 + DAT_00018ee4));
  }
  lVar3 = syscall(0x5b,param_1,param_2);
  return lVar3;
}



/* ===== v4l2_set_control @ 00018ef0 size=556 ===== */

int v4l2_set_control(undefined4 param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 local_64;
  uint local_5c;
  int local_58;
  int local_34;
  int local_30;
  uint local_24;
  int local_18;
  int local_14;
  
  iVar2 = DAT_0001911c + 0x18f14;
  memset(&local_5c,0,0x44);
  local_64 = (ulonglong)param_2;
  local_5c = param_2;
  local_18 = FUN_00014ff4(param_1);
  if ((local_18 == -1) || (*(int *)((int)&DAT_00019138 + DAT_00019120 + local_18 * 800) == 0)) {
    if (**(int **)(iVar2 + DAT_00019124) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_0001912c),(char *)(DAT_00019130 + 0x18fe8),
              param_1);
    }
    else {
      fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00019124),(char *)(DAT_00019128 + 0x18fb0),
              param_1);
      fflush((FILE *)**(undefined4 **)(iVar2 + DAT_00019124));
    }
    piVar1 = __errno_location();
    *piVar1 = 9;
    local_14 = -1;
  }
  else {
    local_14 = v4lconvert_vidioc_queryctrl
                         (*(undefined4 *)(DAT_00019134 + local_18 * 800 + 0x191e4),&local_5c);
    if (((local_14 == 0) && ((local_24 & 1) == 0)) && ((local_24 & 2) == 0)) {
      if (local_58 == 2) {
        local_64 = (ulonglong)CONCAT14(param_3 != 0,(undefined4)local_64);
      }
      else {
        local_64 = CONCAT44((param_3 * (local_30 - local_34) + 0x7fff) / 0xffff + local_34,
                            (undefined4)local_64);
      }
      local_14 = v4lconvert_vidioc_s_ctrl
                           (*(undefined4 *)(DAT_00019138 + local_18 * 800 + 0x192b8),&local_64);
    }
  }
  return local_14;
}



/* ===== v4l2_get_control @ 0001913c size=536 ===== */

undefined4 v4l2_get_control(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_60;
  int iStack_5c;
  undefined4 local_58 [10];
  int local_30;
  int local_2c;
  uint local_20;
  int local_14;
  
  iVar3 = DAT_00019354 + 0x1915c;
  memset(local_58,0,0x44);
  iStack_5c = 0;
  local_58[0] = param_2;
  local_60 = param_2;
  local_14 = FUN_00014ff4(param_1);
  if ((local_14 == -1) || (*(int *)(DAT_00019358 + local_14 * 800 + 0x19380) == 0)) {
    if (**(int **)(iVar3 + DAT_0001935c) == 0) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00019364),(char *)(DAT_00019368 + 0x19230),
              param_1);
    }
    else {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_0001935c),(char *)(DAT_00019360 + 0x191f8),
              param_1);
      fflush((FILE *)**(undefined4 **)(iVar3 + DAT_0001935c));
    }
    piVar1 = __errno_location();
    *piVar1 = 9;
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = v4lconvert_vidioc_queryctrl
                      (*(undefined4 *)(DAT_0001936c + local_14 * 800 + 0x1942c),local_58);
    if (iVar3 == 0) {
      if ((local_20 & 1) == 0) {
        iVar3 = v4lconvert_vidioc_g_ctrl
                          (*(undefined4 *)(DAT_00019370 + local_14 * 800 + 0x19498),&local_60);
        if (iVar3 == 0) {
          uVar2 = FUN_00019f34((iStack_5c - local_30) * 0xffff + (local_2c - local_30) / 2,
                               local_2c - local_30);
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        piVar1 = __errno_location();
        *piVar1 = 0x16;
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== FUN_00019374 @ 00019374 size=832 ===== */

void FUN_00019374(undefined4 param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  glob_t local_48;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  
  iVar3 = DAT_000196b4 + 0x1939c;
  local_18 = 0;
  local_1c = (int *)0x0;
  uVar1 = v4lconvert_get_default_dev_ops();
  *param_4 = uVar1;
  *param_2 = 0;
  *param_3 = 0;
  local_20 = glob((char *)(DAT_000196b8 + 0x193e8),0,(__errfunc *)0x0,&local_48);
  if (local_20 != 1) {
    if ((local_20 != 2) && (local_20 != 3)) {
      for (local_14 = 0; local_14 < local_48.gl_pathc; local_14 = local_14 + 1) {
        if (**(int **)(iVar3 + DAT_000196bc) != 0) {
          fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000196bc),(char *)(DAT_000196c0 + 0x19460),
                  local_48.gl_pathv[local_14]);
          fflush((FILE *)**(undefined4 **)(iVar3 + DAT_000196bc));
        }
        local_18 = dlopen(local_48.gl_pathv[local_14],1);
        if (local_18 != 0) {
          dlerror();
          local_1c = (int *)dlsym(local_18,DAT_000196c4 + 0x194b8);
          local_24 = dlerror();
          if (local_24 == 0) {
            if (((*local_1c == 0) || (local_1c[1] == 0)) || (local_1c[2] == 0)) {
              if (**(int **)(iVar3 + DAT_000196bc) != 0) {
                fwrite((void *)(DAT_000196d4 + 0x195b4),1,0x31,
                       (FILE *)**(undefined4 **)(iVar3 + DAT_000196bc));
                fflush((FILE *)**(undefined4 **)(iVar3 + DAT_000196bc));
              }
              dlclose(local_18);
            }
            else {
              iVar2 = (*(code *)*local_1c)(param_1);
              *param_3 = iVar2;
              if (*param_3 != 0) {
                *param_2 = local_18;
                *param_4 = local_1c;
                break;
              }
              if (**(int **)(iVar3 + DAT_000196bc) != 0) {
                fwrite((void *)(DAT_000196d8 + 0x19634),1,0x2d,
                       (FILE *)**(undefined4 **)(iVar3 + DAT_000196bc));
                fflush((FILE *)**(undefined4 **)(iVar3 + DAT_000196bc));
              }
              dlclose(local_18);
            }
          }
          else {
            if (**(int **)(iVar3 + DAT_000196bc) == 0) {
              fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000196cc),
                      (char *)(DAT_000196d0 + 0x19540),local_24);
            }
            else {
              fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000196bc),
                      (char *)(DAT_000196c8 + 0x19508),local_24);
              fflush((FILE *)**(undefined4 **)(iVar3 + DAT_000196bc));
            }
            dlclose(local_18);
          }
        }
      }
    }
    globfree(&local_48);
  }
  return;
}



/* ===== FUN_000196dc @ 000196dc size=72 ===== */

void FUN_000196dc(int param_1,undefined4 param_2,int param_3)

{
  if (param_1 != 0) {
    (**(code **)(param_3 + 4))(param_2);
    dlclose(param_1);
  }
  return;
}



/* ===== FUN_00019724 @ 00019724 size=1776 ===== */

void FUN_00019724(uint param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FILE *__stream;
  int iVar8;
  int iVar9;
  char acStack_70 [40];
  int *local_48;
  uint local_44;
  int *local_40;
  uint local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  uint local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  char *local_1c;
  
  iVar7 = DAT_00019e14 + 0x19748;
  piVar1 = __errno_location();
  local_20 = *piVar1;
  if (**(int **)(iVar7 + DAT_00019e18) == 0) {
    return;
  }
  if (((param_1 >> 8 & 0xff) == 0x56) && ((param_1 & 0xff) < 0x67)) {
    local_1c = *(char **)(DAT_00019e1c + 0x197a0 + (param_1 & 0xff) * 4);
  }
  else {
    snprintf(acStack_70,0x28,(char *)(DAT_00019e20 + 0x197d4),param_1 >> 8 & 0xff,param_1 & 0xff);
    local_1c = acStack_70;
  }
  fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e24 + 0x197fc),local_1c)
  ;
  if (param_1 == 0xc0445611) {
    local_34 = param_2;
    fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e44 + 0x19ae0),
            param_2[5],param_2[6]);
  }
  else if (param_1 < 0xc0445612) {
    if (param_1 == 0xc02c564a) {
      local_3c = param_2[1];
      uVar5 = (int)local_3c >> 8 & 0xff;
      uVar4 = (int)local_3c >> 0x10 & 0xff;
      iVar9 = (int)local_3c >> 0x18;
      local_38 = param_2;
      fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e48 + 0x19b54),
              *param_2,local_3c & 0xff,uVar5,uVar4,iVar9);
      uVar6 = local_38[2];
      if (uVar6 == 1) {
        fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e4c + 0x19ba0),
                local_38[3],local_38[4],uVar5,uVar4,iVar9);
      }
      else if ((uVar6 != 0) && (uVar6 < 4)) {
        fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e50 + 0x19bec),
                local_38[3],local_38[6],local_38[4],local_38[7],iVar9);
      }
    }
    else if (param_1 < 0xc02c564b) {
      if (param_1 == 0xc0145608) {
        local_30 = param_2;
        fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e40 + 0x19aac),
                *param_2,param_2[1],param_2[2]);
      }
    }
    else if (param_1 == 0xc034564b) {
      local_44 = param_2[1];
      uVar5 = (int)local_44 >> 8 & 0xff;
      uVar4 = (int)local_44 >> 0x10 & 0xff;
      iVar9 = (int)local_44 >> 0x18;
      iVar2 = param_2[2];
      iVar8 = param_2[3];
      local_40 = param_2;
      fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e54 + 0x19c7c),
              *param_2,local_44 & 0xff,uVar5,uVar4,iVar9,iVar2,iVar8);
      uVar6 = local_40[4];
      if (uVar6 == 1) {
        fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e58 + 0x19ccc),
                local_40[5],local_40[6],uVar5,uVar4,iVar9,iVar2,iVar8);
      }
      else if ((uVar6 != 0) && (uVar6 < 4)) {
        fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e5c + 0x19d18),
                local_40[5],local_40[6],local_40[7],local_40[8],iVar9,iVar2,iVar8);
      }
    }
    else if (param_1 == 0xc0405602) {
      if (param_3 < 0) {
        piVar1 = (int *)(DAT_00019e28 + 0x19930);
      }
      else {
        piVar1 = param_2 + 3;
      }
      local_24 = param_2;
      fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e2c + 0x19938),
              *param_2,piVar1);
    }
  }
  else {
    if (param_1 < 0xc0cc5617) {
      if (0xc0cc5614 < param_1) {
        local_48 = param_2;
        if ((*param_2 == 1) && ((param_2[1] & 0x1000U) != 0)) {
          fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e60 + 0x19d74),
                  param_2[3],param_2[4]);
        }
        goto LAB_00019d94;
      }
      if (1 < param_1 + 0x3f33a9fc) goto LAB_00019d94;
    }
    else if (param_1 != 0xc0cc5640) goto LAB_00019d94;
    local_2c = param_2[3];
    local_28 = param_2;
    if (*param_2 == 1) {
      fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e30 + 0x199c8),
              local_2c & 0xff,(int)local_2c >> 8 & 0xff,(int)local_2c >> 0x10 & 0xff,
              (int)local_2c >> 0x18,param_2[1],param_2[2]);
      fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e34 + 0x19a0c),
              local_28[4],local_28[5],local_28[6]);
      fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e38 + 0x19a38),
              local_28[7],local_28[8]);
    }
    else {
      fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e3c + 0x19a60),
              *param_2);
    }
  }
LAB_00019d94:
  if (param_3 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar7 + DAT_00019e18);
    pcVar3 = strerror(local_20);
    fprintf(__stream,(char *)(DAT_00019e64 + 0x19dc8),param_3,pcVar3);
  }
  else {
    fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18),(char *)(DAT_00019e68 + 0x19dec),param_3
           );
  }
  fflush((FILE *)**(undefined4 **)(iVar7 + DAT_00019e18));
  return;
}



/* ===== FUN_00019e6c @ 00019e6c size=168 ===== */

ulonglong FUN_00019e6c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_2 == 0) {
    uVar1 = raise(8);
    return (ulonglong)uVar1;
  }
  if (param_1 <= param_2) {
    return CONCAT44(param_2,(uint)(param_1 == param_2));
  }
  if ((param_2 & param_2 - 1) == 0) {
    return CONCAT44(param_2,param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
  }
  uVar2 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar1 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar3 = 0;
  while( true ) {
    if (uVar2 <= param_1) {
      param_1 = param_1 - uVar2;
      uVar3 = uVar3 | uVar1;
    }
    if (uVar2 >> 1 <= param_1) {
      param_1 = param_1 - (uVar2 >> 1);
      uVar3 = uVar3 | uVar1 >> 1;
    }
    if (uVar2 >> 2 <= param_1) {
      param_1 = param_1 - (uVar2 >> 2);
      uVar3 = uVar3 | uVar1 >> 2;
    }
    if (uVar2 >> 3 <= param_1) {
      param_1 = param_1 - (uVar2 >> 3);
      uVar3 = uVar3 | uVar1 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar1 = uVar1 >> 4;
      bVar4 = uVar1 == 0;
    }
    if (bVar4) break;
    uVar2 = uVar2 >> 4;
  }
  return CONCAT44(uVar2,uVar3);
}



/* ===== FUN_00019f14 @ 00019f14 size=32 ===== */

void FUN_00019f14(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00019e6c();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00019f34 @ 00019f34 size=236 ===== */

ulonglong FUN_00019f34(uint param_1,uint param_2)

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



/* ===== _fini @ 0001a040 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::v4lconvert_vidioc_queryctrl @ 00030000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_vidioc_queryctrl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlerror @ 00030004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlerror(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 00030008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0003000c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00030010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syscall @ 00030014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_get_default_dev_ops @ 00030018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_get_default_dev_ops(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_vidioc_s_ext_ctrls @ 0003001c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_vidioc_s_ext_ctrls(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_vidioc_s_ctrl @ 00030020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_vidioc_s_ctrl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 00030024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_enum_fmt @ 00030028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_enum_fmt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003002c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::glob @ 00030030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int glob(char *__pattern,int __flags,__errfunc *__errfunc,glob_t *__pglob)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00030034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00030038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_convert @ 0003003c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_convert(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlclose @ 00030040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlclose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_create_with_dev_ops @ 00030044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_create_with_dev_ops(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_enum_frameintervals @ 00030048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_enum_frameintervals(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_enum_framesizes @ 0003004c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_enum_framesizes(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00030050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00030054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_get_error_message @ 00030058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_get_error_message(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0003005c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_vidioc_g_ext_ctrls @ 00030060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_vidioc_g_ext_ctrls(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_set_fps @ 00030064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_set_fps(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlopen @ 00030068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlopen(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0003006c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00030070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlsym @ 00030074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlsym(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_needs_conversion @ 00030078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_needs_conversion(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0003007c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00030080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_fixup_fmt @ 00030084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_fixup_fmt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_unlock @ 00030088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_supported_dst_format @ 0003008c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_supported_dst_format(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_vidioc_try_ext_ctrls @ 00030090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_vidioc_try_ext_ctrls(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_try_format @ 00030094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_try_format(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_destroy @ 0003009c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::globfree @ 000300a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void globfree(glob_t *__pglob)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000300a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_vidioc_g_ctrl @ 000300a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_vidioc_g_ctrl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_lock @ 000300ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000300b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4lconvert_supported_dst_fmt_only @ 000300b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4lconvert_supported_dst_fmt_only(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_mutex_init @ 000300b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000300bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000300c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000300c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


