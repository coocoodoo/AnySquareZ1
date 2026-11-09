// rk_ota — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010d18 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::memcmp @ 00010d3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0002a00c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010d48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002a010)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::remove @ 00010d54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int remove(char *__filename)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_remove_0002a014)(__filename);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010d60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002a018)();
  return;
}



/* ===== <EXTERNAL>::realloc @ 00010d6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002a01c)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::write @ 00010d84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0002a024)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00010d90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_0002a028)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fsync @ 00010d9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fsync_0002a02c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::access @ 00010da8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0002a030)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00010db4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002a034)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010dc0 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002a038)();
  return;
}



/* ===== <EXTERNAL>::lseek @ 00010dcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek_0002a03c)(__fd);
  return _Var1;
}



/* ===== <EXTERNAL>::strcmp @ 00010dd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002a040)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010de4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002a044)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010df0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002a048)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::system @ 00010dfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_0002a04c)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::fclose @ 00010e08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002a050)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strdup @ 00010e14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_0002a054)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::sleep @ 00010e20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_0002a058)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::open @ 00010e2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0002a05c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 00010e38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0002a060)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::sigdelset @ 00010e44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigdelset(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigdelset_0002a064)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::chmod @ 00010e50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chmod_0002a068)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::mount @ 00010e5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mount(char *__special_file,char *__dir,char *__fstype,ulong __rwflag,void *__data)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mount_0002a06c)(__special_file);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010e68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002a070)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010e74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002a074)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::__sigsetjmp @ 00010e80 size=12 ===== */

void __sigsetjmp(void)

{
  (*(code *)PTR___sigsetjmp_0002a078)();
  return;
}



/* ===== <EXTERNAL>::putchar @ 00010e8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002a07c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010e98 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002a080)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010ea4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002a084)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::lseek64 @ 00010eb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  undefined4 in_r1;
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_0002a088)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return _Var1;
}



/* ===== <EXTERNAL>::strtoul @ 00010ebc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0002a08c)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::fread @ 00010ec8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0002a090)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::close @ 00010ed4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002a094)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 00010ee0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002a098)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::sigprocmask @ 00010eec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigprocmask_0002a09c)(__how);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010ef8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002a0a0)();
  return piVar1;
}



/* ===== <EXTERNAL>::mkdir @ 00010f04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_0002a0a4)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::sync @ 00010f10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sync(void)

{
  (*(code *)PTR_sync_0002a0a8)();
  return;
}



/* ===== <EXTERNAL>::free @ 00010f1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002a0ac)(__ptr);
  return;
}



/* ===== <EXTERNAL>::stat @ 00010f28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0002a0b0)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::siglongjmp @ 00010f34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void siglongjmp(__jmp_buf_tag *__env,int __val)

{
  (*(code *)PTR_siglongjmp_0002a0b4)(__env);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010f40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002a0b8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00010f4c size=12 ===== */

void __aeabi_uidiv(void)

{
  (*(code *)PTR___aeabi_uidiv_0002a0bc)();
  return;
}



/* ===== <EXTERNAL>::strerror @ 00010f58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002a0c0)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::fopen @ 00010f64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0002a0c4)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010f70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002a0c8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 00010f7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_0002a0cc)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::sigaction @ 00010f88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_0002a0d0)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010f94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002a0d4)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::sigfillset @ 00010fa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigfillset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigfillset_0002a0d8)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::fseeko64 @ 00010fac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseeko64(FILE *__stream,__off64_t __off,int __whence)

{
  int iVar1;
  undefined4 in_r1;
  
  iVar1 = (*(code *)PTR_fseeko64_0002a0dc)
                    (__stream,in_r1,(int)__off,(int)((ulonglong)__off >> 0x20));
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00010fb8 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_0002a0e0)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 00010fc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0002a0e4)(__stream);
  return iVar1;
}



/* ===== entry @ 00010fe0 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002a020)
            (DAT_00011014,param_2,&stack0x00000004,DAT_00011018,DAT_00011010,param_1);
  return;
}



/* ===== FUN_0001101c @ 0001101c size=32 ===== */

void FUN_0001101c(void)

{
  if (DAT_00011040 == DAT_0001103c) {
    return;
  }
  if (DAT_00011044 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011044)();
  return;
}



/* ===== _FINI_0 @ 00011080 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_000110bc;
  if (*DAT_000110bc != '\0') {
    return;
  }
  FUN_0001101c();
  if (DAT_000110c0 != 0) {
    __deregister_frame_info(DAT_000110c4);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 000110c8 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000110ec != 0) {
    __register_frame_info(DAT_000110f4,DAT_000110f0);
  }
  if ((DAT_00011078 - DAT_00011074 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_0001107c == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001107c)();
  return;
}



/* ===== FUN_000110f8 @ 000110f8 size=860 ===== */

int FUN_000110f8(void)

{
  int *piVar1;
  char *pcVar2;
  char local_878 [64];
  int local_838;
  int local_834;
  int local_830;
  char local_82c [2048];
  int *local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  void *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  char *local_c;
  
  if (DAT_0002a0ec == (void *)0x0) {
    local_18 = 0x20;
    local_1c = malloc(0x200);
    if (local_1c == (void *)0x0) {
      piVar1 = __errno_location();
      *piVar1 = 0xc;
      return -1;
    }
    DAT_0002a0f0 = 0x20;
    DAT_0002a0ec = local_1c;
    memset(local_1c,0,0x200);
  }
  DAT_0002a0f4 = 0;
  for (local_10 = 0; local_10 < DAT_0002a0f0; local_10 = local_10 + 1) {
    local_20 = (undefined4 *)((int)DAT_0002a0ec + local_10 * 0x10);
    if (local_20[3] != 0) {
      free((void *)local_20[3]);
      local_20[3] = 0;
    }
    *local_20 = 0xffffffff;
  }
  local_24 = open("/proc/mtd",0);
  if (-1 < local_24) {
    local_14 = read(local_24,local_82c,0x7ff);
    close(local_24);
    if (-1 < local_14) {
      local_82c[local_14] = '\0';
      local_c = local_82c;
      do {
        if (local_14 < 1) {
          return DAT_0002a0f4;
        }
        local_878[0] = '\0';
        local_830 = -1;
        local_28 = sscanf(local_c,"mtd%d: %x %x \"%63[^\"]",&local_830,&local_834,&local_838,
                          local_878);
        if (local_28 == 4) {
          local_2c = (int *)((int)DAT_0002a0ec + local_830 * 0x10);
          *local_2c = local_830;
          local_2c[1] = local_834;
          local_2c[2] = local_838;
          pcVar2 = strdup(local_878);
          local_2c[3] = (int)pcVar2;
          if (local_2c[3] == 0) {
            piVar1 = __errno_location();
            *piVar1 = 0xc;
            DAT_0002a0f4 = 0xffffffff;
            return -1;
          }
          DAT_0002a0f4 = DAT_0002a0f4 + 1;
        }
        for (; (0 < local_14 && (*local_c != '\n')); local_c = local_c + 1) {
          local_14 = local_14 + -1;
        }
        if (0 < local_14) {
          local_c = local_c + 1;
          local_14 = local_14 + -1;
        }
      } while( true );
    }
  }
  DAT_0002a0f4 = 0xffffffff;
  return -1;
}



/* ===== FUN_00011454 @ 00011454 size=200 ===== */

int * FUN_00011454(char *param_1)

{
  int iVar1;
  int *piVar2;
  int local_c;
  
  if (DAT_0002a0ec != 0) {
    for (local_c = 0; local_c < DAT_0002a0f0; local_c = local_c + 1) {
      piVar2 = (int *)(DAT_0002a0ec + local_c * 0x10);
      if (((-1 < *piVar2) && (piVar2[3] != 0)) &&
         (iVar1 = strcmp((char *)piVar2[3],param_1), iVar1 == 0)) {
        return piVar2;
      }
    }
  }
  return (int *)0x0;
}



/* ===== FUN_0001151c @ 0001151c size=440 ===== */

int FUN_0001151c(undefined4 *param_1,char *param_2,char *param_3,int param_4)

{
  int *piVar1;
  char *pcVar2;
  stat sStack_b0;
  char acStack_54 [64];
  __mode_t local_14;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0xc04;
  local_c = -1;
  sprintf(acStack_54,"/dev/block/mtdblock%d",*param_1);
  if ((param_4 != 0) || (local_c = mount(acStack_54,param_2,param_3,0xc04,(void *)0x0), local_c < 0)
     ) {
    local_c = mount(acStack_54,param_2,param_3,0xc05,(void *)0x0);
    if (local_c < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf("Failed to mount %s on %s: %s\n",acStack_54,param_2,pcVar2);
    }
    else {
      printf("Mount %s on %s read-only\n",acStack_54,param_2);
    }
  }
  if (((-1 < local_c) && (local_c = stat(param_2,&sStack_b0), -1 < local_c)) &&
     (local_14 = sStack_b0.st_mode | 0x49, local_14 != sStack_b0.st_mode)) {
    printf("Fixing execute permissions for %s\n",param_2);
    local_c = chmod(param_2,local_14);
    if (local_c < 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf("Couldn\'t fix permissions for %s: %s\n",param_2,pcVar2);
    }
  }
  return local_c;
}



/* ===== FUN_000116d4 @ 000116d4 size=384 ===== */

