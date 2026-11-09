// libv4lconvert.so.0 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00011534 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::longjmp @ 00011558 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
  (*(code *)PTR_longjmp_0004e00c)(__env);
  return;
}



/* ===== <EXTERNAL>::waitpid @ 00011564 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_0004e010)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::strerror @ 00011570 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0004e014)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::geteuid @ 0001157c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  __uid_t _Var1;
  
  _Var1 = (*(code *)PTR_geteuid_0004e018)();
  return _Var1;
}



/* ===== <EXTERNAL>::strndup @ 00011588 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strndup_0004e01c)(__string);
  return pcVar1;
}



/* ===== <EXTERNAL>::powf @ 00011594 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float powf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_powf_0004e020)();
  return fVar1;
}



/* ===== <EXTERNAL>::snprintf @ 000115a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0004e024)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::syscall @ 000115ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_0004e028)(__sysno);
  return lVar1;
}



/* ===== <EXTERNAL>::munmap @ 000115b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_0004e02c)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::shm_open @ 000115c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int shm_open(char *__name,int __oflag,mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_shm_open_0004e030)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 000115d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0004e034)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::fgets @ 000115dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0004e038)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000115e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0004e03c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::execl @ 000115f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execl(char *__path,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execl_0004e040)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::perror @ 00011600 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0004e044)(__s);
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0001160c size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0004e048)();
  return;
}



/* ===== <EXTERNAL>::dup2 @ 00011618 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_dup2_0004e04c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00011624 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0004e050)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::ftruncate @ 00011630 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate(int __fd,__off_t __length)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ftruncate_0004e054)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 0001163c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_minor_0004e058)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::mmap @ 00011648 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap_0004e05c)(__addr);
  return pvVar1;
}



/* ===== v4lconvert_create_with_dev_ops @ 00011654 size=12 ===== */

void v4lconvert_create_with_dev_ops(void)

{
  (*(code *)PTR_v4lconvert_create_with_dev_ops_0004e060)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 00011660 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0004e064)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::pipe @ 0001166c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe_0004e068)(__pipedes);
  return iVar1;
}



/* ===== <EXTERNAL>::calloc @ 00011678 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0004e06c)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 00011684 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0004e070)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fstat @ 00011690 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat_0004e074)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001169c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0004e078)();
  return;
}



/* ===== <EXTERNAL>::read @ 000116a8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0004e07c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::memcmp @ 000116b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0004e080)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fork @ 000116c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_0004e084)();
  return _Var1;
}



/* ===== <EXTERNAL>::sscanf @ 000116cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0004e088)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 000116d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0004e08c)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 000116e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0004e090)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fnmatch @ 000116f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fnmatch(char *__pattern,char *__name,int __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fnmatch_0004e094)(__pattern);
  return iVar1;
}



/* ===== <EXTERNAL>::fclose @ 000116fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0004e098)(__stream);
  return iVar1;
}



/* ===== v4lconvert_fixup_fmt @ 00011708 size=12 ===== */

void v4lconvert_fixup_fmt(void)

{
  (*(code *)PTR_v4lconvert_fixup_fmt_0004e09c)();
  return;
}



/* ===== <EXTERNAL>::getpwuid_r @ 00011714 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpwuid_r(__uid_t __uid,passwd *__resultbuf,char *__buffer,size_t __buflen,passwd **__result)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getpwuid_r_0004e0a0)(__uid);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011720 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0004e0a4)(__s1);
  return iVar1;
}



/* ===== v4lconvert_supported_dst_format @ 0001172c size=12 ===== */

void v4lconvert_supported_dst_format(void)

{
  (*(code *)PTR_v4lconvert_supported_dst_format_0004e0a8)();
  return;
}



/* ===== v4lconvert_try_format @ 00011738 size=12 ===== */

void v4lconvert_try_format(void)

{
  (*(code *)PTR_v4lconvert_try_format_0004e0ac)();
  return;
}



/* ===== <EXTERNAL>::stat @ 00011744 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0004e0b0)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011750 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0004e0b4)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 0001175c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0004e0b8)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00011768 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0004e0bc)(__status);
  return;
}



/* ===== v4lconvert_supported_dst_fmt_only @ 00011774 size=12 ===== */

void v4lconvert_supported_dst_fmt_only(void)

{
  (*(code *)PTR_v4lconvert_supported_dst_fmt_only_0004e0c0)();
  return;
}



/* ===== <EXTERNAL>::_setjmp @ 00011780 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR__setjmp_0004e0c4)(__env);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 0001178c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0004e0c8)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011798 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0004e0cc)();
  return;
}



/* ===== <EXTERNAL>::close @ 000117a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0004e0d0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 000117b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0004e0d4)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000117bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0004e0d8)(__ptr);
  return;
}



/* ===== entry @ 000117c8 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00011814 + 0x117e0 == DAT_00011810 + 0x117d8) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011818 + 0x117e8 + DAT_0001181c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00011884 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000118f8 + 0x118a0;
  if (*(char *)(DAT_000118f4 + 0x11894) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000118fc) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00011900 + 0x118c0));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00011904) != 0) {
    __deregister_frame_info(DAT_00011908 + 0x118e0);
  }
  *(undefined1 *)(DAT_0001190c + 0x118f0) = 1;
  return;
}



/* ===== _INIT_0 @ 00011910 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011948 + 0x11920 + DAT_0001194c) != 0) {
    __register_frame_info(DAT_00011954 + 72000,DAT_00011950 + 0x1193c);
  }
  if (((DAT_00011878 + 0x11838) - (DAT_00011874 + 0x11830) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_0001187c + 0x11840 + DAT_00011880);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_0001199c @ 0001199c size=64 ===== */

long FUN_0001199c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = syscall(0x36,param_2,param_3,param_4);
  return lVar1;
}



/* ===== FUN_000119dc @ 000119dc size=64 ===== */

long FUN_000119dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = syscall(3,param_2,param_3,param_4);
  return lVar1;
}



/* ===== FUN_00011a1c @ 00011a1c size=64 ===== */

long FUN_00011a1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = syscall(4,param_2,param_3,param_4);
  return lVar1;
}



/* ===== v4lconvert_get_default_dev_ops @ 00011a5c size=32 ===== */

int v4lconvert_get_default_dev_ops(void)

{
  return DAT_00011a7c + 0x11a70;
}



/* ===== v4lconvert_create @ 00011a80 size=56 ===== */

undefined4 v4lconvert_create(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = v4lconvert_create_with_dev_ops(param_1,0,DAT_00011ab8 + 0x11a9c);
  return uVar1;
}



/* ===== v4lconvert_create_with_dev_ops @ 00011abc size=1064 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 *
v4lconvert_create_with_dev_ops(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *__ptr;
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  int local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char acStack_88 [84];
  uint local_34;
  uint local_30;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  iVar2 = DAT_00011ef0 + 0x11ae0;
  __ptr = calloc(1,0x3580);
  local_1c = 1;
  if (__ptr == (undefined4 *)0x0) {
    fwrite((void *)(DAT_00011ef8 + 0x11b24),1,0x25,(FILE *)**(undefined4 **)(iVar2 + DAT_00011ef4));
    __ptr = (undefined4 *)0x0;
  }
  else {
    *__ptr = param_1;
    __ptr[0xd58] = param_3;
    __ptr[0xd57] = param_2;
    __ptr[0xd59] = 0xffffffff;
    __ptr[0xd4a] = 0x1e;
    local_14 = 0;
    while( true ) {
      auVar4 = (undefined1  [16])0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      _local_c8 = CONCAT44(1,local_14);
      iVar2 = (**(code **)(__ptr[0xd58] + 8))(__ptr[0xd57],*__ptr,0xc0405602,&local_c8);
      if (iVar2 != 0) break;
      for (local_18 = 0;
          (local_18 < 0x33 && (local_a0._4_4_ != *(int *)(DAT_00011efc + 0x11c84 + local_18 * 0x14))
          ); local_18 = local_18 + 1) {
      }
      if (local_18 < 0x33) {
        uVar3 = auVar4._8_8_;
                    /* WARNING: Ignoring partial resolution of indirect */
        uVar3 = VectorShiftLeft(DAT_00011ee8,uVar3,8,1);
        __ptr[4] = (uint)uVar3 | __ptr[4];
        __ptr[5] = (uint)((ulonglong)uVar3 >> 0x20) | __ptr[5];
        FUN_00016528(__ptr,local_a0._4_4_,local_18);
        if (*(int *)(DAT_00011f00 + local_18 * 0x14 + 0x11d2c) == 0) {
          local_1c = 0;
        }
      }
      else {
        local_1c = 0;
      }
      local_14 = local_14 + 1;
    }
    __ptr[3] = local_14;
    iVar2 = (**(code **)(__ptr[0xd58] + 8))(__ptr[0xd57],*__ptr,0x80685600,acStack_88);
    if (iVar2 == 0) {
      iVar2 = strcmp(acStack_88,(char *)(DAT_00011f04 + 0x11d6c));
      if (iVar2 == 0) {
        __ptr[1] = __ptr[1] | 1;
      }
      if ((int)local_34 < 0) {
        local_34 = local_30;
      }
      if ((local_34 & 0xfe) != 0) {
        local_1c = 0;
      }
    }
    uVar1 = FUN_0003211c(param_1,param_2,param_3,local_1c);
    __ptr[0xd55] = uVar1;
    if (__ptr[0xd55] == 0) {
      free(__ptr);
      __ptr = (undefined4 *)0x0;
    }
    else {
      uVar1 = FUN_00033ae0(__ptr[0xd55]);
      __ptr[0xd49] = uVar1;
      uVar1 = FUN_00033b08(__ptr[0xd55]);
      __ptr[2] = uVar1;
      if ((__ptr[2] & 0x20) != 0) {
        __ptr[1] = __ptr[1] | 2;
      }
      uVar1 = FUN_00033cbc(param_1,__ptr[0xd55]);
      __ptr[0xd56] = uVar1;
      if (__ptr[0xd56] == 0) {
        FUN_00032c34(__ptr[0xd55]);
        free(__ptr);
        __ptr = (undefined4 *)0x0;
      }
    }
  }
  return __ptr;
}



/* ===== v4lconvert_destroy @ 00011f08 size=300 ===== */

void v4lconvert_destroy(void *param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_1 != (void *)0x0) {
    FUN_00033d54(*(undefined4 *)((int)param_1 + 0x3558));
    FUN_00032c34(*(undefined4 *)((int)param_1 + 0x3554));
    if (*(int *)((int)param_1 + 0x118) != 0) {
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      FUN_0001dbf8(*(undefined4 *)((int)param_1 + 0x118),&local_14,3);
      FUN_0001bf64(*(undefined4 *)((int)param_1 + 0x118));
    }
    FUN_00036380(param_1);
    free(*(void **)((int)param_1 + 0x3540));
    free(*(void **)((int)param_1 + 0x3544));
    free(*(void **)((int)param_1 + 0x3548));
    free(*(void **)((int)param_1 + 0x354c));
    free(*(void **)((int)param_1 + 0x3550));
    free(*(void **)((int)param_1 + 0x357c));
    free(param_1);
  }
  return;
}



/* ===== v4lconvert_supported_dst_format @ 00012034 size=136 ===== */

bool v4lconvert_supported_dst_format(int param_1)

{
  int local_c;
  
  for (local_c = 0; (local_c < 4 && (param_1 != *(int *)(DAT_000120bc + 0x1205c + local_c * 0x14)));
      local_c = local_c + 1) {
  }
  return local_c != 4;
}



/* ===== v4lconvert_supported_dst_fmt_only @ 000120c0 size=88 ===== */

undefined4 v4lconvert_supported_dst_fmt_only(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00033c70(*(undefined4 *)(param_1 + 0x3554));
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x10) == 0 && *(int *)(param_1 + 0x14) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== v4lconvert_enum_fmt @ 00012118 size=664 ===== */

undefined4 v4lconvert_enum_fmt(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint auStack_28 [4];
  int local_18;
  uint local_14;
  
  local_18 = 0;
  if ((param_2[1] == 1) &&
     ((iVar1 = v4lconvert_supported_dst_fmt_only(param_1), iVar1 != 0 ||
      ((uint)param_1[3] <= *param_2)))) {
    for (local_14 = 0; (int)local_14 < 4; local_14 = local_14 + 1) {
      iVar1 = v4lconvert_supported_dst_fmt_only(param_1);
      if (iVar1 == 0) {
        if ((((uint)param_1[4] >> (local_14 & 0xff) | param_1[5] << (0x20 - local_14 & 0xff) |
             (uint)param_1[5] >> (local_14 - 0x20 & 0xff)) & 1) == 0) goto LAB_00012210;
      }
      else {
LAB_00012210:
        auStack_28[local_18] = *(uint *)(DAT_000123b0 + 0x1221c + local_14 * 0x14);
        local_18 = local_18 + 1;
      }
    }
    iVar1 = v4lconvert_supported_dst_fmt_only(param_1);
    if (iVar1 == 0) {
      local_14 = *param_2 - param_1[3];
    }
    else {
      local_14 = *param_2;
    }
    if ((int)local_14 < local_18) {
      param_2[2] = 2;
      param_2[0xb] = auStack_28[local_14];
      *(char *)(param_2 + 3) = (char)auStack_28[local_14];
      *(char *)((int)param_2 + 0xd) = (char)(auStack_28[local_14] >> 8);
      *(char *)((int)param_2 + 0xe) = (char)(auStack_28[local_14] >> 0x10);
      *(char *)((int)param_2 + 0xf) = (char)(auStack_28[local_14] >> 0x18);
      *(undefined1 *)(param_2 + 4) = 0;
      memset(param_2 + 0xc,0,0x10);
      uVar2 = 0;
    }
    else {
      piVar3 = __errno_location();
      *piVar3 = 0x16;
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = (**(code **)(param_1[0xd58] + 8))(param_1[0xd57],*param_1,0xc0405602,param_2);
  }
  return uVar2;
}



/* ===== FUN_000123b4 @ 000123b4 size=436 ===== */

int FUN_000123b4(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  local_c = 0;
  if (param_5 != 0x32315659) {
    if (0x32315659 < param_5) {
      if ((param_5 == 0x33424752) || (param_5 == 0x33524742)) {
        local_c = *(int *)(DAT_00012568 + param_2 * 0x14 + 0x12454);
      }
      goto LAB_00012490;
    }
    if (param_5 != 0x32315559) goto LAB_00012490;
  }
  local_c = *(int *)(DAT_0001256c + param_2 * 0x14 + 0x12480);
LAB_00012490:
  if (param_5 == *(uint *)(DAT_00012570 + 0x1249c + param_2 * 0x14)) {
    local_c = local_c + -1;
  }
  iVar2 = *(int *)(DAT_00012574 + param_2 * 0x14 + 0x124f0) *
          *(int *)(param_1 + 0x3528) * param_4 * param_3;
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  if ((*(int *)(param_1 + 0x3524) != 0) && (*(int *)(param_1 + 0x3524) < iVar1 >> 3)) {
    local_c = local_c + 10;
  }
  return local_c;
}



/* ===== FUN_00012578 @ 00012578 size=820 ===== */

undefined4 FUN_00012578(int param_1,void *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_18 = 0xffffffff;
  local_1c = 0;
  local_20 = 0;
  local_24 = 100;
  for (local_14 = 0; local_14 < *(uint *)(param_1 + 0x3520); local_14 = local_14 + 1) {
    if ((*(uint *)(param_1 + local_14 * 0x2c + 0x128) <= *(uint *)((int)param_2 + 4)) &&
       (*(uint *)(param_1 + local_14 * 0x2c + 300) <= *(uint *)((int)param_2 + 8))) {
      iVar1 = *(int *)((int)param_2 + 4) - *(int *)(param_1 + local_14 * 0x2c + 0x128);
      iVar2 = *(int *)((int)param_2 + 8) - *(int *)(param_1 + local_14 * 0x2c + 300);
      uVar4 = iVar1 * iVar1 + iVar2 * iVar2;
      if (uVar4 < local_18) {
        local_1c = local_14;
        local_18 = uVar4;
      }
    }
  }
  for (local_14 = 0; (int)local_14 < 0x33; local_14 = local_14 + 1) {
    puVar3 = (uint *)(param_1 + (local_1c + 0x5a4) * 8);
    uVar4 = puVar3[1];
    if (((*puVar3 >> (local_14 & 0xff) | uVar4 << (0x20 - local_14 & 0xff) |
         uVar4 >> (local_14 - 0x20 & 0xff)) & 1) != 0) {
      iVar1 = FUN_000123b4(param_1,local_14,*(undefined4 *)(param_1 + local_1c * 0x2c + 0x128),
                           *(undefined4 *)(param_1 + local_1c * 0x2c + 300),
                           *(undefined4 *)((int)param_2 + 0xc));
      if (iVar1 < local_24) {
        local_20 = *(undefined4 *)(DAT_000128ac + 0x127bc + local_14 * 0x14);
        local_24 = iVar1;
      }
    }
  }
  *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(param_1 + local_1c * 0x2c + 0x128);
  *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)(param_1 + local_1c * 0x2c + 300);
  *(undefined4 *)((int)param_2 + 0x10) = 1;
  *(undefined4 *)((int)param_2 + 0x14) = 0;
  *(undefined4 *)((int)param_2 + 0x18) = 0;
  *(undefined4 *)((int)param_2 + 0x1c) = 0;
  *(undefined4 *)((int)param_2 + 0x20) = 0;
  memcpy(param_3,param_2,0xcc);
  *(undefined4 *)((int)param_3 + 0xc) = local_20;
  return 0;
}



/* ===== FUN_000128b0 @ 000128b0 size=724 ===== */

undefined4 FUN_000128b0(undefined4 *param_1,void *param_2,void *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_1c8 [3];
  int local_1bc;
  undefined1 auStack_fc [4];
  int local_f8;
  int local_f4;
  int local_f0;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_18 = 0;
  local_1c = 0xffffffff;
  local_20 = *(int *)((int)param_2 + 0xc);
  memset(local_1c8,0,0xcc);
  if ((param_1[1] & 1) == 0) {
    for (local_14 = 0; (int)local_14 < 0x33; local_14 = local_14 + 1) {
      if ((((uint)param_1[4] >> (local_14 & 0xff) | param_1[5] << (0x20 - local_14 & 0xff) |
           (uint)param_1[5] >> (local_14 - 0x20 & 0xff)) & 1) != 0) {
        memcpy(auStack_fc,param_2,0xcc);
        local_f0 = *(int *)(DAT_00012b84 + 0x12998 + local_14 * 0x14);
        iVar2 = (**(code **)(param_1[0xd58] + 8))(param_1[0xd57],*param_1,0xc0cc5640,auStack_fc);
        if ((iVar2 == 0) && (local_f0 == *(int *)(DAT_00012b88 + 0x129fc + local_14 * 0x14))) {
          local_24 = local_f8 - *(int *)((int)param_2 + 4);
          local_28 = local_f4 - *(int *)((int)param_2 + 8);
          local_2c = local_24 * local_24 + local_28 * local_28;
          local_30 = FUN_000123b4(param_1,local_14,local_f8,local_f4,local_20);
          if ((local_2c < local_1c) || ((local_2c == local_1c && (local_30 < local_18)))) {
            memcpy(local_1c8,auStack_fc,0xcc);
            local_1c = local_2c;
            local_18 = local_30;
          }
        }
      }
    }
    if (local_1c8[0] == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      memcpy(param_2,local_1c8,0xcc);
      if (local_20 != local_1bc) {
        *(int *)((int)param_2 + 0xc) = local_20;
      }
      memcpy(param_3,local_1c8,0xcc);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = FUN_00012578(param_1,param_2,param_3);
  }
  return uVar1;
}



/* ===== v4lconvert_fixup_fmt @ 00012b8c size=260 ===== */

void v4lconvert_fixup_fmt(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 != 0x32315659) {
    if (0x32315659 < uVar1) {
      if ((uVar1 != 0x33424752) && (uVar1 != 0x33524742)) {
        return;
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 4) * 3;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 8) * *(int *)(param_1 + 4) * 3;
      return;
    }
    if (uVar1 != 0x32315559) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
  *(uint *)(param_1 + 0x18) = (uint)(*(int *)(param_1 + 8) * *(int *)(param_1 + 4) * 3) >> 1;
  return;
}



/* ===== v4lconvert_try_format @ 00012c90 size=1340 ===== */

undefined4 v4lconvert_try_format(undefined4 *param_1,int *param_2,void *param_3)

{
  int iVar1;
  undefined1 auStack_350 [4];
  uint local_34c;
  uint local_348;
  undefined1 auStack_284 [204];
  undefined1 auStack_1b8 [4];
  uint local_1b4;
  uint local_1b0;
  int local_1ac;
  undefined1 auStack_ec [4];
  uint local_e8;
  uint local_e4;
  int local_e0;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  local_18 = param_2[1];
  local_1c = param_2[2];
  if (((*param_2 == 1) && (iVar1 = v4lconvert_supported_dst_fmt_only(param_1), iVar1 != 0)) &&
     (iVar1 = v4lconvert_supported_dst_format(param_2[3]), iVar1 == 0)) {
    param_2[3] = 0x33424752;
  }
  memcpy(auStack_1b8,param_2,0xcc);
  iVar1 = v4lconvert_supported_dst_format(param_2[3]);
  if (((iVar1 == 0) || (*param_2 != 1)) ||
     (iVar1 = FUN_000128b0(param_1,auStack_1b8,auStack_ec), iVar1 != 0)) {
    local_20 = (**(code **)(param_1[0xd58] + 8))(param_1[0xd57],*param_1,0xc0cc5640,param_2);
    if (param_3 != (void *)0x0) {
      memcpy(param_3,param_2,0xcc);
    }
  }
  else {
    if ((local_18 != local_1b4) || (local_1c != local_1b0)) {
      memcpy(auStack_350,param_2,0xcc);
      local_34c = local_18 + 7;
      local_348 = local_1c + 1;
      local_20 = FUN_000128b0(param_1,auStack_350,auStack_284);
      if (((local_20 == 0) &&
          (((local_18 <= local_34c && (local_34c <= local_18 + 7)) && (local_1c <= local_348)))) &&
         (local_348 <= local_1c + 1)) {
        local_34c = local_18;
        local_348 = local_1c;
        memcpy(auStack_1b8,auStack_350,0xcc);
        memcpy(auStack_ec,auStack_284,0xcc);
      }
    }
    if ((local_18 != local_1b4) || (local_1c != local_1b0)) {
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        if ((local_18 == *(uint *)(DAT_000131cc + 0x12f08 + local_14 * 8)) &&
           (local_1c == *(uint *)(DAT_000131d0 + local_14 * 8 + 0x12f2c))) {
          memcpy(auStack_350,param_2,0xcc);
          local_34c = (local_18 * 0x71) / 100;
          local_348 = (local_1c * 0x7c) / 100;
          local_20 = FUN_000128b0(param_1,auStack_350,auStack_284);
          if ((local_20 == 0) &&
             ((((((local_18 - 0x10 <= local_34c && (local_34c <= local_18)) &&
                 (local_1c - 0x10 <= local_348)) && (local_348 <= local_1c)) ||
               (((local_18 <= local_34c && (local_34c <= local_18 * 5 >> 2)) &&
                ((local_1c <= local_348 && (local_348 <= local_1c * 5 >> 2)))))) ||
              (((local_18 << 1 <= local_34c && (local_34c <= local_18 * 5 >> 1)) &&
               ((local_1c << 1 <= local_348 && (local_348 <= local_1c * 5 >> 1)))))))) {
            local_34c = local_18;
            local_348 = local_1c;
            memcpy(auStack_1b8,auStack_350,0xcc);
            memcpy(auStack_ec,auStack_284,0xcc);
          }
          break;
        }
      }
    }
    local_1b4 = local_1b4 & 0xfffffff8;
    local_1b0 = local_1b0 & 0xfffffffe;
    if (((local_e8 != local_1b4) || (local_e4 != local_1b0)) || (local_e0 != local_1ac)) {
      v4lconvert_fixup_fmt(auStack_1b8);
    }
    memcpy(param_2,auStack_1b8,0xcc);
    if (param_3 != (void *)0x0) {
      memcpy(param_3,auStack_ec,0xcc);
    }
    local_20 = 0;
  }
  return local_20;
}



/* ===== v4lconvert_needs_conversion @ 000131d4 size=180 ===== */

undefined4 v4lconvert_needs_conversion(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*(int *)(param_2 + 4) == *(int *)(param_3 + 4)) &&
       (*(int *)(param_2 + 8) == *(int *)(param_3 + 8))) &&
      (*(int *)(param_2 + 0xc) == *(int *)(param_3 + 0xc))) &&
     ((iVar1 = FUN_00033c70(*(undefined4 *)(param_1 + 0x3554)), iVar1 == 0 ||
      (iVar1 = v4lconvert_supported_dst_format(*(undefined4 *)(param_3 + 0xc)), iVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00013288 @ 00013288 size=428 ===== */

undefined4 FUN_00013288(uint param_1,int param_2)

{
  if (param_1 != 0x33524742) {
    if (param_1 < 0x33524743) {
      if (param_1 != 0x30383653) {
        if (param_1 < 0x30383654) {
          if ((param_1 != 0x3031334d) && (param_1 != 0x30313953)) {
LAB_000133f0:
            if ((param_2 != 0x33424752) && (param_2 != 0x33524742)) {
              return 1;
            }
            return 0;
          }
        }
        else if (((param_1 != 0x31384142) && (param_1 != 0x33424752)) && (param_1 != 0x31363553))
        goto LAB_000133f0;
      }
    }
    else if (param_1 != 0x43353039) {
      if (param_1 < 0x4335303a) {
        if ((param_1 != 0x37303250) && (param_1 != 0x42474752)) goto LAB_000133f0;
      }
      else if (((param_1 != 0x47524247) && (param_1 != 0x584e4f53)) && (param_1 != 0x47425247))
      goto LAB_000133f0;
    }
  }
  return 0;
}



/* ===== FUN_00013434 @ 00013434 size=156 ===== */

int FUN_00013434(size_t param_1,int *param_2,size_t *param_3)

{
  void *pvVar1;
  
  if ((int)*param_3 < (int)param_1) {
    free((void *)*param_2);
    pvVar1 = malloc(param_1);
    *param_2 = (int)pvVar1;
    if (*param_2 == 0) {
      *param_3 = 0;
      return 0;
    }
    *param_3 = param_1;
  }
  return *param_2;
}



/* ===== FUN_000134d0 @ 000134d0 size=76 ===== */

undefined4 FUN_000134d0(int param_1)

{
  int *piVar1;
  
  snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_0001351c + 0x134f4));
  piVar1 = __errno_location();
  *piVar1 = 0xc;
  return 0xffffffff;
}



/* ===== FUN_00013520 @ 00013520 size=10292 ===== */

undefined4
FUN_00013520(int param_1,void *param_2,uint param_3,void *param_4,uint param_5,void *param_6,
            uint param_7)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint local_114;
  void *local_110;
  undefined1 auStack_104 [12];
  uint local_f8;
  int local_f0;
  int local_ec;
  void *local_38;
  void *local_34;
  void *local_30;
  int local_2c;
  int local_28;
  void *local_24;
  undefined4 local_20;
  uint local_1c;
  void *local_18;
  int local_14;
  uint local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_10 = *(uint *)((int)param_6 + 0xc);
  local_28 = *(int *)((int)param_6 + 4);
  local_2c = *(int *)((int)param_6 + 8);
  local_14 = *(int *)((int)param_6 + 0x14);
  if (local_10 == 0x34524742) goto LAB_00014ff0;
  local_114 = param_3;
  local_110 = param_2;
  if (0x34524742 < local_10) {
    if (local_10 == 0x47504a4d) {
LAB_00013adc:
      local_c = FUN_00030ef8(param_1,param_2,param_3,param_4,param_6,param_7,0);
      goto LAB_00015d80;
    }
    if (local_10 < 0x47504a4e) {
      if (local_10 != 0x3831354f) {
        if (0x3831354f < local_10) {
          if (local_10 != 0x42474752) {
            if (local_10 < 0x42474753) {
              if (local_10 != 0x41495043) {
                if (local_10 != 0x42303159) goto LAB_00015d38;
                if (param_3 < (uint)(local_2c * local_28 * 10) >> 3) {
                  snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014ef0 + 0x14988));
                  piVar5 = __errno_location();
                  *piVar5 = 0x20;
                  local_c = 0xffffffff;
                }
                if (param_7 != 0x32315659) {
                  if (0x32315659 < param_7) {
                    if ((param_7 == 0x33424752) || (param_7 == 0x33524742)) {
                      local_c = FUN_000270e4(param_1,param_2,param_4,local_28,local_2c);
                    }
                    goto LAB_00015d80;
                  }
                  if (param_7 != 0x32315559) goto LAB_00015d80;
                }
                local_c = FUN_00027234(param_1,param_2,param_4,local_28,local_2c);
                goto LAB_00015d80;
              }
              goto LAB_00013b70;
            }
            if (local_10 != 0x47425247) {
              if (local_10 == 0x4745504a) goto LAB_00013adc;
              if (local_10 != 0x43353039) goto LAB_00015d38;
              goto LAB_000140fc;
            }
          }
LAB_000143c4:
          if (local_114 <= (uint)(local_2c * local_28) && local_2c * local_28 - local_114 != 0) {
            snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014ee0 + 0x143f0));
            piVar5 = __errno_location();
            *piVar5 = 0x20;
            local_c = 0xffffffff;
          }
          if (param_7 == 0x32315659) {
            FUN_0002ba18(local_110,param_4,local_28,local_2c,local_14,local_10,1);
          }
          else if (param_7 < 0x3231565a) {
            if (param_7 == 0x32315559) {
              FUN_0002ba18(local_110,param_4,local_28,local_2c,local_14,local_10,0);
            }
          }
          else if (param_7 == 0x33424752) {
            FUN_0002afac(local_110,param_4,local_28,local_2c,local_14,local_10);
          }
          else if (param_7 == 0x33524742) {
            FUN_0002b068(local_110,param_4,local_28,local_2c,local_14,local_10);
          }
          goto LAB_00015d80;
        }
        if (local_10 == 0x3631564e) {
          local_34 = (void *)FUN_00013434(local_2c * local_28 * 2,param_1 + 0x3550,param_1 + 0x353c)
          ;
          if (local_34 == (void *)0x0) {
            uVar3 = FUN_000134d0(param_1);
            return uVar3;
          }
          FUN_00024fe8(param_2,local_34,local_28,local_2c);
          local_10 = 0x56595559;
          local_110 = local_34;
          local_14 = local_14 << 1;
LAB_00015480:
          uVar1 = local_2c * local_28 * 2;
          if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
            snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014f10 + 0x154b0));
            piVar5 = __errno_location();
            *piVar5 = 0x20;
            local_c = 0xffffffff;
          }
          if (param_7 == 0x32315659) {
            FUN_00024d44(local_110,param_4,local_28,local_2c,local_14,1);
          }
          else if (param_7 < 0x3231565a) {
            if (param_7 == 0x32315559) {
              FUN_00024d44(local_110,param_4,local_28,local_2c,local_14,0);
            }
          }
          else if (param_7 == 0x33424752) {
            FUN_00024940(local_110,param_4,local_28,local_2c,local_14);
          }
          else if (param_7 == 0x33524742) {
            FUN_0002453c(local_110,param_4,local_28,local_2c,local_14);
          }
          goto LAB_00015d80;
        }
        if (local_10 < 0x3631564f) {
          if (local_10 == 0x34565348) {
            uVar1 = local_2c * local_28 * 4;
            if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
              snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014f20 + 0x15b70));
              piVar5 = __errno_location();
              *piVar5 = 0x20;
              local_c = 0xffffffff;
            }
            if (param_7 == 0x32315659) {
              FUN_0002780c(param_2,param_4,local_28,local_2c,0,0x20,
                           *(uint *)((int)param_6 + 0x28) & 0xff);
              FUN_000235c8(param_2,param_4,param_6,0,1,3);
            }
            else if (param_7 < 0x3231565a) {
              if (param_7 == 0x32315559) {
                FUN_0002780c(param_2,param_4,local_28,local_2c,0,0x20,
                             *(uint *)((int)param_6 + 0x28) & 0xff);
                FUN_000235c8(param_2,param_4,param_6,0,0,3);
              }
            }
            else if (param_7 == 0x33424752) {
              FUN_0002780c(param_2,param_4,local_28,local_2c,0,0x20,
                           *(uint *)((int)param_6 + 0x28) & 0xff);
            }
            else if (param_7 == 0x33524742) {
              FUN_0002780c(param_2,param_4,local_28,local_2c,1,0x20,
                           *(uint *)((int)param_6 + 0x28) & 0xff);
            }
            goto LAB_00015d80;
          }
          if (local_10 != 0x35303553) goto LAB_00015d38;
        }
        else {
          if (local_10 == 0x37303250) goto LAB_000140fc;
          if (local_10 != 0x38303553) goto LAB_00015d38;
        }
      }
    }
    else {
      if (local_10 == 0x55595659) goto LAB_00015670;
      if (local_10 < 0x5559565a) {
        if (local_10 != 0x494e4f4b) {
          if (0x494e4f4b < local_10) {
            if (local_10 == 0x4c47504a) {
              local_c = FUN_0002fd98(param_2,param_3,param_7,param_4,local_28,local_2c);
            }
            else {
              if (local_10 != 0x50424752) goto LAB_00015d38;
              uVar1 = local_2c * local_28 * 2;
              if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
                snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014ef4 + 0x14a94));
                piVar5 = __errno_location();
                *piVar5 = 0x20;
                local_c = 0xffffffff;
              }
              if (param_7 == 0x32315659) {
                FUN_00026814(param_2,param_4,param_6,1);
              }
              else if (param_7 < 0x3231565a) {
                if (param_7 == 0x32315559) {
                  FUN_00026814(param_2,param_4,param_6,0);
                }
              }
              else if (param_7 == 0x33424752) {
                FUN_0002662c(param_2,param_4,local_28,local_2c);
              }
              else if (param_7 == 0x33524742) {
                FUN_00026720(param_2,param_4,local_28,local_2c);
              }
            }
            goto LAB_00015d80;
          }
          if (local_10 == 0x47504a50) {
            local_c = FUN_00030ef8(param_1,param_2,param_3,param_4,param_6,param_7,4);
            goto LAB_00015d80;
          }
          if (local_10 != 0x47524247) goto LAB_00015d38;
          goto LAB_000143c4;
        }
      }
      else {
        if (local_10 == 0x584e4f53) goto LAB_000140fc;
        if (0x584e4f53 < local_10) {
          if (local_10 == 0x59565955) {
            uVar1 = local_2c * local_28 * 2;
            if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
              snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014f18 + 0x15808));
              piVar5 = __errno_location();
              *piVar5 = 0x20;
              local_c = 0xffffffff;
            }
            if (param_7 == 0x32315659) {
              FUN_000260f4(param_2,param_4,local_28,local_2c,local_14,1);
            }
            else if (param_7 < 0x3231565a) {
              if (param_7 == 0x32315559) {
                FUN_000260f4(param_2,param_4,local_28,local_2c,local_14,0);
              }
            }
            else if (param_7 == 0x33424752) {
              FUN_00025cd0(param_2,param_4,local_28,local_2c,local_14);
            }
            else if (param_7 == 0x33524742) {
              FUN_000258ac(param_2,param_4,local_28,local_2c,local_14);
            }
            goto LAB_00015d80;
          }
          if (local_10 != 0xa0363159) {
            if (local_10 != 0x59455247) goto LAB_00015d38;
            goto LAB_0001486c;
          }
          goto LAB_00014740;
        }
        if (local_10 != 0x56544943) {
          if (local_10 != 0x56595559) goto LAB_00015d38;
          goto LAB_00015480;
        }
      }
    }
LAB_00013b70:
    local_20 = 0;
    if ((param_7 == 0x32315559) || (param_7 == 0x32315659)) {
      local_1c = param_5;
      local_18 = param_4;
    }
    else {
      local_18 = (void *)FUN_00013434((uint)(local_2c * local_28 * 3) >> 1,param_1 + 0x3550,
                                      param_1 + 0x353c);
      if (local_18 == (void *)0x0) {
        uVar3 = FUN_000134d0(param_1);
        return uVar3;
      }
      local_1c = (uint)(local_2c * local_28 * 3) >> 1;
    }
    if (param_7 == 0x32315659) {
      local_20 = 1;
    }
    if (local_10 == 0x35303553) {
      FUN_0002842c(param_2,local_18,local_28,local_2c,local_20);
    }
    else if (local_10 < 0x35303554) {
      if (local_10 == 0x30323953) {
        FUN_0001e348(param_2,local_18,local_28,local_2c,local_20);
      }
      else if (local_10 < 0x30323954) {
        if (local_10 == 0x3032344d) {
          FUN_00028e4c(param_2,local_18,local_28,local_2c,local_20);
        }
      }
      else if (local_10 == 0x31303553) {
        FUN_00028090(param_2,local_18,local_28,local_2c,local_20);
      }
      else if ((local_10 == 0x3131354f) &&
              (iVar4 = FUN_000361b0(param_1,DAT_00014ed8 + 0x13eec,param_2,param_3,local_18,local_1c
                                    ,local_28,local_2c,local_20), iVar4 != 0)) {
        piVar5 = __errno_location();
        *piVar5 = 0xb;
        return 0xffffffff;
      }
    }
    else if (local_10 == 0x41495043) {
      iVar4 = FUN_0002d87c(param_1,param_2,param_3,local_18,local_28,local_2c,local_20);
      if (iVar4 != 0) {
        piVar5 = __errno_location();
        *piVar5 = 0xb;
        return 0xffffffff;
      }
    }
    else if (local_10 < 0x41495044) {
      if (local_10 == 0x38303553) {
        FUN_00028748(param_2,local_18,local_28,local_2c,local_20);
      }
      else if ((local_10 == 0x3831354f) &&
              (iVar4 = FUN_000361b0(param_1,DAT_00014edc + 0x13f50,param_2,param_3,local_18,local_1c
                                    ,local_28,local_2c,local_20), iVar4 != 0)) {
        piVar5 = __errno_location();
        *piVar5 = 0xb;
        return 0xffffffff;
      }
    }
    else if (local_10 == 0x494e4f4b) {
      FUN_00028cb8(param_2,local_18,local_28,local_2c,local_20);
    }
    else if (local_10 == 0x56544943) {
      FUN_00028ae4(param_2,local_18,local_28,local_2c,local_20);
    }
    if (param_7 == 0x33424752) {
      FUN_00024050(*(undefined4 *)(param_1 + 0x3550),param_4,local_28,local_2c,local_20);
    }
    else if (param_7 == 0x33524742) {
      FUN_00023b64(*(undefined4 *)(param_1 + 0x3550),param_4,local_28,local_2c,local_20);
    }
    goto LAB_00015d80;
  }
  if (local_10 == 0x3136564e) {
    local_38 = (void *)FUN_00013434(local_2c * local_28 * 2,param_1 + 0x3550,param_1 + 0x353c);
    if (local_38 == (void *)0x0) {
      uVar3 = FUN_000134d0(param_1);
      return uVar3;
    }
    FUN_00024fe8(param_2,local_38,local_28,local_2c);
    local_10 = 0x55595659;
    local_110 = local_38;
    local_14 = local_14 << 1;
LAB_00015670:
    uVar1 = local_2c * local_28 * 2;
    if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
      snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014f14 + 0x156a0));
      piVar5 = __errno_location();
      *piVar5 = 0x20;
      local_c = 0xffffffff;
    }
    if (param_7 == 0x32315659) {
      FUN_00024d44(local_110,param_4,local_28,local_2c,local_14,0);
    }
    else if (param_7 < 0x3231565a) {
      if (param_7 == 0x32315559) {
        FUN_00024d44(local_110,param_4,local_28,local_2c,local_14,1);
      }
    }
    else if (param_7 == 0x33424752) {
      FUN_000254a8(local_110,param_4,local_28,local_2c,local_14);
    }
    else if (param_7 == 0x33524742) {
      FUN_000250a4(local_110,param_4,local_28,local_2c,local_14);
    }
    goto LAB_00015d80;
  }
  if (0x3136564e < local_10) {
    if (local_10 == 0x33524742) {
      if (param_3 < (uint)(local_2c * local_28 * 3)) {
        snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014efc + 0x14d18));
        piVar5 = __errno_location();
        *piVar5 = 0x20;
        local_c = 0xffffffff;
      }
      if (param_7 == 0x32315659) {
        FUN_000235c8(param_2,param_4,param_6,1,1,3);
      }
      else if (param_7 < 0x3231565a) {
        if (param_7 == 0x32315559) {
          FUN_000235c8(param_2,param_4,param_6,1,0,3);
        }
      }
      else if (param_7 == 0x33424752) {
        FUN_0002638c(param_2,param_4,local_28,local_2c);
      }
      else if (param_7 == 0x33524742) {
        memcpy(param_4,param_2,local_2c * local_28 * 3);
      }
      goto LAB_00015d80;
    }
    if (local_10 < 0x33524743) {
      if (local_10 == 0x32315559) {
        if (param_3 < (uint)(local_2c * local_28 * 3) >> 1) {
          snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014f08 + 0x15184));
          piVar5 = __errno_location();
          *piVar5 = 0x20;
          local_c = 0xffffffff;
        }
        if (param_7 == 0x32315659) {
          FUN_00026458(param_2,param_4,param_6);
        }
        else if (param_7 < 0x3231565a) {
          if (param_7 == 0x32315559) {
            memcpy(param_4,param_2,(uint)(local_2c * local_28 * 3) >> 1);
          }
        }
        else if (param_7 == 0x33424752) {
          FUN_00024050(param_2,param_4,local_28,local_2c,0);
        }
        else if (param_7 == 0x33524742) {
          FUN_00023b64(param_2,param_4,local_28,local_2c,0);
        }
        goto LAB_00015d80;
      }
      if (0x32315559 < local_10) {
        if (local_10 == 0x32315659) {
          if (param_3 < (uint)(local_2c * local_28 * 3) >> 1) {
            snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014f0c + 0x152dc));
            piVar5 = __errno_location();
            *piVar5 = 0x20;
            local_c = 0xffffffff;
          }
          if (param_7 == 0x32315659) {
            memcpy(param_4,param_2,(uint)(local_2c * local_28 * 3) >> 1);
          }
          else if (param_7 < 0x3231565a) {
            if (param_7 == 0x32315559) {
              FUN_00026458(param_2,param_4,param_6);
            }
          }
          else if (param_7 == 0x33424752) {
            FUN_00024050(param_2,param_4,local_28,local_2c,1);
          }
          else if (param_7 == 0x33524742) {
            FUN_00023b64(param_2,param_4,local_28,local_2c,1);
          }
        }
        else {
          if (local_10 != 0x33424752) goto LAB_00015d38;
          if (param_3 < (uint)(local_2c * local_28 * 3)) {
            snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014ef8 + 0x14bbc));
            piVar5 = __errno_location();
            *piVar5 = 0x20;
            local_c = 0xffffffff;
          }
          if (param_7 == 0x32315659) {
            FUN_000235c8(param_2,param_4,param_6,0,1,3);
          }
          else if (param_7 < 0x3231565a) {
            if (param_7 == 0x32315559) {
              FUN_000235c8(param_2,param_4,param_6,0,0,3);
            }
          }
          else if (param_7 == 0x33424752) {
            memcpy(param_4,param_2,local_2c * local_28 * 3);
          }
          else if (param_7 == 0x33524742) {
            FUN_0002638c(param_2,param_4,local_28,local_2c);
          }
        }
        goto LAB_00015d80;
      }
      if (local_10 != 0x31384142) {
        if (local_10 != 0x32314d48) goto LAB_00015d38;
        if (param_7 == 0x32315659) {
          FUN_0002d5fc(param_2,param_4,local_28,local_2c,1);
        }
        else if (param_7 < 0x3231565a) {
          if (param_7 == 0x32315559) {
            FUN_0002d5fc(param_2,param_4,local_28,local_2c,0);
          }
        }
        else if (param_7 == 0x33424752) {
          FUN_0002d280(param_2,param_4,local_28,local_2c);
        }
        else if (param_7 == 0x33524742) {
          FUN_0002d2c4(param_2,param_4,local_28,local_2c);
        }
        goto LAB_00015d80;
      }
      goto LAB_000143c4;
    }
    if (local_10 == 0x34325241) {
LAB_00014ff0:
      uVar1 = local_2c * local_28 * 4;
      if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
        snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014f04 + 0x15020));
        piVar5 = __errno_location();
        *piVar5 = 0x20;
        local_c = 0xffffffff;
      }
      if (param_7 == 0x32315659) {
        FUN_000235c8(param_2,param_4,param_6,1,1,4);
      }
      else if (param_7 < 0x3231565a) {
        if (param_7 == 0x32315559) {
          FUN_000235c8(param_2,param_4,param_6,1,0,4);
        }
      }
      else if (param_7 == 0x33424752) {
        FUN_00027378(param_2,param_4,local_28,local_2c,1);
      }
      else if (param_7 == 0x33524742) {
        FUN_00027378(param_2,param_4,local_28,local_2c,0);
      }
    }
    else {
      if (local_10 < 0x34325242) {
        if (local_10 == 0x33565348) {
          if (param_3 < (uint)(local_2c * local_28 * 3)) {
            snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014f1c + 0x15978));
            piVar5 = __errno_location();
            *piVar5 = 0x20;
            local_c = 0xffffffff;
          }
          if (param_7 == 0x32315659) {
            FUN_0002780c(param_2,param_4,local_28,local_2c,0,0x18,
                         *(uint *)((int)param_6 + 0x28) & 0xff);
            FUN_000235c8(param_2,param_4,param_6,0,1,3);
          }
          else if (param_7 < 0x3231565a) {
            if (param_7 == 0x32315559) {
              FUN_0002780c(param_2,param_4,local_28,local_2c,0,0x18,
                           *(uint *)((int)param_6 + 0x28) & 0xff);
              FUN_000235c8(param_2,param_4,param_6,0,0,3);
            }
          }
          else if (param_7 == 0x33424752) {
            FUN_0002780c(param_2,param_4,local_28,local_2c,0,0x18,
                         *(uint *)((int)param_6 + 0x28) & 0xff);
          }
          else if (param_7 == 0x33524742) {
            FUN_0002780c(param_2,param_4,local_28,local_2c,1,0x18,
                         *(uint *)((int)param_6 + 0x28) & 0xff);
          }
          goto LAB_00015d80;
        }
        if (local_10 != 0x34324142) goto LAB_00015d38;
      }
      else if ((local_10 != 0x34325842) && (local_10 != 0x34424752)) {
        if (local_10 != 0x34325258) goto LAB_00015d38;
        goto LAB_00014ff0;
      }
      uVar1 = local_2c * local_28 * 4;
      if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
        snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014f00 + 0x14e6c));
        piVar5 = __errno_location();
        *piVar5 = 0x20;
        local_c = 0xffffffff;
      }
      iVar4 = (int)param_2 + 1;
      if (param_7 == 0x32315659) {
        FUN_000235c8(iVar4,param_4,param_6,0,1,4);
      }
      else if (param_7 < 0x3231565a) {
        if (param_7 == 0x32315559) {
          FUN_000235c8(iVar4,param_4,param_6,0,0,4);
        }
      }
      else if (param_7 == 0x33424752) {
        FUN_00027378(iVar4,param_4,local_28,local_2c,0);
      }
      else if (param_7 == 0x33524742) {
        FUN_00027378(iVar4,param_4,local_28,local_2c,1);
      }
    }
    goto LAB_00015d80;
  }
  if (local_10 == 0x3032344d) goto LAB_00013b70;
  if (local_10 < 0x3032344e) {
    if (local_10 == 0x20363159) {
LAB_00014740:
      uVar1 = local_2c * local_28 * 2;
      if (param_3 <= uVar1 && uVar1 - param_3 != 0) {
        snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014ee8 + 0x14770));
        piVar5 = __errno_location();
        *piVar5 = 0x20;
        local_c = 0xffffffff;
      }
      if (param_7 != 0x32315659) {
        if (0x32315659 < param_7) {
          if ((param_7 == 0x33424752) || (param_7 == 0x33524742)) {
            FUN_00026cb8(param_2,param_4,local_28,local_2c,local_10 == 0x20363159);
          }
          goto LAB_00015d80;
        }
        if (param_7 != 0x32315559) goto LAB_00015d80;
      }
      FUN_00026d94(param_2,param_4,param_6,local_10 == 0x20363159);
      goto LAB_00015d80;
    }
    if (local_10 < 0x2036315a) {
      if ((local_10 != 0x20343059) && (local_10 != 0x20363059)) {
LAB_00015d38:
        snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014f24 + 0x15d4c));
        piVar5 = __errno_location();
        *piVar5 = 0x16;
        return 0xffffffff;
      }
LAB_0001486c:
      if (param_3 <= (uint)(local_2c * local_28) && local_2c * local_28 - param_3 != 0) {
        snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014eec + 0x14898));
        piVar5 = __errno_location();
        *piVar5 = 0x20;
        local_c = 0xffffffff;
      }
      if (param_7 != 0x32315659) {
        if (0x32315659 < param_7) {
          if ((param_7 == 0x33424752) || (param_7 == 0x33524742)) {
            FUN_00026e78(param_2,param_4,local_28,local_2c);
          }
          goto LAB_00015d80;
        }
        if (param_7 != 0x32315559) goto LAB_00015d80;
      }
      FUN_00026f3c(param_2,param_4,param_6);
      goto LAB_00015d80;
    }
    if ((local_10 != 0x3031334d) && (local_10 != 0x30313953)) goto LAB_00015d38;
LAB_000140fc:
    memcpy(auStack_104,param_6,0xcc);
    local_30 = (void *)FUN_00013434(local_2c * local_28,param_1 + 0x3550,param_1 + 0x353c);
    if (local_30 == (void *)0x0) {
      uVar3 = FUN_000134d0(param_1);
      return uVar3;
    }
    if (local_10 == 0x31363553) {
      FUN_00023500(param_2,local_30,local_28,local_2c);
      local_f8 = 0x47524247;
    }
    else if (local_10 < 0x31363554) {
      if (local_10 == 0x30313953) {
        FUN_0001df04(param_2,local_30,local_28,local_2c);
        local_f8 = 0x31384142;
      }
      else if (local_10 == 0x30383653) {
        FUN_0002d748(param_2,local_30,local_28,local_2c);
        local_f8 = 0x42474752;
      }
      else if (local_10 == 0x3031334d) {
        iVar4 = FUN_0001f058(param_1,param_2,param_3,local_30,local_28,local_2c);
        if (iVar4 != 0) {
          piVar5 = __errno_location();
          *piVar5 = 0xb;
          return 0xffffffff;
        }
        local_f8 = 0x31384142;
      }
    }
    else if (local_10 == 0x43353039) {
      FUN_00029a68(param_2,local_30,local_28,local_2c);
      local_f8 = 0x42474752;
    }
    else if (local_10 == 0x584e4f53) {
      FUN_00027950(param_2,local_30,local_28,local_2c);
      local_f8 = 0x31384142;
    }
    else if (local_10 == 0x37303250) {
      iVar4 = FUN_0001eb70(param_1,param_2,param_3,local_30,local_28,local_2c);
      if (iVar4 != 0) {
        piVar5 = __errno_location();
        *piVar5 = 0xb;
        return 0xffffffff;
      }
      local_f8 = 0x31384142;
    }
    local_f0 = local_28;
    local_ec = local_2c * local_28;
    FUN_0003442c(*(undefined4 *)(param_1 + 0x3558),local_30,auStack_104);
    local_10 = local_f8;
    local_110 = local_30;
    local_114 = local_2c * local_28;
    goto LAB_000143c4;
  }
  if (local_10 != 0x31303453) {
    if (local_10 < 0x31303454) {
      if (local_10 != 0x30323953) {
        if (local_10 != 0x30383653) goto LAB_00015d38;
        goto LAB_000140fc;
      }
    }
    else if (local_10 != 0x3131354f) {
      if (local_10 == 0x31363553) goto LAB_000140fc;
      if (local_10 != 0x31303553) goto LAB_00015d38;
    }
    goto LAB_00013b70;
  }
  local_24 = (void *)0x0;
  if (param_7 == 0x32315659) {
LAB_000145c0:
    local_24 = (void *)FUN_00013434(local_2c * local_28 * 3,param_1 + 0x3550,param_1 + 0x353c);
    if (local_24 == (void *)0x0) {
      uVar3 = FUN_000134d0(param_1);
      return uVar3;
    }
    *(undefined4 *)((int)param_6 + 0xc) = 0x33424752;
    v4lconvert_fixup_fmt(param_6);
    pvVar2 = local_24;
  }
  else {
    if (param_7 < 0x3231565a) {
      if (param_7 != 0x32315559) {
LAB_00014638:
        snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00014ee4 + 0x1464c));
        piVar5 = __errno_location();
        *piVar5 = 0x16;
        return 0xffffffff;
      }
      goto LAB_000145c0;
    }
    pvVar2 = param_4;
    if (param_7 != 0x33424752) {
      if (param_7 != 0x33524742) goto LAB_00014638;
      goto LAB_000145c0;
    }
  }
  local_24 = pvVar2;
  local_c = FUN_0002e68c(param_1,param_2,param_3,local_24,local_28,local_2c);
  if (param_7 == 0x32315659) {
    FUN_000235c8(local_24,param_4,param_6,0,1,3);
  }
  else if (param_7 == 0x33524742) {
    FUN_0002638c(local_24,param_4,local_28,local_2c);
  }
  else if (param_7 == 0x32315559) {
    FUN_000235c8(local_24,param_4,param_6,0,0,3);
  }
LAB_00015d80:
  *(uint *)((int)param_6 + 0xc) = param_7;
  v4lconvert_fixup_fmt(param_6);
  return local_c;
}



/* ===== v4lconvert_convert @ 00015da4 size=1876 ===== */

uint v4lconvert_convert(int param_1,void *param_2,void *param_3,void *param_4,size_t param_5,
                       void *param_6,uint param_7)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined1 auStack_1f0 [4];
  int local_1ec;
  int local_1e8;
  uint local_1e4;
  undefined1 auStack_124 [4];
  int local_120;
  int local_11c;
  uint local_118;
  size_t local_10c;
  size_t local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c;
  uint local_28;
  void *local_24;
  void *local_20;
  uint local_1c;
  void *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  local_18 = param_6;
  local_1c = param_7;
  local_24 = param_6;
  local_28 = param_7;
  local_30 = param_6;
  local_38 = param_6;
  local_3c = param_4;
  local_34 = param_4;
  local_2c = param_4;
  local_20 = param_4;
  memcpy(auStack_124,param_2,0xcc);
  memcpy(auStack_1f0,param_3,0xcc);
  local_40 = FUN_00033d78(*(undefined4 *)(param_1 + 0x3558));
  local_44 = *(uint *)(param_1 + 8) & 4;
  local_48 = FUN_00033b30(*(undefined4 *)(param_1 + 0x3554),1);
  local_4c = FUN_00033b30(*(undefined4 *)(param_1 + 0x3554),2);
  if ((local_1ec == local_120) && (local_1e8 == local_11c)) {
    local_50 = 0;
  }
  else {
    local_50 = 1;
  }
  if (((((*(int *)((int)param_2 + 0xc) == *(int *)((int)param_3 + 0xc)) && (local_40 == 0)) &&
       (local_44 == 0)) && (((local_48 == 0 && (local_4c == 0)) && (local_50 == 0)))) ||
     (iVar3 = v4lconvert_supported_dst_format(*(undefined4 *)((int)param_3 + 0xc)), iVar3 == 0)) {
    local_58 = param_5;
    if ((int)param_7 <= (int)param_5) {
      local_58 = param_7;
    }
    memcpy(param_6,param_4,local_58);
    return local_58;
  }
  if (local_1e4 == 0x32315659) {
LAB_00016010:
    local_c = (uint)(local_1e8 * local_1ec * 3) >> 1;
    local_10 = (uint)(local_11c * local_120 * 3) >> 1;
LAB_00016088:
    if ((int)param_7 < (int)local_c) {
      snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_000164fc + 0x160b8),param_7,local_c);
      piVar4 = __errno_location();
      *piVar4 = 0xe;
      local_c = 0xffffffff;
    }
    else {
      if ((local_40 == 0) || (iVar3 = FUN_00013288(local_118,local_1e4), iVar3 == 0)) {
        if ((local_1e4 != local_118) ||
           ((((local_44 == 0 && (local_48 == 0)) && (local_4c == 0)) && (local_50 == 0)))) {
          local_14 = 1;
        }
      }
      else {
        local_14 = 2;
      }
      if (local_14 == 2) {
        local_18 = (void *)FUN_00013434(local_11c * local_120 * 3,param_1 + 0x3540,param_1 + 0x352c)
        ;
        if (local_18 == (void *)0x0) {
          uVar5 = FUN_000134d0(param_1);
          return uVar5;
        }
        local_1c = local_11c * local_120 * 3;
        local_20 = local_18;
      }
      if ((local_14 != 0) &&
         (((local_44 != 0 || (local_48 != 0)) || ((local_4c != 0 || (local_50 != 0)))))) {
        local_24 = (void *)FUN_00013434(local_10,param_1 + 0x3544,param_1 + 0x3530);
        if (local_24 == (void *)0x0) {
          uVar5 = FUN_000134d0(param_1);
          return uVar5;
        }
        local_28 = local_10;
        local_3c = local_24;
        local_34 = local_24;
        local_2c = local_24;
      }
      pvVar1 = local_3c;
      pvVar2 = local_34;
      if ((local_44 == 0) ||
         ((((local_48 == 0 && (local_4c == 0)) && (local_50 == 0)) ||
          (local_30 = (void *)FUN_00013434(local_10,param_1 + 0x3548,param_1 + 0x3534),
          pvVar1 = local_30, pvVar2 = local_30, local_30 != (void *)0x0)))) {
        local_34 = pvVar2;
        local_3c = pvVar1;
        pvVar1 = local_3c;
        if ((((local_4c == 0) && (local_48 == 0)) || (local_50 == 0)) ||
           (local_38 = (void *)FUN_00013434(local_10,param_1 + 0x354c,param_1 + 0x3538),
           pvVar1 = local_38, local_38 != (void *)0x0)) {
          local_3c = pvVar1;
          if (local_14 == 2) {
            uVar5 = FUN_00013520(param_1,param_4,param_5,local_18,local_1c,auStack_124,0x33424752);
            if (uVar5 != 0) {
              return uVar5;
            }
            param_5 = local_10c;
            local_54 = 0;
          }
          if (local_40 != 0) {
            FUN_0003442c(*(undefined4 *)(param_1 + 0x3558),local_20,auStack_124);
          }
          if (local_14 != 0) {
            local_54 = FUN_00013520(param_1,local_20,param_5,local_24,local_28,auStack_124,local_1e4
                                   );
            if (local_54 != 0) {
              return local_54;
            }
            if (local_40 != 0) {
              FUN_0003442c(*(undefined4 *)(param_1 + 0x3558),local_24,auStack_124);
            }
          }
          if (local_44 != 0) {
            FUN_00020144(local_2c,local_30,auStack_124);
          }
          if ((local_48 != 0) || (local_4c != 0)) {
            FUN_0002023c(local_34,local_38,auStack_124,local_48,local_4c);
          }
          if (local_50 != 0) {
            FUN_00021494(local_3c,param_6,auStack_124,auStack_1f0);
          }
        }
        else {
          local_c = FUN_000134d0(param_1);
        }
      }
      else {
        local_c = FUN_000134d0(param_1);
      }
    }
  }
  else {
    if (local_1e4 < 0x3231565a) {
      if (local_1e4 == 0x32315559) goto LAB_00016010;
    }
    else if ((local_1e4 == 0x33424752) || (local_1e4 == 0x33524742)) {
      local_c = local_1e8 * local_1ec * 3;
      local_10 = local_11c * local_120 * 3;
      goto LAB_00016088;
    }
    snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_000164f8 + 0x16068));
    piVar4 = __errno_location();
    *piVar4 = 0x16;
    local_c = 0xffffffff;
  }
  return local_c;
}



/* ===== v4lconvert_get_error_message @ 00016500 size=40 ===== */

int v4lconvert_get_error_message(int param_1)

{
  return param_1 + 0x18;
}



/* ===== FUN_00016528 @ 00016528 size=940 ===== */

/* WARNING: Removing unreachable block (ram,0x000167c4) */
/* WARNING: Removing unreachable block (ram,0x00016624) */
/* WARNING: Removing unreachable block (ram,0x00016660) */
/* WARNING: Removing unreachable block (ram,0x000166b8) */
/* WARNING: Removing unreachable block (ram,0x00016618) */
/* WARNING: Removing unreachable block (ram,0x00016620) */
/* WARNING: Removing unreachable block (ram,0x000166a8) */
/* WARNING: Removing unreachable block (ram,0x000167b8) */
/* WARNING: Removing unreachable block (ram,0x000167c0) */
/* WARNING: Removing unreachable block (ram,0x00016854) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00016528(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_48 [44];
  undefined4 local_1c;
  uint local_18;
  
  iVar2 = DAT_000168e0 + 0x1654c;
  uVar4 = 0;
  while( true ) {
    iVar1 = (**(code **)(param_1[0xd58] + 8))(param_1[0xd57],*param_1,0xc02c564a,local_48);
    if (iVar1 != 0) {
      return;
    }
    local_1c = 0;
    for (local_18 = 0; local_18 < (uint)param_1[0xd48]; local_18 = local_18 + 1) {
    }
    if (param_1[0xd48] == 0x100) break;
    param_1[param_1[0xd48] * 0xb + 0x49] = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
    uVar3 = VectorShiftLeft(DAT_000168d8,uVar4,8,1);
    iVar1 = param_1[0xd48];
    param_1[(iVar1 + 0x5a4) * 2] = (int)uVar3;
    (param_1 + (iVar1 + 0x5a4) * 2)[1] = (int)((ulonglong)uVar3 >> 0x20);
    param_1[0xd48] = param_1[0xd48] + 1;
  }
  fwrite((void *)(DAT_000168e8 + 0x16740),1,0x3a,(FILE *)**(undefined4 **)(iVar2 + DAT_000168e4));
  return;
}



/* ===== v4lconvert_enum_framesizes @ 000168ec size=468 ===== */

undefined4 v4lconvert_enum_framesizes(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = v4lconvert_supported_dst_format(param_2[1]);
  if (iVar1 == 0) {
    iVar1 = v4lconvert_supported_dst_fmt_only(param_1);
    if (iVar1 == 0) {
      uVar4 = (**(code **)(param_1[0xd58] + 8))(param_1[0xd57],*param_1,0xc02c564a,param_2);
    }
    else {
      piVar2 = __errno_location();
      *piVar2 = 0x16;
      uVar4 = 0xffffffff;
    }
  }
  else if (*param_2 < (uint)param_1[0xd48]) {
    param_2[2] = param_1[*param_2 * 0xb + 0x49];
    memset(param_2 + 9,0,8);
    uVar5 = param_2[2];
    if (uVar5 == 1) {
      uVar5 = param_1[*param_2 * 0xb + 0x4b];
      param_2[3] = param_1[*param_2 * 0xb + 0x4a];
      param_2[4] = uVar5;
      param_2[3] = param_2[3] & 0xfffffff8;
      param_2[4] = param_2[4] & 0xfffffffe;
    }
    else if ((uVar5 != 0) && (uVar5 < 4)) {
      uVar6 = *param_2;
      uVar5 = param_1[uVar6 * 0xb + 0x4b];
      uVar3 = param_1[uVar6 * 0xb + 0x4c];
      uVar7 = param_1[uVar6 * 0xb + 0x4d];
      param_2[3] = param_1[uVar6 * 0xb + 0x4a];
      param_2[4] = uVar5;
      param_2[5] = uVar3;
      param_2[6] = uVar7;
      uVar5 = param_1[uVar6 * 0xb + 0x4f];
      param_2[7] = param_1[uVar6 * 0xb + 0x4e];
      param_2[8] = uVar5;
    }
    uVar4 = 0;
  }
  else {
    piVar2 = __errno_location();
    *piVar2 = 0x16;
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== v4lconvert_enum_frameintervals @ 00016ac0 size=1096 ===== */

int v4lconvert_enum_frameintervals(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 local_1d4;
  int local_1d0;
  int local_1cc;
  uint local_1c8;
  undefined1 auStack_108 [4];
  undefined4 local_104;
  undefined4 local_100;
  uint local_fc;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  iVar5 = v4lconvert_supported_dst_format(param_2[1]);
  if (iVar5 == 0) {
    iVar5 = v4lconvert_supported_dst_fmt_only(param_1);
    if (iVar5 == 0) {
      local_2c = (**(code **)(param_1[0xd58] + 8))(param_1[0xd57],*param_1,0xc034564b,param_2);
      if (local_2c != 0) {
        piVar6 = __errno_location();
        pcVar7 = strerror(*piVar6);
        snprintf((char *)(param_1 + 6),0x100,(char *)(DAT_00016f08 + 0x16b8c),pcVar7);
      }
    }
    else {
      piVar6 = __errno_location();
      *piVar6 = 0x16;
      local_2c = -1;
    }
  }
  else {
    memset(&local_1d4,0,0xcc);
    local_1d4 = 1;
    local_1c8 = param_2[1];
    local_1d0 = param_2[2];
    local_1cc = param_2[3];
    local_2c = v4lconvert_try_format(param_1,&local_1d4,auStack_108);
    if (local_2c == 0) {
      if (((local_1c8 == param_2[1]) && (local_1d0 == param_2[2])) && (local_1cc == param_2[3])) {
        param_2[1] = local_fc;
        param_2[2] = local_104;
        param_2[3] = local_100;
        local_2c = (**(code **)(param_1[0xd58] + 8))(param_1[0xd57],*param_1,0xc034564b,param_2);
        iVar4 = local_1cc;
        iVar5 = local_1d0;
        if (local_2c != 0) {
          local_30 = local_1c8;
          local_34 = local_fc;
          uVar8 = *param_2;
          uVar9 = local_1c8 & 0xff;
          uVar1 = (int)local_1c8 >> 8;
          uVar2 = (int)local_1c8 >> 0x10;
          iVar3 = (int)local_1c8 >> 0x18;
          piVar6 = __errno_location();
          pcVar7 = strerror(*piVar6);
          snprintf((char *)(param_1 + 6),0x100,(char *)(DAT_00016f14 + 0x16ecc),uVar8,uVar9,
                   uVar1 & 0xff,uVar2 & 0xff,iVar3,iVar5,iVar4,local_fc & 0xff,
                   (int)local_fc >> 8 & 0xff,(int)local_fc >> 0x10 & 0xff,(int)local_fc >> 0x18,
                   local_104,local_100,pcVar7);
        }
        param_2[1] = local_1c8;
        param_2[2] = local_1d0;
        param_2[3] = local_1cc;
      }
      else {
        local_38 = param_2[1];
        local_3c = local_1c8;
        snprintf((char *)(param_1 + 6),0x100,(char *)(DAT_00016f10 + 0x16d38),local_38 & 0xff,
                 (int)local_38 >> 8 & 0xff,(int)local_38 >> 0x10 & 0xff,(int)local_38 >> 0x18,
                 param_2[2],param_2[3],local_1c8 & 0xff,(int)local_1c8 >> 8 & 0xff,
                 (int)local_1c8 >> 0x10 & 0xff,(int)local_1c8 >> 0x18,local_1d0,local_1cc);
        piVar6 = __errno_location();
        *piVar6 = 0x16;
        local_2c = -1;
      }
    }
    else {
      piVar6 = __errno_location();
      pcVar7 = strerror(*piVar6);
      snprintf((char *)(param_1 + 6),0x100,(char *)(DAT_00016f0c + 0x16c2c),pcVar7);
    }
  }
  return local_2c;
}



/* ===== v4lconvert_vidioc_queryctrl @ 00016f18 size=60 ===== */

undefined4 v4lconvert_vidioc_queryctrl(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00032d7c(*(undefined4 *)(param_1 + 0x3554),param_2);
  return uVar1;
}



/* ===== v4lconvert_vidioc_g_ctrl @ 00016f54 size=60 ===== */

undefined4 v4lconvert_vidioc_g_ctrl(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00032f5c(*(undefined4 *)(param_1 + 0x3554),param_2);
  return uVar1;
}



/* ===== v4lconvert_vidioc_s_ctrl @ 00016f90 size=60 ===== */

undefined4 v4lconvert_vidioc_s_ctrl(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0003357c(*(undefined4 *)(param_1 + 0x3554),param_2);
  return uVar1;
}



/* ===== v4lconvert_vidioc_g_ext_ctrls @ 00016fcc size=60 ===== */

undefined4 v4lconvert_vidioc_g_ext_ctrls(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000333f8(*(undefined4 *)(param_1 + 0x3554),param_2);
  return uVar1;
}



/* ===== v4lconvert_vidioc_try_ext_ctrls @ 00017008 size=60 ===== */

undefined4 v4lconvert_vidioc_try_ext_ctrls(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00033890(*(undefined4 *)(param_1 + 0x3554),param_2);
  return uVar1;
}



/* ===== v4lconvert_vidioc_s_ext_ctrls @ 00017044 size=60 ===== */

undefined4 v4lconvert_vidioc_s_ext_ctrls(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00033938(*(undefined4 *)(param_1 + 0x3554),param_2);
  return uVar1;
}



/* ===== v4lconvert_get_fps @ 00017080 size=44 ===== */

undefined4 v4lconvert_get_fps(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3528);
}



/* ===== v4lconvert_set_fps @ 000170ac size=56 ===== */

void v4lconvert_set_fps(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3528) = param_2;
  return;
}



/* ===== FUN_000170e4 @ 000170e4 size=1000 ===== */

uint FUN_000170e4(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ushort *local_14;
  uint local_10;
  uint local_c;
  
  while (*(uint *)(param_1 + 0x2c) < 9) {
    if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x1c)) {
      snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_000174cc + 0x17138),
               9 - *(int *)(param_1 + 0x2c));
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)(param_1 + 0xa6a0),-5);
    }
    pbVar3 = *(byte **)(param_1 + 0x1c);
    *(byte **)(param_1 + 0x1c) = pbVar3 + 1;
    bVar1 = *pbVar3;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) << 8;
    if ((bVar1 == 0xff) && (**(char **)(param_1 + 0x1c) == '\0')) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | (uint)bVar1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 8;
  }
  local_c = *(uint *)(param_1 + 0x28) >> (*(int *)(param_1 + 0x2c) - 9U & 0xff);
  uVar2 = (uint)*(short *)(param_2 + local_c * 2);
  if ((int)uVar2 < 0) {
    local_10 = 0;
    do {
      if (6 < local_10) {
        snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_000174d4 + 0x174a4),local_c);
                    /* WARNING: Subroutine does not return */
        longjmp((__jmp_buf_tag *)(param_1 + 0xa6a0),-5);
      }
      uVar2 = local_10 + 10;
      while (*(uint *)(param_1 + 0x2c) < uVar2) {
        if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x1c)) {
          snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_000174d0 + 0x172f0),
                   uVar2 - *(int *)(param_1 + 0x2c));
                    /* WARNING: Subroutine does not return */
          longjmp((__jmp_buf_tag *)(param_1 + 0xa6a0),-5);
        }
        pbVar3 = *(byte **)(param_1 + 0x1c);
        *(byte **)(param_1 + 0x1c) = pbVar3 + 1;
        bVar1 = *pbVar3;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) << 8;
        if ((bVar1 == 0xff) && (**(char **)(param_1 + 0x1c) == '\0')) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        }
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | (uint)bVar1;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 8;
      }
      local_c = *(uint *)(param_1 + 0x28) >> (*(int *)(param_1 + 0x2c) - uVar2 & 0xff);
      for (local_14 = (ushort *)(param_2 + (local_10 + 3) * 0x200); *local_14 != 0;
          local_14 = local_14 + 2) {
        if (local_c == *local_14) {
          *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - uVar2;
          *(uint *)(param_1 + 0x28) =
               *(uint *)(param_1 + 0x28) & ~(-1 << (*(uint *)(param_1 + 0x2c) & 0xff));
          return (uint)local_14[1];
        }
      }
      local_10 = local_10 + 1;
    } while( true );
  }
  *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - (uint)*(byte *)(param_2 + uVar2 + 0x400);
  *(uint *)(param_1 + 0x28) =
       *(uint *)(param_1 + 0x28) & ~(-1 << (*(uint *)(param_1 + 0x2c) & 0xff));
  return uVar2;
}



/* ===== FUN_000174d8 @ 000174d8 size=1488 ===== */

void FUN_000174d8(int param_1,int param_2)

{
  byte *pbVar1;
  short local_98 [64];
  byte local_18;
  char local_17;
  byte local_16;
  byte local_15;
  uint local_14;
  int local_10;
  byte local_9;
  
  local_10 = param_1 + param_2 * 0x9c + 0x30;
  memset(local_98,0,0x80);
  local_14 = FUN_000170e4(param_1,*(undefined4 *)(local_10 + 0x10));
  if (local_14 == 0) {
    local_98[0] = *(short *)(local_10 + 0x14);
  }
  else {
    while (*(uint *)(param_1 + 0x2c) < local_14) {
      if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x1c)) {
        snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_00017aa8 + 0x17588),
                 local_14 - *(int *)(param_1 + 0x2c));
                    /* WARNING: Subroutine does not return */
        longjmp((__jmp_buf_tag *)(param_1 + 0xa6a0),-5);
      }
      pbVar1 = *(byte **)(param_1 + 0x1c);
      *(byte **)(param_1 + 0x1c) = pbVar1 + 1;
      local_15 = *pbVar1;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) << 8;
      if ((local_15 == 0xff) && (**(char **)(param_1 + 0x1c) == '\0')) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      }
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | (uint)local_15;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 8;
    }
    local_98[0] = (short)(*(uint *)(param_1 + 0x28) >> (*(int *)(param_1 + 0x2c) - local_14 & 0xff))
    ;
    *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - local_14;
    *(uint *)(param_1 + 0x28) =
         *(uint *)(param_1 + 0x28) & ~(-1 << (*(uint *)(param_1 + 0x2c) & 0xff));
    if ((uint)(int)local_98[0] >> (local_14 - 1 & 0xff) == 0) {
      local_98[0] = local_98[0] + (short)(-1 << (local_14 & 0xff)) + 1;
    }
    local_98[0] = local_98[0] + *(short *)(local_10 + 0x14);
    *(short *)(local_10 + 0x14) = local_98[0];
  }
  local_9 = 1;
  while (local_9 < 0x40) {
    local_14 = FUN_000170e4(param_1,*(undefined4 *)(local_10 + 0xc));
    local_16 = (byte)local_14 & 0xf;
    local_17 = (char)(local_14 >> 4);
    if ((local_14 & 0xf) == 0) {
      if (local_17 == '\0') break;
      if (local_17 == '\x0f') {
        local_9 = local_9 + 0x10;
      }
    }
    else {
      local_9 = local_9 + local_17;
      if (local_9 < 0x40) {
        while (*(uint *)(param_1 + 0x2c) < (uint)local_16) {
          if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x1c)) {
            snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_00017aac + 0x17810),
                     (uint)local_16 - *(int *)(param_1 + 0x2c));
                    /* WARNING: Subroutine does not return */
            longjmp((__jmp_buf_tag *)(param_1 + 0xa6a0),-5);
          }
          pbVar1 = *(byte **)(param_1 + 0x1c);
          *(byte **)(param_1 + 0x1c) = pbVar1 + 1;
          local_18 = *pbVar1;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) << 8;
          if ((local_18 == 0xff) && (**(char **)(param_1 + 0x1c) == '\0')) {
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          }
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | (uint)local_18;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 8;
        }
        local_98[local_9] =
             (short)(*(uint *)(param_1 + 0x28) >> (*(int *)(param_1 + 0x2c) - (uint)local_16 & 0xff)
                    );
        *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - (uint)local_16;
        *(uint *)(param_1 + 0x28) =
             *(uint *)(param_1 + 0x28) & ~(-1 << (*(uint *)(param_1 + 0x2c) & 0xff));
        if ((uint)(int)local_98[local_9] >> (local_16 - 1 & 0xff) == 0) {
          local_98[local_9] = local_98[local_9] + (short)(-1 << local_16) + 1;
        }
        local_9 = local_9 + 1;
      }
    }
  }
  if (local_9 < 0x41) {
    for (local_9 = 0; local_9 < 0x40; local_9 = local_9 + 1) {
      *(short *)(local_10 + (local_9 + 8) * 2 + 6) =
           local_98[*(byte *)(DAT_00017ab4 + 0x17a50 + (uint)local_9)];
    }
    return;
  }
  snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_00017ab0 + 0x17a18),(uint)local_9);
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(param_1 + 0xa6a0),-5);
}



/* ===== FUN_00017ab8 @ 00017ab8 size=1008 ===== */

undefined4 FUN_00017ab8(int param_1,int param_2,int param_3,void *param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int aiStack_554 [264];
  byte local_134 [260];
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int *local_20;
  byte *local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_1c = local_134;
  for (local_c = 1; local_c < 0x11; local_c = local_c + 1) {
    for (local_10 = 1; local_10 <= *(byte *)(param_2 + local_c); local_10 = local_10 + 1) {
      pbVar4 = local_1c + 1;
      *local_1c = (byte)local_c;
      local_1c = pbVar4;
    }
  }
  *local_1c = 0;
  memset(param_4,0xff,0x400);
  for (local_c = 0; local_c < 7; local_c = local_c + 1) {
    aiStack_554[local_c] = 0;
  }
  local_14 = 0;
  local_20 = aiStack_554 + 7;
  local_1c = local_134;
  local_18 = (uint)local_134[0];
  while (*local_1c != 0) {
    for (; piVar2 = local_20, local_18 == *local_1c; local_1c = local_1c + 1) {
      local_20 = local_20 + 1;
      iVar5 = local_14 + 1;
      *piVar2 = local_14;
      local_14 = iVar5;
    }
    local_14 = local_14 << 1;
    local_18 = local_18 + 1;
  }
  local_c = 0;
  do {
    if (local_134[local_c] == 0) {
      for (local_c = 0; local_c < 7; local_c = local_c + 1) {
        *(undefined2 *)((int)param_4 + (local_c * 0x100 + aiStack_554[local_c] + 0x300) * 2) = 0;
      }
      return 0;
    }
    bVar1 = *(byte *)(param_3 + local_c);
    local_28 = (uint)bVar1;
    local_14 = aiStack_554[local_c + 7];
    local_2c = (uint)local_134[local_c];
    *(byte *)((int)param_4 + bVar1 + 0x400) = local_134[local_c];
    if (local_2c < 10) {
      local_24 = 1 << (9 - local_2c & 0xff);
      local_14 = local_14 << (9 - local_2c & 0xff);
      while (iVar3 = local_14, iVar5 = local_24, local_24 = local_24 + -1, iVar5 != 0) {
        local_14 = local_14 + 1;
        *(ushort *)((int)param_4 + iVar3 * 2) = (ushort)bVar1;
      }
    }
    else {
      local_30 = local_2c - 10;
      if (aiStack_554[local_30] == 0xfe) {
        snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_00017ea8 + 0x17d60));
        return 0xffffffff;
      }
      *(short *)((int)param_4 + (local_30 * 0x100 + aiStack_554[local_30] + 0x300) * 2) =
           (short)local_14;
      *(ushort *)((int)param_4 + (local_30 * 0x100 + aiStack_554[local_30] + 0x301) * 2) =
           (ushort)bVar1;
      aiStack_554[local_30] = aiStack_554[local_30] + 2;
    }
    local_c = local_c + 1;
  } while( true );
}



/* ===== FUN_00017eac @ 00017eac size=324 ===== */

undefined4 FUN_00017eac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(uint *)(param_1 + 0x14) & 2) == 0) || (*(int *)(param_1 + 0xa504) == 0)) {
    iVar1 = FUN_00017ab8(param_1,DAT_00017ff4 + 0x17f0c,DAT_00017ff0 + 0x17f04,param_1 + 0x504);
    if (iVar1 == 0) {
      iVar1 = FUN_00017ab8(param_1,DAT_00017ffc + 0x17f44,DAT_00017ff8 + 0x17f3c,param_1 + 0x5504);
      if (iVar1 == 0) {
        iVar1 = FUN_00017ab8(param_1,DAT_00018004 + 0x17f7c,DAT_00018000 + 0x17f74,param_1 + 0x1904)
        ;
        if (iVar1 == 0) {
          iVar1 = FUN_00017ab8(param_1,DAT_0001800c + 0x17fb4,DAT_00018008 + 0x17fac,
                               param_1 + 0x6904);
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0xa504) = 1;
            uVar2 = 0;
          }
          else {
            uVar2 = 0xffffffff;
          }
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00018010 @ 00018010 size=80 ===== */

uint FUN_00018010(uint param_1)

{
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  else if ((int)param_1 < 0x100) {
    param_1 = param_1 & 0xff;
  }
  else {
    param_1 = 0xff;
  }
  return param_1;
}



/* ===== FUN_00018060 @ 00018060 size=504 ===== */

void FUN_00018060(int param_1)

{
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  
  local_14 = *(undefined1 **)(param_1 + 0xa7b0);
  local_10 = (void *)(param_1 + 0xa51a);
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    memcpy(local_14,local_10,8);
    local_14 = (undefined1 *)((int)local_14 + *(int *)(param_1 + 0xc));
    local_10 = (void *)((int)local_10 + 8);
  }
  local_14 = *(undefined1 **)(param_1 + 0xa7b4);
  local_c = (undefined1 *)(param_1 + 0xa65a);
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 2) {
    for (local_1c = 0; local_1c < 8; local_1c = local_1c + 2) {
      *local_14 = *local_c;
      local_c = local_c + 2;
      local_14 = local_14 + 1;
    }
    local_c = local_c + 8;
    local_14 = local_14 + ((*(uint *)(param_1 + 0xc) >> 1) - 4);
  }
  local_14 = *(undefined1 **)(param_1 + 0xa7b8);
  local_c = (undefined1 *)(param_1 + 0xa61a);
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 2) {
    for (local_1c = 0; local_1c < 8; local_1c = local_1c + 2) {
      *local_14 = *local_c;
      local_c = local_c + 2;
      local_14 = local_14 + 1;
    }
    local_c = local_c + 8;
    local_14 = local_14 + ((*(uint *)(param_1 + 0xc) >> 1) - 4);
  }
  return;
}



/* ===== FUN_00018258 @ 00018258 size=384 ===== */

void FUN_00018258(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = *(void **)(param_1 + 0xa7b0);
  local_14 = (void *)(param_1 + 0xa51a);
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    memcpy(local_c,local_14,0x10);
    local_c = (void *)((int)local_c + *(int *)(param_1 + 0xc));
    local_14 = (void *)((int)local_14 + 0x10);
  }
  local_c = *(void **)(param_1 + 0xa7b4);
  local_10 = (void *)(param_1 + 0xa65a);
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 2) {
    memcpy(local_c,local_10,8);
    local_10 = (void *)((int)local_10 + 0x10);
    local_c = (void *)((int)local_c + (*(uint *)(param_1 + 0xc) >> 1));
  }
  local_c = *(void **)(param_1 + 0xa7b8);
  local_10 = (void *)(param_1 + 0xa61a);
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 2) {
    memcpy(local_c,local_10,8);
    local_10 = (void *)((int)local_10 + 0x10);
    local_c = (void *)((int)local_c + (*(uint *)(param_1 + 0xc) >> 1));
  }
  return;
}



/* ===== FUN_000183d8 @ 000183d8 size=480 ===== */

void FUN_000183d8(int param_1)

{
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  
  local_14 = *(undefined1 **)(param_1 + 0xa7b0);
  local_10 = (void *)(param_1 + 0xa51a);
  for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
    memcpy(local_14,local_10,8);
    local_14 = (undefined1 *)((int)local_14 + *(int *)(param_1 + 0xc));
    local_10 = (void *)((int)local_10 + 8);
  }
  local_14 = *(undefined1 **)(param_1 + 0xa7b4);
  local_c = (undefined1 *)(param_1 + 0xa65a);
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    for (local_1c = 0; local_1c < 8; local_1c = local_1c + 2) {
      *local_14 = *local_c;
      local_c = local_c + 2;
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + ((*(uint *)(param_1 + 0xc) >> 1) - 4);
  }
  local_14 = *(undefined1 **)(param_1 + 0xa7b8);
  local_c = (undefined1 *)(param_1 + 0xa61a);
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    for (local_1c = 0; local_1c < 8; local_1c = local_1c + 2) {
      *local_14 = *local_c;
      local_c = local_c + 2;
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + ((*(uint *)(param_1 + 0xc) >> 1) - 4);
  }
  return;
}



/* ===== FUN_000185b8 @ 000185b8 size=384 ===== */

void FUN_000185b8(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = *(void **)(param_1 + 0xa7b0);
  local_14 = (void *)(param_1 + 0xa51a);
  for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
    memcpy(local_c,local_14,0x10);
    local_c = (void *)((int)local_c + *(int *)(param_1 + 0xc));
    local_14 = (void *)((int)local_14 + 0x10);
  }
  local_c = *(void **)(param_1 + 0xa7b4);
  local_10 = (void *)(param_1 + 0xa65a);
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    memcpy(local_c,local_10,8);
    local_10 = (void *)((int)local_10 + 8);
    local_c = (void *)((int)local_c + (*(uint *)(param_1 + 0xc) >> 1));
  }
  local_c = *(void **)(param_1 + 0xa7b8);
  local_10 = (void *)(param_1 + 0xa61a);
  for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
    memcpy(local_c,local_10,8);
    local_10 = (void *)((int)local_10 + 8);
    local_c = (void *)((int)local_c + (*(uint *)(param_1 + 0xc) >> 1));
  }
  return;
}



/* ===== FUN_00018738 @ 00018738 size=508 ===== */

void FUN_00018738(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int local_28;
  int local_24;
  undefined1 *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  local_20 = *(undefined1 **)(param_1 + 0xa7b0);
  local_14 = (byte *)(param_1 + 0xa51a);
  local_18 = (byte *)(param_1 + 0xa65a);
  local_1c = (byte *)(param_1 + 0xa61a);
  iVar5 = *(int *)(param_1 + 0xc);
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
      iVar1 = (uint)*local_14 * 0x400;
      bVar2 = *local_18;
      bVar3 = *local_1c;
      uVar4 = FUN_00018010((int)(iVar1 + (bVar3 - 0x80) * 0x59c + 0x200) >> 10);
      *local_20 = uVar4;
      puVar6 = local_20 + 2;
      uVar4 = FUN_00018010((int)(iVar1 + (bVar2 - 0x80) * -0x160 + (bVar3 - 0x80) * -0x2db + 0x200)
                           >> 10);
      local_20[1] = uVar4;
      local_20 = local_20 + 3;
      uVar4 = FUN_00018010((int)(iVar1 + (bVar2 - 0x80) * 0x717 + 0x200) >> 10);
      *puVar6 = uVar4;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    local_20 = local_20 + iVar5 * 3 + -0x18;
  }
  return;
}



/* ===== FUN_00018934 @ 00018934 size=508 ===== */

void FUN_00018934(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int local_28;
  int local_24;
  undefined1 *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  local_20 = *(undefined1 **)(param_1 + 0xa7b0);
  local_14 = (byte *)(param_1 + 0xa51a);
  local_18 = (byte *)(param_1 + 0xa65a);
  local_1c = (byte *)(param_1 + 0xa61a);
  iVar5 = *(int *)(param_1 + 0xc);
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
      iVar1 = (uint)*local_14 * 0x400;
      bVar2 = *local_18;
      bVar3 = *local_1c;
      uVar4 = FUN_00018010((int)(iVar1 + (bVar2 - 0x80) * 0x717 + 0x200) >> 10);
      *local_20 = uVar4;
      puVar6 = local_20 + 2;
      uVar4 = FUN_00018010((int)(iVar1 + (bVar2 - 0x80) * -0x160 + (bVar3 - 0x80) * -0x2db + 0x200)
                           >> 10);
      local_20[1] = uVar4;
      local_20 = local_20 + 3;
      uVar4 = FUN_00018010((int)(iVar1 + (bVar3 - 0x80) * 0x59c + 0x200) >> 10);
      *puVar6 = uVar4;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    local_20 = local_20 + iVar5 * 3 + -0x18;
  }
  return;
}



/* ===== FUN_00018b30 @ 00018b30 size=676 ===== */

void FUN_00018b30(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int local_28;
  int local_24;
  undefined1 *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  local_20 = *(undefined1 **)(param_1 + 0xa7b0);
  local_14 = (byte *)(param_1 + 0xa51a);
  local_18 = (byte *)(param_1 + 0xa65a);
  local_1c = (byte *)(param_1 + 0xa61a);
  iVar3 = *(int *)(param_1 + 0xc);
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
      pbVar4 = local_14 + 1;
      iVar1 = (uint)*local_14 * 0x400;
      iVar5 = (*local_1c - 0x80) * 0x59c + 0x200;
      iVar6 = (*local_18 - 0x80) * -0x160 + (*local_1c - 0x80) * -0x2db + 0x200;
      iVar7 = (*local_18 - 0x80) * 0x717 + 0x200;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      *local_20 = uVar2;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      local_20[1] = uVar2;
      uVar2 = FUN_00018010(iVar1 + iVar7 >> 10);
      local_20[2] = uVar2;
      local_14 = local_14 + 2;
      iVar1 = (uint)*pbVar4 * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_20[3] = uVar2;
      puVar8 = local_20 + 5;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      local_20[4] = uVar2;
      local_20 = local_20 + 6;
      uVar2 = FUN_00018010(iVar1 + iVar7 >> 10);
      *puVar8 = uVar2;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
    }
    local_20 = local_20 + iVar3 * 3 + -0x30;
  }
  return;
}



/* ===== FUN_00018dd4 @ 00018dd4 size=676 ===== */

void FUN_00018dd4(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int local_28;
  int local_24;
  undefined1 *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  local_20 = *(undefined1 **)(param_1 + 0xa7b0);
  local_14 = (byte *)(param_1 + 0xa51a);
  local_18 = (byte *)(param_1 + 0xa65a);
  local_1c = (byte *)(param_1 + 0xa61a);
  iVar3 = *(int *)(param_1 + 0xc);
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
      iVar5 = (*local_1c - 0x80) * 0x59c + 0x200;
      iVar6 = (*local_18 - 0x80) * -0x160 + (*local_1c - 0x80) * -0x2db + 0x200;
      iVar7 = (*local_18 - 0x80) * 0x717 + 0x200;
      pbVar4 = local_14 + 1;
      iVar1 = (uint)*local_14 * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar7 >> 10);
      *local_20 = uVar2;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      local_20[1] = uVar2;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_20[2] = uVar2;
      local_14 = local_14 + 2;
      iVar1 = (uint)*pbVar4 * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar7 >> 10);
      local_20[3] = uVar2;
      puVar8 = local_20 + 5;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      local_20[4] = uVar2;
      local_20 = local_20 + 6;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      *puVar8 = uVar2;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
    }
    local_20 = local_20 + iVar3 * 3 + -0x30;
  }
  return;
}



/* ===== FUN_00019078 @ 00019078 size=736 ===== */

void FUN_00019078(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  local_20 = *(undefined1 **)(param_1 + 0xa7b0);
  local_24 = (undefined1 *)(*(int *)(param_1 + 0xa7b0) + *(int *)(param_1 + 0xc) * 3);
  local_14 = (byte *)(param_1 + 0xa51a);
  local_18 = (byte *)(param_1 + 0xa65a);
  local_1c = (byte *)(param_1 + 0xa61a);
  iVar3 = *(int *)(param_1 + 0xc) * 6 + -0x18;
  for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
    for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
      iVar4 = (*local_1c - 0x80) * 0x59c + 0x200;
      iVar5 = (*local_18 - 0x80) * -0x160 + (*local_1c - 0x80) * -0x2db + 0x200;
      iVar6 = (*local_18 - 0x80) * 0x717 + 0x200;
      iVar1 = (uint)*local_14 * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar4 >> 10);
      *local_20 = uVar2;
      puVar7 = local_20 + 2;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_20[1] = uVar2;
      local_20 = local_20 + 3;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      *puVar7 = uVar2;
      iVar1 = (uint)local_14[8] * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar4 >> 10);
      *local_24 = uVar2;
      puVar7 = local_24 + 2;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_24[1] = uVar2;
      local_24 = local_24 + 3;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      *puVar7 = uVar2;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + 8;
    local_20 = local_20 + iVar3;
    local_24 = local_24 + iVar3;
  }
  return;
}



/* ===== FUN_00019358 @ 00019358 size=736 ===== */

void FUN_00019358(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  local_20 = *(undefined1 **)(param_1 + 0xa7b0);
  local_24 = (undefined1 *)(*(int *)(param_1 + 0xa7b0) + *(int *)(param_1 + 0xc) * 3);
  local_14 = (byte *)(param_1 + 0xa51a);
  local_18 = (byte *)(param_1 + 0xa65a);
  local_1c = (byte *)(param_1 + 0xa61a);
  iVar3 = *(int *)(param_1 + 0xc) * 6 + -0x18;
  for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
    for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
      iVar4 = (*local_1c - 0x80) * 0x59c + 0x200;
      iVar5 = (*local_18 - 0x80) * -0x160 + (*local_1c - 0x80) * -0x2db + 0x200;
      iVar6 = (*local_18 - 0x80) * 0x717 + 0x200;
      iVar1 = (uint)*local_14 * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      *local_20 = uVar2;
      puVar7 = local_20 + 2;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_20[1] = uVar2;
      local_20 = local_20 + 3;
      uVar2 = FUN_00018010(iVar1 + iVar4 >> 10);
      *puVar7 = uVar2;
      iVar1 = (uint)local_14[8] * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      *local_24 = uVar2;
      puVar7 = local_24 + 2;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_24[1] = uVar2;
      local_24 = local_24 + 3;
      uVar2 = FUN_00018010(iVar1 + iVar4 >> 10);
      *puVar7 = uVar2;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + 8;
    local_20 = local_20 + iVar3;
    local_24 = local_24 + iVar3;
  }
  return;
}



/* ===== FUN_00019638 @ 00019638 size=1068 ===== */

void FUN_00019638(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  local_20 = *(undefined1 **)(param_1 + 0xa7b0);
  local_24 = (undefined1 *)(*(int *)(param_1 + 0xa7b0) + *(int *)(param_1 + 0xc) * 3);
  local_14 = (byte *)(param_1 + 0xa51a);
  local_18 = (byte *)(param_1 + 0xa65a);
  local_1c = (byte *)(param_1 + 0xa61a);
  iVar3 = *(int *)(param_1 + 0xc) * 6 + -0x30;
  for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
    for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
      iVar4 = (*local_1c - 0x80) * 0x59c + 0x200;
      iVar5 = (*local_18 - 0x80) * -0x160 + (*local_1c - 0x80) * -0x2db + 0x200;
      iVar6 = (*local_18 - 0x80) * 0x717 + 0x200;
      iVar1 = (uint)*local_14 * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar4 >> 10);
      *local_20 = uVar2;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_20[1] = uVar2;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      local_20[2] = uVar2;
      iVar1 = (uint)local_14[1] * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar4 >> 10);
      local_20[3] = uVar2;
      puVar7 = local_20 + 5;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_20[4] = uVar2;
      local_20 = local_20 + 6;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      *puVar7 = uVar2;
      iVar1 = (uint)local_14[0x10] * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar4 >> 10);
      *local_24 = uVar2;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_24[1] = uVar2;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      local_24[2] = uVar2;
      iVar1 = (uint)local_14[0x11] * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar4 >> 10);
      local_24[3] = uVar2;
      puVar7 = local_24 + 5;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_24[4] = uVar2;
      local_24 = local_24 + 6;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      *puVar7 = uVar2;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
      local_14 = local_14 + 2;
    }
    local_14 = local_14 + 0x10;
    local_20 = local_20 + iVar3;
    local_24 = local_24 + iVar3;
  }
  return;
}



/* ===== FUN_00019a64 @ 00019a64 size=1068 ===== */

void FUN_00019a64(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  local_20 = *(undefined1 **)(param_1 + 0xa7b0);
  local_24 = (undefined1 *)(*(int *)(param_1 + 0xa7b0) + *(int *)(param_1 + 0xc) * 3);
  local_14 = (byte *)(param_1 + 0xa51a);
  local_18 = (byte *)(param_1 + 0xa65a);
  local_1c = (byte *)(param_1 + 0xa61a);
  iVar3 = *(int *)(param_1 + 0xc) * 6 + -0x30;
  for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
    for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
      iVar4 = (*local_1c - 0x80) * 0x59c + 0x200;
      iVar5 = (*local_18 - 0x80) * -0x160 + (*local_1c - 0x80) * -0x2db + 0x200;
      iVar6 = (*local_18 - 0x80) * 0x717 + 0x200;
      iVar1 = (uint)*local_14 * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      *local_20 = uVar2;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_20[1] = uVar2;
      uVar2 = FUN_00018010(iVar1 + iVar4 >> 10);
      local_20[2] = uVar2;
      iVar1 = (uint)local_14[1] * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      local_20[3] = uVar2;
      puVar7 = local_20 + 5;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_20[4] = uVar2;
      local_20 = local_20 + 6;
      uVar2 = FUN_00018010(iVar1 + iVar4 >> 10);
      *puVar7 = uVar2;
      iVar1 = (uint)local_14[0x10] * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      *local_24 = uVar2;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_24[1] = uVar2;
      uVar2 = FUN_00018010(iVar1 + iVar4 >> 10);
      local_24[2] = uVar2;
      iVar1 = (uint)local_14[0x11] * 0x400;
      uVar2 = FUN_00018010(iVar1 + iVar6 >> 10);
      local_24[3] = uVar2;
      puVar7 = local_24 + 5;
      uVar2 = FUN_00018010(iVar1 + iVar5 >> 10);
      local_24[4] = uVar2;
      local_24 = local_24 + 6;
      uVar2 = FUN_00018010(iVar1 + iVar4 >> 10);
      *puVar7 = uVar2;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
      local_14 = local_14 + 2;
    }
    local_14 = local_14 + 0x10;
    local_20 = local_20 + iVar3;
    local_24 = local_24 + iVar3;
  }
  return;
}



/* ===== FUN_00019e90 @ 00019e90 size=152 ===== */

void FUN_00019e90(int param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = *(void **)(param_1 + 0xa7b0);
  local_c = (void *)(param_1 + 0xa51a);
  iVar1 = *(int *)(param_1 + 0xc);
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    memcpy(local_10,local_c,8);
    local_c = (void *)((int)local_c + 8);
    local_10 = (void *)((int)local_10 + iVar1);
  }
  return;
}



/* ===== FUN_00019f28 @ 00019f28 size=144 ===== */

void FUN_00019f28(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = *(void **)(param_1 + 0xa7b0);
  local_c = (void *)(param_1 + 0xa51a);
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    memcpy(local_10,local_c,0x10);
    local_c = (void *)((int)local_c + 0x10);
    local_10 = (void *)((int)local_10 + *(int *)(param_1 + 0xc));
  }
  return;
}



/* ===== FUN_00019fb8 @ 00019fb8 size=144 ===== */

void FUN_00019fb8(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = *(void **)(param_1 + 0xa7b0);
  local_c = (void *)(param_1 + 0xa51a);
  for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
    memcpy(local_10,local_c,8);
    local_c = (void *)((int)local_c + 8);
    local_10 = (void *)((int)local_10 + *(int *)(param_1 + 0xc));
  }
  return;
}



/* ===== FUN_0001a048 @ 0001a048 size=144 ===== */

void FUN_0001a048(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = *(void **)(param_1 + 0xa7b0);
  local_c = (void *)(param_1 + 0xa51a);
  for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
    memcpy(local_10,local_c,0x10);
    local_c = (void *)((int)local_c + 0x10);
    local_10 = (void *)((int)local_10 + *(int *)(param_1 + 0xc));
  }
  return;
}



/* ===== FUN_0001a0d8 @ 0001a0d8 size=160 ===== */

void FUN_0001a0d8(int param_1)

{
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa51a,8);
  FUN_000174d8(param_1,1);
  FUN_00021744(param_1 + 0xcc,param_1 + 0xa65a,8);
  FUN_000174d8(param_1,2);
  FUN_00021744(param_1 + 0x168,param_1 + 0xa61a,8);
  return;
}



/* ===== FUN_0001a178 @ 0001a178 size=160 ===== */

void FUN_0001a178(int param_1)

{
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa51a,8);
  FUN_000174d8(param_1,1);
  FUN_00021744(param_1 + 0xcc,param_1 + 0xa65a,8);
  FUN_000174d8(param_1,2);
  FUN_00021744(param_1 + 0x168,param_1 + 0xa61a,8);
  return;
}



/* ===== FUN_0001a218 @ 0001a218 size=208 ===== */

void FUN_0001a218(int param_1)

{
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa51a,0x10);
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa522,0x10);
  FUN_000174d8(param_1,1);
  FUN_00021744(param_1 + 0xcc,param_1 + 0xa65a,8);
  FUN_000174d8(param_1,2);
  FUN_00021744(param_1 + 0x168,param_1 + 0xa61a,8);
  return;
}



/* ===== FUN_0001a2e8 @ 0001a2e8 size=1220 ===== */

void FUN_0001a2e8(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte local_1dc [64];
  int aiStack_19c [32];
  byte abStack_11c [192];
  byte local_5c [64];
  int local_1c;
  uint local_18;
  int local_14;
  byte local_e;
  byte local_d;
  uint local_c;
  
  while (*(uint *)(param_1 + 0x2c) < 8) {
    if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x1c)) {
      snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001a7ac + 0x1a338),
               8 - *(int *)(param_1 + 0x2c));
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)(param_1 + 0xa6a0),-5);
    }
    pbVar1 = *(byte **)(param_1 + 0x1c);
    *(byte **)(param_1 + 0x1c) = pbVar1 + 1;
    local_d = *pbVar1;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) << 8;
    if ((local_d == 0xff) && (**(char **)(param_1 + 0x1c) == '\0')) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | (uint)local_d;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 8;
  }
  local_e = (byte)(*(uint *)(param_1 + 0x28) >> (*(int *)(param_1 + 0x2c) - 8U & 0xff));
  if (*(char *)(param_1 + 0xa519) == '\0') {
    *(byte *)(param_1 + 0xa519) = local_e;
  }
  else if ((char)(local_e ^ *(byte *)(param_1 + 0xa519)) < '\0') {
    snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001a7b0 + 0x1a478));
                    /* WARNING: Subroutine does not return */
    longjmp((__jmp_buf_tag *)(param_1 + 0xa6a0),-5);
  }
  if (local_e != *(byte *)(param_1 + 0xa518)) {
    memcpy(aiStack_19c,(void *)(DAT_0001a7b4 + 0x1a4bc),0x80);
    memcpy(abStack_11c,(void *)(DAT_0001a7b8 + 0x1a4d8),0x100);
    local_c = (int)(uint)local_e >> 2 & 0x1f;
    local_14 = aiStack_19c[local_c];
    local_18 = (int)(uint)local_e >> 6 & 1;
    local_1dc[0] = abStack_11c[local_18 * 0x40];
    for (local_c = 1; (int)local_c < 0x40; local_c = local_c + 1) {
      iVar2 = (int)(local_14 * (uint)abStack_11c[local_c + local_18 * 0x40] + 0x32) / 100;
      local_1c = iVar2;
      if (0xfe < iVar2) {
        iVar2 = 0xff;
      }
      local_1dc[local_c] = (byte)iVar2;
    }
    FUN_0001abec(param_1 + 0x204,local_1dc);
    if (-1 < (char)local_e) {
      local_1dc[0] = local_5c[0];
      for (local_c = 1; (int)local_c < 0x40; local_c = local_c + 1) {
        iVar2 = (int)(local_14 * (uint)local_5c[local_c] + 0x32) / 100;
        local_1c = iVar2;
        if (0xfe < iVar2) {
          iVar2 = 0xff;
        }
        local_1dc[local_c] = (byte)iVar2;
      }
    }
    FUN_0001abec(param_1 + 0x304,local_1dc);
    *(byte *)(param_1 + 0xa518) = local_e;
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -8;
  *(uint *)(param_1 + 0x28) =
       *(uint *)(param_1 + 0x28) & ~(-1 << (*(uint *)(param_1 + 0x2c) & 0xff));
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa51a,0x10);
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa522,0x10);
  FUN_000174d8(param_1,1);
  FUN_00021744(param_1 + 0xcc,param_1 + 0xa65a,8);
  FUN_000174d8(param_1,2);
  FUN_00021744(param_1 + 0x168,param_1 + 0xa61a,8);
  return;
}



/* ===== FUN_0001a7bc @ 0001a7bc size=144 ===== */

void FUN_0001a7bc(int param_1)

{
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa51a,0x10);
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa522,0x10);
  FUN_000174d8(param_1,1);
  FUN_000174d8(param_1,2);
  return;
}



/* ===== FUN_0001a84c @ 0001a84c size=304 ===== */

void FUN_0001a84c(int param_1)

{
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa51a,0x10);
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa522,0x10);
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa59a,0x10);
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa5a2,0x10);
  FUN_000174d8(param_1,1);
  FUN_00021744(param_1 + 0xcc,param_1 + 0xa65a,8);
  FUN_000174d8(param_1,2);
  FUN_00021744(param_1 + 0x168,param_1 + 0xa61a,8);
  return;
}



/* ===== FUN_0001a97c @ 0001a97c size=240 ===== */

void FUN_0001a97c(int param_1)

{
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa51a,0x10);
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa522,0x10);
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa59a,0x10);
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa5a2,0x10);
  FUN_000174d8(param_1,1);
  FUN_000174d8(param_1,2);
  return;
}



/* ===== FUN_0001aa6c @ 0001aa6c size=208 ===== */

void FUN_0001aa6c(int param_1)

{
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa51a,8);
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa55a,8);
  FUN_000174d8(param_1,1);
  FUN_00021744(param_1 + 0xcc,param_1 + 0xa65a,8);
  FUN_000174d8(param_1,2);
  FUN_00021744(param_1 + 0x168,param_1 + 0xa61a,8);
  return;
}



/* ===== FUN_0001ab3c @ 0001ab3c size=144 ===== */

void FUN_0001ab3c(int param_1)

{
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa51a,8);
  FUN_000174d8(param_1,0);
  FUN_00021744(param_1 + 0x30,param_1 + 0xa55a,8);
  FUN_000174d8(param_1,1);
  FUN_000174d8(param_1,2);
  return;
}



/* ===== FUN_0001abcc @ 0001abcc size=32 ===== */

void FUN_0001abcc(void)

{
  return;
}



/* ===== FUN_0001abec @ 0001abec size=236 ===== */

void FUN_0001abec(float *param_1,int param_2)

{
  uint in_fpscr;
  double dVar1;
  float *local_1c;
  byte *local_14;
  int local_10;
  int local_c;
  
  local_14 = (byte *)(DAT_0001acd8 + 0x1ac0c);
  local_1c = param_1;
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      dVar1 = (double)VectorSignedToFloat((uint)*(byte *)(param_2 + (uint)*local_14),
                                          (byte)(in_fpscr >> 0x16) & 3);
      *local_1c = (float)(dVar1 * *(double *)(DAT_0001acdc + 0x1ac58 + local_c * 8) *
                         *(double *)(DAT_0001ace0 + 0x1ac74 + local_10 * 8));
      local_1c = local_1c + 1;
      local_14 = local_14 + 1;
    }
  }
  return;
}



/* ===== FUN_0001ace4 @ 0001ace4 size=304 ===== */

undefined4 FUN_0001ace4(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  byte *local_20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_20 = param_2 + 2;
  while( true ) {
    if (param_2 + CONCAT11(uVar1,uVar2) <= local_20) {
      return 0;
    }
    uVar3 = (uint)*local_20;
    if ((int)uVar3 >> 4 != 0) break;
    if (2 < uVar3) {
      snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001ae18 + 0x1adb4),3,uVar3 + 1);
      return 0xffffffff;
    }
    FUN_0001abec(param_1 + (uVar3 + 2) * 0x100 + 4,local_20 + 1);
    local_20 = local_20 + 0x41;
  }
  snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001ae14 + 0x1ad70));
  return 0xffffffff;
}



/* ===== FUN_0001ae1c @ 0001ae1c size=672 ===== */

undefined4 FUN_0001ae1c(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  byte *local_30;
  int local_c;
  
  FUN_0001abcc(param_2);
  uVar5 = (uint)CONCAT11(*(undefined1 *)(param_2 + 3),*(byte *)(param_2 + 4));
  uVar6 = (uint)CONCAT11(*(undefined1 *)(param_2 + 5),*(byte *)(param_2 + 6));
  if (*(char *)(param_2 + 2) == '\b') {
    if ((uVar6 < 0x801) && (uVar5 < 0x801)) {
      if (*(char *)(param_2 + 7) == '\x03') {
        if ((*(byte *)(param_2 + 4) & 7) == 0) {
          if ((*(byte *)(param_2 + 6) & 0xf) == 0) {
            local_30 = (byte *)(param_2 + 8);
            for (local_c = 0; local_c < 3; local_c = local_c + 1) {
              bVar1 = *local_30;
              pbVar4 = local_30 + 2;
              bVar2 = local_30[1];
              local_30 = local_30 + 3;
              bVar3 = *pbVar4;
              piVar8 = (int *)(param_1 + local_c * 0x9c + 0x30);
              piVar8[0x26] = (uint)bVar1;
              piVar8[1] = bVar2 & 0xf;
              *piVar8 = (int)(uint)bVar2 >> 4;
              piVar8[2] = param_1 + (bVar3 + 2) * 0x100 + 4;
            }
            *(uint *)(param_1 + 0xc) = uVar6;
            *(uint *)(param_1 + 0x10) = uVar5;
            uVar7 = 0;
          }
          else {
            snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b0cc + 0x1afac),uVar6);
            uVar7 = 0xffffffff;
          }
        }
        else {
          snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b0c8 + 0x1af74),uVar5);
          uVar7 = 0xffffffff;
        }
      }
      else {
        snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b0c4 + 0x1af38));
        uVar7 = 0xffffffff;
      }
    }
    else {
      snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b0c0 + 0x1af08),uVar6,uVar5);
      uVar7 = 0xffffffff;
    }
  }
  else {
    snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b0bc + 0x1aebc));
    uVar7 = 0xffffffff;
  }
  return uVar7;
}



/* ===== FUN_0001b0d0 @ 0001b0d0 size=868 ===== */

undefined4 FUN_0001b0d0(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *local_20;
  uint local_c;
  
  uVar3 = (uint)*(byte *)(param_2 + 2);
  if ((uVar3 == 3) || (uVar3 == 1)) {
    if (uVar3 == 1) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 8;
    }
    else if ((*(uint *)(param_1 + 0x14) & 8) != 0) {
      snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b438 + 0x1b184));
      return 0xffffffff;
    }
    local_20 = (byte *)(param_2 + 3);
    for (local_c = 0; local_c < uVar3; local_c = local_c + 1) {
      pbVar2 = local_20 + 1;
      uVar5 = (uint)*local_20;
      local_20 = local_20 + 2;
      bVar1 = *pbVar2;
      if (uVar3 == 1) {
        local_c = 0;
        while ((local_c < 3 && (uVar5 != *(uint *)(param_1 + local_c * 0x9c + 200)))) {
          local_c = local_c + 1;
        }
        if (local_c == 3) {
          snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b43c + 0x1b25c),uVar5);
          return 0xffffffff;
        }
        *(uint *)(param_1 + 0xa514) = uVar5;
      }
      if ((bVar1 & 0xc) != 0) {
        snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b440 + 0x1b2a8),4);
        return 0xffffffff;
      }
      if (3 < bVar1 >> 4) {
        snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b444 + 0x1b2e0),4);
        return 0xffffffff;
      }
      if (uVar5 != *(uint *)(param_1 + local_c * 0x9c + 200)) {
        snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b448 + 0x1b360),local_c,uVar5,
                 local_c,*(undefined4 *)(param_1 + local_c * 0x9c + 200));
        return 0xffffffff;
      }
      *(uint *)(param_1 + local_c * 0x9c + 0x3c) = param_1 + (bVar1 & 0xf) * 0x1400 + 0x5504;
      *(uint *)(param_1 + local_c * 0x9c + 0x40) = param_1 + (uint)(bVar1 >> 4) * 0x1400 + 0x504;
    }
    *(byte **)(param_1 + 0x1c) = local_20 + 3;
    *(undefined4 *)(param_1 + 0xa510) = 0;
    uVar4 = 0;
  }
  else {
    snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b434 + 0x1b124));
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== FUN_0001b44c @ 0001b44c size=556 ===== */

undefined4 FUN_0001b44c(int param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *local_38;
  byte local_2c [20];
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_14 = CONCAT11(*param_2,param_2[1]) - 2;
  local_38 = param_2 + 2;
  while( true ) {
    if (local_14 < 1) {
      return 0;
    }
    bVar1 = *local_38;
    local_18 = (uint)bVar1;
    local_2c[0] = 0;
    local_c = 0;
    for (local_10 = 1; local_38 = local_38 + 1, local_10 < 0x11; local_10 = local_10 + 1) {
      local_2c[local_10] = *local_38;
      local_c = local_c + local_2c[local_10];
    }
    if (0x400 < local_c) break;
    if ((bVar1 & 0xc) != 0) {
      snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b67c + 0x1b580),4);
      return 0xffffffff;
    }
    if ((bVar1 & 0xf0) == 0) {
      iVar2 = FUN_00017ab8(param_1,local_2c,local_38,param_1 + (local_18 & 0xf) * 0x1400 + 0x504);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
    else {
      iVar2 = FUN_00017ab8(param_1,local_2c,local_38,param_1 + (local_18 & 0xf) * 0x1400 + 0x5504);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
    local_14 = (local_14 + -0x11) - local_c;
    local_38 = local_38 + local_c;
  }
  snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b678 + 0x1b544));
  return 0xffffffff;
}



/* ===== FUN_0001b680 @ 0001b680 size=164 ===== */

undefined4 FUN_0001b680(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  if (CONCAT11(*param_2,param_2[1]) == 4) {
    *(uint *)(param_1 + 0xa508) = (uint)CONCAT11(param_2[2],param_2[3]);
    uVar1 = 0;
  }
  else {
    snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b724 + 0x1b6d8));
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0001b728 @ 0001b728 size=192 ===== */

void FUN_0001b728(int param_1)

{
  undefined4 local_c;
  
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    *(undefined2 *)(param_1 + local_c * 0x9c + 0x44) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0xa508) < 1) {
    *(undefined4 *)(param_1 + 0xa50c) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0xa50c) = *(undefined4 *)(param_1 + 0xa508);
  }
  return;
}



/* ===== FUN_0001b7e8 @ 0001b7e8 size=456 ===== */

undefined4 FUN_0001b7e8(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *local_10;
  
  bVar2 = false;
  local_10 = *(byte **)(param_1 + 0x1c);
  while( true ) {
    while( true ) {
      if (bVar2) {
        *(byte **)(param_1 + 0x1c) = local_10;
        *(int *)(param_1 + 0xa510) = *(int *)(param_1 + 0xa510) + 1;
        *(uint *)(param_1 + 0xa510) = *(uint *)(param_1 + 0xa510) & 7;
        return 0;
      }
      while (pbVar3 = local_10 + 1, bVar1 = *local_10, local_10 = pbVar3, bVar1 != 0xff) {
        if (*(byte **)(param_1 + 0x18) <= pbVar3) {
          snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b9b0 + 0x1b83c));
          return 0xffffffff;
        }
      }
      while (*local_10 == 0xff) {
        local_10 = local_10 + 1;
        if (*(byte **)(param_1 + 0x18) <= local_10) {
          snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b9b4 + 0x1b8a0));
          return 0xffffffff;
        }
      }
      uVar4 = (uint)*local_10;
      if (uVar4 != *(int *)(param_1 + 0xa510) + 0xd0U) break;
      bVar2 = true;
      local_10 = local_10 + 1;
    }
    if ((0xcf < uVar4) && (uVar4 < 0xd8)) break;
    local_10 = local_10 + 1;
    if (uVar4 == 0xd9) {
      return 0;
    }
  }
  snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001b9b8 + 0x1b92c));
  return 0xffffffff;
}



/* ===== FUN_0001b9bc @ 0001b9bc size=268 ===== */

undefined4 FUN_0001b9bc(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *local_c;
  
  local_c = *(char **)(param_1 + 0x1c);
  do {
    while (pcVar2 = local_c + 1, cVar1 = *local_c, local_c = pcVar2, cVar1 != -1) {
      if (*(char **)(param_1 + 0x18) <= pcVar2) {
        snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001bac8 + 0x1ba08));
        return 0xffffffff;
      }
    }
    while (*local_c == -1) {
      local_c = local_c + 1;
      if (*(char **)(param_1 + 0x18) <= local_c) {
        snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001bacc + 0x1ba6c));
        return 0xffffffff;
      }
    }
    pcVar2 = local_c + 1;
    cVar1 = *local_c;
    local_c = pcVar2;
  } while (cVar1 != -0x26);
  *(char **)(param_1 + 0x1c) = pcVar2;
  return 0;
}



/* ===== FUN_0001bad0 @ 0001bad0 size=1084 ===== */

undefined4 FUN_0001bad0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  char *local_30;
  
  bVar4 = false;
  bVar5 = false;
  bVar3 = false;
  bVar6 = false;
  local_30 = param_2;
  while (!bVar3) {
    if (*local_30 != -1) goto LAB_0001bedc;
    do {
      pcVar2 = local_30;
      local_30 = pcVar2 + 1;
    } while (*local_30 == -1);
    pcVar8 = pcVar2 + 2;
    cVar1 = *local_30;
    local_30 = pcVar8 + CONCAT11(*pcVar8,pcVar2[3]);
    switch(cVar1) {
    case -0x40:
      iVar7 = FUN_0001ae1c(param_1,pcVar8);
      if (iVar7 < 0) {
        return 0xffffffff;
      }
      bVar4 = true;
      break;
    case -0x3f:
      break;
    case -0x3e:
      break;
    case -0x3d:
      break;
    case -0x3c:
      iVar7 = FUN_0001b44c(param_1,pcVar8);
      if (iVar7 < 0) {
        return 0xffffffff;
      }
      bVar6 = true;
      break;
    case -0x3b:
      break;
    case -0x3a:
      break;
    case -0x39:
      break;
    case -0x38:
      break;
    case -0x37:
      break;
    case -0x36:
      break;
    case -0x35:
      break;
    case -0x34:
      break;
    case -0x33:
      break;
    case -0x32:
      break;
    case -0x31:
      break;
    case -0x30:
      break;
    case -0x2f:
      break;
    case -0x2e:
      break;
    case -0x2d:
      break;
    case -0x2c:
      break;
    case -0x2b:
      break;
    case -0x2a:
      break;
    case -0x29:
      break;
    case -0x28:
      break;
    case -0x27:
      break;
    case -0x26:
      iVar7 = FUN_0001b0d0(param_1,pcVar8);
      if (iVar7 < 0) {
        return 0xffffffff;
      }
      bVar3 = true;
      break;
    case -0x25:
      iVar7 = FUN_0001ace4(param_1,pcVar8);
      if (iVar7 < 0) {
        return 0xffffffff;
      }
      bVar5 = true;
      break;
    case -0x24:
      break;
    case -0x23:
      iVar7 = FUN_0001b680(param_1,pcVar8);
      if (iVar7 < 0) {
        return 0xffffffff;
      }
    }
  }
  if ((bVar4) && ((bVar5 || ((*(uint *)(param_1 + 0x14) & 4) != 0)))) {
    if ((!bVar6) && (iVar7 = FUN_00017eac(param_1), iVar7 != 0)) {
      return 0xffffffff;
    }
    if ((*(uint *)(param_1 + 0x30) < *(uint *)(param_1 + 0xcc)) ||
       (*(uint *)(param_1 + 0x30) < *(uint *)(param_1 + 0x168))) {
      snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001bf0c + 0x1bd9c));
      return 0xffffffff;
    }
    if ((*(uint *)(param_1 + 0xd0) <= *(uint *)(param_1 + 0x34)) &&
       (*(uint *)(param_1 + 0x16c) <= *(uint *)(param_1 + 0x34))) {
      if ((((*(int *)(param_1 + 0xcc) == 1) && (*(int *)(param_1 + 0x168) == 1)) &&
          (*(int *)(param_1 + 0xd0) == 1)) && (*(int *)(param_1 + 0x16c) == 1)) {
        if (((*(uint *)(param_1 + 0x14) & 8) != 0) &&
           ((*(int *)(param_1 + 0x30) != 2 || (*(int *)(param_1 + 0x30) != 2)))) {
          snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001bf18 + 0x1beb8));
          return 0xffffffff;
        }
        return 0;
      }
      snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001bf14 + 0x1be5c));
      return 0xffffffff;
    }
    snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001bf10 + 0x1bdf4));
    return 0xffffffff;
  }
LAB_0001bedc:
  snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001bf1c + 0x1bef4));
  return 0xffffffff;
}



/* ===== FUN_0001bf20 @ 0001bf20 size=68 ===== */

void * FUN_0001bf20(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0xa8d0);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}



/* ===== FUN_0001bf64 @ 0001bf64 size=196 ===== */

void FUN_0001bf64(void *param_1)

{
  undefined4 local_c;
  
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    free(*(void **)((int)param_1 + local_c * 4));
    free(*(void **)((int)param_1 + (local_c + 0x2a30) * 4));
    *(undefined4 *)((int)param_1 + local_c * 4) = 0;
    *(undefined4 *)((int)param_1 + (local_c + 0x2a30) * 4) = 0;
  }
  *(undefined4 *)((int)param_1 + 0xa8bc) = 0;
  free(*(void **)((int)param_1 + 0x20));
  free(param_1);
  return;
}



/* ===== FUN_0001c028 @ 0001c028 size=156 ===== */

undefined4 FUN_0001c028(int param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*param_2 == -1) && (param_2[1] == -0x28)) {
    *(char **)(param_1 + 0x18) = param_2 + param_3;
    uVar1 = FUN_0001bad0(param_1,param_2 + 2);
  }
  else {
    snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001c0c4 + 0x1c07c));
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_0001c0c8 @ 0001c0c8 size=648 ===== */

int FUN_0001c0c8(int param_1,void *param_2,char *param_3,int param_4)

{
  byte *pbVar1;
  size_t local_20;
  byte *local_1c;
  void *local_18;
  int local_10;
  size_t local_c;
  
  local_10 = 0;
  if (*param_3 == '`') {
    memcpy(param_2,param_3 + 1,param_4 - 1);
    param_4 = param_4 + -1;
  }
  else {
    local_1c = (byte *)(param_3 + 1);
    local_20 = param_4 - 1;
    local_c = 0x3fa;
    local_18 = param_2;
    while ((int)local_c <= (int)local_20) {
      memcpy(local_18,local_1c,local_c);
      local_18 = (void *)((int)local_18 + local_c);
      pbVar1 = local_1c + local_c;
      local_10 = local_10 + local_c;
      if ((int)(local_20 - local_c) < 4) break;
      if (((*pbVar1 != 0xff) || (pbVar1[1] != 0xff)) || (pbVar1[2] != 0xff)) {
        snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001c350 + 0x1c258),(uint)*pbVar1,
                 (uint)pbVar1[1],(uint)pbVar1[2],(uint)pbVar1[3],local_10);
        return -1;
      }
      if (6 < pbVar1[3]) {
        snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001c354 + 0x1c29c),(uint)pbVar1[3]);
        return -1;
      }
      local_1c = pbVar1 + 4;
      local_20 = (local_20 - local_c) - 4;
      if (pbVar1[3] == 0) {
        memcpy(local_18,local_1c,local_20);
        return local_10 + local_20;
      }
      local_c = 0x800 >> (uint)pbVar1[3];
    }
    snprintf((char *)(param_1 + 0xa7bc),0x100,(char *)(DAT_0001c358 + 0x1c338));
    param_4 = -1;
  }
  return param_4;
}



/* ===== FUN_0001c35c @ 0001c35c size=2144 ===== */

int FUN_0001c35c(int *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  code *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  code *local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  iVar1 = _setjmp((__jmp_buf_tag *)(param_1 + 0x29a8));
  if (iVar1 == 0) {
    if ((param_1[5] & 8U) == 0) {
      local_40 = 0;
      local_3c = 0;
      local_34 = 0;
      local_30 = 0;
      local_20 = (undefined4 *)(DAT_0001cbbc + 0x1c3ec);
      if ((param_1[5] & 4U) != 0) {
        iVar1 = FUN_00013434(param_1[6] - param_1[7],param_1 + 8,param_1 + 9);
        param_1[8] = iVar1;
        if (param_1[8] == 0) {
          snprintf((char *)(param_1 + 0x29ef),0x100,(char *)(DAT_0001cbc0 + 0x1c460));
          return -1;
        }
        iVar1 = FUN_0001c0c8(param_1,param_1[8],param_1[7],param_1[6] - param_1[7]);
        if (iVar1 < 0) {
          return iVar1;
        }
        param_1[7] = param_1[8];
        param_1[6] = param_1[7] + iVar1;
        *(undefined1 *)((int)param_1 + 0xa519) = 0;
        local_20 = (undefined4 *)(DAT_0001cbc4 + 0x1c500);
      }
      switch(param_2) {
      case 1:
        local_20 = (undefined4 *)(DAT_0001cbd4 + 0x1c730);
        if ((param_1[5] & 4U) != 0) {
          snprintf((char *)(param_1 + 0x29ef),0x100,(char *)(DAT_0001cbd8 + 0x1c75c));
          return -1;
        }
        local_24 = (undefined4 *)(DAT_0001cbdc + 0x1c778);
        if (*param_1 == 0) {
          pvVar2 = malloc(param_1[4] * param_1[3]);
          *param_1 = (int)pvVar2;
        }
        local_38 = param_1[3];
        local_44 = 8;
        break;
      case 2:
        local_24 = (undefined4 *)(DAT_0001cbd0 + 0x1c6b8);
        if (*param_1 == 0) {
          pvVar2 = malloc(param_1[4] * param_1[3] * 3);
          *param_1 = (int)pvVar2;
        }
        local_38 = param_1[3] * 3;
        local_44 = 0x18;
        break;
      case 3:
        local_24 = (undefined4 *)(DAT_0001cbcc + 0x1c640);
        if (*param_1 == 0) {
          pvVar2 = malloc(param_1[4] * param_1[3] * 3);
          *param_1 = (int)pvVar2;
        }
        local_38 = param_1[3] * 3;
        local_44 = 0x18;
        break;
      case 4:
        local_24 = (undefined4 *)(DAT_0001cbc8 + 0x1c530);
        if (*param_1 == 0) {
          pvVar2 = malloc(param_1[4] * param_1[3]);
          *param_1 = (int)pvVar2;
        }
        if (param_1[1] == 0) {
          pvVar2 = malloc((uint)(param_1[4] * param_1[3]) >> 2);
          param_1[1] = (int)pvVar2;
        }
        if (param_1[2] == 0) {
          pvVar2 = malloc((uint)(param_1[4] * param_1[3]) >> 2);
          param_1[2] = (int)pvVar2;
        }
        local_38 = param_1[3];
        local_34 = (uint)param_1[3] >> 2;
        local_30 = (uint)param_1[3] >> 2;
        local_44 = 8;
        local_40 = 4;
        local_3c = 4;
        break;
      default:
        snprintf((char *)(param_1 + 0x29ef),0x100,(char *)(DAT_0001cbe0 + 0x1c7e4));
        return -1;
      }
      local_18 = 8;
      local_14 = 8;
      if ((param_1[0xc] | param_1[0xd]) == 1) {
        local_1c = (code *)*local_20;
        local_28 = (code *)*local_24;
      }
      else if (param_1[0xc] == 1) {
        local_1c = (code *)local_20[1];
        local_28 = (code *)local_24[1];
        local_18 = 0x10;
      }
      else if (param_1[0xd] == 2) {
        local_1c = (code *)local_20[3];
        local_28 = (code *)local_24[3];
        local_14 = 0x10;
        local_18 = 0x10;
      }
      else {
        local_1c = (code *)local_20[2];
        local_28 = (code *)local_24[2];
        local_14 = 0x10;
      }
      if (local_1c == (code *)0x0) {
        snprintf((char *)(param_1 + 0x29ef),0x100,(char *)(DAT_0001cbe4 + 0x1c8f0));
        iVar1 = -1;
      }
      else {
        FUN_0001b728(param_1);
        for (local_10 = 0; uVar3 = FUN_00036408(param_1[4],local_18), local_10 < uVar3;
            local_10 = local_10 + 1) {
          param_1[0x29ec] = *param_1 + local_10 * local_18 * local_38;
          param_1[0x29ed] = param_1[1] + local_10 * local_18 * local_34;
          param_1[0x29ee] = param_1[2] + local_10 * local_18 * local_30;
          for (local_c = 0; local_c < (uint)param_1[3]; local_c = local_c + local_14) {
            (*local_1c)(param_1);
            (*local_28)(param_1);
            param_1[0x29ec] = param_1[0x29ec] + (local_14 >> 3) * local_44;
            param_1[0x29ed] = param_1[0x29ed] + (local_14 >> 3) * local_40;
            param_1[0x29ee] = param_1[0x29ee] + (local_14 >> 3) * local_3c;
            if ((0 < param_1[0x2943]) &&
               (param_1[0x2943] = param_1[0x2943] + -1, param_1[0x2943] == 0)) {
              param_1[7] = param_1[7] - ((uint)param_1[0xb] >> 3);
              FUN_0001b728(param_1);
              iVar1 = FUN_0001b7e8(param_1);
              if (iVar1 < 0) {
                return -1;
              }
            }
          }
        }
        if (((param_1[5] & 4U) == 0) || (param_1[6] - param_1[7] < 6)) {
          iVar1 = 0;
        }
        else {
          snprintf((char *)(param_1 + 0x29ef),0x100,(char *)(DAT_0001cbe8 + 0x1cb9c));
          iVar1 = -1;
        }
      }
    }
    else {
      iVar1 = FUN_0001cbec(param_1,param_2);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_0001cbec @ 0001cbec size=3840 ===== */

undefined4 FUN_0001cbec(int *param_1,int param_2)

{
  undefined1 uVar1;
  size_t __size;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *local_30;
  undefined1 *local_2c;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  switch(param_2) {
  case 1:
    snprintf((char *)(param_1 + 0x29ef),0x100,(char *)(DAT_0001daec + 0x1cc3c));
    return 0xffffffff;
  case 2:
    break;
  case 3:
    break;
  case 4:
    local_20 = (byte *)*param_1;
    local_24 = (byte *)param_1[1];
    local_28 = (byte *)param_1[2];
    goto LAB_0001ce04;
  default:
    snprintf((char *)(param_1 + 0x29ef),0x100,(char *)(DAT_0001daf4 + 0x1cdf4));
    return 0xffffffff;
  }
  if ((uint)param_1[0x2a2f] < (uint)(param_1[4] * param_1[3])) {
    for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
      free((void *)param_1[local_14 + 0x2a30]);
      if (local_14 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = 4;
      }
      __size = FUN_00036408(param_1[4] * param_1[3],uVar4);
      pvVar2 = malloc(__size);
      param_1[local_14 + 0x2a30] = (int)pvVar2;
      if (param_1[local_14 + 0x2a30] == 0) {
        snprintf((char *)(param_1 + 0x29ef),0x100,(char *)(DAT_0001daf0 + 0x1cd34));
        return 0xffffffff;
      }
    }
    param_1[0x2a2f] = param_1[4] * param_1[3];
  }
  local_20 = (byte *)param_1[0x2a30];
  local_24 = (byte *)param_1[0x2a31];
  local_28 = (byte *)param_1[0x2a32];
LAB_0001ce04:
  if (param_1[0x2945] == param_1[0x32]) {
    FUN_0001b728(param_1);
    for (local_1c = 0; local_1c < (uint)param_1[4] >> 3; local_1c = local_1c + 1) {
      for (local_18 = 0; local_18 < (uint)param_1[3] >> 3; local_18 = local_18 + 1) {
        FUN_000174d8(param_1,0);
        FUN_00021744(param_1 + 0xc,local_20,param_1[3]);
        local_20 = (byte *)((int)local_20 + 8);
      }
      local_20 = (byte *)((int)local_20 + param_1[3] * 7);
    }
    param_1[7] = param_1[7] - ((uint)param_1[0xb] >> 3);
    FUN_0001b728(param_1);
    iVar3 = FUN_0001b9bc(param_1);
    if (iVar3 < 0) {
      uVar4 = 0xffffffff;
    }
    else {
      iVar3 = FUN_0001b0d0(param_1,param_1[7]);
      if (iVar3 < 0) {
        uVar4 = 0xffffffff;
      }
      else if (param_1[0x2945] == param_1[0x59]) {
        for (local_1c = 0; local_1c < (uint)param_1[4] >> 4; local_1c = local_1c + 1) {
          for (local_18 = 0; local_18 < (uint)param_1[3] >> 4; local_18 = local_18 + 1) {
            FUN_000174d8(param_1,1);
            FUN_00021744(param_1 + 0x33,local_24,(uint)param_1[3] >> 1);
            local_24 = (byte *)((int)local_24 + 8);
          }
          local_24 = (byte *)((int)local_24 + ((uint)param_1[3] >> 1) * 7);
        }
        param_1[7] = param_1[7] - ((uint)param_1[0xb] >> 3);
        FUN_0001b728(param_1);
        iVar3 = FUN_0001b9bc(param_1);
        if (iVar3 < 0) {
          uVar4 = 0xffffffff;
        }
        else {
          iVar3 = FUN_0001b0d0(param_1,param_1[7]);
          if (iVar3 < 0) {
            uVar4 = 0xffffffff;
          }
          else if (param_1[0x2945] == param_1[0x80]) {
            for (local_1c = 0; local_1c < (uint)param_1[4] >> 4; local_1c = local_1c + 1) {
              for (local_18 = 0; local_18 < (uint)param_1[3] >> 4; local_18 = local_18 + 1) {
                FUN_000174d8(param_1,2);
                FUN_00021744(param_1 + 0x5a,local_28,(uint)param_1[3] >> 1);
                local_28 = (byte *)((int)local_28 + 8);
              }
              local_28 = (byte *)((int)local_28 + ((uint)param_1[3] >> 1) * 7);
            }
            if (param_2 == 2) {
              local_20 = (byte *)param_1[0x2a30];
              local_24 = (byte *)param_1[0x2a31];
              local_28 = (byte *)param_1[0x2a32];
              local_2c = (undefined1 *)*param_1;
              local_30 = (undefined1 *)(*param_1 + param_1[3] * 3);
              for (local_1c = 0; local_1c < (uint)param_1[4] >> 1; local_1c = local_1c + 1) {
                for (local_18 = 0; local_18 < (uint)param_1[3] >> 1; local_18 = local_18 + 1) {
                  iVar5 = (*local_28 - 0x80) * 0x59c + 0x200;
                  iVar6 = (*local_24 - 0x80) * -0x160 + (*local_28 - 0x80) * -0x2db + 0x200;
                  iVar7 = (*local_24 - 0x80) * 0x717 + 0x200;
                  iVar3 = (uint)*local_20 * 0x400;
                  uVar1 = FUN_00018010(iVar3 + iVar7 >> 10);
                  *local_2c = uVar1;
                  uVar1 = FUN_00018010(iVar3 + iVar6 >> 10);
                  local_2c[1] = uVar1;
                  uVar1 = FUN_00018010(iVar3 + iVar5 >> 10);
                  local_2c[2] = uVar1;
                  iVar3 = (uint)local_20[param_1[3]] * 0x400;
                  uVar1 = FUN_00018010(iVar3 + iVar7 >> 10);
                  *local_30 = uVar1;
                  uVar1 = FUN_00018010(iVar3 + iVar6 >> 10);
                  local_30[1] = uVar1;
                  uVar1 = FUN_00018010(iVar3 + iVar5 >> 10);
                  local_30[2] = uVar1;
                  iVar3 = (uint)local_20[1] * 0x400;
                  uVar1 = FUN_00018010(iVar3 + iVar7 >> 10);
                  local_2c[3] = uVar1;
                  puVar8 = local_2c + 5;
                  uVar1 = FUN_00018010(iVar3 + iVar6 >> 10);
                  local_2c[4] = uVar1;
                  local_2c = local_2c + 6;
                  uVar1 = FUN_00018010(iVar3 + iVar5 >> 10);
                  *puVar8 = uVar1;
                  iVar3 = (uint)(local_20 + 1)[param_1[3]] * 0x400;
                  uVar1 = FUN_00018010(iVar3 + iVar7 >> 10);
                  local_30[3] = uVar1;
                  puVar8 = local_30 + 5;
                  uVar1 = FUN_00018010(iVar3 + iVar6 >> 10);
                  local_30[4] = uVar1;
                  local_30 = local_30 + 6;
                  uVar1 = FUN_00018010(iVar3 + iVar5 >> 10);
                  *puVar8 = uVar1;
                  local_20 = local_20 + 2;
                  local_28 = local_28 + 1;
                  local_24 = local_24 + 1;
                }
                local_20 = local_20 + param_1[3];
                local_2c = local_2c + param_1[3] * 3;
                local_30 = local_30 + param_1[3] * 3;
              }
            }
            else if (param_2 == 3) {
              local_20 = (byte *)param_1[0x2a30];
              local_24 = (byte *)param_1[0x2a31];
              local_28 = (byte *)param_1[0x2a32];
              local_2c = (undefined1 *)*param_1;
              local_30 = (undefined1 *)(*param_1 + param_1[3] * 3);
              for (local_1c = 0; local_1c < (uint)param_1[4] >> 1; local_1c = local_1c + 1) {
                for (local_18 = 0; local_18 < (uint)param_1[3] >> 1; local_18 = local_18 + 1) {
                  iVar5 = (*local_28 - 0x80) * 0x59c + 0x200;
                  iVar6 = (*local_24 - 0x80) * -0x160 + (*local_28 - 0x80) * -0x2db + 0x200;
                  iVar7 = (*local_24 - 0x80) * 0x717 + 0x200;
                  iVar3 = (uint)*local_20 * 0x400;
                  uVar1 = FUN_00018010(iVar3 + iVar5 >> 10);
                  *local_2c = uVar1;
                  uVar1 = FUN_00018010(iVar3 + iVar6 >> 10);
                  local_2c[1] = uVar1;
                  uVar1 = FUN_00018010(iVar3 + iVar7 >> 10);
                  local_2c[2] = uVar1;
                  iVar3 = (uint)local_20[param_1[3]] * 0x400;
                  uVar1 = FUN_00018010(iVar3 + iVar5 >> 10);
                  *local_30 = uVar1;
                  uVar1 = FUN_00018010(iVar3 + iVar6 >> 10);
                  local_30[1] = uVar1;
                  uVar1 = FUN_00018010(iVar3 + iVar7 >> 10);
                  local_30[2] = uVar1;
                  iVar3 = (uint)local_20[1] * 0x400;
                  uVar1 = FUN_00018010(iVar3 + iVar5 >> 10);
                  local_2c[3] = uVar1;
                  puVar8 = local_2c + 5;
                  uVar1 = FUN_00018010(iVar3 + iVar6 >> 10);
                  local_2c[4] = uVar1;
                  local_2c = local_2c + 6;
                  uVar1 = FUN_00018010(iVar3 + iVar7 >> 10);
                  *puVar8 = uVar1;
                  iVar3 = (uint)(local_20 + 1)[param_1[3]] * 0x400;
                  uVar1 = FUN_00018010(iVar3 + iVar5 >> 10);
                  local_30[3] = uVar1;
                  puVar8 = local_30 + 5;
                  uVar1 = FUN_00018010(iVar3 + iVar6 >> 10);
                  local_30[4] = uVar1;
                  local_30 = local_30 + 6;
                  uVar1 = FUN_00018010(iVar3 + iVar7 >> 10);
                  *puVar8 = uVar1;
                  local_20 = local_20 + 2;
                  local_28 = local_28 + 1;
                  local_24 = local_24 + 1;
                }
                local_20 = local_20 + param_1[3];
                local_2c = local_2c + param_1[3] * 3;
                local_30 = local_30 + param_1[3] * 3;
              }
            }
            uVar4 = 0;
          }
          else {
            snprintf((char *)(param_1 + 0x29ef),0x100,(char *)(DAT_0001db00 + 0x1d164),
                     param_1[0x2945],param_1[0x80]);
            uVar4 = 0xffffffff;
          }
        }
      }
      else {
        snprintf((char *)(param_1 + 0x29ef),0x100,(char *)(DAT_0001dafc + 0x1cfdc),param_1[0x2945],
                 param_1[0x59]);
        uVar4 = 0xffffffff;
      }
    }
  }
  else {
    snprintf((char *)(param_1 + 0x29ef),0x100,(char *)(DAT_0001daf8 + 0x1ce54),param_1[0x2945],
             param_1[0x32]);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* ===== FUN_0001db04 @ 0001db04 size=44 ===== */

int FUN_0001db04(int param_1)

{
  return param_1 + 0xa7bc;
}



/* ===== FUN_0001db30 @ 0001db30 size=72 ===== */

void FUN_0001db30(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  *param_3 = *(undefined4 *)(param_1 + 0x10);
  return;
}



/* ===== FUN_0001dbf8 @ 0001dbf8 size=136 ===== */

undefined4 FUN_0001dbf8(int param_1,int param_2,uint param_3)

{
  undefined4 local_1c;
  undefined4 local_c;
  
  local_1c = param_3;
  if (3 < param_3) {
    local_1c = 3;
  }
  for (local_c = 0; local_c < local_1c; local_c = local_c + 1) {
    *(undefined4 *)(param_1 + local_c * 4) = *(undefined4 *)(param_2 + local_c * 4);
  }
  return 0;
}



/* ===== FUN_0001dc80 @ 0001dc80 size=64 ===== */

undefined4 FUN_0001dc80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return uVar1;
}



/* ===== FUN_0001dcc0 @ 0001dcc0 size=560 ===== */

void FUN_0001dcc0(void)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  for (local_c = 0; (int)local_c < 0x100; local_c = local_c + 1) {
    local_10 = 0;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    if ((local_c & 0x80) == 0) {
      local_14 = 0;
      local_18 = 1;
    }
    else if ((local_c & 0xe0) == 0x80) {
      local_14 = 4;
      local_18 = 3;
    }
    else if ((local_c & 0xe0) == 0xa0) {
      local_14 = -4;
      local_18 = 3;
    }
    else if ((local_c & 0xf0) == 0xd0) {
      local_14 = 0xb;
      local_18 = 4;
    }
    else if ((local_c & 0xf0) == 0xf0) {
      local_14 = -0xb;
      local_18 = 4;
    }
    else if ((local_c & 0xf8) == 200) {
      local_14 = 0x14;
      local_18 = 5;
    }
    else if ((local_c & 0xfc) == 0xc0) {
      local_14 = -0x14;
      local_18 = 6;
    }
    else if ((local_c & 0xfc) == 0xc4) {
      local_14 = 0;
      local_18 = 8;
      local_1c = 1;
    }
    else if ((local_c & 0xf0) == 0xe0) {
      local_10 = 1;
      local_14 = (local_c & 0xf) << 4;
      local_18 = 8;
    }
    *(undefined4 *)(DAT_0001def0 + 0x1de5c + local_c * 0x10) = local_10;
    *(int *)(DAT_0001def4 + local_c * 0x10 + 0x1de78) = local_14;
    *(undefined4 *)(DAT_0001def8 + local_c * 0x10 + 0x1de90) = local_18;
    *(undefined4 *)(DAT_0001defc + local_c * 0x10 + 0x1deb4) = local_1c;
  }
  *(undefined4 *)(DAT_0001df00 + 0x1dedc) = 1;
  return;
}



/* ===== FUN_0001df04 @ 0001df04 size=904 ===== */

void FUN_0001df04(int param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  byte *local_28;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(int *)(DAT_0001e28c + 0x1df2c) == 0) {
    FUN_0001dcc0();
  }
  local_18 = 0;
  local_28 = param_2;
  for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
    local_10 = 0;
    if (local_c < 2) {
      pcVar2 = (char *)(param_1 + ((int)local_18 >> 3));
      uVar3 = local_18 + 8;
      *local_28 = *pcVar2 << (local_18 & 7) |
                  (byte)((int)(uint)(byte)pcVar2[1] >> (8 - (local_18 & 7) & 0xff));
      pcVar2 = (char *)(param_1 + ((int)uVar3 >> 3));
      local_18 = local_18 + 0x10;
      local_28[1] = *pcVar2 << (uVar3 & 7) |
                    (byte)((int)(uint)(byte)pcVar2[1] >> (8 - (uVar3 & 7) & 0xff));
      local_10 = 2;
      local_28 = local_28 + 2;
    }
    while (local_10 < param_3) {
      pcVar2 = (char *)(param_1 + ((int)local_18 >> 3));
      bVar1 = *pcVar2 << (local_18 & 7) |
              (byte)((int)(uint)(byte)pcVar2[1] >> (8 - (local_18 & 7) & 0xff));
      local_18 = local_18 + *(int *)(DAT_0001e290 + (uint)bVar1 * 0x10 + 0x1e0f0);
      if (*(int *)(DAT_0001e294 + (uint)bVar1 * 0x10 + 0x1e11c) == 0) {
        local_14 = *(int *)(DAT_0001e298 + (uint)bVar1 * 0x10 + 0x1e13c);
        if (*(int *)(DAT_0001e29c + 0x1e150 + (uint)bVar1 * 0x10) == 0) {
          if (local_10 < 2) {
            local_14 = local_14 + (uint)local_28[param_3 * -2];
          }
          else if (local_c < 2) {
            local_14 = local_14 + (uint)local_28[-2];
          }
          else {
            local_14 = local_14 + ((uint)local_28[-2] + (uint)local_28[param_3 * -2]) / 2;
          }
        }
        if (local_14 < 0) {
          bVar1 = 0;
        }
        else {
          if (0xfe < local_14) {
            local_14 = 0xff;
          }
          bVar1 = (byte)local_14;
        }
        *local_28 = bVar1;
        local_10 = local_10 + 1;
        local_28 = local_28 + 1;
      }
    }
  }
  return;
}



/* ===== FUN_0001e2a0 @ 0001e2a0 size=84 ===== */

void FUN_0001e2a0(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  *param_2 = *(undefined1 *)(param_1 + param_3 + 0x80 + param_4);
  return;
}



/* ===== FUN_0001e2f4 @ 0001e2f4 size=84 ===== */

void FUN_0001e2f4(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  *param_2 = *(undefined1 *)(param_1 + param_3 + 0xa0 + param_4);
  return;
}



/* ===== FUN_0001e348 @ 0001e348 size=672 ===== */

void FUN_0001e348(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  param_4 = param_4 * param_3;
  if (param_5 == 0) {
    local_24 = (code *)(DAT_0001e5f0 + 0x1e3fc);
    local_28 = (code *)(DAT_0001e5f4 + 0x1e408);
  }
  else {
    local_24 = (code *)(DAT_0001e5e8 + 0x1e3e0);
    local_28 = (code *)(DAT_0001e5ec + 0x1e3ec);
  }
  while (local_14 < param_4 + (param_4 >> 1)) {
    for (local_20 = 0; (int)local_20 < 0x80; local_20 = local_20 + 1) {
      *(undefined1 *)
       (param_2 +
       param_3 * (local_1c + *(int *)(DAT_0001e5fc + local_20 * 8 + 0x1e444)) +
       local_18 + *(int *)(DAT_0001e5f8 + 0x1e424 + local_20 * 8)) =
           *(undefined1 *)(param_1 + local_14 + local_20);
    }
    for (local_20 = 0; (int)local_20 < 0x20; local_20 = local_20 + 1) {
      iVar1 = param_2 + (param_3 >> 1) * ((local_1c >> 1) + ((int)local_20 >> 3)) + param_4 +
                        (local_18 >> 1) + (local_20 & 7);
      (*local_24)(param_1,iVar1,local_14,local_20);
      (*local_28)(param_1,iVar1 + (param_4 >> 2),local_14,local_20);
    }
    local_14 = local_14 + 0xc0;
    local_18 = local_18 + 0x10;
    if (param_3 <= local_18) {
      local_18 = 0;
      local_1c = local_1c + 8;
    }
  }
  return;
}



/* ===== FUN_0001e600 @ 0001e600 size=608 ===== */

void FUN_0001e600(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 local_c;
  
  for (local_c = 0; (int)local_c < 0x100; local_c = local_c + 1) {
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    if ((local_c & 0xc0) == 0) {
      uVar2 = 0;
      uVar3 = 2;
    }
    else if ((local_c & 0xc0) == 0x40) {
      uVar2 = 0xff;
      uVar3 = 2;
    }
    else if ((local_c & 0xc0) == 0x80) {
      uVar2 = 1;
      uVar3 = 2;
    }
    else if ((local_c & 0xf0) == 0xc0) {
      uVar2 = 0xfe;
      uVar3 = 4;
    }
    else if ((local_c & 0xf0) == 0xd0) {
      uVar2 = 2;
      uVar3 = 4;
    }
    else if ((local_c & 0xf8) == 0xe0) {
      uVar2 = 0xfd;
      uVar3 = 5;
    }
    else if ((local_c & 0xf8) == 0xe8) {
      uVar2 = 3;
      uVar3 = 5;
    }
    else if ((local_c & 0xfc) == 0xf0) {
      uVar2 = 0xfc;
      uVar3 = 6;
    }
    else if ((local_c & 0xfc) == 0xf4) {
      uVar2 = 4;
      uVar3 = 6;
    }
    else if ((local_c & 0xf8) == 0xf8) {
      uVar1 = 1;
      uVar2 = 0;
      uVar3 = 5;
    }
    *(undefined1 *)(DAT_0001e860 + 0x1e7b0 + local_c * 3) = uVar1;
    *(undefined1 *)(DAT_0001e864 + local_c * 3 + 0x1e7de) = uVar2;
    *(undefined1 *)(DAT_0001e868 + local_c * 3 + 0x1e80d) = uVar3;
  }
  *(undefined4 *)(DAT_0001e86c + 0x1e84c) = 1;
  return;
}



/* ===== FUN_0001e870 @ 0001e870 size=132 ===== */

byte FUN_0001e870(int param_1,uint param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + (param_2 >> 3));
  return *pcVar1 << (param_2 & 7) | (byte)((int)(uint)(byte)pcVar1[1] >> (8 - (param_2 & 7) & 0xff))
  ;
}



/* ===== FUN_0001e8f4 @ 0001e8f4 size=76 ===== */

undefined2 FUN_0001e8f4(undefined1 *param_1)

{
  return CONCAT11(*param_1,param_1[1]);
}



/* ===== FUN_0001e940 @ 0001e940 size=544 ===== */

int FUN_0001e940(int param_1,undefined1 *param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  byte *local_20;
  int local_10;
  int local_c;
  
  if (*(int *)(DAT_0001eb60 + 0x1e968) == 0) {
    FUN_0001e600();
  }
  *param_2 = *(undefined1 *)(param_1 + 2);
  local_20 = param_2 + 2;
  param_2[1] = *(undefined1 *)(param_1 + 3);
  local_10 = 0x20;
  for (local_c = 2; local_c < param_3; local_c = local_c + 1) {
    bVar1 = FUN_0001e870(param_1,local_10);
    local_10 = local_10 + (uint)*(byte *)(DAT_0001eb64 + (uint)bVar1 * 3 + 0x1e9e1);
    if (*(char *)(DAT_0001eb68 + 0x1ea14 + (uint)bVar1 * 3) == '\0') {
      iVar2 = (uint)local_20[-2] + param_4 * *(char *)(DAT_0001eb6c + (uint)bVar1 * 3 + 0x1eab2);
      if (iVar2 < 0x100) {
        if (iVar2 < 0) {
          bVar1 = 0;
        }
        else {
          bVar1 = (byte)iVar2;
        }
      }
      else {
        bVar1 = 0xff;
      }
      *local_20 = bVar1;
    }
    else {
      bVar1 = FUN_0001e870(param_1,local_10);
      local_10 = local_10 + param_5;
      *local_20 = bVar1 & ~(byte)(0xff >> (param_5 & 0xff));
    }
    local_20 = local_20 + 1;
  }
  iVar2 = local_10 + 0x1e;
  if (-1 < local_10 + 0xf) {
    iVar2 = local_10 + 0xf;
  }
  return (iVar2 >> 4) << 1;
}



/* ===== FUN_0001eb70 @ 0001eb70 size=564 ===== */

undefined4
FUN_0001eb70(int param_1,int param_2,int param_3,void *param_4,size_t param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  void *local_28;
  int local_20;
  int local_c;
  
  local_c = 0;
  local_28 = param_4;
  local_20 = param_2;
  do {
    if (param_6 <= local_c) {
      return 0;
    }
    if ((uint)(param_2 + param_3) < local_20 + 2U) {
      snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_0001eda4 + 0x1ebd0));
      return 0xffffffff;
    }
    uVar1 = FUN_0001e8f4(local_20);
    if (uVar1 == 0x2dd2) {
      iVar2 = FUN_0001e940(local_20,local_28,param_5,9,5);
      local_20 = local_20 + iVar2;
    }
    else if (uVar1 < 0x2dd3) {
      if (uVar1 == 0xff0) {
        memcpy(local_28,(void *)(local_20 + 2),param_5);
        local_20 = local_20 + param_5 + 2;
      }
      else {
        if (uVar1 != 0x1ee1) {
LAB_0001ed44:
          snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_0001eda8 + 0x1ed5c),(uint)uVar1);
          return 0xffffffff;
        }
        iVar2 = FUN_0001e940(local_20,local_28,param_5,5,6);
        local_20 = local_20 + iVar2;
      }
    }
    else if (uVar1 == 0x3cc3) {
      iVar2 = FUN_0001e940(local_20,local_28,param_5,0x11,4);
      local_20 = local_20 + iVar2;
    }
    else {
      if (uVar1 != 0x4bb4) goto LAB_0001ed44;
      memcpy(local_28,(void *)((int)local_28 + param_5 * -2),param_5);
      local_20 = local_20 + 2;
    }
    local_28 = (void *)((int)local_28 + param_5);
    local_c = local_c + 1;
  } while( true );
}



/* ===== FUN_0001edac @ 0001edac size=536 ===== */

void FUN_0001edac(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 local_c;
  
  for (local_c = 0; (int)local_c < 0x100; local_c = local_c + 1) {
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    if ((local_c & 0x80) == 0) {
      uVar2 = 0;
      uVar3 = 1;
    }
    else if ((local_c & 0xe0) == 0xc0) {
      uVar2 = 0xfd;
      uVar3 = 3;
    }
    else if ((local_c & 0xe0) == 0xa0) {
      uVar2 = 3;
      uVar3 = 3;
    }
    else if ((local_c & 0xf0) == 0x80) {
      uVar2 = 8;
      uVar3 = 4;
    }
    else if ((local_c & 0xf0) == 0x90) {
      uVar2 = 0xf8;
      uVar3 = 4;
    }
    else if ((local_c & 0xf0) == 0xf0) {
      uVar2 = 0xec;
      uVar3 = 4;
    }
    else if ((local_c & 0xf8) == 0xe0) {
      uVar2 = 0x14;
      uVar3 = 5;
    }
    else if ((local_c & 0xf8) == 0xe8) {
      uVar1 = 1;
      uVar2 = 0;
      uVar3 = 5;
    }
    *(undefined1 *)(DAT_0001efc4 + 0x1ef14 + local_c * 3) = uVar1;
    *(undefined1 *)(DAT_0001efc8 + local_c * 3 + 0x1ef42) = uVar2;
    *(undefined1 *)(DAT_0001efcc + local_c * 3 + 0x1ef71) = uVar3;
  }
  *(undefined4 *)(DAT_0001efd0 + 0x1efb0) = 1;
  return;
}



/* ===== FUN_0001efd4 @ 0001efd4 size=132 ===== */

byte FUN_0001efd4(int param_1,uint param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + (param_2 >> 3));
  return *pcVar1 << (param_2 & 7) | (byte)((int)(uint)(byte)pcVar1[1] >> (8 - (param_2 & 7) & 0xff))
  ;
}



/* ===== FUN_0001f058 @ 0001f058 size=1216 ===== */

undefined4
FUN_0001f058(undefined4 *param_1,int param_2,int param_3,undefined1 *param_4,int param_5,int param_6
            )

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *local_38;
  undefined8 local_28;
  byte local_1d;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  byte local_19;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_28 = 0x8000000;
  if (*(int *)(DAT_0001f518 + 0x1f094) == 0) {
    FUN_0001edac();
  }
  param_2 = param_2 + 0xc;
  local_18 = 0;
  local_c = 0;
  local_38 = param_4;
  while( true ) {
    if (param_6 <= local_c) {
      param_1[0xd5e] = 0;
      return 0;
    }
    local_10 = 0;
    if (local_c < 2) {
      local_1c = FUN_0001efd4(param_2,local_18);
      local_18 = local_18 + 8;
      *local_38 = local_1c;
      local_1c = FUN_0001efd4(param_2,local_18);
      local_18 = local_18 + 8;
      local_38[1] = local_1c;
      local_10 = local_10 + 2;
      local_38 = local_38 + 2;
    }
    for (; local_10 < param_5; local_10 = local_10 + 1) {
      local_1c = FUN_0001efd4(param_2,local_18);
      local_18 = local_18 + (uint)*(byte *)(DAT_0001f51c + (uint)local_1c * 3 + 0x1f17d);
      if (*(char *)(DAT_0001f520 + 0x1f1b0 + (uint)local_1c * 3) == '\0') {
        iVar2 = (int)*(char *)(DAT_0001f524 + (uint)local_1c * 3 + 0x1f20e);
        local_1d = local_38[-2];
        if (local_c < 2) {
          local_14 = iVar2 + (uint)local_1d;
        }
        else {
          local_1a = local_38[param_5 * -2 + -2];
          local_19 = local_38[param_5 * -2];
          local_1b = local_38[param_5 * -2 + 2];
          if (local_10 < 2) {
            local_14 = iVar2 + ((uint)local_19 + (uint)local_1b) / 2;
          }
          else if (local_10 < param_5 + -2) {
            local_1a = local_1a >> 1;
            local_1b = local_1b >> 1;
            local_14 = iVar2 + ((uint)local_1d + (uint)local_19 + (uint)local_1a + (uint)local_1b +
                               1) / 3;
          }
          else {
            local_14 = iVar2 + ((uint)local_19 + (uint)local_1d + (uint)local_1a + 1) / 3;
          }
        }
      }
      else {
        local_1c = FUN_0001efd4(param_2,local_18);
        local_14 = local_1c & 0xf8;
        local_18 = local_18 + 5;
      }
      if ((int)local_14 < 0) {
        uVar1 = 0;
      }
      else {
        uVar3 = local_14;
        if (0xfe < (int)local_14) {
          uVar3 = 0xff;
        }
        uVar1 = (undefined1)uVar3;
      }
      *local_38 = uVar1;
      local_38 = local_38 + 1;
    }
    iVar2 = local_18 + 6;
    if (-1 < local_18 + -1) {
      iVar2 = local_18 + -1;
    }
    if (param_3 + -0xc <= iVar2 >> 3) break;
    local_c = local_c + 1;
  }
  param_1[0xd5e] = param_1[0xd5e] + 1;
  if (param_1[0xd5e] == 3) {
    syscall(0x36,*param_1,0xc008561b,&local_28);
    local_28 = CONCAT44(local_28._4_4_ + 1,(undefined4)local_28);
    syscall(0x36,*param_1,0xc008561c,&local_28);
    param_1[0xd5e] = 0;
    return 0;
  }
  snprintf((char *)(param_1 + 6),0x100,(char *)(DAT_0001f528 + 0x1f4c8));
  return 0xffffffff;
}



/* ===== FUN_0001f52c @ 0001f52c size=204 ===== */

void FUN_0001f52c(int param_1,void *param_2,int param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  local_14 = (void *)(param_1 + *(int *)(param_3 + 0x14) * *(int *)(param_3 + 8));
  local_18 = param_2;
  for (local_c = 0; local_c < *(uint *)(param_3 + 8); local_c = local_c + 1) {
    local_14 = (void *)((int)local_14 - *(int *)(param_3 + 0x14));
    memcpy(local_18,local_14,*(int *)(param_3 + 4) * 3);
    local_18 = (void *)((int)local_18 + *(int *)(param_3 + 4) * 3);
  }
  return;
}



/* ===== FUN_0001f5f8 @ 0001f5f8 size=520 ===== */

void FUN_0001f5f8(int param_1,void *param_2,int param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  local_14 = (void *)(param_1 + *(int *)(param_3 + 0x14) * *(int *)(param_3 + 8));
  local_18 = param_2;
  for (local_c = 0; local_c < *(uint *)(param_3 + 8); local_c = local_c + 1) {
    local_14 = (void *)((int)local_14 - *(int *)(param_3 + 0x14));
    memcpy(local_18,local_14,*(size_t *)(param_3 + 4));
    local_18 = (void *)((int)local_18 + *(int *)(param_3 + 4));
  }
  local_14 = (void *)((int)local_14 +
                     ((uint)(*(int *)(param_3 + 0x14) * *(int *)(param_3 + 8) * 5) >> 2));
  for (local_c = 0; local_c < *(uint *)(param_3 + 8) >> 1; local_c = local_c + 1) {
    local_14 = (void *)((int)local_14 - (*(uint *)(param_3 + 0x14) >> 1));
    memcpy(local_18,local_14,*(uint *)(param_3 + 4) >> 1);
    local_18 = (void *)((int)local_18 + (*(uint *)(param_3 + 4) >> 1));
  }
  local_14 = (void *)((int)local_14 +
                     ((uint)(*(int *)(param_3 + 0x14) * *(int *)(param_3 + 8)) >> 1));
  for (local_c = 0; local_c < *(uint *)(param_3 + 8) >> 1; local_c = local_c + 1) {
    local_14 = (void *)((int)local_14 - (*(uint *)(param_3 + 0x14) >> 1));
    memcpy(local_18,local_14,*(uint *)(param_3 + 4) >> 1);
    local_18 = (void *)((int)local_18 + (*(uint *)(param_3 + 4) >> 1));
  }
  return;
}



/* ===== FUN_0001f800 @ 0001f800 size=260 ===== */

void FUN_0001f800(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  
  local_18 = param_2;
  local_14 = param_1;
  for (local_10 = 0; local_10 < *(uint *)(param_3 + 8); local_10 = local_10 + 1) {
    local_14 = local_14 + *(int *)(param_3 + 4) * 3;
    for (local_c = 0; local_c < *(uint *)(param_3 + 4); local_c = local_c + 1) {
      *local_18 = local_14[-3];
      local_18[1] = local_14[-2];
      local_18[2] = local_14[-1];
      local_18 = local_18 + 3;
      local_14 = local_14 + -3;
    }
    local_14 = local_14 + *(int *)(param_3 + 0x14);
  }
  return;
}



/* ===== FUN_0001f904 @ 0001f904 size=564 ===== */

void FUN_0001f904(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  
  local_18 = param_2;
  local_14 = param_1;
  for (local_10 = 0; local_10 < *(uint *)(param_3 + 8); local_10 = local_10 + 1) {
    local_14 = local_14 + *(int *)(param_3 + 4);
    for (local_c = 0; local_c < *(uint *)(param_3 + 4); local_c = local_c + 1) {
      local_14 = local_14 + -1;
      *local_18 = *local_14;
      local_18 = local_18 + 1;
    }
    local_14 = local_14 + *(int *)(param_3 + 0x14);
  }
  for (local_10 = 0; local_10 < *(uint *)(param_3 + 8) >> 1; local_10 = local_10 + 1) {
    local_14 = local_14 + (*(uint *)(param_3 + 4) >> 1);
    for (local_c = 0; local_c < *(uint *)(param_3 + 4) >> 1; local_c = local_c + 1) {
      local_14 = local_14 + -1;
      *local_18 = *local_14;
      local_18 = local_18 + 1;
    }
    local_14 = local_14 + (*(uint *)(param_3 + 0x14) >> 1);
  }
  for (local_10 = 0; local_10 < *(uint *)(param_3 + 8) >> 1; local_10 = local_10 + 1) {
    local_14 = local_14 + (*(uint *)(param_3 + 4) >> 1);
    for (local_c = 0; local_c < *(uint *)(param_3 + 4) >> 1; local_c = local_c + 1) {
      local_14 = local_14 + -1;
      *local_18 = *local_14;
      local_18 = local_18 + 1;
    }
    local_14 = local_14 + (*(uint *)(param_3 + 0x14) >> 1);
  }
  return;
}



/* ===== FUN_0001fb38 @ 0001fb38 size=212 ===== */

void FUN_0001fb38(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 *local_18;
  undefined1 *local_14;
  int local_c;
  
  local_14 = (undefined1 *)(param_1 + param_4 * param_3 * 3 + -3);
  local_18 = param_2;
  for (local_c = 0; local_c < param_4 * param_3; local_c = local_c + 1) {
    *local_18 = *local_14;
    local_18[1] = local_14[1];
    local_18[2] = local_14[2];
    local_18 = local_18 + 3;
    local_14 = local_14 + -3;
  }
  return;
}



/* ===== FUN_0001fc0c @ 0001fc0c size=460 ===== */

void FUN_0001fc0c(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_c;
  
  local_18 = param_2;
  local_14 = (undefined1 *)(param_1 + param_4 * param_3 + -1);
  for (local_c = 0; local_c < param_4 * param_3; local_c = local_c + 1) {
    *local_18 = *local_14;
    local_18 = local_18 + 1;
    local_14 = local_14 + -1;
  }
  iVar2 = param_4 * param_3 * 5;
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  local_c = 0;
  local_14 = local_14 + (iVar1 >> 2);
  while( true ) {
    iVar1 = param_4 * param_3;
    iVar2 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 >> 2 <= local_c) break;
    *local_18 = *local_14;
    local_c = local_c + 1;
    local_18 = local_18 + 1;
    local_14 = local_14 + -1;
  }
  local_c = 0;
  local_14 = local_14 + (param_4 * param_3) / 2;
  while( true ) {
    iVar1 = param_4 * param_3;
    iVar2 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 >> 2 <= local_c) break;
    *local_18 = *local_14;
    local_c = local_c + 1;
    local_18 = local_18 + 1;
    local_14 = local_14 + -1;
  }
  return;
}



/* ===== FUN_0001fdd8 @ 0001fdd8 size=292 ===== */

void FUN_0001fdd8(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *local_20;
  int local_10;
  int local_c;
  
  local_20 = param_2;
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      iVar1 = (param_4 * ((param_3 - local_c) + -1) + local_10) * 3;
      *local_20 = *(undefined1 *)(param_1 + iVar1);
      puVar2 = local_20 + 2;
      local_20[1] = *(undefined1 *)(param_1 + iVar1 + 1);
      local_20 = local_20 + 3;
      *puVar2 = *(undefined1 *)(param_1 + iVar1 + 2);
    }
  }
  return;
}



/* ===== FUN_0001fefc @ 0001fefc size=584 ===== */

void FUN_0001fefc(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 *local_28;
  int local_10;
  int local_c;
  
  local_28 = param_2;
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      *local_28 = *(undefined1 *)(param_1 + local_10 + param_4 * ((param_3 - local_c) + -1));
      local_28 = local_28 + 1;
    }
  }
  param_1 = param_1 + param_3 * param_4;
  param_3 = param_3 / 2;
  param_4 = param_4 / 2;
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      *local_28 = *(undefined1 *)(param_1 + local_10 + param_4 * ((param_3 - local_c) + -1));
      local_28 = local_28 + 1;
    }
  }
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      *local_28 = *(undefined1 *)
                   (param_1 + param_3 * param_4 + local_10 + param_4 * ((param_3 - local_c) + -1));
      local_28 = local_28 + 1;
    }
  }
  return;
}



/* ===== FUN_00020144 @ 00020144 size=248 ===== */

void FUN_00020144(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_3 + 8) = uVar1;
  uVar2 = *(uint *)(param_3 + 0xc);
  if (uVar2 != 0x32315659) {
    if (0x32315659 < uVar2) {
      if ((uVar2 == 0x33424752) || (uVar2 == 0x33524742)) {
        FUN_0001fdd8(param_1,param_2,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
      }
      goto LAB_00020228;
    }
    if (uVar2 != 0x32315559) goto LAB_00020228;
  }
  FUN_0001fefc(param_1,param_2,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
LAB_00020228:
  v4lconvert_fixup_fmt(param_3);
  return;
}



/* ===== FUN_0002023c @ 0002023c size=536 ===== */

void FUN_0002023c(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  
  if ((param_5 == 0) || (param_4 == 0)) {
    if (param_4 == 0) {
      if (param_5 == 0) goto LAB_00020440;
      uVar1 = *(uint *)(param_3 + 0xc);
      if (uVar1 != 0x32315659) {
        if (0x32315659 < uVar1) {
          if ((uVar1 == 0x33424752) || (uVar1 == 0x33524742)) {
            FUN_0001f52c(param_1,param_2,param_3);
          }
          goto LAB_00020440;
        }
        if (uVar1 != 0x32315559) goto LAB_00020440;
      }
      FUN_0001f5f8(param_1,param_2,param_3);
      goto LAB_00020440;
    }
    uVar1 = *(uint *)(param_3 + 0xc);
    if (uVar1 != 0x32315659) {
      if (0x32315659 < uVar1) {
        if ((uVar1 == 0x33424752) || (uVar1 == 0x33524742)) {
          FUN_0001f800(param_1,param_2,param_3);
        }
        goto LAB_00020440;
      }
      if (uVar1 != 0x32315559) goto LAB_00020440;
    }
    FUN_0001f904(param_1,param_2,param_3);
    goto LAB_00020440;
  }
  uVar1 = *(uint *)(param_3 + 0xc);
  if (uVar1 != 0x32315659) {
    if (0x32315659 < uVar1) {
      if ((uVar1 == 0x33424752) || (uVar1 == 0x33524742)) {
        FUN_0001fb38(param_1,param_2,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
      }
      goto LAB_00020440;
    }
    if (uVar1 != 0x32315559) goto LAB_00020440;
  }
  FUN_0001fc0c(param_1,param_2,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
LAB_00020440:
  v4lconvert_fixup_fmt(param_3);
  return;
}



/* ===== FUN_00020454 @ 00020454 size=376 ===== */

void FUN_00020454(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  
  local_24 = (undefined1 *)
             (param_1 +
             ((*(uint *)(param_3 + 8) >> 1) - *(int *)(param_4 + 8)) * *(int *)(param_3 + 0x14) +
             ((*(uint *)(param_3 + 4) >> 1) - *(int *)(param_4 + 4)) * 3);
  local_28 = param_2;
  for (local_10 = 0; local_10 < *(uint *)(param_4 + 8); local_10 = local_10 + 1) {
    local_14 = local_24;
    for (local_c = 0; local_c < *(uint *)(param_4 + 4); local_c = local_c + 1) {
      *local_28 = *local_14;
      puVar1 = local_28 + 2;
      local_28[1] = local_14[1];
      local_28 = local_28 + 3;
      *puVar1 = local_14[2];
      local_14 = local_14 + 6;
    }
    local_24 = local_24 + *(int *)(param_3 + 0x14) * 2;
  }
  return;
}



/* ===== FUN_000205cc @ 000205cc size=264 ===== */

void FUN_000205cc(int param_1,void *param_2,int param_3,int param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_c;
  
  local_1c = (void *)(param_1 +
                     ((uint)(*(int *)(param_3 + 8) - *(int *)(param_4 + 8)) >> 1) *
                     *(int *)(param_3 + 0x14) +
                     ((uint)(*(int *)(param_3 + 4) - *(int *)(param_4 + 4)) >> 1) * 3);
  local_20 = param_2;
  for (local_c = 0; local_c < *(uint *)(param_4 + 8); local_c = local_c + 1) {
    memcpy(local_20,local_1c,*(int *)(param_4 + 4) * 3);
    local_1c = (void *)((int)local_1c + *(int *)(param_3 + 0x14));
    local_20 = (void *)((int)local_20 + *(int *)(param_4 + 0x14));
  }
  return;
}



/* ===== FUN_000206d4 @ 000206d4 size=820 ===== */

void FUN_000206d4(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *local_30;
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  
  uVar1 = *(uint *)(param_4 + 8) >> 1;
  uVar2 = *(uint *)(param_4 + 4) >> 1;
  uVar3 = (*(uint *)(param_3 + 4) >> 1) - *(int *)(param_4 + 4) & 0xfffffffe;
  uVar4 = (*(uint *)(param_3 + 8) >> 1) - *(int *)(param_4 + 8) & 0xfffffffe;
  local_14 = (undefined1 *)(param_1 + uVar4 * *(int *)(param_3 + 0x14) + uVar3);
  local_30 = param_2;
  for (local_10 = 0; local_10 < *(uint *)(param_4 + 8); local_10 = local_10 + 1) {
    local_18 = local_14;
    for (local_c = 0; local_c < *(uint *)(param_4 + 4); local_c = local_c + 1) {
      *local_30 = *local_18;
      local_18 = local_18 + 2;
      local_30 = local_30 + 1;
    }
    local_14 = local_14 + *(int *)(param_3 + 0x14) * 2;
  }
  local_14 = (undefined1 *)
             (param_1 +
             *(int *)(param_3 + 0x14) * *(int *)(param_3 + 8) +
             ((uint)(*(int *)(param_3 + 0x14) * ((int)uVar4 / 2)) >> 1) + (int)uVar3 / 2);
  for (local_10 = 0; (int)local_10 < (int)uVar1; local_10 = local_10 + 1) {
    local_18 = local_14;
    for (local_c = 0; (int)local_c < (int)uVar2; local_c = local_c + 1) {
      *local_30 = *local_18;
      local_18 = local_18 + 2;
      local_30 = local_30 + 1;
    }
    local_14 = local_14 + *(int *)(param_3 + 0x14);
  }
  local_14 = (undefined1 *)
             (param_1 +
             ((uint)(*(int *)(param_3 + 0x14) * *(int *)(param_3 + 8) * 5) >> 2) +
             ((uint)(*(int *)(param_3 + 0x14) * ((int)uVar4 / 2)) >> 1) + (int)uVar3 / 2);
  for (local_10 = 0; (int)local_10 < (int)uVar1; local_10 = local_10 + 1) {
    local_18 = local_14;
    for (local_c = 0; (int)local_c < (int)uVar2; local_c = local_c + 1) {
      *local_30 = *local_18;
      local_18 = local_18 + 2;
      local_30 = local_30 + 1;
    }
    local_14 = local_14 + *(int *)(param_3 + 0x14);
  }
  return;
}



/* ===== FUN_00020a08 @ 00020a08 size=696 ===== */

void FUN_00020a08(int param_1,void *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = (uint)(*(int *)(param_3 + 4) - *(int *)(param_4 + 4)) >> 1 & 0xfffffffe;
  uVar2 = (uint)(*(int *)(param_3 + 8) - *(int *)(param_4 + 8)) >> 1 & 0xfffffffe;
  local_10 = (void *)(param_1 + uVar2 * *(int *)(param_3 + 0x14) + uVar1);
  local_20 = param_2;
  for (local_c = 0; local_c < *(uint *)(param_4 + 8); local_c = local_c + 1) {
    memcpy(local_20,local_10,*(size_t *)(param_4 + 4));
    local_10 = (void *)((int)local_10 + *(int *)(param_3 + 0x14));
    local_20 = (void *)((int)local_20 + *(int *)(param_4 + 0x14));
  }
  local_10 = (void *)(param_1 +
                     *(int *)(param_3 + 0x14) * *(int *)(param_3 + 8) +
                     (*(int *)(param_3 + 0x14) * (uVar2 / 2) >> 1) + uVar1 / 2);
  for (local_c = 0; local_c < *(uint *)(param_4 + 8) >> 1; local_c = local_c + 1) {
    memcpy(local_20,local_10,*(uint *)(param_4 + 4) >> 1);
    local_10 = (void *)((int)local_10 + (*(uint *)(param_3 + 0x14) >> 1));
    local_20 = (void *)((int)local_20 + (*(uint *)(param_4 + 0x14) >> 1));
  }
  local_10 = (void *)(param_1 +
                     ((uint)(*(int *)(param_3 + 0x14) * *(int *)(param_3 + 8) * 5) >> 2) +
                     (*(int *)(param_3 + 0x14) * (uVar2 / 2) >> 1) + uVar1 / 2);
  for (local_c = 0; local_c < *(uint *)(param_4 + 8) >> 1; local_c = local_c + 1) {
    memcpy(local_20,local_10,*(uint *)(param_4 + 4) >> 1);
    local_10 = (void *)((int)local_10 + (*(uint *)(param_3 + 0x14) >> 1));
    local_20 = (void *)((int)local_20 + (*(uint *)(param_4 + 0x14) >> 1));
  }
  return;
}



/* ===== FUN_00020cc0 @ 00020cc0 size=568 ===== */

void FUN_00020cc0(void *param_1,void *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_c;
  
  uVar1 = (uint)(*(int *)(param_4 + 4) - *(int *)(param_3 + 4)) >> 1;
  uVar2 = (uint)(*(int *)(param_4 + 8) - *(int *)(param_3 + 8)) >> 1;
  local_20 = param_2;
  for (local_c = 0; (int)local_c < (int)uVar2; local_c = local_c + 1) {
    memset(local_20,0,*(int *)(param_4 + 4) * 3);
    local_20 = (void *)((int)local_20 + *(int *)(param_4 + 0x14));
  }
  local_1c = param_1;
  for (local_c = 0; local_c < *(uint *)(param_3 + 8); local_c = local_c + 1) {
    memset(local_20,0,uVar1 * 3);
    local_20 = (void *)((int)local_20 + uVar1 * 3);
    memcpy(local_20,local_1c,*(int *)(param_3 + 4) * 3);
    local_1c = (void *)((int)local_1c + *(int *)(param_3 + 0x14));
    local_20 = (void *)((int)local_20 + *(int *)(param_3 + 4) * 3);
    memset(local_20,0,uVar1 * 3);
    local_20 = (void *)((int)local_20 +
                       *(int *)(param_4 + 0x14) + (*(int *)(param_3 + 4) + uVar1) * -3);
  }
  for (local_c = 0; (int)local_c < (int)uVar2; local_c = local_c + 1) {
    memset(local_20,0,*(int *)(param_4 + 4) * 3);
    local_20 = (void *)((int)local_20 + *(int *)(param_4 + 0x14));
  }
  return;
}



/* ===== FUN_00020ef8 @ 00020ef8 size=1436 ===== */

void FUN_00020ef8(void *param_1,void *param_2,int param_3,int param_4)

{
  uint __n;
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_c;
  
  __n = (uint)(*(int *)(param_4 + 4) - *(int *)(param_3 + 4)) >> 1 & 0xfffffffe;
  uVar1 = (uint)(*(int *)(param_4 + 8) - *(int *)(param_3 + 8)) >> 1 & 0xfffffffe;
  local_20 = param_2;
  for (local_c = 0; (int)local_c < (int)uVar1; local_c = local_c + 1) {
    memset(local_20,0x10,*(size_t *)(param_4 + 4));
    local_20 = (void *)((int)local_20 + *(int *)(param_4 + 0x14));
  }
  local_1c = param_1;
  for (local_c = 0; local_c < *(uint *)(param_3 + 8); local_c = local_c + 1) {
    memset(local_20,0x10,__n);
    memcpy((void *)((int)local_20 + __n),local_1c,*(size_t *)(param_3 + 4));
    local_1c = (void *)((int)local_1c + *(int *)(param_3 + 0x14));
    local_20 = (void *)((int)((int)local_20 + __n) + *(int *)(param_3 + 4));
    memset(local_20,0x10,__n);
    local_20 = (void *)((int)local_20 + (*(int *)(param_4 + 0x14) - (*(int *)(param_3 + 4) + __n)));
  }
  for (local_c = 0; (int)local_c < (int)uVar1; local_c = local_c + 1) {
    memset(local_20,0x10,*(size_t *)(param_4 + 4));
    local_20 = (void *)((int)local_20 + *(int *)(param_4 + 0x14));
  }
  for (local_c = 0; (int)local_c < (int)(uVar1 / 2); local_c = local_c + 1) {
    memset(local_20,0x80,*(uint *)(param_4 + 4) >> 1);
    local_20 = (void *)((int)local_20 + (*(uint *)(param_4 + 0x14) >> 1));
  }
  for (local_c = 0; local_c < *(uint *)(param_3 + 8) >> 1; local_c = local_c + 1) {
    memset(local_20,0x80,__n / 2);
    local_20 = (void *)((int)local_20 + __n / 2);
    memcpy(local_20,local_1c,*(uint *)(param_3 + 4) >> 1);
    local_1c = (void *)((int)local_1c + (*(uint *)(param_3 + 0x14) >> 1));
    local_20 = (void *)((int)local_20 + (*(uint *)(param_3 + 4) >> 1));
    memset(local_20,0x80,__n / 2);
    local_20 = (void *)((int)local_20 +
                       (*(int *)(param_4 + 0x14) - (*(int *)(param_3 + 4) + __n) >> 1));
  }
  for (local_c = 0; (int)local_c < (int)(uVar1 / 2); local_c = local_c + 1) {
    memset(local_20,0x80,*(uint *)(param_4 + 4) >> 1);
    local_20 = (void *)((int)local_20 + (*(uint *)(param_4 + 0x14) >> 1));
  }
  for (local_c = 0; (int)local_c < (int)(uVar1 / 2); local_c = local_c + 1) {
    memset(local_20,0x80,*(uint *)(param_4 + 4) >> 1);
    local_20 = (void *)((int)local_20 + (*(uint *)(param_4 + 0x14) >> 1));
  }
  for (local_c = 0; local_c < *(uint *)(param_3 + 8) >> 1; local_c = local_c + 1) {
    memset(local_20,0x80,__n / 2);
    local_20 = (void *)((int)local_20 + __n / 2);
    memcpy(local_20,local_1c,*(uint *)(param_3 + 4) >> 1);
    local_1c = (void *)((int)local_1c + (*(uint *)(param_3 + 0x14) >> 1));
    local_20 = (void *)((int)local_20 + (*(uint *)(param_3 + 4) >> 1));
    memset(local_20,0x80,__n / 2);
    local_20 = (void *)((int)local_20 +
                       (*(int *)(param_4 + 0x14) - (*(int *)(param_3 + 4) + __n) >> 1));
  }
  for (local_c = 0; (int)local_c < (int)(uVar1 / 2); local_c = local_c + 1) {
    memset(local_20,0x80,*(uint *)(param_4 + 4) >> 1);
    local_20 = (void *)((int)local_20 + (*(uint *)(param_4 + 0x14) >> 1));
  }
  return;
}



/* ===== FUN_00021494 @ 00021494 size=492 ===== */

void FUN_00021494(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_4 + 0xc);
  if (uVar1 != 0x32315659) {
    if (0x32315659 < uVar1) {
      if ((uVar1 != 0x33424752) && (uVar1 != 0x33524742)) {
        return;
      }
      if ((*(uint *)(param_3 + 4) <= *(uint *)(param_4 + 4)) &&
         (*(uint *)(param_3 + 8) <= *(uint *)(param_4 + 8))) {
        FUN_00020cc0(param_1,param_2,param_3,param_4);
        return;
      }
      if (((uint)(*(int *)(param_4 + 4) << 1) <= *(uint *)(param_3 + 4)) &&
         ((uint)(*(int *)(param_4 + 8) << 1) <= *(uint *)(param_3 + 8))) {
        FUN_00020454(param_1,param_2,param_3,param_4);
        return;
      }
      FUN_000205cc(param_1,param_2,param_3,param_4);
      return;
    }
    if (uVar1 != 0x32315559) {
      return;
    }
  }
  if ((*(uint *)(param_4 + 4) < *(uint *)(param_3 + 4)) ||
     (*(uint *)(param_4 + 8) < *(uint *)(param_3 + 8))) {
    if ((*(uint *)(param_3 + 4) < (uint)(*(int *)(param_4 + 4) << 1)) ||
       (*(uint *)(param_3 + 8) < (uint)(*(int *)(param_4 + 8) << 1))) {
      FUN_00020a08(param_1,param_2,param_3,param_4);
    }
    else {
      FUN_000206d4(param_1,param_2,param_3,param_4);
    }
  }
  else {
    FUN_00020ef8(param_1,param_2,param_3,param_4);
  }
  return;
}



/* ===== FUN_00021680 @ 00021680 size=196 ===== */

uint FUN_00021680(int param_1,uint param_2)

{
  undefined4 local_c;
  
  param_1 = (1 << (param_2 - 1 & 0xff)) + param_1;
  if (param_1 < 0) {
    local_c = param_1 >> (param_2 & 0xff) | -1 << (0x20 - param_2 & 0xff);
  }
  else {
    local_c = param_1 >> (param_2 & 0xff);
  }
  local_c = local_c + 0x80;
  if ((int)local_c < 0x100) {
    if ((int)local_c < 0) {
      local_c = 0;
    }
    else {
      local_c = local_c & 0xff;
    }
  }
  else {
    local_c = 0xff;
  }
  return local_c;
}



/* ===== FUN_00021744 @ 00021744 size=2264 ===== */

void FUN_00021744(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_16c [8];
  float local_14c [8];
  float local_12c [8];
  float local_10c [8];
  float local_ec [8];
  float local_cc [8];
  float local_ac [8];
  float local_8c [8];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  int local_24;
  undefined1 *local_20;
  float *local_1c;
  float *local_18;
  short *local_14;
  
  local_14 = (short *)(param_1 + 0x16);
  local_18 = *(float **)(param_1 + 8);
  local_1c = local_16c;
  for (local_24 = 8; 0 < local_24; local_24 = local_24 + -1) {
    if ((((local_14[8] == 0) && (local_14[0x10] == 0)) && (local_14[0x18] == 0)) &&
       (((local_14[0x20] == 0 && (local_14[0x28] == 0)) &&
        ((local_14[0x30] == 0 && (local_14[0x38] == 0)))))) {
      local_28 = (float)VectorSignedToFloat((int)*local_14,(byte)(in_fpscr >> 0x16) & 3);
      local_28 = local_28 * *local_18;
      *local_1c = local_28;
      local_1c[8] = local_28;
      local_1c[0x10] = local_28;
      local_1c[0x18] = local_28;
      local_1c[0x20] = local_28;
      local_1c[0x28] = local_28;
      local_1c[0x30] = local_28;
      local_1c[0x38] = local_28;
    }
    else {
      fVar3 = (float)VectorSignedToFloat((int)*local_14,(byte)(in_fpscr >> 0x16) & 3);
      fVar4 = (float)VectorSignedToFloat((int)local_14[0x10],(byte)(in_fpscr >> 0x16) & 3);
      fVar5 = (float)VectorSignedToFloat((int)local_14[0x20],(byte)(in_fpscr >> 0x16) & 3);
      fVar6 = (float)VectorSignedToFloat((int)local_14[0x30],(byte)(in_fpscr >> 0x16) & 3);
      fStack_38 = fVar3 * *local_18 + fVar5 * local_18[0x20];
      fStack_34 = fVar3 * *local_18 - fVar5 * local_18[0x20];
      fVar3 = fVar4 * local_18[0x10] + fVar6 * local_18[0x30];
      fVar4 = (fVar4 * local_18[0x10] - fVar6 * local_18[0x30]) * DAT_00021c94 - fVar3;
      fStack_2c = fStack_38 + fVar3;
      fStack_38 = fStack_38 - fVar3;
      fStack_30 = fStack_34 + fVar4;
      fStack_34 = fStack_34 - fVar4;
      fVar3 = (float)VectorSignedToFloat((int)local_14[8],(byte)(in_fpscr >> 0x16) & 3);
      fVar4 = (float)VectorSignedToFloat((int)local_14[0x18],(byte)(in_fpscr >> 0x16) & 3);
      fVar5 = (float)VectorSignedToFloat((int)local_14[0x28],(byte)(in_fpscr >> 0x16) & 3);
      fVar6 = (float)VectorSignedToFloat((int)local_14[0x38],(byte)(in_fpscr >> 0x16) & 3);
      fVar7 = fVar5 * local_18[0x28] + fVar4 * local_18[0x18];
      fVar4 = fVar5 * local_18[0x28] - fVar4 * local_18[0x18];
      fVar5 = fVar3 * local_18[8] + fVar6 * local_18[0x38];
      fVar3 = fVar3 * local_18[8] - fVar6 * local_18[0x38];
      fStack_58 = fVar5 + fVar7;
      fVar6 = (fVar4 + fVar3) * DAT_00021c98;
      fStack_54 = (fVar6 + fVar4 * DAT_00021ca0) - fStack_58;
      fStack_50 = (fVar5 - fVar7) * DAT_00021c94 - fStack_54;
      fStack_4c = (fVar3 * DAT_00021c9c - fVar6) + fStack_50;
      *local_1c = fStack_2c + fStack_58;
      local_1c[0x38] = fStack_2c - fStack_58;
      local_1c[8] = fStack_30 + fStack_54;
      local_1c[0x30] = fStack_30 - fStack_54;
      local_1c[0x10] = fStack_34 + fStack_50;
      local_1c[0x28] = fStack_34 - fStack_50;
      local_1c[0x20] = fStack_38 + fStack_4c;
      local_1c[0x18] = fStack_38 - fStack_4c;
    }
    local_14 = local_14 + 1;
    local_18 = local_18 + 1;
    local_1c = local_1c + 1;
  }
  local_1c = local_16c;
  local_20 = param_2;
  for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
    fStack_44 = local_1c[2] + local_1c[6];
    fStack_34 = (local_1c[2] - local_1c[6]) * DAT_00021c94 - fStack_44;
    fStack_2c = *local_1c + local_1c[4] + fStack_44;
    fStack_38 = (*local_1c + local_1c[4]) - fStack_44;
    fStack_30 = (*local_1c - local_1c[4]) + fStack_34;
    fStack_34 = (*local_1c - local_1c[4]) - fStack_34;
    fStack_5c = local_1c[5] + local_1c[3];
    fStack_60 = local_1c[5] - local_1c[3];
    fStack_64 = local_1c[1] + local_1c[7];
    fStack_68 = local_1c[1] - local_1c[7];
    fStack_58 = fStack_64 + fStack_5c;
    fStack_40 = (fStack_64 - fStack_5c) * DAT_00021c94;
    fStack_6c = (fStack_60 + fStack_68) * DAT_00021c98;
    fStack_3c = fStack_68 * DAT_00021c9c - fStack_6c;
    fStack_48 = fStack_6c + fStack_60 * DAT_00021ca0;
    fStack_54 = fStack_48 - fStack_58;
    fStack_50 = fStack_40 - fStack_54;
    fStack_4c = fStack_3c + fStack_50;
    uVar1 = FUN_00021680((int)(fStack_2c + fStack_58),3);
    *local_20 = uVar1;
    puVar2 = local_20 + 7;
    uVar1 = FUN_00021680((int)(fStack_2c - fStack_58),3);
    *puVar2 = uVar1;
    puVar2 = local_20 + 1;
    uVar1 = FUN_00021680((int)(fStack_30 + fStack_54),3);
    *puVar2 = uVar1;
    puVar2 = local_20 + 6;
    uVar1 = FUN_00021680((int)(fStack_30 - fStack_54),3);
    *puVar2 = uVar1;
    puVar2 = local_20 + 2;
    uVar1 = FUN_00021680((int)(fStack_34 + fStack_50),3);
    *puVar2 = uVar1;
    puVar2 = local_20 + 5;
    uVar1 = FUN_00021680((int)(fStack_34 - fStack_50),3);
    *puVar2 = uVar1;
    puVar2 = local_20 + 4;
    uVar1 = FUN_00021680((int)(fStack_38 + fStack_4c),3);
    *puVar2 = uVar1;
    puVar2 = local_20 + 3;
    uVar1 = FUN_00021680((int)(fStack_38 - fStack_4c),3);
    *puVar2 = uVar1;
    local_1c = local_1c + 8;
    local_20 = local_20 + param_3;
  }
  return;
}



/* ===== FUN_0002202c @ 0002202c size=132 ===== */

void FUN_0002202c(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  if (*param_1 < 8) {
    iVar1 = *(int *)(DAT_000220b0 + 0x22058);
    pbVar2 = *(byte **)(DAT_000220b4 + 0x22068);
    *(byte **)(DAT_000220b8 + 0x22078) = pbVar2 + 1;
    *(uint *)(DAT_000220bc + 0x2208c) = iVar1 << 8 | (uint)*pbVar2;
    *param_1 = *param_1 + 8;
  }
  return;
}



/* ===== FUN_000220c0 @ 000220c0 size=172 ===== */

uint FUN_000220c0(uint *param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = *(int *)(DAT_0002216c + 0x220e0);
  pbVar2 = *(byte **)(DAT_00022170 + 0x220f0);
  *(byte **)(DAT_00022174 + 0x22100) = pbVar2 + 1;
  *(uint *)(DAT_00022178 + 0x22114) = iVar1 << 8 | (uint)*pbVar2;
  *param_1 = *param_1 - param_2;
  return *(uint *)(DAT_0002217c + 0x22138) >> (*param_1 & 0xff) & (1 << (param_2 & 0xff)) - 1U;
}



/* ===== FUN_00022180 @ 00022180 size=108 ===== */

uint FUN_00022180(uint *param_1,uint param_2)

{
  *param_1 = *param_1 - param_2;
  return *(uint *)(DAT_000221ec + 0x221b8) >> (*param_1 & 0xff) & (1 << (param_2 & 0xff)) - 1U;
}



/* ===== FUN_000221f0 @ 000221f0 size=72 ===== */

undefined4 FUN_000221f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000220c0(param_1,4);
  uVar2 = *(undefined4 *)(DAT_00022238 + 0x2221c + iVar1 * 4);
  FUN_0002202c(param_1);
  return uVar2;
}



/* ===== FUN_0002223c @ 0002223c size=108 ===== */

undefined4 FUN_0002223c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000220c0(param_1,7);
  FUN_0002202c(param_1);
  if (iVar1 - 0x44U < 0x30) {
    uVar2 = *(undefined4 *)
             (DAT_000222ac + 0x2229c + *(int *)(DAT_000222a8 + 0x2228c + (iVar1 - 0x44U) * 4) * 4);
  }
  else {
    uVar2 = 0xff;
  }
  return uVar2;
}



/* ===== FUN_000222b0 @ 000222b0 size=184 ===== */

undefined4 FUN_000222b0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0xfe) {
    iVar1 = FUN_000220c0(param_1,1);
    if (iVar1 == 0) {
      uVar2 = 7;
    }
    else {
      uVar2 = 0xfffffff8;
    }
  }
  else if (param_2 == 0xff) {
    iVar1 = FUN_000220c0(param_1,7);
    if (iVar1 - 0x48U < 0x2c) {
      FUN_0002202c(param_1);
      uVar2 = *(undefined4 *)
               (DAT_0002236c + 0x2235c + *(int *)(DAT_00022368 + 0x2234c + (iVar1 - 0x48U) * 4) * 4)
      ;
    }
    else {
      uVar2 = 0xff;
    }
  }
  else {
    uVar2 = 0xff;
  }
  return uVar2;
}



/* ===== FUN_00022370 @ 00022370 size=404 ===== */

int FUN_00022370(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0xfd) {
    iVar1 = FUN_000220c0(param_1,1);
    if (iVar1 == 0) {
      return 0xc;
    }
    return -0xd;
  }
  if (param_2 == 0xfc) {
    iVar1 = FUN_000220c0(param_1,1);
    if (iVar1 == 0) {
      return 0xd;
    }
    return -0xe;
  }
  if (param_2 == 0xfe) {
    uVar2 = FUN_000220c0(param_1,2);
    switch(uVar2) {
    case 0:
      param_2 = 0xe;
      break;
    case 1:
      param_2 = -0xf;
      break;
    case 2:
      param_2 = 0xf;
      break;
    case 3:
      param_2 = -0x10;
      break;
    default:
      goto switchD_0002240c_default;
    }
  }
  else {
switchD_0002240c_default:
    if (param_2 == 0xff) {
      uVar2 = FUN_000220c0(param_1,3);
      switch(uVar2) {
      case 2:
        iVar1 = FUN_00022180(param_1,1);
        if (iVar1 == 0) {
          param_2 = 0x12;
        }
        else {
          param_2 = 0xed;
        }
        break;
      case 3:
        *param_1 = *param_1 + -1;
        param_2 = 0x12;
        break;
      case 4:
        param_2 = 0x10;
        break;
      case 5:
        param_2 = -0x11;
        break;
      case 6:
        param_2 = 0x11;
        break;
      case 7:
        param_2 = -0x12;
        break;
      default:
        param_2 = 0xff;
      }
    }
  }
  return param_2;
}



/* ===== FUN_00022504 @ 00022504 size=356 ===== */

undefined4 FUN_00022504(uint param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 & 0xf0) < 0x80) {
    if ((param_1 & 0xc0) == 0x40) {
      *param_2 = *param_2 + -5;
      uVar1 = *(undefined4 *)(DAT_0002266c + 0x22594 + ((int)param_1 >> 3 & 7U) * 4);
    }
    else if ((param_1 & 0xe0) == 0x20) {
      *param_2 = *param_2 + -6;
      uVar1 = *(undefined4 *)(DAT_00022670 + 0x225d4 + ((int)param_1 >> 2 & 7U) * 4);
    }
    else if ((param_1 & 0xf0) == 0x10) {
      *param_2 = *param_2 + -7;
      uVar1 = *(undefined4 *)(DAT_00022674 + 0x22614 + ((int)param_1 >> 1 & 7U) * 4);
    }
    else if ((param_1 & 0xf8) == 8) {
      *param_2 = *param_2 + -8;
      uVar1 = *(undefined4 *)(DAT_00022678 + 0x22650 + (param_1 & 7) * 4);
    }
    else {
      uVar1 = 0xff;
    }
  }
  else {
    *param_2 = *param_2 + -4;
    uVar1 = *(undefined4 *)(DAT_00022668 + 0x22554 + ((int)param_1 >> 4 & 7U) * 4);
  }
  return uVar1;
}



/* ===== FUN_0002267c @ 0002267c size=660 ===== */

undefined4 FUN_0002267c(uint param_1,int *param_2)

{
  undefined4 uVar1;
  
  *param_2 = *param_2 + -5;
  switch(param_1 & 0xf8) {
  case 0x80:
    uVar1 = 0;
    break;
  case 0x88:
    uVar1 = 0xffffffff;
    break;
  case 0x90:
    uVar1 = 1;
    break;
  case 0x98:
    uVar1 = 0xfffffffe;
    break;
  case 0xa0:
    uVar1 = 2;
    break;
  case 0xa8:
    uVar1 = 0xfffffffd;
    break;
  case 0xb0:
    uVar1 = 3;
    break;
  case 0xb8:
    uVar1 = 0xfffffffc;
    break;
  case 0xc0:
    uVar1 = 4;
    break;
  case 200:
    uVar1 = 0xfffffffb;
    break;
  case 0xd0:
    uVar1 = 5;
    break;
  case 0xd8:
    uVar1 = 0xfffffffa;
    break;
  case 0xe0:
    uVar1 = 6;
    break;
  case 0xe8:
    uVar1 = 0xfffffff9;
    break;
  case 0xf0:
    uVar1 = 7;
    break;
  case 0xf8:
    uVar1 = 0xfffffff8;
    break;
  default:
    *param_2 = *param_2 + -1;
    switch(param_1 & 0xfc) {
    case 0x40:
      uVar1 = 8;
      break;
    case 0x44:
      uVar1 = 0xfffffff7;
      break;
    case 0x48:
      uVar1 = 9;
      break;
    case 0x4c:
      uVar1 = 0xfffffff6;
      break;
    case 0x50:
      uVar1 = 10;
      break;
    case 0x54:
      uVar1 = 0xfffffff5;
      break;
    case 0x58:
      uVar1 = 0xb;
      break;
    case 0x5c:
      uVar1 = 0xfffffff4;
      break;
    case 0x60:
      uVar1 = 0xc;
      break;
    case 100:
      uVar1 = 0xfffffff3;
      break;
    case 0x68:
      uVar1 = 0xd;
      break;
    case 0x6c:
      uVar1 = 0xfffffff2;
      break;
    case 0x70:
      uVar1 = 0xe;
      break;
    case 0x74:
      uVar1 = 0xfffffff1;
      break;
    case 0x78:
      uVar1 = 0xf;
      break;
    case 0x7c:
      uVar1 = 0xfffffff0;
      break;
    default:
      *param_2 = *param_2 + -1;
      switch(param_1 & 0xfe) {
      case 0x20:
        uVar1 = 0x10;
        break;
      case 0x22:
        uVar1 = 0xffffffef;
        break;
      case 0x24:
        uVar1 = 0x11;
        break;
      case 0x26:
        uVar1 = 0xffffffee;
        break;
      case 0x28:
        uVar1 = 0x12;
        break;
      case 0x2a:
        uVar1 = 0xffffffed;
        break;
      case 0x2c:
        uVar1 = 0x13;
        break;
      default:
        *param_2 = *param_2 + 7;
        uVar1 = 0xff;
      }
    }
  }
  return uVar1;
}



/* ===== FUN_00022b80 @ 00022b80 size=2284 ===== */

undefined4 FUN_00022b80(size_t param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  undefined1 *local_20;
  uint local_1c;
  size_t local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_68 = 0;
  local_4c = param_1 + 6;
  local_50 = (1 - local_4c) * 2;
  local_54 = ~local_4c << 1;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 2;
  local_20 = (undefined1 *)param_4;
  memset((void *)(DAT_0002346c + 0x22c0c),0,0x800);
  memset((void *)(DAT_00023470 + 0x22c24),0,0x800);
  memcpy((void *)(param_4 + local_4c * 2 + 3),(void *)(param_3 + 0x14),param_1);
  memcpy((void *)(param_4 + local_4c * 3 + 3),(void *)(param_3 + param_1 + 0x14),param_1);
  *(size_t *)(DAT_00023474 + 0x22ca8) = param_3 + param_1 * 2 + 0x14;
  local_20 = (undefined1 *)(param_4 + local_4c * 4 + 3);
  *(undefined4 *)(DAT_00023478 + 0x22ccc) = 0;
  local_c = 0;
  do {
    iVar4 = param_1 * (param_2 + -2);
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    if (iVar3 >> 5 <= local_c) {
      return 0;
    }
    local_28 = 0;
    FUN_0002202c(&local_68);
    uVar1 = *(uint *)(DAT_0002347c + 0x22cfc) >> (local_68 & 7);
    local_58 = uVar1 & 0xff;
    if ((uVar1 & 0x80) == 0) {
      local_28 = 0;
      local_68 = local_68 - 1;
    }
    else if ((uVar1 & 0xc0) == 0x80) {
      local_28 = 1;
      local_68 = local_68 - 2;
    }
    else if ((uVar1 & 0xc0) == 0xc0) {
      local_28 = 2;
      local_68 = local_68 - 2;
    }
    for (local_24 = 0; (int)local_24 < 0x20; local_24 = local_24 + 1) {
      FUN_0002202c(&local_68);
      local_58 = *(uint *)(DAT_00023480 + 0x22da8) >> (local_68 & 7) & 0xff;
      local_2c = (uint)(byte)local_20[-2];
      local_30 = (uint)(byte)local_20[local_50];
      local_34 = (uint)(byte)local_20[local_54];
      local_3c = *(int *)(DAT_00023484 + 0x22e10 + ((local_34 + 0x100) - local_2c) * 4);
      local_40 = *(int *)(DAT_00023488 + 0x22e30 + ((local_10 + 0x100) - local_34) * 4);
      local_44 = *(int *)(DAT_0002348c + 0x22e50 + ((local_30 + 0x100) - local_10) * 4);
      if ((int)local_18 < 2) {
        local_34 = (uint)(byte)local_20[local_4c * -2];
        local_30 = (uint)(byte)local_20[local_50];
        local_40 = 0;
        local_3c = 0;
        local_44 = *(int *)(DAT_00023490 + 0x22ed0 + ((local_30 + 0x100) - local_34) * 4);
        local_2c = local_34;
        local_10 = local_34;
      }
      else if ((int)(param_1 - 2) <= (int)local_18) {
        local_44 = 0;
      }
      local_38 = 4;
      local_5c = local_40 * 8 + local_44 + local_3c * 0x40;
      if ((((((int)(local_10 * 2 + local_2c) < 0x91) && ((local_1c & 1) == 0)) &&
           ((local_24 & 3) == 0)) && ((local_44 < 5 && (local_40 < 5)))) && (local_3c < 5)) {
        local_38 = 1;
      }
      else if (((local_2c < 0x31) && (local_3c < 5)) &&
              ((local_40 < 5 && ((0 < local_3c && (0 < local_40)))))) {
        local_38 = 2;
      }
      else if (local_28 == 1) {
        local_38 = 2;
      }
      else if ((10 < local_40 + local_3c) || (local_28 == 2)) {
        local_38 = 8;
      }
      if (*(int *)(DAT_00023494 + 0x23018 + local_5c * 4) < 7) {
        local_68 = local_68 - *(int *)(DAT_00023498 + 0x23034 + local_58 * 4);
        local_48 = *(int *)(DAT_0002349c + 0x2304c + local_58 * 4);
        if (local_48 == 0xfe) {
          local_48 = FUN_000221f0(&local_68);
        }
      }
      else if (*(int *)(DAT_000234a0 + 0x23080 + local_5c * 4) <
               *(int *)(DAT_000234a4 + 0x23090 + local_5c * 4)) {
        if (*(int *)(DAT_000234b0 + 0x230f8 + local_5c * 4) * 2 <
            *(int *)(DAT_000234b4 + 0x2310c + local_5c * 4)) {
          if (*(int *)(DAT_000234c0 + 0x23178 + local_5c * 4) * 4 <
              *(int *)(DAT_000234c4 + 0x2318c + local_5c * 4)) {
            if (*(int *)(DAT_000234d0 + 0x231f8 + local_5c * 4) * 8 <
                *(int *)(DAT_000234d4 + 0x2320c + local_5c * 4)) {
              local_48 = FUN_0002267c(local_58,&local_68);
            }
            else {
              local_48 = FUN_00022504(local_58,&local_68);
            }
          }
          else {
            local_68 = local_68 - *(int *)(DAT_000234c8 + 0x231a8 + local_58 * 4);
            local_48 = *(int *)(DAT_000234cc + 0x231c0 + local_58 * 4);
            if (local_58 < 4) {
              local_48 = FUN_00022370(&local_68,local_48);
            }
          }
        }
        else {
          local_68 = local_68 - *(int *)(DAT_000234b8 + 0x23128 + local_58 * 4);
          local_48 = *(int *)(DAT_000234bc + 0x23140 + local_58 * 4);
          if (local_58 < 2) {
            local_48 = FUN_000222b0(&local_68,local_48);
          }
        }
      }
      else {
        local_68 = local_68 - *(int *)(DAT_000234a8 + 0x230ac + local_58 * 4);
        local_48 = *(int *)(DAT_000234ac + 0x230c4 + local_58 * 4);
        if (local_58 == 0) {
          local_48 = FUN_0002223c(&local_68);
        }
      }
      if (local_48 == 0xff) {
        return 0xfffffffd;
      }
      local_60 = (local_10 + local_2c) * 3 + local_34 * -2;
      if (local_60 < 0) {
        iVar3 = 3;
      }
      else {
        iVar3 = 0;
      }
      local_60 = local_60 + iVar3;
      iVar3 = *(int *)(DAT_000234d8 + 0x232b8 + (local_48 + 0x13) * 4) * local_38;
      local_64 = iVar3 - (iVar3 >> 0x1f);
      *local_20 = *(undefined1 *)(DAT_000234dc + (((local_60 >> 2) + 0x2340c) - iVar3 / 2));
      local_10 = local_14;
      local_14 = local_30;
      local_18 = local_18 + 1;
      puVar2 = local_20 + 1;
      if (local_18 == param_1) {
        local_18 = 0;
        local_1c = local_1c + 1;
        puVar2 = local_20 + 7;
      }
      local_20 = puVar2;
      *(int *)(DAT_000234e8 + 0x23390 + local_5c * 4) =
           *(int *)(DAT_000234e0 + 0x23368 + local_5c * 4) +
           *(int *)(DAT_000234e4 + 0x23380 + (local_48 + 0x13) * 4);
      iVar3 = *(int *)(DAT_000234ec + 0x233a0 + local_5c * 4);
      *(int *)(DAT_000234f0 + 0x233b4 + local_5c * 4) = iVar3 + 1;
      if (iVar3 == 0xf) {
        *(undefined4 *)(DAT_000234f4 + 0x233cc + local_5c * 4) = 8;
        *(int *)(DAT_000234fc + 0x23400 + local_5c * 4) =
             *(int *)(DAT_000234f8 + 0x233e0 + local_5c * 4) / 2;
      }
    }
    local_c = local_c + 1;
  } while( true );
}



/* ===== FUN_00023500 @ 00023500 size=192 ===== */

void FUN_00023500(undefined4 param_1,int param_2,size_t param_3,int param_4)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_00022b80(param_3,param_4,param_1,DAT_000235c0 + 0x23528);
  if (iVar1 == 0) {
    for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
      memcpy((void *)(param_2 + param_3 * local_c),
             (void *)((param_3 + 6) * (local_c + 2) + DAT_000235c4 + 0x2358b),param_3);
    }
  }
  return;
}



/* ===== FUN_000235c8 @ 000235c8 size=1436 ===== */

/* WARNING: Removing unreachable block (ram,0x00023958) */
/* WARNING: Removing unreachable block (ram,0x00023858) */
/* WARNING: Removing unreachable block (ram,0x000238d8) */

void FUN_000235c8(byte *param_1,undefined1 *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *local_30;
  byte *local_2c;
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  
  local_30 = param_2;
  local_2c = param_1;
  for (local_10 = 0; local_10 < *(uint *)(param_3 + 8); local_10 = local_10 + 1) {
    for (local_c = 0; local_c < *(uint *)(param_3 + 4); local_c = local_c + 1) {
      if (param_4 == 0) {
        *local_30 = (char)((int)((uint)*local_2c * 0x2105 + (uint)local_2c[1] * 0x40d2 +
                                 (uint)local_2c[2] * 0xc97 + 0x80000) >> 0xf);
      }
      else {
        *local_30 = (char)((int)((uint)local_2c[2] * 0x2105 + (uint)local_2c[1] * 0x40d2 +
                                 (uint)*local_2c * 0xc97 + 0x80000) >> 0xf);
      }
      local_30 = local_30 + 1;
      local_2c = local_2c + param_6;
    }
    local_2c = local_2c + (*(int *)(param_3 + 0x14) - param_6 * *(int *)(param_3 + 4));
  }
  local_2c = local_2c + -(*(int *)(param_3 + 0x14) * *(int *)(param_3 + 8));
  if (param_5 == 0) {
    local_14 = local_30;
    local_18 = local_30 + ((uint)(*(int *)(param_3 + 8) * *(int *)(param_3 + 4)) >> 2);
  }
  else {
    local_18 = local_30;
    local_14 = local_30 + ((uint)(*(int *)(param_3 + 8) * *(int *)(param_3 + 4)) >> 2);
  }
  for (local_10 = 0; local_10 < *(uint *)(param_3 + 8) >> 1; local_10 = local_10 + 1) {
    for (local_c = 0; local_c < *(uint *)(param_3 + 4) >> 1; local_c = local_c + 1) {
      iVar1 = (int)((uint)*local_2c + (uint)local_2c[param_6] +
                    (uint)local_2c[*(int *)(param_3 + 0x14)] +
                   (uint)local_2c[*(int *)(param_3 + 0x14) + param_6]) >> 2;
      iVar2 = (int)((uint)local_2c[1] + (uint)local_2c[param_6 + 1] +
                    (uint)local_2c[*(int *)(param_3 + 0x14) + 1] +
                   (uint)local_2c[*(int *)(param_3 + 0x14) + param_6 + 1]) >> 2;
      iVar3 = (int)((uint)local_2c[2] + (uint)local_2c[param_6 + 2] +
                    (uint)local_2c[*(int *)(param_3 + 0x14) + 2] +
                   (uint)local_2c[*(int *)(param_3 + 0x14) + param_6 + 2]) >> 2;
      if (param_4 == 0) {
        *local_14 = (char)(iVar1 * -0x130e + iVar2 * -0x256a + iVar3 * 0x3878 + 0x404000 >> 0xf);
        *local_18 = (char)(iVar1 * 0x3878 + iVar2 * -0x2f49 + iVar3 * -0x92f + 0x404000 >> 0xf);
      }
      else {
        *local_14 = (char)(iVar3 * -0x130e + iVar2 * -0x256a + iVar1 * 0x3878 + 0x404000 >> 0xf);
        *local_18 = (char)(iVar3 * 0x3878 + iVar2 * -0x2f49 + iVar1 * -0x92f + 0x404000 >> 0xf);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
      local_2c = local_2c + param_6 * 2;
    }
    local_2c = local_2c + (*(int *)(param_3 + 0x14) * 2 - param_6 * *(int *)(param_3 + 4));
  }
  return;
}



/* ===== FUN_00023b64 @ 00023b64 size=1260 ===== */

void FUN_00023b64(byte *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  char *local_30;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  int local_10;
  uint local_c;
  
  if (param_5 == 0) {
    local_18 = param_1 + param_4 * param_3;
    iVar5 = param_4 * param_3;
    iVar3 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar3 = iVar5;
    }
    local_1c = local_18 + (iVar3 >> 2);
  }
  else {
    local_1c = param_1 + param_4 * param_3;
    iVar5 = param_4 * param_3;
    iVar3 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar3 = iVar5;
    }
    local_18 = local_1c + (iVar3 >> 2);
  }
  local_30 = param_2;
  local_14 = param_1;
  for (local_c = 0; (int)local_c < param_4; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 2) {
      iVar3 = (int)((*local_18 - 0x80) * 0x80 + (*local_18 - 0x80)) >> 6;
      iVar5 = (int)((*local_18 - 0x80) * 2 + (*local_18 - 0x80) + (*local_1c - 0x80) * 4 +
                   (*local_1c - 0x80) * 2) >> 3;
      iVar1 = (int)((*local_1c - 0x80) * 2 + (*local_1c - 0x80)) >> 1;
      if ((int)((uint)*local_14 + iVar3) < 0x100) {
        if ((int)((uint)*local_14 + iVar3) < 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *local_14 + (char)iVar3;
        }
      }
      else {
        cVar4 = -1;
      }
      *local_30 = cVar4;
      if ((int)((uint)*local_14 - iVar5) < 0x100) {
        if ((int)((uint)*local_14 - iVar5) < 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *local_14 - (char)iVar5;
        }
      }
      else {
        cVar4 = -1;
      }
      local_30[1] = cVar4;
      if ((int)((uint)*local_14 + iVar1) < 0x100) {
        if ((int)((uint)*local_14 + iVar1) < 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *local_14 + (char)iVar1;
        }
      }
      else {
        cVar4 = -1;
      }
      local_30[2] = cVar4;
      pbVar6 = local_14 + 1;
      if ((int)((uint)*pbVar6 + iVar3) < 0x100) {
        if ((int)((uint)*pbVar6 + iVar3) < 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *pbVar6 + (char)iVar3;
        }
      }
      else {
        cVar4 = -1;
      }
      local_30[3] = cVar4;
      if ((int)((uint)*pbVar6 - iVar5) < 0x100) {
        if ((int)((uint)*pbVar6 - iVar5) < 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *pbVar6 - (char)iVar5;
        }
      }
      else {
        cVar4 = -1;
      }
      pcVar2 = local_30 + 5;
      local_30[4] = cVar4;
      if ((int)((uint)*pbVar6 + iVar1) < 0x100) {
        if ((int)((uint)*pbVar6 + iVar1) < 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *pbVar6 + (char)iVar1;
        }
      }
      else {
        cVar4 = -1;
      }
      local_30 = local_30 + 6;
      *pcVar2 = cVar4;
      local_14 = local_14 + 2;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
    }
    if ((local_c & 1) == 0) {
      local_18 = local_18 + -(param_3 / 2);
      local_1c = local_1c + -(param_3 / 2);
    }
  }
  return;
}



/* ===== FUN_00024050 @ 00024050 size=1260 ===== */

void FUN_00024050(byte *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  char *local_30;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  int local_10;
  uint local_c;
  
  if (param_5 == 0) {
    local_18 = param_1 + param_4 * param_3;
    iVar5 = param_4 * param_3;
    iVar3 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar3 = iVar5;
    }
    local_1c = local_18 + (iVar3 >> 2);
  }
  else {
    local_1c = param_1 + param_4 * param_3;
    iVar5 = param_4 * param_3;
    iVar3 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar3 = iVar5;
    }
    local_18 = local_1c + (iVar3 >> 2);
  }
  local_30 = param_2;
  local_14 = param_1;
  for (local_c = 0; (int)local_c < param_4; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 2) {
      iVar3 = (int)((*local_18 - 0x80) * 0x80 + (*local_18 - 0x80)) >> 6;
      iVar5 = (int)((*local_18 - 0x80) * 2 + (*local_18 - 0x80) + (*local_1c - 0x80) * 4 +
                   (*local_1c - 0x80) * 2) >> 3;
      iVar1 = (int)((*local_1c - 0x80) * 2 + (*local_1c - 0x80)) >> 1;
      if ((int)((uint)*local_14 + iVar1) < 0x100) {
        if ((int)((uint)*local_14 + iVar1) < 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *local_14 + (char)iVar1;
        }
      }
      else {
        cVar4 = -1;
      }
      *local_30 = cVar4;
      if ((int)((uint)*local_14 - iVar5) < 0x100) {
        if ((int)((uint)*local_14 - iVar5) < 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *local_14 - (char)iVar5;
        }
      }
      else {
        cVar4 = -1;
      }
      local_30[1] = cVar4;
      if ((int)((uint)*local_14 + iVar3) < 0x100) {
        if ((int)((uint)*local_14 + iVar3) < 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *local_14 + (char)iVar3;
        }
      }
      else {
        cVar4 = -1;
      }
      local_30[2] = cVar4;
      pbVar6 = local_14 + 1;
      if ((int)((uint)*pbVar6 + iVar1) < 0x100) {
        if ((int)((uint)*pbVar6 + iVar1) < 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *pbVar6 + (char)iVar1;
        }
      }
      else {
        cVar4 = -1;
      }
      local_30[3] = cVar4;
      if ((int)((uint)*pbVar6 - iVar5) < 0x100) {
        if ((int)((uint)*pbVar6 - iVar5) < 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *pbVar6 - (char)iVar5;
        }
      }
      else {
        cVar4 = -1;
      }
      pcVar2 = local_30 + 5;
      local_30[4] = cVar4;
      if ((int)((uint)*pbVar6 + iVar3) < 0x100) {
        if ((int)((uint)*pbVar6 + iVar3) < 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *pbVar6 + (char)iVar3;
        }
      }
      else {
        cVar4 = -1;
      }
      local_30 = local_30 + 6;
      *pcVar2 = cVar4;
      local_14 = local_14 + 2;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
    }
    if ((local_c & 1) == 0) {
      local_18 = local_18 + -(param_3 / 2);
      local_1c = local_1c + -(param_3 / 2);
    }
  }
  return;
}



/* ===== FUN_0002453c @ 0002453c size=1028 ===== */

void FUN_0002453c(byte *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  int local_30;
  char *local_28;
  byte *local_24;
  int local_c;
  
  local_30 = param_4;
  local_28 = param_2;
  local_24 = param_1;
  while (local_30 = local_30 + -1, -1 < local_30) {
    for (local_c = 0; local_c + 1 < param_3; local_c = local_c + 2) {
      iVar1 = (int)((uint)local_24[1] * 0x81 + -0x4080) >> 6;
      iVar2 = (int)((uint)local_24[1] * 3 + (uint)local_24[3] * 6 + -0x480) >> 3;
      iVar3 = (int)((uint)local_24[3] * 3 + -0x180) >> 1;
      if ((int)((uint)*local_24 + iVar1) < 0x100) {
        if ((int)((uint)*local_24 + iVar1) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = *local_24 + (char)iVar1;
        }
      }
      else {
        cVar5 = -1;
      }
      *local_28 = cVar5;
      if ((int)((uint)*local_24 - iVar2) < 0x100) {
        if ((int)((uint)*local_24 - iVar2) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = *local_24 - (char)iVar2;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[1] = cVar5;
      if ((int)((uint)*local_24 + iVar3) < 0x100) {
        if ((int)((uint)*local_24 + iVar3) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = *local_24 + (char)iVar3;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[2] = cVar5;
      if ((int)((uint)local_24[2] + iVar1) < 0x100) {
        if ((int)((uint)local_24[2] + iVar1) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[2] + (char)iVar1;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[3] = cVar5;
      if ((int)((uint)local_24[2] - iVar2) < 0x100) {
        if ((int)((uint)local_24[2] - iVar2) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[2] - (char)iVar2;
        }
      }
      else {
        cVar5 = -1;
      }
      pcVar4 = local_28 + 5;
      local_28[4] = cVar5;
      if ((int)((uint)local_24[2] + iVar3) < 0x100) {
        if ((int)((uint)local_24[2] + iVar3) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[2] + (char)iVar3;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28 = local_28 + 6;
      *pcVar4 = cVar5;
      local_24 = local_24 + 4;
    }
    local_24 = local_24 + param_5 + param_3 * -2;
  }
  return;
}



/* ===== FUN_00024940 @ 00024940 size=1028 ===== */

void FUN_00024940(byte *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  int local_30;
  char *local_28;
  byte *local_24;
  int local_c;
  
  local_30 = param_4;
  local_28 = param_2;
  local_24 = param_1;
  while (local_30 = local_30 + -1, -1 < local_30) {
    for (local_c = 0; local_c + 1 < param_3; local_c = local_c + 2) {
      iVar1 = (int)((uint)local_24[1] * 0x81 + -0x4080) >> 6;
      iVar2 = (int)((uint)local_24[1] * 3 + (uint)local_24[3] * 6 + -0x480) >> 3;
      iVar3 = (int)((uint)local_24[3] * 3 + -0x180) >> 1;
      if ((int)((uint)*local_24 + iVar3) < 0x100) {
        if ((int)((uint)*local_24 + iVar3) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = *local_24 + (char)iVar3;
        }
      }
      else {
        cVar5 = -1;
      }
      *local_28 = cVar5;
      if ((int)((uint)*local_24 - iVar2) < 0x100) {
        if ((int)((uint)*local_24 - iVar2) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = *local_24 - (char)iVar2;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[1] = cVar5;
      if ((int)((uint)*local_24 + iVar1) < 0x100) {
        if ((int)((uint)*local_24 + iVar1) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = *local_24 + (char)iVar1;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[2] = cVar5;
      if ((int)((uint)local_24[2] + iVar3) < 0x100) {
        if ((int)((uint)local_24[2] + iVar3) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[2] + (char)iVar3;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[3] = cVar5;
      if ((int)((uint)local_24[2] - iVar2) < 0x100) {
        if ((int)((uint)local_24[2] - iVar2) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[2] - (char)iVar2;
        }
      }
      else {
        cVar5 = -1;
      }
      pcVar4 = local_28 + 5;
      local_28[4] = cVar5;
      if ((int)((uint)local_24[2] + iVar1) < 0x100) {
        if ((int)((uint)local_24[2] + iVar1) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[2] + (char)iVar1;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28 = local_28 + 6;
      *pcVar4 = cVar5;
      local_24 = local_24 + 4;
    }
    local_24 = local_24 + param_5 + param_3 * -2;
  }
  return;
}



/* ===== FUN_00024d44 @ 00024d44 size=676 ===== */

void FUN_00024d44(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *local_28;
  byte *local_24;
  undefined1 *local_1c;
  undefined1 *local_18;
  byte *local_14;
  int local_10;
  int local_c;
  
  local_28 = param_2;
  local_14 = param_1;
  for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
    for (local_10 = 0; local_10 + 1 < param_3; local_10 = local_10 + 2) {
      puVar1 = local_28 + 1;
      *local_28 = *local_14;
      local_28 = local_28 + 2;
      *puVar1 = local_14[2];
      local_14 = local_14 + 4;
    }
    local_14 = local_14 + param_5 + param_3 * -2;
  }
  local_24 = param_1 + 1;
  if (param_6 == 0) {
    local_18 = local_28;
    iVar3 = param_4 * param_3;
    iVar2 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    local_1c = local_28 + (iVar2 >> 2);
  }
  else {
    local_1c = local_28;
    iVar3 = param_4 * param_3;
    iVar2 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    local_18 = local_28 + (iVar2 >> 2);
  }
  for (local_c = 0; local_14 = local_24 + param_5, local_c < param_4; local_c = local_c + 2) {
    for (local_10 = 0; local_10 + 1 < param_3; local_10 = local_10 + 2) {
      *local_18 = (char)(((uint)*local_24 + (uint)*local_14) / 2);
      *local_1c = (char)(((uint)local_24[2] + (uint)local_14[2]) / 2);
      local_24 = local_24 + 4;
      local_14 = local_14 + 4;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
    }
    local_24 = local_14 + param_5 + param_3 * -2;
  }
  return;
}



/* ===== FUN_00024fe8 @ 00024fe8 size=188 ===== */

void FUN_00024fe8(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *local_20;
  int local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  
  local_14 = 0;
  local_20 = param_2;
  local_10 = param_1 + param_4 * param_3;
  local_c = param_1;
  while (local_14 < param_4 * param_3) {
    puVar1 = local_20 + 1;
    *local_20 = *local_c;
    local_20 = local_20 + 2;
    *puVar1 = *local_10;
    local_14 = local_14 + 1;
    local_10 = local_10 + 1;
    local_c = local_c + 1;
  }
  return;
}



/* ===== FUN_000250a4 @ 000250a4 size=1028 ===== */

void FUN_000250a4(byte *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  int local_30;
  char *local_28;
  byte *local_24;
  int local_c;
  
  local_30 = param_4;
  local_28 = param_2;
  local_24 = param_1;
  while (local_30 = local_30 + -1, -1 < local_30) {
    for (local_c = 0; local_c + 1 < param_3; local_c = local_c + 2) {
      iVar1 = (int)((uint)local_24[3] * 0x81 + -0x4080) >> 6;
      iVar2 = (int)((uint)local_24[3] * 3 + (uint)local_24[1] * 6 + -0x480) >> 3;
      iVar3 = (int)((uint)local_24[1] * 3 + -0x180) >> 1;
      if ((int)((uint)*local_24 + iVar1) < 0x100) {
        if ((int)((uint)*local_24 + iVar1) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = *local_24 + (char)iVar1;
        }
      }
      else {
        cVar5 = -1;
      }
      *local_28 = cVar5;
      if ((int)((uint)*local_24 - iVar2) < 0x100) {
        if ((int)((uint)*local_24 - iVar2) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = *local_24 - (char)iVar2;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[1] = cVar5;
      if ((int)((uint)*local_24 + iVar3) < 0x100) {
        if ((int)((uint)*local_24 + iVar3) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = *local_24 + (char)iVar3;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[2] = cVar5;
      if ((int)((uint)local_24[2] + iVar1) < 0x100) {
        if ((int)((uint)local_24[2] + iVar1) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[2] + (char)iVar1;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[3] = cVar5;
      if ((int)((uint)local_24[2] - iVar2) < 0x100) {
        if ((int)((uint)local_24[2] - iVar2) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[2] - (char)iVar2;
        }
      }
      else {
        cVar5 = -1;
      }
      pcVar4 = local_28 + 5;
      local_28[4] = cVar5;
      if ((int)((uint)local_24[2] + iVar3) < 0x100) {
        if ((int)((uint)local_24[2] + iVar3) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[2] + (char)iVar3;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28 = local_28 + 6;
      *pcVar4 = cVar5;
      local_24 = local_24 + 4;
    }
    local_24 = local_24 + param_5 + param_3 * -2;
  }
  return;
}



/* ===== FUN_000254a8 @ 000254a8 size=1028 ===== */

void FUN_000254a8(byte *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  int local_30;
  char *local_28;
  byte *local_24;
  int local_c;
  
  local_30 = param_4;
  local_28 = param_2;
  local_24 = param_1;
  while (local_30 = local_30 + -1, -1 < local_30) {
    for (local_c = 0; local_c + 1 < param_3; local_c = local_c + 2) {
      iVar1 = (int)((uint)local_24[3] * 0x81 + -0x4080) >> 6;
      iVar2 = (int)((uint)local_24[3] * 3 + (uint)local_24[1] * 6 + -0x480) >> 3;
      iVar3 = (int)((uint)local_24[1] * 3 + -0x180) >> 1;
      if ((int)((uint)*local_24 + iVar3) < 0x100) {
        if ((int)((uint)*local_24 + iVar3) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = *local_24 + (char)iVar3;
        }
      }
      else {
        cVar5 = -1;
      }
      *local_28 = cVar5;
      if ((int)((uint)*local_24 - iVar2) < 0x100) {
        if ((int)((uint)*local_24 - iVar2) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = *local_24 - (char)iVar2;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[1] = cVar5;
      if ((int)((uint)*local_24 + iVar1) < 0x100) {
        if ((int)((uint)*local_24 + iVar1) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = *local_24 + (char)iVar1;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[2] = cVar5;
      if ((int)((uint)local_24[2] + iVar3) < 0x100) {
        if ((int)((uint)local_24[2] + iVar3) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[2] + (char)iVar3;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[3] = cVar5;
      if ((int)((uint)local_24[2] - iVar2) < 0x100) {
        if ((int)((uint)local_24[2] - iVar2) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[2] - (char)iVar2;
        }
      }
      else {
        cVar5 = -1;
      }
      pcVar4 = local_28 + 5;
      local_28[4] = cVar5;
      if ((int)((uint)local_24[2] + iVar1) < 0x100) {
        if ((int)((uint)local_24[2] + iVar1) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[2] + (char)iVar1;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28 = local_28 + 6;
      *pcVar4 = cVar5;
      local_24 = local_24 + 4;
    }
    local_24 = local_24 + param_5 + param_3 * -2;
  }
  return;
}



/* ===== FUN_000258ac @ 000258ac size=1060 ===== */

void FUN_000258ac(byte *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  int local_30;
  char *local_28;
  byte *local_24;
  int local_c;
  
  local_30 = param_4;
  local_28 = param_2;
  local_24 = param_1;
  while (local_30 = local_30 + -1, -1 < local_30) {
    for (local_c = 0; local_c + 1 < param_3; local_c = local_c + 2) {
      iVar1 = (int)((uint)*local_24 * 0x81 + -0x4080) >> 6;
      iVar2 = (int)((uint)*local_24 * 3 + (uint)local_24[2] * 6 + -0x480) >> 3;
      iVar3 = (int)((uint)local_24[2] * 3 + -0x180) >> 1;
      if ((int)((uint)local_24[1] + iVar1) < 0x100) {
        if ((int)((uint)local_24[1] + iVar1) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[1] + (char)iVar1;
        }
      }
      else {
        cVar5 = -1;
      }
      *local_28 = cVar5;
      if ((int)((uint)local_24[1] - iVar2) < 0x100) {
        if ((int)((uint)local_24[1] - iVar2) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[1] - (char)iVar2;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[1] = cVar5;
      if ((int)((uint)local_24[1] + iVar3) < 0x100) {
        if ((int)((uint)local_24[1] + iVar3) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[1] + (char)iVar3;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[2] = cVar5;
      if ((int)((uint)local_24[3] + iVar1) < 0x100) {
        if ((int)((uint)local_24[3] + iVar1) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[3] + (char)iVar1;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[3] = cVar5;
      if ((int)((uint)local_24[3] - iVar2) < 0x100) {
        if ((int)((uint)local_24[3] - iVar2) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[3] - (char)iVar2;
        }
      }
      else {
        cVar5 = -1;
      }
      pcVar4 = local_28 + 5;
      local_28[4] = cVar5;
      if ((int)((uint)local_24[3] + iVar3) < 0x100) {
        if ((int)((uint)local_24[3] + iVar3) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[3] + (char)iVar3;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28 = local_28 + 6;
      *pcVar4 = cVar5;
      local_24 = local_24 + 4;
    }
    local_24 = local_24 + param_5 + param_3 * -2;
  }
  return;
}



/* ===== FUN_00025cd0 @ 00025cd0 size=1060 ===== */

void FUN_00025cd0(byte *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  int local_30;
  char *local_28;
  byte *local_24;
  int local_c;
  
  local_30 = param_4;
  local_28 = param_2;
  local_24 = param_1;
  while (local_30 = local_30 + -1, -1 < local_30) {
    for (local_c = 0; local_c + 1 < param_3; local_c = local_c + 2) {
      iVar1 = (int)((uint)*local_24 * 0x81 + -0x4080) >> 6;
      iVar2 = (int)((uint)*local_24 * 3 + (uint)local_24[2] * 6 + -0x480) >> 3;
      iVar3 = (int)((uint)local_24[2] * 3 + -0x180) >> 1;
      if ((int)((uint)local_24[1] + iVar3) < 0x100) {
        if ((int)((uint)local_24[1] + iVar3) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[1] + (char)iVar3;
        }
      }
      else {
        cVar5 = -1;
      }
      *local_28 = cVar5;
      if ((int)((uint)local_24[1] - iVar2) < 0x100) {
        if ((int)((uint)local_24[1] - iVar2) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[1] - (char)iVar2;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[1] = cVar5;
      if ((int)((uint)local_24[1] + iVar1) < 0x100) {
        if ((int)((uint)local_24[1] + iVar1) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[1] + (char)iVar1;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[2] = cVar5;
      if ((int)((uint)local_24[3] + iVar3) < 0x100) {
        if ((int)((uint)local_24[3] + iVar3) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[3] + (char)iVar3;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28[3] = cVar5;
      if ((int)((uint)local_24[3] - iVar2) < 0x100) {
        if ((int)((uint)local_24[3] - iVar2) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[3] - (char)iVar2;
        }
      }
      else {
        cVar5 = -1;
      }
      pcVar4 = local_28 + 5;
      local_28[4] = cVar5;
      if ((int)((uint)local_24[3] + iVar1) < 0x100) {
        if ((int)((uint)local_24[3] + iVar1) < 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = local_24[3] + (char)iVar1;
        }
      }
      else {
        cVar5 = -1;
      }
      local_28 = local_28 + 6;
      *pcVar4 = cVar5;
      local_24 = local_24 + 4;
    }
    local_24 = local_24 + param_5 + param_3 * -2;
  }
  return;
}



/* ===== FUN_000260f4 @ 000260f4 size=664 ===== */

void FUN_000260f4(byte *param_1,byte *param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *local_28;
  byte *local_24;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  int local_10;
  int local_c;
  
  local_28 = param_2;
  local_14 = param_1;
  for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
    for (local_10 = 0; local_10 + 1 < param_3; local_10 = local_10 + 2) {
      pbVar1 = local_28 + 1;
      *local_28 = local_14[1];
      local_28 = local_28 + 2;
      *pbVar1 = local_14[3];
      local_14 = local_14 + 4;
    }
    local_14 = local_14 + param_5 + param_3 * -2;
  }
  if (param_6 == 0) {
    local_18 = local_28;
    iVar3 = param_4 * param_3;
    iVar2 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    local_1c = local_28 + (iVar2 >> 2);
  }
  else {
    local_1c = local_28;
    iVar3 = param_4 * param_3;
    iVar2 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    local_18 = local_28 + (iVar2 >> 2);
  }
  local_24 = param_1;
  for (local_c = 0; local_14 = local_24 + param_5, local_c < param_4; local_c = local_c + 2) {
    for (local_10 = 0; local_10 + 1 < param_3; local_10 = local_10 + 2) {
      *local_18 = (byte)(((uint)*local_24 + (uint)*local_14) / 2);
      *local_1c = (byte)(((uint)local_24[2] + (uint)local_14[2]) / 2);
      local_24 = local_24 + 4;
      local_14 = local_14 + 4;
      local_1c = local_1c + 1;
      local_18 = local_18 + 1;
    }
    local_24 = local_14 + param_5 + param_3 * -2;
  }
  return;
}



/* ===== FUN_0002638c @ 0002638c size=204 ===== */

void FUN_0002638c(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_c;
  
  local_18 = param_2;
  local_14 = param_1;
  for (local_c = 0; local_c < param_4 * param_3; local_c = local_c + 1) {
    uVar1 = *local_14;
    puVar3 = local_14 + 2;
    uVar2 = local_14[1];
    local_14 = local_14 + 3;
    *local_18 = *puVar3;
    puVar3 = local_18 + 2;
    local_18[1] = uVar2;
    local_18 = local_18 + 3;
    *puVar3 = uVar1;
  }
  return;
}



/* ===== FUN_00026458 @ 00026458 size=468 ===== */

void FUN_00026458(void *param_1,void *param_2,int param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  local_18 = param_2;
  local_14 = param_1;
  for (local_c = 0; local_c < *(uint *)(param_3 + 8); local_c = local_c + 1) {
    memcpy(local_18,local_14,*(size_t *)(param_3 + 4));
    local_18 = (void *)((int)local_18 + *(int *)(param_3 + 4));
    local_14 = (void *)((int)local_14 + *(int *)(param_3 + 0x14));
  }
  local_14 = (void *)((int)local_14 +
                     ((uint)(*(int *)(param_3 + 0x14) * *(int *)(param_3 + 8)) >> 2));
  for (local_c = 0; local_c < *(uint *)(param_3 + 8) >> 1; local_c = local_c + 1) {
    memcpy(local_18,local_14,*(uint *)(param_3 + 4) >> 1);
    local_18 = (void *)((int)local_18 + (*(uint *)(param_3 + 4) >> 1));
    local_14 = (void *)((int)local_14 + (*(uint *)(param_3 + 0x14) >> 1));
  }
  local_14 = (void *)((int)local_14 -
                     ((uint)(*(int *)(param_3 + 0x14) * *(int *)(param_3 + 8)) >> 1));
  for (local_c = 0; local_c < *(uint *)(param_3 + 8) >> 1; local_c = local_c + 1) {
    memcpy(local_18,local_14,*(uint *)(param_3 + 4) >> 1);
    local_18 = (void *)((int)local_18 + (*(uint *)(param_3 + 4) >> 1));
    local_14 = (void *)((int)local_14 + (*(uint *)(param_3 + 0x14) >> 1));
  }
  return;
}



/* ===== FUN_0002662c @ 0002662c size=244 ===== */

void FUN_0002662c(ushort *param_1,byte *param_2,int param_3,int param_4)

{
  ushort uVar1;
  byte *pbVar2;
  int local_20;
  byte *local_18;
  ushort *local_14;
  int local_c;
  
  local_20 = param_4;
  local_18 = param_2;
  local_14 = param_1;
  while (local_20 = local_20 + -1, -1 < local_20) {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      uVar1 = *local_14;
      *local_18 = (byte)(uVar1 >> 8) & 0xf8;
      pbVar2 = local_18 + 2;
      local_18[1] = (byte)(uVar1 >> 3) & 0xfc;
      local_18 = local_18 + 3;
      *pbVar2 = (char)uVar1 << 3;
      local_14 = local_14 + 1;
    }
  }
  return;
}



/* ===== FUN_00026720 @ 00026720 size=244 ===== */

void FUN_00026720(ushort *param_1,char *param_2,int param_3,int param_4)

{
  ushort uVar1;
  byte *pbVar2;
  int local_20;
  char *local_18;
  ushort *local_14;
  int local_c;
  
  local_20 = param_4;
  local_18 = param_2;
  local_14 = param_1;
  while (local_20 = local_20 + -1, -1 < local_20) {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      uVar1 = *local_14;
      *local_18 = (char)uVar1 << 3;
      pbVar2 = (byte *)(local_18 + 2);
      local_18[1] = (byte)(uVar1 >> 3) & 0xfc;
      local_18 = local_18 + 3;
      *pbVar2 = (byte)(uVar1 >> 8) & 0xf8;
      local_14 = local_14 + 1;
    }
  }
  return;
}



/* ===== FUN_00026814 @ 00026814 size=1188 ===== */

void FUN_00026814(ushort *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 *local_60;
  ushort *local_5c;
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  
  local_60 = param_2;
  local_5c = param_1;
  for (local_10 = 0; local_10 < *(uint *)(param_3 + 8); local_10 = local_10 + 1) {
    for (local_c = 0; local_c < *(uint *)(param_3 + 4); local_c = local_c + 1) {
      uVar4 = *local_5c;
      *local_60 = (char)((uVar4 & 0x1f) * 0x10828 + (uVar4 >> 3 & 0xfc) * 0x40d2 +
                         (uVar4 >> 8 & 0xf8) * 0xc97 + 0x80000 >> 0xf);
      local_5c = local_5c + 1;
      local_60 = local_60 + 1;
    }
    local_5c = (ushort *)((int)local_5c + *(int *)(param_3 + 0x14) + *(int *)(param_3 + 4) * -2);
  }
  local_5c = (ushort *)((int)local_5c - *(int *)(param_3 + 0x14) * *(int *)(param_3 + 8));
  if (param_4 == 0) {
    local_14 = local_60;
    local_18 = local_60 + ((uint)(*(int *)(param_3 + 8) * *(int *)(param_3 + 4)) >> 2);
  }
  else {
    local_18 = local_60;
    local_14 = local_60 + ((uint)(*(int *)(param_3 + 8) * *(int *)(param_3 + 4)) >> 2);
  }
  for (local_10 = 0; local_10 < *(uint *)(param_3 + 8) >> 1; local_10 = local_10 + 1) {
    for (local_c = 0; local_c < *(uint *)(param_3 + 4) >> 1; local_c = local_c + 1) {
      uVar4 = *local_5c;
      uVar5 = local_5c[1];
      uVar6 = local_5c[*(int *)(param_3 + 0x14)];
      uVar7 = local_5c[*(int *)(param_3 + 0x14) + 1];
      uVar1 = (uVar4 & 0x1f) * 8 + (uVar5 & 0x1f) * 8 + (uVar6 & 0x1f) * 8 + (uVar7 & 0x1f) * 8 >> 2
      ;
      uVar2 = (uVar4 >> 3 & 0xfc) + (uVar5 >> 3 & 0xfc) + (uVar6 >> 3 & 0xfc) + (uVar7 >> 3 & 0xfc)
              >> 2;
      uVar3 = (uVar4 >> 8 & 0xf8) + (uVar5 >> 8 & 0xf8) + (uVar6 >> 8 & 0xf8) + (uVar7 >> 8 & 0xf8)
              >> 2;
      *local_14 = (char)((int)(uVar1 * -0x130e + uVar2 * -0x256a + uVar3 * 0x3878 + 0x404000) >> 0xf
                        );
      *local_18 = (char)((int)(uVar1 * 0x3878 + uVar2 * -0x2f49 + uVar3 * -0x92f + 0x404000) >> 0xf)
      ;
      local_5c = local_5c + 2;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    local_5c = local_5c + (*(int *)(param_3 + 0x14) - *(int *)(param_3 + 4));
  }
  return;
}



/* ===== FUN_00026cb8 @ 00026cb8 size=220 ===== */

void FUN_00026cb8(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int local_20;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_c;
  
  local_20 = param_4;
  local_18 = param_2;
  local_14 = param_1;
  if (param_5 != 0) {
    local_14 = param_1 + 1;
  }
  while (local_20 = local_20 + -1, -1 < local_20) {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      *local_18 = *local_14;
      puVar1 = local_18 + 2;
      local_18[1] = *local_14;
      local_18 = local_18 + 3;
      *puVar1 = *local_14;
      local_14 = local_14 + 2;
    }
  }
  return;
}



/* ===== FUN_00026d94 @ 00026d94 size=228 ===== */

void FUN_00026d94(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  
  local_14 = param_1;
  if (param_4 != 0) {
    local_14 = param_1 + 1;
  }
  local_18 = param_2;
  for (local_10 = 0; local_10 < *(uint *)(param_3 + 8); local_10 = local_10 + 1) {
    for (local_c = 0; local_c < *(uint *)(param_3 + 4); local_c = local_c + 1) {
      *local_18 = *local_14;
      local_14 = local_14 + 2;
      local_18 = local_18 + 1;
    }
  }
  memset(local_18,0x80,(uint)(*(int *)(param_3 + 8) * *(int *)(param_3 + 4)) >> 1);
  return;
}



/* ===== FUN_00026e78 @ 00026e78 size=196 ===== */

void FUN_00026e78(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int local_20;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_c;
  
  local_20 = param_4;
  local_18 = param_2;
  local_14 = param_1;
  while (local_20 = local_20 + -1, -1 < local_20) {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      *local_18 = *local_14;
      puVar1 = local_18 + 2;
      local_18[1] = *local_14;
      local_18 = local_18 + 3;
      *puVar1 = *local_14;
      local_14 = local_14 + 1;
    }
  }
  return;
}



/* ===== FUN_00026f3c @ 00026f3c size=196 ===== */

void FUN_00026f3c(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  
  local_18 = param_2;
  local_14 = param_1;
  for (local_10 = 0; local_10 < *(uint *)(param_3 + 8); local_10 = local_10 + 1) {
    for (local_c = 0; local_c < *(uint *)(param_3 + 4); local_c = local_c + 1) {
      *local_18 = *local_14;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
  }
  memset(local_18,0x80,(uint)(*(int *)(param_3 + 8) * *(int *)(param_3 + 4)) >> 1);
  return;
}



/* ===== FUN_00027000 @ 00027000 size=228 ===== */

void FUN_00027000(byte *param_1,ushort *param_2,uint param_3,int param_4)

{
  int local_28;
  ushort *local_20;
  byte *local_1c;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0;
  local_28 = param_4;
  local_20 = param_2;
  local_1c = param_1;
  while (local_28 != 0) {
    for (; (int)local_10 < (int)param_3; local_10 = local_10 + 8) {
      local_c = local_c << 8 | (uint)*local_1c;
      local_1c = local_1c + 1;
    }
    local_10 = local_10 - param_3;
    *local_20 = (short)(1 << (param_3 & 0xff)) - 1U & (ushort)(local_c >> (local_10 & 0xff));
    local_28 = local_28 + -1;
    local_20 = local_20 + 1;
  }
  return;
}



/* ===== FUN_000270e4 @ 000270e4 size=336 ===== */

undefined4 FUN_000270e4(int param_1,undefined4 param_2,undefined1 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *local_24;
  ushort *local_10;
  int local_c;
  
  local_10 = (ushort *)FUN_00013434(param_5 * param_4 * 2,param_1 + 0x3550,param_1 + 0x353c);
  if (local_10 == (ushort *)0x0) {
    uVar1 = FUN_000134d0(param_1);
  }
  else {
    FUN_00027000(param_2,local_10,10,param_5 * param_4);
    local_24 = param_3;
    while (param_5 = param_5 + -1, -1 < param_5) {
      for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
        *local_24 = (char)((int)(uint)*local_10 >> 2);
        puVar2 = local_24 + 2;
        local_24[1] = (char)((int)(uint)*local_10 >> 2);
        local_24 = local_24 + 3;
        *puVar2 = (char)((int)(uint)*local_10 >> 2);
        local_10 = local_10 + 1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00027234 @ 00027234 size=324 ===== */

undefined4 FUN_00027234(int param_1,undefined4 param_2,undefined1 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined1 *local_24;
  ushort *local_14;
  int local_10;
  int local_c;
  
  local_14 = (ushort *)FUN_00013434(param_5 * param_4 * 2,param_1 + 0x3550,param_1 + 0x353c);
  if (local_14 == (ushort *)0x0) {
    uVar1 = FUN_000134d0(param_1);
  }
  else {
    FUN_00027000(param_2,local_14,10,param_5 * param_4);
    local_24 = param_3;
    for (local_10 = 0; local_10 < param_5; local_10 = local_10 + 1) {
      for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
        *local_24 = (char)((int)(uint)*local_14 >> 2);
        local_14 = local_14 + 1;
        local_24 = local_24 + 1;
      }
    }
    memset(local_24,0x80,(param_5 * param_4) / 2);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_00027378 @ 00027378 size=320 ===== */

void FUN_00027378(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4,int param_5)

{
  int local_20;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_c;
  
  local_20 = param_4;
  local_18 = param_2;
  local_14 = param_1;
  while (local_20 = local_20 + -1, -1 < local_20) {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      if (param_5 == 0) {
        *local_18 = *local_14;
        local_18[1] = local_14[1];
        local_18[2] = local_14[2];
      }
      else {
        *local_18 = local_14[2];
        local_18[1] = local_14[1];
        local_18[2] = *local_14;
      }
      local_14 = local_14 + 4;
      local_18 = local_18 + 3;
    }
  }
  return;
}



/* ===== FUN_000274b8 @ 000274b8 size=852 ===== */

void FUN_000274b8(byte *param_1,byte *param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte local_a;
  byte local_9;
  
  if (param_1[1] == 0) {
    param_2[2] = param_1[2];
    param_2[1] = param_2[2];
    *param_2 = param_2[1];
  }
  else {
    if (param_3 == -0x7f) {
      local_9 = *param_1 / 0x2b;
      local_a = (*param_1 + local_9 * -0x2b) * '\x06';
    }
    else {
      local_9 = *param_1 / 0x1e;
      local_a = (byte)((((uint)*param_1 % 0x1e) * 0x600) / 0xb4);
    }
    bVar1 = (byte)((0xff - (uint)param_1[1]) * (uint)param_1[2] >> 8);
    bVar2 = (byte)((0xff - ((int)((uint)local_a * (uint)param_1[1]) >> 8)) * (uint)param_1[2] >> 8);
    bVar3 = (byte)((0xff - ((int)((0xff - (uint)local_a) * (uint)param_1[1]) >> 8)) *
                   (uint)param_1[2] >> 8);
    switch(local_9) {
    case 0:
      *param_2 = param_1[2];
      param_2[1] = bVar3;
      param_2[2] = bVar1;
      break;
    case 1:
      *param_2 = bVar2;
      param_2[1] = param_1[2];
      param_2[2] = bVar1;
      break;
    case 2:
      *param_2 = bVar1;
      param_2[1] = param_1[2];
      param_2[2] = bVar3;
      break;
    case 3:
      *param_2 = bVar1;
      param_2[1] = bVar2;
      param_2[2] = param_1[2];
      break;
    case 4:
      *param_2 = bVar3;
      param_2[1] = bVar1;
      param_2[2] = param_1[2];
      break;
    default:
      *param_2 = param_1[2];
      param_2[1] = bVar1;
      param_2[2] = bVar2;
    }
  }
  return;
}



/* ===== FUN_0002780c @ 0002780c size=324 ===== */

void FUN_0002780c(int param_1,undefined1 *param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined1 param_7)

{
  int local_28;
  undefined1 *local_20;
  int local_1c;
  undefined1 auStack_18 [4];
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = param_6 + 7;
  if (-1 < param_6) {
    local_14 = param_6;
  }
  local_14 = local_14 >> 3;
  local_1c = param_1 + local_14 + -3;
  local_28 = param_4;
  local_20 = param_2;
  while (local_28 = local_28 + -1, -1 < local_28) {
    for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      FUN_000274b8(local_1c,auStack_18,param_7);
      for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
        if ((param_5 == 0) || (2 < local_10)) {
          *local_20 = auStack_18[local_10];
        }
        else {
          *local_20 = auStack_18[2 - local_10];
        }
        local_20 = local_20 + 1;
      }
      local_1c = local_1c + local_14;
    }
  }
  return;
}



/* ===== FUN_00027950 @ 00027950 size=1856 ===== */

void FUN_00027950(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  byte *pbVar2;
  uint uVar3;
  byte *local_3c;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  ushort local_10;
  ushort local_e;
  int local_c;
  
  local_c = 0;
  local_1c = 0;
  local_20 = 0;
  local_3c = (byte *)(param_1 + 0xc);
  for (local_18 = 0; local_18 < param_4; local_18 = local_18 + 1) {
    if (local_20 < 8) {
      do {
        pbVar2 = local_3c + 1;
        local_1c = local_1c << 8 | (uint)*local_3c;
        local_20 = local_20 + 8;
        local_3c = pbVar2;
      } while (local_20 < 0x18);
    }
    uVar3 = local_20 - 8;
    local_20 = local_20 - 8;
    local_10 = (ushort)(local_1c >> (uVar3 & 0xff)) & 0xff;
    if (local_20 < 8) {
      do {
        pbVar2 = local_3c + 1;
        local_1c = local_1c << 8 | (uint)*local_3c;
        local_20 = local_20 + 8;
        local_3c = pbVar2;
      } while (local_20 < 0x18);
    }
    uVar1 = (ushort)(local_1c >> (local_20 - 8 & 0xff));
    local_20 = local_20 - 8;
    local_e = uVar1 & 0xff;
    *(ushort *)(param_2 + local_c) = uVar1 * 0x100 + local_10;
    for (local_14 = 2; local_c = local_c + 2, local_14 < param_3; local_14 = local_14 + 2) {
      if (local_20 < 10) {
        do {
          pbVar2 = local_3c + 1;
          local_1c = local_1c << 8 | (uint)*local_3c;
          local_20 = local_20 + 8;
          local_3c = pbVar2;
        } while (local_20 < 0x18);
      }
      uVar3 = local_1c >> (local_20 - 10 & 0xff);
      if ((uVar3 & 0x200) == 0) {
        local_20 = local_20 - 1;
      }
      else if ((uVar3 & 0x380) == 0x280) {
        local_20 = local_20 - 3;
        local_10 = local_10 + 3;
        if (0xff < (short)local_10) {
          local_10 = 0xff;
        }
      }
      else if ((uVar3 & 0x380) == 0x300) {
        local_20 = local_20 - 3;
        local_10 = local_10 - 3;
        if ((short)local_10 < 0) {
          local_10 = 0;
        }
      }
      else if ((uVar3 & 0x3c0) == 0x200) {
        local_20 = local_20 - 4;
        local_10 = local_10 + 8;
        if (0xff < (short)local_10) {
          local_10 = 0xff;
        }
      }
      else if ((uVar3 & 0x3c0) == 0x240) {
        local_20 = local_20 - 4;
        local_10 = local_10 - 8;
        if ((short)local_10 < 0) {
          local_10 = 0;
        }
      }
      else if ((uVar3 & 0x3c0) == 0x3c0) {
        local_20 = local_20 - 4;
        local_10 = local_10 - 0x14;
        if ((short)local_10 < 0) {
          local_10 = 0;
        }
      }
      else if ((uVar3 & 0x3e0) == 0x380) {
        local_20 = local_20 - 5;
        local_10 = local_10 + 0x14;
        if (0xff < (short)local_10) {
          local_10 = 0xff;
        }
      }
      else {
        local_20 = local_20 - 10;
        local_10 = ((ushort)uVar3 & 0x1f) << 3;
      }
      if (local_20 < 10) {
        do {
          pbVar2 = local_3c + 1;
          local_1c = local_1c << 8 | (uint)*local_3c;
          local_20 = local_20 + 8;
          local_3c = pbVar2;
        } while (local_20 < 0x18);
      }
      uVar3 = local_1c >> (local_20 - 10 & 0xff);
      if ((uVar3 & 0x200) == 0) {
        local_20 = local_20 - 1;
      }
      else if ((uVar3 & 0x380) == 0x280) {
        local_20 = local_20 - 3;
        local_e = local_e + 3;
        if (0xff < (short)local_e) {
          local_e = 0xff;
        }
      }
      else if ((uVar3 & 0x380) == 0x300) {
        local_20 = local_20 - 3;
        local_e = local_e - 3;
        if ((short)local_e < 0) {
          local_e = 0;
        }
      }
      else if ((uVar3 & 0x3c0) == 0x200) {
        local_20 = local_20 - 4;
        local_e = local_e + 8;
        if (0xff < (short)local_e) {
          local_e = 0xff;
        }
      }
      else if ((uVar3 & 0x3c0) == 0x240) {
        local_20 = local_20 - 4;
        local_e = local_e - 8;
        if ((short)local_e < 0) {
          local_e = 0;
        }
      }
      else if ((uVar3 & 0x3c0) == 0x3c0) {
        local_20 = local_20 - 4;
        local_e = local_e - 0x14;
        if ((short)local_e < 0) {
          local_e = 0;
        }
      }
      else if ((uVar3 & 0x3e0) == 0x380) {
        local_20 = local_20 - 5;
        local_e = local_e + 0x14;
        if (0xff < (short)local_e) {
          local_e = 0xff;
        }
      }
      else {
        local_20 = local_20 - 10;
        local_e = ((ushort)uVar3 & 0x1f) << 3;
      }
      *(ushort *)(param_2 + local_c) = local_e * 0x100 + local_10;
    }
  }
  return;
}



/* ===== FUN_00028090 @ 00028090 size=924 ===== */

void FUN_00028090(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *local_18;
  uint *local_14;
  int local_10;
  int local_c;
  
  local_14 = param_1;
  for (local_c = 0; local_c < param_4; local_c = local_c + 2) {
    local_18 = (uint *)(param_2 + param_3 * local_c);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 4) {
      *local_18 = *local_14;
      *local_18 = *local_18 ^ 0x80808080;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    if (param_5 == 0) {
      iVar1 = param_3 * local_c;
      iVar2 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      iVar2 = param_4 * param_3 + (iVar2 >> 2);
    }
    else {
      iVar2 = param_4 * param_3 * 5;
      iVar1 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar3 = param_3 * local_c;
      iVar2 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      iVar2 = (iVar1 >> 2) + (iVar2 >> 2);
    }
    local_18 = (uint *)(param_2 + iVar2);
    for (local_10 = 0; local_10 < param_3 / 2; local_10 = local_10 + 4) {
      *local_18 = *local_14;
      *local_18 = *local_18 ^ 0x80808080;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    local_18 = (uint *)(param_2 + param_3 * local_c + param_3);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 4) {
      *local_18 = *local_14;
      *local_18 = *local_18 ^ 0x80808080;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    if (param_5 == 0) {
      iVar2 = param_4 * param_3 * 5;
      iVar1 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar3 = param_3 * local_c;
      iVar2 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      iVar2 = (iVar1 >> 2) + (iVar2 >> 2);
    }
    else {
      iVar1 = param_3 * local_c;
      iVar2 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      iVar2 = param_4 * param_3 + (iVar2 >> 2);
    }
    local_18 = (uint *)(param_2 + iVar2);
    for (local_10 = 0; local_10 < param_3 / 2; local_10 = local_10 + 4) {
      *local_18 = *local_14;
      *local_18 = *local_18 ^ 0x80808080;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
  }
  return;
}



/* ===== FUN_0002842c @ 0002842c size=796 ===== */

void FUN_0002842c(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *local_18;
  uint *local_14;
  int local_10;
  int local_c;
  
  local_14 = param_1;
  for (local_c = 0; local_c < param_4; local_c = local_c + 2) {
    local_18 = (uint *)(param_2 + param_3 * local_c);
    for (local_10 = 0; local_10 < param_3 * 2; local_10 = local_10 + 4) {
      *local_18 = *local_14;
      *local_18 = *local_18 ^ 0x80808080;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    if (param_5 == 0) {
      iVar1 = param_3 * local_c;
      iVar2 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      iVar2 = param_4 * param_3 + (iVar2 >> 2);
    }
    else {
      iVar2 = param_4 * param_3 * 5;
      iVar1 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar3 = param_3 * local_c;
      iVar2 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      iVar2 = (iVar1 >> 2) + (iVar2 >> 2);
    }
    local_18 = (uint *)(param_2 + iVar2);
    for (local_10 = 0; local_10 < param_3 / 2; local_10 = local_10 + 4) {
      *local_18 = *local_14;
      *local_18 = *local_18 ^ 0x80808080;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    if (param_5 == 0) {
      iVar2 = param_4 * param_3 * 5;
      iVar1 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar3 = param_3 * local_c;
      iVar2 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      iVar2 = (iVar1 >> 2) + (iVar2 >> 2);
    }
    else {
      iVar1 = param_3 * local_c;
      iVar2 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      iVar2 = param_4 * param_3 + (iVar2 >> 2);
    }
    local_18 = (uint *)(param_2 + iVar2);
    for (local_10 = 0; local_10 < param_3 / 2; local_10 = local_10 + 4) {
      *local_18 = *local_14;
      *local_18 = *local_18 ^ 0x80808080;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
  }
  return;
}



/* ===== FUN_00028748 @ 00028748 size=924 ===== */

void FUN_00028748(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *local_18;
  uint *local_14;
  int local_10;
  int local_c;
  
  local_14 = param_1;
  for (local_c = 0; local_c < param_4; local_c = local_c + 2) {
    local_18 = (uint *)(param_2 + param_3 * local_c);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 4) {
      *local_18 = *local_14;
      *local_18 = *local_18 ^ 0x80808080;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    if (param_5 == 0) {
      iVar1 = param_3 * local_c;
      iVar2 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      iVar2 = param_4 * param_3 + (iVar2 >> 2);
    }
    else {
      iVar2 = param_4 * param_3 * 5;
      iVar1 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar3 = param_3 * local_c;
      iVar2 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      iVar2 = (iVar1 >> 2) + (iVar2 >> 2);
    }
    local_18 = (uint *)(param_2 + iVar2);
    for (local_10 = 0; local_10 < param_3 / 2; local_10 = local_10 + 4) {
      *local_18 = *local_14;
      *local_18 = *local_18 ^ 0x80808080;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    if (param_5 == 0) {
      iVar2 = param_4 * param_3 * 5;
      iVar1 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar3 = param_3 * local_c;
      iVar2 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      iVar2 = (iVar1 >> 2) + (iVar2 >> 2);
    }
    else {
      iVar1 = param_3 * local_c;
      iVar2 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      iVar2 = param_4 * param_3 + (iVar2 >> 2);
    }
    local_18 = (uint *)(param_2 + iVar2);
    for (local_10 = 0; local_10 < param_3 / 2; local_10 = local_10 + 4) {
      *local_18 = *local_14;
      *local_18 = *local_18 ^ 0x80808080;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    local_18 = (uint *)(param_2 + param_3 * local_c + param_3);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 4) {
      *local_18 = *local_14;
      *local_18 = *local_18 ^ 0x80808080;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
  }
  return;
}



/* ===== FUN_00028ae4 @ 00028ae4 size=468 ===== */

void FUN_00028ae4(undefined1 *param_1,undefined1 *param_2,size_t param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_10;
  int local_c;
  
  if (param_5 == 0) {
    local_14 = param_2 + param_4 * param_3;
    iVar3 = param_4 * param_3;
    iVar2 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    local_18 = local_14 + (iVar2 >> 2);
  }
  else {
    local_18 = param_2 + param_4 * param_3;
    iVar3 = param_4 * param_3;
    iVar2 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    local_14 = local_18 + (iVar2 >> 2);
  }
  local_20 = param_2;
  local_1c = param_1;
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 2) {
    memcpy(local_20,local_1c,param_3);
    local_1c = local_1c + param_3;
    local_20 = local_20 + param_3;
    for (local_c = 0; local_c < (int)param_3; local_c = local_c + 2) {
      *local_18 = *local_1c;
      puVar1 = local_20 + 1;
      *local_20 = local_1c[1];
      puVar4 = local_1c + 3;
      *local_14 = local_1c[2];
      local_1c = local_1c + 4;
      local_20 = local_20 + 2;
      *puVar1 = *puVar4;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
  }
  return;
}



/* ===== FUN_00028cb8 @ 00028cb8 size=404 ===== */

void FUN_00028cb8(void *param_1,void *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  void *local_20;
  void *local_1c;
  void *local_14;
  void *local_10;
  int local_c;
  
  if (param_5 == 0) {
    local_10 = (void *)((int)param_2 + param_4 * param_3);
    iVar2 = param_4 * param_3;
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    local_14 = (void *)((int)local_10 + (iVar1 >> 2));
  }
  else {
    local_14 = (void *)((int)param_2 + param_4 * param_3);
    iVar2 = param_4 * param_3;
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    local_10 = (void *)((int)local_14 + (iVar1 >> 2));
  }
  param_4 = param_4 * param_3;
  iVar1 = param_4 + 0xff;
  if (-1 < param_4) {
    iVar1 = param_4;
  }
  local_20 = param_2;
  local_1c = param_1;
  for (local_c = 0; local_c < iVar1 >> 8; local_c = local_c + 1) {
    memcpy(local_20,local_1c,0x100);
    local_20 = (void *)((int)local_20 + 0x100);
    memcpy(local_10,(void *)((int)local_1c + 0x100),0x40);
    local_10 = (void *)((int)local_10 + 0x40);
    memcpy(local_14,(void *)((int)local_1c + 0x140),0x40);
    local_1c = (void *)((int)local_1c + 0x180);
    local_14 = (void *)((int)local_14 + 0x40);
  }
  return;
}



/* ===== FUN_00028e4c @ 00028e4c size=424 ===== */

void FUN_00028e4c(undefined1 *param_1,void *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  void *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_10;
  int local_c;
  
  if (param_5 == 0) {
    local_14 = (undefined1 *)((int)param_2 + param_4 * param_3);
    iVar2 = param_4 * param_3;
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    local_18 = local_14 + (iVar1 >> 2);
  }
  else {
    local_18 = (undefined1 *)((int)param_2 + param_4 * param_3);
    iVar2 = param_4 * param_3;
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    local_14 = local_18 + (iVar1 >> 2);
  }
  local_20 = param_2;
  local_1c = param_1;
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 2) {
    memcpy(local_20,local_1c,param_3 << 1);
    local_1c = local_1c + param_3 * 2;
    local_20 = (void *)((int)local_20 + param_3 * 2);
    for (local_c = 0; local_c < param_3; local_c = local_c + 2) {
      puVar3 = local_1c + 1;
      *local_14 = *local_1c;
      local_1c = local_1c + 2;
      *local_18 = *puVar3;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
  }
  return;
}



/* ===== FUN_00028ff4 @ 00028ff4 size=660 ===== */

undefined4 FUN_00028ff4(int param_1,int param_2,uint param_3)

{
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48 [9];
  char local_24 [4];
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_9;
  
  local_a = 0;
  local_c = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 8;
  local_48[0] = *(int *)(DAT_00029288 + 0x29060);
  local_48[1] = *(undefined4 *)(DAT_00029288 + 0x29064);
  local_48[2] = *(undefined4 *)(DAT_00029288 + 0x29068);
  local_48[3] = *(undefined4 *)(DAT_00029288 + 0x2906c);
  local_48[4] = *(undefined4 *)(DAT_00029288 + 0x29070);
  local_48[5] = *(undefined4 *)(DAT_00029288 + 0x29074);
  local_48[6] = *(undefined4 *)(DAT_00029288 + 0x29078);
  local_48[7] = *(undefined4 *)(DAT_00029288 + 0x2907c);
  local_48[8] = *(undefined4 *)(DAT_00029288 + 0x29080);
  local_58 = *(undefined4 *)(DAT_0002928c + 0x29088);
  uStack_54 = *(undefined4 *)(DAT_0002928c + 0x2908c);
  uStack_50 = *(undefined4 *)(DAT_0002928c + 0x29090);
  uStack_4c = *(undefined4 *)(DAT_0002928c + 0x29094);
  uStack_68 = *(undefined4 *)(DAT_00029290 + 0x2909c);
  uStack_64 = *(undefined4 *)(DAT_00029290 + 0x290a0);
  uStack_60 = *(undefined4 *)(DAT_00029290 + 0x290a4);
  uStack_5c = *(undefined4 *)(DAT_00029290 + 0x290a8);
  local_24[0] = '\0';
  local_24[1] = 0;
  do {
    local_9 = 0;
    if (param_3 <= local_18) {
      return 0;
    }
    while( true ) {
      local_b = 0;
      local_20 = 0;
      if (1 < local_9) break;
      while (local_48[local_20] < (int)(uint)local_c) {
        if (local_1c == 8) {
          local_a = *(byte *)(param_2 + local_14);
          local_14 = local_14 + 1;
          local_1c = 0;
        }
        local_c = local_b << 1 | local_a >> 7;
        local_a = local_a << 1;
        local_1c = local_1c + 1;
        local_20 = local_20 + 1;
        local_b = local_c;
        if (8 < local_20) {
          return 0xffffffff;
        }
      }
      for (local_10 = 0; local_10 < 0x11; local_10 = local_10 + 1) {
        if (local_10 == 0x10) {
          return 0xffffffff;
        }
        if (local_c == *(byte *)((int)&local_58 + local_10)) {
          local_24[local_9] = *(char *)((int)&uStack_68 + local_10);
          break;
        }
      }
      local_9 = local_9 + 1;
    }
    *(char *)(param_1 + local_18) = local_24[0] << 4 | local_24[1];
    local_18 = local_18 + 1;
  } while( true );
}



/* ===== FUN_00029294 @ 00029294 size=2000 ===== */

undefined4 FUN_00029294(int param_1,int param_2,size_t param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int local_6c [15];
  undefined4 uStack_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  byte local_1e;
  byte local_1d;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_1c = 0;
  local_c = 0;
  local_1d = 0;
  local_1e = 0;
  local_18 = 0;
  local_6c[0] = *(int *)(DAT_00029a64 + 0x292e4);
  local_6c[1] = *(undefined4 *)(DAT_00029a64 + 0x292e8);
  local_6c[2] = *(undefined4 *)(DAT_00029a64 + 0x292ec);
  local_6c[3] = *(undefined4 *)(DAT_00029a64 + 0x292f0);
  local_6c[4] = *(undefined4 *)(DAT_00029a64 + 0x292f4);
  local_6c[5] = *(undefined4 *)(DAT_00029a64 + 0x292f8);
  local_6c[6] = *(undefined4 *)(DAT_00029a64 + 0x292fc);
  local_6c[7] = *(undefined4 *)(DAT_00029a64 + 0x29300);
  local_6c[8] = *(undefined4 *)(DAT_00029a64 + 0x29304);
  local_6c[9] = *(undefined4 *)(DAT_00029a64 + 0x29308);
  local_6c[10] = *(undefined4 *)(DAT_00029a64 + 0x2930c);
  local_6c[0xb] = *(undefined4 *)(DAT_00029a64 + 0x29310);
  local_6c[0xc] = *(undefined4 *)(DAT_00029a64 + 0x29314);
  local_6c[0xd] = *(undefined4 *)(DAT_00029a64 + 0x29318);
  local_6c[0xe] = *(undefined4 *)(DAT_00029a64 + 0x2931c);
  uStack_30 = *(undefined4 *)(DAT_00029a64 + 0x29320);
  local_24 = malloc(param_3);
  if (local_24 == (byte *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_10 = 0; local_10 < (int)param_3; local_10 = local_10 + 1) {
      local_24[local_10] = 0x80;
    }
    local_28 = malloc(param_3);
    if (local_28 == (byte *)0x0) {
      free(local_24);
      uVar1 = 0xffffffff;
    }
    else {
      for (local_10 = 0; local_10 < (int)param_3; local_10 = local_10 + 1) {
        local_28[local_10] = 0x80;
      }
      local_2c = malloc(param_3);
      if (local_2c == (byte *)0x0) {
        free(local_24);
        free(local_28);
        uVar1 = 0xffffffff;
      }
      else {
        for (local_10 = 0; local_10 < (int)param_3; local_10 = local_10 + 1) {
          local_2c[local_10] = 0x80;
        }
        for (local_14 = 0; local_14 < param_4 / 2; local_14 = local_14 + 1) {
          for (local_10 = 0; local_10 < (int)param_3 / 2; local_10 = local_10 + 1) {
            local_1e = *(byte *)(param_2 + local_18) & 0xf;
            local_1d = *(byte *)(param_2 + local_18) >> 4;
            local_18 = local_18 + 1;
            local_1c = local_6c[local_1d];
            if (local_10 == 0) {
              uVar2 = (uint)*local_24;
            }
            else {
              uVar2 = ((uint)local_24[local_10] +
                      (uint)*(byte *)(param_1 + (param_3 * local_14 + local_10) * 2 + -2)) / 2;
            }
            local_c = local_6c[local_1d] + uVar2;
            if (local_c < 0) {
              local_c = 0;
            }
            else if (0xfe < local_c) {
              local_c = 0xff;
            }
            *(byte *)(param_1 + (param_3 * local_14 + local_10) * 2) = (byte)local_c;
            local_24[local_10] = (byte)local_c;
            local_1c = local_6c[local_1e];
            if (local_10 == 0) {
              local_c = local_1c + (uint)local_28[1];
            }
            else if (local_10 * 2 == param_3 - 2) {
              local_c = local_1c +
                        ((uint)local_28[local_10] +
                        (uint)*(byte *)(param_1 + (param_3 * local_14 + local_10) * 2 + -1)) / 2;
            }
            else {
              local_c = local_1c +
                        ((uint)local_28[local_10 + 1] +
                        (uint)*(byte *)(param_1 + (param_3 * local_14 + local_10) * 2 + -1)) / 2;
            }
            if (local_c < 0) {
              local_c = 0;
            }
            else if (0xfe < local_c) {
              local_c = 0xff;
            }
            *(byte *)(param_1 + (param_3 * local_14 + local_10) * 2 + 1) = (byte)local_c;
            local_28[local_10] = (byte)local_c;
          }
          for (local_10 = 0; local_10 < (int)param_3 / 2; local_10 = local_10 + 1) {
            local_1e = *(byte *)(param_2 + local_18) & 0xf;
            local_1d = *(byte *)(param_2 + local_18) >> 4;
            local_18 = local_18 + 1;
            local_1c = local_6c[local_1d];
            if (local_10 == 0) {
              uVar2 = (uint)*local_28;
            }
            else {
              uVar2 = ((uint)local_28[local_10] +
                      (uint)*(byte *)(param_1 + param_3 * (local_14 * 2 + 1) + local_10 * 2 + -2)) /
                      2;
            }
            local_c = local_6c[local_1d] + uVar2;
            if (local_c < 0) {
              local_c = 0;
            }
            else if (0xfe < local_c) {
              local_c = 0xff;
            }
            *(byte *)(param_1 + param_3 * (local_14 * 2 + 1) + local_10 * 2) = (byte)local_c;
            local_28[local_10] = (byte)local_c;
            local_1c = local_6c[local_1e];
            if (local_10 == 0) {
              uVar2 = (uint)*local_2c;
            }
            else {
              uVar2 = ((uint)local_2c[local_10] +
                      (uint)*(byte *)(param_1 + param_3 * (local_14 * 2 + 1) + local_10 * 2 + -1)) /
                      2;
            }
            local_c = local_6c[local_1e] + uVar2;
            if (local_c < 0) {
              local_c = 0;
            }
            else if (0xfe < local_c) {
              local_c = 0xff;
            }
            *(byte *)(param_1 + param_3 * (local_14 * 2 + 1) + local_10 * 2 + 1) = (byte)local_c;
            local_2c[local_10] = (byte)local_c;
          }
        }
        free(local_28);
        free(local_24);
        free(local_2c);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



/* ===== FUN_00029a68 @ 00029a68 size=168 ===== */

void FUN_00029a68(int param_1,undefined4 param_2,int param_3,int param_4)

{
  size_t __size;
  void *__ptr;
  
  __size = (param_4 * param_3) / 2;
  __ptr = malloc(__size);
  if (__ptr != (void *)0x0) {
    FUN_00028ff4(__ptr,param_1 + 0x50,__size);
    FUN_00029294(param_2,__ptr,param_3,param_4);
  }
  free(__ptr);
  return;
}



/* ===== FUN_00029b10 @ 00029b10 size=2076 ===== */

void FUN_00029b10(byte *param_1,byte *param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  int local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  if (param_5 == 0) {
    bVar1 = (byte)((int)((uint)param_1[1] + (uint)*param_2 + 1) >> 1);
    if (param_6 == 0) {
      *param_3 = param_2[1];
      param_3[1] = bVar1;
      param_3[2] = *param_1;
    }
    else {
      *param_3 = *param_1;
      param_3[1] = bVar1;
      param_3[2] = param_2[1];
    }
    local_1c = param_3 + 3;
    local_20 = param_4 + -1;
    local_18 = param_2;
    local_14 = param_1;
  }
  else {
    if (param_6 == 0) {
      *param_3 = *param_2;
      param_3[1] = *param_1;
      param_3[2] = param_1[1];
    }
    else {
      *param_3 = param_1[1];
      param_3[1] = *param_1;
      param_3[2] = *param_2;
    }
    local_1c = param_3 + 3;
    bVar2 = (byte)(((uint)*param_1 + (uint)param_1[2] + (uint)param_2[1] + 1) / 3);
    bVar1 = (byte)((int)((uint)*param_2 + (uint)param_2[2] + 1) >> 1);
    if (param_6 == 0) {
      *local_1c = bVar1;
      param_3[4] = bVar2;
      param_3[5] = param_1[1];
    }
    else {
      *local_1c = param_1[1];
      param_3[4] = bVar2;
      param_3[5] = bVar1;
    }
    local_1c = param_3 + 6;
    local_14 = param_1 + 1;
    local_18 = param_2 + 1;
    local_20 = param_4 + -2;
  }
  if (param_6 == 0) {
    for (; 2 < local_20; local_20 = local_20 + -2) {
      bVar1 = *local_14;
      bVar2 = local_14[2];
      *local_1c = local_18[1];
      local_1c[1] = local_14[1];
      local_1c[2] = (byte)((int)((uint)bVar1 + (uint)bVar2 + 1) >> 1);
      bVar1 = local_14[1];
      bVar2 = local_14[3];
      bVar3 = local_18[2];
      local_1c[3] = (byte)((int)((uint)local_18[1] + (uint)local_18[3] + 1) >> 1);
      pbVar6 = local_1c + 5;
      local_1c[4] = (byte)(((uint)bVar1 + (uint)bVar2 + (uint)bVar3 + 1) / 3);
      local_1c = local_1c + 6;
      *pbVar6 = local_14[2];
      local_14 = local_14 + 2;
      local_18 = local_18 + 2;
    }
  }
  else {
    for (; 2 < local_20; local_20 = local_20 + -2) {
      *local_1c = (byte)((int)((uint)*local_14 + (uint)local_14[2] + 1) >> 1);
      local_1c[1] = local_14[1];
      local_1c[2] = local_18[1];
      bVar1 = local_14[1];
      bVar2 = local_14[3];
      bVar3 = local_18[2];
      bVar4 = local_18[1];
      bVar5 = local_18[3];
      local_1c[3] = local_14[2];
      pbVar6 = local_1c + 5;
      local_1c[4] = (byte)(((uint)bVar1 + (uint)bVar2 + (uint)bVar3 + 1) / 3);
      local_1c = local_1c + 6;
      *pbVar6 = (byte)((int)((uint)bVar4 + (uint)bVar5 + 1) >> 1);
      local_14 = local_14 + 2;
      local_18 = local_18 + 2;
    }
  }
  pbVar6 = local_1c;
  if (local_20 == 2) {
    bVar1 = (byte)((int)((uint)*local_14 + (uint)local_14[2] + 1) >> 1);
    if (param_6 == 0) {
      *local_1c = local_18[1];
      local_1c[1] = local_14[1];
      local_1c[2] = bVar1;
    }
    else {
      *local_1c = bVar1;
      local_1c[1] = local_14[1];
      local_1c[2] = local_18[1];
    }
    local_1c = local_1c + 3;
    bVar1 = (byte)((int)((uint)local_14[1] + (uint)local_18[2] + 1) >> 1);
    if (param_6 == 0) {
      *local_1c = local_18[1];
      pbVar6[4] = bVar1;
      pbVar6[5] = local_14[2];
    }
    else {
      *local_1c = local_14[2];
      pbVar6[4] = bVar1;
      pbVar6[5] = local_18[1];
    }
  }
  else if (param_6 == 0) {
    *local_1c = local_18[1];
    local_1c[1] = local_14[1];
    local_1c[2] = *local_14;
  }
  else {
    *local_1c = *local_14;
    local_1c[1] = local_14[1];
    local_1c[2] = local_18[1];
  }
  return;
}



/* ===== FUN_0002a32c @ 0002a32c size=3200 ===== */

void FUN_0002a32c(byte *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 uint param_7,uint param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  int local_28;
  byte *local_20;
  byte *local_1c;
  
  FUN_00029b10(param_1,param_1 + param_5,param_2,param_3,param_7,param_8);
  local_20 = (byte *)(param_2 + param_3 * 3);
  local_1c = param_1;
  for (local_28 = param_4 + -2; pbVar9 = local_20, local_28 != 0; local_28 = local_28 + -1) {
    pbVar10 = local_1c + param_3 + -2;
    if (param_7 == 0) {
      bVar1 = (byte)((int)((uint)*local_1c + (uint)local_1c[param_5 * 2] + 1) >> 1);
      if (param_8 == 0) {
        *local_20 = local_1c[param_5 + 1];
        pbVar9 = local_20 + 2;
        local_20[1] = local_1c[param_5];
        local_20 = local_20 + 3;
        *pbVar9 = bVar1;
      }
      else {
        *local_20 = bVar1;
        pbVar9 = local_20 + 2;
        local_20[1] = local_1c[param_5];
        local_20 = local_20 + 3;
        *pbVar9 = local_1c[param_5 + 1];
      }
    }
    else {
      bVar2 = (byte)(((uint)*local_1c + (uint)local_1c[param_5 * 2] + (uint)local_1c[param_5 + 1] +
                     1) / 3);
      bVar1 = (byte)((int)((uint)local_1c[1] + (uint)local_1c[param_5 * 2 + 1] + 1) >> 1);
      if (param_8 == 0) {
        *local_20 = local_1c[param_5];
        local_20[1] = bVar2;
        local_20[2] = bVar1;
      }
      else {
        *local_20 = bVar1;
        local_20[1] = bVar2;
        local_20[2] = local_1c[param_5];
      }
      local_20 = local_20 + 3;
      bVar2 = (byte)((int)((uint)local_1c[param_5] + (uint)local_1c[param_5 + 2] + 1) >> 1);
      if (param_8 == 0) {
        *local_20 = bVar2;
        pbVar9[4] = local_1c[param_5 + 1];
        pbVar9[5] = bVar1;
      }
      else {
        *local_20 = bVar1;
        pbVar9[4] = local_1c[param_5 + 1];
        pbVar9[5] = bVar2;
      }
      local_20 = pbVar9 + 6;
      local_1c = local_1c + 1;
    }
    if (param_8 == 0) {
      for (; local_1c <= pbVar10 + -2; local_1c = local_1c + 2) {
        bVar1 = *local_1c;
        bVar2 = local_1c[2];
        bVar3 = local_1c[param_5 * 2];
        bVar4 = local_1c[(param_5 + 1) * 2];
        bVar5 = local_1c[1];
        bVar6 = local_1c[param_5];
        bVar7 = local_1c[param_5 + 2];
        bVar8 = local_1c[param_5 * 2 + 1];
        *local_20 = local_1c[param_5 + 1];
        local_20[1] = (byte)((int)((uint)bVar5 + (uint)bVar6 + (uint)bVar7 + (uint)bVar8 + 2) >> 2);
        local_20[2] = (byte)((int)((uint)bVar1 + (uint)bVar2 + (uint)bVar3 + (uint)bVar4 + 2) >> 2);
        bVar1 = local_1c[2];
        bVar2 = local_1c[(param_5 + 1) * 2];
        local_20[3] = (byte)((int)((uint)local_1c[param_5 + 1] + (uint)local_1c[param_5 + 3] + 1) >>
                            1);
        pbVar9 = local_20 + 5;
        local_20[4] = local_1c[param_5 + 2];
        local_20 = local_20 + 6;
        *pbVar9 = (byte)((int)((uint)bVar1 + (uint)bVar2 + 1) >> 1);
      }
    }
    else {
      for (; local_1c <= pbVar10 + -2; local_1c = local_1c + 2) {
        bVar1 = local_1c[1];
        bVar2 = local_1c[param_5];
        bVar3 = local_1c[param_5 + 2];
        bVar4 = local_1c[param_5 * 2 + 1];
        *local_20 = (byte)((int)((uint)*local_1c + (uint)local_1c[2] + (uint)local_1c[param_5 * 2] +
                                 (uint)local_1c[(param_5 + 1) * 2] + 2) >> 2);
        local_20[1] = (byte)((int)((uint)bVar1 + (uint)bVar2 + (uint)bVar3 + (uint)bVar4 + 2) >> 2);
        local_20[2] = local_1c[param_5 + 1];
        bVar1 = local_1c[param_5 + 1];
        bVar2 = local_1c[param_5 + 3];
        local_20[3] = (byte)((int)((uint)local_1c[2] + (uint)local_1c[(param_5 + 1) * 2] + 1) >> 1);
        pbVar9 = local_20 + 5;
        local_20[4] = local_1c[param_5 + 2];
        local_20 = local_20 + 6;
        *pbVar9 = (byte)((int)((uint)bVar1 + (uint)bVar2 + 1) >> 1);
      }
    }
    pbVar9 = local_20;
    if (local_1c < pbVar10) {
      bVar1 = (byte)((int)((uint)*local_1c + (uint)local_1c[2] + (uint)local_1c[param_5 * 2] +
                           (uint)local_1c[(param_5 + 1) * 2] + 2) >> 2);
      bVar2 = (byte)((int)((uint)local_1c[1] + (uint)local_1c[param_5] + (uint)local_1c[param_5 + 2]
                           + (uint)local_1c[param_5 * 2 + 1] + 2) >> 2);
      if (param_8 == 0) {
        *local_20 = local_1c[param_5 + 1];
        local_20[1] = bVar2;
        local_20[2] = bVar1;
      }
      else {
        *local_20 = bVar1;
        local_20[1] = bVar2;
        local_20[2] = local_1c[param_5 + 1];
      }
      local_20 = local_20 + 3;
      bVar1 = (byte)((int)((uint)local_1c[2] + (uint)local_1c[(param_5 + 1) * 2] + 1) >> 1);
      if (param_8 == 0) {
        *local_20 = local_1c[param_5 + 1];
        pbVar9[4] = local_1c[param_5 + 2];
        pbVar9[5] = bVar1;
      }
      else {
        *local_20 = bVar1;
        pbVar9[4] = local_1c[param_5 + 2];
        pbVar9[5] = local_1c[param_5 + 1];
      }
      local_20 = pbVar9 + 6;
      local_1c = local_1c + 1;
    }
    else {
      bVar2 = (byte)(((uint)local_1c[1] + (uint)local_1c[param_5 * 2 + 1] + (uint)local_1c[param_5]
                     + 1) / 3);
      bVar1 = (byte)((int)((uint)*local_1c + (uint)local_1c[param_5 * 2] + 1) >> 1);
      if (param_8 == 0) {
        *local_20 = local_1c[param_5 + 1];
        pbVar9 = local_20 + 2;
        local_20[1] = bVar2;
        local_20 = local_20 + 3;
        *pbVar9 = bVar1;
      }
      else {
        *local_20 = bVar1;
        pbVar9 = local_20 + 2;
        local_20[1] = bVar2;
        local_20 = local_20 + 3;
        *pbVar9 = local_1c[param_5 + 1];
      }
    }
    local_1c = local_1c + (param_5 - param_3) + 2;
    param_8 = (uint)(param_8 == 0);
    param_7 = (uint)(param_7 == 0);
  }
  FUN_00029b10(local_1c + param_5,local_1c,local_20,param_3,param_7 == 0,param_8 == 0);
  return;
}



/* ===== FUN_0002afac @ 0002afac size=188 ===== */

void FUN_0002afac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_6 == 0x47524247) || (param_6 == 0x47425247)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  if ((param_6 == 0x31384142) || (param_6 == 0x47524247)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_0002a32c(param_1,param_2,param_3,param_4,param_5,param_6,uVar1,uVar2);
  return;
}



/* ===== FUN_0002b068 @ 0002b068 size=188 ===== */

void FUN_0002b068(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_6 == 0x47524247) || (param_6 == 0x47425247)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  if ((param_6 == 0x31384142) || (param_6 == 0x47524247)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  FUN_0002a32c(param_1,param_2,param_3,param_4,param_5,param_6,uVar1,uVar2);
  return;
}



/* ===== FUN_0002b124 @ 0002b124 size=2292 ===== */

void FUN_0002b124(byte *param_1,byte *param_2,undefined1 *param_3,int param_4,int param_5,
                 int param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int local_20;
  undefined1 *local_1c;
  byte *local_18;
  byte *local_14;
  
  if (param_5 == 0) {
    if (param_6 == 0) {
      *param_3 = (char)((int)((uint)*param_1 * 0x2105 + ((uint)param_1[1] + (uint)*param_2) * 0x2069
                              + (uint)param_2[1] * 0xc97 + 0x80000) >> 0xf);
    }
    else {
      *param_3 = (char)((int)((uint)param_2[1] * 0x2105 +
                              ((uint)param_1[1] + (uint)*param_2) * 0x2069 + (uint)*param_1 * 0xc97
                             + 0x80000) >> 0xf);
    }
    local_1c = param_3 + 1;
    local_20 = param_4 + -1;
    local_18 = param_2;
    local_14 = param_1;
  }
  else {
    if (param_6 == 0) {
      *param_3 = (char)((int)((uint)param_1[1] * 0x2105 + (uint)*param_1 * 0x40d2 +
                              (uint)*param_2 * 0xc97 + 0x80000) >> 0xf);
    }
    else {
      *param_3 = (char)((int)((uint)*param_2 * 0x2105 + (uint)*param_1 * 0x40d2 +
                              (uint)param_1[1] * 0xc97 + 0x80000) >> 0xf);
    }
    local_1c = param_3 + 1;
    iVar2 = (uint)*param_1 + (uint)param_1[2] + (uint)param_2[1];
    if (param_6 == 0) {
      *local_1c = (char)((int)((uint)param_1[1] * 0x2105 + iVar2 * 0x159b +
                               ((uint)*param_2 + (uint)param_2[2]) * 0x64b + 0x80000) >> 0xf);
    }
    else {
      *local_1c = (char)((int)(((uint)*param_2 + (uint)param_2[2]) * 0x1082 + iVar2 * 0x159b +
                               (uint)param_1[1] * 0xc97 + 0x80000) >> 0xf);
    }
    local_1c = param_3 + 2;
    local_14 = param_1 + 1;
    local_18 = param_2 + 1;
    local_20 = param_4 + -2;
  }
  if (param_6 == 0) {
    for (; 2 < local_20; local_20 = local_20 + -2) {
      puVar1 = local_1c + 1;
      *local_1c = (char)((int)(((uint)*local_14 + (uint)local_14[2]) * 0x1082 +
                               (uint)local_14[1] * 0x40d2 + (uint)local_18[1] * 0xc97 + 0x80000) >>
                        0xf);
      local_1c = local_1c + 2;
      *puVar1 = (char)((int)((uint)local_14[2] * 0x2105 +
                             ((uint)local_14[1] + (uint)local_14[3] + (uint)local_18[2]) * 0x159b +
                             ((uint)local_18[1] + (uint)local_18[3]) * 0x64b + 0x80000) >> 0xf);
      local_14 = local_14 + 2;
      local_18 = local_18 + 2;
    }
  }
  else {
    for (; 2 < local_20; local_20 = local_20 + -2) {
      puVar1 = local_1c + 1;
      *local_1c = (char)((int)((uint)local_18[1] * 0x2105 + (uint)local_14[1] * 0x40d2 +
                               ((uint)*local_14 + (uint)local_14[2]) * 0x64b + 0x80000) >> 0xf);
      local_1c = local_1c + 2;
      *puVar1 = (char)((int)(((uint)local_18[1] + (uint)local_18[3]) * 0x1082 +
                             ((uint)local_14[1] + (uint)local_14[3] + (uint)local_18[2]) * 0x159b +
                             (uint)local_14[2] * 0xc97 + 0x80000) >> 0xf);
      local_14 = local_14 + 2;
      local_18 = local_18 + 2;
    }
  }
  if (local_20 == 2) {
    if (param_6 == 0) {
      *local_1c = (char)((int)(((uint)*local_14 + (uint)local_14[2]) * 0x1082 +
                               (uint)local_14[1] * 0x40d2 + (uint)local_18[1] * 0xc97 + 0x80000) >>
                        0xf);
    }
    else {
      *local_1c = (char)((int)((uint)local_18[1] * 0x2105 + (uint)local_14[1] * 0x40d2 +
                               ((uint)*local_14 + (uint)local_14[2]) * 0x64b + 0x80000) >> 0xf);
    }
    local_1c = local_1c + 1;
    if (param_6 == 0) {
      *local_1c = (char)((int)((uint)local_14[2] * 0x2105 +
                               ((uint)local_14[1] + (uint)local_18[2]) * 0x2069 +
                               (uint)local_18[1] * 0xc97 + 0x80000) >> 0xf);
    }
    else {
      *local_1c = (char)((int)((uint)local_18[1] * 0x2105 +
                               ((uint)local_14[1] + (uint)local_18[2]) * 0x2069 +
                               (uint)local_14[2] * 0xc97 + 0x80000) >> 0xf);
    }
  }
  else if (param_6 == 0) {
    *local_1c = (char)((int)((uint)*local_14 * 0x2105 + (uint)local_14[1] * 0x40d2 +
                             (uint)local_18[1] * 0xc97 + 0x80000) >> 0xf);
  }
  else {
    *local_1c = (char)((int)((uint)local_18[1] * 0x2105 + (uint)local_14[1] * 0x40d2 +
                             (uint)*local_14 * 0xc97 + 0x80000) >> 0xf);
  }
  return;
}



/* ===== FUN_0002ba18 @ 0002ba18 size=5088 ===== */

void FUN_0002ba18(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 int param_7)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  int local_70;
  byte *local_64;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_18;
  int local_14;
  
  bVar4 = false;
  bVar2 = false;
  bVar5 = false;
  bVar3 = false;
  if (param_7 == 0) {
    local_20 = (undefined1 *)(param_2 + param_4 * param_3);
    iVar8 = param_4 * param_3;
    iVar6 = iVar8 + 3;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    local_24 = local_20 + (iVar6 >> 2);
  }
  else {
    local_24 = (undefined1 *)(param_2 + param_4 * param_3);
    iVar8 = param_4 * param_3;
    iVar6 = iVar8 + 3;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    local_20 = local_24 + (iVar6 >> 2);
  }
  local_64 = (byte *)param_1;
  if (param_6 == 0x42474752) {
    for (local_18 = 0; local_18 < param_4; local_18 = local_18 + 2) {
      for (local_14 = 0; local_14 < param_3; local_14 = local_14 + 2) {
        bVar1 = *(byte *)((int)local_64 + local_14);
        iVar6 = (uint)*(byte *)((int)local_64 + local_14 + 1) +
                (uint)*(byte *)((int)local_64 + local_14 + param_5);
        uVar9 = (uint)*(byte *)((int)local_64 + local_14 + param_5 + 1);
        *local_20 = (char)((int)((uint)bVar1 * -0x130e + iVar6 * -0x12b5 + uVar9 * 0x3878 + 0x404000
                                ) >> 0xf);
        *local_24 = (char)((int)((uint)bVar1 * 0x3878 + iVar6 * -0x17a4 + uVar9 * -0x92f + 0x404000)
                          >> 0xf);
        local_24 = local_24 + 1;
        local_20 = local_20 + 1;
      }
      local_64 = (byte *)((int)local_64 + param_5 * 2);
    }
  }
  else if (param_6 < 0x42474753) {
    if (param_6 == 0x31384142) {
      for (local_18 = 0; local_18 < param_4; local_18 = local_18 + 2) {
        for (local_14 = 0; local_14 < param_3; local_14 = local_14 + 2) {
          bVar1 = *(byte *)((int)local_64 + local_14);
          iVar6 = (uint)*(byte *)((int)local_64 + local_14 + 1) +
                  (uint)*(byte *)((int)local_64 + local_14 + param_5);
          uVar9 = (uint)*(byte *)((int)local_64 + local_14 + param_5 + 1);
          *local_20 = (char)((int)(uVar9 * -0x130e + iVar6 * -0x12b5 + (uint)bVar1 * 0x3878 +
                                  0x404000) >> 0xf);
          *local_24 = (char)((int)(uVar9 * 0x3878 + iVar6 * -0x17a4 + (uint)bVar1 * -0x92f +
                                  0x404000) >> 0xf);
          local_24 = local_24 + 1;
          local_20 = local_20 + 1;
        }
        local_64 = (byte *)((int)local_64 + param_5 * 2);
      }
      bVar4 = true;
      bVar2 = true;
    }
  }
  else if (param_6 == 0x47425247) {
    for (local_18 = 0; local_18 < param_4; local_18 = local_18 + 2) {
      for (local_14 = 0; local_14 < param_3; local_14 = local_14 + 2) {
        uVar9 = (uint)*(byte *)((int)local_64 + local_14 + 1);
        uVar10 = (uint)*(byte *)((int)local_64 + local_14 + param_5);
        iVar6 = (uint)*(byte *)((int)local_64 + local_14) +
                (uint)*(byte *)((int)local_64 + local_14 + param_5 + 1);
        *local_20 = (char)((int)(uVar9 * -0x130e + iVar6 * -0x12b5 + uVar10 * 0x3878 + 0x404000) >>
                          0xf);
        *local_24 = (char)((int)(uVar9 * 0x3878 + iVar6 * -0x17a4 + uVar10 * -0x92f + 0x404000) >>
                          0xf);
        local_24 = local_24 + 1;
        local_20 = local_20 + 1;
      }
      local_64 = (byte *)((int)local_64 + param_5 * 2);
    }
    bVar5 = true;
    bVar3 = true;
  }
  else if (param_6 == 0x47524247) {
    for (local_18 = 0; local_18 < param_4; local_18 = local_18 + 2) {
      for (local_14 = 0; local_14 < param_3; local_14 = local_14 + 2) {
        uVar9 = (uint)*(byte *)((int)local_64 + local_14 + 1);
        uVar10 = (uint)*(byte *)((int)local_64 + local_14 + param_5);
        iVar6 = (uint)*(byte *)((int)local_64 + local_14) +
                (uint)*(byte *)((int)local_64 + local_14 + param_5 + 1);
        *local_20 = (char)((int)(uVar10 * -0x130e + iVar6 * -0x12b5 + uVar9 * 0x3878 + 0x404000) >>
                          0xf);
        *local_24 = (char)((int)(uVar10 * 0x3878 + iVar6 * -0x17a4 + uVar9 * -0x92f + 0x404000) >>
                          0xf);
        local_24 = local_24 + 1;
        local_20 = local_20 + 1;
      }
      local_64 = (byte *)((int)local_64 + param_5 * 2);
    }
    bVar4 = true;
    bVar2 = true;
    bVar5 = true;
    bVar3 = true;
  }
  local_64 = (byte *)((int)local_64 - param_5 * param_4);
  FUN_0002b124(local_64,local_64 + param_5,param_2,param_3,bVar3,bVar2);
  local_1c = (undefined1 *)(param_2 + param_3);
  for (local_70 = param_4 + -2; puVar7 = local_1c, local_70 != 0; local_70 = local_70 + -1) {
    pbVar11 = local_64 + param_3 + -2;
    if (bVar3 == false) {
      if (bVar2 == false) {
        *local_1c = (char)((int)(((uint)*local_64 + (uint)local_64[param_5 * 2]) * 0x1082 +
                                 (uint)local_64[param_5] * 0x40d2 +
                                 (uint)local_64[param_5 + 1] * 0xc97 + 0x80000) >> 0xf);
        local_1c = local_1c + 1;
      }
      else {
        *local_1c = (char)((int)((uint)local_64[param_5 + 1] * 0x2105 +
                                 (uint)local_64[param_5] * 0x40d2 +
                                 ((uint)*local_64 + (uint)local_64[param_5 * 2]) * 0x67d + 0x80000)
                          >> 0xf);
        local_1c = local_1c + 1;
      }
    }
    else {
      iVar6 = (uint)local_64[1] + (uint)local_64[param_5 * 2 + 1];
      iVar8 = (uint)*local_64 + (uint)local_64[param_5 * 2] + (uint)local_64[param_5 + 1];
      if (bVar2 == false) {
        *local_1c = (char)((int)(iVar6 * 0x1082 + iVar8 * 0x158c + (uint)local_64[param_5] * 0xc97 +
                                0x80000) >> 0xf);
      }
      else {
        *local_1c = (char)((int)((uint)local_64[param_5] * 0x2105 + iVar8 * 0x158c + iVar6 * 0x67d +
                                0x80000) >> 0xf);
      }
      local_1c = local_1c + 1;
      if (bVar2 == false) {
        *local_1c = (char)((int)(iVar6 * 0x1082 + (uint)local_64[param_5 + 1] * 0x40d2 +
                                 ((uint)local_64[param_5] + (uint)local_64[param_5 + 2]) * 0x64b +
                                0x80000) >> 0xf);
      }
      else {
        *local_1c = (char)((int)(((uint)local_64[param_5] + (uint)local_64[param_5 + 2]) * 0x1082 +
                                 (uint)local_64[param_5 + 1] * 0x40d2 + iVar6 * 0x64b + 0x80000) >>
                          0xf);
      }
      local_1c = puVar7 + 2;
      local_64 = local_64 + 1;
    }
    if (bVar2 == false) {
      for (; local_64 <= pbVar11 + -2; local_64 = local_64 + 2) {
        puVar7 = local_1c + 1;
        *local_1c = (char)((int)(((uint)*local_64 + (uint)local_64[2] + (uint)local_64[param_5 * 2]
                                 + (uint)local_64[(param_5 + 1) * 2]) * 0x841 +
                                 ((uint)local_64[1] + (uint)local_64[param_5] +
                                  (uint)local_64[param_5 + 2] + (uint)local_64[param_5 * 2 + 1]) *
                                 0x1034 + (uint)local_64[param_5 + 1] * 0xc97 + 0x80000) >> 0xf);
        local_1c = local_1c + 2;
        *puVar7 = (char)((int)(((uint)local_64[2] + (uint)local_64[(param_5 + 1) * 2]) * 0x1082 +
                               (uint)local_64[param_5 + 2] * 0x40d2 +
                               ((uint)local_64[param_5 + 1] + (uint)local_64[param_5 + 3]) * 0x64b +
                              0x80000) >> 0xf);
      }
    }
    else {
      for (; local_64 <= pbVar11 + -2; local_64 = local_64 + 2) {
        puVar7 = local_1c + 1;
        *local_1c = (char)((int)((uint)local_64[param_5 + 1] * 0x2105 +
                                 ((uint)local_64[1] + (uint)local_64[param_5] +
                                  (uint)local_64[param_5 + 2] + (uint)local_64[param_5 * 2 + 1]) *
                                 0x1034 + ((uint)*local_64 + (uint)local_64[2] +
                                           (uint)local_64[param_5 * 2] +
                                          (uint)local_64[(param_5 + 1) * 2]) * 0x326 + 0x80000) >>
                          0xf);
        local_1c = local_1c + 2;
        *puVar7 = (char)((int)(((uint)local_64[param_5 + 1] + (uint)local_64[param_5 + 3]) * 0x1082
                               + (uint)local_64[param_5 + 2] * 0x40d2 +
                               ((uint)local_64[2] + (uint)local_64[(param_5 + 1) * 2]) * 0x64b +
                              0x80000) >> 0xf);
      }
    }
    puVar7 = local_1c;
    if (local_64 < pbVar11) {
      iVar6 = (uint)*local_64 + (uint)local_64[2] + (uint)local_64[param_5 * 2] +
              (uint)local_64[(param_5 + 1) * 2];
      iVar8 = (uint)local_64[1] + (uint)local_64[param_5] + (uint)local_64[param_5 + 2] +
              (uint)local_64[param_5 * 2 + 1];
      if (bVar2 == false) {
        *local_1c = (char)((int)(iVar6 * 0x841 + iVar8 * 0x1034 +
                                 (uint)local_64[param_5 + 1] * 0xc97 + 0x80000) >> 0xf);
      }
      else {
        *local_1c = (char)((int)((uint)local_64[param_5 + 1] * 0x2105 + iVar8 * 0x1034 +
                                 iVar6 * 0x326 + 0x80000) >> 0xf);
      }
      local_1c = local_1c + 1;
      if (bVar2 == false) {
        *local_1c = (char)((int)(((uint)local_64[2] + (uint)local_64[(param_5 + 1) * 2]) * 0x1082 +
                                 (uint)local_64[param_5 + 2] * 0x40d2 +
                                 (uint)local_64[param_5 + 1] * 0xc97 + 0x80000) >> 0xf);
      }
      else {
        *local_1c = (char)((int)((uint)local_64[param_5 + 1] * 0x2105 +
                                 (uint)local_64[param_5 + 2] * 0x40d2 +
                                 ((uint)local_64[2] + (uint)local_64[(param_5 + 1) * 2]) * 0x67d +
                                0x80000) >> 0xf);
      }
      local_1c = puVar7 + 2;
      local_64 = local_64 + 1;
    }
    else {
      iVar6 = (uint)local_64[1] + (uint)local_64[param_5 * 2 + 1] + (uint)local_64[param_5];
      if (bVar2 == false) {
        *local_1c = (char)((int)(((uint)*local_64 + (uint)local_64[param_5 * 2]) * 0x1082 +
                                 iVar6 * 0x158c + (uint)local_64[param_5 + 1] * 0xc97 + 0x80000) >>
                          0xf);
        local_1c = local_1c + 1;
      }
      else {
        *local_1c = (char)((int)((uint)local_64[param_5 + 1] * 0x2105 + iVar6 * 0x158c +
                                 ((uint)*local_64 + (uint)local_64[param_5 * 2]) * 0x67d + 0x80000)
                          >> 0xf);
        local_1c = local_1c + 1;
      }
    }
    local_64 = local_64 + (param_5 - param_3) + 2;
    bVar2 = !bVar4;
    bVar3 = !bVar5;
    bVar4 = bVar2;
    bVar5 = bVar3;
  }
  FUN_0002b124(local_64 + param_5,local_64,local_1c,param_3,bVar3 == false,bVar2 == false);
  return;
}



/* ===== FUN_0002cdf8 @ 0002cdf8 size=1160 ===== */

/* WARNING: Removing unreachable block (ram,0x0002ce88) */
/* WARNING: Removing unreachable block (ram,0x0002ceb0) */

void FUN_0002cdf8(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if (param_5 == 0) {
    iVar6 = 2;
  }
  else {
    iVar6 = 0;
  }
  for (local_c = 0; local_c < param_4; local_c = local_c + 0x10) {
    local_24 = (local_c >> 4) * 0x2d;
    local_28 = (local_c >> 5) * 0x2d;
    uVar7 = param_4 - local_c;
    if (0xf < uVar7) {
      uVar7 = 0x10;
    }
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 0x10) {
      uVar8 = param_3 - local_10;
      if (0xf < uVar8) {
        uVar8 = 0x10;
      }
      local_1c = param_1 + local_24 * 0x100;
      local_20 = param_1 + param_4 * 0x2d0 + local_28 * 0x100;
      if ((local_c & 0x10) != 0) {
        local_20 = local_20 + 0x80;
      }
      for (local_14 = 0; local_14 < uVar7; local_14 = local_14 + 1) {
        local_2c = (param_3 * (local_c + local_14) + local_10) * 3;
        for (local_18 = 0; local_18 < uVar8; local_18 = local_18 + 1) {
          bVar4 = *(byte *)(local_1c + local_18);
          uVar9 = (uint)bVar4;
          uVar10 = (uint)*(byte *)(local_20 + (local_18 & 0xfffffffe));
          uVar11 = (uint)*(byte *)(local_20 + (local_18 | 1));
          iVar1 = (int)(uVar10 * 0x81 + -0x4080) >> 6;
          iVar2 = (int)(uVar10 * 3 + uVar11 * 6 + -0x480) >> 3;
          iVar3 = (int)(uVar11 * 3 + -0x180) >> 1;
          if ((int)(uVar9 + iVar3) < 0x100) {
            if ((int)(uVar9 + iVar3) < 0) {
              cVar5 = '\0';
            }
            else {
              cVar5 = bVar4 + (char)iVar3;
            }
          }
          else {
            cVar5 = -1;
          }
          *(char *)(param_2 + local_2c + iVar6) = cVar5;
          if ((int)(uVar9 - iVar2) < 0x100) {
            if ((int)(uVar9 - iVar2) < 0) {
              cVar5 = '\0';
            }
            else {
              cVar5 = bVar4 - (char)iVar2;
            }
          }
          else {
            cVar5 = -1;
          }
          *(char *)(param_2 + local_2c + 1) = cVar5;
          if ((int)(uVar9 + iVar1) < 0x100) {
            if ((int)(uVar9 + iVar1) < 0) {
              cVar5 = '\0';
            }
            else {
              cVar5 = bVar4 + (char)iVar1;
            }
          }
          else {
            cVar5 = -1;
          }
          *(char *)(param_2 + local_2c + (2 - iVar6)) = cVar5;
          local_2c = local_2c + 3;
        }
        local_1c = local_1c + 0x10;
        if ((local_14 & 1) != 0) {
          local_20 = local_20 + 0x10;
        }
      }
      local_24 = local_24 + 1;
      local_28 = local_28 + 1;
    }
  }
  return;
}



/* ===== FUN_0002d280 @ 0002d280 size=68 ===== */

void FUN_0002d280(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0002cdf8(param_1,param_2,param_3,param_4,1);
  return;
}



/* ===== FUN_0002d2c4 @ 0002d2c4 size=68 ===== */

void FUN_0002d2c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0002cdf8(param_1,param_2,param_3,param_4,0);
  return;
}



/* ===== FUN_0002d308 @ 0002d308 size=436 ===== */

void FUN_0002d308(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  for (local_c = 0; local_c < param_5; local_c = local_c + 0x10) {
    for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 8) {
      local_1c = param_3 + local_c * 0x2d0 + local_10 * 0x20;
      uVar1 = param_5 - local_c;
      if (0xf < uVar1) {
        uVar1 = 0x10;
      }
      uVar2 = param_4 - local_10;
      if (7 < uVar2) {
        uVar2 = 8;
      }
      for (local_14 = 0; local_14 < uVar1; local_14 = local_14 + 1) {
        iVar3 = param_4 * (local_c + local_14) + local_10;
        for (local_18 = 0; local_18 < uVar2; local_18 = local_18 + 1) {
          *(undefined1 *)(param_1 + iVar3 + local_18) = *(undefined1 *)(local_1c + local_18 * 2);
          *(undefined1 *)(param_2 + iVar3 + local_18) = *(undefined1 *)(local_1c + local_18 * 2 + 1)
          ;
        }
        local_1c = local_1c + 0x10;
      }
    }
  }
  return;
}



/* ===== FUN_0002d4bc @ 0002d4bc size=320 ===== */

void FUN_0002d4bc(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  size_t __n;
  void *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  for (local_c = 0; local_c < param_4; local_c = local_c + 0x10) {
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 0x10) {
      local_18 = (void *)(param_2 + local_c * 0x2d0 + local_10 * 0x10);
      uVar1 = param_4 - local_c;
      if (0xf < uVar1) {
        uVar1 = 0x10;
      }
      __n = param_3 - local_10;
      if (0xf < __n) {
        __n = 0x10;
      }
      for (local_14 = 0; local_14 < uVar1; local_14 = local_14 + 1) {
        memcpy((void *)(param_1 + param_3 * (local_c + local_14) + local_10),local_18,__n);
        local_18 = (void *)((int)local_18 + 0x10);
      }
    }
  }
  return;
}



/* ===== FUN_0002d5fc @ 0002d5fc size=332 ===== */

void FUN_0002d5fc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  FUN_0002d4bc(param_2,param_1,param_3,param_4);
  param_2 = param_2 + param_4 * param_3;
  param_1 = param_1 + param_4 * 0x2d0;
  if (param_5 == 0) {
    iVar2 = param_4 * param_3;
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_0002d308(param_2,param_2 + (iVar1 >> 2),param_1,param_3 / 2,param_4 / 2);
  }
  else {
    iVar2 = param_4 * param_3;
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_0002d308(param_2 + (iVar1 >> 2),param_2,param_1,param_3 / 2,param_4 / 2);
  }
  return;
}



/* ===== FUN_0002d748 @ 0002d748 size=308 ===== */

void FUN_0002d748(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *local_20;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_10;
  int local_c;
  
  local_18 = param_1 + param_3 / 2;
  local_20 = param_2;
  local_14 = param_1;
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
    for (local_c = 0; local_c < param_3 / 2; local_c = local_c + 1) {
      puVar1 = local_20 + 1;
      *local_20 = *local_14;
      local_20 = local_20 + 2;
      *puVar1 = *local_18;
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
    }
    local_14 = local_14 + param_3 / 2;
    local_18 = local_18 + param_3 / 2;
  }
  return;
}



/* ===== FUN_0002d87c @ 0002d87c size=2760 ===== */

undefined4
FUN_0002d87c(int param_1,char *param_2,int param_3,byte *param_4,size_t param_5,uint param_6,
            int param_7)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *local_40;
  int local_3c;
  ushort *local_38;
  byte *local_24;
  byte *local_20;
  uint local_1c;
  uint local_18;
  size_t local_14;
  
  iVar8 = DAT_0002e344 + 0x2d8a4;
  if (((int)param_5 < 0x161) && ((int)param_6 < 0x121)) {
    if (*(int *)(param_1 + 0x357c) == 0) {
      pvVar2 = malloc(0x25200);
      *(void **)(param_1 + 0x357c) = pvVar2;
      if (*(int *)(param_1 + 0x357c) == 0) {
        fwrite((void *)(DAT_0002e350 + 0x2d948),1,0x2f,
               (FILE *)**(undefined4 **)(iVar8 + DAT_0002e348));
        return 0xffffffff;
      }
    }
    if (param_7 == 0) {
      local_20 = param_4 + param_6 * param_5;
      iVar6 = param_6 * param_5;
      iVar3 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar3 = iVar6;
      }
      local_24 = local_20 + (iVar3 >> 2);
    }
    else {
      local_24 = param_4 + param_6 * param_5;
      iVar6 = param_6 * param_5;
      iVar3 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar3 = iVar6;
      }
      local_20 = local_24 + (iVar3 >> 2);
    }
    if ((((((param_3 < 0x40) || (*param_2 != '\x19')) || (param_2[1] != 'h')) ||
         (((param_2[0x11] != '\0' || (param_2[0x12] != '\0')) ||
          ((param_5 != ((uint)(byte)param_2[0x19] - (uint)(byte)param_2[0x18]) * 8 ||
           (param_6 != ((uint)(byte)param_2[0x1b] - (uint)(byte)param_2[0x1a]) * 4)))))) ||
        ((param_2[0x1c] != '\0' && (param_2[0x1c] != '\x01')))) ||
       ((param_2[0x1d] != '\0' && (param_2[0x1d] != '\x01')))) {
      fwrite((void *)(DAT_0002e354 + 0x2db20),1,0x23,(FILE *)**(undefined4 **)(iVar8 + DAT_0002e348)
            );
      uVar5 = 0xffffffff;
    }
    else if (param_2[0x1d] == '\x01') {
      fwrite((void *)(DAT_0002e358 + 0x2db5c),1,0x30,(FILE *)**(undefined4 **)(iVar8 + DAT_0002e348)
            );
      uVar5 = 0xffffffff;
    }
    else {
      local_3c = param_3 + -0x40;
      local_38 = (ushort *)(param_2 + 0x40);
      local_40 = param_4;
      if (param_2[0x1c] == '\x01') {
        memcpy(param_4,*(void **)(param_1 + 0x357c),(int)(param_6 * param_5 * 3) / 2);
        local_18 = 0;
        local_3c = param_3 + -0x40;
        while (((int)local_18 < (int)param_6 && (2 < local_3c))) {
          local_1c = (uint)*local_38;
          local_38 = local_38 + 1;
          if (local_3c + -2 < (int)local_1c) {
            fwrite((void *)(DAT_0002e36c + 0x2df0c),1,0x20,
                   (FILE *)**(undefined4 **)(iVar8 + DAT_0002e348));
            return 0xffffffff;
          }
          if (*(byte *)((int)local_38 + (local_1c - 1)) != 0xfd) {
            fwrite((void *)(DAT_0002e370 + 0x2df50),1,0x2c,
                   (FILE *)**(undefined4 **)(iVar8 + DAT_0002e348));
            return 0xffffffff;
          }
          local_3c = (local_3c + -2) - local_1c;
          local_14 = 0;
          while (((int)local_14 < (int)param_5 && (1 < (int)local_1c))) {
            if ((*local_38 & 1) == 0) {
              if ((local_18 & 1) == 0) {
                *local_40 = (byte)*local_38;
                *local_20 = *(byte *)((int)local_38 + 1);
                pbVar4 = (byte *)((int)local_38 + 3);
                local_40[1] = (byte)local_38[1];
                local_38 = local_38 + 2;
                *local_24 = *pbVar4;
                local_1c = local_1c - 4;
                local_24 = local_24 + 1;
                local_20 = local_20 + 1;
              }
              else {
                pbVar4 = (byte *)((int)local_38 + 1);
                *local_40 = (byte)*local_38;
                local_38 = local_38 + 1;
                local_40[1] = *pbVar4;
                local_1c = local_1c - 2;
              }
              local_40 = local_40 + 2;
              local_14 = local_14 + 2;
            }
            else {
              bVar1 = (byte)*local_38 >> 1;
              uVar7 = (uint)bVar1;
              if ((bVar1 & 1) != 0) {
                fwrite((void *)(DAT_0002e374 + 0x2dfcc),1,0x30,
                       (FILE *)**(undefined4 **)(iVar8 + DAT_0002e348));
                return 0xffffffff;
              }
              if ((local_18 & 1) == 0) {
                local_20 = local_20 + uVar7 / 2;
                local_24 = local_24 + uVar7 / 2;
              }
              local_40 = local_40 + uVar7;
              local_14 = local_14 + uVar7;
              local_38 = (ushort *)((int)local_38 + 1);
              local_1c = local_1c - 1;
            }
          }
          if ((local_1c != 1) || (local_14 != param_5)) {
            fwrite((void *)(DAT_0002e378 + 0x2e1c4),1,0x29,
                   (FILE *)**(undefined4 **)(iVar8 + DAT_0002e348));
            return 0xffffffff;
          }
          local_38 = (ushort *)((int)local_38 + 1);
          local_18 = local_18 + 1;
        }
      }
      else {
        local_18 = 0;
        local_38 = (ushort *)(param_2 + 0x40);
        for (; ((int)local_18 < (int)param_6 && (2 < local_3c)); local_3c = (local_3c + -2) - uVar7)
        {
          uVar7 = (uint)*local_38;
          local_38 = local_38 + 1;
          if (local_3c + -2 < (int)uVar7) {
            fwrite((void *)(DAT_0002e35c + 0x2dc20),1,0x20,
                   (FILE *)**(undefined4 **)(iVar8 + DAT_0002e348));
            return 0xffffffff;
          }
          if (*(byte *)((int)local_38 + (uVar7 - 1)) != 0xfd) {
            fwrite((void *)(DAT_0002e360 + 0x2dc64),1,0x2c,
                   (FILE *)**(undefined4 **)(iVar8 + DAT_0002e348));
            return 0xffffffff;
          }
          if ((local_18 & 1) == 0) {
            if (uVar7 != param_5 * 2 + 1) {
              fwrite((void *)(DAT_0002e364 + 0x2dcb4),1,0x31,
                     (FILE *)**(undefined4 **)(iVar8 + DAT_0002e348));
              return 0xffffffff;
            }
            for (local_14 = 0; (int)local_14 < (int)param_5; local_14 = local_14 + 2) {
              pbVar4 = local_40 + 1;
              *local_40 = (byte)*local_38;
              local_40 = local_40 + 2;
              *pbVar4 = (byte)local_38[1];
              local_38 = local_38 + 2;
            }
            local_38 = local_38 + -param_5;
            for (local_14 = 0; (int)local_14 < (int)param_5; local_14 = local_14 + 2) {
              *local_20 = *(byte *)((int)local_38 + 1);
              *local_24 = *(byte *)((int)local_38 + 3);
              local_38 = local_38 + 2;
              local_24 = local_24 + 1;
              local_20 = local_20 + 1;
            }
          }
          else {
            if (uVar7 != param_5 + 1) {
              fwrite((void *)(DAT_0002e368 + 0x2ddd4),1,0x30,
                     (FILE *)**(undefined4 **)(iVar8 + DAT_0002e348));
              return 0xffffffff;
            }
            memcpy(local_40,local_38,param_5);
            local_40 = local_40 + param_5;
            local_38 = (ushort *)((int)local_38 + param_5);
          }
          local_38 = (ushort *)((int)local_38 + 1);
          local_18 = local_18 + 1;
        }
      }
      if (local_18 == param_6) {
        if ((((local_3c < 4) || (*(byte *)((int)local_38 + local_3c + -4) != 0xff)) ||
            (*(byte *)((int)local_38 + local_3c + -3) != 0xff)) ||
           ((*(byte *)((int)local_38 + local_3c + -2) != 0xff ||
            (*(byte *)((int)local_38 + local_3c + -1) != 0xff)))) {
          fwrite((void *)(DAT_0002e380 + 0x2e2d4),1,0x27,
                 (FILE *)**(undefined4 **)(iVar8 + DAT_0002e348));
          uVar5 = 0xffffffff;
        }
        else {
          memcpy(*(void **)(param_1 + 0x357c),local_40 + -(param_6 * param_5),
                 (int)(param_6 * param_5 * 3) / 2);
          uVar5 = 0;
        }
      }
      else {
        fwrite((void *)(DAT_0002e37c + 0x2e230),1,0x2a,
               (FILE *)**(undefined4 **)(iVar8 + DAT_0002e348));
        uVar5 = 0xffffffff;
      }
    }
  }
  else {
    fwrite((void *)(DAT_0002e34c + 0x2d8d8),1,0x31,(FILE *)**(undefined4 **)(iVar8 + DAT_0002e348));
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ===== FUN_0002e384 @ 0002e384 size=252 ===== */

void FUN_0002e384(char param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *param_4;
  if (iVar1 < 3) {
    *(char *)(*param_2 + iVar1) = param_1 << 3;
  }
  else {
    *(char *)(*param_2 + iVar1) = *(char *)(*param_2 + iVar1 + -3) + param_1 * '\b';
  }
  *param_4 = *param_4 + 1;
  if (param_3 == *param_4) {
    *param_4 = 0;
    *param_2 = *param_2 + param_3;
  }
  return;
}



/* ===== FUN_0002e480 @ 0002e480 size=524 ===== */

undefined4
FUN_0002e480(byte *param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6
            ,undefined4 param_7)

{
  uint uVar1;
  int local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_30 = param_4;
  local_2c = param_3;
  local_28 = param_2;
  local_24 = param_1;
  do {
    if (local_2c == 0) {
      return 0xffffffff;
    }
    local_18 = 8;
    for (; (local_18 != 0 && (local_28 != 0)); local_28 = local_28 + -1) {
      uVar1 = (int)(uint)*local_24 >> (local_18 - 1U & 0xff) & 1;
      if (local_c == 1) {
        if (uVar1 == 0) {
          local_14 = 1 - (1 << (local_10 & 0xff));
        }
        else {
          local_14 = 0;
        }
        local_c = 2;
LAB_0002e5b0:
        local_10 = local_10 - 1;
        local_14 = local_14 + (uVar1 << (local_10 & 0xff));
        if (local_10 == 0) {
          local_c = 0;
          FUN_0002e384(local_14,param_5,param_6,param_7);
          local_30 = local_30 + -1;
          if (local_30 == 0) {
            return 0;
          }
        }
      }
      else if (local_c == 0) {
        if (uVar1 == 0) {
          if (local_10 == 0) {
            FUN_0002e384(0,param_5,param_6,param_7);
            local_30 = local_30 + -1;
            if (local_30 == 0) {
              return 0;
            }
          }
          else {
            local_c = 1;
            local_14 = 0;
          }
        }
        else {
          local_10 = local_10 + 1;
        }
      }
      else if (local_c == 2) goto LAB_0002e5b0;
      local_18 = local_18 + -1;
    }
    local_24 = local_24 + 1;
    local_2c = local_2c + -1;
  } while( true );
}



/* ===== FUN_0002e68c @ 0002e68c size=840 ===== */

undefined4 FUN_0002e68c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_24 = 0;
  local_10 = 0;
  local_38 = param_4;
  local_34 = param_3;
  local_30 = param_2;
  local_2c = param_1;
  if ((param_2 != 0) && (param_4 != 0)) {
    for (local_c = 0; local_c + 4 < local_34; local_c = local_c + local_20) {
      local_14 = (uint)*(byte *)(local_30 + local_c + 3) +
                 (uint)*(byte *)(local_30 + local_c + 2) * 0x100;
      local_18 = (uint)*(byte *)(local_30 + local_c + 1) +
                 (*(byte *)(local_30 + local_c) & 0x3f) * 0x100;
      local_1c = (uint)(*(byte *)(local_30 + local_c) >> 6);
      local_20 = (local_14 + 0x2f >> 4) * 2;
      if (0x400 < local_20) {
        snprintf((char *)(local_2c + 0x18),0x100,(char *)(DAT_0002e9d4 + 0x2e7a0),local_20);
        goto LAB_0002e9b4;
      }
      if (local_34 < (int)(local_c + local_20)) {
        snprintf((char *)(local_2c + 0x18),0x100,(char *)(DAT_0002e9d8 + 0x2e7d4));
        goto LAB_0002e9b4;
      }
      if (param_6 * param_5 < local_10 + local_18) {
        snprintf((char *)(local_2c + 0x18),0x100,(char *)(DAT_0002e9dc + 0x2e814));
        goto LAB_0002e9b4;
      }
      if ((((local_c == 0) && (local_1c != 2)) ||
          ((0 < local_c && (((int)(local_c + local_20) < local_34 && (local_1c != 0)))))) ||
         ((local_34 == local_c + local_20 && (local_1c != 1)))) {
        snprintf((char *)(local_2c + 0x18),0x100,(char *)(DAT_0002e9e0 + 0x2e8a0));
        goto LAB_0002e9b4;
      }
      iVar1 = FUN_0002e480(local_30 + local_c + 4,local_14,local_20,local_18 * 3,&local_38,
                           param_5 * 3,&local_24);
      if (iVar1 != 0) {
        snprintf((char *)(local_2c + 0x18),0x100,(char *)(DAT_0002e9e4 + 0x2e920));
        goto LAB_0002e9b4;
      }
      local_10 = local_10 + local_18;
    }
    if ((local_c == local_34) && (local_10 == param_6 * param_5)) {
      return 0;
    }
    snprintf((char *)(local_2c + 0x18),0x100,(char *)(DAT_0002e9e8 + 0x2e99c));
  }
LAB_0002e9b4:
  piVar2 = __errno_location();
  *piVar2 = 5;
  return 0xffffffff;
}



/* ===== FUN_0002e9ec @ 0002e9ec size=228 ===== */

void FUN_0002e9ec(undefined4 *param_1,int *param_2)

{
  *param_1 = 0x10;
  param_1[1] = CONCAT13(*(undefined1 *)(*param_2 + param_2[2] + 1),
                        CONCAT12(*(undefined1 *)(*param_2 + param_2[2]),
                                 CONCAT11(*(undefined1 *)(*param_2 + param_2[2] + 3),
                                          *(undefined1 *)(*param_2 + param_2[2] + 2))));
  param_2[2] = param_2[2] + 2;
  param_1[2] = param_2;
  return;
}



/* ===== FUN_0002ead0 @ 0002ead0 size=80 ===== */

uint FUN_0002ead0(uint param_1)

{
  if ((int)param_1 < 0x100) {
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
    else {
      param_1 = param_1 & 0xff;
    }
  }
  else {
    param_1 = 0xff;
  }
  return param_1;
}



/* ===== FUN_0002eb20 @ 0002eb20 size=436 ===== */

void FUN_0002eb20(void)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  do {
    if (0x3ff < local_c) {
      return;
    }
    for (local_10 = 0; local_10 < *(int *)(DAT_0002ed08 + 0x2eca0); local_10 = local_10 + 1) {
      if (local_c >> (10U - *(int *)(DAT_0002ecd4 + 0x2eb50 + local_10 * 4) & 0xff) ==
          *(int *)(DAT_0002ecd8 + 0x2eb6c + local_10 * 4)) {
        if (*(int *)(DAT_0002ecdc + 0x2eb84 + local_10 * 4) < 0) {
          *(undefined1 *)(DAT_0002ecf4 + 0x2ec20 + local_c) = 0x10;
        }
        else if (*(int *)(DAT_0002ece0 + 0x2eb9c + local_10 * 4) == 0) {
          *(char *)(DAT_0002ecf0 + 0x2ec04 + local_c) =
               (char)*(undefined4 *)(DAT_0002ecec + 0x2ebf0 + local_10 * 4);
        }
        else {
          *(char *)(DAT_0002ece8 + 0x2ebd4 + local_c) =
               (char)*(undefined4 *)(DAT_0002ece4 + 0x2ebb4 + local_10 * 4) + '\x01';
        }
        *(char *)(DAT_0002ecfc + 0x2ec4c + local_c) =
             (char)*(undefined4 *)(DAT_0002ecf8 + 0x2ec38 + local_10 * 4);
        *(char *)(DAT_0002ed04 + 0x2ec78 + local_c) =
             (char)*(undefined4 *)(DAT_0002ed00 + 0x2ec64 + local_10 * 4);
        break;
      }
    }
    local_c = local_c + 1;
  } while( true );
}



/* ===== FUN_0002ed0c @ 0002ed0c size=236 ===== */

void FUN_0002ed0c(void)

{
  undefined4 local_c;
  
  for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
    *(int *)(DAT_0002edf8 + 0x2ed44 + local_c * 4) = (local_c + -0x10) * 0x129fc;
    *(int *)(DAT_0002edfc + 0x2ed68 + local_c * 4) = (local_c + -0x80) * 0x19893;
    *(int *)(DAT_0002ee00 + 0x2ed88 + local_c * 4) = (local_c + -0x80) * 0xd021;
    *(int *)(DAT_0002ee04 + 0x2eda8 + local_c * 4) = (local_c + -0x80) * 0x6419;
    *(int *)(DAT_0002ee08 + 0x2edcc + local_c * 4) = (local_c + -0x80) * 0x2049c;
  }
  return;
}



/* ===== FUN_0002ee0c @ 0002ee0c size=676 ===== */

undefined4 FUN_0002ee0c(int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = uVar1 >> 0x10;
  *param_2 = (int)*(char *)(DAT_0002f0b0 + 0x2ee48 + (uVar1 >> 0x16));
  *param_3 = (int)*(char *)(DAT_0002f0b4 + 0x2ee68 + (uVar1 >> 0x16));
  param_1[1] = param_1[1] << (uint)*(byte *)(DAT_0002f0b8 + 0x2ee90 + (uVar1 >> 0x16));
  *param_1 = *param_1 - (int)*(char *)(DAT_0002f0bc + 0x2eeb8 + (uVar1 >> 0x16));
  if (*param_1 < 1) {
    param_1[1] = param_1[1] |
                 (uint)*(byte *)(*(int *)param_1[2] + *(int *)(param_1[2] + 8) + 2) <<
                 (-*param_1 & 0xffU) |
                 (uint)*(byte *)(*(int *)param_1[2] + *(int *)(param_1[2] + 8) + 3) <<
                 (8U - *param_1 & 0xff);
    *(int *)(param_1[2] + 8) = *(int *)(param_1[2] + 8) + 2;
    *param_1 = *param_1 + 0x10;
  }
  if ((int)*param_3 < 1) {
    if (*param_3 == 0) {
      return 0;
    }
    if (*param_3 == 0xffffffff) {
      *param_2 = uVar1 >> 0x15 & 7;
      if ((uVar2 & 0x100) == 0) {
        uVar2 = uVar2 & 0x1f;
      }
      else {
        uVar2 = -(uVar2 & 0x1f);
      }
      *param_3 = uVar2;
    }
    else {
      *param_2 = uVar1 >> 0x14 & 0xf;
      if ((uVar2 & 0x100) == 0) {
        uVar2 = uVar2 & 0xf;
      }
      else {
        uVar2 = -(uVar2 & 0xf);
      }
      *param_3 = uVar2;
    }
  }
  else if ((uVar2 & 0x10000 >> (uint)*(byte *)(DAT_0002f0c0 + 0x2efb0 + (uVar1 >> 0x16))) != 0) {
    *param_3 = -*param_3;
  }
  return 1;
}



/* ===== FUN_0002f0c4 @ 0002f0c4 size=3276 ===== */

uint FUN_0002f0c4(int *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_bc;
  int local_b8 [41];
  int local_14;
  uint local_10;
  int local_c;
  
  local_10 = (uint)param_1[1] >> 0x15;
  if ((local_10 & 0x100) == 0) {
    if ((local_10 & 0x80) == 0) {
      *param_3 = local_10 & 0x7f;
    }
    else {
      *param_3 = ~(~(local_10 << 0x19) >> 0x19);
    }
    param_1[1] = param_1[1] << 0xb;
    *param_1 = *param_1 + -0xb;
    if (*param_1 < 1) {
      param_1[1] = param_1[1] |
                   (uint)*(byte *)(*(int *)param_1[2] + *(int *)(param_1[2] + 8) + 2) <<
                   (-*param_1 & 0xffU) |
                   (uint)*(byte *)(*(int *)param_1[2] + *(int *)(param_1[2] + 8) + 3) <<
                   (8U - *param_1 & 0xff);
      *(int *)(param_1[2] + 8) = *(int *)(param_1[2] + 8) + 2;
      *param_1 = *param_1 + 0x10;
    }
  }
  else {
    if ((local_10 & 0x80) == 0) {
      *param_3 = *param_3 + ((int)local_10 >> 3 & 0xfU);
    }
    else {
      *param_3 = *param_3 + ~((uint)~(((int)local_10 >> 3) << 0x1c) >> 0x1c);
    }
    param_1[1] = param_1[1] << 8;
    *param_1 = *param_1 + -8;
    if (*param_1 < 1) {
      param_1[1] = param_1[1] |
                   (uint)*(byte *)(*(int *)param_1[2] + *(int *)(param_1[2] + 8) + 2) <<
                   (-*param_1 & 0xffU) |
                   (uint)*(byte *)(*(int *)param_1[2] + *(int *)(param_1[2] + 8) + 3) <<
                   (8U - *param_1 & 0xff);
      *(int *)(param_1[2] + 8) = *(int *)(param_1[2] + 8) + 2;
      *param_1 = *param_1 + 0x10;
    }
  }
  *param_2 = *param_3 << 0xf;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  local_14 = ((int)local_10 >> 9) * 0x40 + DAT_0002fd90 + 0x2f48c;
  local_c = 0;
  while( true ) {
    iVar1 = FUN_0002ee0c(param_1,local_b8,&local_bc);
    if (iVar1 == 0) {
      iVar3 = (param_2[4] + param_2[0xc]) * 0x20 + param_2[0xc] * -0x10;
      iVar4 = param_2[4] * 0x2f + (param_2[4] + param_2[0xc]) * -0x20;
      iVar1 = *param_2;
      iVar2 = *param_2;
      *param_2 = iVar1 + param_2[8] + iVar3;
      param_2[4] = (iVar2 - param_2[8]) + iVar4;
      param_2[0xc] = (iVar1 + param_2[8]) - iVar3;
      param_2[8] = (iVar2 - param_2[8]) - iVar4;
      iVar3 = (param_2[5] + param_2[0xd]) * 0x20 + param_2[0xd] * -0x10;
      iVar4 = param_2[5] * 0x2f + (param_2[5] + param_2[0xd]) * -0x20;
      iVar1 = param_2[1];
      iVar2 = param_2[1];
      param_2[1] = iVar1 + param_2[9] + iVar3;
      param_2[5] = (iVar2 - param_2[9]) + iVar4;
      param_2[0xd] = (iVar1 + param_2[9]) - iVar3;
      param_2[9] = (iVar2 - param_2[9]) - iVar4;
      iVar3 = (param_2[6] + param_2[0xe]) * 0x20 + param_2[0xe] * -0x10;
      iVar4 = param_2[6] * 0x2f + (param_2[6] + param_2[0xe]) * -0x20;
      iVar1 = param_2[2];
      iVar2 = param_2[2];
      param_2[2] = iVar1 + param_2[10] + iVar3;
      param_2[6] = (iVar2 - param_2[10]) + iVar4;
      param_2[0xe] = (iVar1 + param_2[10]) - iVar3;
      param_2[10] = (iVar2 - param_2[10]) - iVar4;
      iVar3 = (param_2[7] + param_2[0xf]) * 0x20 + param_2[0xf] * -0x10;
      iVar4 = param_2[7] * 0x2f + (param_2[7] + param_2[0xf]) * -0x20;
      iVar1 = param_2[3];
      iVar2 = param_2[3];
      param_2[3] = iVar1 + param_2[0xb] + iVar3;
      param_2[7] = (iVar2 - param_2[0xb]) + iVar4;
      param_2[0xf] = (iVar1 + param_2[0xb]) - iVar3;
      param_2[0xb] = (iVar2 - param_2[0xb]) - iVar4;
      iVar1 = *param_2 * 0x80 + param_2[2] * 0x80;
      iVar2 = *param_2 * 0x80 + param_2[2] * -0x80;
      iVar3 = param_2[1] * 0xb7 + param_2[3] * 0x56;
      iVar4 = param_2[1] * 0x56 + param_2[3] * -0xb7;
      *param_2 = iVar1 + iVar3 >> 0x16;
      param_2[1] = iVar2 + iVar4 >> 0x16;
      param_2[3] = iVar1 - iVar3 >> 0x16;
      param_2[2] = iVar2 - iVar4 >> 0x16;
      iVar1 = param_2[4] * 0x80 + param_2[6] * 0x80;
      iVar2 = param_2[4] * 0x80 + param_2[6] * -0x80;
      iVar3 = param_2[5] * 0xb7 + param_2[7] * 0x56;
      iVar4 = param_2[5] * 0x56 + param_2[7] * -0xb7;
      param_2[4] = iVar1 + iVar3 >> 0x16;
      param_2[5] = iVar2 + iVar4 >> 0x16;
      param_2[7] = iVar1 - iVar3 >> 0x16;
      param_2[6] = iVar2 - iVar4 >> 0x16;
      iVar1 = param_2[8] * 0x80 + param_2[10] * 0x80;
      iVar2 = param_2[8] * 0x80 + param_2[10] * -0x80;
      iVar3 = param_2[9] * 0xb7 + param_2[0xb] * 0x56;
      iVar4 = param_2[9] * 0x56 + param_2[0xb] * -0xb7;
      param_2[8] = iVar1 + iVar3 >> 0x16;
      param_2[9] = iVar2 + iVar4 >> 0x16;
      param_2[0xb] = iVar1 - iVar3 >> 0x16;
      param_2[10] = iVar2 - iVar4 >> 0x16;
      iVar1 = param_2[0xc] * 0x80 + param_2[0xe] * 0x80;
      iVar2 = param_2[0xc] * 0x80 + param_2[0xe] * -0x80;
      iVar3 = param_2[0xd] * 0xb7 + param_2[0xf] * 0x56;
      iVar4 = param_2[0xd] * 0x56 + param_2[0xf] * -0xb7;
      param_2[0xc] = iVar1 + iVar3 >> 0x16;
      param_2[0xd] = iVar2 + iVar4 >> 0x16;
      param_2[0xf] = iVar1 - iVar3 >> 0x16;
      param_2[0xe] = iVar2 - iVar4 >> 0x16;
      return (uint)((local_10 & 0x700) == 0);
    }
    local_c = local_c + local_b8[0] + 1;
    if (0xf < local_c) break;
    param_2[*(int *)(DAT_0002fd94 + 0x2f4e8 + local_c * 4)] =
         local_bc * *(int *)(local_14 + local_c * 4);
  }
  return 0xffffffff;
}



/* ===== FUN_0002fd98 @ 0002fd98 size=4284 ===== */

undefined4
FUN_0002fd98(undefined4 param_1,undefined4 param_2,uint param_3,byte *param_4,int param_5,
            int param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *local_208;
  int aiStack_1f8 [16];
  int aiStack_1b8 [16];
  int aiStack_178 [16];
  undefined1 auStack_138 [64];
  undefined1 auStack_f8 [64];
  undefined1 auStack_b8 [64];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 auStack_6c [12];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*(int *)(DAT_000308c8 + 0x2fdc0) == 0) {
    FUN_0002eb20();
    FUN_0002ed0c();
  }
  iVar2 = param_6 + 3;
  if (-1 < param_6) {
    iVar2 = param_6;
  }
  iVar2 = iVar2 >> 2;
  local_58 = 0;
  local_60 = param_1;
  local_5c = param_2;
  FUN_0002e9ec(auStack_6c,&local_60);
  local_28 = param_4;
  if (param_3 == 0x32315559) {
    local_40 = (byte *)0x0;
    local_2c = param_4 + iVar2 * param_5 * 0x10;
    local_30 = local_2c + iVar2 * param_5 * 4;
  }
  else if (param_3 == 0x32315659) {
    local_40 = (byte *)0x0;
    local_30 = param_4 + iVar2 * param_5 * 0x10;
    local_2c = local_30 + iVar2 * param_5 * 4;
  }
  else {
    local_40 = malloc(((param_5 >> 1) + param_5 + 2) * 4);
    local_2c = local_40 + param_5 * 4;
    local_30 = local_2c + param_5 + 4;
    local_28 = local_40;
  }
  local_44 = param_5 + -4;
  local_48 = (param_5 >> 2) + -3;
  local_14 = 0;
  local_208 = param_4;
  do {
    if (iVar2 <= local_14) {
      if (local_40 != (byte *)0x0) {
        free(local_40);
      }
      return 0;
    }
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    for (local_18 = 0; local_18 < param_5; local_18 = local_18 + 0x10) {
      FUN_0002f0c4(auStack_6c,aiStack_178,&local_70);
      FUN_0002f0c4(auStack_6c,auStack_138,&local_70);
      FUN_0002f0c4(auStack_6c,auStack_f8,&local_70);
      FUN_0002f0c4(auStack_6c,auStack_b8,&local_70);
      FUN_0002f0c4(auStack_6c,aiStack_1f8,&local_78);
      FUN_0002f0c4(auStack_6c,aiStack_1b8,&local_74);
      local_24 = 0;
      local_34 = local_28 + local_18;
      local_38 = local_2c + (local_18 >> 2);
      local_3c = local_30 + (local_18 >> 2);
      for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
        for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
          bVar1 = FUN_0002ead0(aiStack_178[local_24] + 0x80);
          *local_34 = bVar1;
          pbVar3 = local_34 + 4;
          bVar1 = FUN_0002ead0(aiStack_178[local_24 + 0x10] + 0x80);
          *pbVar3 = bVar1;
          pbVar3 = local_34 + 8;
          bVar1 = FUN_0002ead0(aiStack_178[local_24 + 0x20] + 0x80);
          *pbVar3 = bVar1;
          pbVar3 = local_34 + 0xc;
          bVar1 = FUN_0002ead0(aiStack_178[local_24 + 0x30] + 0x80);
          *pbVar3 = bVar1;
          bVar1 = FUN_0002ead0(aiStack_1b8[local_24] + 0x80);
          *local_38 = bVar1;
          bVar1 = FUN_0002ead0(aiStack_1f8[local_24] + 0x80);
          *local_3c = bVar1;
          local_24 = local_24 + 1;
          local_34 = local_34 + 1;
          local_38 = local_38 + 1;
          local_3c = local_3c + 1;
        }
        local_34 = local_34 + local_44;
        local_38 = local_38 + local_48;
        local_3c = local_3c + local_48;
      }
    }
    local_38 = local_2c + local_48 + 2;
    local_3c = local_30 + local_48 + 2;
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      local_38[1] = *local_38;
      local_3c[1] = *local_3c;
      local_38 = local_38 + local_48 + 4;
      local_3c = local_3c + local_48 + 4;
    }
    if (param_3 == 0x32315659) {
LAB_00030e7c:
      local_28 = local_28 + param_5 * 4;
      local_2c = local_2c + param_5;
      local_30 = local_30 + param_5;
    }
    else if (param_3 < 0x3231565a) {
      if (param_3 == 0x32315559) goto LAB_00030e7c;
    }
    else if (param_3 == 0x33424752) {
      local_34 = local_28;
      local_38 = local_2c;
      local_3c = local_30;
      for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
        for (local_1c = 0; local_1c < param_5; local_1c = local_1c + 4) {
          local_4c = *(int *)(DAT_000308cc + 0x303a8 + (uint)*local_34 * 4);
          local_50 = (uint)*local_38;
          local_54 = (uint)*local_3c;
          local_34 = local_34 + 1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_000308d0 + 0x303d0 + local_50 * 4) + local_4c >> 0x10);
          *local_208 = bVar1;
          bVar1 = FUN_0002ead0((local_4c - *(int *)(DAT_000308d4 + 0x30408 + local_50 * 4)) -
                               *(int *)(DAT_000308d8 + 0x30420 + local_54 * 4) >> 0x10);
          local_208[1] = bVar1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_000308dc + 0x30454 + local_54 * 4) + local_4c >> 0x10);
          local_208[2] = bVar1;
          local_4c = *(int *)(DAT_000308e0 + 0x304a0 + (uint)*local_34 * 4);
          local_50 = (int)((uint)*local_38 * 3 + (uint)local_38[1]) >> 2;
          local_54 = (int)((uint)*local_3c * 3 + (uint)local_3c[1]) >> 2;
          local_34 = local_34 + 1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_000308e4 + 0x30510 + local_50 * 4) + local_4c >> 0x10);
          local_208[3] = bVar1;
          bVar1 = FUN_0002ead0((local_4c - *(int *)(DAT_000308e8 + 0x30548 + local_50 * 4)) -
                               *(int *)(DAT_000308ec + 0x30560 + local_54 * 4) >> 0x10);
          local_208[4] = bVar1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_000308f0 + 0x30594 + local_54 * 4) + local_4c >> 0x10);
          local_208[5] = bVar1;
          local_4c = *(int *)(DAT_000308f4 + 0x305e0 + (uint)*local_34 * 4);
          local_50 = (int)((uint)*local_38 + (uint)local_38[1]) >> 1;
          local_54 = (int)((uint)*local_3c + (uint)local_3c[1]) >> 1;
          local_34 = local_34 + 1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_000308f8 + 0x30638 + local_50 * 4) + local_4c >> 0x10);
          local_208[6] = bVar1;
          bVar1 = FUN_0002ead0((local_4c - *(int *)(DAT_000308fc + 0x30670 + local_50 * 4)) -
                               *(int *)(DAT_00030900 + 0x30688 + local_54 * 4) >> 0x10);
          local_208[7] = bVar1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_00030904 + 0x306bc + local_54 * 4) + local_4c >> 0x10);
          local_208[8] = bVar1;
          local_4c = *(int *)(DAT_00030908 + 0x30708 + (uint)*local_34 * 4);
          local_50 = (int)((uint)*local_38 + (uint)local_38[1] * 3) >> 2;
          local_54 = (int)((uint)*local_3c + (uint)local_3c[1] * 3) >> 2;
          local_34 = local_34 + 1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_0003090c + 0x30780 + local_50 * 4) + local_4c >> 0x10);
          local_208[9] = bVar1;
          pbVar3 = local_208 + 0xb;
          bVar1 = FUN_0002ead0((local_4c - *(int *)(DAT_00030910 + 0x307b8 + local_50 * 4)) -
                               *(int *)(DAT_00030914 + 0x307d0 + local_54 * 4) >> 0x10);
          local_208[10] = bVar1;
          local_208 = local_208 + 0xc;
          bVar1 = FUN_0002ead0(*(int *)(DAT_00030918 + 0x30804 + local_54 * 4) + local_4c >> 0x10);
          *pbVar3 = bVar1;
          local_38 = local_38 + 1;
          local_3c = local_3c + 1;
        }
        local_38 = local_38 + 1;
        local_3c = local_3c + 1;
      }
    }
    else if (param_3 == 0x33524742) {
      local_34 = local_28;
      local_38 = local_2c;
      local_3c = local_30;
      for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
        for (local_1c = 0; local_1c < param_5; local_1c = local_1c + 4) {
          local_4c = *(int *)(DAT_0003091c + 0x3098c + (uint)*local_34 * 4);
          local_50 = (uint)*local_38;
          local_54 = (uint)*local_3c;
          local_34 = local_34 + 1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_00030920 + 0x309b4 + local_54 * 4) + local_4c >> 0x10);
          *local_208 = bVar1;
          bVar1 = FUN_0002ead0((local_4c - *(int *)(DAT_00030924 + 0x309ec + local_50 * 4)) -
                               *(int *)(DAT_00030928 + 0x30a04 + local_54 * 4) >> 0x10);
          local_208[1] = bVar1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_0003092c + 0x30a38 + local_50 * 4) + local_4c >> 0x10);
          local_208[2] = bVar1;
          local_4c = *(int *)(DAT_00030930 + 0x30a84 + (uint)*local_34 * 4);
          local_50 = (int)((uint)*local_38 * 3 + (uint)local_38[1]) >> 2;
          local_54 = (int)((uint)*local_3c * 3 + (uint)local_3c[1]) >> 2;
          local_34 = local_34 + 1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_00030934 + 0x30af4 + local_54 * 4) + local_4c >> 0x10);
          local_208[3] = bVar1;
          bVar1 = FUN_0002ead0((local_4c - *(int *)(DAT_00030938 + 0x30b2c + local_50 * 4)) -
                               *(int *)(DAT_0003093c + 0x30b44 + local_54 * 4) >> 0x10);
          local_208[4] = bVar1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_00030940 + 0x30b78 + local_50 * 4) + local_4c >> 0x10);
          local_208[5] = bVar1;
          local_4c = *(int *)(DAT_00030944 + 0x30bc4 + (uint)*local_34 * 4);
          local_50 = (int)((uint)*local_38 + (uint)local_38[1]) >> 1;
          local_54 = (int)((uint)*local_3c + (uint)local_3c[1]) >> 1;
          local_34 = local_34 + 1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_00030948 + 0x30c1c + local_54 * 4) + local_4c >> 0x10);
          local_208[6] = bVar1;
          bVar1 = FUN_0002ead0((local_4c - *(int *)(DAT_0003094c + 0x30c54 + local_50 * 4)) -
                               *(int *)(DAT_00030950 + 0x30c6c + local_54 * 4) >> 0x10);
          local_208[7] = bVar1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_00030954 + 0x30ca0 + local_50 * 4) + local_4c >> 0x10);
          local_208[8] = bVar1;
          local_4c = *(int *)(DAT_00030958 + 0x30cec + (uint)*local_34 * 4);
          local_50 = (int)((uint)*local_38 + (uint)local_38[1] * 3) >> 2;
          local_54 = (int)((uint)*local_3c + (uint)local_3c[1] * 3) >> 2;
          local_34 = local_34 + 1;
          bVar1 = FUN_0002ead0(*(int *)(DAT_0003095c + 0x30d64 + local_54 * 4) + local_4c >> 0x10);
          local_208[9] = bVar1;
          pbVar3 = local_208 + 0xb;
          bVar1 = FUN_0002ead0((local_4c - *(int *)(DAT_00030960 + 0x30d9c + local_50 * 4)) -
                               *(int *)(DAT_00030964 + 0x30db4 + local_54 * 4) >> 0x10);
          local_208[10] = bVar1;
          local_208 = local_208 + 0xc;
          bVar1 = FUN_0002ead0(*(int *)(DAT_00030968 + 0x30de8 + local_50 * 4) + local_4c >> 0x10);
          *pbVar3 = bVar1;
          local_38 = local_38 + 1;
          local_3c = local_3c + 1;
        }
        local_38 = local_38 + 1;
        local_3c = local_3c + 1;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_00030ef8 @ 00030ef8 size=992 ===== */

undefined4
FUN_00030ef8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,uint param_6,
            uint param_7)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = *(int *)(param_5 + 4);
  local_1c = *(int *)(param_5 + 8);
  if (*(int *)(param_1 + 0x118) == 0) {
    uVar1 = FUN_0001bf20();
    *(undefined4 *)(param_1 + 0x118) = uVar1;
    if (*(int *)(param_1 + 0x118) == 0) {
      uVar1 = FUN_000134d0(param_1);
      return uVar1;
    }
  }
  FUN_0001dc80(*(undefined4 *)(param_1 + 0x118),param_7 | 2);
  iVar2 = FUN_0001c028(*(undefined4 *)(param_1 + 0x118),param_2,param_3);
  if (iVar2 == 0) {
    FUN_0001db30(*(undefined4 *)(param_1 + 0x118),&local_30,&local_34);
    iVar2 = local_18;
    if ((*(uint *)(param_1 + 8) & 4) != 0) {
      local_20 = local_18;
      local_18 = local_1c;
      local_1c = iVar2;
    }
    if ((local_18 == local_30) && (local_1c == local_34)) {
      *(int *)(param_5 + 4) = local_30;
      *(int *)(param_5 + 8) = local_34;
      local_2c = param_4;
      if (param_6 == 0x32315659) {
        local_24 = param_4 + local_1c * local_18;
        local_28 = local_24 + ((uint)(local_1c * local_18) >> 2);
        FUN_0001dbf8(*(undefined4 *)(param_1 + 0x118),&local_2c,3);
        local_14 = FUN_0001c35c(*(undefined4 *)(param_1 + 0x118),4);
      }
      else if (param_6 < 0x3231565a) {
        if (param_6 == 0x32315559) {
          local_28 = param_4 + local_1c * local_18;
          local_24 = local_28 + ((uint)(local_1c * local_18) >> 2);
          FUN_0001dbf8(*(undefined4 *)(param_1 + 0x118),&local_2c,3);
          local_14 = FUN_0001c35c(*(undefined4 *)(param_1 + 0x118),4);
        }
      }
      else if (param_6 == 0x33424752) {
        FUN_0001dbf8(*(undefined4 *)(param_1 + 0x118),&local_2c,1);
        local_14 = FUN_0001c35c(*(undefined4 *)(param_1 + 0x118),3);
      }
      else if (param_6 == 0x33524742) {
        FUN_0001dbf8(*(undefined4 *)(param_1 + 0x118),&local_2c,1);
        local_14 = FUN_0001c35c(*(undefined4 *)(param_1 + 0x118),2);
      }
      if (local_14 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_0001db04(*(undefined4 *)(param_1 + 0x118));
        snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_000312e0 + 0x312a8),uVar1);
        piVar3 = __errno_location();
        *piVar3 = 0x20;
        uVar1 = 0xffffffff;
      }
    }
    else {
      snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_000312dc + 0x31094),local_18,local_1c,
               local_30,local_34);
      piVar3 = __errno_location();
      *piVar3 = 5;
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = FUN_0001db04(*(undefined4 *)(param_1 + 0x118));
    snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_000312d8 + 0x30fe0),uVar1);
    piVar3 = __errno_location();
    *piVar3 = 0xb;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_000312e4 @ 000312e4 size=268 ===== */

void FUN_000312e4(undefined4 param_1,undefined4 param_2,char *param_3,int param_4)

{
  size_t sVar1;
  char acStack_210 [512];
  char *local_10;
  FILE *local_c;
  
  snprintf(acStack_210,0x200,(char *)(DAT_000313f0 + 0x3131c),param_1,param_2);
  local_c = fopen(acStack_210,(char *)(DAT_000313f4 + 0x31330));
  if (local_c == (FILE *)0x0) {
    snprintf(acStack_210,0x200,(char *)(DAT_000313f8 + 0x31364),param_1,param_2);
    local_c = fopen(acStack_210,(char *)(DAT_000313fc + 0x31378));
    if (local_c == (FILE *)0x0) {
      *param_3 = '\0';
      return;
    }
  }
  local_10 = fgets(param_3,param_4,local_c);
  if (local_10 != (char *)0x0) {
    sVar1 = strlen(local_10);
    local_10[sVar1 - 1] = '\0';
  }
  fclose(local_c);
  return;
}



/* ===== FUN_00031400 @ 00031400 size=1224 ===== */

undefined4
FUN_00031400(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char acStack_294 [35];
  char local_271;
  char acStack_270 [512];
  stat sStack_70;
  uint local_18;
  char *local_14;
  FILE *local_10;
  int local_c;
  
  snprintf(acStack_270,0x200,(char *)(DAT_000318c8 + 0x31430),param_2);
  iVar1 = stat(acStack_270,&sStack_70);
  if (iVar1 == 0) {
    iVar1 = fstat(*param_1,&sStack_70);
    if ((iVar1 == 0) && ((sStack_70.st_mode & 0xf000) == 0x2000)) {
      for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
        snprintf(acStack_270,0x200,(char *)(DAT_000318cc + 0x314c0),param_2,local_c);
        local_10 = fopen(acStack_270,(char *)(DAT_000318d0 + 0x314d4));
        if (local_10 != (FILE *)0x0) {
          local_14 = fgets(acStack_294,0x20,local_10);
          fclose(local_10);
          if ((((local_14 != (char *)0x0) &&
               (iVar1 = sscanf(acStack_294,(char *)(DAT_000318d4 + 0x31534),&local_18,&local_271),
               iVar1 == 2)) && (local_271 == '\n')) &&
             (uVar2 = gnu_dev_minor(sStack_70.st_rdev), uVar2 == local_18)) break;
        }
      }
      if (local_c == 0x100) {
        uVar3 = 0;
      }
      else {
        snprintf(acStack_270,0x200,(char *)(DAT_000318d8 + 0x315c4),param_2,local_c);
        local_10 = fopen(acStack_270,(char *)(DAT_000318dc + 0x315d8));
        if (local_10 == (FILE *)0x0) {
          snprintf(acStack_270,0x200,(char *)(DAT_000318e8 + 0x316a0),param_2,local_c);
          local_10 = fopen(acStack_270,(char *)(DAT_000318ec + 0x316b4));
          if (local_10 == (FILE *)0x0) {
            return 0;
          }
          local_14 = fgets(acStack_294,0x20,local_10);
          fclose(local_10);
          if (((local_14 == (char *)0x0) ||
              (iVar1 = sscanf(local_14,(char *)(DAT_000318f0 + 0x31718),param_3,&local_271),
              iVar1 != 2)) || (local_271 != '\n')) {
            return 0;
          }
          snprintf(acStack_270,0x200,(char *)(DAT_000318f4 + 0x31758),param_2,local_c);
          local_10 = fopen(acStack_270,(char *)(DAT_000318f8 + 0x3176c));
          if (local_10 == (FILE *)0x0) {
            return 0;
          }
          local_14 = fgets(acStack_294,0x20,local_10);
          fclose(local_10);
          if (((local_14 == (char *)0x0) ||
              (iVar1 = sscanf(local_14,(char *)(DAT_000318fc + 0x317d0),param_4,&local_271),
              iVar1 != 2)) || (local_271 != '\n')) {
            return 0;
          }
          snprintf(acStack_270,0x200,(char *)(DAT_00031900 + 0x31810),param_2,local_c);
        }
        else {
          local_14 = fgets(acStack_294,0x20,local_10);
          fclose(local_10);
          if (((local_14 == (char *)0x0) ||
              (iVar1 = sscanf(local_14,(char *)(DAT_000318e0 + 0x3163c),param_3,param_4,&local_271),
              iVar1 != 3)) || (local_271 != 'd')) {
            return 0;
          }
          snprintf(acStack_270,0x200,(char *)(DAT_000318e4 + 0x3167c),param_2,local_c);
        }
        local_10 = fopen(acStack_270,(char *)(DAT_00031904 + 0x31824));
        if (local_10 == (FILE *)0x0) {
          uVar3 = 0;
        }
        else {
          local_14 = fgets(acStack_294,0x20,local_10);
          fclose(local_10);
          if (((local_14 == (char *)0x0) ||
              (iVar1 = sscanf(local_14,(char *)(DAT_00031908 + 0x31888),param_5,&local_271),
              iVar1 != 2)) || ((local_271 != '\n' && (local_271 != '.')))) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
        }
      }
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



/* ===== FUN_0003190c @ 0003190c size=368 ===== */

bool FUN_0003190c(int *param_1,byte *param_2)

{
  char *__name;
  int iVar1;
  bool bVar2;
  size_t local_1c;
  int *local_18;
  byte *local_14;
  
  iVar1 = DAT_00031a7c + 0x3192c;
  bVar2 = false;
  local_14 = param_2;
  if (param_2 == (byte *)0x0) {
    bVar2 = false;
  }
  else {
    while ((*(ushort *)(**(int **)(iVar1 + DAT_00031a80) + (uint)*local_14 * 2) & 0x20) != 0) {
      local_14 = local_14 + 1;
    }
    local_1c = strlen((char *)local_14);
    while ((local_1c != 0 &&
           ((*(ushort *)(**(int **)(iVar1 + DAT_00031a80) + (uint)local_14[local_1c - 1] * 2) & 0x20
            ) != 0))) {
      local_1c = local_1c - 1;
    }
    __name = strndup((char *)local_14,local_1c);
    for (local_18 = param_1; *local_18 != 0; local_18 = local_18 + 1) {
      iVar1 = fnmatch((char *)*local_18,__name,0);
      bVar2 = iVar1 == 0;
      if (bVar2) break;
    }
    free(__name);
  }
  return bVar2;
}



/* ===== FUN_00031a84 @ 00031a84 size=156 ===== */

undefined4 FUN_00031a84(short *param_1,short param_2,short param_3)

{
  short *local_c;
  
  local_c = param_1;
  while( true ) {
    if ((*local_c == 0) || (local_c[1] == 0)) {
      return 0;
    }
    if ((param_2 == *local_c) && (param_3 == local_c[1])) break;
    local_c = local_c + 2;
  }
  return 1;
}



/* ===== FUN_00031b20 @ 00031b20 size=1428 ===== */

void FUN_00031b20(int param_1,undefined4 param_2,short param_3,ushort param_4)

{
  int iVar1;
  char acStack_c0c [512];
  char acStack_a0c [512];
  char acStack_80c [512];
  char acStack_60c [512];
  char acStack_40c [512];
  char acStack_20c [512];
  int local_c;
  
  FUN_000312e4(param_2,DAT_000320b4 + 0x31b74,acStack_20c,0x200);
  FUN_000312e4(param_2,DAT_000320b8 + 0x31b94,acStack_40c,0x200);
  FUN_000312e4(param_2,DAT_000320bc + 0x31bb4,acStack_60c,0x200);
  FUN_000312e4(param_2,DAT_000320c0 + 0x31bd4,acStack_80c,0x200);
  FUN_000312e4(param_2,DAT_000320c4 + 0x31bf4,acStack_a0c,0x200);
  FUN_000312e4(param_2,DAT_000320c8 + 0x31c14,acStack_c0c,0x200);
  local_c = 0;
  while( true ) {
    if (0x58 < local_c) {
      local_c = 0;
      while( true ) {
        if (0 < local_c) {
          return;
        }
        iVar1 = FUN_0003190c(*(undefined4 *)(DAT_00032110 + 0x31fc4 + local_c * 0xc),acStack_80c);
        if (((iVar1 != 0) &&
            (iVar1 = FUN_0003190c(*(undefined4 *)(DAT_00032114 + local_c * 0xc + 0x32008),
                                  acStack_a0c), iVar1 != 0)) &&
           (iVar1 = FUN_00031a84(DAT_00032118 + 0x32048,param_3,param_4), iVar1 != 0)) break;
        local_c = local_c + 1;
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 3;
      return;
    }
    if ((((((param_3 == *(short *)(DAT_000320cc + 0x31c30 + local_c * 0x28)) &&
           (*(ushort *)(DAT_000320d0 + local_c * 0x28 + 0x31c66) ==
            (~*(ushort *)(DAT_000320d4 + local_c * 0x28 + 0x31c9c) & param_4))) &&
          ((*(int *)(DAT_000320d8 + local_c * 0x28 + 0x31ce0) == 0 ||
           (iVar1 = strcmp(*(char **)(DAT_000320dc + local_c * 0x28 + 0x31d08),acStack_20c),
           iVar1 == 0)))) &&
         ((*(int *)(DAT_000320e0 + local_c * 0x28 + 0x31d48) == 0 ||
          (iVar1 = strcmp(*(char **)(DAT_000320e4 + local_c * 0x28 + 0x31d70),acStack_40c),
          iVar1 == 0)))) &&
        ((*(int *)(DAT_000320e8 + local_c * 0x28 + 0x31dbc) == 0 ||
         (iVar1 = strcmp(*(char **)(DAT_000320ec + local_c * 0x28 + 0x31de4),acStack_60c),
         iVar1 == 0)))) &&
       ((((*(int *)(DAT_000320f0 + local_c * 0x28 + 0x31e0c) == 0 ||
          (iVar1 = strcmp(*(char **)(DAT_000320f4 + local_c * 0x28 + 0x31e34),acStack_80c),
          iVar1 == 0)) &&
         ((*(int *)(DAT_000320f8 + local_c * 0x28 + 0x31e7c) == 0 ||
          (iVar1 = strcmp(*(char **)(DAT_000320fc + local_c * 0x28 + 0x31ea4),acStack_a0c),
          iVar1 == 0)))) &&
        ((*(int *)(DAT_00032100 + local_c * 0x28 + 0x31efc) == 0 ||
         (iVar1 = strcmp(*(char **)(DAT_00032104 + local_c * 0x28 + 0x31f24),acStack_c0c),
         iVar1 == 0)))))) break;
    local_c = local_c + 1;
  }
  *(uint *)(param_1 + 8) =
       *(uint *)(param_1 + 8) | *(uint *)(DAT_00032108 + local_c * 0x28 + 0x31f60);
  *(int *)(param_1 + 0x34) = local_c * 0x28 + DAT_0003210c + 0x31f88;
  return;
}



/* ===== FUN_0003211c @ 0003211c size=2764 ===== */

undefined4 * FUN_0003211c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  __uid_t _Var3;
  void *pvVar4;
  int iVar5;
  undefined1 auStack_650 [56];
  uint local_618;
  ushort local_600;
  ushort local_5fe;
  passwd *ppStack_5fc;
  passwd local_5f8;
  undefined4 local_5dc [14];
  uint local_5a4;
  undefined1 auStack_598 [16];
  undefined1 auStack_588 [32];
  undefined1 auStack_568 [56];
  char acStack_530 [1024];
  char acStack_130 [256];
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  char *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  iVar5 = DAT_00032be8 + 0x32144;
  local_1c = 0;
  local_5fe = 0;
  local_600 = 0;
  local_24 = calloc(1,0x40);
  if (local_24 == (undefined4 *)0x0) {
    fwrite((void *)(DAT_00032bf0 + 0x321ac),1,0x25,(FILE *)**(undefined4 **)(iVar5 + DAT_00032bec));
    return (undefined4 *)0x0;
  }
  *local_24 = param_1;
  local_24[0xf] = param_3;
  local_24[0xe] = param_2;
  iVar1 = (**(code **)(local_24[0xf] + 8))(local_24[0xe],*local_24,0x80045626,auStack_650);
  if ((iVar1 == 0) &&
     (iVar1 = (**(code **)(local_24[0xf] + 8))(local_24[0xe],*local_24,0xc050561a,auStack_650),
     iVar1 == 0)) {
    if ((local_618 & 0x10) != 0) {
      local_24[2] = local_24[2] | 1;
    }
    if ((local_618 & 0x20) != 0) {
      local_24[2] = local_24[2] | 2;
    }
  }
  local_20 = getenv((char *)(DAT_00032bf4 + 0x322a4));
  if (local_20 == (char *)0x0) {
    local_20 = (char *)(DAT_00032bf8 + 0x322c4);
  }
  local_28 = FUN_00031400(local_24,local_20,&local_5fe,&local_600,&local_30);
  if (local_28 == 0) {
    local_24[1] = 0;
  }
  else {
    FUN_00031b20(local_24,local_20,local_5fe,local_600);
    if (local_30 == 0x1e0) {
      local_24[1] = 0x1770000;
    }
    else if (local_30 == 5000) {
      local_24[1] = 0x17700000;
    }
    else if (local_30 == 0xc) {
      local_24[1] = 0xf9c18;
    }
    else {
      local_24[1] = local_30 / 0x14;
    }
  }
  local_20 = getenv((char *)(DAT_00032bfc + 0x323c4));
  if (local_20 != (char *)0x0) {
    lVar2 = strtol(local_20,(char **)0x0,0);
    local_24[2] = lVar2;
  }
  local_5dc[0] = 0x80000000;
  iVar1 = (**(code **)(local_24[0xf] + 8))(local_24[0xe],*local_24,0xc0445624,local_5dc);
  if (iVar1 == 0) {
    local_24[3] = local_24[3] | 1;
  }
  if ((param_4 != 0) || (iVar1 = FUN_00033c70(local_24), iVar1 != 0)) {
    for (local_18 = 0; (int)local_18 < 4; local_18 = local_18 + 1) {
      local_5dc[0] = *(undefined4 *)(DAT_00032c00 + 0x32488 + local_18 * 0x44);
      local_2c = (**(code **)(local_24[0xf] + 8))(local_24[0xe],*local_24,0xc0445624,local_5dc);
      if ((local_2c == -1) || ((local_2c == 0 && ((local_5a4 & 1) != 0)))) {
        local_24[4] = local_24[4] | 1 << (local_18 & 0xff);
      }
    }
  }
  iVar1 = local_2c;
  if ((local_24[2] & 0x10) != 0) {
    local_5dc[0] = 0x980912;
    local_2c = (**(code **)(local_24[0xf] + 8))(local_24[0xe],*local_24,0xc0445624,local_5dc);
    if ((local_2c != 0) || (iVar1 = 0, (local_5a4 & 1) != 0)) {
      local_5dc[0] = 0x980911;
      local_2c = (**(code **)(local_24[0xf] + 8))(local_24[0xe],*local_24,0xc0445624,local_5dc);
      iVar1 = local_2c;
      if ((local_2c == 0) && ((local_5a4 & 1) == 0)) {
        local_5dc[0] = 0x980913;
        iVar1 = (**(code **)(local_24[0xf] + 8))(local_24[0xe],*local_24,0xc0445624,local_5dc);
        if ((iVar1 == 0) && ((local_5a4 & 1) == 0)) {
          local_24[4] = local_24[4] | 0x60;
        }
      }
    }
  }
  local_2c = iVar1;
  local_20 = getenv((char *)(DAT_00032c04 + 0x3269c));
  if (local_20 != (char *)0x0) {
    lVar2 = strtol(local_20,(char **)0x0,0);
    local_24[4] = lVar2;
  }
  if (local_24[4] == 0) {
    return local_24;
  }
  iVar1 = (**(code **)(local_24[0xf] + 8))(local_24[0xe],param_1,0x80685600,auStack_598);
  if (iVar1 == 0) {
    _Var3 = geteuid();
    iVar1 = getpwuid_r(_Var3,&local_5f8,acStack_530,0x400,&ppStack_5fc);
    if (iVar1 == 0) {
      if (local_28 == 0) {
        snprintf(acStack_130,0x100,(char *)(DAT_00032c10 + 0x32830),local_5f8.pw_name,auStack_568,
                 auStack_588);
      }
      else {
        snprintf(acStack_130,0x100,(char *)(DAT_00032c0c + 0x327e8),local_5f8.pw_name,auStack_568,
                 (uint)local_5fe,(uint)local_600,auStack_588);
      }
    }
    else {
      perror((char *)(DAT_00032c14 + 0x32844));
      if (local_28 == 0) {
        _Var3 = geteuid();
        snprintf(acStack_130,0x100,(char *)(DAT_00032c1c + 0x32910),_Var3,auStack_568,auStack_588);
      }
      else {
        _Var3 = geteuid();
        snprintf(acStack_130,0x100,(char *)(DAT_00032c18 + 0x328c4),_Var3,auStack_568,
                 (uint)local_5fe,(uint)local_600,auStack_588);
      }
    }
    for (local_18 = 1; acStack_130[local_18] != '\0'; local_18 = local_18 + 1) {
      if (acStack_130[local_18] == '/') {
        acStack_130[local_18] = '-';
      }
    }
    local_14 = shm_open(acStack_130,0xc2,0x180);
    if (local_14 < 0) {
      local_14 = shm_open(acStack_130,2,0x180);
    }
    else {
      local_1c = 1;
    }
    if (local_14 < 0) {
      perror((char *)(DAT_00032c24 + 0x32a44));
    }
    else {
      ftruncate(local_14,0x1000);
      pvVar4 = mmap((void *)0x0,0x1000,3,1,local_14,0);
      local_24[5] = pvVar4;
      close(local_14);
      if (local_24[5] == -1) {
        perror((char *)(DAT_00032c20 + 0x32a24));
        local_24[5] = 0;
      }
    }
    if (local_24[5] == 0) {
      fwrite((void *)(DAT_00032c28 + 0x32a78),1,0x3d,(FILE *)**(undefined4 **)(iVar5 + DAT_00032bec)
            );
      pvVar4 = malloc(0x1000);
      local_24[5] = pvVar4;
      if (local_24[5] == 0) {
        fwrite((void *)(DAT_00032c2c + 0x32ac0),1,0x25,
               (FILE *)**(undefined4 **)(iVar5 + DAT_00032bec));
        goto LAB_00032bd0;
      }
      local_1c = 1;
      local_24[3] = local_24[3] | 2;
    }
    if (local_1c != 0) {
      memset((void *)local_24[5],0,0x1000);
      for (local_18 = 0; (int)local_18 < 7; local_18 = local_18 + 1) {
        *(undefined4 *)(local_24[5] + local_18 * 4) =
             *(undefined4 *)(DAT_00032c30 + local_18 * 0x44 + 0x32b50);
      }
      if ((local_24[2] & 8) != 0) {
        *(undefined4 *)local_24[5] = 1;
      }
      if ((local_24[0xd] != 0) && (*(int *)(local_24[0xd] + 0x14) != 0)) {
        *(undefined4 *)(local_24[5] + 0xc) = *(undefined4 *)(local_24[0xd] + 0x14);
      }
    }
  }
  else {
    perror((char *)(DAT_00032c08 + 0x3272c));
LAB_00032bd0:
    free(local_24);
    local_24 = (undefined4 *)0x0;
  }
  return local_24;
}



/* ===== FUN_00032c34 @ 00032c34 size=112 ===== */

void FUN_00032c34(void *param_1)

{
  if (*(int *)((int)param_1 + 0x10) != 0) {
    if ((*(uint *)((int)param_1 + 0xc) & 2) == 0) {
      munmap(*(void **)((int)param_1 + 0x14),0x1000);
    }
    else {
      free(*(void **)((int)param_1 + 0x14));
    }
  }
  free(param_1);
  return;
}



/* ===== FUN_00032ca4 @ 00032ca4 size=212 ===== */

void FUN_00032ca4(int param_1,int *param_2,int param_3)

{
  memcpy(param_2,(void *)(param_3 * 0x44 + DAT_00032d78 + 0x32cd4),0x44);
  if ((*param_2 == 0x98090c) && ((*(uint *)(param_1 + 8) & 8) != 0)) {
    param_2[0xd] = 1;
  }
  if (((*param_2 == 0x980910) && (*(int *)(param_1 + 0x34) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x34) + 0x14) != 0)) {
    param_2[0xd] = *(int *)(*(int *)(param_1 + 0x34) + 0x14);
  }
  return;
}



/* ===== FUN_00032d7c @ 00032d7c size=468 ===== */

int FUN_00032d7c(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int local_18;
  uint local_14;
  
  uVar1 = *param_2;
  local_14 = 0;
  while( true ) {
    if (6 < (int)local_14) {
      local_18 = (**(code **)(param_1[0xf] + 8))(param_1[0xe],*param_1,0xc0445624,param_2);
      if (((param_1[3] & 1) != 0) && ((int)uVar1 < 0)) {
        if (local_18 != 0) {
          *param_2 = 0xfffffff;
        }
        for (local_14 = 0; (int)local_14 < 7; local_14 = local_14 + 1) {
          if (((((int)param_1[4] >> (local_14 & 0xff) & 1U) != 0) &&
              ((uVar1 & 0x7fffffff) < *(uint *)(DAT_00032f54 + 0x32ec4 + local_14 * 0x44))) &&
             (*(uint *)(DAT_00032f58 + 0x32ef0 + local_14 * 0x44) <= *param_2)) {
            FUN_00032ca4(param_1,param_2,local_14);
            local_18 = 0;
          }
        }
      }
      return local_18;
    }
    if ((((int)param_1[4] >> (local_14 & 0xff) & 1U) != 0) &&
       (*param_2 == *(uint *)(DAT_00032f50 + 0x32de0 + local_14 * 0x44))) break;
    local_14 = local_14 + 1;
  }
  FUN_00032ca4(param_1,param_2,local_14);
  return 0;
}



/* ===== FUN_00032f5c @ 00032f5c size=240 ===== */

undefined4 FUN_00032f5c(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  uint local_14;
  
  local_14 = 0;
  while( true ) {
    if (6 < (int)local_14) {
      uVar1 = (**(code **)(param_1[0xf] + 8))(param_1[0xe],*param_1,0xc008561b,param_2);
      return uVar1;
    }
    if ((((int)param_1[4] >> (local_14 & 0xff) & 1U) != 0) &&
       (*param_2 == *(int *)(DAT_0003304c + 0x32fb4 + local_14 * 0x44))) break;
    local_14 = local_14 + 1;
  }
  param_2[1] = *(int *)(param_1[5] + local_14 * 4);
  return 0;
}



/* ===== FUN_00033050 @ 00033050 size=460 ===== */

void FUN_00033050(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint local_10;
  uint local_c;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_3 = *param_2;
  param_3[1] = uVar3;
  param_3[2] = uVar4;
  param_3[3] = uVar5;
  uVar3 = param_2[5];
  param_3[4] = param_2[4];
  param_3[5] = uVar3;
  if ((*(int *)(param_1 + 0x10) != 0) && (pvVar1 = malloc(param_2[1] * 0x14), pvVar1 != (void *)0x0)
     ) {
    param_3[5] = pvVar1;
    param_3[1] = 0;
    for (local_c = 0; local_c < (uint)param_2[1]; local_c = local_c + 1) {
      for (local_10 = 0;
          (local_10 < 7 &&
          (((*(int *)(param_1 + 0x10) >> (local_10 & 0xff) & 1U) == 0 ||
           (*(int *)(param_2[5] + local_c * 0x14) !=
            *(int *)(DAT_0003321c + 0x33138 + local_10 * 0x44))))); local_10 = local_10 + 1) {
      }
      if (local_10 == 7) {
        puVar2 = (undefined4 *)(param_2[5] + local_c * 0x14);
        iVar6 = param_3[1];
        param_3[1] = iVar6 + 1;
        puVar7 = (undefined4 *)((int)pvVar1 + iVar6 * 0x14);
        uVar5 = puVar2[1];
        uVar4 = puVar2[2];
        uVar3 = puVar2[3];
        *puVar7 = *puVar2;
        puVar7[1] = uVar5;
        puVar7[2] = uVar4;
        puVar7[3] = uVar3;
        puVar7[4] = puVar2[4];
      }
    }
  }
  return;
}



/* ===== FUN_00033220 @ 00033220 size=468 ===== */

void FUN_00033220(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
  if (*(int *)(param_3 + 0x14) != *(int *)(param_2 + 0x14)) {
    uVar3 = *(uint *)(param_3 + 8);
    uVar4 = *(uint *)(param_3 + 4);
    for (local_c = 0; local_c < *(uint *)(param_2 + 4); local_c = local_c + 1) {
      for (local_10 = 0;
          (local_10 < 7 &&
          (((*(int *)(param_1 + 0x10) >> (local_10 & 0xff) & 1U) == 0 ||
           (*(int *)(*(int *)(param_2 + 0x14) + local_c * 0x14) !=
            *(int *)(DAT_000333f4 + 0x332e8 + local_10 * 0x44))))); local_10 = local_10 + 1) {
      }
      if (local_10 == 7) {
        puVar1 = (undefined4 *)(*(int *)(param_3 + 0x14) + local_14 * 0x14);
        puVar5 = (undefined4 *)(*(int *)(param_2 + 0x14) + local_c * 0x14);
        uVar7 = puVar1[1];
        uVar6 = puVar1[2];
        uVar2 = puVar1[3];
        *puVar5 = *puVar1;
        puVar5[1] = uVar7;
        puVar5[2] = uVar6;
        puVar5[3] = uVar2;
        puVar5[4] = puVar1[4];
        local_14 = local_14 + 1;
      }
      else if (uVar3 < uVar4) {
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      }
    }
    free(*(void **)(param_3 + 0x14));
  }
  return;
}



/* ===== FUN_000333f8 @ 000333f8 size=384 ===== */

int FUN_000333f8(undefined4 *param_1,int param_2)

{
  undefined1 auStack_38 [24];
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_1c = param_2;
  FUN_00033050(param_1,param_2,auStack_38);
  local_20 = (**(code **)(param_1[0xf] + 8))(param_1[0xe],*param_1,0xc0185647,auStack_38);
  FUN_00033220(param_1,local_1c,auStack_38);
  if (local_20 == 0) {
    for (local_14 = 0; local_14 < *(uint *)(local_1c + 4); local_14 = local_14 + 1) {
      for (local_18 = 0; (int)local_18 < 7; local_18 = local_18 + 1) {
        if ((((int)param_1[4] >> (local_18 & 0xff) & 1U) != 0) &&
           (*(int *)(*(int *)(local_1c + 0x14) + local_14 * 0x14) ==
            *(int *)(DAT_00033578 + 0x334dc + local_18 * 0x44))) {
          *(undefined4 *)(*(int *)(local_1c + 0x14) + local_14 * 0x14 + 0xc) =
               *(undefined4 *)(param_1[5] + local_18 * 4);
          break;
        }
      }
    }
    local_20 = 0;
  }
  return local_20;
}



/* ===== FUN_0003357c @ 0003357c size=360 ===== */

undefined4 FUN_0003357c(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint local_14;
  
  local_14 = 0;
  while( true ) {
    if (6 < (int)local_14) {
      uVar2 = (**(code **)(param_1[0xf] + 8))(param_1[0xe],*param_1,0xc008561c,param_2);
      return uVar2;
    }
    if ((((int)param_1[4] >> (local_14 & 0xff) & 1U) != 0) &&
       (*param_2 == *(int *)(DAT_000336e4 + 0x335d4 + local_14 * 0x44))) break;
    local_14 = local_14 + 1;
  }
  if ((param_2[1] <= *(int *)(DAT_000336e8 + local_14 * 0x44 + 0x3362c)) &&
     (*(int *)(DAT_000336ec + local_14 * 0x44 + 0x33658) <= param_2[1])) {
    *(int *)(param_1[5] + local_14 * 4) = param_2[1];
    return 0;
  }
  piVar1 = __errno_location();
  *piVar1 = 0x16;
  return 0xffffffff;
}



/* ===== FUN_000336f0 @ 000336f0 size=404 ===== */

undefined4 FUN_000336f0(int param_1,int param_2)

{
  int *piVar1;
  uint local_10;
  uint local_c;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    for (local_c = 0; local_c < *(uint *)(param_2 + 4); local_c = local_c + 1) {
      for (local_10 = 0; (int)local_10 < 7; local_10 = local_10 + 1) {
        if ((((*(int *)(param_1 + 0x10) >> (local_10 & 0xff) & 1U) != 0) &&
            (*(int *)(*(int *)(param_2 + 0x14) + local_c * 0x14) ==
             *(int *)(DAT_00033884 + 0x33778 + local_10 * 0x44))) &&
           ((*(int *)(DAT_00033888 + local_10 * 0x44 + 0x337e4) <
             *(int *)(*(int *)(param_2 + 0x14) + local_c * 0x14 + 0xc) ||
            (*(int *)(*(int *)(param_2 + 0x14) + local_c * 0x14 + 0xc) <
             *(int *)(DAT_0003388c + local_10 * 0x44 + 0x33824))))) {
          *(uint *)(param_2 + 8) = local_c;
          piVar1 = __errno_location();
          *piVar1 = 0x16;
          return 0xffffffff;
        }
      }
    }
  }
  return 0;
}



/* ===== FUN_00033890 @ 00033890 size=168 ===== */

int FUN_00033890(undefined4 *param_1,undefined4 param_2)

{
  undefined1 auStack_30 [24];
  int local_18;
  undefined4 local_14;
  
  local_14 = param_2;
  local_18 = FUN_000336f0(param_1,param_2);
  if (local_18 == 0) {
    FUN_00033050(param_1,local_14,auStack_30);
    local_18 = (**(code **)(param_1[0xf] + 8))(param_1[0xe],*param_1,0xc0185649,auStack_30);
    FUN_00033220(param_1,local_14,auStack_30);
  }
  return local_18;
}



/* ===== FUN_00033938 @ 00033938 size=420 ===== */

int FUN_00033938(undefined4 *param_1,int param_2)

{
  undefined1 auStack_38 [24];
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_1c = param_2;
  local_20 = FUN_000336f0(param_1,param_2);
  if (local_20 == 0) {
    FUN_00033050(param_1,local_1c,auStack_38);
    local_20 = (**(code **)(param_1[0xf] + 8))(param_1[0xe],*param_1,0xc0185648,auStack_38);
    FUN_00033220(param_1,local_1c,auStack_38);
    if (local_20 == 0) {
      for (local_14 = 0; local_14 < *(uint *)(local_1c + 4); local_14 = local_14 + 1) {
        for (local_18 = 0; (int)local_18 < 7; local_18 = local_18 + 1) {
          if ((((int)param_1[4] >> (local_18 & 0xff) & 1U) != 0) &&
             (*(int *)(*(int *)(local_1c + 0x14) + local_14 * 0x14) ==
              *(int *)(DAT_00033adc + 0x33a40 + local_18 * 0x44))) {
            *(undefined4 *)(param_1[5] + local_18 * 4) =
                 *(undefined4 *)(*(int *)(local_1c + 0x14) + local_14 * 0x14 + 0xc);
            break;
          }
        }
      }
      local_20 = 0;
    }
  }
  return local_20;
}



/* ===== FUN_00033ae0 @ 00033ae0 size=40 ===== */

undefined4 FUN_00033ae0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ===== FUN_00033b08 @ 00033b08 size=40 ===== */

undefined4 FUN_00033b08(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* ===== FUN_00033b30 @ 00033b30 size=204 ===== */

uint FUN_00033b30(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x10) >> (param_2 & 0xff) & 1U) == 0) {
    uVar1 = 0;
  }
  else if (((param_2 == 1) && ((*(uint *)(param_1 + 8) & 1) != 0)) ||
          ((param_2 == 2 && ((*(uint *)(param_1 + 8) & 2) != 0)))) {
    uVar1 = (uint)(*(int *)(*(int *)(param_1 + 0x14) + param_2 * 4) == 0);
  }
  else {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x14) + param_2 * 4);
  }
  return uVar1;
}



/* ===== FUN_00033bfc @ 00033bfc size=116 ===== */

int FUN_00033bfc(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = memcmp(*(void **)(param_1 + 0x14),(void *)(param_1 + 0x18),0x1c);
    memcpy((void *)(param_1 + 0x18),*(void **)(param_1 + 0x14),0x1c);
  }
  return iVar1;
}



/* ===== FUN_00033c70 @ 00033c70 size=76 ===== */

undefined4 FUN_00033c70(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 0x10) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== FUN_00033cbc @ 00033cbc size=140 ===== */

undefined4 * FUN_00033cbc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_00033d48 + 0x33cdc;
  puVar1 = calloc(1,0x42c);
  if (puVar1 == (undefined4 *)0x0) {
    fwrite((void *)(DAT_00033d50 + 0x33d18),1,0x28,(FILE *)**(undefined4 **)(iVar2 + DAT_00033d4c));
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = param_1;
    *puVar1 = param_2;
  }
  return puVar1;
}



/* ===== FUN_00033d54 @ 00033d54 size=36 ===== */

void FUN_00033d54(void *param_1)

{
  free(param_1);
  return;
}



/* ===== FUN_00033d78 @ 00033d78 size=176 ===== */

undefined4 FUN_00033d78(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int local_c;
  
  param_1[2] = 0;
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    iVar1 = (*(code *)**(undefined4 **)(DAT_00033e28 + 0x33dac + local_c * 4))(param_1);
    if (iVar1 != 0) {
      param_1[2] = 1;
    }
  }
  uVar2 = FUN_00033bfc(*param_1);
  param_1[3] = uVar2 | param_1[3];
  return param_1[2];
}



/* ===== FUN_00033e2c @ 00033e2c size=316 ===== */

void FUN_00033e2c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 local_c;
  
  for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
    uVar1 = (undefined1)local_c;
    *(undefined1 *)(param_1 + local_c + 0x18) = uVar1;
    *(undefined1 *)(param_1 + local_c + 0x118) = uVar1;
    *(undefined1 *)(param_1 + local_c + 0x218) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    iVar2 = (*(code *)**(undefined4 **)(DAT_00033f68 + 0x33eec + local_c * 4))(param_1);
    if ((iVar2 != 0) &&
       (iVar2 = (**(code **)(*(int *)(DAT_00033f6c + 0x33f14 + local_c * 4) + 4))
                          (param_1,param_2,param_3), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
  }
  return;
}



/* ===== FUN_00033f70 @ 00033f70 size=1212 ===== */

void FUN_00033f70(int param_1,byte *param_2,int param_3)

{
  uint uVar1;
  byte *local_18;
  uint local_10;
  uint local_c;
  
  uVar1 = *(uint *)(param_3 + 0xc);
  local_18 = param_2;
  if (uVar1 == 0x33524742) {
LAB_00034310:
    for (local_10 = 0; local_10 < *(uint *)(param_3 + 8); local_10 = local_10 + 1) {
      for (local_c = 0; local_c < *(uint *)(param_3 + 4); local_c = local_c + 1) {
        *local_18 = *(byte *)(param_1 + (uint)*local_18 + 0x18);
        local_18[1] = *(byte *)(param_1 + (uint)local_18[1] + 0x118);
        local_18[2] = *(byte *)(param_1 + (uint)local_18[2] + 0x218);
        local_18 = local_18 + 3;
      }
      local_18 = local_18 + *(int *)(param_3 + 0x14) + *(int *)(param_3 + 4) * -3;
    }
  }
  else {
    if (uVar1 < 0x33524743) {
      if (uVar1 != 0x31384142) {
        if (uVar1 != 0x33424752) {
          return;
        }
        goto LAB_00034310;
      }
    }
    else {
      if ((uVar1 == 0x47425247) || (uVar1 == 0x47524247)) {
        for (local_10 = 0; local_10 < *(uint *)(param_3 + 8) >> 1; local_10 = local_10 + 1) {
          for (local_c = 0; local_c < *(uint *)(param_3 + 4) >> 1; local_c = local_c + 1) {
            *local_18 = *(byte *)(param_1 + (uint)*local_18 + 0x118);
            local_18[1] = *(byte *)(param_1 + (uint)local_18[1] + 0x18);
            local_18 = local_18 + 2;
          }
          local_18 = local_18 + (*(int *)(param_3 + 0x14) - *(int *)(param_3 + 4));
          for (local_c = 0; local_c < *(uint *)(param_3 + 4) >> 1; local_c = local_c + 1) {
            *local_18 = *(byte *)(param_1 + (uint)*local_18 + 0x218);
            local_18[1] = *(byte *)(param_1 + (uint)local_18[1] + 0x118);
            local_18 = local_18 + 2;
          }
          local_18 = local_18 + (*(int *)(param_3 + 0x14) - *(int *)(param_3 + 4));
        }
        return;
      }
      if (uVar1 != 0x42474752) {
        return;
      }
    }
    for (local_10 = 0; local_10 < *(uint *)(param_3 + 8) >> 1; local_10 = local_10 + 1) {
      for (local_c = 0; local_c < *(uint *)(param_3 + 4) >> 1; local_c = local_c + 1) {
        *local_18 = *(byte *)(param_1 + (uint)*local_18 + 0x18);
        local_18[1] = *(byte *)(param_1 + (uint)local_18[1] + 0x118);
        local_18 = local_18 + 2;
      }
      local_18 = local_18 + (*(int *)(param_3 + 0x14) - *(int *)(param_3 + 4));
      for (local_c = 0; local_c < *(uint *)(param_3 + 4) >> 1; local_c = local_c + 1) {
        *local_18 = *(byte *)(param_1 + (uint)*local_18 + 0x118);
        local_18[1] = *(byte *)(param_1 + (uint)local_18[1] + 0x218);
        local_18 = local_18 + 2;
      }
      local_18 = local_18 + (*(int *)(param_3 + 0x14) - *(int *)(param_3 + 4));
    }
  }
  return;
}



/* ===== FUN_0003442c @ 0003442c size=332 ===== */

void FUN_0003442c(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_3 + 0xc);
  if (uVar1 != 0x33524742) {
    if (uVar1 < 0x33524743) {
      if ((uVar1 != 0x31384142) && (uVar1 != 0x33424752)) {
        return;
      }
    }
    else if (((uVar1 != 0x47425247) && (uVar1 != 0x47524247)) && (uVar1 != 0x42474752)) {
      return;
    }
  }
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 0x14) != 10)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_00033e2c(param_1,param_2,param_3);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00033f70(param_1,param_2,param_3);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* ===== FUN_00034578 @ 00034578 size=80 ===== */

int FUN_00034578(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00033b30(*param_1,0);
  if (iVar1 == 0) {
    param_1[0xc6] = 0;
  }
  return iVar1;
}



/* ===== FUN_000345c8 @ 000345c8 size=1380 ===== */

undefined4 FUN_000345c8(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int local_c;
  
  if (param_2 < 0xc01) {
    if (param_2 < 0x200) {
      param_2 = 0x200;
    }
  }
  else {
    param_2 = 0xc00;
  }
  if (param_3 < 0xc01) {
    if (param_3 < 0x200) {
      param_3 = 0x200;
    }
  }
  else {
    param_3 = 0xc00;
  }
  if (param_4 < 0xc01) {
    if (param_4 < 0x200) {
      param_4 = 0x200;
    }
  }
  else {
    param_4 = 0xc00;
  }
  if (*(int *)(param_1 + 0x318) == 0) {
    *(int *)(param_1 + 0x318) = param_2;
    *(int *)(param_1 + 0x31c) = param_3;
    *(int *)(param_1 + 800) = param_4;
  }
  else {
    bVar1 = false;
    iVar5 = *(int *)(param_1 + 0x318) - param_2;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 < 0x81) {
      *(int *)(param_1 + 0x318) = param_2;
    }
    else {
      if (*(int *)(param_1 + 0x318) < param_2) {
        *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + 0x80;
      }
      else {
        *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + -0x80;
      }
      bVar1 = true;
    }
    iVar5 = *(int *)(param_1 + 0x31c) - param_3;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 < 0x81) {
      *(int *)(param_1 + 0x31c) = param_3;
    }
    else {
      if (*(int *)(param_1 + 0x31c) < param_3) {
        *(int *)(param_1 + 0x31c) = *(int *)(param_1 + 0x31c) + 0x80;
      }
      else {
        *(int *)(param_1 + 0x31c) = *(int *)(param_1 + 0x31c) + -0x80;
      }
      bVar1 = true;
    }
    iVar5 = *(int *)(param_1 + 800) - param_4;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 < 0x81) {
      *(int *)(param_1 + 800) = param_4;
    }
    else {
      if (*(int *)(param_1 + 800) < param_4) {
        *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 0x80;
      }
      else {
        *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + -0x80;
      }
      bVar1 = true;
    }
    if ((bVar1) && (*(int *)(param_1 + 0x14) == 0)) {
      *(undefined4 *)(param_1 + 0x14) = 10;
    }
  }
  iVar5 = *(int *)(param_1 + 0x318) - *(int *)(param_1 + 0x31c);
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (iVar5 < 0x40) {
    iVar5 = *(int *)(param_1 + 0x318) - *(int *)(param_1 + 800);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 < 0x40) {
      iVar5 = *(int *)(param_1 + 0x31c) - *(int *)(param_1 + 800);
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < 0x40) {
        return 0;
      }
    }
  }
  iVar5 = (*(int *)(param_1 + 0x318) + *(int *)(param_1 + 0x31c) + *(int *)(param_1 + 800)) / 3;
  for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
    iVar2 = FUN_000364d0(iVar5 * (uint)*(byte *)(param_1 + local_c + 0x18),
                         *(undefined4 *)(param_1 + 0x31c));
    if (iVar2 < 0x100) {
      uVar3 = FUN_000364d0(iVar5 * (uint)*(byte *)(param_1 + local_c + 0x18),
                           *(undefined4 *)(param_1 + 0x31c));
      bVar4 = (byte)uVar3 & ~(byte)((int)uVar3 >> 0x1f);
    }
    else {
      bVar4 = 0xff;
    }
    *(byte *)(param_1 + local_c + 0x18) = bVar4;
    iVar2 = FUN_000364d0(iVar5 * (uint)*(byte *)(param_1 + local_c + 0x118),
                         *(undefined4 *)(param_1 + 0x318));
    if (iVar2 < 0x100) {
      uVar3 = FUN_000364d0(iVar5 * (uint)*(byte *)(param_1 + local_c + 0x118),
                           *(undefined4 *)(param_1 + 0x318));
      bVar4 = (byte)uVar3 & ~(byte)((int)uVar3 >> 0x1f);
    }
    else {
      bVar4 = 0xff;
    }
    *(byte *)(param_1 + local_c + 0x118) = bVar4;
    iVar2 = FUN_000364d0(iVar5 * (uint)*(byte *)(param_1 + local_c + 0x218),
                         *(undefined4 *)(param_1 + 800));
    if (iVar2 < 0x100) {
      uVar3 = FUN_000364d0(iVar5 * (uint)*(byte *)(param_1 + local_c + 0x218),
                           *(undefined4 *)(param_1 + 800));
      bVar4 = (byte)uVar3 & ~(byte)((int)uVar3 >> 0x1f);
    }
    else {
      bVar4 = 0xff;
    }
    *(byte *)(param_1 + local_c + 0x218) = bVar4;
  }
  return 1;
}



/* ===== FUN_00034b2c @ 00034b2c size=688 ===== */

undefined4 FUN_00034b2c(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_38 = param_2;
  for (local_10 = 0; local_10 < *(uint *)(param_3 + 8); local_10 = local_10 + 2) {
    for (local_c = 0; local_c < *(uint *)(param_3 + 4); local_c = local_c + 2) {
      pbVar4 = local_38 + 1;
      local_14 = local_14 + (uint)*local_38;
      local_38 = local_38 + 2;
      local_18 = local_18 + (uint)*pbVar4;
    }
    local_38 = local_38 + (*(int *)(param_3 + 0x14) - *(int *)(param_3 + 4));
    for (local_c = 0; local_c < *(uint *)(param_3 + 4); local_c = local_c + 2) {
      pbVar4 = local_38 + 1;
      local_1c = local_1c + (uint)*local_38;
      local_38 = local_38 + 2;
      local_20 = local_20 + (uint)*pbVar4;
    }
    local_38 = local_38 + (*(int *)(param_3 + 0x14) - *(int *)(param_3 + 4));
  }
  if (param_4 == 0) {
    local_24 = local_18 / 2 + local_1c / 2;
    local_28 = local_14;
    local_2c = local_20;
  }
  else {
    local_24 = local_14 / 2 + local_20 / 2;
    local_28 = local_18;
    local_2c = local_1c;
  }
  uVar1 = FUN_00036408(local_24,(uint)(*(int *)(param_3 + 8) * *(int *)(param_3 + 4)) >> 6);
  uVar2 = FUN_00036408(local_28,(uint)(*(int *)(param_3 + 8) * *(int *)(param_3 + 4)) >> 6);
  uVar3 = FUN_00036408(local_2c,(uint)(*(int *)(param_3 + 8) * *(int *)(param_3 + 4)) >> 6);
  uVar1 = FUN_000345c8(param_1,uVar1,uVar2,uVar3);
  return uVar1;
}



/* ===== FUN_00034ddc @ 00034ddc size=444 ===== */

undefined4 FUN_00034ddc(undefined4 param_1,byte *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *local_28;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_28 = param_2;
  for (local_10 = 0; local_10 < *(uint *)(param_3 + 8); local_10 = local_10 + 1) {
    for (local_c = 0; local_c < *(uint *)(param_3 + 4); local_c = local_c + 1) {
      local_18 = local_18 + (uint)*local_28;
      pbVar4 = local_28 + 2;
      local_14 = local_14 + (uint)local_28[1];
      local_28 = local_28 + 3;
      local_1c = local_1c + (uint)*pbVar4;
    }
    local_28 = local_28 + *(int *)(param_3 + 0x14) + *(int *)(param_3 + 4) * -3;
  }
  uVar1 = FUN_00036408(local_14,(uint)(*(int *)(param_3 + 8) * *(int *)(param_3 + 4)) >> 4);
  uVar2 = FUN_00036408(local_18,(uint)(*(int *)(param_3 + 8) * *(int *)(param_3 + 4)) >> 4);
  uVar3 = FUN_00036408(local_1c,(uint)(*(int *)(param_3 + 8) * *(int *)(param_3 + 4)) >> 4);
  uVar1 = FUN_000345c8(param_1,uVar1,uVar2,uVar3);
  return uVar1;
}



/* ===== FUN_00034f98 @ 00034f98 size=248 ===== */

undefined4 FUN_00034f98(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_3 + 0xc);
  if (uVar2 == 0x33524742) {
LAB_00035068:
    uVar1 = FUN_00034ddc(param_1,param_2,param_3);
  }
  else {
    if (uVar2 < 0x33524743) {
      if (uVar2 != 0x31384142) {
        if (uVar2 != 0x33424752) {
          return 0;
        }
        goto LAB_00035068;
      }
    }
    else {
      if ((uVar2 == 0x47425247) || (uVar2 == 0x47524247)) {
        uVar1 = FUN_00034b2c(param_1,param_2,param_3,1);
        return uVar1;
      }
      if (uVar2 != 0x42474752) {
        return 0;
      }
    }
    uVar1 = FUN_00034b2c(param_1,param_2,param_3,0);
  }
  return uVar1;
}



/* ===== FUN_00035090 @ 00035090 size=80 ===== */

int FUN_00035090(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00033b30(*param_1,5);
  if (iVar1 == 0) {
    param_1[0x10a] = 0;
  }
  return iVar1;
}



/* ===== FUN_000350e0 @ 000350e0 size=412 ===== */

void FUN_000350e0(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000364d0(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28),
                       *(undefined4 *)(param_1 + 0x30));
  if (param_5 != 0) {
    iVar2 = param_3;
    if (param_3 < 0) {
      iVar2 = -param_3;
    }
    if ((2 < iVar2) && (0x100 < iVar1)) {
      iVar2 = iVar1 + 0xff;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      *param_2 = *param_2 + (iVar2 >> 8) * param_3 * *(int *)(param_1 + 0x30);
      goto LAB_00035220;
    }
  }
  if ((param_5 == 0) || (iVar1 < 0x401)) {
    *param_2 = *param_2 + param_3 * *(int *)(param_1 + 0x30);
  }
  else {
    iVar2 = iVar1 + 0x3ff;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    *param_2 = *param_2 + (iVar2 >> 10) * param_3 * *(int *)(param_1 + 0x30);
  }
LAB_00035220:
  if (param_3 < 1) {
    if (*param_2 < param_4) {
      *param_2 = param_4;
    }
  }
  else if (param_4 < *param_2) {
    *param_2 = param_4;
  }
  return;
}



/* ===== FUN_0003527c @ 0003527c size=2032 ===== */

undefined4 FUN_0003527c(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *local_d0;
  undefined4 local_c4 [10];
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_80 [10];
  int local_58;
  int local_54;
  int local_4c;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_18 = 0;
  local_1c = 6;
  local_3c = 0x980911;
  local_c4[0] = 0x980911;
  lVar2 = syscall(0x36,param_1[1],0xc0445624,local_c4);
  if (lVar2 != 0) {
    return 0;
  }
  lVar2 = syscall(0x36,param_1[1],0xc008561b,&local_3c);
  if (lVar2 != 0) {
    return 0;
  }
  local_20 = local_38;
  local_34 = local_38;
  local_24 = (local_98 - local_9c) / 10;
  local_14 = FUN_000364d0(local_24,local_94);
  if (10 < local_14) {
    local_14 = 10;
  }
  local_24 = local_14 * local_94 + local_9c;
  local_3c = 0x980913;
  local_80[0] = 0x980913;
  lVar2 = syscall(0x36,param_1[1],0xc0445624,local_80);
  if (lVar2 != 0) {
    return 0;
  }
  lVar2 = syscall(0x36,param_1[1],0xc008561b,&local_3c);
  if (lVar2 != 0) {
    return 0;
  }
  local_28 = local_38;
  local_30 = local_38;
  uVar5 = *(uint *)(param_3 + 0xc);
  if (uVar5 == 0x33524742) {
LAB_00035594:
    local_d0 = (byte *)(param_2 +
                       ((uint)(*(int *)(param_3 + 0x14) * *(int *)(param_3 + 8)) >> 2) +
                       ((uint)(*(int *)(param_3 + 4) * 3) >> 2));
    for (local_10 = 0; local_10 < *(uint *)(param_3 + 8) >> 1; local_10 = local_10 + 1) {
      for (local_c = 0; local_c < *(uint *)(param_3 + 4) >> 1; local_c = local_c + 1) {
        pbVar3 = local_d0 + 1;
        bVar1 = *local_d0;
        pbVar4 = local_d0 + 2;
        local_d0 = local_d0 + 3;
        local_18 = local_18 + (uint)bVar1 + (uint)*pbVar3 + (uint)*pbVar4;
      }
      local_d0 = local_d0 + (*(int *)(param_3 + 0x14) - ((uint)(*(int *)(param_3 + 4) * 3) >> 1));
    }
    local_18 = FUN_00036408(local_18,(uint)(*(int *)(param_3 + 4) * *(int *)(param_3 + 8) * 3) >> 2)
    ;
  }
  else {
    if (uVar5 < 0x33524743) {
      if (uVar5 != 0x31384142) {
        if (uVar5 != 0x33424752) goto LAB_00035700;
        goto LAB_00035594;
      }
    }
    else if (((uVar5 != 0x47425247) && (uVar5 != 0x47524247)) && (uVar5 != 0x42474752))
    goto LAB_00035700;
    local_d0 = (byte *)(param_2 +
                       ((uint)(*(int *)(param_3 + 0x14) * *(int *)(param_3 + 8)) >> 2) +
                       (*(uint *)(param_3 + 4) >> 2));
    for (local_10 = 0; local_10 < *(uint *)(param_3 + 8) >> 1; local_10 = local_10 + 1) {
      for (local_c = 0; local_c < *(uint *)(param_3 + 4) >> 1; local_c = local_c + 1) {
        local_18 = local_18 + (uint)*local_d0;
        local_d0 = local_d0 + 1;
      }
      local_d0 = local_d0 + (*(int *)(param_3 + 0x14) - (*(uint *)(param_3 + 4) >> 1));
    }
    local_18 = FUN_00036408(local_18,(uint)(*(int *)(param_3 + 4) * *(int *)(param_3 + 8)) >> 2);
  }
LAB_00035700:
  local_2c = FUN_00033b30(*param_1,6);
  local_14 = FUN_000364d0(local_2c - local_18,local_1c);
  if (((0 < local_14) && ((int)param_1[0x10a] < 0)) || ((local_14 < 0 && (0 < (int)param_1[0x10a])))
     ) {
    local_14 = local_14 / 2;
  }
  if (local_14 != 0) {
    if (local_14 < 0) {
      if (local_90 < local_34) {
        FUN_000350e0(local_c4,&local_34,local_14,local_90,1);
      }
      else if (local_4c < local_30) {
        FUN_000350e0(local_80,&local_30,local_14,local_4c,1);
      }
      else if (local_24 < local_34) {
        FUN_000350e0(local_c4,&local_34,local_14,local_24,1);
      }
      else if (local_58 < local_30) {
        FUN_000350e0(local_80,&local_30,local_14,local_58,1);
      }
      else if (local_9c < local_34) {
        FUN_000350e0(local_c4,&local_34,local_14,local_9c,0);
      }
      else {
        local_14 = 0;
      }
    }
    else if (local_34 < local_24) {
      FUN_000350e0(local_c4,&local_34,local_14,local_24,0);
    }
    else if (local_30 < local_4c) {
      FUN_000350e0(local_80,&local_30,local_14,local_4c,1);
    }
    else if (local_34 < local_90) {
      FUN_000350e0(local_c4,&local_34,local_14,local_90,1);
    }
    else if (local_30 < local_54) {
      FUN_000350e0(local_80,&local_30,local_14,local_54,1);
    }
    else if (local_34 < local_98) {
      FUN_000350e0(local_c4,&local_34,local_14,local_98,1);
    }
    else {
      local_14 = 0;
    }
    if (local_14 != 0) {
      param_1[0x10a] = local_14;
      param_1[5] = 8;
    }
    if (local_28 != local_30) {
      local_3c = 0x980913;
      local_38 = local_30;
      syscall(0x36,param_1[1],0xc008561c,&local_3c);
    }
    if (local_20 != local_34) {
      local_3c = 0x980911;
      local_38 = local_34;
      syscall(0x36,param_1[1],0xc008561c,&local_3c);
    }
  }
  return 0;
}



/* ===== FUN_00035a70 @ 00035a70 size=88 ===== */

undefined4 FUN_00035a70(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00033b30(*param_1,3);
  if ((iVar1 == 0) || (iVar1 == 1000)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== FUN_00035ac8 @ 00035ac8 size=520 ===== */

undefined4 FUN_00035ac8(undefined4 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  int local_c;
  
  iVar1 = FUN_00033b30(*param_1,3);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (iVar1 != param_1[0xc9]) {
      for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
        dVar6 = (double)VectorSignedToFloat(local_c,(byte)(in_fpscr >> 0x16) & 3);
        dVar7 = (double)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
        fVar4 = powf((float)(dVar6 / DAT_00035cd0),(float)(DAT_00035cd8 / dVar7));
        iVar5 = (int)(fVar4 * DAT_00035ce0);
        if (iVar5 < 0x100) {
          if (iVar5 < 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = (undefined1)iVar5;
          }
        }
        else {
          uVar2 = 0xff;
        }
        *(undefined1 *)((int)param_1 + local_c + 0x328) = uVar2;
      }
      param_1[0xc9] = iVar1;
    }
    for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
      *(undefined1 *)((int)param_1 + local_c + 0x18) =
           *(undefined1 *)((int)param_1 + *(byte *)((int)param_1 + local_c + 0x18) + 0x328);
      *(undefined1 *)((int)param_1 + local_c + 0x118) =
           *(undefined1 *)((int)param_1 + *(byte *)((int)param_1 + local_c + 0x118) + 0x328);
      *(undefined1 *)((int)param_1 + local_c + 0x218) =
           *(undefined1 *)((int)param_1 + *(byte *)((int)param_1 + local_c + 0x218) + 0x328);
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* ===== FUN_00035ce4 @ 00035ce4 size=664 ===== */

undefined4 FUN_00035ce4(int param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  __pid_t _Var4;
  
  iVar1 = pipe((int *)(param_1 + 0x3568));
  if (iVar1 == 0) {
    iVar1 = pipe((int *)(param_1 + 0x3570));
    if (iVar1 == 0) {
      _Var4 = fork();
      *(__pid_t *)(param_1 + 0x3564) = _Var4;
      if (*(int *)(param_1 + 0x3564) != -1) {
        if (*(int *)(param_1 + 0x3564) != 0) {
          close(*(int *)(param_1 + 0x3570));
          close(*(int *)(param_1 + 0x356c));
          return 0;
        }
        close(*(int *)(param_1 + 0x3574));
        close(*(int *)(param_1 + 0x3568));
        iVar1 = dup2(*(int *)(param_1 + 0x3570),0);
        if (iVar1 != -1) {
          iVar1 = dup2(*(int *)(param_1 + 0x356c),1);
          if (iVar1 != -1) {
            execl(param_2,param_2,0);
            perror((char *)(DAT_00035f90 + 0x35f08));
                    /* WARNING: Subroutine does not return */
            exit(1);
          }
          perror((char *)(DAT_00035f8c + 0x35ee0));
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        perror((char *)(DAT_00035f88 + 0x35ea4));
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00035f84 + 0x35e00),pcVar3);
      close(*(int *)(param_1 + 0x3570));
      close(*(int *)(param_1 + 0x3574));
    }
    else {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00035f80 + 0x35d9c),pcVar3);
    }
    close(*(int *)(param_1 + 0x3568));
    close(*(int *)(param_1 + 0x356c));
  }
  else {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00035f7c + 0x35d44),pcVar3);
  }
  return 0xffffffff;
}



/* ===== FUN_00035f94 @ 00035f94 size=240 ===== */

undefined4 FUN_00035f94(int param_1,int param_2,uint param_3)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  uint local_14;
  
  local_14 = 0;
  do {
    while( true ) {
      if (param_3 <= local_14) {
        return 0;
      }
      sVar1 = write(*(int *)(param_1 + 0x3574),(void *)(param_2 + local_14),param_3 - local_14);
      if (sVar1 == -1) break;
      local_14 = local_14 + sVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  piVar2 = __errno_location();
  pcVar3 = strerror(*piVar2);
  snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_00036084 + 0x36044),pcVar3);
  return 0xffffffff;
}



/* ===== FUN_00036088 @ 00036088 size=288 ===== */

undefined4 FUN_00036088(int param_1,int param_2,uint param_3)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  uint local_14;
  
  local_14 = 0;
  do {
    while( true ) {
      if (param_3 <= local_14) {
        return 0;
      }
      sVar1 = read(*(int *)(param_1 + 0x3568),(void *)(param_2 + local_14),param_3 - local_14);
      if (sVar1 == -1) break;
      if (sVar1 == 0) {
        snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_000361ac + 0x36168));
        return 0xffffffff;
      }
      local_14 = local_14 + sVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  piVar2 = __errno_location();
  pcVar3 = strerror(*piVar2);
  snprintf((char *)(param_1 + 0x18),0x100,(char *)(DAT_000361a8 + 0x36138),pcVar3);
  return 0xffffffff;
}



/* ===== FUN_000361b0 @ 000361b0 size=456 ===== */

undefined4
FUN_000361b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_c;
  
  local_20 = param_4;
  local_1c = param_3;
  local_18 = param_2;
  local_14 = param_1;
  if ((*(int *)(param_1 + 0x3564) == -1) && (iVar1 = FUN_00035ce4(param_1,param_2), iVar1 != 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_00035f94(local_14,&stack0x00000008,4);
    if (iVar1 == 0) {
      iVar1 = FUN_00035f94(local_14,&stack0x0000000c,4);
      if (iVar1 == 0) {
        iVar1 = FUN_00035f94(local_14,&stack0x00000010,4);
        if (iVar1 == 0) {
          iVar1 = FUN_00035f94(local_14,&local_20,4);
          if (iVar1 == 0) {
            iVar1 = FUN_00035f94(local_14,local_1c,local_20);
            if (iVar1 == 0) {
              iVar1 = FUN_00036088(local_14,&local_c,4);
              if (iVar1 == 0) {
                if (local_c < 0) {
                  snprintf((char *)(local_14 + 0x18),0x100,(char *)(DAT_00036378 + 0x36310));
                  uVar2 = 0xffffffff;
                }
                else if (param_6 < local_c) {
                  snprintf((char *)(local_14 + 0x18),0x100,(char *)(DAT_0003637c + 0x36344));
                  uVar2 = 0xffffffff;
                }
                else {
                  uVar2 = FUN_00036088(local_14,param_5,local_c);
                }
              }
              else {
                uVar2 = 0xffffffff;
              }
            }
            else {
              uVar2 = 0xffffffff;
            }
          }
          else {
            uVar2 = 0xffffffff;
          }
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== FUN_00036380 @ 00036380 size=136 ===== */

void FUN_00036380(int param_1)

{
  int iStack_c;
  
  if (*(int *)(param_1 + 0x3564) != -1) {
    close(*(int *)(param_1 + 0x3574));
    close(*(int *)(param_1 + 0x3568));
    waitpid(*(__pid_t *)(param_1 + 0x3564),&iStack_c,0);
    *(undefined4 *)(param_1 + 0x3564) = 0xffffffff;
  }
  return;
}



/* ===== FUN_00036408 @ 00036408 size=168 ===== */

ulonglong FUN_00036408(uint param_1,uint param_2)

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



/* ===== FUN_000364d0 @ 000364d0 size=236 ===== */

ulonglong FUN_000364d0(uint param_1,uint param_2)

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



/* ===== _fini @ 000365dc size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::longjmp @ 000a1000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 000a1004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 000a1008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::geteuid @ 000a100c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strndup @ 000a1010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::powf @ 000a1014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float powf(float __x,float __y)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000a1018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syscall @ 000a101c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 000a1020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::shm_open @ 000a1024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int shm_open(char *__name,int __oflag,mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 000a102c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 000a1030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 000a1034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execl @ 000a1038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execl(char *__path,char *__arg,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 000a103c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000a1040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dup2 @ 000a1044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dup2(int __fd,int __fd2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 000a1048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftruncate @ 000a104c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate(int __fd,__off_t __length)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 000a1050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap @ 000a1054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 000a1058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pipe @ 000a105c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 000a1060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 000a1064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat @ 000a1068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000a106c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 000a1070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 000a1074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 000a1078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 000a107c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 000a1080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 000a1084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 000a1088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000a108c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fnmatch @ 000a1090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fnmatch(char *__pattern,char *__name,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000a1094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getpwuid_r @ 000a1098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpwuid_r(__uid_t __uid,passwd *__resultbuf,char *__buffer,size_t __buflen,passwd **__result)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000a109c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 000a10a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000a10a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000a10ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000a10b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_setjmp @ 000a10b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setjmp(__jmp_buf_tag *__env)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000a10b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000a10bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000a10c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000a10c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000a10c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