undefined4 FUN_000116d4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FILE *pFVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_18;
  int local_14;
  
  local_14 = open("/dev/mtd0",0);
  pFVar1 = stderr;
  if (local_14 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(pFVar1,"mtd: open /dev/mtd0 (%s)\n",pcVar3);
    uVar4 = 0xffffffff;
  }
  else {
    local_18 = ioctl(local_14,0x80204d01,auStack_38);
    close(local_14);
    pFVar1 = stderr;
    if (local_18 < 0) {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      fprintf(pFVar1,"mtd: ioctl MEMGETINFO (%s)\n",pcVar3);
      uVar4 = 0xffffffff;
    }
    else {
      printf("mtd_info.size = [%d]\n",local_30);
      printf("mtd_info.erasesize = [%d]\n",local_2c);
      printf("mtd_info.writesize = [%d]\n",local_28);
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = local_30;
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = local_2c;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_28;
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* ===== FUN_00011854 @ 00011854 size=244 ===== */

undefined4
FUN_00011854(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  char acStack_30 [32];
  int local_10;
  int local_c;
  
  sprintf(acStack_30,"/dev/mtd%d",*param_1);
  local_c = open(acStack_30,0);
  if (local_c < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_10 = ioctl(local_c,0x80204d01,auStack_50);
    close(local_c);
    if (local_10 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = local_48;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_44;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_40;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* ===== FUN_00011948 @ 00011948 size=264 ===== */

int * FUN_00011948(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  char acStack_2c [32];
  int *local_c;
  
  local_c = malloc(0x10);
  if (local_c == (int *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    pvVar1 = malloc(param_1[2]);
    local_c[1] = (int)pvVar1;
    if (local_c[1] == 0) {
      free(local_c);
      local_c = (int *)0x0;
    }
    else {
      sprintf(acStack_2c,"/dev/mtd%d",*param_1);
      iVar2 = open(acStack_2c,0);
      local_c[3] = iVar2;
      if (local_c[3] < 0) {
        free(local_c);
        free((void *)local_c[1]);
        local_c = (int *)0x0;
      }
      else {
        *local_c = (int)param_1;
        local_c[2] = param_1[2];
      }
    }
  }
  return local_c;
}



/* ===== FUN_00011a50 @ 00011a50 size=64 ===== */

__off64_t FUN_00011a50(int param_1,uint param_2)

{
  __off64_t _Var1;
  
  _Var1 = lseek64(*(int *)(param_1 + 0xc),(ulonglong)param_2,0);
  return _Var1;
}



/* ===== FUN_00011a90 @ 00011a90 size=812 ===== */

undefined4 FUN_00011a90(int param_1,int param_2,void *param_3)

{
  FILE *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  __off64_t _Var10;
  undefined8 local_48;
  int local_40;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  uint local_1c;
  
  iVar4 = ioctl(param_2,0x80104d12,&local_30);
  pFVar1 = stderr;
  if (iVar4 == 0) {
    local_48 = lseek64(param_2,0,1);
    local_1c = *(uint *)(param_1 + 8);
    while( true ) {
      iVar8 = local_48._4_4_ + ((int)local_1c >> 0x1f) + (uint)CARRY4((uint)local_48,local_1c);
      uVar7 = *(uint *)(param_1 + 4);
      iVar4 = (int)uVar7 >> 0x1f;
      bVar9 = uVar7 < (uint)local_48 + local_1c;
      if ((int)(iVar4 - (iVar8 + (uint)bVar9)) < 0 !=
          (SBORROW4(iVar4,iVar8) != SBORROW4(iVar4 - iVar8,(uint)bVar9))) break;
      _Var10 = lseek64(param_2,local_48,0);
      if ((_Var10 == local_48) && (uVar7 = read(param_2,param_3,local_1c), local_1c == uVar7)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      pFVar1 = stderr;
      if (bVar9) {
        uVar2 = (uint)local_48;
        uVar3 = local_48._4_4_;
        piVar5 = __errno_location();
        pcVar6 = strerror(*piVar5);
        fprintf(pFVar1,"mtd: read error at 0x%08llx (%s)\n",uVar2,uVar3,pcVar6);
      }
      else {
        iVar4 = ioctl(param_2,0x80104d12,&local_40);
        pFVar1 = stderr;
        if (iVar4 != 0) {
          piVar5 = __errno_location();
          pcVar6 = strerror(*piVar5);
          fprintf(pFVar1,"mtd: ECCGETSTATS error (%s)\n",pcVar6);
          return 0xffffffff;
        }
        if (local_3c == local_2c) {
          local_20 = ioctl(param_2,0x40084d0b,&local_48);
          pFVar1 = stderr;
          if (local_20 == 0) {
            return 0;
          }
          uVar2 = (uint)local_48;
          uVar3 = local_48._4_4_;
          piVar5 = __errno_location();
          fprintf(pFVar1,"mtd: MEMGETBADBLOCK returned %d at 0x%08llx (errno=%d)\n",local_20,*piVar5
                  ,uVar2,uVar3,*piVar5);
        }
        else {
          fprintf(stderr,"mtd: ECC errors (%d soft, %d hard) at 0x%08llx\n",local_40 - local_30,
                  local_3c - local_2c,(uint)local_48,local_48._4_4_);
          local_30 = local_40;
          local_2c = local_3c;
          uStack_28 = uStack_38;
          uStack_24 = uStack_34;
        }
      }
      local_48 = CONCAT44(local_48._4_4_ + (uint)CARRY4((uint)local_48,*(uint *)(param_1 + 8)),
                          (uint)local_48 + *(uint *)(param_1 + 8));
    }
    piVar5 = __errno_location();
    *piVar5 = 0x1c;
  }
  else {
    piVar5 = __errno_location();
    pcVar6 = strerror(*piVar5);
    fprintf(pFVar1,"mtd: ECCGETSTATS error (%s)\n",pcVar6);
  }
  return 0xffffffff;
}



/* ===== FUN_00011dbc @ 00011dbc size=548 ===== */

uint FUN_00011dbc(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  size_t __n;
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if ((int)param_3 <= (int)local_c) {
      return local_c;
    }
    if ((uint)param_1[2] < *(uint *)(*param_1 + 8)) {
      __n = *(int *)(*param_1 + 8) - param_1[2];
      if (param_3 - local_c <= __n) {
        __n = param_3 - local_c;
      }
      memcpy((void *)(param_2 + local_c),(void *)(param_1[1] + param_1[2]),__n);
      param_1[2] = param_1[2] + __n;
      local_c = local_c + __n;
    }
    for (; (param_1[2] == *(int *)(*param_1 + 8) && (*(uint *)(*param_1 + 8) <= param_3 - local_c));
        local_c = *(int *)(*param_1 + 8) + local_c) {
      iVar1 = FUN_00011a90(*param_1,param_1[3],param_2 + local_c);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    if (param_3 <= local_c) break;
    if ((param_1[2] == *(int *)(*param_1 + 8)) && ((int)local_c < (int)param_3)) {
      iVar1 = FUN_00011a90(*param_1,param_1[3],param_1[1]);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      param_1[2] = 0;
    }
  }
  return local_c;
}



/* ===== FUN_00011fe0 @ 00011fe0 size=68 ===== */

void FUN_00011fe0(void *param_1)

{
  close(*(int *)((int)param_1 + 0xc));
  free(*(void **)((int)param_1 + 4));
  free(param_1);
  return;
}



/* ===== FUN_00012024 @ 00012024 size=296 ===== */

int * FUN_00012024(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  char acStack_2c [32];
  int *local_c;
  
  local_c = malloc(0x1c);
  if (local_c == (int *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    local_c[4] = 0;
    local_c[5] = 0;
    local_c[6] = 0;
    pvVar1 = malloc(param_1[2]);
    local_c[1] = (int)pvVar1;
    if (local_c[1] == 0) {
      free(local_c);
      local_c = (int *)0x0;
    }
    else {
      sprintf(acStack_2c,"/dev/mtd%d",*param_1);
      iVar2 = open(acStack_2c,2);
      local_c[3] = iVar2;
      if (local_c[3] < 0) {
        free((void *)local_c[1]);
        free(local_c);
        local_c = (int *)0x0;
      }
      else {
        *local_c = (int)param_1;
        local_c[2] = 0;
      }
    }
  }
  return local_c;
}



/* ===== FUN_0001214c @ 0001214c size=168 ===== */

void FUN_0001214c(int param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) * 2 + 1;
    pvVar1 = realloc(*(void **)(param_1 + 0x10),*(int *)(param_1 + 0x14) << 2);
    *(void **)(param_1 + 0x10) = pvVar1;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar2 * 4) = param_2;
  return;
}



/* ===== FUN_000121f4 @ 000121f4 size=1108 ===== */

undefined4 FUN_000121f4(int *param_1,void *param_2)

{
  bool bVar1;
  FILE *pFVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  __off_t _Var6;
  size_t sVar7;
  undefined4 uVar8;
  void *local_48;
  int *local_44;
  int local_40;
  size_t local_3c;
  int local_38;
  int iStack_34;
  void *local_30;
  int local_2c;
  int local_28;
  size_t local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = *param_1;
  local_20 = param_1[3];
  local_48 = param_2;
  local_44 = param_1;
  local_18 = lseek(local_20,0,1);
  if (local_18 == -1) {
    uVar8 = 1;
  }
  else {
    local_24 = *(size_t *)(local_1c + 8);
    while ((int)(local_18 + local_24) <= *(int *)(local_1c + 4)) {
      iStack_34 = local_18 >> 0x1f;
      local_38 = local_18;
      local_28 = ioctl(local_20,0x40084d0b,&local_38);
      if ((local_28 == 0) || ((local_28 == -1 && (piVar3 = __errno_location(), *piVar3 == 0x5f)))) {
        local_40 = local_18;
        local_3c = local_24;
        for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
          iVar4 = ioctl(local_20,0x40084d02,&local_40);
          pFVar2 = stderr;
          if (iVar4 < 0) {
            piVar3 = __errno_location();
            pcVar5 = strerror(*piVar3);
            fprintf(pFVar2,"mtd: erase failure at 0x%08lx (%s)\n",local_18,pcVar5);
          }
          else {
            _Var6 = lseek(local_20,local_18,0);
            if ((local_18 == _Var6) &&
               (sVar7 = write(local_20,local_48,local_24), local_24 == sVar7)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            pFVar2 = stderr;
            if (bVar1) {
              piVar3 = __errno_location();
              pcVar5 = strerror(*piVar3);
              fprintf(pFVar2,"mtd: write error at 0x%08lx (%s)\n",local_18,pcVar5);
            }
            local_2c = local_24 - 1;
            local_30 = (void *)((int)&local_48 - (local_24 + 7 & 0xfffffff8));
            _Var6 = lseek(local_20,local_18,0);
            if ((local_18 == _Var6) && (sVar7 = read(local_20,local_30,local_24), local_24 == sVar7)
               ) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            pFVar2 = stderr;
            if (bVar1) {
              piVar3 = __errno_location();
              pcVar5 = strerror(*piVar3);
              fprintf(pFVar2,"mtd: re-read error at 0x%08lx (%s)\n",local_18,pcVar5);
            }
            else {
              iVar4 = memcmp(local_48,local_30,local_24);
              pFVar2 = stderr;
              if (iVar4 == 0) {
                if (0 < local_14) {
                  fprintf(stderr,"mtd: wrote block after %d retries\n",local_14);
                }
                fprintf(stderr,"mtd: successfully wrote block at %llx\n",local_18);
                return 0;
              }
              piVar3 = __errno_location();
              pcVar5 = strerror(*piVar3);
              fprintf(pFVar2,"mtd: verification error at 0x%08lx (%s)\n",local_18,pcVar5);
            }
          }
        }
        FUN_0001214c(local_44,local_18);
        fprintf(stderr,"mtd: skipping write block at 0x%08lx\n",local_18);
        ioctl(local_20,0x40084d02,&local_40);
        local_18 = *(int *)(local_1c + 8) + local_18;
      }
      else {
        FUN_0001214c(local_44,local_18);
        pFVar2 = stderr;
        piVar3 = __errno_location();
        fprintf(pFVar2,"mtd: not writing bad block at 0x%08lx (ret %d errno %d)\n",local_18,local_28
                ,*piVar3);
        local_18 = *(int *)(local_1c + 8) + local_18;
      }
    }
    piVar3 = __errno_location();
    *piVar3 = 0x1c;
    uVar8 = 0xffffffff;
  }
  return uVar8;
}



/* ===== FUN_00012648 @ 00012648 size=488 ===== */

uint FUN_00012648(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  size_t __n;
  uint local_c;
  
  local_c = 0;
  do {
    if (param_3 <= local_c) {
      return local_c;
    }
    if ((param_1[2] != 0) || (param_3 - local_c < *(uint *)(*param_1 + 8))) {
      __n = *(int *)(*param_1 + 8) - param_1[2];
      if (param_3 - local_c <= __n) {
        __n = param_3 - local_c;
      }
      memcpy((void *)(param_1[1] + param_1[2]),(void *)(param_2 + local_c),__n);
      param_1[2] = param_1[2] + __n;
      local_c = local_c + __n;
    }
    if (param_1[2] == *(int *)(*param_1 + 8)) {
      iVar1 = FUN_000121f4(param_1,param_1[1]);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      param_1[2] = 0;
    }
    for (; (param_1[2] == 0 && (*(uint *)(*param_1 + 8) <= param_3 - local_c));
        local_c = local_c + *(int *)(*param_1 + 8)) {
      iVar1 = FUN_000121f4(param_1,param_2 + local_c);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
  } while( true );
}



/* ===== FUN_00012830 @ 00012830 size=644 ===== */

__off_t FUN_00012830(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_30;
  int local_28;
  undefined4 local_24;
  int local_20;
  int iStack_1c;
  int local_14;
  size_t local_10;
  __off_t local_c;
  
  if (param_1[2] != 0) {
    local_10 = *(int *)(*param_1 + 8) - param_1[2];
    memset((void *)(param_1[1] + param_1[2]),0,local_10);
    iVar1 = FUN_000121f4(param_1,param_1[1]);
    if (iVar1 != 0) {
      return -1;
    }
    param_1[2] = 0;
  }
  local_c = lseek(param_1[3],0,1);
  if (local_c != -1) {
    local_14 = __aeabi_uidiv(*(int *)(*param_1 + 4) - local_c,*(undefined4 *)(*param_1 + 8));
    local_30 = param_2;
    if (param_2 < 0) {
      local_30 = local_14;
    }
    if (local_14 < local_30) {
      piVar2 = __errno_location();
      *piVar2 = 0x1c;
      local_c = -1;
    }
    else {
      while (0 < local_30) {
        iStack_1c = local_c >> 0x1f;
        local_20 = local_c;
        iVar1 = ioctl(param_1[3],0x40084d0b,&local_20);
        if (iVar1 < 1) {
          local_28 = local_c;
          local_24 = *(undefined4 *)(*param_1 + 8);
          iVar1 = ioctl(param_1[3],0x40084d02,&local_28);
          if (iVar1 < 0) {
            fprintf(stderr,"mtd: erase failure at 0x%08lx\n",local_c);
          }
          local_c = *(int *)(*param_1 + 8) + local_c;
          local_30 = local_30 + -1;
        }
        else {
          fprintf(stderr,"mtd: not erasing bad block at 0x%08lx\n",local_c);
          local_c = *(int *)(*param_1 + 8) + local_c;
          local_30 = local_30 + -1;
        }
      }
    }
  }
  return local_c;
}



/* ===== FUN_00012ab4 @ 00012ab4 size=180 ===== */

undefined4 FUN_00012ab4(void *param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = FUN_00012830(param_1,0);
  if (iVar1 == -1) {
    local_c = 0xffffffff;
  }
  iVar1 = close(*(int *)((int)param_1 + 0xc));
  if (iVar1 != 0) {
    local_c = 0xffffffff;
  }
  free(*(void **)((int)param_1 + 0x10));
  free(*(void **)((int)param_1 + 4));
  free(param_1);
  return local_c;
}



/* ===== FUN_00012c28 @ 00012c28 size=844 ===== */

undefined4
FUN_00012c28(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  FILE *__stream;
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  char local_148 [4];
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  int iStack_134;
  undefined4 local_130;
  int iStack_12c;
  undefined1 local_128;
  char acStack_124 [256];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  memset(acStack_124,0,0x100);
  iStack_144 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_140 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_13c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_148[0] = '\0';
  local_148[1] = '\0';
  local_148[2] = '\0';
  local_148[3] = '\0';
  local_138 = 0;
  local_130 = 0;
  iStack_12c = iStack_144 << 8;
  local_128 = (undefined1)((uint)iStack_144 >> 0x18);
  iStack_134 = iStack_144;
  fprintf(stdout,"[I/]RECOVERY [%s:%d] offset [%lld] checksize [%lld] \n","checkdata_mtd",0x1e,
          param_3,param_4,param_5,param_6);
  memset(acStack_124,0,0x100);
  sprintf(acStack_124,"nanddump --bb=skipbad -l %lld -s %lld %s | md5sum > %s",param_5,param_6,
          param_3,param_4,param_1,"/tmp/.tmp_md5sum");
  system(acStack_124);
  local_24 = open("/tmp/.tmp_md5sum",0);
  if (local_24 == 0) {
    fprintf(stdout,"[E/]RECOVERY open file failed %s","/tmp/.tmp_md5sum");
    uVar4 = 1;
  }
  else {
    sVar1 = read(local_24,local_148,0x20);
    if (sVar1 == -1) {
      close(local_24);
      __stream = stdout;
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      fprintf(__stream,"[E/]RECOVERY (%s:%d) read error: %s.\n","checkdata_mtd",0x2d,pcVar3);
      uVar4 = 1;
    }
    else {
      putchar(10);
      local_128 = 0;
      printf("read new md5: [%s]\n",local_148);
      for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 2) {
        sscanf(local_148 + local_14,"%02hhx",auStack_178 + local_14);
      }
      local_1c = 0;
      for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 2) {
        *(undefined1 *)((int)&local_158 + local_1c) = auStack_178[local_18];
        local_1c = local_1c + 1;
      }
      printf("new md5:");
      for (local_20 = 0; local_20 < 0x10; local_20 = local_20 + 1) {
        printf("%02x",(uint)*(byte *)((int)&local_158 + local_20));
      }
      putchar(10);
      if (param_2 != (undefined4 *)0x0) {
        memset(param_2,0,0x10);
        *param_2 = local_158;
        param_2[1] = uStack_154;
        param_2[2] = uStack_150;
        param_2[3] = uStack_14c;
      }
      close(local_24);
      fprintf(stdout,"[I/]RECOVERY MD5Check is ok of %s\n",param_1);
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* ===== FUN_00012f74 @ 00012f74 size=688 ===== */

undefined4
FUN_00012f74(char *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined1 auStack_290 [512];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [92];
  uint local_24;
  uint local_20;
  int iStack_1c;
  int local_18;
  FILE *local_14;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0;
  local_14 = fopen(param_1,"rb");
  if (local_14 == (FILE *)0x0) {
    fprintf(stdout,"[E/]RECOVERY open file failed %s",param_1);
    uVar3 = 1;
  }
  else {
    local_18 = fseeko64(local_14,CONCAT44(param_4,param_3),0);
    if (local_18 < 0) {
      fprintf(stdout,"[E/]RECOVERY %s:%d fseeko64 fail","checkdata",0x60);
      uVar3 = 0;
    }
    else {
      FUN_000168da(auStack_80);
      local_20 = 0;
      iStack_1c = 0;
      local_24 = 0x200;
      while( true ) {
        if (param_5._4_4_ < (int)(uint)((uint)param_5 == 0)) break;
        iVar1 = (int)local_24 >> 0x1f;
        local_20 = (uint)param_5;
        iStack_1c = param_5._4_4_;
        if ((int)(iVar1 - (param_5._4_4_ + (uint)(local_24 < (uint)param_5))) < 0 !=
            (SBORROW4(iVar1,param_5._4_4_) !=
            SBORROW4(iVar1 - param_5._4_4_,(uint)(local_24 < (uint)param_5)))) {
          local_20 = local_24;
          iStack_1c = iVar1;
        }
        sVar2 = fread(auStack_290,1,local_20,local_14);
        if (iStack_1c != 0 || local_20 != sVar2) {
          fwrite("[E/]RECOVERY fread error.\n",1,0x1a,stdout);
          return 0;
        }
        param_5 = CONCAT44(param_5._4_4_ - (iStack_1c + (uint)((uint)param_5 < local_20)),
                           (uint)param_5 - local_20);
        FUN_00016598(auStack_80,auStack_290,local_20);
        memset(auStack_290,0,0x200);
      }
      FUN_000166de(&local_90,auStack_80);
      fclose(local_14);
      putchar(10);
      printf("new md5:");
      for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
        printf("%02x",(uint)*(byte *)((int)&local_90 + local_c));
      }
      putchar(10);
      if (param_2 != (undefined4 *)0x0) {
        memset(param_2,0,0x10);
        *param_2 = local_90;
        param_2[1] = uStack_8c;
        param_2[2] = uStack_88;
        param_2[3] = uStack_84;
      }
      fprintf(stdout,"[I/]RECOVERY MD5Check is ok for %s\n",param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== FUN_00013224 @ 00013224 size=468 ===== */

undefined4
FUN_00013224(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  byte abStack_20 [16];
  int local_10;
  int local_c;
  
  FUN_00012f74(param_1,abStack_20,param_3,param_4,param_5,param_6);
  local_40 = DAT_00017dd4;
  uStack_3c = DAT_00017dd8;
  uStack_38 = DAT_00017ddc;
  uStack_34 = DAT_00017de0;
  local_30 = DAT_00017de4;
  uStack_2c = DAT_00017de8;
  uStack_28 = DAT_00017dec;
  uStack_24 = DAT_00017df0;
  local_c = 0;
  do {
    if (0x1f < local_c) {
      return 1;
    }
    for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
      if (((uint)*(byte *)((int)&local_40 + local_10 * 2 + 1) ==
           (int)(uint)abStack_20[local_c / 2] >> 4) &&
         (*(char *)(param_2 + local_c) != *(char *)((int)&local_40 + local_10 * 2))) {
        fprintf(stdout,"[E/]RECOVERY MD5Check is error of %s",param_1);
        return 0;
      }
      if ((*(byte *)((int)&local_40 + local_10 * 2 + 1) == (abStack_20[local_c / 2] & 0xf)) &&
         (*(char *)(param_2 + local_c + 1) != *(char *)((int)&local_40 + local_10 * 2))) {
        fprintf(stdout,"[E/]RECOVERY MD5Check is error of %s",param_1);
        return 0;
      }
    }
    local_c = local_c + 2;
  } while( true );
}



/* ===== FUN_000133f8 @ 000133f8 size=188 ===== */

void FUN_000133f8(char *param_1)

{
  int *piVar1;
  char *pcVar2;
  stat sStack_68;
  int local_10;
  int local_c;
  
  local_c = 0;
  do {
    local_c = local_c + 1;
    local_10 = stat(param_1,&sStack_68);
    if (local_10 != 0) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf("stat %s try %d: %s\n",param_1,local_c,pcVar2);
      sleep(1);
    }
  } while ((local_10 != 0) && (local_c < 10));
  if (local_10 != 0) {
    printf("failed to stat %s\n",param_1);
  }
  return;
}



/* ===== FUN_000134b4 @ 000134b4 size=96 ===== */

undefined4 FUN_000134b4(undefined4 param_1)

{
  undefined4 local_c;
  
  local_c = CONCAT13((char)param_1,
                     CONCAT12((char)((uint)param_1 >> 8),
                              CONCAT11((char)((uint)param_1 >> 0x10),(char)((uint)param_1 >> 0x18)))
                    );
  return local_c;
}



/* ===== FUN_00013514 @ 00013514 size=168 ===== */

uint FUN_00013514(uint param_1,byte *param_2,int param_3)

{
  int local_1c;
  uint local_10;
  byte *local_c;
  
  local_10 = ~param_1;
  local_1c = param_3;
  local_c = param_2;
  while (local_1c != 0) {
    local_10 = local_10 >> 8 ^ *(uint *)(&DAT_0002a0f8 + ((local_10 ^ *local_c) & 0xff) * 4);
    local_1c = local_1c + -1;
    local_c = local_c + 1;
  }
  return ~local_10;
}



/* ===== FUN_000135bc @ 000135bc size=56 ===== */

undefined4 FUN_000135bc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00013514(0,param_1,param_2);
  return uVar1;
}



/* ===== FUN_000135f4 @ 000135f4 size=64 ===== */

void FUN_000135f4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000135bc(param_1,0x1c);
  uVar1 = FUN_000134b4(uVar1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



/* ===== FUN_00013634 @ 00013634 size=220 ===== */

bool FUN_00013634(void)

{
  bool bVar1;
  char acStack_814 [2048];
  ssize_t local_14;
  int local_10;
  char *local_c;
  
  local_c = (char *)0x0;
  local_10 = open("/proc/cmdline",0);
  local_14 = read(local_10,acStack_814,0x800);
  close(local_10);
  local_c = strstr(acStack_814,"nand");
  bVar1 = local_c == (char *)0x0;
  if (bVar1) {
    fwrite("[I/]RECOVERY No found nand in cmdline, default is not MTD.\n",1,0x3b,stdout);
  }
  else {
    fwrite("[I/]RECOVERY Now is MTD.\n",1,0x19,stdout);
  }
  return !bVar1;
}



/* ===== FUN_00013710 @ 00013710 size=844 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00013710(void *param_1,int param_2,size_t param_3)

{
  FILE *pFVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [4];
  size_t local_44;
  int local_40;
  void *local_3c;
  int local_34 [3];
  int local_28;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_34[1] = 0;
  local_34[0] = 0;
  local_44 = param_3;
  local_40 = param_2;
  local_3c = param_1;
  FUN_000110f8();
  local_14 = FUN_00011454(&DAT_00017ebc);
  if ((local_14 == 0) || (iVar2 = FUN_00011854(local_14,local_34,0,local_34 + 1), iVar2 != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    fprintf(stdout,"[E/]RECOVERY Can\'t find %s\n",&DAT_00017ebc);
    uVar6 = 0xffffffff;
  }
  else {
    local_18 = FUN_00011948(local_14);
    pFVar1 = stdout;
    if (local_18 == 0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      fprintf(pFVar1,"[E/]RECOVERY Can\'t open %s\n(%s)\n",&DAT_00017ebc,pcVar4);
      uVar6 = 0xffffffff;
    }
    else {
      local_1c = local_34[0];
      local_20 = local_34[0] + -1;
      iVar2 = -(local_34[0] + 7U & 0xfffffff8);
      local_24 = auStack_48 + iVar2;
      local_28 = FUN_00011dbc(local_18,auStack_48 + iVar2,local_34[0]);
      pFVar1 = stdout;
      if (local_1c != local_28) {
        piVar3 = __errno_location();
        pcVar4 = strerror(*piVar3);
        fprintf(pFVar1,"[E/]RECOVERY Can\'t read %s\n(%s)\n",&DAT_00017ebc,pcVar4);
      }
      FUN_00011fe0(local_18);
      if (local_1c == local_28) {
        memcpy(local_24 + local_40,local_3c,local_44);
        local_34[2] = FUN_00012024(local_14);
        pFVar1 = stdout;
        if (local_34[2] == 0) {
          piVar3 = __errno_location();
          pcVar4 = strerror(*piVar3);
          fprintf(pFVar1,"[E/]RECOVERY Can\'t open %s\n(%s)\n",&DAT_00017ebc,pcVar4);
          uVar6 = 0xffffffff;
        }
        else {
          iVar2 = FUN_00012648(local_34[2],local_24,local_1c);
          pFVar1 = stdout;
          if (local_1c == iVar2) {
            iVar2 = FUN_00012ab4(local_34[2]);
            pFVar1 = stdout;
            if (iVar2 == 0) {
              uVar6 = 0;
            }
            else {
              piVar3 = __errno_location();
              pcVar4 = strerror(*piVar3);
              fprintf(pFVar1,"[E/]RECOVERY Can\'t finish %s\n(%s)\n",&DAT_00017ebc,pcVar4);
              uVar6 = 0xffffffff;
            }
          }
          else {
            piVar3 = __errno_location();
            pcVar4 = strerror(*piVar3);
            fprintf(pFVar1,"[E/]RECOVERY Can\'t write %s\n(%s)\n",&DAT_00017ebc,pcVar4);
            FUN_00012ab4(local_34[2]);
            uVar6 = 0xffffffff;
          }
        }
      }
      else {
        uVar6 = 0xffffffff;
      }
    }
  }
  return uVar6;
}



/* ===== FUN_00013a5c @ 00013a5c size=524 ===== */

undefined4 FUN_00013a5c(void *param_1,int param_2,size_t param_3)

{
  FILE *pFVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined1 auStack_40 [4];
  size_t local_3c;
  int local_38;
  void *local_34;
  int local_30;
  undefined1 auStack_2c [4];
  int local_28;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_30 = 0;
  local_3c = param_3;
  local_38 = param_2;
  local_34 = param_1;
  memset(param_1,0,param_3);
  FUN_000110f8();
  local_14 = FUN_00011454(&DAT_00017ebc);
  if ((local_14 == 0) || (iVar2 = FUN_00011854(local_14,&local_30,0,auStack_2c), iVar2 != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    fprintf(stdout,"[E/]RECOVERY Can\'t find %s\n",&DAT_00017ebc);
    uVar6 = 0xffffffff;
  }
  else {
    local_18 = FUN_00011948(local_14);
    pFVar1 = stdout;
    if (local_18 == 0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      fprintf(pFVar1,"[E/]RECOVERY Can\'t open %s\n(%s)\n",&DAT_00017ebc,pcVar4);
      uVar6 = 0xffffffff;
    }
    else {
      local_1c = local_30;
      local_20 = local_30 + -1;
      iVar2 = -(local_30 + 7U & 0xfffffff8);
      local_24 = auStack_40 + iVar2;
      local_28 = FUN_00011dbc(local_18,auStack_40 + iVar2,local_30);
      pFVar1 = stdout;
      if (local_1c != local_28) {
        piVar3 = __errno_location();
        pcVar4 = strerror(*piVar3);
        fprintf(pFVar1,"[E/]RECOVERY Can\'t read %s\n(%s)\n",&DAT_00017ebc,pcVar4);
      }
      FUN_00011fe0(local_18);
      if (local_1c == local_28) {
        memcpy(local_34,local_24 + local_38,local_3c);
        uVar6 = 0;
      }
      else {
        uVar6 = 0xffffffff;
      }
    }
  }
  return uVar6;
}



/* ===== FUN_00013c68 @ 00013c68 size=380 ===== */

undefined4 FUN_00013c68(void *param_1,long param_2,size_t param_3)

{
  FILE *pFVar1;
  FILE *__stream;
  int *piVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  undefined4 uVar6;
  
  __stream = fopen("/dev/block/by-name/misc","wb");
  pFVar1 = stdout;
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(pFVar1,"[E/]RECOVERY Can\'t open %s\n(%s)\n","/dev/block/by-name/misc",pcVar3);
    uVar6 = 0xffffffff;
  }
  else {
    fseek(__stream,param_2,0);
    sVar4 = fwrite(param_1,1,param_3,__stream);
    pFVar1 = stdout;
    if (sVar4 == param_3) {
      iVar5 = fclose(__stream);
      pFVar1 = stdout;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        fprintf(pFVar1,"[E/]RECOVERY Failed closing %s\n(%s)\n","/dev/block/by-name/misc",pcVar3);
        uVar6 = 0xffffffff;
      }
    }
    else {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      fprintf(pFVar1,"[E/]RECOVERY Failed writing %s\n(%s)\n","/dev/block/by-name/misc",pcVar3);
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
}



/* ===== FUN_00013de4 @ 00013de4 size=392 ===== */

undefined4 FUN_00013de4(void *param_1,long param_2,size_t param_3)

{
  FILE *pFVar1;
  FILE *__stream;
  int *piVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  undefined4 uVar6;
  
  FUN_000133f8("/dev/block/by-name/misc");
  __stream = fopen("/dev/block/by-name/misc","rb");
  pFVar1 = stdout;
  if (__stream == (FILE *)0x0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(pFVar1,"[E/]RECOVERY Can\'t open %s\n(%s)\n","/dev/block/by-name/misc",pcVar3);
    uVar6 = 0xffffffff;
  }
  else {
    fseek(__stream,param_2,0);
    sVar4 = fread(param_1,1,param_3,__stream);
    pFVar1 = stdout;
    if (sVar4 == param_3) {
      iVar5 = fclose(__stream);
      pFVar1 = stdout;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        fprintf(pFVar1,"[E/]RECOVERY Failed closing %s\n(%s)\n","/dev/block/by-name/misc",pcVar3);
        uVar6 = 0xffffffff;
      }
    }
    else {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      fprintf(pFVar1,"[E/]RECOVERY Failed reading %s\n(%s)\n","/dev/block/by-name/misc",pcVar3);
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
}



/* ===== FUN_00013f6c @ 00013f6c size=100 ===== */

undefined4 FUN_00013f6c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00013634();
  if (iVar1 == 0) {
    uVar2 = FUN_00013c68(param_1,param_2,param_3);
  }
  else {
    uVar2 = FUN_00013710(param_1,param_2,param_3);
  }
  return uVar2;
}



/* ===== FUN_00013fd0 @ 00013fd0 size=100 ===== */

undefined4 FUN_00013fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00013634();
  if (iVar1 == 0) {
    uVar2 = FUN_00013de4(param_1,param_2,param_3);
  }
  else {
    uVar2 = FUN_00013a5c(param_1,param_2,param_3);
  }
  return uVar2;
}



/* ===== FUN_00014034 @ 00014034 size=52 ===== */

undefined4 FUN_00014034(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00013fd0(param_1,0x1800,param_2);
  return uVar1;
}



/* ===== FUN_00014068 @ 00014068 size=48 ===== */

undefined4 FUN_00014068(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00013fd0(param_1,0x800,0x20);
  return uVar1;
}



/* ===== FUN_00014098 @ 00014098 size=48 ===== */

undefined4 FUN_00014098(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00013f6c(param_1,0x800,0x20);
  return uVar1;
}



/* ===== FUN_000140c8 @ 000140c8 size=48 ===== */

undefined4 FUN_000140c8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00013fd0(param_1,0x4000,0x440);
  return uVar1;
}



/* ===== FUN_000140f8 @ 000140f8 size=48 ===== */

undefined4 FUN_000140f8(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00013f6c(param_1,0x4000,0x440);
  return uVar1;
}



/* ===== FUN_00014128 @ 00014128 size=320 ===== */

undefined4
FUN_00014128(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5)

{
  undefined4 uVar1;
  char acStack_170 [256];
  stat sStack_70;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  fprintf(stdout,"[I/]RECOVERY mtd_write src=%s dest=%s.\n",param_1,param_5);
  memset(acStack_170,0,0x100);
  stat(param_5,&sStack_70);
  local_10 = 1;
  uStack_c = 0;
  local_18 = param_3;
  uStack_14 = param_4;
  if ((sStack_70.st_mode & 0xf000) == 0x2000) {
    memset(acStack_170,0,0x100);
    sprintf(acStack_170,"flash_erase %s 0 0",param_5);
    system(acStack_170);
    memset(acStack_170,0,0x100);
    sprintf(acStack_170,"dd if=%s bs=%lld count=%lld | nandwrite -p %s",param_1,uStack_c,local_10,
            uStack_c,local_18,uStack_14,param_5);
    system(acStack_170);
    uVar1 = 0;
  }
  else {
    fprintf(stdout,"[E/]RECOVERY flash_erase: can\'t erase MTD \"%s\"\n",param_5);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== FUN_00014268 @ 00014268 size=1156 ===== */

undefined4 FUN_00014268(char *param_1,undefined4 param_2,uint param_3,int param_4,char *param_5)

{
  int iVar1;
  FILE *pFVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  __off64_t _Var8;
  undefined1 auStack_4040 [16384];
  uint local_40;
  int iStack_3c;
  uint local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int iStack_1c;
  undefined8 local_18;
  
  fprintf(stdout,"[I/]RECOVERY block_write src=%s dest=%s.\n",param_1,param_5);
  memset(auStack_4040,0,0x4000);
  local_18 = CONCAT44(param_4,param_3);
  local_24 = 0x4000;
  local_28 = 0x4000;
  local_20 = param_3;
  iStack_1c = param_4;
  local_2c = open(param_1,0);
  if (local_2c < 0) {
    fprintf(stdout,"[E/]RECOVERY Can\'t open %s\n",param_1);
    uVar6 = 0xffffffff;
  }
  else {
    _Var8 = lseek64(local_2c,0,0);
    if (_Var8 == -1) {
      close(local_2c);
      fprintf(stdout,"[E/]RECOVERY lseek64 failed (%s:%d).\n","block_write",0x1a0);
      uVar6 = 0xffffffff;
    }
    else {
      local_30 = open(param_5,0x242,0x1a4);
      if (local_30 < 0) {
        close(local_2c);
        fprintf(stdout,"[E/]RECOVERY Can\'t open %s\n",param_5);
        uVar6 = 0xffffffff;
      }
      else {
        _Var8 = lseek64(local_30,0,0);
        pFVar2 = stdout;
        if (_Var8 == -1) {
          piVar3 = __errno_location();
          pcVar4 = strerror(*piVar3);
          fprintf(pFVar2,"[E/]RECOVERY (%s:%d) lseek64 failed(%s).\n","block_write",0x1ab,pcVar4);
          close(local_2c);
          close(local_30);
          uVar6 = 0xffffffff;
        }
        else {
          while( true ) {
            if ((local_18._4_4_ < (int)(uint)((uint)local_18 == 0)) ||
               (iStack_1c < (int)(uint)(local_20 == 0))) break;
            memset(auStack_4040,0,0x4000);
            iVar1 = (int)local_24 >> 0x1f;
            local_38 = (uint)local_18;
            iStack_34 = local_18._4_4_;
            if ((int)(iVar1 - (local_18._4_4_ + (uint)(local_24 < (uint)local_18))) < 0 !=
                (SBORROW4(iVar1,local_18._4_4_) !=
                SBORROW4(iVar1 - local_18._4_4_,(uint)(local_24 < (uint)local_18)))) {
              local_38 = local_24;
              iStack_34 = iVar1;
            }
            uVar5 = read(local_2c,auStack_4040,local_38);
            if (iStack_34 != (int)uVar5 >> 0x1f || local_38 != uVar5) {
              close(local_30);
              close(local_2c);
              pFVar2 = stdout;
              piVar3 = __errno_location();
              pcVar4 = strerror(*piVar3);
              fprintf(pFVar2,"[E/]RECOVERY Read failed(%s):(%s:%d)\n",pcVar4,"block_write",0x1b7);
              return 0xffffffff;
            }
            local_18 = CONCAT44(local_18._4_4_ - (iStack_34 + (uint)((uint)local_18 < local_38)),
                                (uint)local_18 - local_38);
            iVar1 = (int)local_28 >> 0x1f;
            local_40 = local_20;
            iStack_3c = iStack_1c;
            if ((int)(iVar1 - (iStack_1c + (uint)(local_28 < local_20))) < 0 !=
                (SBORROW4(iVar1,iStack_1c) !=
                SBORROW4(iVar1 - iStack_1c,(uint)(local_28 < local_20)))) {
              local_40 = local_28;
              iStack_3c = iVar1;
            }
            uVar5 = write(local_30,auStack_4040,local_40);
            if (iStack_3c != (int)uVar5 >> 0x1f || local_40 != uVar5) {
              close(local_30);
              close(local_2c);
              pFVar2 = stdout;
              piVar3 = __errno_location();
              pcVar4 = strerror(*piVar3);
              fprintf(pFVar2,"[E/]RECOVERY (%s:%d) write failed(%s).\n","block_write",0x1c1,pcVar4);
              return 0xffffffff;
            }
            bVar7 = local_20 < local_40;
            local_20 = local_20 - local_40;
            iStack_1c = iStack_1c - (iStack_3c + (uint)bVar7);
          }
          fsync(local_30);
          close(local_30);
          close(local_2c);
          uVar6 = 0;
        }
      }
    }
  }
  return uVar6;
}



/* ===== FUN_000146ec @ 000146ec size=248 ===== */

undefined4
FUN_000146ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char acStack_2c [16];
  char acStack_1c [16];
  int local_c;
  
  iVar1 = FUN_00013634();
  if (iVar1 == 0) {
    FUN_00012f74(param_1,acStack_2c,param_3,param_4,param_7,param_8);
  }
  else {
    FUN_00012c28(param_1,acStack_2c,param_3,param_4,param_7,param_8);
  }
  FUN_00012f74(param_2,acStack_1c,param_5,param_6,param_7,param_8);
  local_c = 0;
  while( true ) {
    if (0xf < local_c) {
      return 0;
    }
    if (acStack_2c[local_c] != acStack_1c[local_c]) break;
    local_c = local_c + 1;
  }
  fprintf(stdout,"[E/]RECOVERY MD5Check is error of %s",param_1);
  return 0xffffffff;
}



/* ===== FUN_000147e4 @ 000147e4 size=200 ===== */

bool FUN_000147e4(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int local_24;
  byte *local_10;
  byte *local_c;
  
  bVar1 = 0;
  local_24 = param_3;
  local_10 = param_2;
  local_c = param_1;
  if (param_3 == 0) {
    bVar2 = false;
  }
  else {
    while (local_24 != 0) {
      bVar1 = bVar1 | *local_10 ^ *local_c;
      local_24 = local_24 + -1;
      local_10 = local_10 + 1;
      local_c = local_c + 1;
    }
    bVar2 = bVar1 != 0;
  }
  return bVar2;
}



/* ===== FUN_000148ac @ 000148ac size=92 ===== */

undefined4 FUN_000148ac(char *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 == '\0') || ((param_1[2] == '\0' && (param_1[1] == '\0')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== FUN_00014908 @ 00014908 size=40 ===== */

undefined1 FUN_00014908(int param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* ===== FUN_00014930 @ 00014930 size=536 ===== */

int FUN_00014930(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  int local_c;
  
  iVar2 = FUN_000148ac(param_1 + 8);
  if ((iVar2 == 0) || (iVar2 = FUN_000148ac(param_1 + 0xc), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if (*(byte *)(param_1 + 8) < *(byte *)(param_1 + 0xc)) {
      local_c = 1;
    }
    else {
      local_c = 0;
    }
  }
  else {
    iVar2 = FUN_000148ac(param_1 + 8);
    if (iVar2 == 0) {
      iVar2 = FUN_000148ac(param_1 + 0xc);
      if (iVar2 == 0) {
        puts("No bootable slots found, use lastboot.");
        iVar2 = FUN_00014908(param_1);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = FUN_00014908(param_1);
        if (iVar2 == 1) {
          return 1;
        }
        return -1;
      }
      local_c = 1;
    }
    else {
      local_c = 0;
    }
  }
  if (local_c == 0) {
    local_10 = 0;
  }
  else if (local_c == 1) {
    local_10 = 1;
  }
  if (local_c != DAT_0002a4f8) {
    DAT_0002a4f8 = local_c;
    if (local_10 == 0) {
      uVar3 = 0x41;
    }
    else {
      uVar3 = 0x42;
    }
    printf("A/B-slot: %c, successful: %d, tries-remain: %d\n",uVar3,
           (uint)*(byte *)(param_1 + (local_c + 2) * 4 + 2),
           (uint)*(byte *)(param_1 + (local_c + 2) * 4 + 1));
  }
  return local_10;
}



/* ===== FUN_00014b48 @ 00014b48 size=636 ===== */

undefined4 FUN_00014b48(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte abStack_30 [16];
  undefined1 local_20;
  int local_10;
  uint local_c;
  
  iVar1 = FUN_00014068(abStack_30);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    local_10 = FUN_00014930(abStack_30);
    if (local_10 == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      for (local_c = 0; local_c < 4; local_c = local_c + 1) {
        printf("info.mafic is %x\n",(uint)abStack_30[local_c]);
      }
      iVar1 = FUN_000147e4(abStack_30,&DAT_00018224,4);
      if (iVar1 == 0) {
        if (abStack_30[(local_10 + 2) * 4] != 0xf) {
          printf("Warning: current slot priorty is %d != %d, Correct it!\n",
                 (uint)abStack_30[(local_10 + 2) * 4],0xf);
          abStack_30[(local_10 + 2) * 4] = 0xf;
        }
        iVar1 = strcmp(param_1,"successful_boot");
        if (iVar1 == 0) {
          abStack_30[(local_10 + 2) * 4 + 1] = 0;
          abStack_30[(local_10 + 2) * 4 + 2] = 1;
          printf("A/B mode is %s\n",param_1);
        }
        iVar1 = strcmp(param_1,"retry");
        if (iVar1 == 0) {
          abStack_30[(local_10 + 2) * 4 + 1] = 7;
          abStack_30[(local_10 + 2) * 4 + 2] = 0;
          printf("A/B mode is %s\n",param_1);
        }
        local_20 = (undefined1)local_10;
        FUN_000135f4(abStack_30);
        iVar1 = FUN_00014098(abStack_30);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        puts("Magic is incorrect.");
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* ===== FUN_00014dc4 @ 00014dc4 size=300 ===== */

undefined4 FUN_00014dc4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_2c [32];
  int local_c;
  
  iVar1 = FUN_00014068(auStack_2c);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    local_c = FUN_00014930(auStack_2c);
    if (local_c == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      auStack_2c[(local_c + 2) * 4] = 0xe;
      auStack_2c[(3 - local_c) * 4] = 0xf;
      auStack_2c[(3 - local_c) * 4 + 1] = 7;
      auStack_2c[(3 - local_c) * 4 + 2] = 0;
      FUN_000135f4(auStack_2c);
      iVar1 = FUN_00014098(auStack_2c);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}



/* ===== FUN_00014ef0 @ 00014ef0 size=604 ===== */

int FUN_00014ef0(char *param_1,undefined4 param_2)

{
  FILE *pFVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  stat sStack_70;
  int local_14;
  
  local_14 = 0;
  local_14 = stat(param_1,&sStack_70);
  pFVar1 = stdout;
  if (local_14 == 0) {
    cVar2 = FUN_00013634();
    if (cVar2 == '\x01') {
      local_14 = FUN_00014128(param_1,param_2,sStack_70.st_size,sStack_70.st_size >> 0x1f,param_2);
      if (local_14 != 0) {
        fwrite("[E/]RECOVERY mtd_write failed.\n",1,0x1f,stdout);
        return local_14;
      }
    }
    else {
      local_14 = FUN_00014268(param_1,param_2,sStack_70.st_size,sStack_70.st_size >> 0x1f,param_2);
      if (local_14 != 0) {
        fwrite("[E/]RECOVERY block_write failed.\n",1,0x21,stdout);
        return local_14;
      }
    }
    local_14 = FUN_000146ec(param_2,param_1,0,0,0,sStack_70.st_size,sStack_70.st_size >> 0x1f);
    if (local_14 == 0) {
      fprintf(stdout,"[I/]RECOVERY check %s ok.\n",param_2);
      fprintf(stdout,"[I/]RECOVERY Write %s into %s successfully.\n",param_1,param_2);
      iVar5 = remove(param_1);
      pFVar1 = stdout;
      if (iVar5 != 0) {
        piVar3 = __errno_location();
        pcVar4 = strerror(*piVar3);
        fprintf(pFVar1,"[E/]RECOVERY remove %s error.(%s)\n",param_1,pcVar4);
      }
    }
    else {
      fprintf(stdout,"[E/]RECOVERY check %s failed.\n",param_2);
    }
  }
  else {
    piVar3 = __errno_location();
    pcVar4 = strerror(*piVar3);
    fprintf(pFVar1,"[E/]RECOVERY stat %s failed.(%s)\n",param_1,pcVar4);
  }
  return local_14;
}



/* ===== FUN_0001514c @ 0001514c size=2584 ===== */

undefined4 FUN_0001514c(undefined4 param_1,char *param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  char local_22c [4];
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 local_204;
  undefined4 uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  char local_1ec [4];
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  char local_1ac [4];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined1 auStack_16c [32];
  char local_14c [4];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  char local_10c [4];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  char local_cc [4];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  char local_8c [4];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  char acStack_4c [64];
  int local_c;
  
  uStack_88 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_80 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_8c[0] = '\0';
  local_8c[1] = '\0';
  local_8c[2] = '\0';
  local_8c[3] = '\0';
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  uStack_c8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_c4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_c0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_cc[0] = '\0';
  local_cc[1] = '\0';
  local_cc[2] = '\0';
  local_cc[3] = '\0';
  local_bc = 0;
  local_b4 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  uStack_108 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_104 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_100 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_10c[0] = '\0';
  local_10c[1] = '\0';
  local_10c[2] = '\0';
  local_10c[3] = '\0';
  local_fc = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  local_d4 = 0;
  uStack_148 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_144 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_140 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_14c[0] = '\0';
  local_14c[1] = '\0';
  local_14c[2] = '\0';
  local_14c[3] = '\0';
  local_13c = 0;
  local_134 = 0;
  local_12c = 0;
  local_124 = 0;
  local_11c = 0;
  local_114 = 0;
  uStack_138 = uStack_148;
  uStack_130 = uStack_148;
  uStack_128 = uStack_148;
  uStack_120 = uStack_148;
  uStack_118 = uStack_148;
  uStack_110 = uStack_148;
  uStack_f8 = uStack_108;
  uStack_f0 = uStack_108;
  uStack_e8 = uStack_108;
  uStack_e0 = uStack_108;
  uStack_d8 = uStack_108;
  uStack_d0 = uStack_108;
  uStack_b8 = uStack_c8;
  uStack_b0 = uStack_c8;
  uStack_a8 = uStack_c8;
  uStack_a0 = uStack_c8;
  uStack_98 = uStack_c8;
  uStack_90 = uStack_c8;
  uStack_78 = uStack_88;
  uStack_70 = uStack_88;
  uStack_68 = uStack_88;
  uStack_60 = uStack_88;
  uStack_58 = uStack_88;
  uStack_50 = uStack_88;
  iVar2 = FUN_00014068(auStack_16c);
  if (iVar2 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    local_c = FUN_00014930(auStack_16c);
    if (local_c == -1) {
      uVar3 = 0xffffffff;
    }
    else {
      iVar2 = strcmp(param_2,"all");
      if (iVar2 == 0) {
        if (local_c == 0) {
          uVar3 = 0x62;
        }
        else {
          uVar3 = 0x61;
        }
        sprintf(local_8c,"/dev/block/by-name/%s_%c","uboot",uVar3);
        if (local_c == 0) {
          uVar3 = 0x62;
        }
        else {
          uVar3 = 0x61;
        }
        sprintf(local_cc,"/dev/block/by-name/%s_%c",&DAT_000183c0,uVar3);
        if (local_c == 0) {
          uVar3 = 0x62;
        }
        else {
          uVar3 = 0x61;
        }
        sprintf(local_10c,"/dev/block/by-name/%s_%c","system",uVar3);
      }
      else {
        iVar2 = strcmp(param_2,"uboot");
        if (iVar2 == 0) {
          if (local_c == 0) {
            uVar3 = 0x62;
          }
          else {
            uVar3 = 0x61;
          }
          sprintf(local_8c,"/dev/block/by-name/%s_%c","uboot",uVar3);
        }
        else {
          iVar2 = strcmp(param_2,"boot");
          if (iVar2 == 0) {
            if (local_c == 0) {
              uVar3 = 0x62;
            }
            else {
              uVar3 = 0x61;
            }
            sprintf(local_cc,"/dev/block/by-name/%s_%c",&DAT_000183c0,uVar3);
          }
          else {
            iVar2 = strcmp(param_2,"system");
            if (iVar2 == 0) {
              if (local_c == 0) {
                uVar3 = 0x62;
              }
              else {
                uVar3 = 0x61;
              }
              sprintf(local_10c,"/dev/block/by-name/%s_%c","system",uVar3);
            }
            else {
              fprintf(stdout,"[I/]RECOVERY Invalid parameter setting: --partition=%s.\n",param_2);
            }
          }
        }
      }
      if (local_8c[0] != '\0') {
        memset(acStack_4c,0,0x40);
        sprintf(acStack_4c,"%s/%s.img",param_1,"uboot");
        iVar2 = access(acStack_4c,0);
        if ((iVar2 == 0) && (iVar2 = FUN_00014ef0(acStack_4c,local_8c), iVar2 != 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          fprintf(stdout,"[E/]RECOVERY Write %s failed.\n",local_8c);
          return 0xffffffff;
        }
      }
      if (local_cc[0] != '\0') {
        memset(acStack_4c,0,0x40);
        sprintf(acStack_4c,"%s/%s.img",param_1,&DAT_000183c0);
        iVar2 = access(acStack_4c,0);
        if ((iVar2 == 0) && (iVar2 = FUN_00014ef0(acStack_4c,local_cc), iVar2 != 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          fprintf(stdout,"[E/]RECOVERY Write %s failed.\n",local_cc);
          return 0xffffffff;
        }
      }
      if (local_10c[0] != '\0') {
        memset(acStack_4c,0,0x40);
        sprintf(acStack_4c,"%s/%s.img",param_1,"system");
        iVar2 = access(acStack_4c,0);
        if ((iVar2 == 0) && (iVar2 = FUN_00014ef0(acStack_4c,local_10c), iVar2 != 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          fprintf(stdout,"[E/]RECOVERY Write %s failed.\n",local_10c);
          return 0xffffffff;
        }
      }
      if (param_3 != (char *)0x0) {
        uStack_228 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_224 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_220 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_22c[0] = '\0';
        local_22c[1] = '\0';
        local_22c[2] = '\0';
        local_22c[3] = '\0';
        local_21c = 0;
        local_214 = 0;
        local_20c = 0;
        local_204 = 0;
        local_1fc = 0;
        local_1f4 = 0;
        uStack_1e8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_1e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_1e0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_1ec[0] = '\0';
        local_1ec[1] = '\0';
        local_1ec[2] = '\0';
        local_1ec[3] = '\0';
        local_1dc = 0;
        local_1d4 = 0;
        local_1cc = 0;
        local_1c4 = 0;
        local_1bc = 0;
        local_1b4 = 0;
        uStack_1a8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_1a4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_1a0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_1ac[0] = '\0';
        local_1ac[1] = '\0';
        local_1ac[2] = '\0';
        local_1ac[3] = '\0';
        local_19c = 0;
        local_194 = 0;
        local_18c = 0;
        local_184 = 0;
        local_17c = 0;
        local_174 = 0;
        uStack_218 = uStack_228;
        uStack_210 = uStack_228;
        uStack_208 = uStack_228;
        uStack_200 = uStack_228;
        uStack_1f8 = uStack_228;
        uStack_1f0 = uStack_228;
        uStack_1d8 = uStack_1e8;
        uStack_1d0 = uStack_1e8;
        uStack_1c8 = uStack_1e8;
        uStack_1c0 = uStack_1e8;
        uStack_1b8 = uStack_1e8;
        uStack_1b0 = uStack_1e8;
        uStack_198 = uStack_1a8;
        uStack_190 = uStack_1a8;
        uStack_188 = uStack_1a8;
        uStack_180 = uStack_1a8;
        uStack_178 = uStack_1a8;
        uStack_170 = uStack_1a8;
        iVar2 = strcmp(param_3,"all");
        if (iVar2 == 0) {
          if (local_c == 0) {
            uVar3 = 0x62;
          }
          else {
            uVar3 = 0x61;
          }
          sprintf(local_22c,"/dev/block/by-name/%s_%c",&DAT_00018438,uVar3);
          if (local_c == 0) {
            uVar3 = 0x62;
          }
          else {
            uVar3 = 0x61;
          }
          sprintf(local_1ec,"/dev/block/by-name/%s_%c","ac_lib",uVar3);
          if (local_c == 0) {
            uVar3 = 0x62;
          }
          else {
            uVar3 = 0x61;
          }
          sprintf(local_1ac,"/dev/block/by-name/%s_%c","ac_app",uVar3);
          memset(acStack_4c,0,0x40);
          sprintf(acStack_4c,"%s/%s.img",param_1,&DAT_00018438);
          iVar2 = access(acStack_4c,0);
          if (iVar2 == 0) {
            iVar2 = FUN_00014ef0(acStack_4c,local_22c);
            if (iVar2 != 0) {
              fprintf(stdout,"[E/]RECOVERY Write %s failed.\n",local_22c);
              return 0xffffffff;
            }
          }
          else {
            fprintf(stdout,"[E/]RECOVERY No found %s, skip.\n",acStack_4c);
          }
          memset(acStack_4c,0,0x40);
          sprintf(acStack_4c,"%s/%s.img",param_1,"ac_lib");
          iVar2 = access(acStack_4c,0);
          if (iVar2 == 0) {
            iVar2 = FUN_00014ef0(acStack_4c,local_1ec);
            if (iVar2 != 0) {
              fprintf(stdout,"[E/]RECOVERY Write %s failed.\n",local_1ec);
              return 0xffffffff;
            }
          }
          else {
            fprintf(stdout,"[E/]RECOVERY No found %s, skip.\n",acStack_4c);
          }
          memset(acStack_4c,0,0x40);
          sprintf(acStack_4c,"%s/%s.img",param_1,"ac_app");
          iVar2 = access(acStack_4c,0);
          if (iVar2 == 0) {
            iVar2 = FUN_00014ef0(acStack_4c,local_1ac);
            if (iVar2 != 0) {
              fprintf(stdout,"[E/]RECOVERY Write %s failed.\n",local_1ac);
              return 0xffffffff;
            }
          }
          else {
            fprintf(stdout,"[E/]RECOVERY No found %s, skip.\n",acStack_4c);
          }
        }
        else {
          if (local_c == 0) {
            uVar3 = 0x62;
          }
          else {
            uVar3 = 0x61;
          }
          sprintf(local_14c,"/dev/block/by-name/%s_%c",param_3,uVar3);
          memset(acStack_4c,0,0x40);
          sprintf(acStack_4c,"%s/%s.img",param_1,param_3);
          iVar2 = access(acStack_4c,0);
          if (iVar2 == 0) {
            iVar2 = FUN_00014ef0(acStack_4c,local_14c);
            if (iVar2 != 0) {
              fprintf(stdout,"[E/]RECOVERY Write %s failed.\n",local_14c);
              return 0xffffffff;
            }
          }
          else {
            fprintf(stdout,"[E/]RECOVERY No found %s, skip.\n",acStack_4c);
          }
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== FUN_00015b64 @ 00015b64 size=736 ===== */

undefined4 FUN_00015b64(int param_1,int param_2,int param_3,undefined4 param_4,char *param_5)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_d8 [128];
  char acStack_58 [16];
  char acStack_48 [64];
  
  if (param_1 == 0) {
    fwrite("[E/]RECOVERY \'--tar_path=\' must be set.\n",1,0x28,stdout);
    uVar2 = 0xffffffff;
  }
  else {
    if (param_2 == 0) {
      snprintf(acStack_48,0x40,"%s","/mnt/sdcard/rk_update");
    }
    else {
      snprintf(acStack_48,0x40,"%s",param_2);
    }
    if (param_3 == 0) {
      sprintf(acStack_58,"no_sys_update");
    }
    else {
      sprintf(acStack_58,"%s",param_3);
    }
    iVar1 = access(acStack_48,0);
    if (iVar1 != 0) {
      mkdir(acStack_48,0x1ed);
    }
    sprintf(acStack_d8,"tar -xf %s -C %s",param_1,acStack_48);
    iVar1 = system(acStack_d8);
    if (iVar1 == 0) {
      fprintf(stdout,"[I/]RECOVERY tar path = %s\n",param_1);
      fprintf(stdout,"[I/]RECOVERY save path = %s\n",acStack_48);
      iVar1 = FUN_0001514c(acStack_48,acStack_58,param_4);
      if (iVar1 == 0) {
        iVar1 = strcmp(param_5,"enable");
        if (iVar1 == 0) {
          iVar1 = FUN_00014dc4();
          if (iVar1 != 0) {
            fwrite("[E/]RECOVERY Set slot activity failed.\n",1,0x27,stdout);
            return 0xffffffff;
          }
          fwrite("[I/]RECOVERY Set slot activity is enable.\n",1,0x2a,stdout);
        }
        else {
          iVar1 = strcmp(param_5,"disable");
          if (iVar1 == 0) {
            fwrite("[I/]RECOVERY Set slot activity is disable.\n",1,0x2b,stdout);
          }
        }
        uVar2 = 0;
      }
      else {
        fwrite("[E/]RECOVERY Write flash error, exit upgrading.\n",1,0x30,stdout);
        uVar2 = 0xffffffff;
      }
    }
    else {
      fprintf(stdout,"[E/]RECOVERY Unpack %s failed.\n",param_1);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



/* ===== FUN_00015e44 @ 00015e44 size=516 ===== */

void FUN_00015e44(void)

{
  FILE *__stream;
  undefined4 uVar1;
  byte abStack_34 [16];
  byte local_24;
  undefined4 local_18;
  int local_14;
  
  fwrite("[I/]RECOVERY ===============Linux A/B=============\n",1,0x33,stdout);
  FUN_00014068(abStack_34);
  fprintf(stdout,"[I/]RECOVERY magic : %s.\n",abStack_34);
  fprintf(stdout,"[I/]RECOVERY version_major = %d.\n",(uint)abStack_34[4]);
  fprintf(stdout,"[I/]RECOVERY version_minor = %d.\n",(uint)abStack_34[5]);
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    fprintf(stdout,"[I/]RECOVERY slot.[%d]->priority = %d.\n",local_14,
            (uint)abStack_34[(local_14 + 2) * 4]);
    fprintf(stdout,"[I/]RECOVERY slot.[%d]->successful_boot = %d.\n",local_14,
            (uint)abStack_34[(local_14 + 2) * 4 + 2]);
    fprintf(stdout,"[I/]RECOVERY slot.[%d]->tries_remaining = %d.\n",local_14,
            (uint)abStack_34[(local_14 + 2) * 4 + 1]);
  }
  fprintf(stdout,"[I/]RECOVERY last_boot : %d.\n",(uint)local_24);
  __stream = stdout;
  uVar1 = FUN_000135bc(abStack_34,0x1c);
  uVar1 = FUN_000134b4(uVar1);
  fprintf(__stream,"[I/]RECOVERY calculate crc32: %x.\n",uVar1);
  fprintf(stdout,"[I/]RECOVERY local crc32: %x.\n",local_18);
  fprintf(stdout,"[I/]RECOVERY sizeof(struct AvbABData) = %ld\n",0x20);
  return;
}



/* ===== FUN_00016048 @ 00016048 size=368 ===== */

void FUN_00016048(void)

{
  fwrite("[I/]RECOVERY --misc=now                           Linux A/B mode: Setting the current partition to bootable.\n"
         ,1,0x6d,stdout);
  fwrite("[I/]RECOVERY --misc=other                         Linux A/B mode: Setting another partition to bootable.\n"
         ,1,0x69,stdout);
  fwrite("[I/]RECOVERY --misc=update                        Linux A/B mode: Setting the partition to be upgraded.\n"
         ,1,0x68,stdout);
  fwrite("[I/]RECOVERY --misc=display                       Display misc info.\n",1,0x45,stdout);
  fwrite("[I/]RECOVERY --tar_path=<path>                    Set upgrade firmware path.\n",1,0x4d,
         stdout);
  fwrite("[I/]RECOVERY --save_dir=<path>                    Set the path for saving the image.\n",1,
         0x55,stdout);
  fwrite("[I/]RECOVERY --partition=<uboot/boot/system/all>  Set the partition to be upgraded.(\'all\' means \'uboot\', \'boot\' and \'system\' are included.)\n"
         ,1,0x8c,stdout);
  fwrite("[I/]RECOVERY --extra_part=<name/all>              Set the extra partition to be upgraded.(\'all\' means \'oem\' and \'userdata\' are included.)\n"
         ,1,0x8a,stdout);
  fwrite("[I/]RECOVERY --mode=<successful_boot/retry>       Set system bootctrl.\n",1,0x47,stdout);
  fwrite("[I/]RECOVERY --set_slot=<enable/disable>          Set whether to call setSlotActivity after update completes.\n"
         ,1,0x6e,stdout);
  fwrite("[I/]RECOVERY --reboot                             Restart the machine at the end of the program.\n"
         ,1,0x61,stdout);
  return;
}



/* ===== FUN_000161b8 @ 000161b8 size=992 ===== */

int FUN_000161b8(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  
  fwrite("[I/]RECOVERY *** rk_ota: Version V1.0.0 ***.\n",1,0x2d,stdout);
  local_c = (char *)0x0;
  local_10 = (char *)0x0;
  local_14 = (char *)0x0;
  local_18 = (char *)0x0;
  local_1c = (char *)0x0;
  local_20 = "successful_boot";
  local_24 = "enable";
  bVar1 = false;
  while (iVar2 = getopt_long(param_1,param_2,&DAT_00018d84,&DAT_00018c9c,0), iVar2 != -1) {
    if (iVar2 == 0x70) {
      local_18 = optarg;
    }
    else if (iVar2 < 0x71) {
      if (iVar2 == 0x68) {
        FUN_00016048();
      }
      else if (iVar2 < 0x69) {
        if (iVar2 == 0x3f) {
          fwrite("[E/]RECOVERY Invalid command argument\n",1,0x26,stdout);
        }
      }
      else if (iVar2 == 0x6d) {
        local_14 = optarg;
      }
      else if (iVar2 == 0x6f) {
        local_20 = optarg;
      }
    }
    else if (iVar2 == 0xe3) {
      local_10 = optarg;
    }
    else if (iVar2 < 0xe4) {
      if (iVar2 == 0x72) {
        bVar1 = true;
      }
      else if (iVar2 == 0xd5) {
        local_1c = optarg;
      }
    }
    else if (iVar2 == 0xe4) {
      local_c = optarg;
    }
    else if (iVar2 == 0xe6) {
      local_24 = optarg;
    }
  }
  if (local_14 != (char *)0x0) {
    iVar2 = strcmp(local_14,"now");
    if (iVar2 == 0) {
      iVar2 = FUN_00014b48(local_20);
      if (iVar2 == 0) {
        DAT_0002a4fc = 0;
      }
    }
    else {
      iVar2 = strcmp(local_14,"other");
      if (iVar2 == 0) {
        iVar2 = FUN_00014dc4();
        if (iVar2 == 0) {
          DAT_0002a4fc = 0;
        }
      }
      else {
        iVar2 = strcmp(local_14,"update");
        if (iVar2 == 0) {
          iVar2 = FUN_00015b64(local_c,local_10,local_18,local_1c,local_24);
          if (iVar2 == 0) {
            DAT_0002a4fc = 0;
          }
        }
        else {
          iVar2 = strcmp(local_14,"display");
          if (iVar2 != 0) {
            fprintf(stdout,"[E/]RECOVERY unknow misc cmdline : %s.\n",local_14);
            return 0;
          }
          FUN_00015e44();
        }
      }
    }
  }
  if ((bVar1) && (DAT_0002a4fc == 0)) {
    sync();
    system("reboot");
  }
  return DAT_0002a4fc;
}



/* ===== FUN_00016598 @ 00016598 size=298 ===== */

undefined4 FUN_00016598(int param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  void *__s;
  uint local_24;
  void *local_c;
  
  if (param_3 != 0) {
    uVar1 = param_3 * 8 + *(int *)(param_1 + 0x10);
    if (uVar1 < *(uint *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
    *(uint *)(param_1 + 0x10) = uVar1;
    iVar2 = *(int *)(param_1 + 0x58);
    local_24 = param_3;
    local_c = param_2;
    if (iVar2 != 0) {
      __s = (void *)(param_1 + 0x18);
      if ((param_3 < 0x40) && (iVar2 + param_3 < 0x40)) {
        memcpy((void *)(iVar2 + (int)__s),param_2,param_3);
        *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_3;
        return 1;
      }
      memcpy((void *)((int)__s + iVar2),param_2,0x40 - iVar2);
      FUN_00016926(param_1,__s,1);
      local_c = (void *)((0x40 - iVar2) + (int)param_2);
      local_24 = param_3 - (0x40 - iVar2);
      *(undefined4 *)(param_1 + 0x58) = 0;
      memset(__s,0,0x40);
    }
    uVar1 = local_24 >> 6;
    if (uVar1 != 0) {
      FUN_00016926(param_1,local_c,uVar1);
      local_c = (void *)(uVar1 * 0x40 + (int)local_c);
      local_24 = local_24 + uVar1 * -0x40;
    }
    if (local_24 != 0) {
      *(uint *)(param_1 + 0x58) = local_24;
      memcpy((void *)(param_1 + 0x18),local_c,local_24);
    }
  }
  return 1;
}



/* ===== FUN_000166c2 @ 000166c2 size=28 ===== */

void FUN_000166c2(undefined4 param_1,undefined4 param_2)

{
  FUN_00016926(param_1,param_2,1);
  return;
}



/* ===== FUN_000166de @ 000166de size=508 ===== */

undefined4 FUN_000166de(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_c;
  
  puVar1 = param_2 + 6;
  iVar2 = param_2[0x16];
  *(undefined1 *)(iVar2 + (int)puVar1) = 0x80;
  local_c = iVar2 + 1;
  if (0x38 < local_c) {
    memset((void *)((int)puVar1 + local_c),0,0x40 - local_c);
    local_c = 0;
    FUN_00016926(param_2,puVar1,1);
  }
  memset((void *)((int)puVar1 + local_c),0,0x38 - local_c);
  *(char *)(param_2 + 0x14) = (char)param_2[4];
  *(char *)((int)param_2 + 0x51) = (char)((uint)param_2[4] >> 8);
  *(char *)((int)param_2 + 0x52) = (char)((uint)param_2[4] >> 0x10);
  *(char *)((int)param_2 + 0x53) = (char)((uint)param_2[4] >> 0x18);
  *(char *)(param_2 + 0x15) = (char)param_2[5];
  *(char *)((int)param_2 + 0x55) = (char)((uint)param_2[5] >> 8);
  *(char *)((int)param_2 + 0x56) = (char)((uint)param_2[5] >> 0x10);
  *(char *)((int)param_2 + 0x57) = (char)((uint)param_2[5] >> 0x18);
  FUN_00016926(param_2,param_2 + 6,1);
  param_2[0x16] = 0;
  FUN_000174b4(param_2 + 6,0x40);
  uVar3 = *param_2;
  *param_1 = (char)uVar3;
  param_1[1] = (char)((uint)uVar3 >> 8);
  param_1[2] = (char)((uint)uVar3 >> 0x10);
  param_1[3] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[1];
  param_1[4] = (char)uVar3;
  param_1[5] = (char)((uint)uVar3 >> 8);
  param_1[6] = (char)((uint)uVar3 >> 0x10);
  param_1[7] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[2];
  param_1[8] = (char)uVar3;
  param_1[9] = (char)((uint)uVar3 >> 8);
  param_1[10] = (char)((uint)uVar3 >> 0x10);
  param_1[0xb] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[3];
  param_1[0xc] = (char)uVar3;
  param_1[0xd] = (char)((uint)uVar3 >> 8);
  param_1[0xe] = (char)((uint)uVar3 >> 0x10);
  param_1[0xf] = (char)((uint)uVar3 >> 0x18);
  return 1;
}



/* ===== FUN_000168da @ 000168da size=76 ===== */

undefined4 FUN_000168da(undefined4 *param_1)

{
  memset(param_1,0,0x5c);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}



/* ===== FUN_00016926 @ 00016926 size=2920 ===== */

void FUN_00016926(int *param_1,int *param_2,int param_3)

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
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int local_64;
  int *local_14;
  
  iVar20 = *param_1;
  uVar18 = param_1[1];
  uVar17 = param_1[2];
  uVar19 = param_1[3];
  local_64 = param_3;
  local_14 = param_2;
  while (local_64 != 0) {
    iVar1 = *local_14;
    iVar2 = local_14[1];
    uVar21 = iVar1 + (uVar19 ^ (uVar17 ^ uVar19) & uVar18) + iVar20 + 0xd76aa478;
    uVar21 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar18;
    iVar20 = local_14[2];
    uVar19 = iVar2 + (uVar17 ^ (uVar17 ^ uVar18) & uVar21) + uVar19 + 0xe8c7b756;
    uVar19 = (uVar19 >> 0x14 | uVar19 * 0x1000) + uVar21;
    iVar3 = local_14[3];
    uVar17 = iVar20 + (uVar18 ^ (uVar21 ^ uVar18) & uVar19) + uVar17 + 0x242070db;
    uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) + uVar19;
    iVar4 = local_14[4];
    uVar18 = iVar3 + (uVar21 ^ (uVar19 ^ uVar21) & uVar17) + uVar18 + 0xc1bdceee;
    uVar18 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar17;
    iVar5 = local_14[5];
    uVar21 = iVar4 + (uVar19 ^ (uVar17 ^ uVar19) & uVar18) + uVar21 + 0xf57c0faf;
    uVar21 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar18;
    iVar6 = local_14[6];
    uVar19 = iVar5 + (uVar17 ^ (uVar17 ^ uVar18) & uVar21) + uVar19 + 0x4787c62a;
    uVar19 = (uVar19 >> 0x14 | uVar19 * 0x1000) + uVar21;
    iVar7 = local_14[7];
    uVar17 = iVar6 + (uVar18 ^ (uVar21 ^ uVar18) & uVar19) + uVar17 + 0xa8304613;
    uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) + uVar19;
    iVar8 = local_14[8];
    uVar18 = iVar7 + (uVar21 ^ (uVar19 ^ uVar21) & uVar17) + uVar18 + 0xfd469501;
    uVar18 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar17;
    iVar9 = local_14[9];
    uVar21 = iVar8 + (uVar19 ^ (uVar17 ^ uVar19) & uVar18) + uVar21 + 0x698098d8;
    uVar21 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar18;
    iVar10 = local_14[10];
    uVar19 = iVar9 + (uVar17 ^ (uVar17 ^ uVar18) & uVar21) + uVar19 + 0x8b44f7af;
    uVar19 = (uVar19 >> 0x14 | uVar19 * 0x1000) + uVar21;
    iVar11 = local_14[0xb];
    uVar17 = (iVar10 + (uVar18 ^ (uVar21 ^ uVar18) & uVar19) + uVar17) - 0xa44f;
    uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) + uVar19;
    iVar12 = local_14[0xc];
    uVar18 = iVar11 + (uVar21 ^ (uVar19 ^ uVar21) & uVar17) + uVar18 + 0x895cd7be;
    uVar18 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar17;
    iVar13 = local_14[0xd];
    uVar21 = iVar12 + (uVar19 ^ (uVar17 ^ uVar19) & uVar18) + uVar21 + 0x6b901122;
    uVar21 = (uVar21 >> 0x19 | uVar21 * 0x80) + uVar18;
    piVar16 = local_14 + 0xf;
    iVar14 = local_14[0xe];
    uVar19 = iVar13 + (uVar17 ^ (uVar17 ^ uVar18) & uVar21) + uVar19 + 0xfd987193;
    uVar19 = (uVar19 >> 0x14 | uVar19 * 0x1000) + uVar21;
    local_14 = local_14 + 0x10;
    iVar15 = *piVar16;
    uVar17 = iVar14 + (uVar18 ^ (uVar21 ^ uVar18) & uVar19) + uVar17 + 0xa679438e;
    uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) + uVar19;
    uVar18 = iVar15 + (uVar21 ^ (uVar19 ^ uVar21) & uVar17) + uVar18 + 0x49b40821;
    uVar18 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar17;
    uVar21 = iVar2 + (uVar17 ^ (uVar17 ^ uVar18) & uVar19) + uVar21 + 0xf61e2562;
    uVar21 = (uVar21 >> 0x1b | uVar21 * 0x20) + uVar18;
    uVar19 = iVar6 + (uVar18 ^ (uVar21 ^ uVar18) & uVar17) + uVar19 + 0xc040b340;
    uVar19 = (uVar19 >> 0x17 | uVar19 * 0x200) + uVar21;
    uVar17 = iVar11 + (uVar21 ^ (uVar19 ^ uVar21) & uVar18) + uVar17 + 0x265e5a51;
    uVar17 = (uVar17 >> 0x12 | uVar17 * 0x4000) + uVar19;
    uVar18 = iVar1 + (uVar19 ^ (uVar17 ^ uVar19) & uVar21) + uVar18 + 0xe9b6c7aa;
    uVar18 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar17;
    uVar21 = iVar5 + (uVar17 ^ (uVar17 ^ uVar18) & uVar19) + uVar21 + 0xd62f105d;
    uVar21 = (uVar21 >> 0x1b | uVar21 * 0x20) + uVar18;
    uVar19 = iVar10 + (uVar18 ^ (uVar21 ^ uVar18) & uVar17) + uVar19 + 0x2441453;
    uVar19 = (uVar19 >> 0x17 | uVar19 * 0x200) + uVar21;
    uVar17 = iVar15 + (uVar21 ^ (uVar19 ^ uVar21) & uVar18) + uVar17 + 0xd8a1e681;
    uVar17 = (uVar17 >> 0x12 | uVar17 * 0x4000) + uVar19;
    uVar18 = iVar4 + (uVar19 ^ (uVar17 ^ uVar19) & uVar21) + uVar18 + 0xe7d3fbc8;
    uVar18 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar17;
    uVar21 = iVar9 + (uVar17 ^ (uVar17 ^ uVar18) & uVar19) + uVar21 + 0x21e1cde6;
    uVar21 = (uVar21 >> 0x1b | uVar21 * 0x20) + uVar18;
    uVar19 = iVar14 + (uVar18 ^ (uVar21 ^ uVar18) & uVar17) + uVar19 + 0xc33707d6;
    uVar19 = (uVar19 >> 0x17 | uVar19 * 0x200) + uVar21;
    uVar17 = iVar3 + (uVar21 ^ (uVar19 ^ uVar21) & uVar18) + uVar17 + 0xf4d50d87;
    uVar17 = (uVar17 >> 0x12 | uVar17 * 0x4000) + uVar19;
    uVar18 = iVar8 + (uVar19 ^ (uVar17 ^ uVar19) & uVar21) + uVar18 + 0x455a14ed;
    uVar18 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar17;
    uVar21 = iVar13 + (uVar17 ^ (uVar17 ^ uVar18) & uVar19) + uVar21 + 0xa9e3e905;
    uVar21 = (uVar21 >> 0x1b | uVar21 * 0x20) + uVar18;
    uVar19 = iVar20 + (uVar18 ^ (uVar21 ^ uVar18) & uVar17) + uVar19 + 0xfcefa3f8;
    uVar19 = (uVar19 >> 0x17 | uVar19 * 0x200) + uVar21;
    uVar17 = iVar7 + (uVar21 ^ (uVar19 ^ uVar21) & uVar18) + uVar17 + 0x676f02d9;
    uVar17 = (uVar17 >> 0x12 | uVar17 * 0x4000) + uVar19;
    uVar18 = iVar12 + (uVar19 ^ (uVar17 ^ uVar19) & uVar21) + uVar18 + 0x8d2a4c8a;
    uVar18 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar17;
    uVar21 = (iVar5 + (uVar19 ^ uVar17 ^ uVar18) + uVar21) - 0x5c6be;
    uVar21 = (uVar21 >> 0x1c | uVar21 * 0x10) + uVar18;
    uVar19 = iVar8 + (uVar17 ^ uVar21 ^ uVar18) + uVar19 + 0x8771f681;
    uVar19 = (uVar19 >> 0x15 | uVar19 * 0x800) + uVar21;
    uVar17 = iVar11 + (uVar18 ^ uVar19 ^ uVar21) + uVar17 + 0x6d9d6122;
    uVar17 = (uVar17 >> 0x10 | uVar17 * 0x10000) + uVar19;
    uVar18 = iVar14 + (uVar21 ^ uVar17 ^ uVar19) + uVar18 + 0xfde5380c;
    uVar18 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar17;
    uVar21 = iVar2 + (uVar19 ^ uVar17 ^ uVar18) + uVar21 + 0xa4beea44;
    uVar21 = (uVar21 >> 0x1c | uVar21 * 0x10) + uVar18;
    uVar19 = iVar4 + (uVar17 ^ uVar21 ^ uVar18) + uVar19 + 0x4bdecfa9;
    uVar19 = (uVar19 >> 0x15 | uVar19 * 0x800) + uVar21;
    uVar17 = iVar7 + (uVar18 ^ uVar19 ^ uVar21) + uVar17 + 0xf6bb4b60;
    uVar17 = (uVar17 >> 0x10 | uVar17 * 0x10000) + uVar19;
    uVar18 = iVar10 + (uVar21 ^ uVar17 ^ uVar19) + uVar18 + 0xbebfbc70;
    uVar18 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar17;
    uVar21 = iVar13 + (uVar19 ^ uVar17 ^ uVar18) + uVar21 + 0x289b7ec6;
    uVar21 = (uVar21 >> 0x1c | uVar21 * 0x10) + uVar18;
    uVar19 = iVar1 + (uVar17 ^ uVar21 ^ uVar18) + uVar19 + 0xeaa127fa;
    uVar19 = (uVar19 >> 0x15 | uVar19 * 0x800) + uVar21;
    uVar17 = iVar3 + (uVar18 ^ uVar19 ^ uVar21) + uVar17 + 0xd4ef3085;
    uVar17 = (uVar17 >> 0x10 | uVar17 * 0x10000) + uVar19;
    uVar18 = iVar6 + (uVar21 ^ uVar17 ^ uVar19) + uVar18 + 0x4881d05;
    uVar18 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar17;
    uVar21 = iVar9 + (uVar19 ^ uVar17 ^ uVar18) + uVar21 + 0xd9d4d039;
    uVar21 = (uVar21 >> 0x1c | uVar21 * 0x10) + uVar18;
    uVar19 = iVar12 + (uVar17 ^ uVar21 ^ uVar18) + uVar19 + 0xe6db99e5;
    uVar19 = (uVar19 >> 0x15 | uVar19 * 0x800) + uVar21;
    uVar17 = iVar15 + (uVar18 ^ uVar19 ^ uVar21) + uVar17 + 0x1fa27cf8;
    uVar17 = (uVar17 >> 0x10 | uVar17 * 0x10000) + uVar19;
    uVar18 = iVar20 + (uVar21 ^ uVar17 ^ uVar19) + uVar18 + 0xc4ac5665;
    uVar18 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar17;
    uVar21 = iVar1 + (uVar17 ^ (~uVar19 | uVar18)) + uVar21 + 0xf4292244;
    uVar21 = (uVar21 >> 0x1a | uVar21 * 0x40) + uVar18;
    uVar19 = iVar7 + (uVar18 ^ (~uVar17 | uVar21)) + uVar19 + 0x432aff97;
    uVar19 = (uVar19 >> 0x16 | uVar19 * 0x400) + uVar21;
    uVar17 = iVar14 + (uVar21 ^ (~uVar18 | uVar19)) + uVar17 + 0xab9423a7;
    uVar17 = (uVar17 >> 0x11 | uVar17 * 0x8000) + uVar19;
    uVar18 = iVar5 + (uVar19 ^ (~uVar21 | uVar17)) + uVar18 + 0xfc93a039;
    uVar18 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar17;
    uVar21 = iVar12 + (uVar17 ^ (~uVar19 | uVar18)) + uVar21 + 0x655b59c3;
    uVar21 = (uVar21 >> 0x1a | uVar21 * 0x40) + uVar18;
    uVar19 = iVar3 + (uVar18 ^ (~uVar17 | uVar21)) + uVar19 + 0x8f0ccc92;
    uVar19 = (uVar19 >> 0x16 | uVar19 * 0x400) + uVar21;
    uVar17 = (iVar10 + (uVar21 ^ (~uVar18 | uVar19)) + uVar17) - 0x100b83;
    uVar17 = (uVar17 >> 0x11 | uVar17 * 0x8000) + uVar19;
    uVar18 = iVar2 + (uVar19 ^ (~uVar21 | uVar17)) + uVar18 + 0x85845dd1;
    uVar18 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar17;
    uVar21 = iVar8 + (uVar17 ^ (~uVar19 | uVar18)) + uVar21 + 0x6fa87e4f;
    uVar21 = (uVar21 >> 0x1a | uVar21 * 0x40) + uVar18;
    uVar19 = iVar15 + (uVar18 ^ (~uVar17 | uVar21)) + uVar19 + 0xfe2ce6e0;
    uVar19 = (uVar19 >> 0x16 | uVar19 * 0x400) + uVar21;
    uVar17 = iVar6 + (uVar21 ^ (~uVar18 | uVar19)) + uVar17 + 0xa3014314;
    uVar17 = (uVar17 >> 0x11 | uVar17 * 0x8000) + uVar19;
    uVar18 = iVar13 + (uVar19 ^ (~uVar21 | uVar17)) + uVar18 + 0x4e0811a1;
    uVar18 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar17;
    uVar21 = iVar4 + (uVar17 ^ (~uVar19 | uVar18)) + uVar21 + 0xf7537e82;
    uVar21 = (uVar21 >> 0x1a | uVar21 * 0x40) + uVar18;
    uVar19 = iVar11 + (uVar18 ^ (~uVar17 | uVar21)) + uVar19 + 0xbd3af235;
    uVar19 = (uVar19 >> 0x16 | uVar19 * 0x400) + uVar21;
    uVar17 = iVar20 + (uVar21 ^ (~uVar18 | uVar19)) + uVar17 + 0x2ad7d2bb;
    uVar17 = (uVar17 >> 0x11 | uVar17 * 0x8000) + uVar19;
    uVar18 = iVar9 + (uVar19 ^ (~uVar21 | uVar17)) + uVar18 + 0xeb86d391;
    *param_1 = uVar21 + *param_1;
    iVar20 = *param_1;
    param_1[1] = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar17 + param_1[1];
    uVar18 = param_1[1];
    param_1[2] = uVar17 + param_1[2];
    uVar17 = param_1[2];
    param_1[3] = uVar19 + param_1[3];
    uVar19 = param_1[3];
    local_64 = local_64 + -1;
  }
  return;
}



/* ===== FUN_000174b4 @ 000174b4 size=56 ===== */

void FUN_000174b4(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  
  if (6 < param_2) {
    uVar2 = param_2 - 4;
    for (; puVar1 = param_1, ((uint)param_1 & 3) != 0; param_1 = (undefined4 *)((int)param_1 + 1)) {
      *(undefined1 *)param_1 = 0;
      uVar2 = uVar2 - 1;
    }
    do {
      param_2 = uVar2;
      param_1 = puVar1 + 1;
      *puVar1 = 0;
      puVar1 = param_1;
      uVar2 = param_2 - 4;
    } while (3 < param_2);
  }
  if (param_2 != 0) {
    do {
      *(undefined1 *)param_1 = 0;
      bVar3 = param_2 != 0;
      param_2 = param_2 - 1;
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while (bVar3 && param_2 != 0);
  }
  return;
}



/* ===== FUN_00017520 @ 00017520 size=6 ===== */

void FUN_00017520(void)

{
  return;
}



/* ===== FUN_00017526 @ 00017526 size=6 ===== */

undefined8 FUN_00017526(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_cr14;
  
  uVar1 = coprocessor_movefromRt(0xf,1,in_cr14);
  uVar2 = coprocessor_movefromRt2(0xf,1,in_cr14);
  return CONCAT44(uVar2,uVar1);
}



/* ===== FUN_0001752c @ 0001752c size=6 ===== */

undefined4 FUN_0001752c(void)

{
  undefined1 auVar1 [16];
  
  auVar1 = AESInvShiftRows((undefined1  [16])0x0);
  auVar1 = AESSubBytes(auVar1);
  return auVar1._0_4_;
}



/* ===== FUN_00017532 @ 00017532 size=6 ===== */

undefined4 FUN_00017532(void)

{
  undefined1 in_q0 [16];
  undefined1 auVar1 [16];
  
  auVar1 = SHA1HashUpdateChoose(in_q0,in_q0._0_4_,in_q0);
  return auVar1._0_4_;
}



/* ===== FUN_00017538 @ 00017538 size=6 ===== */

undefined4 FUN_00017538(void)

{
  undefined1 in_q0 [16];
  undefined1 auVar1 [16];
  
  auVar1 = SHA256hash(in_q0,in_q0,in_q0,1);
  return auVar1._0_4_;
}



/* ===== FUN_0001753e @ 0001753e size=6 ===== */

undefined4 FUN_0001753e(void)

{
  undefined8 in_d0;
  undefined1 auVar1 [16];
  
  auVar1 = PolynomialMultiply(in_d0,in_d0,8);
  return auVar1._0_4_;
}



/* ===== FUN_000175c0 @ 000175c0 size=20 ===== */

void FUN_000175c0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  siglongjmp((__jmp_buf_tag *)(DAT_000175d4 + 0x175d0),param_1);
}



/* ===== FUN_000175d8 @ 000175d8 size=36 ===== */

undefined4 FUN_000175d8(void)

{
  undefined4 uVar1;
  
  if ((**(uint **)(DAT_000175fc + 0x175e2 + DAT_00017600) & 2) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00017526();
  }
  return uVar1;
}



/* ===== _INIT_1 @ 00017604 size=526 ===== */

void _INIT_1(void)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  _union_1051 local_3c [3];
  ulong local_30;
  ulong uStack_2c;
  char *local_14;
  
  iVar3 = DAT_00017814 + 0x17610;
  if (*(int *)(DAT_00017818 + 0x17618) == 0) {
    *(undefined4 *)(DAT_0001781c + 0x17624) = 1;
    local_14 = getenv((char *)(DAT_00017820 + 0x1762e));
    if (local_14 == (char *)0x0) {
      **(undefined4 **)(iVar3 + DAT_00017824) = 0;
      sigfillset((sigset_t *)(DAT_00017828 + 0x17662));
      sigdelset((sigset_t *)(DAT_0001782c + 0x1766e),4);
      sigdelset((sigset_t *)(DAT_00017830 + 0x1767a),5);
      sigdelset((sigset_t *)(DAT_00017834 + 0x17686),8);
      sigdelset((sigset_t *)(DAT_00017838 + 0x17692),7);
      sigdelset((sigset_t *)(DAT_0001783c + 0x1769e),0xb);
      memset(local_3c,0,0x14);
      local_3c[0].sa_handler = (__sighandler_t)(DAT_00017840 + 0x176b6);
      local_30 = *(ulong *)(DAT_00017844 + 0x176bc);
      uStack_2c = *(ulong *)(DAT_00017844 + 0x176c0);
      sigprocmask(2,(sigset_t *)&local_30,(sigset_t *)&stack0xffffffbc);
      sigaction(4,(sigaction *)local_3c,(sigaction *)&stack0xffffffd8);
      iVar2 = __sigsetjmp(DAT_00017848 + 0x176f2,1);
      if (iVar2 == 0) {
        FUN_00017520();
        **(uint **)(iVar3 + DAT_00017824) = **(uint **)(iVar3 + DAT_00017824) | 1;
        iVar2 = __sigsetjmp(DAT_0001784c + 0x17720,1);
        if (iVar2 == 0) {
          FUN_0001753e();
          **(uint **)(iVar3 + DAT_00017824) = **(uint **)(iVar3 + DAT_00017824) | 0x24;
        }
        else {
          iVar2 = __sigsetjmp(DAT_00017850 + 0x1774c,1);
          if (iVar2 == 0) {
            FUN_0001752c();
            **(uint **)(iVar3 + DAT_00017824) = **(uint **)(iVar3 + DAT_00017824) | 4;
          }
        }
        iVar2 = __sigsetjmp(DAT_00017854 + 0x17776,1);
        if (iVar2 == 0) {
          FUN_00017532();
          **(uint **)(iVar3 + DAT_00017824) = **(uint **)(iVar3 + DAT_00017824) | 8;
        }
        iVar2 = __sigsetjmp(DAT_00017858 + 0x177a0,1);
        if (iVar2 == 0) {
          FUN_00017538();
          **(uint **)(iVar3 + DAT_00017824) = **(uint **)(iVar3 + DAT_00017824) | 0x10;
        }
      }
      iVar2 = __sigsetjmp(DAT_0001785c + 0x177ca,1);
      if (iVar2 == 0) {
        FUN_00017526();
        **(uint **)(iVar3 + DAT_00017824) = **(uint **)(iVar3 + DAT_00017824) | 2;
      }
      sigaction(4,(sigaction *)&stack0xffffffd8,(sigaction *)0x0);
      sigprocmask(2,(sigset_t *)&stack0xffffffbc,(sigset_t *)0x0);
    }
    else {
      uVar1 = strtoul(local_14,(char **)0x0,0);
      **(ulong **)(iVar3 + DAT_00017824) = uVar1;
    }
  }
  return;
}



/* ===== _DT_FINI @ 00017860 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002b000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002b008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 0002b00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002b014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002b018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002b01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0002b020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::remove @ 0002b024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int remove(char *__filename)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek64 @ 0002b028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002b02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002b030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 0002b034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0002b038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002b03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 0002b040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002b044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002b048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigprocmask @ 0002b04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002b050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 0002b054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002b058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 0002b05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigdelset @ 0002b060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigdelset(sigset_t *__set,int __signo)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002b064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 0002b068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigfillset @ 0002b06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigfillset(sigset_t *__set)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0002b070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0002b074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 0002b078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002b07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002b080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002b084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0002b088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 0002b08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002b090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0002b094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0002b098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 0002b09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 0002b0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__sigsetjmp @ 0002b0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __sigsetjmp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0002b0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002b0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 0002b0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sync @ 0002b0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sync(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002b0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseeko64 @ 0002b0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseeko64(FILE *__stream,__off64_t __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fsync @ 0002b0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fsync(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chmod @ 0002b0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chmod(char *__file,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::siglongjmp @ 0002b0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void siglongjmp(__jmp_buf_tag *__env,int __val)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek @ 0002b0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002b0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0002b0d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mount @ 0002b0d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mount(char *__special_file,char *__dir,char *__fstype,ulong __rwflag,void *__data)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002b0dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002b0e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 0002b0e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


