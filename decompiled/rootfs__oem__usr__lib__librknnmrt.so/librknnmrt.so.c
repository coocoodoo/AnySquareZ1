// librknnmrt.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010e6c size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::stpcpy @ 00010e90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_stpcpy_0004200c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00010e9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00042010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010ea8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00042014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010eb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00042018)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00010ec0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0004201c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::munmap @ 00010ecc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00042020)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::__isnan @ 00010ed8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __isnan(double __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___isnan_00042024)(SUB84(__value,0));
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 00010ee4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00042028)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010ef0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0004202c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010efc size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00042030)();
  return;
}



/* ===== <EXTERNAL>::__isinf @ 00010f08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __isinf(double __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___isinf_00042034)(SUB84(__value,0));
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010f14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00042038)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00010f20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_0004203c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::ftruncate @ 00010f2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate(int __fd,__off_t __length)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ftruncate_00042040)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::lseek @ 00010f38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek_00042044)(__fd);
  return _Var1;
}



/* ===== <EXTERNAL>::mmap @ 00010f44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap_00042048)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::abort @ 00010f50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0004204c)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00010f5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00042050)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtod @ 00010f68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_strtod_00042054)(__nptr);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::fprintf @ 00010f74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00042058)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00010f80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0004205c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010f8c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00042060)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 00010f98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00042064)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ferror @ 00010fa4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ferror_00042068)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strstr @ 00010fb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0004206c)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010fbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00042070)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00010fc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00042074)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::log10 @ 00010fd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log10(double __x)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_log10_00042078)(SUB84(__x,0));
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* ===== <EXTERNAL>::strtok @ 00010fe0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_0004207c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00010fec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00042080)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00010ff8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00042084)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncat @ 00011004 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncat_00042088)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::fread @ 00011010 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0004208c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 0001101c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00042090)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 00011028 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00042094)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::memset @ 00011034 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00042098)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::ftell @ 00011040 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_0004209c)(__stream);
  return lVar1;
}



/* ===== <EXTERNAL>::fclose @ 0001104c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_000420a0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00011058 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000420a4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011064 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_000420a8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00011070 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_000420ac)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 0001107c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000420b0)();
  return piVar1;
}



/* ===== <EXTERNAL>::atoi @ 00011088 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000420b4)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::expf @ 00011094 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float expf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_expf_000420b8)();
  return fVar1;
}



/* ===== <EXTERNAL>::strlen @ 000110a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000420bc)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 000110ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_000420c0)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 000110b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_000420c4)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000110c4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000420c8)();
  return;
}



/* ===== <EXTERNAL>::close @ 000110d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000420cc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 000110dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000420d0)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000110e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000420d4)(__ptr);
  return;
}



/* ===== entry @ 000110f8 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00011144 + 0x11110 == DAT_00011140 + 0x11108) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011148 + 0x11118 + DAT_0001114c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000111b4 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00011228 + 0x111d0;
  if (*(char *)(DAT_00011224 + 0x111c4) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_0001122c) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00011230 + 0x111f0));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00011234) != 0) {
    __deregister_frame_info(DAT_00011238 + 0x11210);
  }
  *(undefined1 *)(DAT_0001123c + 0x11220) = 1;
  return;
}



/* ===== _INIT_0 @ 00011240 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011278 + 0x11250 + DAT_0001127c) != 0) {
    __register_frame_info(DAT_00011284 + 0x11270,DAT_00011280 + 0x1126c);
  }
  if (((DAT_000111a8 + 0x11168) - (DAT_000111a4 + 0x11160) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000111ac + 70000 + DAT_000111b0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00011288 @ 00011288 size=264 ===== */

undefined4 FUN_00011288(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = *(uint *)(param_3 + 0x10);
  iVar5 = DAT_00011390 + 0x112ac;
  if (uVar4 < *(uint *)(param_3 + 0xc)) {
    uVar1 = uVar4 + *(int *)(param_3 + 8);
    if (uVar1 < *(uint *)(param_3 + 0xc)) {
      iVar2 = uVar1 * 0x28 + *param_1;
      iVar7 = *(int *)(*param_2 + 0x1c);
      iVar6 = *(int *)(iVar2 + 4);
      uVar3 = *(undefined4 *)(iVar2 + 0x14);
      iVar2 = FUN_000173e0();
      if (-1 < iVar2) {
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00011394),(char *)(DAT_00011398 + 0x11320),
                iVar6,iVar6 * 0x168 + iVar7 + 0x40,*(undefined4 *)(param_3 + 8),
                *(undefined4 *)(param_3 + 0xc),uVar4,uVar3);
      }
    }
    else {
      iVar2 = FUN_000173e0();
      if (-1 < iVar2) {
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00011394),(char *)(DAT_0001139c + 0x11350),
                uVar1);
        return 0xffffffff;
      }
    }
  }
  else {
    iVar2 = FUN_000173e0();
    if (-1 < iVar2) {
      fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00011394),(char *)(DAT_000113a0 + 0x11388),uVar4
              ,*(undefined4 *)(param_3 + 0xc));
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000113a4 @ 000113a4 size=288 ===== */

undefined4 FUN_000113a4(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0 < *(int *)(param_2 + 0x140)) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      iVar3 = *(int *)(*(int *)(param_2 + 0x144) + iVar1) * 0x1bc + *(int *)(param_1[0x2f] + 0x14);
      iVar1 = FUN_0001756c(*(undefined4 *)(iVar3 + 0x110),iVar3 + 0x118,0,0xffffffff);
      iVar2 = FUN_000174fc(*(undefined4 *)(iVar3 + 0x100));
      FUN_00014578(*param_1,*(undefined4 *)(iVar3 + 0x1b4),*(undefined4 *)(iVar3 + 0x19c),
                   iVar2 * iVar1,1);
    } while (iVar4 < *(int *)(param_2 + 0x140));
  }
  (**(code **)(*(int *)(param_2 + 0x158) + 8))
            (param_1,*(undefined4 *)(param_2 + 0x144),*(undefined4 *)(param_2 + 0x14c),
             *(undefined4 *)(param_2 + 0x154));
  if (0 < *(int *)(param_2 + 0x148)) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      iVar3 = *(int *)(*(int *)(param_2 + 0x14c) + iVar1) * 0x1bc + *(int *)(param_1[0x2f] + 0x14);
      iVar1 = FUN_0001756c(*(undefined4 *)(iVar3 + 0x110),iVar3 + 0x118,0,0xffffffff);
      iVar2 = FUN_000174fc(*(undefined4 *)(iVar3 + 0x100));
      FUN_00014578(*param_1,*(undefined4 *)(iVar3 + 0x1b4),*(undefined4 *)(iVar3 + 0x19c),
                   iVar2 * iVar1,1);
    } while (iVar4 < *(int *)(param_2 + 0x148));
  }
  return 0;
}



/* ===== FUN_000114c4 @ 000114c4 size=48 ===== */

void FUN_000114c4(void)

{
  timeval local_10;
  
  gettimeofday(&local_10,(__timezone_ptr_t)0x0);
  return;
}



/* ===== FUN_000114f4 @ 000114f4 size=724 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_000114f4(int param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  puVar6 = *(uint **)(param_1 + 0xbc);
  uVar3 = puVar6[5];
  if (0 < (int)puVar6[4]) {
    uVar9 = puVar6[4] * 0x1bc + uVar3;
    do {
      if (*(int *)(uVar3 + 0x10c) - 1U < 3) {
        if (*(int *)(param_1 + 0xb8) == 0) {
          iVar7 = *(int *)(uVar3 + 0x19c) - *(int *)(param_1 + 0xcc);
          *(int *)(uVar3 + 0x1a0) = iVar7;
        }
        else {
          iVar7 = *(int *)(uVar3 + 0x1a0);
        }
        *(int *)(uVar3 + 0x19c) = param_3 + iVar7;
      }
      uVar3 = uVar3 + 0x1bc;
    } while (uVar3 != uVar9);
  }
  uVar3 = *puVar6;
  uVar9 = puVar6[1];
  if (0 < (int)uVar3) {
    iVar7 = (param_3 + param_2) - (*(int *)(param_1 + 0x70) + *(int *)(param_1 + 0xcc));
    if (uVar3 - 1 < 4) {
      uVar5 = 0;
    }
    else {
      iVar4 = uVar9 + 0x88c;
      auVar12._8_8_ = CONCAT44(iVar7,iVar7);
      auVar12._0_8_ = CONCAT44(iVar7,iVar7);
      iVar10 = (uVar3 >> 2) * 0x6f0 + iVar4;
      do {
        auVar11._4_4_ = *(undefined4 *)(iVar4 + -0x534);
        auVar11._0_4_ = *(undefined4 *)(iVar4 + -0x6f0);
        auVar11._8_4_ = *(undefined4 *)(iVar4 + -0x378);
        auVar11._12_4_ = *(undefined4 *)(iVar4 + -0x1bc);
        auVar11 = VectorAdd(auVar11,auVar12,4);
        *(int *)(iVar4 + -0x6f0) = auVar11._0_4_;
        *(int *)(iVar4 + -0x534) = auVar11._4_4_;
        *(int *)(iVar4 + -0x378) = auVar11._8_4_;
        puVar8 = (undefined4 *)(iVar4 + -0x1bc);
        iVar4 = iVar4 + 0x6f0;
        *puVar8 = auVar11._12_4_;
      } while (iVar4 != iVar10);
      uVar5 = uVar3 & 0xfffffffc;
      if (uVar3 == uVar5) goto LAB_00011680;
    }
    iVar4 = uVar5 * 0x1bc;
    *(int *)(uVar9 + iVar4 + 0x19c) = *(int *)(uVar9 + iVar4 + 0x19c) + iVar7;
    if ((((int)(uVar5 + 1) < (int)uVar3) &&
        (iVar10 = uVar9 + iVar4 + 0x1bc, *(int *)(iVar10 + 0x19c) = *(int *)(iVar10 + 0x19c) + iVar7
        , (int)(uVar5 + 2) < (int)uVar3)) &&
       (iVar10 = uVar9 + iVar4 + 0x378, *(int *)(iVar10 + 0x19c) = *(int *)(iVar10 + 0x19c) + iVar7,
       (int)(uVar5 + 3) < (int)uVar3)) {
      iVar4 = uVar9 + iVar4 + 0x534;
      *(int *)(iVar4 + 0x19c) = *(int *)(iVar4 + 0x19c) + iVar7;
    }
  }
LAB_00011680:
  uVar9 = puVar6[3];
  uVar3 = puVar6[2] * 3;
  if (0 < (int)uVar3) {
    iVar7 = (param_3 + param_2) - (*(int *)(param_1 + 0x70) + *(int *)(param_1 + 0xcc));
    if (uVar3 - 1 < 4) {
      uVar5 = 0;
    }
    else {
      iVar10 = uVar9 + 0x88c;
      auVar1._8_8_ = CONCAT44(iVar7,iVar7);
      auVar1._0_8_ = CONCAT44(iVar7,iVar7);
      iVar4 = (uVar3 >> 2) * 0x6f0 + iVar10;
      do {
        auVar2._4_4_ = *(undefined4 *)(iVar10 + -0x534);
        auVar2._0_4_ = *(undefined4 *)(iVar10 + -0x6f0);
        auVar2._8_4_ = *(undefined4 *)(iVar10 + -0x378);
        auVar2._12_4_ = *(undefined4 *)(iVar10 + -0x1bc);
        auVar12 = VectorAdd(auVar2,auVar1,4);
        *(int *)(iVar10 + -0x6f0) = auVar12._0_4_;
        *(int *)(iVar10 + -0x534) = auVar12._4_4_;
        *(int *)(iVar10 + -0x378) = auVar12._8_4_;
        puVar8 = (undefined4 *)(iVar10 + -0x1bc);
        iVar10 = iVar10 + 0x6f0;
        *puVar8 = auVar12._12_4_;
      } while (iVar10 != iVar4);
      uVar5 = uVar3 & 0xfffffffc;
      if (uVar5 == uVar3) {
        return 0;
      }
    }
    iVar4 = uVar5 * 0x1bc;
    *(int *)(uVar9 + iVar4 + 0x19c) = *(int *)(uVar9 + iVar4 + 0x19c) + iVar7;
    if ((((int)(uVar5 + 1) < (int)uVar3) &&
        (iVar10 = uVar9 + iVar4 + 0x1bc, *(int *)(iVar10 + 0x19c) = *(int *)(iVar10 + 0x19c) + iVar7
        , (int)(uVar5 + 2) < (int)uVar3)) &&
       (iVar10 = uVar9 + iVar4 + 0x378, *(int *)(iVar10 + 0x19c) = *(int *)(iVar10 + 0x19c) + iVar7,
       (int)(uVar5 + 3) < (int)uVar3)) {
      iVar4 = uVar9 + iVar4 + 0x534;
      *(int *)(iVar4 + 0x19c) = *(int *)(iVar4 + 0x19c) + iVar7;
    }
  }
  return 0;
}



/* ===== FUN_000117c8 @ 000117c8 size=80 ===== */

undefined4 FUN_000117c8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xbc) + 0x10);
  iVar2 = *(int *)(*(int *)(param_1 + 0xbc) + 0x14);
  if (0 < iVar1) {
    iVar3 = iVar2;
    do {
      iVar4 = iVar3 + 0x1bc;
      if (*(int *)(iVar3 + 0x10c) - 1U < 3) {
        *(int **)(iVar3 + 0x1b4) = param_2;
        *(int *)(iVar3 + 0x198) = *param_2 + *(int *)(iVar3 + 0x19c);
      }
      iVar3 = iVar4;
    } while (iVar1 * 0x1bc + iVar2 != iVar4);
  }
  return 0;
}



/* ===== FUN_00011818 @ 00011818 size=188 ===== */

undefined4 FUN_00011818(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *__s1;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(int *)(param_1 + 0xbc) + 0x10);
  if (0 < iVar7) {
    iVar6 = 0;
    __s1 = *(char **)(*(int *)(param_1 + 0xbc) + 0x14);
    do {
      while (iVar1 = strcmp(__s1,param_2), iVar1 == 0) {
        puVar3 = *(undefined4 **)(param_2 + 0x1b4);
        iVar6 = iVar6 + 1;
        *(undefined4 **)(__s1 + 0x1b4) = puVar3;
        uVar4 = *puVar3;
        __s1[0x19c] = '\0';
        __s1[0x19d] = '\0';
        __s1[0x19e] = '\0';
        __s1[0x19f] = '\0';
        *(undefined4 *)(__s1 + 0x198) = uVar4;
        *(undefined8 *)(__s1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
        uVar4 = *(undefined4 *)(param_2 + 0x11c);
        uVar2 = *(undefined4 *)(param_2 + 0x120);
        uVar5 = *(undefined4 *)(param_2 + 0x124);
        *(undefined4 *)(__s1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
        *(undefined4 *)(__s1 + 0x11c) = uVar4;
        *(undefined4 *)(__s1 + 0x120) = uVar2;
        *(undefined4 *)(__s1 + 0x124) = uVar5;
        iVar7 = *(int *)(*(int *)(param_1 + 0xbc) + 0x10);
        __s1 = __s1 + 0x1bc;
        if (iVar7 <= iVar6) {
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
      __s1 = __s1 + 0x1bc;
    } while (iVar6 < iVar7);
  }
  return 0;
}



/* ===== FUN_000118d4 @ 000118d4 size=92 ===== */

undefined4 FUN_000118d4(int param_1,undefined4 *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *__s1;
  char *pcVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0xbc) + 0x10);
  pcVar3 = *(char **)(*(int *)(param_1 + 0xbc) + 0x14);
  if (0 < iVar5) {
    __s1 = pcVar3;
    do {
      iVar1 = strcmp(__s1,param_3);
      pcVar4 = __s1 + 0x1bc;
      if (iVar1 == 0) {
        *(undefined4 **)(__s1 + 0x1b4) = param_2;
        uVar2 = *param_2;
        __s1[0x19c] = '\0';
        __s1[0x19d] = '\0';
        __s1[0x19e] = '\0';
        __s1[0x19f] = '\0';
        *(undefined4 *)(__s1 + 0x198) = uVar2;
      }
      __s1 = pcVar4;
    } while (pcVar4 != pcVar3 + iVar5 * 0x1bc);
  }
  return 0;
}



/* ===== FUN_00011930 @ 00011930 size=208 ===== */

undefined4 FUN_00011930(int param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  char *__s1;
  char *__s1_00;
  char *unaff_r6;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xbc) + 0x10);
  __s1_00 = *(char **)(*(int *)(param_1 + 0xbc) + 0x14);
  if (0 < iVar4) {
    __s1 = __s1_00;
    do {
      iVar1 = strcmp(__s1,param_2);
      if (iVar1 == 0) {
        unaff_r6 = __s1;
      }
      __s1 = __s1 + 0x1bc;
    } while (__s1 != __s1_00 + iVar4 * 0x1bc);
    iVar1 = 0;
    do {
      while (iVar2 = strcmp(__s1_00,param_3), iVar2 == 0) {
        uVar5 = *(undefined4 *)(__s1_00 + 0x1ac);
        uVar3 = *(undefined4 *)(__s1_00 + 0x1b0);
        iVar1 = iVar1 + 1;
        memcpy(__s1_00,unaff_r6,0x1bc);
        *(undefined4 *)(__s1_00 + 0x1ac) = uVar5;
        *(undefined4 *)(__s1_00 + 0x1b0) = uVar3;
        memcpy(__s1_00,param_3,0xff);
        __s1_00 = __s1_00 + 0x1bc;
        iVar4 = *(int *)(*(int *)(param_1 + 0xbc) + 0x10);
        if (iVar4 <= iVar1) {
          return 0;
        }
      }
      iVar1 = iVar1 + 1;
      __s1_00 = __s1_00 + 0x1bc;
    } while (iVar1 < iVar4);
  }
  return 0;
}



/* ===== FUN_00011a00 @ 00011a00 size=276 ===== */

undefined4 FUN_00011a00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *__s2;
  char *__format;
  
  FUN_00014afc();
  iVar11 = *(int *)(param_1 + 0xbc);
  iVar12 = *(int *)(iVar11 + 0x18);
  iVar7 = DAT_00011b14 + 0x11a24;
  if (0 < iVar12) {
    iVar10 = 0;
    __s2 = (char *)(DAT_00011b18 + 0x11a44);
    __format = (char *)(DAT_00011b1c + 0x11a48);
LAB_00011a54:
    do {
      iVar9 = iVar10 * 0x168 + *(int *)(iVar11 + 0x1c);
      iVar1 = strcmp((char *)(iVar9 + 0x20),__s2);
      if (iVar1 == 0) {
        uVar2 = FUN_00014ac4(iVar9);
        iVar11 = FUN_00014b5c();
        if (iVar11 != 0) {
          puVar3 = (undefined4 *)FUN_00014b84();
          iVar10 = iVar10 + 1;
          puVar4 = malloc(0x14);
          uVar2 = *puVar3;
          uVar5 = puVar3[1];
          uVar6 = puVar3[2];
          uVar8 = puVar3[3];
          *(undefined4 **)(iVar9 + 0x158) = puVar4;
          iVar11 = *(int *)(param_1 + 0xbc);
          *puVar4 = uVar2;
          puVar4[1] = uVar5;
          puVar4[2] = uVar6;
          puVar4[3] = uVar8;
          iVar12 = *(int *)(iVar11 + 0x18);
          puVar4[4] = puVar3[4];
          if (iVar12 <= iVar10) break;
          goto LAB_00011a54;
        }
        iVar11 = FUN_000173e0(uVar2);
        if (-1 < iVar11) {
          fprintf((FILE *)**(undefined4 **)(iVar7 + DAT_00011b20),__format,iVar9);
        }
        iVar11 = *(int *)(param_1 + 0xbc);
        iVar12 = *(int *)(iVar11 + 0x18);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar12);
  }
  FUN_00014ba0();
  return 0;
}



/* ===== FUN_00011b24 @ 00011b24 size=112 ===== */

undefined4 FUN_00011b24(int param_1)

{
  int iVar1;
  void *__ptr;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *__s2;
  
  iVar4 = *(int *)(param_1 + 0xbc);
  iVar5 = *(int *)(iVar4 + 0x18);
  if (0 < iVar5) {
    iVar3 = 0;
    __s2 = (char *)(DAT_00011b94 + 0x11b50);
    do {
      iVar2 = iVar3 * 0x168 + *(int *)(iVar4 + 0x1c);
      iVar3 = iVar3 + 1;
      iVar1 = strcmp((char *)(iVar2 + 0x20),__s2);
      if ((iVar1 == 0) && (__ptr = *(void **)(iVar2 + 0x158), __ptr != (void *)0x0)) {
        free(__ptr);
        iVar4 = *(int *)(param_1 + 0xbc);
        iVar5 = *(int *)(iVar4 + 0x18);
      }
    } while (iVar3 < iVar5);
  }
  return 0;
}



/* ===== FUN_00011b98 @ 00011b98 size=260 ===== */

undefined4 FUN_00011b98(int *param_1)

{
  int iVar1;
  void *__ptr;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *__s2;
  
  iVar2 = DAT_00011c9c + 0x11bac;
  if (param_1 != (int *)0x0) {
    FUN_00013f80(*param_1,param_1 + 0x12);
    FUN_00013f80(*param_1,param_1 + 0x20);
    iVar2 = param_1[0x2f];
    iVar5 = *(int *)(iVar2 + 0x18);
    if (0 < iVar5) {
      iVar4 = 0;
      __s2 = (char *)(DAT_00011ca0 + 0x11be8);
      do {
        iVar3 = iVar4 * 0x168 + *(int *)(iVar2 + 0x1c);
        iVar4 = iVar4 + 1;
        iVar1 = strcmp((char *)(iVar3 + 0x20),__s2);
        if ((iVar1 == 0) && (__ptr = *(void **)(iVar3 + 0x158), __ptr != (void *)0x0)) {
          free(__ptr);
          iVar2 = param_1[0x2f];
          iVar5 = *(int *)(iVar2 + 0x18);
        }
      } while (iVar4 < iVar5);
    }
    FUN_000170a0(iVar2);
    if ((void *)param_1[0x30] != (void *)0x0) {
      free((void *)param_1[0x30]);
      param_1[0x30] = 0;
    }
    if (0 < *param_1) {
      FUN_00013b50();
    }
    free(param_1);
    return 0;
  }
  iVar5 = FUN_000173e0();
  if (iVar5 < 0) {
    return 0xffffffff;
  }
  fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00011ca4),(char *)(DAT_00011ca8 + 0x11c90),0);
  return 0xffffffff;
}



/* ===== FUN_00011cac @ 00011cac size=1240 ===== */

int FUN_00011cac(undefined4 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  void *__ptr;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *extraout_r12;
  undefined4 uVar15;
  int local_124;
  int local_118;
  int local_114;
  timeval *local_104;
  timeval local_fc [12];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  iVar6 = DAT_00012190 + 0x11cdc;
  memset(&local_98,0,0x68);
  if (*(int *)(param_1[0x2f] + 0x40) < 0x1002) {
    local_114 = 0;
    local_80 = *(undefined8 *)(param_1 + 0x1a);
    local_90 = CONCAT44(param_1[3],(undefined4)local_90);
    local_70 = param_1[0x1c];
    uStack_6c = param_1[0x1d];
    local_98 = DAT_00012188;
    FUN_00014118(*param_1,&local_98);
  }
  else {
    iVar2 = FUN_00017684();
    if (iVar2 < 4) {
      iVar11 = param_1[0x2f];
      iVar2 = *(int *)(iVar11 + 0x20);
      if (0 < iVar2) {
        iVar8 = 0;
        iVar9 = 0;
        pcVar10 = (char *)(DAT_00012194 + 0x11d2c);
        pcVar7 = (char *)(DAT_00012198 + 0x11d34);
        do {
          pcVar12 = (char *)(iVar8 * 0x30 + *(int *)(iVar11 + 0x24));
          iVar5 = strcmp(pcVar12,pcVar10);
          if (iVar5 == 0) {
            puVar3 = *(undefined4 **)(pcVar12 + 0x2c);
            local_80 = *(undefined8 *)(param_1 + 0x1a);
            if (*(int *)(pcVar12 + 0x28) < 2) {
              iVar5 = puVar3[1];
              uVar15 = *puVar3;
              puVar14 = extraout_r12;
            }
            else {
              iVar13 = param_1[0x31];
              iVar5 = iVar13 * 0xc;
              puVar14 = puVar3 + iVar13 * 3;
              uVar15 = puVar3[iVar13 * 3];
            }
            if (1 < *(int *)(pcVar12 + 0x28)) {
              iVar5 = puVar14[1];
            }
            if (*(int *)(pcVar12 + 0x24) == 0) {
              uVar4 = 1;
            }
            else {
              uVar4 = 5;
            }
            local_90 = CONCAT44(iVar5,uVar15);
            local_70 = param_1[0x1c];
            uStack_6c = param_1[0x1d];
            local_98 = CONCAT44(6000,uVar4);
            if (iVar5 != 0) {
              iVar2 = FUN_00014118(*param_1,&local_98);
              iVar9 = 0;
              if (iVar2 != 0) {
                iVar9 = FUN_00011288(param_1 + 0x12,param_1 + 0x2f,&local_98);
                goto LAB_00011dc8;
              }
              goto LAB_00011dd0;
            }
          }
          else {
            pcVar12 = (char *)(*(int *)(pcVar12 + 0x20) * 0x168 + *(int *)(iVar11 + 0x1c));
            iVar5 = strcmp(pcVar12,pcVar7);
            if (iVar5 == 0) {
              if (param_1[0x31] != 0) {
                iVar2 = FUN_000173e0();
                if (iVar2 < 0) {
                  return -1;
                }
                __ptr = (void *)(DAT_0001219c + 0x11e54);
LAB_00011e50:
                fwrite(__ptr,1,0x7c,(FILE *)**(undefined4 **)(iVar6 + DAT_000121a0));
                return -1;
              }
            }
            else {
              if (*(int *)(pcVar12 + 0x158) == 0) {
                return -1;
              }
              if (*(int *)(*(int *)(pcVar12 + 0x158) + 8) == 0) {
                return -1;
              }
              iVar9 = FUN_000113a4(param_1,pcVar12);
LAB_00011dc8:
              if (iVar9 < 0) {
                return iVar9;
              }
LAB_00011dd0:
              iVar11 = param_1[0x2f];
              iVar2 = *(int *)(iVar11 + 0x20);
            }
          }
          iVar8 = iVar8 + 1;
          if (iVar2 <= iVar8) {
            return iVar9;
          }
        } while( true );
      }
      local_114 = 0;
    }
    else {
      iVar2 = 0;
      pcVar7 = calloc(*(int *)(param_1[0x2f] + 0x18) * 0xfa + 0xfa,1);
      FUN_0002ae3c(0,0,pcVar7,0,0);
      uVar1 = DAT_00012188;
      iVar9 = param_1[0x2f];
      iVar11 = *(int *)(iVar9 + 0x18);
      if (iVar11 < 1) {
        local_118 = 0;
        local_114 = iVar2;
      }
      else {
        pcVar10 = (char *)(DAT_000121a4 + 0x11f34);
        local_118 = 0;
        local_124 = 0;
        local_114 = 0;
        do {
          pcVar12 = (char *)(iVar2 * 0x168 + *(int *)(iVar9 + 0x1c));
          iVar8 = strcmp(pcVar12,pcVar10);
          if ((iVar8 != 0) || (param_1[0x31] != 0)) {
            gettimeofday(local_fc,(__timezone_ptr_t)0x0);
            iVar9 = local_fc[0].tv_sec * 1000000 + local_fc[0].tv_usec;
            iVar11 = strcmp(pcVar12 + 0x20,(char *)(DAT_000121a8 + 0x12048));
            if (iVar11 == 0) {
              local_80 = *(undefined8 *)(param_1 + 0x1a);
              local_90 = *(undefined8 *)(pcVar12 + 0x15c);
              local_70 = param_1[0x1c];
              uStack_6c = param_1[0x1d];
              local_98 = uVar1;
              if ((*(int *)(pcVar12 + 0x160) != 0) &&
                 (local_114 = FUN_00014118(*param_1,&local_98), local_114 != 0)) {
                local_114 = FUN_00011288(param_1 + 0x12,param_1 + 0x2f,&local_98);
                goto LAB_00012098;
              }
            }
            else {
              iVar11 = strcmp(pcVar12,(char *)(DAT_000121ac + 0x12064));
              if (iVar11 == 0) {
                iVar2 = FUN_000173e0();
                if (iVar2 < 0) {
                  return -1;
                }
                __ptr = (void *)(DAT_000121b4 + 0x12168);
                goto LAB_00011e50;
              }
              if (*(int *)(pcVar12 + 0x158) == 0) {
                return -1;
              }
              if (*(int *)(*(int *)(pcVar12 + 0x158) + 8) == 0) {
                return -1;
              }
              local_114 = FUN_000113a4(param_1,pcVar12);
LAB_00012098:
              if (local_114 < 0) {
                return local_114;
              }
            }
            gettimeofday(local_fc,(__timezone_ptr_t)0x0);
            iVar9 = (local_fc[0].tv_sec * 1000000 + local_fc[0].tv_usec) - iVar9;
            local_118 = local_118 + iVar9;
            FUN_0002ae3c(*(undefined4 *)(param_1[0x2f] + 0x14),pcVar12,pcVar7,local_124,iVar9);
            iVar11 = FUN_00017684();
            if (4 < iVar11) {
              FUN_0002b4d0(*param_1,*(undefined4 *)(param_1[0x2f] + 0x14),pcVar12,local_124);
            }
            iVar9 = param_1[0x2f];
            iVar11 = *(int *)(iVar9 + 0x18);
            local_124 = local_124 + 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar11);
      }
      local_104 = local_fc;
      sprintf((char *)local_104,(char *)(DAT_000121b0 + 0x12114),local_118);
      strcat(pcVar7,(char *)local_104);
      FUN_00017404(pcVar7);
      free(pcVar7);
    }
  }
  return local_114;
}



/* ===== FUN_000121b8 @ 000121b8 size=392 ===== */

undefined4 FUN_000121b8(int param_1,int *param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar10;
  undefined8 uVar11;
  int local_48;
  uint *puVar9;
  
  uVar1 = param_2[1];
  iVar2 = *(int *)(param_1 + 0x48);
  if (0 < (int)uVar1) {
    uVar11 = VectorShiftRight(CONCAT44(param_4,param_4),0x20);
    uVar6 = 0;
    do {
      while (((param_5 == 0 || (*(int *)(param_1 + 0xc4) != 2)) || ((uVar6 & 1) != 0))) {
        iVar3 = (uVar6 + *param_2) * 0x28 + iVar2;
        iVar10 = *(int *)(iVar3 + 0x18);
        iVar3 = *(int *)(iVar3 + 0x20) - *(int *)(param_1 + 0x70);
        if (iVar10 == 0) break;
        uVar4 = param_2[2];
        puVar8 = (uint *)(iVar2 + iVar3 + -8);
        do {
          puVar9 = puVar8 + 2;
          uVar7 = *puVar9;
          if (-1 < (int)uVar4 && (uVar7 & 0xffff) == uVar4) {
            local_48 = (int)uVar11;
            uVar5 = (local_48 - *(int *)(param_1 + 0x70)) +
                    ((uVar7 >> 0x10 | puVar8[3] << 0x10) - param_3);
            *puVar9 = uVar5 * 0x10000 | uVar7 & 0xffff;
            puVar8[3] = uVar5 >> 0x10 | puVar8[3] & 0xffff0000;
          }
          puVar8 = puVar9;
        } while (puVar9 != (uint *)(iVar2 + -8 + iVar10 * 8 + iVar3));
        uVar6 = uVar6 + 1;
        if (uVar6 == uVar1) {
          return 0;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar1);
  }
  return 0;
}



/* ===== FUN_00012340 @ 00012340 size=344 ===== */

undefined4 FUN_00012340(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int local_40;
  uint *puVar9;
  
  iVar4 = (*(int **)(param_2 + 0x104))[1];
  iVar1 = *(int *)(param_1 + 0x48);
  if (0 < iVar4) {
    iVar2 = **(int **)(param_2 + 0x104);
    local_40 = iVar2 * 0x28 + iVar1;
    do {
      iVar3 = *(int *)(local_40 + 0x18);
      iVar5 = *(int *)(local_40 + 0x20) - *(int *)(param_1 + 0x70);
      if ((iVar3 != 0) && (iVar12 = *(int *)(param_2 + 0x108), 0 < iVar12)) {
        puVar10 = (uint *)(*(int *)(param_2 + 0x10c) + 8);
        puVar8 = (uint *)(iVar1 + iVar5 + -8);
        do {
          puVar9 = puVar8 + 2;
          uVar6 = *puVar9;
          uVar7 = puVar8[3];
          puVar11 = puVar10;
          do {
            if ((uVar6 & 0xffff) == puVar11[-2]) {
              uVar6 = uVar6 & 0xffff | *puVar11 << 0x10;
              uVar7 = uVar7 & 0xffff0000 | *puVar11 >> 0x10;
              *puVar9 = uVar6;
              puVar8[3] = uVar7;
            }
            puVar11 = puVar11 + 3;
          } while (puVar10 + iVar12 * 3 != puVar11);
          puVar8 = puVar9;
        } while ((uint *)(iVar1 + -8 + iVar3 * 8 + iVar5) != puVar9);
      }
      local_40 = local_40 + 0x28;
    } while ((iVar4 + iVar2) * 0x28 + iVar1 != local_40);
  }
  return 0;
}



/* ===== FUN_00012498 @ 00012498 size=488 ===== */

undefined4 FUN_00012498(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  int iVar15;
  undefined8 uVar16;
  int local_40;
  uint *puVar14;
  
  iVar3 = *(int *)(param_1[0x2f] + 0x10);
  if (0 < iVar3) {
    iVar8 = *(int *)(param_1[0x2f] + 0x14);
    iVar3 = iVar3 * 0x1bc + iVar8;
    uVar16 = VectorShiftRight(CONCAT44(param_2,param_2),0x20);
    do {
      while ((*(int *)(iVar8 + 0x10c) - 4U < 2 && (0 < *(int *)(iVar8 + 0x1ac)))) {
        piVar12 = *(int **)(iVar8 + 0x1b0);
        iVar9 = param_1[0x12];
        piVar4 = piVar12 + *(int *)(iVar8 + 0x1ac) * 3;
        do {
          iVar5 = piVar12[1];
          if (0 < iVar5) {
            iVar10 = *piVar12;
            iVar11 = iVar10 * 0x28 + iVar9;
            do {
              iVar6 = *(int *)(iVar11 + 0x18);
              iVar15 = *(int *)(iVar11 + 0x20) - param_1[0x1c];
              if (iVar6 != 0) {
                uVar7 = piVar12[2];
                puVar13 = (uint *)(iVar9 + iVar15 + -8);
                do {
                  puVar14 = puVar13 + 2;
                  uVar1 = *puVar14;
                  if (-1 < (int)uVar7 && (uVar1 & 0xffff) == uVar7) {
                    local_40 = (int)uVar16;
                    uVar2 = (local_40 - param_1[0x1c]) +
                            ((uVar1 >> 0x10 | puVar13[3] << 0x10) - param_3);
                    *puVar14 = uVar1 & 0xffff | uVar2 * 0x10000;
                    puVar13[3] = puVar13[3] & 0xffff0000 | uVar2 >> 0x10;
                  }
                  puVar13 = puVar14;
                } while (puVar14 != (uint *)(iVar9 + -8 + iVar6 * 8 + iVar15));
              }
              iVar11 = iVar11 + 0x28;
            } while ((iVar5 + iVar10) * 0x28 + iVar9 != iVar11);
          }
          piVar12 = piVar12 + 3;
        } while (piVar4 != piVar12);
        iVar8 = iVar8 + 0x1bc;
        if (iVar3 == iVar8) goto LAB_00012658;
      }
      iVar8 = iVar8 + 0x1bc;
    } while (iVar3 != iVar8);
  }
LAB_00012658:
  FUN_00014578(*param_1,param_1 + 0x12,0,param_1[0x13],1);
  return 0;
}



/* ===== FUN_00012680 @ 00012680 size=4024 ===== */

int * FUN_00012680(int *param_1,FILE *param_2,uint param_3,int param_4)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  size_t *psVar13;
  int *piVar14;
  uint uVar15;
  size_t sVar16;
  FILE *pFVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  uint uVar21;
  uint local_84;
  size_t *local_80;
  uint local_78;
  int local_68;
  int iStack_64;
  uint local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  size_t local_50;
  size_t local_4c;
  
  iVar10 = DAT_000129f0 + 0x126a4;
  if (param_1 == (int *)0x0) {
    sVar16 = fread(&local_68,1,8,param_2);
    if (sVar16 != 8) {
      iVar5 = FUN_000173e0();
      if (-1 < iVar5) {
        pFVar17 = (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88);
        iVar10 = ferror(param_2);
        pcVar8 = strerror(iVar10);
        fprintf(pFVar17,(char *)(DAT_00012e2c + 0x1303c),sVar16,8,pcVar8);
        return (int *)0x0;
      }
      return (int *)0x0;
    }
    if (iStack_64 == DAT_00012df4 && local_68 == DAT_00012df0) {
      sVar16 = fread(&local_60,1,8,param_2);
      if (sVar16 != 8) {
        iVar5 = FUN_000173e0();
        if (iVar5 < 0) {
          return (int *)0x0;
        }
        pFVar17 = (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88);
        iVar10 = ferror(param_2);
        pcVar8 = strerror(iVar10);
        fprintf(pFVar17,(char *)(DAT_00012e38 + 0x13100),sVar16,8,pcVar8);
        return (int *)0x0;
      }
      if (iStack_5c == 0 && local_60 < 0x1001) {
LAB_000129cc:
        iVar5 = FUN_000173e0();
        if (-1 < iVar5) {
          fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),(char *)(DAT_00012e08 + 0x12db8),
                  local_60,iStack_5c);
          return (int *)0x0;
        }
        return (int *)0x0;
      }
      sVar16 = fread(&local_58,1,8,param_2);
      if (sVar16 != 8) {
        iVar5 = FUN_000173e0();
        if (iVar5 < 0) {
          return (int *)0x0;
        }
        pFVar17 = (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88);
        iVar10 = ferror(param_2);
        pcVar8 = strerror(iVar10);
        fprintf(pFVar17,(char *)(DAT_00012e40 + 0x131f8),sVar16,8,pcVar8);
        return (int *)0x0;
      }
      sVar16 = fread(&local_50,1,0x28,param_2);
      if (sVar16 != 0x28) {
        iVar5 = FUN_000173e0();
        if (iVar5 < 0) {
          return (int *)0x0;
        }
        pFVar17 = (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88);
        iVar10 = ferror(param_2);
        pcVar8 = strerror(iVar10);
        fprintf(pFVar17,(char *)(DAT_00012e48 + 0x132a4),sVar16,0x28,pcVar8);
        return (int *)0x0;
      }
      piVar1 = calloc(0xd8,1);
      if (piVar1 == (int *)0x0) {
LAB_00012f90:
        iVar5 = FUN_000173e0();
        if (-1 < iVar5) {
          fwrite((void *)(DAT_00012e24 + 0x12fc0),1,0x2d,
                 (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88));
          return (int *)0x0;
        }
        return (int *)0x0;
      }
      sVar16 = fread(piVar1 + 1,1,0x40,param_2);
      if (sVar16 != 0x40) {
        iVar5 = FUN_000173e0();
        if (-1 < iVar5) {
          pFVar17 = (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88);
          iVar10 = ferror(param_2);
          pcVar8 = strerror(iVar10);
          fprintf(pFVar17,(char *)(DAT_00012e5c + 0x1347c),sVar16,0x40,pcVar8);
        }
        goto LAB_00012d3c;
      }
      uVar15 = piVar1[1];
      pvVar2 = calloc(uVar15 + 1,1);
      if (pvVar2 == (void *)0x0) goto LAB_00012fc8;
      sVar16 = fread(pvVar2,1,uVar15,param_2);
      if (sVar16 == uVar15) {
        local_80 = (size_t *)0x0;
        local_78 = 0;
LAB_00012798:
        pvVar3 = malloc((uVar15 >> 2) * 3 + 2);
        if (pvVar3 != (void *)0x0) {
          iVar5 = FUN_0002bf58(pvVar3,pvVar2,uVar15);
          if (iVar5 == -1) {
            iVar5 = FUN_000173e0();
            if (-1 < iVar5) {
              fwrite((void *)(DAT_00012e30 + 0x13074),1,0x26,
                     (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88));
            }
            free(pvVar2);
            free(pvVar3);
            goto LAB_00012d3c;
          }
          free(pvVar2);
          iVar5 = FUN_00015460(pvVar3);
          piVar1[0x2f] = iVar5;
          if (iVar5 == 0) {
            free(pvVar3);
            goto LAB_00012d3c;
          }
          free(pvVar3);
          iVar5 = FUN_00013c08();
          if (iVar5 < 0) {
            iVar9 = FUN_000173e0();
            if (-1 < iVar9) {
              fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                      (char *)(DAT_00012e0c + 0x12de8),iVar5);
            }
            goto LAB_00012d3c;
          }
          piVar14 = piVar1 + 0x12;
          iVar9 = piVar1[2] + piVar1[4];
          piVar1[0x32] = iVar9;
          *piVar1 = iVar5;
          piVar1[0x33] = iVar9 + piVar1[6];
          if (param_4 == 0) {
            iVar9 = iVar9 + piVar1[6] + piVar1[5];
            pvVar2 = (void *)FUN_000147b8(iVar5,iVar9,10,piVar14);
            if (pvVar2 == (void *)0x0) {
              iVar5 = FUN_000173e0();
              if (-1 < iVar5) {
                fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                        (char *)(DAT_00012e78 + 0x135d0),iVar9,10);
              }
              goto LAB_00012d3c;
            }
            sVar16 = piVar1[2];
            if (param_1 == (int *)0x0) {
              sVar4 = fread(pvVar2,1,sVar16,param_2);
              if (sVar16 != sVar4) {
                iVar5 = FUN_000173e0();
                if (-1 < iVar5) {
                  pFVar17 = (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88);
                  iVar10 = ferror(param_2);
                  pcVar8 = strerror(iVar10);
                  fprintf(pFVar17,(char *)(DAT_00012e44 + 0x1325c),sVar4,sVar16,pcVar8);
                }
                goto LAB_00012d3c;
              }
            }
            else {
              local_78 = local_78 + sVar16;
              if (param_3 < local_78) {
                iVar5 = FUN_000173e0();
                if (-1 < iVar5) {
                  fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                          (char *)(DAT_00012e50 + 0x1339c),param_3);
                }
                goto LAB_00012d3c;
              }
              memcpy(pvVar2,local_80,sVar16);
              local_80 = (size_t *)((int)local_80 + sVar16);
            }
            iVar9 = piVar1[3];
            if (iVar9 != 0) {
              uVar18 = piVar1[0x1c];
              iVar11 = piVar1[0x1d];
              uVar21 = piVar1[2];
              uVar15 = uVar18 + uVar21;
              pvVar3 = pvVar2;
              do {
                uVar12 = *(uint *)((int)pvVar3 + 0x20);
                pvVar6 = (void *)((int)pvVar3 + 0x28);
                *(uint *)((int)pvVar3 + 0x20) = uVar12 + uVar15;
                *(uint *)((int)pvVar3 + 0x24) =
                     *(int *)((int)pvVar3 + 0x24) + iVar11 + (uint)CARRY4(uVar18,uVar21) +
                     (uint)CARRY4(uVar12,uVar15);
                pvVar3 = pvVar6;
              } while (pvVar6 != (void *)(iVar9 * 0x28 + (int)pvVar2));
            }
            sVar16 = piVar1[4] + piVar1[6];
            if (param_1 == (int *)0x0) {
              sVar4 = fread((void *)((int)pvVar2 + piVar1[2]),1,sVar16,param_2);
              if (sVar16 != sVar4) {
                iVar5 = FUN_000173e0();
                if (-1 < iVar5) {
                  pFVar17 = (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88);
                  iVar10 = ferror(param_2);
                  pcVar8 = strerror(iVar10);
                  fprintf(pFVar17,(char *)(DAT_00012e54 + 0x13404),sVar4,sVar16,pcVar8);
                }
                goto LAB_00012d3c;
              }
            }
            else {
              local_78 = local_78 + sVar16;
              if (param_3 < local_78) {
                iVar5 = FUN_000173e0();
                if (-1 < iVar5) {
                  fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                          (char *)(DAT_00012e64 + 0x134e0),param_3);
                }
                goto LAB_00012d3c;
              }
              memcpy((void *)((int)pvVar2 + piVar1[2]),local_80,sVar16);
              local_80 = (size_t *)((int)local_80 + sVar16);
            }
            FUN_00014578(iVar5,piVar14,0,piVar1[0x13],1);
          }
          else {
            pvVar2 = (void *)FUN_000147b8(iVar5,iVar9,10,piVar14);
            if (pvVar2 == (void *)0x0) {
              iVar5 = FUN_000173e0();
              if (-1 < iVar5) {
                fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                        (char *)(DAT_00012e74 + 0x13594),iVar9,10);
              }
              goto LAB_00012d3c;
            }
            iVar9 = piVar1[6];
            pvVar3 = (void *)FUN_000147b8(iVar5,iVar9,10,piVar1 + 0x20);
            if (pvVar3 == (void *)0x0) {
              iVar5 = FUN_000173e0();
              if (-1 < iVar5) {
                fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                        (char *)(DAT_00012e7c + 0x13604),iVar9,10);
              }
              goto LAB_00012d3c;
            }
            sVar16 = piVar1[2];
            if (param_1 == (int *)0x0) {
              sVar4 = fread(pvVar2,1,sVar16,param_2);
              if (sVar16 != sVar4) {
                iVar5 = FUN_000173e0();
                if (-1 < iVar5) {
                  pFVar17 = (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88);
                  iVar10 = ferror(param_2);
                  pcVar8 = strerror(iVar10);
                  fprintf(pFVar17,(char *)(DAT_00012e84 + 0x13690),sVar4,sVar16,pcVar8);
                }
                goto LAB_00012d3c;
              }
              iVar9 = piVar1[3];
              if (iVar9 != 0) goto LAB_00012be4;
              sVar16 = piVar1[4];
              uVar15 = piVar1[2];
LAB_000132e4:
              sVar4 = fread((void *)((int)pvVar2 + uVar15),1,sVar16,param_2);
              if (sVar4 != sVar16) {
                iVar5 = FUN_000173e0();
                if (-1 < iVar5) {
                  pFVar17 = (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88);
                  iVar10 = ferror(param_2);
                  pcVar8 = strerror(iVar10);
                  fprintf(pFVar17,(char *)(DAT_00012e8c + 0x136d8),sVar4,sVar16,pcVar8);
                }
                goto LAB_00012d3c;
              }
              sVar4 = piVar1[6];
              sVar16 = fread(pvVar3,1,sVar4,param_2);
              if (sVar16 != sVar4) {
                iVar5 = FUN_000173e0();
                if (-1 < iVar5) {
                  pFVar17 = (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88);
                  iVar10 = ferror(param_2);
                  pcVar8 = strerror(iVar10);
                  fprintf(pFVar17,(char *)(DAT_00012e4c + 0x13368),sVar16,sVar4,pcVar8);
                }
                goto LAB_00012d3c;
              }
            }
            else {
              local_84 = local_78 + sVar16;
              if (param_3 < local_84) {
                iVar5 = FUN_000173e0();
                if (-1 < iVar5) {
                  fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                          (char *)(DAT_00012e60 + 0x134b0),param_3);
                }
                goto LAB_00012d3c;
              }
              psVar13 = (size_t *)((int)local_80 + sVar16);
              memcpy(pvVar2,local_80,sVar16);
              iVar9 = piVar1[3];
              local_80 = psVar13;
              local_78 = local_84;
              if (iVar9 == 0) {
                sVar16 = piVar1[4];
              }
              else {
LAB_00012be4:
                uVar21 = piVar1[0x1c];
                iVar11 = piVar1[0x1d];
                uVar15 = piVar1[2];
                uVar18 = uVar21 + uVar15;
                pvVar6 = pvVar2;
                do {
                  uVar12 = *(uint *)((int)pvVar6 + 0x20);
                  pvVar7 = (void *)((int)pvVar6 + 0x28);
                  *(uint *)((int)pvVar6 + 0x20) = uVar12 + uVar18;
                  *(uint *)((int)pvVar6 + 0x24) =
                       *(int *)((int)pvVar6 + 0x24) + iVar11 + (uint)CARRY4(uVar21,uVar15) +
                       (uint)CARRY4(uVar12,uVar18);
                  pvVar6 = pvVar7;
                } while ((void *)(iVar9 * 0x28 + (int)pvVar2) != pvVar7);
                sVar16 = piVar1[4];
                local_84 = local_78;
                if (param_1 == (int *)0x0) goto LAB_000132e4;
              }
              if (param_3 < sVar16 + local_84) {
                iVar5 = FUN_000173e0();
                if (-1 < iVar5) {
                  fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                          (char *)(DAT_00012e10 + 0x12eb8),param_3);
                }
                goto LAB_00012d3c;
              }
              pvVar6 = (void *)((int)local_80 + sVar16);
              memcpy((void *)((int)pvVar2 + piVar1[2]),local_80,sVar16);
              sVar4 = piVar1[6];
              local_78 = sVar16 + local_84 + sVar4;
              if (param_3 < local_78) {
                iVar5 = FUN_000173e0();
                if (-1 < iVar5) {
                  fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                          (char *)(DAT_00012e6c + 0x13530),param_3);
                }
                goto LAB_00012d3c;
              }
              local_80 = (size_t *)((int)pvVar6 + sVar4);
              memcpy(pvVar3,pvVar6,sVar4);
            }
            FUN_00012498(piVar1,piVar1[0x2a],piVar1[0x32]);
            piVar1[0x32] = piVar1[0x2a] - piVar1[0x1c];
            FUN_00014578(iVar5,piVar14,0,piVar1[0x13],1);
            FUN_00014578(iVar5,piVar1 + 0x20,0,piVar1[0x21],1);
          }
          if (param_1 == (int *)0x0) {
            sVar4 = fread(&local_50,1,8,param_2);
            sVar16 = local_50;
            if (sVar4 != 8) {
              iVar5 = FUN_000173e0();
              if (-1 < iVar5) {
                pFVar17 = (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88);
                iVar10 = ferror(param_2);
                pcVar8 = strerror(iVar10);
                fprintf(pFVar17,(char *)(DAT_00012e80 + 0x13648),sVar4,8,pcVar8);
              }
              goto LAB_00012d3c;
            }
            pvVar2 = calloc(local_50 + 1,1);
            if (pvVar2 != (void *)0x0) {
              piVar1[0x30] = (int)pvVar2;
              sVar4 = fread(pvVar2,1,sVar16,param_2);
              if (sVar4 == sVar16) {
                pvVar2 = (void *)piVar1[0x30];
                goto LAB_000129b0;
              }
              iVar5 = FUN_000173e0();
              if (-1 < iVar5) {
                pFVar17 = (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88);
                iVar10 = ferror(param_2);
                pcVar8 = strerror(iVar10);
                fprintf(pFVar17,(char *)(DAT_00012e3c + 0x131a4),sVar4,sVar16,pcVar8);
              }
              goto LAB_00012d3c;
            }
          }
          else {
            if (param_3 < local_78 + 8) {
              iVar5 = FUN_000173e0();
              if (iVar5 < 0) {
                return (int *)0x0;
              }
              pcVar8 = (char *)(DAT_00012e68 + 0x13508);
              goto LAB_00012d18;
            }
            sVar16 = *local_80;
            local_4c = local_80[1];
            local_50 = sVar16;
            pvVar2 = calloc(sVar16 + 1,1);
            if (pvVar2 != (void *)0x0) {
              piVar1[0x30] = (int)pvVar2;
              if (local_78 + 8 + sVar16 <= param_3) {
                memcpy(pvVar2,local_80 + 2,sVar16);
LAB_000129b0:
                free(pvVar2);
                piVar1[0x30] = 0;
                return piVar1;
              }
              iVar5 = FUN_000173e0();
              if (-1 < iVar5) {
                fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                        (char *)(DAT_00012e58 + 0x13438),param_3);
              }
              goto LAB_00012d3c;
            }
          }
          iVar5 = FUN_000173e0();
          if (-1 < iVar5) {
            fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                    (char *)(DAT_00012e70 + 0x13560),local_50,local_4c);
          }
          goto LAB_00012d3c;
        }
        iVar5 = FUN_000173e0();
        if (-1 < iVar5) {
          fwrite((void *)(DAT_00012e34 + 0x130b8),1,0x36,
                 (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88));
        }
      }
      else {
        iVar5 = FUN_000173e0();
        if (-1 < iVar5) {
          pFVar17 = (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88);
          iVar10 = ferror(param_2);
          pcVar8 = strerror(iVar10);
          fprintf(pFVar17,(char *)(DAT_00012e14 + 0x12efc),sVar16,uVar15,pcVar8);
        }
      }
LAB_00012f04:
      free(pvVar2);
LAB_00012d3c:
      FUN_00011b98(piVar1);
      return (int *)0x0;
    }
LAB_00012b1c:
    iVar5 = FUN_000173e0();
    if (iVar5 < 0) {
      return (int *)0x0;
    }
    fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),(char *)(DAT_00012df8 + 0x12b48),
            local_68,iStack_64);
  }
  else {
    if (param_3 < 8) {
      iVar5 = FUN_000173e0();
      if (iVar5 < 0) {
        return (int *)0x0;
      }
      pcVar8 = (char *)(DAT_00012dfc + 0x12d1c);
    }
    else {
      local_68 = *param_1;
      iStack_64 = param_1[1];
      if (iStack_64 != DAT_000129ec || local_68 != DAT_000129e8) goto LAB_00012b1c;
      if (param_3 < 0x10) {
        iVar5 = FUN_000173e0();
        if (iVar5 < 0) {
          return (int *)0x0;
        }
        pcVar8 = (char *)(DAT_00012e00 + 0x12d74);
      }
      else {
        local_60 = param_1[2];
        iStack_5c = param_1[3];
        if (iStack_5c == 0 && local_60 < 0x1001) goto LAB_000129cc;
        if (0x17 < param_3) {
          local_58 = param_1[4];
          iStack_54 = param_1[5];
          if (param_3 < 0x40) {
            iVar5 = FUN_000173e0();
            if (iVar5 < 0) {
              return (int *)0x0;
            }
            fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                    (char *)(DAT_00012e20 + 0x12f88),param_3);
            return (int *)0x0;
          }
          piVar1 = calloc(0xd8,1);
          if (piVar1 == (int *)0x0) goto LAB_00012f90;
          if (param_3 < 0x80) {
            iVar5 = FUN_000173e0();
            if (-1 < iVar5) {
              fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                      (char *)(DAT_00012e04 + 0x12d90),param_3);
            }
            goto LAB_00012d3c;
          }
          piVar14 = piVar1 + 1;
          piVar19 = param_1 + 0x10;
          do {
            piVar20 = piVar19 + 4;
            iVar5 = piVar19[1];
            iVar9 = piVar19[2];
            iVar11 = piVar19[3];
            *piVar14 = *piVar19;
            piVar14[1] = iVar5;
            piVar14[2] = iVar9;
            piVar14[3] = iVar11;
            piVar14 = piVar14 + 4;
            piVar19 = piVar20;
          } while (piVar20 != param_1 + 0x20);
          uVar15 = piVar1[1];
          pvVar2 = calloc(uVar15 + 1,1);
          if (pvVar2 != (void *)0x0) {
            local_78 = uVar15 + 0x80;
            if (local_78 <= param_3) {
              memcpy(pvVar2,param_1 + 0x20,uVar15);
              local_80 = (size_t *)((int)(param_1 + 0x20) + uVar15);
              goto LAB_00012798;
            }
            iVar5 = FUN_000173e0();
            if (-1 < iVar5) {
              fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),
                      (char *)(DAT_00012e18 + 0x12f38),param_3);
            }
            goto LAB_00012f04;
          }
LAB_00012fc8:
          iVar5 = FUN_000173e0();
          if (-1 < iVar5) {
            fwrite((void *)(DAT_00012e28 + 0x12ff4),1,0x2f,
                   (FILE *)**(undefined4 **)(iVar10 + DAT_00012e88));
          }
          goto LAB_00012d3c;
        }
        iVar5 = FUN_000173e0();
        if (iVar5 < 0) {
          return (int *)0x0;
        }
        pcVar8 = (char *)(DAT_00012e1c + 0x12f60);
      }
    }
LAB_00012d18:
    fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_00012e88),pcVar8,param_3);
  }
  return (int *)0x0;
}



/* ===== FUN_000136e4 @ 000136e4 size=604 ===== */

int FUN_000136e4(char *param_1,int param_2,uint param_3,undefined4 param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  FILE *__stream;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = FUN_00017684();
  iVar6 = DAT_00013940 + 0x13710;
  FUN_000173f0(uVar1 & ~((int)uVar1 >> 0x1f));
  iVar2 = FUN_000173e0();
  if (1 < iVar2) {
    fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00013944),(char *)(DAT_0001394c + 0x1373c),
            DAT_00013948 + 0x13738);
  }
  if (param_5 == 0) {
    if (param_1 == (char *)0x0) {
      iVar2 = FUN_000173e0();
      if (-1 < iVar2) {
        fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00013954),(char *)(DAT_00013964 + 0x13938),0);
        return 0;
      }
    }
    else {
      __stream = fopen(param_1,(char *)(DAT_00013950 + 0x13760));
      if (__stream != (FILE *)0x0) {
        fseek(__stream,0,2);
        uVar1 = ftell(__stream);
        if (param_6 == 0) {
          iVar2 = FUN_000173e0();
          if (2 < iVar2) {
            fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00013944),(char *)(DAT_0001395c + 0x138d0)
                    ,param_2,param_3,uVar1);
          }
          iVar2 = fseek(__stream,param_2,0);
          if ((iVar2 == -1) && (uVar1 < param_2 + param_3)) {
            iVar2 = FUN_000173e0();
            if (-1 < iVar2) {
              fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00013954),(char *)(DAT_00013958 + 80000)
                      ,param_1,param_2,param_3,uVar1);
            }
            fclose(__stream);
            return 0;
          }
        }
        else {
          fseek(__stream,0,0);
          param_3 = uVar1;
        }
        iVar2 = FUN_00012680(0,__stream,param_3,param_4);
        fclose(__stream);
        goto LAB_000137c0;
      }
      iVar2 = FUN_000173e0();
      if (-1 < iVar2) {
        fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00013954),(char *)(DAT_00013960 + 0x13914),
                param_1);
        return 0;
      }
    }
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00012680(param_1,0,param_3,param_4);
LAB_000137c0:
    iVar6 = *(int *)(*(int *)(iVar2 + 0xbc) + 0x10);
    iVar3 = *(int *)(*(int *)(iVar2 + 0xbc) + 0x14);
    if (0 < iVar6) {
      iVar4 = iVar3;
      do {
        iVar5 = iVar4 + 0x1bc;
        if (*(int *)(iVar4 + 0x10c) - 1U < 3) {
          *(int *)(iVar4 + 0x1b4) = iVar2 + 0x48;
          *(int *)(iVar4 + 0x198) = *(int *)(iVar2 + 0x48) + *(int *)(iVar4 + 0x19c);
        }
        iVar4 = iVar5;
      } while (iVar6 * 0x1bc + iVar3 != iVar5);
    }
    FUN_00011a00(iVar2);
    *(undefined1 *)(iVar2 + 0xd4) = 0;
  }
  return iVar2;
}



/* ===== FUN_00013968 @ 00013968 size=488 ===== */

undefined4 FUN_00013968(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  int iVar15;
  undefined8 uVar16;
  int local_40;
  uint *puVar14;
  
  iVar3 = *(int *)(param_1[0x2f] + 0x10);
  if (0 < iVar3) {
    iVar8 = *(int *)(param_1[0x2f] + 0x14);
    iVar3 = iVar3 * 0x1bc + iVar8;
    uVar16 = VectorShiftRight(CONCAT44(param_2,param_2),0x20);
    do {
      while ((*(int *)(iVar8 + 0x10c) - 1U < 3 && (0 < *(int *)(iVar8 + 0x1ac)))) {
        piVar12 = *(int **)(iVar8 + 0x1b0);
        iVar9 = param_1[0x12];
        piVar4 = piVar12 + *(int *)(iVar8 + 0x1ac) * 3;
        do {
          iVar5 = piVar12[1];
          if (0 < iVar5) {
            iVar10 = *piVar12;
            iVar11 = iVar10 * 0x28 + iVar9;
            do {
              iVar6 = *(int *)(iVar11 + 0x18);
              iVar15 = *(int *)(iVar11 + 0x20) - param_1[0x1c];
              if (iVar6 != 0) {
                uVar7 = piVar12[2];
                puVar13 = (uint *)(iVar9 + iVar15 + -8);
                do {
                  puVar14 = puVar13 + 2;
                  uVar1 = *puVar14;
                  if (-1 < (int)uVar7 && (uVar1 & 0xffff) == uVar7) {
                    local_40 = (int)uVar16;
                    uVar2 = (local_40 - param_1[0x1c]) +
                            ((uVar1 >> 0x10 | puVar13[3] << 0x10) - param_3);
                    *puVar14 = uVar1 & 0xffff | uVar2 * 0x10000;
                    puVar13[3] = puVar13[3] & 0xffff0000 | uVar2 >> 0x10;
                  }
                  puVar13 = puVar14;
                } while (puVar14 != (uint *)(iVar9 + -8 + iVar6 * 8 + iVar15));
              }
              iVar11 = iVar11 + 0x28;
            } while ((iVar5 + iVar10) * 0x28 + iVar9 != iVar11);
          }
          piVar12 = piVar12 + 3;
        } while (piVar4 != piVar12);
        iVar8 = iVar8 + 0x1bc;
        if (iVar3 == iVar8) goto LAB_00013b28;
      }
      iVar8 = iVar8 + 0x1bc;
    } while (iVar3 != iVar8);
  }
LAB_00013b28:
  FUN_00014578(*param_1,param_1 + 0x12,0,param_1[0x13],1);
  return 0;
}



/* ===== FUN_00013b50 @ 00013b50 size=156 ===== */

undefined4 FUN_00013b50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_18;
  
  iVar3 = DAT_00013bf8 + 0x13b68;
  if (param_1 < 1) {
    iVar1 = FUN_000173e0();
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0xffffffff;
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00013c00),(char *)(DAT_00013c04 + 0x13be4),
              param_1);
    }
  }
  else {
    local_18 = DAT_00013bf0;
    if (*(int *)(DAT_00013bfc + 0x13b78) == 0) {
      ioctl(param_1,0xc0087200,&local_18);
      close(param_1);
      return 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00013c08 @ 00013c08 size=616 ===== */

int FUN_00013c08(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *__file;
  uint uVar4;
  int iVar5;
  undefined8 local_20;
  
  __file = (char *)(DAT_00013e80 + 0x13c24);
  iVar5 = DAT_00013e84 + 0x13c28;
  iVar1 = open(__file,2);
  if (iVar1 < 1) {
    iVar1 = FUN_000173e0();
    if (iVar1 < 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
    }
    else {
      fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00013e9c),(char *)(DAT_00013ea0 + 0x13db0),
              __file);
      piVar3 = __errno_location();
      iVar1 = *piVar3;
    }
    return -iVar1;
  }
  local_20 = DAT_00013e70;
  *(undefined4 *)(DAT_00013e88 + 0x13c4c) = 0;
  ioctl(iVar1,0xc0087200,&local_20);
  local_20 = DAT_00013e78;
  iVar2 = ioctl(iVar1,0xc0087200,&local_20);
  if (iVar2 == 0) {
    uVar4 = local_20._4_4_;
    iVar2 = FUN_000173e0();
    if (1 < iVar2) {
      fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00013e90),(char *)(DAT_00013e94 + 0x13d10),
              uVar4 / 10000,(uVar4 % 10000) / 100,uVar4 % 100);
    }
    if (200 < uVar4) {
      if ((uVar4 < 0x192) && (iVar2 = FUN_000173e0(), 0 < iVar2)) {
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00013e90),(char *)(DAT_00013e98 + 0x13d6c),0,
                uVar4 / 100,uVar4 % 100,0,4,2);
      }
      *(uint *)(DAT_00013e8c + 0x13cb8) = uVar4;
      return iVar1;
    }
  }
  else {
    iVar2 = FUN_000173e0();
    if (iVar2 < 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00013e90),(char *)(DAT_00013ea4 + 0x13df4),0,0,0
             );
    }
  }
  iVar2 = FUN_000173e0();
  if (-1 < iVar2) {
    fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00013e9c),(char *)(DAT_00013ea8 + 0x13e54),
            DAT_00013eac + 0x13e5c,0,2,1,0,uVar4 / 100,uVar4 % 100);
  }
  FUN_00013b50(iVar1);
  return -1;
}



/* ===== FUN_00013eb0 @ 00013eb0 size=192 ===== */

undefined4 FUN_00013eb0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int in_r12;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_00013f70 + 0x13ecc;
  if (param_1 < 1) {
    iVar1 = FUN_000173e0();
    if (-1 < iVar1) {
      fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00013f78),(char *)(DAT_00013f7c + 0x13f60),
              param_1,param_2,param_3);
    }
  }
  else {
    if (param_3 == (undefined4 *)0x0) {
      local_14 = 0;
    }
    else {
      local_14 = *param_3;
    }
    if (*(int *)(DAT_00013f74 + 0x13ee0) == 0) {
      local_18 = param_2;
      in_r12 = ioctl(param_1,0xc0087200,&local_18);
    }
    if (in_r12 == 0) {
      if (param_3 == (undefined4 *)0x0) {
        return 0;
      }
      *param_3 = local_14;
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00013f80 @ 00013f80 size=380 ===== */

void FUN_00013f80(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  FILE *pFVar6;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar5 = DAT_000140fc + 0x13fa4;
  if (((param_2 != (undefined4 *)0x0 && 0 < param_1) && (0 < (int)param_2[6])) &&
     (*(int *)(DAT_00014100 + 0x13fc4) == 0)) {
    iVar1 = FUN_000173e0();
    if (2 < iVar1) {
      fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00014104),(char *)(DAT_00014108 + 0x14048),
              *param_2,param_2[0xb],param_2[10],param_2[0xb],param_2[8],param_2[9],param_2[1],
              param_2[2],param_2[6]);
    }
    iVar1 = munmap((void *)*param_2,param_2[1]);
    if ((iVar1 != 0) && (iVar1 = FUN_000173e0(), -1 < iVar1)) {
      pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_0001410c);
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      fprintf(pFVar6,(char *)(DAT_00014114 + 0x140f0),pcVar4);
    }
    local_28 = param_2[8];
    uStack_24 = param_2[9];
    local_30 = 0;
    iVar1 = ioctl(param_1,0xc0107204,&local_30);
    if ((iVar1 != 0) && (iVar2 = FUN_000173e0(), -1 < iVar2)) {
      pFVar6 = (FILE *)**(undefined4 **)(iVar5 + DAT_0001410c);
      piVar3 = __errno_location();
      iVar5 = *piVar3;
      pcVar4 = strerror(iVar5);
      fprintf(pFVar6,(char *)(DAT_00014110 + 0x140b4),iVar1,iVar5,pcVar4);
    }
    close(param_2[6]);
    return;
  }
  return;
}



/* ===== FUN_00014118 @ 00014118 size=188 ===== */

int FUN_00014118(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_000141d4 + 0x1413c;
  if (param_2 == 0 || param_1 < 1) {
    iVar2 = FUN_000173e0();
    if (-1 < iVar2) {
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_000141dc),(char *)(DAT_000141e0 + 0x141cc),
              param_1,param_2);
      return -1;
    }
  }
  else if (*(int *)(DAT_000141d8 + 0x14150) == 0) {
    iVar3 = ioctl(param_1,0xc0687201,param_2);
    if (-1 < iVar3) {
      return 0;
    }
    piVar1 = __errno_location();
    return -*piVar1;
  }
  return -1;
}



/* ===== FUN_000141e4 @ 000141e4 size=524 ===== */

undefined4
FUN_000141e4(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  ulong __request;
  undefined4 uVar5;
  FILE *__stream;
  int iVar6;
  
  iVar6 = DAT_000143f0 + 0x14204;
  if ((*param_6 == param_3) && (0 < param_6[0xc])) {
    param_6[0xc] = param_6[0xc] + 1;
    iVar2 = FUN_000173e0();
    if (2 < iVar2) {
      fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_000143f8),(char *)(DAT_000143fc + 0x14308),
              param_2,param_6[0xc]);
      return 0;
    }
LAB_000142b8:
    uVar5 = 0;
  }
  else {
    iVar2 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    if (*(int *)(DAT_000143f4 + 0x14224) == 0) {
      __request = 0xc0287202;
      if (*(uint *)(DAT_000143f4 + 0x14228) < 800) {
        __request = 0xc0207202;
      }
      iVar1 = ioctl(param_1,__request);
      if (iVar1 == 0) {
        *param_6 = param_3;
        param_6[1] = param_4;
        param_6[3] = 0;
        param_6[5] = 0;
        param_6[6] = param_2;
        param_6[7] = 0;
        param_6[2] = param_4;
        param_6[4] = param_2;
        param_6[8] = 0;
        param_6[9] = iVar2;
        param_6[10] = 0;
        param_6[0xb] = iVar2;
        param_6[0xc] = 1;
        iVar2 = FUN_000173e0();
        if (2 < iVar2) {
          fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_000143f8),(char *)(DAT_00014400 + 0x14358),
                  param_3,param_6[1],param_6[10],param_6[0xb],param_6[8],param_6[9],param_6[1],
                  param_6[2],param_6[6],param_6[0xc]);
          return 0;
        }
        goto LAB_000142b8;
      }
      iVar2 = FUN_000173e0();
      if (-1 < iVar2) {
        __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_00014404);
        piVar3 = __errno_location();
        iVar6 = *piVar3;
        pcVar4 = strerror(iVar6);
        fprintf(__stream,(char *)(DAT_0001440c + 0x143e0),iVar1,iVar6,pcVar4);
        return 0xffffffff;
      }
    }
    else {
      iVar2 = FUN_000173e0();
      if (-1 < iVar2) {
        fwrite((void *)(DAT_00014408 + 0x143a8),1,0x45,
               (FILE *)**(undefined4 **)(iVar6 + DAT_00014404));
        return 0xffffffff;
      }
    }
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ===== FUN_00014410 @ 00014410 size=332 ===== */

undefined4 FUN_00014410(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  FILE *__stream;
  undefined8 local_28;
  int local_20;
  int iStack_1c;
  
  iVar5 = DAT_00014560 + 0x14430;
  if (*(int *)(DAT_0001455c + 0x14420) == 0) {
    local_20 = param_2[8];
    iStack_1c = param_2[9];
    if (local_20 != 0 || iStack_1c != 0) {
      local_28 = 0;
      iVar1 = ioctl(param_1,0xc0107204,&local_28);
      if (iVar1 == 0) {
        iVar1 = FUN_000173e0();
        if (iVar1 < 3) {
          return 0;
        }
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00014564),(char *)(DAT_00014568 + 0x144c8),
                *param_2,param_2[9],param_2[10],param_2[0xb],param_2[8],param_2[9],param_2[1],
                param_2[2],param_2[6],param_2[4],param_2[0xc]);
        return 0;
      }
      iVar2 = FUN_000173e0();
      if (-1 < iVar2) {
        __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_0001456c);
        piVar3 = __errno_location();
        iVar5 = *piVar3;
        pcVar4 = strerror(iVar5);
        fprintf(__stream,(char *)(DAT_00014570 + 0x14518),iVar1,iVar5,pcVar4);
      }
    }
  }
  else {
    iVar1 = FUN_000173e0();
    if (-1 < iVar1) {
      fwrite((void *)(DAT_00014574 + 0x14554),1,0x47,(FILE *)**(undefined4 **)(iVar5 + DAT_0001456c)
            );
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00014578 @ 00014578 size=548 ===== */

undefined4 FUN_00014578(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  FILE *__stream;
  int iVar4;
  int unaff_r11;
  uint local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  iVar4 = DAT_0001479c + 0x145a8;
  if (param_1 < 1 || (param_2 == 0 || param_4 == 0)) {
    iVar1 = FUN_000173e0();
    if (-1 < iVar1) {
      fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_000147ac),(char *)(DAT_000147b0 + 0x1474c),
              param_1,param_2,param_3,param_4,param_5);
    }
  }
  else {
    if (*(int *)(param_2 + 0x20) == 0 && *(int *)(param_2 + 0x24) == 0) {
      return 0xffffffff;
    }
    if ((*(int *)(param_2 + 0x1c) == 0) && (0 < *(int *)(param_2 + 0x18))) {
      local_48 = (param_5 & 3) >> 1;
      if ((param_5 & 1) != 0) {
        local_48 = local_48 | 6;
      }
      param_4 = param_4 + 0x3f & 0xffffffc0;
      local_44 = 0;
      local_40 = param_3;
      local_3c = param_4;
      iVar1 = ioctl(*(int *)(param_2 + 0x18),0x40106202,&local_48);
      if (((iVar1 < 0) && (piVar2 = __errno_location(), 0 < *piVar2)) &&
         (iVar1 = FUN_000173e0(), 0 < iVar1)) {
        fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_000147a4),(char *)(DAT_000147a8 + 0x146f8),
                *(undefined4 *)(param_2 + 0x18),param_3,param_4);
      }
    }
    local_44 = *(int *)(DAT_000147a0 + 0x14624);
    local_38 = param_3;
    local_30 = param_4;
    if (local_44 == 0) {
      local_40 = *(undefined4 *)(param_2 + 0x20);
      local_3c = *(undefined4 *)(param_2 + 0x24);
      local_48 = param_5;
      local_34 = local_44;
      local_2c = local_44;
      unaff_r11 = ioctl(param_1,0xc0207205,&local_48);
    }
    else {
      if ((*(uint *)(param_2 + 0xc) & 2) == 0) {
        return 0;
      }
      local_40 = *(undefined4 *)(param_2 + 0x20);
      local_3c = *(undefined4 *)(param_2 + 0x24);
      local_48 = param_5;
      local_44 = 0;
      local_34 = 0;
      local_2c = 0;
    }
    if (unaff_r11 == 0) {
      return 0;
    }
    iVar1 = FUN_000173e0();
    if (-1 < iVar1) {
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_000147ac);
      piVar2 = __errno_location();
      iVar4 = *piVar2;
      pcVar3 = strerror(iVar4);
      fprintf(__stream,(char *)(DAT_000147b4 + 0x1478c),unaff_r11,iVar4,pcVar3);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000147b8 @ 000147b8 size=692 ===== */

void * FUN_000147b8(int param_1,size_t param_2,uint param_3,undefined4 *param_4)

{
  void *__s;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  ulong __request;
  FILE *pFVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int unaff_lr;
  undefined8 local_50;
  size_t local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar6 = DAT_00014a78 + 0x147e8;
  if (param_1 < 1 || (param_2 == 0 || param_4 == (undefined4 *)0x0)) {
    iVar7 = FUN_000173e0();
    if (-1 < iVar7) {
      fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00014a84),(char *)(DAT_00014a8c + 0x149d4),
              param_1,param_2,param_3,param_4);
      return (void *)0x0;
    }
  }
  else {
    iVar7 = *(int *)(DAT_00014a7c + 0x14808);
    if ((param_3 & 1) == 0) {
      local_50 = DAT_00014a70;
      if (iVar7 == 0) {
        unaff_lr = ioctl(param_1,0xc0087200,&local_50);
      }
      if ((unaff_lr == 0) && (local_50._4_4_ != 0)) {
        param_3 = param_3 | 1;
      }
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_50 = (ulonglong)param_3 << 0x20;
    local_44 = 0;
    if (iVar7 == 0) {
      __request = 0xc0287202;
      if (*(uint *)(DAT_00014a80 + 0x14854) < 800) {
        __request = 0xc0207202;
      }
      local_48 = param_2;
      uStack_34 = uStack_3c;
      uStack_2c = uStack_3c;
      iVar7 = ioctl(param_1,__request,&local_50);
      pvVar5 = (void *)0x0;
      if (iVar7 == 0) {
        __s = mmap((void *)0x0,param_2,3,1,(int)local_50,0);
        if (__s == (void *)0xffffffff) {
          iVar7 = FUN_000173e0();
          if (iVar7 < 0) {
            return (void *)0x0;
          }
          pFVar4 = (FILE *)**(undefined4 **)(iVar6 + DAT_00014a84);
          piVar2 = __errno_location();
          pcVar3 = strerror(*piVar2);
          fprintf(pFVar4,(char *)(DAT_00014a88 + 0x1499c),pcVar3);
        }
        else {
          memset(__s,0,param_2);
          *param_4 = __s;
          param_4[1] = param_2;
          param_4[3] = param_3;
          param_4[2] = local_48;
          param_4[6] = (int)local_50;
          param_4[8] = local_40;
          param_4[9] = uStack_3c;
          param_4[10] = local_38;
          param_4[0xb] = uStack_34;
          param_4[0xc] = 1;
          iVar7 = FUN_000173e0();
          if (2 < iVar7) {
            fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00014a90),(char *)(DAT_00014a94 + 0x14a14)
                    ,__s,param_4[1],param_4[10],param_4[0xb],param_4[8],param_4[9],param_4[1],
                    param_4[2],param_4[6]);
          }
          FUN_00014578(param_1,param_4,0,param_2,3);
          pvVar5 = __s;
        }
      }
      else {
        iVar1 = FUN_000173e0();
        if (iVar1 < 0) {
          return (void *)0x0;
        }
        pFVar4 = (FILE *)**(undefined4 **)(iVar6 + DAT_00014a84);
        piVar2 = __errno_location();
        iVar6 = *piVar2;
        pcVar3 = strerror(iVar6);
        fprintf(pFVar4,(char *)(DAT_00014a98 + 0x14a60),iVar7,iVar6,pcVar3);
      }
      return pvVar5;
    }
  }
  return (void *)0x0;
}



/* ===== FUN_00014ac4 @ 00014ac4 size=52 ===== */

undefined4 FUN_00014ac4(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp((char *)(DAT_00014af8 + 0x14adc),param_1);
  if (iVar1 != 0) {
    if (*param_1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  return 0;
}



/* ===== FUN_00014afc @ 00014afc size=92 ===== */

undefined4 FUN_00014afc(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  pvVar1 = calloc(0x14,1);
  puVar6 = (undefined4 *)(DAT_00014b58 + 0x14b1c);
  *puVar6 = pvVar1;
  puVar2 = (undefined4 *)FUN_0002bdd8();
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    uVar5 = puVar2[3];
    puVar6 = (undefined4 *)*puVar6;
    *puVar6 = *puVar2;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    puVar6[4] = 0;
  }
  return 0;
}



/* ===== FUN_00014b5c @ 00014b5c size=36 ===== */

bool FUN_00014b5c(int param_1)

{
  return *(int *)(param_1 * 0x14 + *(int *)(DAT_00014b80 + 0x14b6c) + 0x10) == 0;
}



/* ===== FUN_00014b84 @ 00014b84 size=24 ===== */

int FUN_00014b84(int param_1)

{
  return param_1 * 0x14 + *(int *)(DAT_00014b9c + 0x14b94);
}



/* ===== FUN_00014ba0 @ 00014ba0 size=12 ===== */

void FUN_00014ba0(void)

{
  free(*(void **)((int)&DAT_00014bac + DAT_00014bac));
  return;
}



/* ===== FUN_00014bb0 @ 00014bb0 size=2028 ===== */

undefined4 FUN_00014bb0(undefined4 param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  
  iVar11 = DAT_000153a0;
  iVar2 = FUN_0001d2e0(param_1,DAT_0001539c + 0x14bcc);
  iVar11 = iVar11 + 0x14bd4;
  iVar3 = FUN_0001fa98();
  if ((iVar3 == 0) || (*(char **)(iVar2 + 0x10) == (char *)0x0)) {
    iVar2 = FUN_000173e0();
    if (-1 < iVar2) {
      fwrite((void *)(DAT_00015448 + 0x15290),1,0x2f,
             (FILE *)**(undefined4 **)(iVar11 + DAT_00015414));
      return 0xffffffff;
    }
  }
  else {
    strncpy(param_2,*(char **)(iVar2 + 0x10),0xff);
    iVar2 = FUN_0001d2e0(param_1,DAT_000153a4 + 85000);
    iVar3 = FUN_0001fa98();
    if ((iVar3 == 0) || (pcVar9 = *(char **)(iVar2 + 0x10), pcVar9 == (char *)0x0)) {
      iVar2 = FUN_000173e0();
      if (-1 < iVar2) {
        fwrite((void *)(DAT_00015450 + 0x152f8),1,0x30,
               (FILE *)**(undefined4 **)(iVar11 + DAT_00015414));
        return 0xffffffff;
      }
    }
    else {
      iVar2 = strcmp(pcVar9,(char *)(DAT_000153a8 + 0x14c34));
      if (iVar2 == 0) {
        param_2[0x100] = '\0';
        param_2[0x101] = '\0';
        param_2[0x102] = '\0';
        param_2[0x103] = '\0';
      }
      else {
        iVar2 = strcmp(pcVar9,(char *)(DAT_000153cc + 0x14db8));
        if (iVar2 == 0) {
          param_2[0x100] = '\x01';
          param_2[0x101] = '\0';
          param_2[0x102] = '\0';
          param_2[0x103] = '\0';
        }
        else {
          iVar2 = strcmp(pcVar9,(char *)(DAT_000153d0 + 0x14dd8));
          if (iVar2 == 0) {
            param_2[0x100] = '\x02';
            param_2[0x101] = '\0';
            param_2[0x102] = '\0';
            param_2[0x103] = '\0';
          }
          else {
            iVar2 = strcmp(pcVar9,(char *)(DAT_000153d4 + 0x14df8));
            if (iVar2 == 0) {
              param_2[0x100] = '\x03';
              param_2[0x101] = '\0';
              param_2[0x102] = '\0';
              param_2[0x103] = '\0';
            }
            else {
              iVar2 = strcmp(pcVar9,(char *)(DAT_000153d8 + 0x14e18));
              if (iVar2 == 0) {
                param_2[0x100] = '\x04';
                param_2[0x101] = '\0';
                param_2[0x102] = '\0';
                param_2[0x103] = '\0';
              }
              else {
                iVar2 = strcmp(pcVar9,(char *)(DAT_000153dc + 0x14e38));
                if (iVar2 == 0) {
                  param_2[0x100] = '\x05';
                  param_2[0x101] = '\0';
                  param_2[0x102] = '\0';
                  param_2[0x103] = '\0';
                }
                else {
                  iVar2 = strcmp(pcVar9,(char *)(DAT_000153e0 + 0x14e58));
                  if (iVar2 == 0) {
                    param_2[0x100] = '\a';
                    param_2[0x101] = '\0';
                    param_2[0x102] = '\0';
                    param_2[0x103] = '\0';
                  }
                  else {
                    iVar2 = strcmp(pcVar9,(char *)(DAT_000153e4 + 0x14e78));
                    if (iVar2 == 0) {
                      uVar8 = 8;
                    }
                    else {
                      uVar8 = 9;
                    }
                    *(undefined4 *)(param_2 + 0x100) = uVar8;
                  }
                }
              }
            }
          }
        }
      }
      iVar2 = FUN_0001d2e0(param_1,DAT_000153ac + 0x14c50);
      iVar3 = FUN_0001fa98();
      if ((iVar3 == 0) || (pcVar9 = *(char **)(iVar2 + 0x10), pcVar9 == (char *)0x0)) {
        iVar2 = FUN_000173e0();
        if (-1 < iVar2) {
          fwrite((void *)(DAT_0001544c + 0x152c4),1,0x31,
                 (FILE *)**(undefined4 **)(iVar11 + DAT_00015414));
          return 0xffffffff;
        }
      }
      else {
        iVar2 = strcmp(pcVar9,(char *)(DAT_000153b0 + 0x14c7c));
        if (iVar2 == 0) {
          param_2[0x104] = '\0';
          param_2[0x105] = '\0';
          param_2[0x106] = '\0';
          param_2[0x107] = '\0';
        }
        else {
          iVar2 = strcmp(pcVar9,(char *)(DAT_000153e8 + 0x14e9c));
          if (iVar2 == 0) {
            param_2[0x104] = '\x01';
            param_2[0x105] = '\0';
            param_2[0x106] = '\0';
            param_2[0x107] = '\0';
          }
          else {
            iVar2 = strcmp(pcVar9,(char *)(DAT_000153ec + 0x14ebc));
            if (iVar2 == 0) {
              uVar8 = 2;
            }
            else {
              uVar8 = 3;
            }
            *(undefined4 *)(param_2 + 0x104) = uVar8;
          }
        }
        iVar2 = FUN_0001d2e0(param_1,DAT_000153b4 + 0x14c98);
        iVar3 = FUN_0001fa98();
        if ((iVar3 == 0) || (pcVar9 = *(char **)(iVar2 + 0x10), pcVar9 == (char *)0x0)) {
          iVar2 = FUN_000173e0();
          if (-1 < iVar2) {
            fwrite((void *)(DAT_00015454 + 0x1532c),1,0x31,
                   (FILE *)**(undefined4 **)(iVar11 + DAT_00015414));
            return 0xffffffff;
          }
        }
        else {
          iVar2 = strcmp(pcVar9,(char *)(DAT_000153b8 + 0x14cc4));
          if (iVar2 == 0) {
            param_2[0x108] = '\0';
            param_2[0x109] = '\0';
            param_2[0x10a] = '\0';
            param_2[0x10b] = '\0';
          }
          else {
            iVar2 = strcmp(pcVar9,(char *)(DAT_000153bc + 0x14ce0));
            if (iVar2 == 0) {
              param_2[0x108] = '\x01';
              param_2[0x109] = '\0';
              param_2[0x10a] = '\0';
              param_2[0x10b] = '\0';
            }
            else {
              iVar2 = strcmp(pcVar9,(char *)(DAT_000153c0 + 0x14d00));
              if (iVar2 == 0) {
                uVar8 = 2;
              }
              else {
                uVar8 = 3;
              }
              *(undefined4 *)(param_2 + 0x108) = uVar8;
            }
          }
          iVar2 = FUN_0001d2e0(param_1,DAT_000153c4 + 0x14d20);
          iVar3 = FUN_0001fa98();
          if (iVar3 != 0) {
            pcVar9 = *(char **)(iVar2 + 0x10);
            iVar2 = strcmp(pcVar9,(char *)(DAT_000153f0 + 0x14ee4));
            if (iVar2 == 0) {
              param_2[0x10c] = '\0';
              param_2[0x10d] = '\0';
              param_2[0x10e] = '\0';
              param_2[0x10f] = '\0';
            }
            else {
              iVar2 = strcmp(pcVar9,(char *)(DAT_000153f4 + 0x14f00));
              if (iVar2 == 0) {
                param_2[0x10c] = '\x01';
                param_2[0x10d] = '\0';
                param_2[0x10e] = '\0';
                param_2[0x10f] = '\0';
              }
              else {
                iVar2 = strcmp(pcVar9,(char *)(DAT_000153f8 + 0x14f20));
                if (iVar2 == 0) {
                  param_2[0x10c] = '\x02';
                  param_2[0x10d] = '\0';
                  param_2[0x10e] = '\0';
                  param_2[0x10f] = '\0';
                }
                else {
                  iVar2 = strcmp(pcVar9,(char *)(DAT_000153fc + 0x14f40));
                  if (iVar2 == 0) {
                    param_2[0x10c] = '\x03';
                    param_2[0x10d] = '\0';
                    param_2[0x10e] = '\0';
                    param_2[0x10f] = '\0';
                  }
                  else {
                    iVar2 = strcmp(pcVar9,(char *)(DAT_00015400 + 0x14f60));
                    if (iVar2 == 0) {
                      param_2[0x10c] = '\x04';
                      param_2[0x10d] = '\0';
                      param_2[0x10e] = '\0';
                      param_2[0x10f] = '\0';
                    }
                    else {
                      iVar2 = strcmp(pcVar9,(char *)(DAT_00015404 + 0x14f80));
                      if (iVar2 == 0) {
                        param_2[0x10c] = '\x05';
                        param_2[0x10d] = '\0';
                        param_2[0x10e] = '\0';
                        param_2[0x10f] = '\0';
                      }
                      else {
                        iVar2 = strcmp(pcVar9,(char *)(DAT_00015408 + 0x14fa0));
                        if (iVar2 == 0) {
                          param_2[0x10c] = '\x06';
                          param_2[0x10d] = '\0';
                          param_2[0x10e] = '\0';
                          param_2[0x10f] = '\0';
                        }
                        else {
                          iVar2 = strcmp(pcVar9,(char *)(DAT_0001540c + 0x14fc0));
                          if (iVar2 == 0) {
                            uVar8 = 7;
                          }
                          else {
                            uVar8 = 8;
                          }
                          *(undefined4 *)(param_2 + 0x10c) = uVar8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          iVar2 = FUN_0001d2e0(param_1,DAT_000153c8 + 0x14d40);
          param_2[0x110] = '\0';
          param_2[0x111] = '\0';
          param_2[0x112] = '\0';
          param_2[0x113] = '\0';
          if (iVar2 != 0) {
            piVar10 = *(int **)(iVar2 + 8);
            while (piVar10 != (int *)0x0) {
              iVar2 = FUN_0001fa80(piVar10);
              if (iVar2 == 0) {
                iVar2 = FUN_000173e0();
                if (iVar2 < 0) {
                  return 0xffffffff;
                }
                fwrite((void *)(DAT_00015444 + 0x1525c),1,0x30,
                       (FILE *)**(undefined4 **)(iVar11 + DAT_00015414));
                return 0xffffffff;
              }
              iVar2 = *(int *)(param_2 + 0x110);
              puVar1 = piVar10 + 5;
              piVar10 = (int *)*piVar10;
              *(undefined4 *)(param_2 + (iVar2 + 0x46) * 4) = *puVar1;
              *(int *)(param_2 + 0x110) = iVar2 + 1;
            }
          }
          iVar2 = FUN_0001d2e0(param_1,DAT_00015410 + 0x14fe4);
          param_2[0x114] = '\0';
          param_2[0x115] = '\0';
          param_2[0x116] = '\0';
          param_2[0x117] = '\0';
          if (iVar2 != 0) {
            piVar10 = *(int **)(iVar2 + 8);
            while (piVar10 != (int *)0x0) {
              iVar2 = FUN_0001fa80(piVar10);
              if (iVar2 == 0) {
                iVar2 = FUN_000173e0();
                if (iVar2 < 0) {
                  return 0xffffffff;
                }
                fwrite((void *)(DAT_00015418 + 0x15060),1,0x30,
                       (FILE *)**(undefined4 **)(iVar11 + DAT_00015414));
                return 0xffffffff;
              }
              iVar2 = *(int *)(param_2 + 0x114);
              puVar1 = piVar10 + 5;
              piVar10 = (int *)*piVar10;
              *(undefined4 *)(param_2 + (iVar2 + 0x56) * 4) = *puVar1;
              *(int *)(param_2 + 0x114) = iVar2 + 1;
            }
          }
          iVar3 = FUN_0001d2e0(param_1,DAT_0001541c + 0x1507c);
          iVar4 = FUN_0001fa80();
          iVar2 = DAT_00015420;
          if (iVar4 != 0) {
            *(undefined4 *)(param_2 + 0x19c) = *(undefined4 *)(iVar3 + 0x14);
            uVar8 = FUN_0001d2e0(param_1,iVar2 + 0x150a4);
            iVar2 = FUN_0001d2e0(uVar8,DAT_00015424 + 0x150b0);
            iVar3 = FUN_0001fa80();
            iVar4 = DAT_00015428 + 0x150c8;
            if (iVar3 != 0) {
              *(float *)(param_2 + 0x1a4) = (float)*(double *)(iVar2 + 0x18);
            }
            iVar2 = FUN_0001d2e0(uVar8,iVar4);
            iVar3 = FUN_0001fa80();
            iVar4 = DAT_0001542c + 0x150f0;
            if (iVar3 != 0) {
              *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)(iVar2 + 0x14);
            }
            iVar2 = FUN_0001d2e0(param_1,iVar4);
            iVar3 = FUN_0001fa80();
            iVar4 = DAT_00015430 + 0x15114;
            if (iVar3 != 0) {
              *(undefined4 *)(param_2 + 0x1b8) = *(undefined4 *)(iVar2 + 0x14);
            }
            iVar2 = FUN_0001d2e0(param_1,iVar4);
            iVar3 = FUN_0001fa80();
            if (iVar3 == 0) {
              iVar2 = *(int *)(param_2 + 0x1ac);
            }
            else {
              iVar2 = *(int *)(iVar2 + 0x14);
              *(int *)(param_2 + 0x1ac) = iVar2;
            }
            if (0 < iVar2) {
              pvVar5 = malloc(iVar2 * 0xc);
              *(void **)(param_2 + 0x1b0) = pvVar5;
              if (pvVar5 == (void *)0x0) {
                iVar2 = FUN_000173e0();
                if (iVar2 < 0) {
                  return 0xffffffff;
                }
                fwrite((void *)(DAT_0001545c + 0x15394),1,0x30,
                       (FILE *)**(undefined4 **)(iVar11 + DAT_00015414));
                return 0xffffffff;
              }
              iVar11 = FUN_0001d2e0(param_1,DAT_00015434 + 0x15174);
              if ((iVar11 != 0) && (piVar10 = *(int **)(iVar11 + 8), piVar10 != (int *)0x0)) {
                iVar11 = 0;
                iVar4 = DAT_00015438 + 0x151a0;
                iVar3 = DAT_0001543c + 0x151a4;
                iVar2 = DAT_00015440 + 0x151a8;
                do {
                  while( true ) {
                    iVar6 = FUN_0001d2e0(piVar10,iVar4);
                    iVar7 = FUN_0001fa80();
                    if (iVar7 != 0) {
                      *(undefined4 *)(*(int *)(param_2 + 0x1b0) + iVar11) =
                           *(undefined4 *)(iVar6 + 0x14);
                    }
                    iVar6 = FUN_0001d2e0(piVar10,iVar3);
                    iVar7 = FUN_0001fa80();
                    if (iVar7 != 0) {
                      *(undefined4 *)(*(int *)(param_2 + 0x1b0) + iVar11 + 4) =
                           *(undefined4 *)(iVar6 + 0x14);
                    }
                    iVar6 = FUN_0001d2e0(piVar10,iVar2);
                    iVar7 = FUN_0001fa80();
                    piVar10 = (int *)*piVar10;
                    if (iVar7 == 0) break;
                    iVar7 = *(int *)(param_2 + 0x1b0) + iVar11;
                    iVar11 = iVar11 + 0xc;
                    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar6 + 0x14);
                    if (piVar10 == (int *)0x0) {
                      return 0;
                    }
                  }
                  iVar11 = iVar11 + 0xc;
                } while (piVar10 != (int *)0x0);
              }
            }
            return 0;
          }
          iVar2 = FUN_000173e0();
          if (-1 < iVar2) {
            fwrite((void *)(DAT_00015458 + 0x15360),1,0x31,
                   (FILE *)**(undefined4 **)(iVar11 + DAT_00015414));
            return 0xffffffff;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00015460 @ 00015460 size=6768 ===== */

int * FUN_00015460(undefined4 param_1)

{
  int *piVar1;
  int *__ptr;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  FILE *__stream;
  int *piVar19;
  char *pcVar20;
  int iVar21;
  size_t sVar22;
  
  iVar18 = DAT_00016414;
  __ptr = calloc(0x4c,1);
  iVar18 = iVar18 + 0x15484;
  if (__ptr == (int *)0x0) {
    iVar2 = FUN_000173e0();
    if (iVar2 < 0) {
      return (int *)0x0;
    }
    fwrite((void *)(DAT_00016438 + 0x156f8),1,0x2a,(FILE *)**(undefined4 **)(iVar18 + DAT_000165dc))
    ;
    return (int *)0x0;
  }
  iVar2 = FUN_0001cd1c(param_1);
  if (iVar2 == 0) {
    iVar5 = FUN_000173e0();
    if (-1 < iVar5) {
      __stream = (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc);
      uVar12 = FUN_0001be9c();
      fprintf(__stream,(char *)(DAT_0001643c + 0x15728),uVar12);
    }
  }
  else {
    iVar3 = FUN_0001d2e0(iVar2,DAT_00016418 + 0x154a4);
    iVar4 = FUN_0001fa80();
    iVar5 = DAT_0001641c;
    if (iVar4 == 0) {
      iVar5 = FUN_000173e0();
      if (-1 < iVar5) {
        fwrite((void *)(DAT_00016430 + 0x15698),1,0x31,
               (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
      }
    }
    else {
      __ptr[0x10] = *(int *)(iVar3 + 0x14);
      iVar5 = FUN_0001d2e0(iVar2,iVar5 + 0x154cc);
      iVar3 = FUN_0001fa80();
      if (iVar3 == 0) {
        iVar5 = FUN_000173e0();
        if (-1 < iVar5) {
          fwrite((void *)(DAT_00016434 + 0x156c8),1,0x2d,
                 (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
        }
      }
      else {
        iVar5 = *(int *)(iVar5 + 0x14);
        *__ptr = iVar5;
        pvVar6 = calloc(iVar5 * 0x1bc,1);
        __ptr[1] = (int)pvVar6;
        if (pvVar6 == (void *)0x0) {
          iVar5 = FUN_000173e0();
          if (-1 < iVar5) {
            fwrite((void *)(DAT_0001644c + 0x1586c),1,0x2a,
                   (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
          }
        }
        else {
          iVar5 = FUN_0001d2e0(iVar2,DAT_00016420 + 0x15510);
          if ((iVar5 == 0) || (piVar19 = *(int **)(iVar5 + 8), piVar19 == (int *)0x0)) {
LAB_0001558c:
            iVar5 = FUN_0001d2e0(iVar2,DAT_00016424 + 0x1559c);
            iVar3 = FUN_0001fa80();
            if (iVar3 == 0) {
              iVar5 = FUN_000173e0();
              if (-1 < iVar5) {
                fwrite((void *)(DAT_00016454 + 0x158cc),1,0x2e,
                       (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
              }
            }
            else {
              iVar5 = *(int *)(iVar5 + 0x14);
              __ptr[2] = iVar5;
              pvVar6 = calloc(iVar5 * 0x1bc,1);
              __ptr[3] = (int)pvVar6;
              if (pvVar6 == (void *)0x0) {
                iVar5 = FUN_000173e0();
                if (-1 < iVar5) {
                  fwrite((void *)(DAT_00016478 + 0x15b60),1,0x2b,
                         (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                }
              }
              else {
                iVar5 = FUN_0001d2e0(iVar2,DAT_00016428 + 0x155e0);
                if ((iVar5 == 0) || (piVar19 = *(int **)(iVar5 + 8), piVar19 == (int *)0x0)) {
LAB_00015734:
                  if (0x1001 < __ptr[0x10]) {
                    iVar5 = DAT_00016440 + 0x15760;
                    __ptr[2] = __ptr[2] / 3;
                    iVar5 = FUN_0001d2e0(iVar2,iVar5);
                    iVar3 = FUN_0001fa80();
                    if (iVar3 == 0) {
                      iVar5 = FUN_0001d2e0(iVar2,DAT_00016444 + 0x1578c);
                      iVar3 = FUN_0001fa80();
                      if (iVar3 == 0) {
                        iVar5 = FUN_000173e0();
                        if (-1 < iVar5) {
                          fwrite((void *)(DAT_000164f4 + 0x161e0),1,0x37,
                                 (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                        }
                        goto LAB_0001556c;
                      }
                    }
                    iVar5 = *(int *)(iVar5 + 0x14);
                    __ptr[4] = iVar5;
                    pvVar6 = calloc(iVar5 * 0x1bc,1);
                    __ptr[5] = (int)pvVar6;
                    if (pvVar6 == (void *)0x0) {
                      iVar5 = FUN_000173e0();
                      if (-1 < iVar5) {
                        fwrite((void *)(DAT_000164e4 + 0x16104),1,0x34,
                               (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                      }
                      goto LAB_0001556c;
                    }
                    iVar5 = FUN_0001d2e0(iVar2,DAT_00016448 + 0x157d0);
                    iVar3 = FUN_0001fab0();
                    if (iVar3 == 0) {
                      iVar5 = FUN_0001d2e0(iVar2,DAT_00016480 + 89000);
                    }
                    if ((iVar5 != 0) && (piVar19 = *(int **)(iVar5 + 8), piVar19 != (int *)0x0)) {
                      if (0 < __ptr[4]) {
                        iVar5 = 0;
                        do {
                          iVar3 = FUN_00014bb0(piVar19,iVar5 * 0x1bc + __ptr[5]);
                          iVar5 = iVar5 + 1;
                          if (iVar3 != 0) goto LAB_0001556c;
                          piVar19 = (int *)*piVar19;
                          if (piVar19 == (int *)0x0) goto LAB_000158d4;
                        } while (iVar5 < __ptr[4]);
                      }
                      iVar5 = FUN_000173e0();
                      if (-1 < iVar5) {
                        fwrite((void *)(DAT_0001647c + 0x15b90),1,0x34,
                               (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                      }
                      goto LAB_0001556c;
                    }
                  }
LAB_000158d4:
                  iVar5 = FUN_0001d2e0(iVar2,DAT_00016458 + 0x158e4);
                  iVar3 = FUN_0001fa80();
                  if (iVar3 == 0) {
                    iVar5 = FUN_000173e0();
                    if (-1 < iVar5) {
                      fwrite((void *)(DAT_000164bc + 0x15f54),1,0x30,
                             (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                    }
                  }
                  else {
                    iVar5 = *(int *)(iVar5 + 0x14);
                    __ptr[6] = iVar5;
                    pvVar6 = calloc(iVar5 * 0x168,1);
                    __ptr[7] = (int)pvVar6;
                    if (pvVar6 == (void *)0x0) {
                      iVar5 = FUN_000173e0();
                      if (-1 < iVar5) {
                        fwrite((void *)(DAT_000164e8 + 0x16134),1,0x2d,
                               (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                      }
                    }
                    else {
                      iVar5 = FUN_0001d2e0(iVar2,DAT_0001645c + 0x15928);
                      if ((iVar5 == 0) || (piVar19 = *(int **)(iVar5 + 8), piVar19 == (int *)0x0)) {
LAB_00015bb8:
                        if (0x1001 < __ptr[0x10]) {
                          iVar5 = FUN_0001d2e0(iVar2,DAT_00016484 + 0x15bd8);
                          iVar3 = FUN_0001fa80();
                          if (iVar3 == 0) {
                            iVar5 = FUN_000173e0();
                            if (-1 < iVar5) {
                              fwrite((void *)(DAT_0001659c + 0x16d3c),1,0x2f,
                                     (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                            }
                            goto LAB_0001556c;
                          }
                          iVar5 = *(int *)(iVar5 + 0x14);
                          __ptr[8] = iVar5;
                          pvVar6 = calloc(iVar5 * 0x30,1);
                          __ptr[9] = (int)pvVar6;
                          if (pvVar6 == (void *)0x0) {
                            iVar5 = FUN_000173e0();
                            if (-1 < iVar5) {
                              fwrite((void *)(DAT_000165b4 + 0x16e84),1,0x2a,
                                     (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                            }
                            goto LAB_0001556c;
                          }
                          iVar5 = FUN_0001d2e0(iVar2,DAT_00016488 + 0x15c1c);
                          if (iVar5 != 0) {
                            iVar8 = 0;
                            iVar3 = DAT_0001648c + 0x15c38;
                            iVar4 = DAT_00016490 + 0x15c48;
                            iVar21 = DAT_00016494 + 0x15c54;
                            iVar7 = DAT_00016498 + 0x15c60;
                            for (piVar19 = *(int **)(iVar5 + 8); piVar19 != (int *)0x0;
                                piVar19 = (int *)*piVar19) {
                              pcVar20 = (char *)(iVar8 * 0x30 + __ptr[9]);
                              if (__ptr[8] <= iVar8) {
                                iVar5 = FUN_000173e0();
                                if (-1 < iVar5) {
                                  fwrite((void *)(DAT_000165c4 + 0x16f54),1,0x2c,
                                         (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                }
                                goto LAB_0001556c;
                              }
                              iVar5 = FUN_0001d2e0(piVar19,iVar3);
                              iVar9 = FUN_0001fa98();
                              if ((iVar9 == 0) || (*(char **)(iVar5 + 0x10) == (char *)0x0)) {
                                iVar5 = FUN_000173e0();
                                if (-1 < iVar5) {
                                  fwrite((void *)(DAT_000165c0 + 0x16f20),1,0x32,
                                         (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                }
                                goto LAB_0001556c;
                              }
                              strcpy(pcVar20,*(char **)(iVar5 + 0x10));
                              iVar9 = FUN_0001d2e0(piVar19,iVar4);
                              iVar10 = FUN_0001fa80();
                              iVar5 = DAT_0001649c;
                              if (iVar10 == 0) {
                                iVar5 = FUN_000173e0();
                                if (-1 < iVar5) {
                                  fwrite((void *)(DAT_000165bc + 0x16eec),1,0x31,
                                         (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                }
                                goto LAB_0001556c;
                              }
                              *(undefined4 *)(pcVar20 + 0x20) = *(undefined4 *)(iVar9 + 0x14);
                              iVar9 = FUN_0001d2e0(piVar19,iVar5 + 0x15ce4);
                              iVar10 = FUN_0001fa80();
                              iVar5 = DAT_000164a0;
                              if (iVar10 == 0) {
                                iVar5 = FUN_000173e0();
                                if (-1 < iVar5) {
                                  fwrite((void *)(DAT_000165b8 + 0x16eb8),1,0x34,
                                         (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                }
                                goto LAB_0001556c;
                              }
                              *(undefined4 *)(pcVar20 + 0x24) = *(undefined4 *)(iVar9 + 0x14);
                              iVar5 = FUN_0001d2e0(piVar19,iVar5 + 0x15d0c);
                              iVar9 = FUN_0001fa80();
                              if (iVar9 == 0) {
                                iVar5 = FUN_000173e0();
                                if (-1 < iVar5) {
                                  fwrite((void *)(DAT_000165cc + 0x16fc8),1,0x38,
                                         (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                }
                                goto LAB_0001556c;
                              }
                              sVar22 = *(int *)(iVar5 + 0x14) * 0xc;
                              *(int *)(pcVar20 + 0x28) = *(int *)(iVar5 + 0x14);
                              pvVar6 = malloc(sVar22);
                              *(void **)(pcVar20 + 0x2c) = pvVar6;
                              if (pvVar6 == (void *)0x0) {
                                iVar5 = FUN_000173e0();
                                if (-1 < iVar5) {
                                  fwrite((void *)(DAT_000165c8 + 0x16f94),1,0x2d,
                                         (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                }
                                goto LAB_0001556c;
                              }
                              memset(pvVar6,0,sVar22);
                              iVar5 = FUN_0001d2e0(piVar19,DAT_000164a4 + 0x15d5c);
                              if ((iVar5 != 0) &&
                                 (piVar17 = *(int **)(iVar5 + 8), piVar17 != (int *)0x0)) {
                                iVar5 = 0;
                                iVar9 = DAT_000164a8 + 0x15d80;
                                do {
                                  iVar10 = FUN_0001d2e0(piVar17,iVar9);
                                  iVar11 = FUN_0001fa80();
                                  if (iVar11 == 0) {
                                    iVar5 = FUN_000173e0();
                                    if (-1 < iVar5) {
                                      fwrite((void *)(DAT_000164ac + 0x15e48),1,0x2e,
                                             (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                    }
                                    goto LAB_0001556c;
                                  }
                                  *(undefined4 *)(*(int *)(pcVar20 + 0x2c) + iVar5) =
                                       *(undefined4 *)(iVar10 + 0x14);
                                  iVar10 = FUN_0001d2e0(piVar17,iVar21);
                                  iVar11 = FUN_0001fa80();
                                  if (iVar11 == 0) {
                                    iVar5 = FUN_000173e0(piVar17,iVar7);
                                    if (-1 < iVar5) {
                                      fwrite((void *)(DAT_000165d4 + 0x17030),1,0x2f,
                                             (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                    }
                                    goto LAB_0001556c;
                                  }
                                  *(undefined4 *)(*(int *)(pcVar20 + 0x2c) + iVar5 + 4) =
                                       *(undefined4 *)(iVar10 + 0x14);
                                  iVar10 = FUN_0001d2e0();
                                  iVar11 = FUN_0001fa80();
                                  if (iVar11 == 0) {
                                    iVar5 = FUN_000173e0();
                                    if (-1 < iVar5) {
                                      fwrite((void *)(DAT_000165d0 + 0x16ffc),1,0x2f,
                                             (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                    }
                                    goto LAB_0001556c;
                                  }
                                  piVar17 = (int *)*piVar17;
                                  iVar11 = *(int *)(pcVar20 + 0x2c) + iVar5;
                                  iVar5 = iVar5 + 0xc;
                                  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar10 + 0x14);
                                } while (piVar17 != (int *)0x0);
                              }
                              iVar8 = iVar8 + 1;
                            }
                          }
                        }
                        iVar5 = FUN_0001d2e0(iVar2,DAT_000164f8 + 0x161fc);
                        iVar3 = FUN_0001fa98();
                        if ((iVar3 == 0) ||
                           (pcVar20 = *(char **)(iVar5 + 0x10), pcVar20 == (char *)0x0)) {
                          iVar5 = FUN_000173e0();
                          if (-1 < iVar5) {
                            fwrite((void *)(DAT_00016598 + 0x16d0c),1,0x32,
                                   (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                          }
                        }
                        else {
                          sVar22 = strlen(pcVar20);
                          pcVar13 = malloc(sVar22 + 1);
                          __ptr[10] = (int)pcVar13;
                          strcpy(pcVar13,pcVar20);
                          iVar5 = FUN_0001d2e0(iVar2,DAT_000164fc + 0x16244);
                          iVar3 = FUN_0001fa98();
                          if ((iVar3 == 0) ||
                             (pcVar20 = *(char **)(iVar5 + 0x10), pcVar20 == (char *)0x0)) {
                            iVar5 = FUN_000173e0();
                            if (-1 < iVar5) {
                              fwrite((void *)(DAT_00016594 + 0x16cdc),1,0x34,
                                     (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                            }
                          }
                          else {
                            sVar22 = strlen(pcVar20);
                            pcVar13 = malloc(sVar22 + 1);
                            __ptr[0xb] = (int)pcVar13;
                            strcpy(pcVar13,pcVar20);
                            iVar5 = FUN_0001d2e0(iVar2,DAT_00016500 + 0x1628c);
                            iVar3 = FUN_0001fa98();
                            if ((iVar3 == 0) ||
                               (pcVar20 = *(char **)(iVar5 + 0x10), pcVar20 == (char *)0x0)) {
                              iVar5 = FUN_000173e0();
                              if (-1 < iVar5) {
                                fwrite((void *)(DAT_00016590 + 0x16cac),1,0x31,
                                       (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                              }
                            }
                            else {
                              sVar22 = strlen(pcVar20);
                              pcVar13 = malloc(sVar22 + 1);
                              __ptr[0xc] = (int)pcVar13;
                              strcpy(pcVar13,pcVar20);
                              iVar5 = FUN_0001d2e0(iVar2,DAT_00016504 + 0x162d4);
                              iVar3 = FUN_0001fa98();
                              if ((iVar3 == 0) ||
                                 (pcVar20 = *(char **)(iVar5 + 0x10), pcVar20 == (char *)0x0)) {
                                iVar5 = FUN_000173e0();
                                if (-1 < iVar5) {
                                  fwrite((void *)(DAT_00016584 + 0x16c1c),1,0x2a,
                                         (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                }
                              }
                              else {
                                sVar22 = strlen(pcVar20);
                                pcVar13 = malloc(sVar22 + 1);
                                __ptr[0xd] = (int)pcVar13;
                                strcpy(pcVar13,pcVar20);
                                iVar5 = FUN_0001d2e0(iVar2,DAT_00016508 + 0x1631c);
                                iVar3 = FUN_0001fa98();
                                if ((iVar3 == 0) ||
                                   (pcVar20 = *(char **)(iVar5 + 0x10), pcVar20 == (char *)0x0)) {
                                  iVar5 = FUN_000173e0();
                                  if (-1 < iVar5) {
                                    fwrite((void *)(DAT_00016580 + 0x16bec),1,0x33,
                                           (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                  }
                                }
                                else {
                                  sVar22 = strlen(pcVar20);
                                  pcVar13 = malloc(sVar22 + 1);
                                  __ptr[0xe] = (int)pcVar13;
                                  strcpy(pcVar13,pcVar20);
                                  iVar5 = FUN_0001d2e0(iVar2,DAT_0001650c + 0x16364);
                                  iVar3 = FUN_0001fa98();
                                  if ((iVar3 == 0) ||
                                     (pcVar20 = *(char **)(iVar5 + 0x10), pcVar20 == (char *)0x0)) {
                                    iVar5 = FUN_000173e0();
                                    if (-1 < iVar5) {
                                      fwrite((void *)(DAT_0001657c + 0x16bbc),1,0x33,
                                             (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                    }
                                  }
                                  else {
                                    if (__ptr[0x10] < 0x1003) {
                                      __ptr[0x11] = 0;
                                      __ptr[0x12] = 0;
LAB_000163a0:
                                      sVar22 = strlen(pcVar20);
                                      pcVar13 = malloc(sVar22 + 1);
                                      __ptr[0xf] = (int)pcVar13;
                                      strcpy(pcVar13,pcVar20);
                                      iVar5 = FUN_000173e0();
                                      if (1 < iVar5) {
                                        fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_00016510),
                                                (char *)(DAT_00016514 + 0x163e0),__ptr[0x10],
                                                __ptr[0xf],__ptr[0xd],__ptr[0xe],__ptr[10],
                                                __ptr[0xb]);
                                      }
                                      FUN_0001c048(iVar2);
                                      return __ptr;
                                    }
                                    iVar3 = FUN_0001d2e0(iVar2,DAT_00016518 + 0x165f4);
                                    iVar4 = FUN_0001fa80();
                                    if (iVar4 == 0) {
                                      iVar5 = FUN_000173e0();
                                      if (-1 < iVar5) {
                                        fwrite((void *)(DAT_00016578 + 0x16b8c),1,0x33,
                                               (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                      }
                                    }
                                    else {
                                      iVar3 = *(int *)(iVar3 + 0x14);
                                      __ptr[0x11] = iVar3;
                                      pvVar6 = calloc(iVar3 * 0x110,1);
                                      __ptr[0x12] = (int)pvVar6;
                                      if (pvVar6 != (void *)0x0) {
                                        iVar3 = FUN_0001d2e0(iVar2,DAT_0001651c + 0x16638);
                                        if (iVar3 != 0) {
                                          iVar9 = 0;
                                          iVar4 = DAT_00016520 + 0x16654;
                                          iVar21 = DAT_00016524 + 0x16664;
                                          iVar7 = DAT_00016528 + 0x16670;
                                          iVar8 = DAT_0001652c + 0x1667c;
                                          for (piVar19 = *(int **)(iVar3 + 8); piVar19 != (int *)0x0
                                              ; piVar19 = (int *)*piVar19) {
                                            pcVar20 = (char *)(iVar9 * 0x110 + __ptr[0x12]);
                                            if (__ptr[0x11] <= iVar9) {
                                              iVar5 = FUN_000173e0();
                                              if (-1 < iVar5) {
                                                fwrite((void *)(DAT_00016570 + 0x16b1c),1,0x30,
                                                       (FILE *)**(undefined4 **)
                                                                 (iVar18 + DAT_000165dc));
                                              }
                                              goto LAB_0001556c;
                                            }
                                            iVar3 = FUN_0001d2e0(piVar19,iVar4);
                                            iVar10 = FUN_0001fa98();
                                            if ((iVar10 == 0) ||
                                               (*(char **)(iVar3 + 0x10) == (char *)0x0)) {
                                              iVar5 = FUN_000173e0();
                                              if (-1 < iVar5) {
                                                fwrite((void *)(DAT_0001656c + 0x16ae8),1,0x38,
                                                       (FILE *)**(undefined4 **)
                                                                 (iVar18 + DAT_000165dc));
                                              }
                                              goto LAB_0001556c;
                                            }
                                            strcpy(pcVar20,*(char **)(iVar3 + 0x10));
                                            iVar3 = FUN_0001d2e0(piVar19,iVar21);
                                            iVar10 = FUN_0001fa80();
                                            if (iVar10 == 0) {
                                              iVar5 = FUN_000173e0();
                                              if (-1 < iVar5) {
                                                fwrite((void *)(DAT_00016568 + 0x16ab4),1,0x3e,
                                                       (FILE *)**(undefined4 **)
                                                                 (iVar18 + DAT_000165dc));
                                              }
                                              goto LAB_0001556c;
                                            }
                                            sVar22 = *(int *)(iVar3 + 0x14) * 0xc;
                                            *(int *)(pcVar20 + 0x100) = *(int *)(iVar3 + 0x14);
                                            pvVar6 = malloc(sVar22);
                                            *(void **)(pcVar20 + 0x104) = pvVar6;
                                            if (pvVar6 == (void *)0x0) {
                                              iVar5 = FUN_000173e0();
                                              if (-1 < iVar5) {
                                                fwrite((void *)(DAT_00016550 + 0x16978),1,0x2d,
                                                       (FILE *)**(undefined4 **)
                                                                 (iVar18 + DAT_000165dc));
                                              }
                                              goto LAB_0001556c;
                                            }
                                            memset(pvVar6,0,sVar22);
                                            iVar3 = FUN_0001d2e0(piVar19,DAT_00016530 + 0x16728);
                                            if ((iVar3 != 0) &&
                                               (piVar17 = *(int **)(iVar3 + 8),
                                               piVar17 != (int *)0x0)) {
                                              iVar3 = 0;
                                              iVar10 = DAT_00016534 + 0x1674c;
                                              do {
                                                iVar11 = FUN_0001d2e0(piVar17,iVar10);
                                                iVar14 = FUN_0001fa80();
                                                if (iVar14 == 0) {
                                                  iVar5 = FUN_000173e0();
                                                  if (-1 < iVar5) {
                                                    fwrite((void *)(DAT_00016538 + 0x167e4),1,0x2e,
                                                           (FILE *)**(undefined4 **)
                                                                     (iVar18 + DAT_000165dc));
                                                  }
LAB_00016c54:
                                                  iVar5 = FUN_000173e0();
                                                  if (-1 < iVar5) {
                                                    fwrite((void *)(DAT_0001658c + 0x16c7c),1,0x2a,
                                                           (FILE *)**(undefined4 **)
                                                                     (iVar18 + DAT_000165dc));
                                                  }
                                                  goto LAB_0001556c;
                                                }
                                                *(undefined4 *)(*(int *)(pcVar20 + 0x104) + iVar3) =
                                                     *(undefined4 *)(iVar11 + 0x14);
                                                iVar11 = FUN_0001d2e0(piVar17,iVar7);
                                                iVar14 = FUN_0001fa80();
                                                if (iVar14 == 0) {
                                                  iVar5 = FUN_000173e0();
                                                  if (-1 < iVar5) {
                                                    fwrite((void *)(DAT_00016588 + 0x16c50),1,0x2f,
                                                           (FILE *)**(undefined4 **)
                                                                     (iVar18 + DAT_000165dc));
                                                  }
                                                  goto LAB_00016c54;
                                                }
                                                piVar17 = (int *)*piVar17;
                                                iVar14 = *(int *)(pcVar20 + 0x104) + iVar3;
                                                iVar3 = iVar3 + 0xc;
                                                *(undefined4 *)(iVar14 + 4) =
                                                     *(undefined4 *)(iVar11 + 0x14);
                                              } while (piVar17 != (int *)0x0);
                                            }
                                            iVar3 = FUN_0001d2e0(piVar19,DAT_0001653c + 0x167fc);
                                            iVar10 = FUN_0001fa80();
                                            if (iVar10 == 0) {
                                              iVar5 = FUN_000173e0();
                                              if (-1 < iVar5) {
                                                fwrite((void *)(DAT_00016564 + 0x16a80),1,0x3c,
                                                       (FILE *)**(undefined4 **)
                                                                 (iVar18 + DAT_000165dc));
                                              }
                                              goto LAB_0001556c;
                                            }
                                            sVar22 = *(int *)(iVar3 + 0x14) * 0xc;
                                            *(int *)(pcVar20 + 0x108) = *(int *)(iVar3 + 0x14);
                                            pvVar6 = malloc(sVar22);
                                            *(void **)(pcVar20 + 0x10c) = pvVar6;
                                            if (pvVar6 == (void *)0x0) {
                                              iVar5 = FUN_000173e0();
                                              if (-1 < iVar5) {
                                                fwrite((void *)(DAT_00016560 + 0x16a4c),1,0x2c,
                                                       (FILE *)**(undefined4 **)
                                                                 (iVar18 + DAT_000165dc));
                                              }
                                              goto LAB_0001556c;
                                            }
                                            memset(pvVar6,0,sVar22);
                                            iVar3 = FUN_0001d2e0(piVar19,DAT_00016540 + 0x1684c);
                                            if ((iVar3 != 0) &&
                                               (piVar17 = *(int **)(iVar3 + 8),
                                               piVar17 != (int *)0x0)) {
                                              iVar10 = 0;
                                              iVar11 = DAT_00016544 + 0x16874;
                                              iVar3 = DAT_00016548 + 0x16878;
                                              do {
                                                iVar14 = FUN_0001d2e0(piVar17,iVar11);
                                                iVar15 = FUN_0001fa80();
                                                if (iVar15 == 0) {
                                                  iVar5 = FUN_000173e0();
                                                  if (-1 < iVar5) {
                                                    fwrite((void *)(DAT_0001654c + 0x16944),1,0x2f,
                                                           (FILE *)**(undefined4 **)
                                                                     (iVar18 + DAT_000165dc));
                                                  }
LAB_000169b0:
                                                  iVar5 = FUN_000173e0();
                                                  if (-1 < iVar5) {
                                                    fwrite((void *)(DAT_00016558 + 0x169d8),1,0x29,
                                                           (FILE *)**(undefined4 **)
                                                                     (iVar18 + DAT_000165dc));
                                                  }
                                                  goto LAB_0001556c;
                                                }
                                                *(undefined4 *)(*(int *)(pcVar20 + 0x10c) + iVar10)
                                                     = *(undefined4 *)(iVar14 + 0x14);
                                                iVar14 = FUN_0001d2e0(piVar17,iVar8);
                                                iVar15 = FUN_0001fa80();
                                                if (iVar15 == 0) {
                                                  iVar5 = FUN_000173e0(piVar17,iVar3);
                                                  if (-1 < iVar5) {
                                                    fwrite((void *)(DAT_0001655c + 0x16a0c),1,0x2e,
                                                           (FILE *)**(undefined4 **)
                                                                     (iVar18 + DAT_000165dc));
                                                  }
                                                  goto LAB_000169b0;
                                                }
                                                *(undefined4 *)
                                                 (*(int *)(pcVar20 + 0x10c) + iVar10 + 4) =
                                                     *(undefined4 *)(iVar14 + 0x14);
                                                iVar14 = FUN_0001d2e0();
                                                iVar15 = FUN_0001fa80();
                                                if (iVar15 == 0) {
                                                  iVar5 = FUN_000173e0();
                                                  if (-1 < iVar5) {
                                                    fwrite((void *)(DAT_00016554 + 0x169ac),1,0x2d,
                                                           (FILE *)**(undefined4 **)
                                                                     (iVar18 + DAT_000165dc));
                                                  }
                                                  goto LAB_000169b0;
                                                }
                                                piVar17 = (int *)*piVar17;
                                                iVar15 = *(int *)(pcVar20 + 0x10c) + iVar10;
                                                iVar10 = iVar10 + 0xc;
                                                *(undefined4 *)(iVar15 + 8) =
                                                     *(undefined4 *)(iVar14 + 0x14);
                                              } while (piVar17 != (int *)0x0);
                                            }
                                            iVar9 = iVar9 + 1;
                                          }
                                        }
                                        pcVar20 = *(char **)(iVar5 + 0x10);
                                        goto LAB_000163a0;
                                      }
                                      iVar5 = FUN_000173e0();
                                      if (-1 < iVar5) {
                                        fwrite((void *)(DAT_00016574 + 0x16b5c),1,0x33,
                                               (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (0 < __ptr[6]) {
                          iVar21 = 0;
                          iVar4 = DAT_00016460 + 0x1595c;
                          iVar5 = DAT_00016464 + 0x15964;
                          iVar3 = DAT_00016468 + 0x15978;
                          do {
                            iVar7 = FUN_0001d2e0(piVar19,iVar4);
                            iVar8 = FUN_0001fa98();
                            if ((iVar8 == 0) || (*(int *)(iVar7 + 0x10) == 0)) {
                              iVar5 = FUN_000173e0();
                              if (-1 < iVar5) {
                                fwrite((void *)(DAT_000164c0 + 0x15f8c),1,0x31,
                                       (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                              }
                              goto LAB_0001556c;
                            }
                            iVar8 = FUN_0001d2e0(piVar19,iVar5);
                            iVar9 = FUN_0001fa98();
                            if ((iVar9 == 0) || (*(int *)(iVar8 + 0x10) == 0)) {
                              iVar5 = FUN_000173e0();
                              if (-1 < iVar5) {
                                fwrite((void *)(DAT_000164c8 + 0x15ffc),1,0x33,
                                       (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                              }
                              goto LAB_0001556c;
                            }
                            iVar9 = FUN_0001d2e0(piVar19,iVar3);
                            iVar10 = FUN_0001fa98();
                            if ((iVar10 == 0) || (*(int *)(iVar9 + 0x10) == 0)) {
                              iVar5 = FUN_000173e0();
                              if (-1 < iVar5) {
                                fwrite((void *)(DAT_000164c4 + 0x15fc4),1,0x31,
                                       (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                              }
                              goto LAB_0001556c;
                            }
                            pcVar20 = (char *)(iVar21 * 0x168 + __ptr[7]);
                            strncpy(pcVar20,*(char **)(iVar7 + 0x10),0x20);
                            strncpy(pcVar20 + 0x20,*(char **)(iVar8 + 0x10),0x20);
                            strncpy(pcVar20 + 0x40,*(char **)(iVar9 + 0x10),0x100);
                            if (0x1001 < __ptr[0x10]) {
                              iVar7 = FUN_0001d2e0(piVar19,DAT_0001646c + 0x15a6c);
                              iVar8 = FUN_0001fa80();
                              if (iVar8 == 0) {
                                iVar5 = FUN_000173e0();
                                if (-1 < iVar5) {
                                  fwrite((void *)(DAT_000165a4 + 0x16dac),1,0x36,
                                         (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                }
                                goto LAB_0001556c;
                              }
                              sVar22 = *(int *)(iVar7 + 0x14) << 2;
                              *(int *)(pcVar20 + 0x140) = *(int *)(iVar7 + 0x14);
                              pvVar6 = malloc(sVar22);
                              *(void **)(pcVar20 + 0x144) = pvVar6;
                              memset(pvVar6,0,sVar22);
                              iVar7 = FUN_0001d2e0(piVar19,DAT_00016470 + 0x15ab0);
                              if ((iVar7 != 0) &&
                                 (piVar17 = *(int **)(iVar7 + 8), piVar17 != (int *)0x0)) {
                                if (*(int *)(pcVar20 + 0x140) < 1) {
LAB_00015b00:
                                  iVar5 = FUN_000173e0();
                                  if (-1 < iVar5) {
                                    fwrite((void *)(DAT_00016474 + 0x15b30),1,0x2d,
                                           (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                  }
                                  goto LAB_0001556c;
                                }
                                iVar7 = 0;
                                piVar16 = (int *)(*(int *)(pcVar20 + 0x144) + -4);
                                while( true ) {
                                  piVar1 = piVar17 + 5;
                                  iVar7 = iVar7 + 1;
                                  piVar17 = (int *)*piVar17;
                                  piVar16 = piVar16 + 1;
                                  *piVar16 = *piVar1;
                                  if (piVar17 == (int *)0x0) break;
                                  if (*(int *)(pcVar20 + 0x140) <= iVar7) goto LAB_00015b00;
                                }
                              }
                              iVar7 = FUN_0001d2e0(piVar19,DAT_000164b0 + 0x15e60);
                              iVar8 = FUN_0001fa80();
                              if (iVar8 == 0) {
                                iVar5 = FUN_000173e0();
                                if (-1 < iVar5) {
                                  fwrite((void *)(DAT_000165a0 + 0x16d74),1,0x37,
                                         (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                }
                                goto LAB_0001556c;
                              }
                              sVar22 = *(int *)(iVar7 + 0x14) << 2;
                              *(int *)(pcVar20 + 0x148) = *(int *)(iVar7 + 0x14);
                              pvVar6 = malloc(sVar22);
                              *(void **)(pcVar20 + 0x14c) = pvVar6;
                              memset(pvVar6,0,sVar22);
                              iVar7 = FUN_0001d2e0(piVar19,DAT_000164b4 + 0x15ea4);
                              if ((iVar7 != 0) &&
                                 (piVar17 = *(int **)(iVar7 + 8), piVar17 != (int *)0x0)) {
                                if (*(int *)(pcVar20 + 0x148) < 1) {
LAB_00015ef4:
                                  iVar5 = FUN_000173e0();
                                  if (-1 < iVar5) {
                                    fwrite((void *)(DAT_000164b8 + 0x15f24),1,0x2e,
                                           (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                  }
                                  goto LAB_0001556c;
                                }
                                iVar7 = 0;
                                piVar16 = (int *)(*(int *)(pcVar20 + 0x14c) + -4);
                                while( true ) {
                                  piVar1 = piVar17 + 5;
                                  iVar7 = iVar7 + 1;
                                  piVar17 = (int *)*piVar17;
                                  piVar16 = piVar16 + 1;
                                  *piVar16 = *piVar1;
                                  if (piVar17 == (int *)0x0) break;
                                  if (*(int *)(pcVar20 + 0x148) <= iVar7) goto LAB_00015ef4;
                                }
                              }
                              uVar12 = FUN_0001d2e0(piVar19,DAT_000164cc + 0x16014);
                              iVar7 = strcmp(pcVar20,(char *)(DAT_000164d0 + 0x16020));
                              if (iVar7 == 0) {
                                iVar7 = FUN_0001d2e0(uVar12,DAT_000164ec + 0x1614c);
                                iVar8 = FUN_0001fa80();
                                if (iVar8 == 0) {
                                  iVar7 = FUN_000173e0();
                                  if (-1 < iVar7) {
                                    fwrite((void *)(DAT_000165e0 + 0x17098),1,0x3f,
                                           (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                  }
                                }
                                else {
                                  sVar22 = *(size_t *)(iVar7 + 0x14);
                                  *(size_t *)(pcVar20 + 0x150) = sVar22;
                                  pvVar6 = malloc(sVar22);
                                  *(void **)(pcVar20 + 0x154) = pvVar6;
                                  memset(pvVar6,0,sVar22);
                                  iVar7 = FUN_0001d2e0(uVar12,DAT_000164f0 + 0x16194);
                                  iVar8 = FUN_0001fa98();
                                  if (iVar8 == 0) {
                                    iVar7 = FUN_000173e0();
                                    if (-1 < iVar7) {
                                      fwrite((void *)(DAT_000165d8 + 0x17064),1,0x39,
                                             (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                    }
                                  }
                                  else {
                                    strncpy(*(char **)(pcVar20 + 0x154),*(char **)(iVar7 + 0x10),
                                            *(size_t *)(pcVar20 + 0x150));
                                  }
                                }
                              }
                              uVar12 = FUN_0001d2e0(piVar19,DAT_000164d4 + 0x16040);
                              iVar7 = FUN_0001fac8();
                              if (iVar7 == 0) {
                                iVar5 = FUN_000173e0();
                                if (-1 < iVar5) {
                                  fwrite((void *)(DAT_000165b0 + 0x16e54),1,0x35,
                                         (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                }
                                goto LAB_0001556c;
                              }
                              iVar7 = FUN_0001d2e0(uVar12,DAT_000164d8 + 0x16060);
                              iVar8 = FUN_0001fa80();
                              if (iVar8 == 0) {
                                iVar5 = FUN_000173e0();
                                if (-1 < iVar5) {
                                  fwrite((void *)(DAT_000165ac + 0x16e1c),1,0x37,
                                         (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                }
                                goto LAB_0001556c;
                              }
                              iVar8 = FUN_0001d2e0(uVar12,DAT_000164dc + 0x16080);
                              iVar9 = FUN_0001fa80();
                              if (iVar9 == 0) {
                                iVar5 = FUN_000173e0();
                                if (-1 < iVar5) {
                                  fwrite((void *)(DAT_000165a8 + 0x16de4),1,0x38,
                                         (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                                }
                                goto LAB_0001556c;
                              }
                              uVar12 = *(undefined4 *)(iVar8 + 0x14);
                              *(undefined4 *)(pcVar20 + 0x15c) = *(undefined4 *)(iVar7 + 0x14);
                              *(undefined4 *)(pcVar20 + 0x160) = uVar12;
                            }
                            piVar19 = (int *)*piVar19;
                            iVar21 = iVar21 + 1;
                            if (piVar19 == (int *)0x0) goto LAB_00015bb8;
                          } while (iVar21 < __ptr[6]);
                        }
                        iVar5 = FUN_000173e0();
                        if (-1 < iVar5) {
                          fwrite((void *)(DAT_000164e0 + 0x160d4),1,0x2d,
                                 (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                        }
                      }
                    }
                  }
                }
                else {
                  if (0 < __ptr[2]) {
                    iVar5 = 0;
                    do {
                      iVar3 = FUN_00014bb0(piVar19,iVar5 * 0x1bc + __ptr[3]);
                      iVar5 = iVar5 + 1;
                      if (iVar3 != 0) goto LAB_0001556c;
                      piVar19 = (int *)*piVar19;
                      if (piVar19 == (int *)0x0) goto LAB_00015734;
                    } while (iVar5 < __ptr[2]);
                  }
                  iVar5 = FUN_000173e0();
                  if (-1 < iVar5) {
                    fwrite((void *)(DAT_00016450 + 0x1589c),1,0x2b,
                           (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
                  }
                }
              }
            }
          }
          else {
            if (0 < *__ptr) {
              iVar5 = 0;
              do {
                iVar3 = FUN_00014bb0(piVar19,iVar5 * 0x1bc + __ptr[1]);
                iVar5 = iVar5 + 1;
                if (iVar3 != 0) goto LAB_0001556c;
                piVar19 = (int *)*piVar19;
                if (piVar19 == (int *)0x0) goto LAB_0001558c;
              } while (iVar5 < *__ptr);
            }
            iVar5 = FUN_000173e0();
            if (-1 < iVar5) {
              fwrite((void *)(DAT_0001642c + 0x15668),1,0x2a,
                     (FILE *)**(undefined4 **)(iVar18 + DAT_000165dc));
            }
          }
        }
      }
    }
  }
LAB_0001556c:
  FUN_0001c048(iVar2);
  free(__ptr);
  return (int *)0x0;
}



/* ===== FUN_000170a0 @ 000170a0 size=832 ===== */

undefined4 FUN_000170a0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar3 = *param_1;
  if (0 < iVar3) {
    iVar2 = param_1[1];
    iVar5 = 0;
    do {
      pvVar1 = *(void **)(iVar5 * 0x1bc + iVar2 + 0x1b0);
      while (pvVar1 != (void *)0x0) {
        free(pvVar1);
        iVar3 = *param_1;
        iVar5 = iVar5 + 1;
        if (iVar3 <= iVar5) goto LAB_00017108;
        iVar2 = param_1[1];
        pvVar1 = *(void **)(iVar5 * 0x1bc + iVar2 + 0x1b0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
LAB_00017108:
  if (param_1[0x10] < 0x1002) {
    if (param_1[2] < 1) goto LAB_000172f4;
LAB_00017124:
    iVar3 = param_1[3];
    iVar2 = 0;
    iVar5 = 0;
    do {
      pvVar1 = *(void **)(iVar3 + iVar2 + 0x1b0);
      while (pvVar1 != (void *)0x0) {
        free(pvVar1);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + 0x1bc;
        if (param_1[2] <= iVar5) goto LAB_00017180;
        iVar3 = param_1[3];
        pvVar1 = *(void **)(iVar3 + iVar2 + 0x1b0);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 0x1bc;
    } while (iVar5 < param_1[2]);
LAB_00017180:
    if (param_1[0x10] < 0x1002) goto LAB_000172f4;
  }
  else {
    iVar3 = param_1[2] * 3;
    param_1[2] = iVar3;
    if (0 < iVar3) goto LAB_00017124;
  }
  iVar3 = param_1[4];
  if (0 < iVar3) {
    iVar2 = param_1[5];
    iVar5 = 0;
    do {
      pvVar1 = *(void **)(iVar5 * 0x1bc + iVar2 + 0x1b0);
      while (pvVar1 != (void *)0x0) {
        free(pvVar1);
        iVar3 = param_1[4];
        iVar5 = iVar5 + 1;
        if (iVar3 <= iVar5) goto LAB_000171ec;
        iVar2 = param_1[5];
        pvVar1 = *(void **)(iVar5 * 0x1bc + iVar2 + 0x1b0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
LAB_000171ec:
  if (0 < param_1[6]) {
    iVar2 = 0;
    iVar3 = param_1[7];
    iVar5 = iVar2;
    do {
      iVar4 = iVar3 + iVar2;
      pvVar1 = *(void **)(iVar4 + 0x144);
      while( true ) {
        if (pvVar1 != (void *)0x0) {
          free(pvVar1);
          iVar3 = param_1[7];
          iVar4 = iVar3 + iVar2;
        }
        if (*(void **)(iVar4 + 0x14c) != (void *)0x0) {
          free(*(void **)(iVar4 + 0x14c));
          iVar3 = param_1[7];
          iVar4 = iVar3 + iVar2;
        }
        if (*(void **)(iVar4 + 0x154) == (void *)0x0) break;
        free(*(void **)(iVar4 + 0x154));
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + 0x168;
        if (param_1[6] <= iVar5) goto LAB_00017288;
        iVar3 = param_1[7];
        iVar4 = iVar3 + iVar2;
        pvVar1 = *(void **)(iVar4 + 0x144);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 0x168;
    } while (iVar5 < param_1[6]);
  }
LAB_00017288:
  iVar3 = param_1[8];
  if (0 < iVar3) {
    iVar2 = param_1[9];
    iVar5 = 0;
    do {
      pvVar1 = *(void **)(iVar5 * 0x30 + iVar2 + 0x2c);
      while (pvVar1 != (void *)0x0) {
        free(pvVar1);
        iVar3 = param_1[8];
        iVar5 = iVar5 + 1;
        if (iVar3 <= iVar5) goto LAB_000172e4;
        iVar2 = param_1[9];
        pvVar1 = *(void **)(iVar5 * 0x30 + iVar2 + 0x2c);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
LAB_000172e4:
  free((void *)param_1[5]);
  free((void *)param_1[9]);
LAB_000172f4:
  if (0 < param_1[0x11]) {
    iVar2 = 0;
    iVar3 = iVar2;
    do {
      iVar3 = iVar3 + 1;
      free(*(void **)(param_1[0x12] + iVar2 + 0x104));
      iVar5 = param_1[0x12] + iVar2;
      iVar2 = iVar2 + 0x110;
      free(*(void **)(iVar5 + 0x10c));
    } while (iVar3 < param_1[0x11]);
  }
  free((void *)param_1[0x12]);
  free((void *)param_1[1]);
  free((void *)param_1[3]);
  free((void *)param_1[7]);
  if ((void *)param_1[10] != (void *)0x0) {
    free((void *)param_1[10]);
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    free((void *)param_1[0xb]);
  }
  if ((void *)param_1[0xc] != (void *)0x0) {
    free((void *)param_1[0xc]);
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    free((void *)param_1[0xd]);
  }
  if ((void *)param_1[0xe] != (void *)0x0) {
    free((void *)param_1[0xe]);
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
    free((void *)param_1[0xf]);
  }
  free(param_1);
  return 0;
}



/* ===== FUN_000173e0 @ 000173e0 size=12 ===== */

undefined4 FUN_000173e0(void)

{
  return *(undefined4 *)((int)&DAT_000173ec + DAT_000173ec);
}



/* ===== FUN_000173f0 @ 000173f0 size=16 ===== */

void FUN_000173f0(undefined4 param_1)

{
  *(undefined4 *)(DAT_00017400 + 0x173fc) = param_1;
  return;
}



/* ===== FUN_00017404 @ 00017404 size=208 ===== */

void FUN_00017404(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  char *__format;
  
  iVar4 = DAT_000174d4 + 0x17418;
  if ((param_1 == (char *)0x0) && (-1 < *(int *)(DAT_000174f0 + 0x174a8))) {
    fwrite((void *)(DAT_000174f8 + 0x174cc),1,0x28,(FILE *)**(undefined4 **)(iVar4 + DAT_000174f4));
  }
  pcVar1 = strtok(param_1,(char *)(DAT_000174d8 + 0x17428));
  if (pcVar1 == (char *)0x0) {
    return;
  }
  piVar3 = (int *)(DAT_000174dc + 0x17444);
  pcVar1 = (char *)(DAT_000174e0 + 0x17448);
  __format = (char *)(DAT_000174e4 + 0x1744c);
  do {
    while (2 < *piVar3) {
      fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_000174e8),__format);
      pcVar2 = strtok((char *)0x0,(char *)(DAT_000174ec + 0x17490));
      if (pcVar2 == (char *)0x0) {
        return;
      }
    }
    pcVar2 = strtok((char *)0x0,pcVar1);
  } while (pcVar2 != (char *)0x0);
  return;
}



/* ===== FUN_000174fc @ 000174fc size=96 ===== */

undefined4 FUN_000174fc(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0001755c + 0x17510;
  if (param_1 < 9) {
    return *(undefined4 *)(DAT_00017560 + 0x1751c + param_1 * 4);
  }
  iVar1 = FUN_000173e0();
  if (iVar1 < 0) {
    return 0;
  }
  fprintf((FILE *)**(undefined4 **)(iVar2 + DAT_00017564),(char *)(DAT_00017568 + 0x17550),param_1);
  return 0;
}



/* ===== FUN_0001756c @ 0001756c size=280 ===== */

int FUN_0001756c(int param_1,int param_2,uint param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  int iVar4;
  undefined1 (*pauVar5) [16];
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar6;
  undefined1 auVar7 [16];
  
  if (param_1 < (int)param_3) {
    return 0;
  }
  if (param_1 < param_4 || param_4 == -1) {
    param_4 = param_1;
  }
  if (param_4 <= (int)param_3) {
    return 1;
  }
  uVar6 = param_4 - param_3;
  if (~param_3 + param_4 < 6) {
    iVar4 = 1;
  }
  else {
    pauVar3 = (undefined1 (*) [16])(param_2 + param_3 * 4);
    auVar7._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar7._0_8_ = 0x100000001;
    auVar7 = *(undefined1 (*) [16])(auVar7 << 0x40 | auVar7);
    pauVar5 = pauVar3 + (uVar6 >> 2);
    do {
      auVar1 = *pauVar3;
      pauVar3 = pauVar3 + 1;
      auVar7 = VectorMultiply(auVar7,auVar1,4);
    } while (pauVar3 != pauVar5);
    param_3 = param_3 + (uVar6 & 0xfffffffc);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar7._8_8_;
    auVar7 = VectorMultiply(auVar7,auVar1,4);
    auVar2._12_4_ = 0;
    auVar2._0_12_ = auVar7._4_12_;
    auVar7 = VectorMultiply(auVar7,auVar2,4);
    iVar4 = auVar7._0_4_;
    if (uVar6 == (uVar6 & 0xfffffffc)) {
      return iVar4;
    }
  }
  iVar4 = *(int *)(param_2 + param_3 * 4) * iVar4;
  if (param_4 <= (int)(param_3 + 1)) {
    return iVar4;
  }
  param_2 = param_2 + param_3 * 4;
                    /* WARNING: Could not recover jumptable at 0x00017624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((int)(param_3 + 2) < param_4) {
                    /* WARNING: Could not recover jumptable at 0x00017638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (param_4 <= (int)(param_3 + 3)) {
      iVar4 = (*UNRECOVERED_JUMPTABLE_00)();
      return iVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x0001764c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if ((int)(param_3 + 4) < param_4) {
      iVar4 = *(int *)(param_2 + 0x10) *
              *(int *)(param_2 + 0xc) * *(int *)(param_2 + 8) * *(int *)(param_2 + 4) * iVar4;
      if ((int)(param_3 + 5) < param_4) {
        iVar4 = *(int *)(param_2 + 0x14) * iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x00017668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (*UNRECOVERED_JUMPTABLE_00)(iVar4);
      return iVar4;
    }
    iVar4 = (*UNRECOVERED_JUMPTABLE_00)();
    return iVar4;
  }
  iVar4 = (*UNRECOVERED_JUMPTABLE_00)();
  return iVar4;
}



/* ===== FUN_00017684 @ 00017684 size=56 ===== */

uint FUN_00017684(void)

{
  char *__nptr;
  uint uVar1;
  
  __nptr = getenv((char *)(DAT_000176bc + 0x17694));
  if ((__nptr != (char *)0x0) && (*__nptr != '\0')) {
    uVar1 = atoi(__nptr);
    return uVar1 | (int)uVar1 >> 0x1f;
  }
  return 0xffffffff;
}



/* ===== FUN_000176c0 @ 000176c0 size=36 ===== */

char * FUN_000176c0(void)

{
  char *pcVar1;
  
  pcVar1 = getenv((char *)(DAT_000176e4 + 0x176d0));
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  return (char *)((int)&DAT_000176e4 + DAT_000176e8);
}



/* ===== FUN_000176ec @ 000176ec size=56 ===== */

uint FUN_000176ec(void)

{
  char *__nptr;
  uint uVar1;
  
  __nptr = getenv((char *)(DAT_00017724 + 0x176fc));
  if ((__nptr != (char *)0x0) && (*__nptr != '\0')) {
    uVar1 = atoi(__nptr);
    return uVar1 & ~((int)uVar1 >> 0x1f);
  }
  return 0;
}



/* ===== rknn_init @ 00017728 size=132 ===== */

undefined4 rknn_init(int *param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 0xfffffff9;
  }
  else {
    bVar4 = param_3 != 0;
    if (param_5 == 0 || param_3 != 0) {
      bVar3 = true;
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_5 + 4);
      param_3 = *(int *)(param_5 + 8);
      bVar3 = param_3 == 0;
    }
    iVar1 = FUN_000136e4(param_2,uVar2,param_3,param_4 & 0x10,bVar4,bVar3);
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
      *(uint *)(iVar1 + 0xd0) = param_4;
      *param_1 = iVar1;
    }
  }
  return uVar2;
}



/* ===== rknn_dup_context @ 000177ac size=64 ===== */

undefined4 rknn_dup_context(void)

{
  int iVar1;
  
  iVar1 = FUN_000173e0();
  if (-1 < iVar1) {
    fwrite((void *)(DAT_000177f4 + 0x177e0),1,0x38,
           (FILE *)**(undefined4 **)(DAT_000177ec + 0x177c0 + DAT_000177f0));
  }
  return 0xffffffff;
}



/* ===== rknn_destroy @ 000177f8 size=40 ===== */

int rknn_destroy(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00011b98();
    return -(uint)(iVar1 != 0);
  }
  return -7;
}



/* ===== rknn_query @ 00017820 size=4972 ===== */

int rknn_query(undefined4 *param_1,uint param_2,uint *param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  uint *puVar8;
  char *pcVar9;
  size_t sVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  size_t __n;
  char *pcVar23;
  uint *puVar24;
  uint *puVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint local_24 [2];
  
  iVar18 = DAT_00018810 + 0x17838;
  if (param_1 == (undefined4 *)0x0) {
    return -7;
  }
  if (0xc < param_2) {
    iVar13 = FUN_000173e0();
    if (iVar13 < 0) {
      return -5;
    }
    fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_00018830 + 0x18804),
            param_2,0xc);
    return -5;
  }
  if (param_3 == (uint *)0x0) {
    iVar13 = FUN_000173e0();
    if (iVar13 < 0) {
      return -5;
    }
    fwrite((void *)(DAT_00018838 + 0x188d0),1,0x25,(FILE *)**(undefined4 **)(iVar18 + DAT_0001886c))
    ;
    return -5;
  }
  puVar24 = (uint *)param_1[0x2f];
  if (puVar24 == (uint *)0x0) {
    iVar13 = FUN_000173e0();
    if (iVar13 < 0) {
      return -5;
    }
    fwrite((void *)(DAT_00018834 + 0x1889c),1,0x2c,(FILE *)**(undefined4 **)(iVar18 + DAT_0001886c))
    ;
    return -5;
  }
  switch(param_2) {
  case 1:
    if (param_4 < 0x178) {
      iVar13 = FUN_000173e0();
      if (-1 < iVar13) {
        fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_00018858 + 0x18a9c),
                param_4,0x178);
        return -5;
      }
    }
    else {
      if (*param_3 < *puVar24) {
        uVar15 = puVar24[1];
        iVar18 = *param_3 * 0x1bc;
        pcVar19 = (char *)(uVar15 + iVar18);
        uVar16 = *(uint *)(pcVar19 + 0x110);
        param_3[1] = uVar16;
        if (uVar16 == 0) {
          uVar15 = 1;
        }
        else {
          pauVar14 = (undefined1 (*) [16])(uVar15 + iVar18 + 0x118);
          if (uVar16 - 1 < 7 ||
              pauVar14 < (undefined1 (*) [16])(param_3 + 6) &&
              param_3 + 2 < (uint *)(uVar15 + iVar18 + 0x128)) {
            param_2 = *(uint *)(pcVar19 + 0x118);
            param_3[2] = param_2;
            uVar15 = param_2;
            if (uVar16 != 1) {
              uVar15 = *(uint *)(pcVar19 + 0x11c);
              param_3[3] = uVar15;
              param_2 = uVar15 * param_2;
              uVar15 = param_2;
              if (uVar16 != 2) {
                uVar15 = *(uint *)(pcVar19 + 0x120);
                param_3[4] = uVar15;
                param_2 = uVar15 * param_2;
                uVar15 = param_2;
                if (uVar16 != 3) {
                  uVar15 = *(uint *)(pcVar19 + 0x124);
                  param_3[5] = uVar15;
                  param_2 = uVar15 * param_2;
                  uVar15 = param_2;
                  if (uVar16 != 4) {
                    uVar15 = *(uint *)(pcVar19 + 0x128);
                    param_3[6] = uVar15;
                    param_2 = uVar15 * param_2;
                    uVar15 = param_2;
                    if (uVar16 != 5) {
                      uVar15 = *(uint *)(pcVar19 + 300);
                      param_3[7] = uVar15;
                      param_2 = uVar15 * param_2;
                      uVar15 = param_2;
                      if (uVar16 != 6) {
                        uVar15 = *(uint *)(pcVar19 + 0x130);
                        param_3[8] = uVar15;
                        param_2 = uVar15 * param_2;
                        uVar15 = param_2;
                        if (uVar16 != 7) {
                          uVar15 = *(uint *)(pcVar19 + 0x134);
                          param_3[9] = uVar15;
                          param_2 = uVar15 * param_2;
                          uVar15 = param_2;
                          if (uVar16 != 8) {
                            uVar15 = *(uint *)(pcVar19 + 0x138);
                            param_3[10] = uVar15;
                            param_2 = uVar15 * param_2;
                            uVar15 = param_2;
                            if (uVar16 != 9) {
                              uVar15 = *(uint *)(pcVar19 + 0x13c);
                              param_3[0xb] = uVar15;
                              param_2 = uVar15 * param_2;
                              uVar15 = param_2;
                              if (uVar16 != 10) {
                                uVar15 = *(uint *)(pcVar19 + 0x140);
                                param_3[0xc] = uVar15;
                                param_2 = uVar15 * param_2;
                                uVar15 = param_2;
                                if (uVar16 != 0xb) {
                                  uVar15 = *(uint *)(pcVar19 + 0x144);
                                  param_3[0xd] = uVar15;
                                  param_2 = uVar15 * param_2;
                                  uVar15 = param_2;
                                  if (uVar16 != 0xc) {
                                    uVar15 = *(uint *)(pcVar19 + 0x148);
                                    param_3[0xe] = uVar15;
                                    param_2 = uVar15 * param_2;
                                    uVar15 = param_2;
                                    if (uVar16 != 0xd) {
                                      uVar15 = *(uint *)(pcVar19 + 0x14c);
                                      param_3[0xf] = uVar15;
                                      param_2 = uVar15 * param_2;
                                      uVar15 = param_2;
                                      if (uVar16 != 0xe) {
                                        param_2 = *(uint *)(pcVar19 + 0x150) * param_2;
                                        param_3[0x10] = *(uint *)(pcVar19 + 0x150);
                                        uVar15 = param_2;
                                        if (uVar16 != 0xf) {
                                          uVar16 = *(uint *)(pcVar19 + 0x154);
                                          param_3[0x11] = uVar16;
                                          param_2 = uVar16 * param_2;
                                          uVar15 = param_2;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            auVar27 = *pauVar14;
            *(longlong *)(param_3 + 2) = auVar27._0_8_;
            *(longlong *)(param_3 + 4) = auVar27._8_8_;
            auVar28 = pauVar14[1];
            *(longlong *)*(undefined1 (*) [16])(param_3 + 6) = auVar28._0_8_;
            *(longlong *)(param_3 + 8) = auVar28._8_8_;
            auVar27 = VectorMultiply(auVar27,auVar28,4);
            if (uVar16 >> 2 != 2) {
              auVar28 = pauVar14[2];
              auVar27 = VectorMultiply(auVar27,auVar28,4);
              *(longlong *)(param_3 + 10) = auVar28._0_8_;
              *(longlong *)(param_3 + 0xc) = auVar28._8_8_;
              if (uVar16 >> 2 != 3) {
                auVar28 = pauVar14[3];
                auVar27 = VectorMultiply(auVar27,auVar28,4);
                *(longlong *)(param_3 + 0xe) = auVar28._0_8_;
                *(longlong *)(param_3 + 0x10) = auVar28._8_8_;
              }
            }
            uVar17 = uVar16 & 0xfffffffc;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = auVar27._8_8_;
            auVar27 = VectorMultiply(auVar3,auVar27,4);
            auVar4._12_4_ = 0;
            auVar4._0_12_ = auVar27._4_12_;
            auVar27 = VectorMultiply(auVar4,auVar27,4);
            param_2 = auVar27._0_4_;
            uVar15 = param_2;
            if (uVar16 != uVar17) {
              param_2 = *(uint *)(pcVar19 + (uVar17 + 0x46) * 4) * param_2;
              param_3[uVar17 + 2] = *(uint *)(pcVar19 + (uVar17 + 0x46) * 4);
              uVar15 = param_2;
              if (uVar17 + 1 < uVar16) {
                param_2 = *(uint *)(pcVar19 + (uVar17 + 0x47) * 4) * param_2;
                param_3[uVar17 + 3] = *(uint *)(pcVar19 + (uVar17 + 0x47) * 4);
                uVar15 = param_2;
                if (uVar17 + 2 < uVar16) {
                  param_2 = *(uint *)(pcVar19 + (uVar17 + 0x48) * 4) * param_2;
                  param_3[uVar17 + 4] = *(uint *)(pcVar19 + (uVar17 + 0x48) * 4);
                  uVar15 = param_2;
                }
              }
            }
          }
        }
        param_3[0x52] = param_2;
        strncpy((char *)(param_3 + 0x12),pcVar19,0xff);
        iVar18 = FUN_000174fc(*(undefined4 *)(pcVar19 + 0x100));
        uVar11 = *(undefined4 *)(pcVar19 + 0x100);
        param_3[0x53] = uVar15 * iVar18;
        uVar11 = FUN_000174fc(uVar11);
        if (*(int *)(param_1[0x2f] + 0x40) < 0x1003) {
          iVar18 = FUN_0002c2a4(0x10,uVar11);
        }
        else {
          iVar18 = *(int *)(pcVar19 + 0x1b8);
        }
        uVar16 = *(uint *)(pcVar19 + 0x104);
        if ((uVar16 & 0xfffffffd) == 0) {
          iVar13 = *(int *)(pcVar19 + 0x124);
        }
        else {
          if (uVar16 != 1) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)software_udf(0,0x18bb0);
            (*pcVar7)();
          }
          iVar13 = *(int *)(pcVar19 + 0x120);
        }
        iVar12 = FUN_0002c2a4(param_3[0x53],iVar13);
        iVar13 = FUN_0002c2a4(iVar18 + iVar13 + -1,iVar18);
        uVar15 = *(uint *)(pcVar19 + 0x1a4);
        uVar17 = *(uint *)(pcVar19 + 0x1a8);
        param_3[0x55] = *(uint *)(pcVar19 + 0x100);
        param_3[0x54] = uVar16;
        param_3[0x59] = uVar15;
        param_3[0x58] = uVar17;
        param_3[0x5d] = 0;
        *(undefined1 *)(param_3 + 0x57) = 0;
        param_3[0x56] = 2;
        param_3[0x5a] = iVar18 * iVar13;
        param_3[0x5b] = iVar18 * iVar13 * iVar12;
        return 0;
      }
      iVar13 = FUN_000173e0();
      if (-1 < iVar13) {
        fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_00018854 + 0x18a68),
                *param_3,*(undefined4 *)param_1[0x2f]);
        return -5;
      }
    }
    break;
  case 2:
    if (param_4 < 0x178) {
      iVar13 = FUN_000173e0();
      if (-1 < iVar13) {
        fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_00018860 + 0x18b14),
                param_4,0x178);
        return -5;
      }
    }
    else {
      uVar16 = *param_3;
      if (uVar16 < puVar24[2]) {
        if (0x1001 < (int)puVar24[0x10]) {
          uVar16 = uVar16 * 3;
        }
        uVar15 = puVar24[3];
        iVar18 = uVar16 * 0x1bc;
        pcVar19 = (char *)(uVar15 + iVar18);
        uVar16 = *(uint *)(pcVar19 + 0x114);
        param_3[1] = uVar16;
        if (uVar16 == 0) {
          uVar15 = 1;
        }
        else {
          pauVar14 = (undefined1 (*) [16])(uVar15 + iVar18 + 0x158);
          if (uVar16 - 1 < 7 ||
              pauVar14 < (undefined1 (*) [16])(param_3 + 6) &&
              param_3 + 2 < (uint *)(uVar15 + iVar18 + 0x168)) {
            uVar15 = *(uint *)(pcVar19 + 0x158);
            param_3[2] = uVar15;
            if (uVar16 != 1) {
              uVar17 = *(uint *)(pcVar19 + 0x15c);
              param_3[3] = uVar17;
              uVar15 = uVar17 * uVar15;
              if (uVar16 != 2) {
                uVar17 = *(uint *)(pcVar19 + 0x160);
                param_3[4] = uVar17;
                uVar15 = uVar17 * uVar15;
                if (uVar16 != 3) {
                  uVar17 = *(uint *)(pcVar19 + 0x164);
                  param_3[5] = uVar17;
                  uVar15 = uVar17 * uVar15;
                  if (uVar16 != 4) {
                    uVar17 = *(uint *)(pcVar19 + 0x168);
                    param_3[6] = uVar17;
                    uVar15 = uVar17 * uVar15;
                    if (uVar16 != 5) {
                      uVar17 = *(uint *)(pcVar19 + 0x16c);
                      param_3[7] = uVar17;
                      uVar15 = uVar17 * uVar15;
                      if (uVar16 != 6) {
                        uVar17 = *(uint *)(pcVar19 + 0x170);
                        param_3[8] = uVar17;
                        uVar15 = uVar17 * uVar15;
                        if (uVar16 != 7) {
                          uVar17 = *(uint *)(pcVar19 + 0x174);
                          param_3[9] = uVar17;
                          uVar15 = uVar17 * uVar15;
                          if (uVar16 != 8) {
                            uVar17 = *(uint *)(pcVar19 + 0x178);
                            param_3[10] = uVar17;
                            uVar15 = uVar17 * uVar15;
                            if (uVar16 != 9) {
                              uVar17 = *(uint *)(pcVar19 + 0x17c);
                              param_3[0xb] = uVar17;
                              uVar15 = uVar17 * uVar15;
                              if (uVar16 != 10) {
                                uVar17 = *(uint *)(pcVar19 + 0x180);
                                param_3[0xc] = uVar17;
                                uVar15 = uVar17 * uVar15;
                                if (uVar16 != 0xb) {
                                  uVar17 = *(uint *)(pcVar19 + 0x184);
                                  param_3[0xd] = uVar17;
                                  uVar15 = uVar17 * uVar15;
                                  if (uVar16 != 0xc) {
                                    uVar17 = *(uint *)(pcVar19 + 0x188);
                                    param_3[0xe] = uVar17;
                                    uVar15 = uVar17 * uVar15;
                                    if (uVar16 != 0xd) {
                                      uVar17 = *(uint *)(pcVar19 + 0x18c);
                                      param_3[0xf] = uVar17;
                                      uVar15 = uVar17 * uVar15;
                                      if (uVar16 != 0xe) {
                                        uVar15 = *(uint *)(pcVar19 + 400) * uVar15;
                                        param_3[0x10] = *(uint *)(pcVar19 + 400);
                                        if (uVar16 != 0xf) {
                                          uVar16 = *(uint *)(pcVar19 + 0x194);
                                          param_3[0x11] = uVar16;
                                          uVar15 = uVar16 * uVar15;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            auVar27 = *pauVar14;
            *(longlong *)(param_3 + 2) = auVar27._0_8_;
            *(longlong *)(param_3 + 4) = auVar27._8_8_;
            auVar28 = pauVar14[1];
            *(longlong *)*(undefined1 (*) [16])(param_3 + 6) = auVar28._0_8_;
            *(longlong *)(param_3 + 8) = auVar28._8_8_;
            auVar27 = VectorMultiply(auVar27,auVar28,4);
            if (uVar16 >> 2 != 2) {
              auVar28 = pauVar14[2];
              auVar27 = VectorMultiply(auVar27,auVar28,4);
              *(longlong *)(param_3 + 10) = auVar28._0_8_;
              *(longlong *)(param_3 + 0xc) = auVar28._8_8_;
              if (uVar16 >> 2 != 3) {
                auVar28 = pauVar14[3];
                auVar27 = VectorMultiply(auVar27,auVar28,4);
                *(longlong *)(param_3 + 0xe) = auVar28._0_8_;
                *(longlong *)(param_3 + 0x10) = auVar28._8_8_;
              }
            }
            uVar17 = uVar16 & 0xfffffffc;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = auVar27._8_8_;
            auVar27 = VectorMultiply(auVar27,auVar5,4);
            auVar6._12_4_ = 0;
            auVar6._0_12_ = auVar27._4_12_;
            auVar27 = VectorMultiply(auVar27,auVar6,4);
            uVar15 = auVar27._0_4_;
            if (uVar16 != uVar17) {
              uVar15 = *(uint *)(pcVar19 + (uVar17 + 0x56) * 4) * uVar15;
              param_3[uVar17 + 2] = *(uint *)(pcVar19 + (uVar17 + 0x56) * 4);
              if (uVar17 + 1 < uVar16) {
                uVar15 = *(uint *)(pcVar19 + (uVar17 + 0x57) * 4) * uVar15;
                param_3[uVar17 + 3] = *(uint *)(pcVar19 + (uVar17 + 0x57) * 4);
                if (uVar17 + 2 < uVar16) {
                  uVar15 = *(uint *)(pcVar19 + (uVar17 + 0x58) * 4) * uVar15;
                  param_3[uVar17 + 4] = *(uint *)(pcVar19 + (uVar17 + 0x58) * 4);
                }
              }
            }
          }
        }
        puVar24 = param_3 + 0x12;
        param_3[0x52] = uVar15;
        strncpy((char *)puVar24,pcVar19,0xff);
        sVar10 = strlen(pcVar19);
        __n = sVar10 - 10;
        if (0 < (int)__n) {
          pcVar9 = (char *)(DAT_0001881c + 0x18050);
          pcVar23 = strstr((char *)puVar24,pcVar9);
          if ((pcVar23 != (char *)0x0) &&
             (iVar18 = strcmp((char *)((int)puVar24 + __n),pcVar9), iVar18 == 0)) {
            memset(puVar24,0,0x100);
            strncpy((char *)puVar24,pcVar19,__n);
            *(undefined1 *)((int)param_3 + sVar10 + 0x3e) = 0;
          }
        }
        iVar18 = FUN_000174fc(*(undefined4 *)(pcVar19 + 0x100));
        uVar17 = *(uint *)(pcVar19 + 0x1a4);
        uVar21 = *(uint *)(pcVar19 + 0x108);
        uVar16 = *(uint *)(pcVar19 + 0x100);
        param_3[0x58] = *(uint *)(pcVar19 + 0x1a8);
        param_3[0x54] = uVar21;
        param_3[0x59] = uVar17;
        param_3[0x55] = uVar16;
        param_3[0x5a] = 0;
        param_3[0x5d] = 0;
        *(undefined1 *)(param_3 + 0x57) = 0;
        param_3[0x56] = 2;
        param_3[0x53] = uVar15 * iVar18;
        param_3[0x5b] = uVar15 * iVar18;
        return 0;
      }
      iVar13 = FUN_000173e0();
      if (-1 < iVar13) {
        fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_00018850 + 0x18a30),
                *param_3,*(undefined4 *)(param_1[0x2f] + 8));
        return -5;
      }
    }
    break;
  case 3:
    iVar13 = FUN_000173e0();
    if (-1 < iVar13) {
      fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_0001882c + 0x1823c),3);
      return -1;
    }
    return -1;
  case 4:
    iVar13 = FUN_000173e0();
    if (-1 < iVar13) {
      fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_00018820 + 0x18104),4);
      return -1;
    }
    return -1;
  case 5:
    if (0x1ff < param_4) {
      puVar22 = (uint *)(DAT_00018824 + 0x181a4);
      puVar24 = (uint *)(DAT_00018824 + 0x18184);
      puVar8 = param_3;
      do {
        puVar25 = puVar8;
        puVar20 = puVar24;
        uVar16 = puVar20[1];
        uVar15 = puVar20[2];
        uVar17 = puVar20[3];
        *puVar25 = *puVar20;
        puVar25[1] = uVar16;
        puVar25[2] = uVar15;
        puVar25[3] = uVar17;
        puVar24 = puVar20 + 4;
        puVar8 = puVar25 + 4;
      } while (puVar20 + 4 != puVar22);
      uVar16 = puVar20[4];
      local_24[0] = 0;
      puVar25[5] = puVar20[5];
      puVar25[4] = uVar16;
      FUN_00013eb0(*param_1,1,local_24);
      sprintf((char *)(param_3 + 0x40),(char *)(DAT_00018828 + 0x18204),local_24[0] / 10000,
              (local_24[0] % 10000) / 100,local_24[0] % 100);
      return 0;
    }
    iVar13 = FUN_000173e0();
    if (-1 < iVar13) {
      fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_0001883c + 0x18908),
              param_4,0x200);
    }
    break;
  case 6:
    if (7 < param_4) {
      if (param_4 < 0x40) {
        iVar18 = 0;
      }
      uVar26 = vrev(*(undefined8 *)(param_1 + 5),4);
      *(undefined8 *)param_3 = uVar26;
      if (0x3f < param_4) {
        uVar16 = param_1[0x14];
        param_3[3] = 0;
        param_3[2] = uVar16;
        return 0;
      }
      return iVar18;
    }
    iVar13 = FUN_000173e0();
    if (-1 < iVar13) {
      fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_00018848 + 0x189b8),
              param_4);
      return -5;
    }
    break;
  case 7:
    if (0x3ff < param_4) {
      strncpy((char *)param_3,(char *)puVar24[0xc],0x3ff);
      return 0;
    }
    iVar13 = FUN_000173e0();
    if (-1 < iVar13) {
      fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_00018840 + 0x18944),
              param_4,0x400);
      return -5;
    }
    break;
  case 8:
    goto LAB_00017898;
  case 9:
    if (param_4 < 0x178) {
      iVar13 = FUN_000173e0();
      if (iVar13 < 0) {
        return -5;
      }
      fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_00018844 + 0x18980),
              param_4,0x178);
      return -5;
    }
    uVar16 = *param_3;
    if (puVar24[2] <= uVar16) {
      iVar13 = FUN_000173e0();
      if (iVar13 < 0) {
        return -5;
      }
      fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_0001884c + 0x189f8),
              *param_3,*(undefined4 *)(param_1[0x2f] + 8));
      return -5;
    }
    if (0x1001 < (int)puVar24[0x10]) {
      uVar16 = uVar16 * 3;
    }
    uVar15 = puVar24[3];
    iVar18 = uVar16 * 0x1bc;
    pcVar19 = (char *)(uVar15 + iVar18);
    uVar16 = *(uint *)(pcVar19 + 0x110);
    param_3[1] = uVar16;
    if (uVar16 == 0) {
      uVar15 = 1;
    }
    else {
      pauVar14 = (undefined1 (*) [16])(uVar15 + iVar18 + 0x118);
      if (uVar16 - 1 < 7 ||
          pauVar14 < (undefined1 (*) [16])(param_3 + 6) &&
          param_3 + 2 < (uint *)(uVar15 + iVar18 + 0x128)) {
        uVar15 = *(uint *)(pcVar19 + 0x118);
        param_3[2] = uVar15;
        if (uVar16 != 1) {
          uVar17 = *(uint *)(pcVar19 + 0x11c);
          param_3[3] = uVar17;
          uVar15 = uVar17 * uVar15;
          if (uVar16 != 2) {
            uVar17 = *(uint *)(pcVar19 + 0x120);
            param_3[4] = uVar17;
            uVar15 = uVar17 * uVar15;
            if (uVar16 != 3) {
              uVar17 = *(uint *)(pcVar19 + 0x124);
              param_3[5] = uVar17;
              uVar15 = uVar17 * uVar15;
              if (uVar16 != 4) {
                uVar17 = *(uint *)(pcVar19 + 0x128);
                param_3[6] = uVar17;
                uVar15 = uVar17 * uVar15;
                if (uVar16 != 5) {
                  uVar17 = *(uint *)(pcVar19 + 300);
                  param_3[7] = uVar17;
                  uVar15 = uVar17 * uVar15;
                  if (uVar16 != 6) {
                    uVar17 = *(uint *)(pcVar19 + 0x130);
                    param_3[8] = uVar17;
                    uVar15 = uVar17 * uVar15;
                    if (uVar16 != 7) {
                      uVar17 = *(uint *)(pcVar19 + 0x134);
                      param_3[9] = uVar17;
                      uVar15 = uVar17 * uVar15;
                      if (uVar16 != 8) {
                        uVar17 = *(uint *)(pcVar19 + 0x138);
                        param_3[10] = uVar17;
                        uVar15 = uVar17 * uVar15;
                        if (uVar16 != 9) {
                          uVar17 = *(uint *)(pcVar19 + 0x13c);
                          param_3[0xb] = uVar17;
                          uVar15 = uVar17 * uVar15;
                          if (uVar16 != 10) {
                            uVar17 = *(uint *)(pcVar19 + 0x140);
                            param_3[0xc] = uVar17;
                            uVar15 = uVar17 * uVar15;
                            if (uVar16 != 0xb) {
                              uVar17 = *(uint *)(pcVar19 + 0x144);
                              param_3[0xd] = uVar17;
                              uVar15 = uVar17 * uVar15;
                              if (uVar16 != 0xc) {
                                uVar17 = *(uint *)(pcVar19 + 0x148);
                                param_3[0xe] = uVar17;
                                uVar15 = uVar17 * uVar15;
                                if (uVar16 != 0xd) {
                                  uVar17 = *(uint *)(pcVar19 + 0x14c);
                                  param_3[0xf] = uVar17;
                                  uVar15 = uVar17 * uVar15;
                                  if (uVar16 != 0xe) {
                                    uVar15 = *(uint *)(pcVar19 + 0x150) * uVar15;
                                    param_3[0x10] = *(uint *)(pcVar19 + 0x150);
                                    if (uVar16 != 0xf) {
                                      uVar16 = *(uint *)(pcVar19 + 0x154);
                                      param_3[0x11] = uVar16;
                                      uVar15 = uVar16 * uVar15;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        auVar27 = *pauVar14;
        *(longlong *)(param_3 + 2) = auVar27._0_8_;
        *(longlong *)(param_3 + 4) = auVar27._8_8_;
        auVar28 = pauVar14[1];
        *(longlong *)*(undefined1 (*) [16])(param_3 + 6) = auVar28._0_8_;
        *(longlong *)(param_3 + 8) = auVar28._8_8_;
        auVar27 = VectorMultiply(auVar27,auVar28,4);
        if (uVar16 >> 2 != 2) {
          auVar28 = pauVar14[2];
          auVar27 = VectorMultiply(auVar27,auVar28,4);
          *(longlong *)(param_3 + 10) = auVar28._0_8_;
          *(longlong *)(param_3 + 0xc) = auVar28._8_8_;
          if (uVar16 >> 2 != 3) {
            auVar28 = pauVar14[3];
            auVar27 = VectorMultiply(auVar27,auVar28,4);
            *(longlong *)(param_3 + 0xe) = auVar28._0_8_;
            *(longlong *)(param_3 + 0x10) = auVar28._8_8_;
          }
        }
        uVar17 = uVar16 & 0xfffffffc;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = auVar27._8_8_;
        auVar27 = VectorMultiply(auVar27,auVar1,4);
        auVar2._12_4_ = 0;
        auVar2._0_12_ = auVar27._4_12_;
        auVar27 = VectorMultiply(auVar27,auVar2,4);
        uVar15 = auVar27._0_4_;
        if (uVar16 != uVar17) {
          uVar15 = *(uint *)(pcVar19 + (uVar17 + 0x46) * 4) * uVar15;
          param_3[uVar17 + 2] = *(uint *)(pcVar19 + (uVar17 + 0x46) * 4);
          if (uVar17 + 1 < uVar16) {
            uVar15 = *(uint *)(pcVar19 + (uVar17 + 0x47) * 4) * uVar15;
            param_3[uVar17 + 3] = *(uint *)(pcVar19 + (uVar17 + 0x47) * 4);
            if (uVar17 + 2 < uVar16) {
              uVar15 = *(uint *)(pcVar19 + (uVar17 + 0x48) * 4) * uVar15;
              param_3[uVar17 + 4] = *(uint *)(pcVar19 + (uVar17 + 0x48) * 4);
            }
          }
        }
      }
    }
    param_3[0x52] = uVar15;
    strncpy((char *)(param_3 + 0x12),pcVar19,0xff);
    sVar10 = strlen(pcVar19);
    sVar10 = sVar10 - 10;
    if ((int)sVar10 < 1) goto LAB_00017a64;
    pcVar23 = (char *)(DAT_00018814 + 0x17a40);
    goto LAB_00017a3c;
  case 10:
LAB_00017898:
    iVar18 = rknn_query(param_1,1);
    return iVar18;
  case 0xb:
    if (param_4 < 0x178) {
      iVar13 = FUN_000173e0();
      if (iVar13 < 0) {
        return -5;
      }
      fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_00018868 + 0x18b88),
              param_4,0x178);
      return -5;
    }
    uVar16 = *param_3;
    if (puVar24[2] <= uVar16) {
      iVar13 = FUN_000173e0();
      if (iVar13 < 0) {
        return -5;
      }
      fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_00018864 + 0x18b54),
              *param_3,*(undefined4 *)(param_1[0x2f] + 8));
      return -5;
    }
    uVar15 = puVar24[3];
    if (0x1001 < (int)puVar24[0x10]) {
      uVar16 = uVar16 * 3 + 1;
    }
    iVar18 = uVar16 * 0x1bc;
    pcVar19 = (char *)(uVar15 + iVar18);
    uVar16 = *(uint *)(pcVar19 + 0x110);
    param_3[1] = uVar16;
    if (uVar16 == 0) {
      uVar15 = 1;
    }
    else {
      pauVar14 = (undefined1 (*) [16])(uVar15 + iVar18 + 0x118);
      if (uVar16 - 1 < 7 ||
          pauVar14 < (undefined1 (*) [16])(param_3 + 6) &&
          param_3 + 2 < (uint *)(uVar15 + iVar18 + 0x128)) {
        uVar15 = *(uint *)(pcVar19 + 0x118);
        param_3[2] = uVar15;
        if (uVar16 != 1) {
          uVar17 = *(uint *)(pcVar19 + 0x11c);
          param_3[3] = uVar17;
          uVar15 = uVar17 * uVar15;
          if (uVar16 != 2) {
            uVar17 = *(uint *)(pcVar19 + 0x120);
            param_3[4] = uVar17;
            uVar15 = uVar17 * uVar15;
            if (uVar16 != 3) {
              uVar17 = *(uint *)(pcVar19 + 0x124);
              param_3[5] = uVar17;
              uVar15 = uVar17 * uVar15;
              if (uVar16 != 4) {
                uVar17 = *(uint *)(pcVar19 + 0x128);
                param_3[6] = uVar17;
                uVar15 = uVar17 * uVar15;
                if (uVar16 != 5) {
                  uVar17 = *(uint *)(pcVar19 + 300);
                  param_3[7] = uVar17;
                  uVar15 = uVar17 * uVar15;
                  if (uVar16 != 6) {
                    uVar17 = *(uint *)(pcVar19 + 0x130);
                    param_3[8] = uVar17;
                    uVar15 = uVar17 * uVar15;
                    if (uVar16 != 7) {
                      uVar17 = *(uint *)(pcVar19 + 0x134);
                      param_3[9] = uVar17;
                      uVar15 = uVar17 * uVar15;
                      if (uVar16 != 8) {
                        uVar17 = *(uint *)(pcVar19 + 0x138);
                        param_3[10] = uVar17;
                        uVar15 = uVar17 * uVar15;
                        if (uVar16 != 9) {
                          uVar17 = *(uint *)(pcVar19 + 0x13c);
                          param_3[0xb] = uVar17;
                          uVar15 = uVar17 * uVar15;
                          if (uVar16 != 10) {
                            uVar17 = *(uint *)(pcVar19 + 0x140);
                            param_3[0xc] = uVar17;
                            uVar15 = uVar17 * uVar15;
                            if (uVar16 != 0xb) {
                              uVar17 = *(uint *)(pcVar19 + 0x144);
                              param_3[0xd] = uVar17;
                              uVar15 = uVar17 * uVar15;
                              if (uVar16 != 0xc) {
                                uVar17 = *(uint *)(pcVar19 + 0x148);
                                param_3[0xe] = uVar17;
                                uVar15 = uVar17 * uVar15;
                                if (uVar16 != 0xd) {
                                  uVar17 = *(uint *)(pcVar19 + 0x14c);
                                  param_3[0xf] = uVar17;
                                  uVar15 = uVar17 * uVar15;
                                  if (uVar16 != 0xe) {
                                    uVar15 = *(uint *)(pcVar19 + 0x150) * uVar15;
                                    param_3[0x10] = *(uint *)(pcVar19 + 0x150);
                                    if (uVar16 != 0xf) {
                                      uVar16 = *(uint *)(pcVar19 + 0x154);
                                      param_3[0x11] = uVar16;
                                      uVar15 = uVar16 * uVar15;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        auVar27 = *pauVar14;
        *(longlong *)(param_3 + 2) = auVar27._0_8_;
        *(longlong *)(param_3 + 4) = auVar27._8_8_;
        auVar28 = pauVar14[1];
        *(longlong *)*(undefined1 (*) [16])(param_3 + 6) = auVar28._0_8_;
        *(longlong *)(param_3 + 8) = auVar28._8_8_;
        auVar27 = VectorMultiply(auVar27,auVar28,4);
        if (uVar16 >> 2 != 2) {
          auVar28 = pauVar14[2];
          auVar27 = VectorMultiply(auVar27,auVar28,4);
          *(longlong *)(param_3 + 10) = auVar28._0_8_;
          *(longlong *)(param_3 + 0xc) = auVar28._8_8_;
          if (uVar16 >> 2 != 3) {
            auVar28 = pauVar14[3];
            auVar27 = VectorMultiply(auVar27,auVar28,4);
            *(longlong *)(param_3 + 0xe) = auVar28._0_8_;
            *(longlong *)(param_3 + 0x10) = auVar28._8_8_;
          }
        }
        uVar17 = uVar16 & 0xfffffffc;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = auVar27._8_8_;
        auVar28 = VectorMultiply(auVar27,auVar28,4);
        auVar27._12_4_ = 0;
        auVar27._0_12_ = auVar28._4_12_;
        auVar27 = VectorMultiply(auVar28,auVar27,4);
        uVar15 = auVar27._0_4_;
        if (uVar16 != uVar17) {
          uVar15 = *(uint *)(pcVar19 + (uVar17 + 0x46) * 4) * uVar15;
          param_3[uVar17 + 2] = *(uint *)(pcVar19 + (uVar17 + 0x46) * 4);
          if (uVar17 + 1 < uVar16) {
            uVar15 = *(uint *)(pcVar19 + (uVar17 + 0x47) * 4) * uVar15;
            param_3[uVar17 + 3] = *(uint *)(pcVar19 + (uVar17 + 0x47) * 4);
            if (uVar17 + 2 < uVar16) {
              uVar15 = *(uint *)(pcVar19 + (uVar17 + 0x48) * 4) * uVar15;
              param_3[uVar17 + 4] = *(uint *)(pcVar19 + (uVar17 + 0x48) * 4);
            }
          }
        }
      }
    }
    param_3[0x52] = uVar15;
    strncpy((char *)(param_3 + 0x12),pcVar19,0xff);
    sVar10 = strlen(pcVar19);
    sVar10 = sVar10 - 10;
    if ((int)sVar10 < 1) goto LAB_00017a64;
    pcVar23 = (char *)(DAT_00018818 + 0x17c64);
LAB_00017a3c:
    puVar24 = param_3 + 0x12;
    pcVar9 = strstr((char *)puVar24,pcVar23);
    if ((pcVar9 != (char *)0x0) &&
       (iVar18 = strcmp((char *)((int)puVar24 + sVar10),pcVar23), iVar18 == 0)) {
      memset(puVar24,0,0x100);
      strncpy((char *)puVar24,pcVar19,sVar10);
      *(undefined1 *)((int)param_3 + sVar10 + 0x48) = 0;
    }
LAB_00017a64:
    iVar18 = FUN_000174fc(*(undefined4 *)(pcVar19 + 0x100));
    uVar16 = *(uint *)(pcVar19 + 0x104);
    uVar15 = uVar15 * iVar18;
    param_3[0x53] = uVar15;
    param_3[0x5b] = uVar15;
    if ((uVar16 & 0xfffffffd) == 0) {
      param_3[0x5a] = *(uint *)(pcVar19 + 0x124);
      if ((uVar16 == 2) && ((*(uint *)(pcVar19 + 0x11c) & 1) != 0)) {
        iVar18 = FUN_0002c1dc(uVar15);
        param_3[0x5b] = iVar18 + uVar15;
      }
    }
    else {
      if (uVar16 == 1) {
        uVar15 = *(uint *)(pcVar19 + 0x120);
      }
      else {
        uVar15 = 0;
      }
      param_3[0x5a] = uVar15;
    }
    uVar15 = *(uint *)(pcVar19 + 0x1a8);
    uVar17 = *(uint *)(pcVar19 + 0x100);
    param_3[0x59] = *(uint *)(pcVar19 + 0x1a4);
    param_3[0x58] = uVar15;
    param_3[0x54] = uVar16;
    param_3[0x55] = uVar17;
    param_3[0x5d] = 0;
    *(undefined1 *)(param_3 + 0x57) = 0;
    param_3[0x56] = 2;
    return 0;
  case 0xc:
    if (0x27 < param_4) {
      uVar21 = param_1[0x1d];
      uVar17 = param_1[0x12];
      uVar16 = param_1[0x18];
      uVar15 = param_1[0x13];
      param_3[2] = param_1[0x1c];
      param_3[3] = uVar21;
      *param_3 = uVar17;
      param_3[4] = uVar16;
      param_3[6] = uVar15;
      param_3[5] = 0;
      param_3[7] = 0;
      param_3[8] = 0;
      return 0;
    }
    iVar13 = FUN_000173e0();
    if (-1 < iVar13) {
      fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_0001885c + 0x18ad8),
              param_4,0x28);
      return -5;
    }
    break;
  default:
    if (7 < param_4) {
      uVar16 = puVar24[2];
      *param_3 = *puVar24;
      param_3[1] = uVar16;
      return 0;
    }
    iVar13 = FUN_000173e0();
    if (-1 < iVar13) {
      fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_0001886c),(char *)(DAT_00018870 + 0x18be4),
              param_4,8);
      return -5;
    }
  }
  return -5;
}



/* ===== rknn_inputs_set @ 00018bf0 size=1148 ===== */

undefined4 rknn_inputs_set(undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_0001906c + 0x18c08;
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0xfffffff9;
  }
  else {
    if ((uint *)param_1[0x2f] == (uint *)0x0) {
      iVar1 = FUN_000173e0();
      if (-1 < iVar1) {
        fwrite((void *)(DAT_000190fc + 0x1903c),1,0x31,
               (FILE *)**(undefined4 **)(iVar6 + DAT_00019078));
        return 0xfffffffb;
      }
    }
    else {
      uVar4 = *(uint *)param_1[0x2f];
      if (param_2 <= uVar4) {
        if ((uVar4 != param_2) && (iVar1 = FUN_000173e0(), 0 < iVar1)) {
          fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00019070),(char *)(DAT_00019074 + 0x18d2c),
                  param_2,*(undefined4 *)param_1[0x2f]);
        }
        if (param_2 != 0) {
          uVar4 = 0;
          do {
            iVar5 = uVar4 * 0x1bc + *(int *)(param_1[0x2f] + 4);
            uVar4 = uVar4 + 1;
            iVar1 = FUN_0001756c(*(undefined4 *)(iVar5 + 0x110),iVar5 + 0x118,0,0xffffffff);
            iVar2 = FUN_000174fc(*(undefined4 *)(iVar5 + 0x100));
            if (*(uint *)(param_3 + 8) < (uint)(iVar2 * iVar1)) {
              iVar5 = FUN_000173e0();
              if (-1 < iVar5) {
                fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00019078),
                        (char *)(DAT_0001907c + 0x18d60),*(undefined4 *)(param_3 + 8),iVar2 * iVar1)
                ;
                return 0xfffffffb;
              }
              goto LAB_00018cf8;
            }
            if (*(char *)(param_3 + 0xc) == '\x01') {
              iVar1 = FUN_000173e0();
              if (-1 < iVar1) {
                fwrite((void *)(DAT_00019080 + 0x18d94),1,0x38,
                       (FILE *)**(undefined4 **)(iVar6 + DAT_00019078));
                return 0xfffffffb;
              }
              goto LAB_00018cf8;
            }
            if (*(int *)(param_3 + 0x10) != *(int *)(iVar5 + 0x100)) {
              iVar1 = FUN_000173e0();
              if (-1 < iVar1) {
                switch(*(undefined4 *)(param_3 + 0x10)) {
                case 0:
                  iVar1 = DAT_0001909c + 0x18e9c;
                  break;
                case 1:
                  iVar1 = DAT_000190e8 + 0x18fb0;
                  break;
                case 2:
                  iVar1 = DAT_000190e4 + 0x18fa4;
                  break;
                case 3:
                  iVar1 = DAT_000190e0 + 0x18f98;
                  break;
                case 4:
                  iVar1 = DAT_000190dc + 0x18f8c;
                  break;
                case 5:
                  iVar1 = DAT_000190d8 + 0x18f80;
                  break;
                case 6:
                  iVar1 = DAT_000190d4 + 0x18f74;
                  break;
                case 7:
                  iVar1 = DAT_000190d0 + 0x18f68;
                  break;
                case 8:
                  iVar1 = DAT_000190cc + 0x18f5c;
                  break;
                case 9:
                  iVar1 = DAT_000190c8 + 0x18f50;
                  break;
                default:
                  iVar1 = (int)&DAT_0001906c + DAT_00019108;
                }
                switch(*(undefined4 *)(iVar5 + 0x100)) {
                case 0:
                  iVar2 = DAT_000190c4 + 0x18f44;
                  break;
                case 1:
                  iVar2 = DAT_000190c0 + 0x18f38;
                  break;
                case 2:
                  iVar2 = DAT_000190bc + 0x18f2c;
                  break;
                case 3:
                  iVar2 = DAT_000190b8 + 0x18f20;
                  break;
                case 4:
                  iVar2 = DAT_000190b4 + 0x18f14;
                  break;
                case 5:
                  iVar2 = DAT_000190b0 + 0x18f08;
                  break;
                case 6:
                  iVar2 = DAT_000190ac + 0x18efc;
                  break;
                case 7:
                  iVar2 = DAT_000190a8 + 0x18ef0;
                  break;
                case 8:
                  iVar2 = DAT_000190a0 + 0x18ed8;
                  break;
                default:
                  iVar2 = DAT_00019104 + 0x19060;
                }
                fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00019078),
                        (char *)(DAT_000190a4 + 0x18ee0),iVar1,iVar2);
              }
              goto LAB_00018cf8;
            }
            if (*(int *)(param_3 + 0x14) != *(int *)(iVar5 + 0x104)) {
              iVar1 = FUN_000173e0();
              if (-1 < iVar1) {
                switch(*(undefined4 *)(param_3 + 0x14)) {
                case 0:
                  iVar1 = DAT_00019084 + 0x18e34;
                  break;
                case 1:
                  iVar1 = DAT_00019098 + 0x18e90;
                  break;
                case 2:
                  iVar1 = DAT_00019094 + 0x18e84;
                  break;
                case 3:
                  iVar1 = DAT_00019090 + 0x18e78;
                  break;
                default:
                  iVar1 = DAT_00019100 + 0x19054;
                }
                iVar2 = *(int *)(iVar5 + 0x104);
                if (iVar2 == 1) {
                  iVar2 = DAT_000190f4 + 0x18fd4;
                }
                else if (iVar2 == 0) {
                  iVar2 = DAT_000190f0 + 0x18fc8;
                }
                else if (iVar2 == 2) {
                  iVar2 = DAT_00019088 + 0x18e58;
                }
                else {
                  iVar2 = DAT_000190ec + 0x18fbc;
                }
                fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00019078),
                        (char *)(DAT_0001908c + 0x18e60),iVar1,iVar2);
                return 0xfffffffb;
              }
              goto LAB_00018cf8;
            }
            memcpy((void *)(param_1[0x12] + *(int *)(iVar5 + 0x19c)),*(void **)(param_3 + 4),
                   *(uint *)(param_3 + 8));
            FUN_00014578(*param_1,param_1 + 0x12,*(undefined4 *)(iVar5 + 0x19c),
                         *(undefined4 *)(param_3 + 8),1);
            param_3 = param_3 + 0x18;
          } while (uVar4 != param_2);
        }
        return 0;
      }
      iVar1 = FUN_000173e0();
      if (2 < iVar1) {
        fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_00019070),(char *)(DAT_000190f8 + 0x19004),
                param_2,*(undefined4 *)param_1[0x2f]);
        return 0xfffffffb;
      }
    }
LAB_00018cf8:
    uVar3 = 0xfffffffb;
  }
  return uVar3;
}



/* ===== rknn_run @ 0001910c size=496 ===== */

undefined4 rknn_run(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = DAT_000192fc + 0x19124;
  if (param_1 == (undefined4 *)0x0) {
    uVar6 = 0xfffffff9;
  }
  else {
    piVar2 = (int *)param_1[0x2f];
    if (piVar2 == (int *)0x0) {
      iVar1 = FUN_000173e0();
      if (-1 < iVar1) {
        fwrite((void *)(DAT_0001930c + 0x192f4),1,0x2a,
               (FILE *)**(undefined4 **)(iVar5 + DAT_00019300));
        return 0xfffffffb;
      }
    }
    else if (*piVar2 < 1) {
LAB_00019198:
      iVar1 = FUN_00011cac(param_1);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      iVar1 = param_1[0x2f];
      if (*(int *)(iVar1 + 8) < 1) {
        return 0;
      }
      iVar4 = 0;
      while( true ) {
        iVar3 = iVar4;
        if (0x1001 < *(int *)(iVar1 + 0x40)) {
          iVar3 = iVar4 * 3;
          if (param_1[0x31] == 1) {
            iVar3 = iVar3 + 1;
          }
          else if (param_1[0x31] == 2) {
            iVar3 = iVar3 + 2;
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 * 0x1bc + *(int *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar3 + 0x1b4);
        if (iVar1 == 0) break;
        FUN_00014578(*param_1,iVar1,0,*(undefined4 *)(iVar1 + 4),2);
        iVar1 = param_1[0x2f];
        if (*(int *)(iVar1 + 8) <= iVar4) {
          return 0;
        }
      }
      iVar1 = FUN_000173e0();
      if (-1 < iVar1) {
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00019300),(char *)(DAT_00019308 + 0x192a8),
                iVar3);
        return 0xfffffffb;
      }
    }
    else {
      iVar4 = piVar2[1];
      iVar1 = *(int *)(iVar4 + 0x1b4);
      if (iVar1 != 0) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          FUN_00014578(*param_1,iVar1,0,*(undefined4 *)(iVar1 + 4),1);
          if (*(int *)param_1[0x2f] <= iVar3) goto LAB_00019198;
          iVar4 = iVar3 * 0x1bc + ((int *)param_1[0x2f])[1];
          iVar1 = *(int *)(iVar4 + 0x1b4);
        } while (iVar1 != 0);
      }
      iVar1 = FUN_000173e0();
      if (-1 < iVar1) {
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00019300),(char *)(DAT_00019304 + 0x1927c),
                iVar4);
        return 0xfffffffb;
      }
    }
    uVar6 = 0xfffffffb;
  }
  return uVar6;
}



/* ===== rknn_wait @ 00019310 size=64 ===== */

undefined4 rknn_wait(void)

{
  int iVar1;
  
  iVar1 = FUN_000173e0();
  if (-1 < iVar1) {
    fwrite((void *)(DAT_00019358 + 0x19344),1,0x32,
           (FILE *)**(undefined4 **)(DAT_00019350 + 0x19324 + DAT_00019354));
  }
  return 0xffffffff;
}



/* ===== rknn_outputs_get @ 0001935c size=520 ===== */

undefined4 rknn_outputs_get(int param_1,uint param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *__dest;
  size_t __n;
  uint uVar4;
  size_t __size;
  int iVar5;
  
  iVar5 = DAT_00019564 + 0x19370;
  if (param_1 == 0) {
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar1 = FUN_000173e0();
    if (-1 < iVar1) {
      fwrite((void *)(DAT_0001957c + 0x19530),1,0x32,(FILE *)**(undefined4 **)(iVar5 + DAT_00019570)
            );
    }
  }
  else {
    uVar4 = *(uint *)(*(int *)(param_1 + 0xbc) + 8);
    if (uVar4 < param_2) {
      iVar1 = FUN_000173e0();
      if (2 < iVar1) {
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00019568),(char *)(DAT_00019580 + 0x19554),
                param_2,*(undefined4 *)(*(int *)(param_1 + 0xbc) + 8));
        return 0xfffffffb;
      }
    }
    else {
      if ((uVar4 != param_2) && (iVar1 = FUN_000173e0(), 0 < iVar1)) {
        fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00019568),(char *)(DAT_0001956c + 0x1948c),
                param_2,*(undefined4 *)(*(int *)(param_1 + 0xbc) + 8));
      }
      if (param_2 == 0) {
        return 0xffffffff;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0xbc) + 0xc);
      if (*param_3 == '\0') {
        uVar4 = 0;
        do {
          iVar2 = FUN_0001756c(*(undefined4 *)(iVar1 + 0x110),iVar1 + 0x118,0,0xffffffff,param_4);
          iVar3 = FUN_000174fc(*(undefined4 *)(iVar1 + 0x100));
          __size = iVar3 * iVar2;
          if (param_3[1] == '\0') {
            *(uint *)(param_3 + 4) = uVar4;
            __dest = malloc(__size);
            *(size_t *)(param_3 + 0xc) = __size;
            *(void **)(param_3 + 8) = __dest;
            __n = __size;
          }
          else {
            __n = *(size_t *)(param_3 + 0xc);
            if (__size < __n) {
              iVar1 = FUN_000173e0();
              if (iVar1 < 0) {
                return 0xfffffffb;
              }
              fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00019570),
                      (char *)(DAT_00019578 + 0x194fc),*(undefined4 *)(param_3 + 0xc),__size);
              return 0xfffffffb;
            }
            __dest = *(void **)(param_3 + 8);
          }
          uVar4 = uVar4 + 1;
          memcpy(__dest,(void *)(*(int *)(param_1 + 0x48) + *(int *)(iVar1 + 0x19c)),__n);
          if (uVar4 == param_2) {
            return 0xffffffff;
          }
          param_3 = param_3 + 0x10;
          iVar1 = uVar4 * 0x1bc + *(int *)(*(int *)(param_1 + 0xbc) + 0xc);
        } while (*param_3 == '\0');
      }
      iVar1 = FUN_000173e0();
      if (-1 < iVar1) {
        fwrite((void *)(DAT_00019574 + 0x194c8),1,0x36,
               (FILE *)**(undefined4 **)(iVar5 + DAT_00019570));
        return 0xfffffffb;
      }
    }
  }
  return 0xfffffffb;
}



/* ===== rknn_outputs_release @ 00019584 size=100 ===== */

undefined4 rknn_outputs_release(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0xfffffff9;
  }
  if (param_2 != 0) {
    iVar2 = param_3 + param_2 * 0x10;
    do {
      while (*(char *)(param_3 + 1) == '\0') {
        puVar1 = (undefined4 *)(param_3 + 8);
        param_3 = param_3 + 0x10;
        free((void *)*puVar1);
        if (iVar2 == param_3) {
          return 0;
        }
      }
      param_3 = param_3 + 0x10;
    } while (iVar2 != param_3);
    return 0;
  }
  return 0;
}



/* ===== rknn_create_mem_from_phys @ 000195e8 size=236 ===== */

undefined4 *
rknn_create_mem_from_phys
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  undefined4 *__ptr;
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_000196d4 + 0x19600;
  if ((param_1 != 0) && (__ptr = malloc(0x28), __ptr != (undefined4 *)0x0)) {
    __ptr[1] = 0;
    __ptr[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    __ptr[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    __ptr[4] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    __ptr[8] = 0;
    __ptr[9] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    __ptr[2] = param_3;
    __ptr[3] = param_4;
    *__ptr = param_5;
    *(undefined8 *)(__ptr + 4) = 0xffffffff;
    __ptr[7] = 3;
    __ptr[6] = param_6;
    pvVar1 = calloc(0x38,1);
    if (pvVar1 == (void *)0x0) {
      free(__ptr);
      iVar2 = FUN_000173e0();
      if (iVar2 < 0) {
        return (undefined4 *)0x0;
      }
      fwrite((void *)(DAT_000196dc + 0x196cc),1,0x4c,(FILE *)**(undefined4 **)(iVar3 + DAT_000196d8)
            );
      __ptr = (undefined4 *)0x0;
    }
    else {
      FUN_000233c0(pvVar1,param_5,param_6,0xffffffff,param_3,param_4,3);
      __ptr[8] = pvVar1;
    }
    return __ptr;
  }
  return (undefined4 *)0x0;
}



/* ===== rknn_create_mem_from_fd @ 000196e0 size=328 ===== */

int * rknn_create_mem_from_fd(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *__ptr;
  void *__ptr_00;
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00019828 + 0x196f8;
  if ((param_1 != (undefined4 *)0x0) && (__ptr = malloc(0x28), __ptr != (int *)0x0)) {
    __ptr[1] = 0;
    __ptr[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    __ptr[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    __ptr[4] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    __ptr[8] = 0;
    __ptr[9] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *__ptr = param_3;
    __ptr[4] = param_2;
    __ptr[5] = param_5;
    __ptr[6] = param_4;
    __ptr[2] = -1;
    __ptr[3] = -1;
    __ptr[7] = 2;
    __ptr_00 = malloc(0x38);
    if (__ptr_00 == (void *)0x0) {
      free(__ptr);
      iVar1 = FUN_000173e0();
      if (iVar1 < 0) {
        return (int *)0x0;
      }
      fwrite((void *)(DAT_00019830 + 0x197dc),1,0x4a,(FILE *)**(undefined4 **)(iVar2 + DAT_0001982c)
            );
      __ptr = (int *)0x0;
    }
    else {
      iVar1 = FUN_000141e4(*param_1,param_2,param_3 + param_5,param_4,2,__ptr_00);
      if (iVar1 < 0) {
        free(__ptr);
        free(__ptr_00);
        iVar1 = FUN_000173e0();
        if (iVar1 < 0) {
          return (int *)0x0;
        }
        __ptr = (int *)0x0;
        fwrite((void *)(DAT_00019834 + 0x19820),1,0x3e,
               (FILE *)**(undefined4 **)(iVar2 + DAT_0001982c));
      }
      else {
        __ptr[8] = (int)__ptr_00;
        iVar2 = *(int *)((int)__ptr_00 + 0x2c);
        __ptr[2] = *(int *)((int)__ptr_00 + 0x28);
        __ptr[3] = iVar2;
      }
    }
    return __ptr;
  }
  return (int *)0x0;
}



/* ===== rknn_create_mem @ 00019838 size=272 ===== */

int * rknn_create_mem(undefined4 *param_1,int param_2)

{
  void *__ptr;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = DAT_00019948 + 0x1984c;
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 == 0) {
      iVar2 = FUN_000173e0();
      if (-1 < iVar2) {
        fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_0001994c),(char *)(DAT_00019950 + 0x19904),0);
        return (int *)0x0;
      }
    }
    else {
      __ptr = malloc(0x38);
      if (__ptr != (void *)0x0) {
        iVar3 = FUN_000147b8(*param_1,param_2,2,__ptr);
        if (iVar3 != 0) {
          piVar1 = malloc(0x28);
          iVar2 = *(int *)((int)__ptr + 0x18);
          iVar4 = *(int *)((int)__ptr + 0x28);
          iVar5 = *(int *)((int)__ptr + 0x2c);
          piVar1[1] = 0;
          piVar1[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          piVar1[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          piVar1[4] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          *piVar1 = iVar3;
          piVar1[8] = 0;
          piVar1[9] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          piVar1[6] = param_2;
          piVar1[8] = (int)__ptr;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          piVar1[4] = iVar2;
          piVar1[5] = 0;
          piVar1[7] = 1;
          return piVar1;
        }
        free(__ptr);
        return (int *)0x0;
      }
      iVar2 = FUN_000173e0();
      if (-1 < iVar2) {
        fwrite((void *)(DAT_00019954 + 0x1993c),1,0x42,
               (FILE *)**(undefined4 **)(iVar3 + DAT_0001994c));
        return (int *)0x0;
      }
    }
  }
  return (int *)0x0;
}



/* ===== rknn_destroy_mem @ 00019958 size=356 ===== */

undefined4 rknn_destroy_mem(undefined4 *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *__ptr;
  int *piVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xfffffff9;
  }
  if (param_2 == (void *)0x0) {
    return 0xfffffffb;
  }
  __ptr = *(void **)((int)param_2 + 0x20);
  iVar2 = *(int *)((int)param_2 + 0x1c);
  if (__ptr == (void *)0x0) goto LAB_00019998;
  if (iVar2 == 1) {
    FUN_00013f80(*param_1,__ptr);
    piVar6 = (int *)param_1[0x2f];
    if (piVar6 != (int *)0x0) {
      iVar2 = *piVar6;
      if (0 < iVar2) {
        iVar3 = piVar6[1];
        iVar1 = *(int *)((int)param_2 + 0x20);
        iVar5 = iVar3;
        do {
          iVar4 = iVar5 + 0x1bc;
          if (*(int *)(iVar5 + 0x1b4) == iVar1) {
            *(undefined4 *)(iVar5 + 0x1b4) = 0;
          }
          iVar5 = iVar4;
        } while (iVar2 * 0x1bc + iVar3 != iVar4);
      }
      iVar2 = piVar6[2];
      if (0 < iVar2) {
        iVar3 = piVar6[3];
        iVar1 = *(int *)((int)param_2 + 0x20);
        iVar5 = iVar3;
        do {
          iVar4 = iVar5 + 0x1bc;
          if (*(int *)(iVar5 + 0x1b4) == iVar1) {
            *(undefined4 *)(iVar5 + 0x1b4) = 0;
          }
          iVar5 = iVar4;
        } while (iVar4 != iVar2 * 0x1bc + iVar3);
      }
    }
    free(__ptr);
    __ptr = *(void **)((int)param_2 + 0x20);
    if (__ptr != (void *)0x0) {
      iVar2 = *(int *)((int)param_2 + 0x1c);
      goto joined_r0x00019a5c;
    }
  }
  else {
joined_r0x00019a5c:
    if (iVar2 == 2) {
      FUN_00014410(*param_1,__ptr);
      free(__ptr);
      free(param_2);
      __ptr = *(void **)((int)param_2 + 0x20);
      iVar2 = *(int *)((int)param_2 + 0x1c);
      if (__ptr == (void *)0x0) goto LAB_00019998;
    }
    if (iVar2 != 3) goto LAB_00019998;
    free(__ptr);
    free(param_2);
  }
  iVar2 = *(int *)((int)param_2 + 0x1c);
LAB_00019998:
  if (iVar2 == 1) {
    free(param_2);
    return 0;
  }
  return 0;
}



/* ===== rknn_set_weight_mem @ 00019abc size=328 ===== */

undefined4 rknn_set_weight_mem(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_00019c04 + 0x19ad4;
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xfffffff9;
  }
  else if (param_2 == (int *)0x0) {
    uVar1 = 0xfffffffb;
  }
  else {
    if (param_2[8] == 0) {
      iVar2 = FUN_000173e0();
      if (-1 < iVar2) {
        fwrite((void *)(DAT_00019c10 + 0x19bfc),1,0x38,
               (FILE *)**(undefined4 **)(iVar3 + DAT_00019c08));
      }
    }
    else {
      if ((param_1[0x34] & 0x10) != 0) {
        memcpy((void *)(*param_2 + param_2[5]),(void *)param_1[0x20],param_1[0x21]);
        FUN_00012498(param_1,param_2[2] + param_2[5],param_1[0x32]);
        iVar3 = param_2[5];
        param_1[0x32] = (iVar3 + param_2[2]) - param_1[0x1c];
        FUN_00014578(*param_1,param_2[8],iVar3,param_1[0x21],1);
        FUN_00013f80(*param_1,param_1 + 0x20);
        iVar2 = *param_2;
        iVar3 = param_2[5];
        param_1[0x26] = 0xffffffff;
        param_1[0x20] = iVar2 + iVar3;
        return 0;
      }
      iVar2 = FUN_000173e0();
      if (-1 < iVar2) {
        fwrite((void *)(DAT_00019c0c + 0x19bc8),1,0x69,
               (FILE *)**(undefined4 **)(iVar3 + DAT_00019c08));
        return 0xffffffff;
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== rknn_set_internal_mem @ 00019c14 size=332 ===== */

undefined4 rknn_set_internal_mem(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00019d60 + 0x19c28;
  if (param_1 == 0) {
    return 0xfffffff9;
  }
  if (param_2 == 0) {
    return 0xfffffffb;
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    iVar2 = FUN_000173e0();
    if (-1 < iVar2) {
      fwrite((void *)(DAT_00019d70 + 0x19d58),1,0x38,(FILE *)**(undefined4 **)(iVar1 + DAT_00019d64)
            );
    }
  }
  else if ((*(uint *)(param_1 + 0xd0) & 0x10) == 0) {
    iVar2 = FUN_000173e0();
    if (-1 < iVar2) {
      fwrite((void *)(DAT_00019d68 + 0x19cf4),1,0x6b,(FILE *)**(undefined4 **)(iVar1 + DAT_00019d64)
            );
      return 0xffffffff;
    }
  }
  else {
    if (*(char *)(param_1 + 0xd4) == '\0') {
      FUN_00013968(param_1,*(int *)(param_2 + 8) + *(int *)(param_2 + 0x14),
                   *(undefined4 *)(param_1 + 0xcc));
      FUN_000114f4(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x14));
      FUN_000117c8(param_1,*(undefined4 *)(param_2 + 0x20));
      iVar1 = *(int *)(param_2 + 8);
      iVar2 = *(int *)(param_2 + 0x14);
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0x20);
      *(int *)(param_1 + 0xcc) = (iVar1 + iVar2) - *(int *)(param_1 + 0x70);
      return 0;
    }
    iVar2 = FUN_000173e0();
    if (-1 < iVar2) {
      fwrite((void *)(DAT_00019d6c + 0x19d24),1,0x44,(FILE *)**(undefined4 **)(iVar1 + DAT_00019d64)
            );
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}



/* ===== rknn_set_io_mem @ 00019d74 size=3024 ===== */

undefined4 rknn_set_io_mem(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *__s1;
  char *pcVar8;
  char *__s2;
  FILE *__stream;
  int iVar9;
  int *piVar10;
  int local_13c;
  int local_138;
  char acStack_128 [260];
  
  iVar6 = DAT_0001a944 + 0x19d8c;
  if (param_1 == (undefined4 *)0x0) {
    return 0xfffffff9;
  }
  if (param_2 != 0 && param_3 != 0) {
    piVar10 = (int *)param_1[0x2f];
    if (piVar10 != (int *)0x0) {
      local_138 = *piVar10;
      if (0 < local_138) {
        iVar9 = 0;
        do {
          pcVar8 = (char *)(iVar9 * 0x1bc + piVar10[1]);
          iVar1 = strcmp((char *)(param_3 + 0x48),pcVar8);
          if (iVar1 == 0) {
            if ((*(char *)(param_3 + 0x170) == '\x01') && (0 < piVar10[0x11])) {
              iVar1 = piVar10[0x12];
              pcVar8[0x100] = '\x02';
              pcVar8[0x101] = '\0';
              pcVar8[0x102] = '\0';
              pcVar8[0x103] = '\0';
              FUN_00012340(param_1,iVar9 * 0x110 + iVar1);
            }
            if (*(int *)(param_3 + 0x154) == 0 &&
                *(int *)(pcVar8 + 0x100) != *(int *)(param_3 + 0x154)) {
              iVar9 = FUN_000173e0();
              if (iVar9 < 0) {
                return 0xfffffffb;
              }
              switch(*(undefined4 *)(pcVar8 + 0x100)) {
              case 0:
                iVar9 = DAT_0001a9cc + 0x1a5c4;
                break;
              case 1:
                iVar9 = DAT_0001a9c8 + 0x1a5b8;
                break;
              case 2:
                iVar9 = DAT_0001a9c4 + 0x1a5ac;
                break;
              case 3:
                iVar9 = DAT_0001a9c0 + 0x1a5a0;
                break;
              case 4:
                iVar9 = DAT_0001a9bc + 0x1a594;
                break;
              case 5:
                iVar9 = DAT_0001a9b8 + 0x1a588;
                break;
              case 6:
                iVar9 = DAT_0001a9b4 + 0x1a57c;
                break;
              case 7:
                iVar9 = DAT_0001a9b0 + 0x1a570;
                break;
              case 8:
                iVar9 = DAT_0001a980 + 0x1a4a0;
                break;
              default:
                iVar9 = DAT_0001aa88 + 0x1a938;
              }
              switch(*(undefined4 *)(param_3 + 0x154)) {
              case 0:
                iVar1 = DAT_0001a9ac + 0x1a564;
                break;
              case 1:
                iVar1 = DAT_0001a9a8 + 0x1a558;
                break;
              case 2:
                iVar1 = DAT_0001a9a4 + 0x1a54c;
                break;
              case 3:
                iVar1 = DAT_0001a9a0 + 0x1a540;
                break;
              case 4:
                iVar1 = DAT_0001a99c + 0x1a534;
                break;
              case 5:
                iVar1 = DAT_0001a998 + 0x1a528;
                break;
              case 6:
                iVar1 = DAT_0001a994 + 0x1a51c;
                break;
              case 7:
                iVar1 = DAT_0001a990 + 0x1a510;
                break;
              case 8:
                iVar1 = DAT_0001a98c + 0x1a504;
                break;
              case 9:
                iVar1 = DAT_0001a984 + 0x1a4e0;
                break;
              default:
                iVar1 = DAT_0001aa80 + 0x1a920;
              }
              fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_0001a950),
                      (char *)(DAT_0001a988 + 0x1a4f0),pcVar8,iVar9,iVar1);
              return 0xfffffffb;
            }
            if (*(int *)(param_3 + 0x150) != *(int *)(pcVar8 + 0x104)) {
              iVar9 = FUN_000173e0();
              if (iVar9 < 0) {
                return 0xfffffffb;
              }
              iVar9 = *(int *)(pcVar8 + 0x104);
              if (iVar9 == 1) {
                iVar9 = DAT_0001a9d8 + 0x1a614;
              }
              else if (iVar9 == 0) {
                iVar9 = DAT_0001a9d4 + 0x1a608;
              }
              else if (iVar9 == 2) {
                iVar9 = DAT_0001a964 + 0x1a364;
              }
              else {
                iVar9 = DAT_0001a9d0 + 0x1a5d0;
              }
              switch(*(undefined4 *)(param_3 + 0x150)) {
              case 0:
                iVar1 = DAT_0001a978 + 0x1a3c8;
                break;
              case 1:
                iVar1 = DAT_0001a974 + 0x1a3bc;
                break;
              case 2:
                iVar1 = DAT_0001a970 + 0x1a3b0;
                break;
              case 3:
                iVar1 = DAT_0001a968 + 0x1a38c;
                break;
              default:
                iVar1 = (int)&DAT_0001a944 + DAT_0001aa8c;
              }
              fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_0001a950),
                      (char *)(DAT_0001a96c + 0x1a39c),pcVar8,iVar9,iVar1);
              return 0xfffffffb;
            }
            if (*(int *)(param_2 + 0x18) != *(int *)(param_3 + 0x16c)) {
              iVar9 = FUN_000173e0();
              if (iVar9 < 0) {
                return 0xfffffffb;
              }
              fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_0001a950),
                      (char *)(DAT_0001a960 + 0x1a314),pcVar8,*(undefined4 *)(param_3 + 0x16c),
                      *(undefined4 *)(param_2 + 0x18));
              return 0xfffffffb;
            }
            if (*(int *)(param_2 + 0x20) != 0) {
              *(int *)(pcVar8 + 0x1b4) = *(int *)(param_2 + 0x20);
            }
            if (0 < *(int *)(pcVar8 + 0x1ac)) {
              piVar10 = *(int **)(pcVar8 + 0x1b0);
              if ((piVar10[1] < 1) || ((uint)param_1[3] < (uint)(piVar10[1] + *piVar10))) {
LAB_0001a05c:
                iVar9 = FUN_000173e0();
                if (iVar9 < 0) {
                  return 0xfffffffb;
                }
                fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_0001a950),
                        (char *)(DAT_0001a958 + 0x1a0a4),*piVar10,piVar10[1],param_1[3]);
                return 0xfffffffb;
              }
              iVar5 = *(int *)(pcVar8 + 0x19c);
              iVar7 = *(int *)(*(int *)(pcVar8 + 0x1b4) + 0x28);
              iVar1 = 0;
              while( true ) {
                FUN_000121b8(param_1,piVar10,iVar5,iVar7,0);
                iVar1 = iVar1 + 1;
                FUN_00011818(param_1,pcVar8);
                iVar7 = *(int *)(*(int *)(pcVar8 + 0x1b4) + 0x28);
                iVar5 = iVar7 - param_1[0x1c];
                *(int *)(pcVar8 + 0x19c) = iVar5;
                if (*(int *)(pcVar8 + 0x1ac) <= iVar1) break;
                piVar10 = (int *)(*(int *)(pcVar8 + 0x1b0) + iVar1 * 0xc);
                if ((piVar10[1] < 1) ||
                   ((uint)param_1[3] <
                    (uint)(piVar10[1] + *(int *)(*(int *)(pcVar8 + 0x1b0) + iVar1 * 0xc))))
                goto LAB_0001a05c;
              }
            }
            piVar10 = (int *)param_1[0x2f];
            local_138 = *piVar10;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_138);
      }
      iVar9 = piVar10[2];
      if (0 < iVar9) {
        pcVar8 = (char *)(DAT_0001a948 + 0x19f34);
        __s1 = (char *)(param_3 + 0x48);
        local_13c = 0;
        do {
          iVar5 = piVar10[0x10];
          iVar1 = piVar10[3];
          if (iVar5 < 0x1002) {
            iVar7 = 0x1bc;
          }
          else {
            iVar7 = 0x534;
          }
          __s2 = (char *)(iVar7 * local_13c + iVar1);
          iVar7 = strcmp(__s1,__s2);
          if (iVar7 == 0) {
LAB_00019fb4:
            if (*(uint *)(param_2 + 0x18) < *(uint *)(param_3 + 0x16c)) {
              iVar9 = FUN_000173e0();
              if (iVar9 < 0) {
                return 0xfffffffb;
              }
              iVar9 = *(int *)(param_3 + 0x16c);
              __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_0001a950);
              iVar6 = FUN_000174fc(*(undefined4 *)(param_3 + 0x154));
              fprintf(__stream,(char *)(DAT_0001a9e0 + 0x1a68c),__s2,iVar9 * iVar6,
                      *(undefined4 *)(param_2 + 0x18));
              return 0xfffffffb;
            }
            iVar9 = *(int *)(__s2 + 0x100);
            if (iVar5 < 0x1002) {
              if (*(int *)(param_3 + 0x154) != iVar9) {
                iVar9 = FUN_000173e0();
                if (iVar9 < 0) {
                  return 0xfffffffb;
                }
                switch(*(undefined4 *)(__s2 + 0x100)) {
                case 0:
                  iVar9 = DAT_0001aa24 + 0x1a7cc;
                  break;
                case 1:
                  iVar9 = DAT_0001aa40 + 0x1a854;
                  break;
                case 2:
                  iVar9 = DAT_0001aa3c + 0x1a848;
                  break;
                case 3:
                  iVar9 = DAT_0001aa38 + 0x1a83c;
                  break;
                case 4:
                  iVar9 = DAT_0001aa34 + 0x1a830;
                  break;
                case 5:
                  iVar9 = DAT_0001aa30 + 0x1a824;
                  break;
                case 6:
                  iVar9 = DAT_0001aa2c + 0x1a818;
                  break;
                case 7:
                  iVar9 = DAT_0001aa44 + 0x1a860;
                  break;
                case 8:
                  iVar9 = DAT_0001aa28 + 0x1a80c;
                  break;
                default:
                  iVar9 = DAT_0001aa78 + 0x1a908;
                }
                switch(*(undefined4 *)(param_3 + 0x154)) {
                case 0:
                  iVar1 = DAT_0001aa70 + 0x1a8f0;
                  break;
                case 1:
                  iVar1 = DAT_0001aa6c + 0x1a8e4;
                  break;
                case 2:
                  iVar1 = DAT_0001aa68 + 0x1a8d8;
                  break;
                case 3:
                  iVar1 = DAT_0001aa64 + 0x1a8cc;
                  break;
                case 4:
                  iVar1 = DAT_0001aa60 + 0x1a8c0;
                  break;
                case 5:
                  iVar1 = DAT_0001aa5c + 0x1a8b4;
                  break;
                case 6:
                  iVar1 = DAT_0001aa58 + 0x1a8a8;
                  break;
                case 7:
                  iVar1 = DAT_0001aa54 + 0x1a89c;
                  break;
                case 8:
                  iVar1 = DAT_0001aa50 + 0x1a890;
                  break;
                case 9:
                  iVar1 = DAT_0001aa48 + 0x1a86c;
                  break;
                default:
                  iVar1 = DAT_0001aa74 + 0x1a8fc;
                }
                fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_0001a950),
                        (char *)(DAT_0001aa4c + 0x1a87c),__s2,iVar9,iVar1);
                return 0xfffffffb;
              }
              if (*(int *)(param_3 + 0x150) != *(int *)(__s2 + 0x104)) {
                iVar9 = FUN_000173e0();
                if (iVar9 < 0) {
                  return 0xfffffffb;
                }
                iVar9 = *(int *)(__s2 + 0x104);
                if (iVar9 == 1) {
                  iVar9 = DAT_0001aa20 + 0x1a770;
                }
                else if (iVar9 == 0) {
                  iVar9 = DAT_0001aa1c + 0x1a764;
                }
                else if (iVar9 == 2) {
                  iVar9 = DAT_0001a97c + 0x1a428;
                }
                else {
                  iVar9 = DAT_0001aa18 + 0x1a758;
                }
                switch(*(undefined4 *)(param_3 + 0x150)) {
                case 0:
                  iVar1 = DAT_0001aa14 + 0x1a74c;
                  break;
                case 1:
                  iVar1 = DAT_0001aa10 + 0x1a740;
                  break;
                case 2:
                  iVar1 = DAT_0001aa0c + 0x1a734;
                  break;
                case 3:
                  iVar1 = DAT_0001a9ec + 0x1a6cc;
                  break;
                default:
                  iVar1 = DAT_0001aa7c + 0x1a914;
                }
                fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_0001a950),
                        (char *)(DAT_0001a9f0 + 0x1a6dc),__s2,iVar9,iVar1);
                return 0xfffffffb;
              }
            }
            else {
              iVar5 = *(int *)(param_3 + 0x150);
              if (iVar5 == 2) {
                param_1[0x31] = 0;
              }
              else if (iVar5 == 1) {
                if (*(int *)(param_3 + 0x154) == 0) {
                  param_1[0x31] = 2;
                  __s2 = (char *)(local_13c * 0x534 + iVar1 + 0x378);
                }
                else if (*(int *)(param_3 + 0x154) == iVar9) {
                  param_1[0x31] = 1;
                  __s2 = (char *)(local_13c * 0x534 + iVar1 + 0x1bc);
                }
              }
              else if (iVar5 != *(int *)(__s2 + 0x104)) {
                iVar9 = FUN_000173e0();
                if (iVar9 < 0) {
                  return 0xfffffffb;
                }
                iVar9 = *(int *)(__s2 + 0x104);
                if (iVar9 == 1) {
                  iVar9 = DAT_0001a9f4 + 0x1a6ec;
                }
                else if (iVar9 == 0) {
                  iVar9 = DAT_0001a9fc + 0x1a704;
                }
                else if (iVar9 == 2) {
                  iVar9 = DAT_0001a954 + 0x1a040;
                }
                else {
                  iVar9 = DAT_0001a9f8 + 0x1a6f8;
                }
                switch(*(undefined4 *)(param_3 + 0x150)) {
                case 0:
                  iVar1 = DAT_0001aa08 + 0x1a728;
                  break;
                case 1:
                  iVar1 = DAT_0001aa04 + 0x1a71c;
                  break;
                case 2:
                  iVar1 = DAT_0001aa00 + 0x1a710;
                  break;
                case 3:
                  iVar1 = DAT_0001a9e4 + 0x1a6a8;
                  break;
                default:
                  iVar1 = DAT_0001aa84 + 0x1a92c;
                }
                fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_0001a950),
                        (char *)(DAT_0001a9e8 + 0x1a6b8),__s2,iVar9,iVar1);
                return 0xfffffffb;
              }
            }
            if (*(int *)(param_2 + 0x20) != 0) {
              *(int *)(__s2 + 0x1b4) = *(int *)(param_2 + 0x20);
            }
            pcVar2 = strstr(__s2,pcVar8);
            if (0 < *(int *)(__s2 + 0x1ac)) {
              piVar10 = *(int **)(__s2 + 0x1b0);
              if ((piVar10[1] < 1) || ((uint)param_1[3] < (uint)(piVar10[1] + *piVar10))) {
LAB_0001a298:
                iVar9 = FUN_000173e0();
                if (iVar9 < 0) {
                  return 0xfffffffb;
                }
                fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_0001a950),
                        (char *)(DAT_0001a95c + 0x1a2d4),*piVar10,piVar10[1],param_1[3]);
                return 0xfffffffb;
              }
              iVar1 = 0;
              while( true ) {
                iVar1 = iVar1 + 1;
                FUN_000121b8(param_1,piVar10,*(undefined4 *)(__s2 + 0x19c),
                             *(undefined4 *)(*(int *)(__s2 + 0x1b4) + 0x28),
                             pcVar2 != (char *)0x0 && iVar9 == 2);
                if (*(int *)(__s2 + 0x1ac) <= iVar1) break;
                piVar10 = (int *)(*(int *)(__s2 + 0x1b0) + iVar1 * 0xc);
                if ((piVar10[1] < 1) ||
                   ((uint)param_1[3] <
                    (uint)(piVar10[1] + *(int *)(*(int *)(__s2 + 0x1b0) + iVar1 * 0xc))))
                goto LAB_0001a298;
              }
            }
            iVar9 = param_1[0x31];
            *(int *)(__s2 + 0x19c) = *(int *)(*(int *)(__s2 + 0x1b4) + 0x28) - param_1[0x1c];
            if (iVar9 == 0) {
              sVar3 = strlen(__s2);
              if (pcVar2 != (char *)0x0) {
                sVar3 = sVar3 - 10;
              }
              memset(acStack_128,0,0x100);
              strncpy(acStack_128,__s2,sVar3);
              uVar4 = *(undefined4 *)(__s2 + 0x1b4);
              acStack_128[sVar3] = '\0';
              FUN_000118d4(param_1,uVar4,acStack_128);
              FUN_00011930(param_1,acStack_128,__s2);
            }
            piVar10 = (int *)param_1[0x2f];
            iVar9 = piVar10[2];
          }
          else {
            pcVar2 = strstr(__s2,(char *)(DAT_0001a94c + 0x19f8c));
            if (pcVar2 != (char *)0x0) {
              sVar3 = strlen(__s1);
              iVar7 = strncmp(__s1,__s2,sVar3);
              if (iVar7 == 0) goto LAB_00019fb4;
            }
          }
          local_13c = local_13c + 1;
        } while (local_13c < iVar9);
      }
      *(undefined1 *)(param_1 + 0x35) = 1;
      FUN_00014578(*param_1,param_1 + 0x12,param_1[2],param_1[0x13] - param_1[2],1);
      return 0;
    }
    iVar9 = FUN_000173e0();
    if (-1 < iVar9) {
      fwrite((void *)(DAT_0001a9dc + 0x1a640),1,0x31,(FILE *)**(undefined4 **)(iVar6 + DAT_0001a950)
            );
      return 0xfffffffb;
    }
  }
  return 0xfffffffb;
}



/* ===== FUN_0001aa90 @ 0001aa90 size=272 ===== */

int FUN_0001aa90(int *param_1,int param_2)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar5 = *param_1;
  if (iVar5 == 0) {
    return 0;
  }
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (uVar2 <= (uint)param_1[2])) {
    return 0;
  }
  if (param_2 < 0) {
    return 0;
  }
  uVar1 = param_1[2] + param_2 + 1;
  if (uVar1 <= uVar2) {
    return iVar5 + param_1[2];
  }
  if (param_1[4] != 0) {
    return 0;
  }
  if (uVar1 < 0x40000000) {
    pcVar3 = (code *)param_1[8];
    iVar4 = uVar1 * 2;
  }
  else {
    if ((int)uVar1 < 0) {
      return 0;
    }
    iVar4 = 0x7fffffff;
    pcVar3 = (code *)param_1[8];
  }
  if (pcVar3 == (code *)0x0) {
    __dest = (void *)(*(code *)param_1[6])(iVar4);
    if (__dest == (void *)0x0) goto LAB_0001ab88;
    memcpy(__dest,(void *)*param_1,param_1[2] + 1);
    (*(code *)param_1[7])(*param_1);
  }
  else {
    __dest = (void *)(*pcVar3)(iVar5,iVar4);
    if (__dest == (void *)0x0) {
LAB_0001ab88:
      (*(code *)param_1[7])(*param_1);
      param_1[1] = 0;
      *param_1 = 0;
      return 0;
    }
  }
  *param_1 = (int)__dest;
  param_1[1] = iVar4;
  return (int)__dest + param_1[2];
}



/* ===== FUN_0001acc4 @ 0001acc4 size=548 ===== */

undefined4 FUN_0001acc4(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  uint extraout_r2;
  uint extraout_r2_00;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *__format;
  bool bVar11;
  bool bVar12;
  
  if (*param_1 == 0) {
    puVar1 = (undefined1 *)FUN_0001aa90(param_2,3,param_3,param_4,param_4);
    if (puVar1 == (undefined1 *)0x0) {
      return 0;
    }
    pbVar8 = puVar1 + 1;
    pbVar10 = (byte *)0x2;
    pbVar6 = (byte *)0x0;
    pbVar9 = pbVar8;
  }
  else {
    iVar7 = 0;
    pbVar6 = param_1;
    uVar5 = (uint)*param_1;
    do {
      while (pbVar8 = pbVar6, uVar3 = uVar5 - 8, uVar5 < 0xe) {
        if ((uVar5 < 0xc) && (2 < uVar3)) goto LAB_0001acf4;
LAB_0001ad24:
        uVar5 = (uint)pbVar8[1];
        iVar7 = iVar7 + 1;
        pbVar6 = pbVar8 + 1;
        if (uVar5 == 0) goto LAB_0001ad34;
      }
      if ((uVar5 == 0x22) || (uVar5 == 0x5c)) goto LAB_0001ad24;
LAB_0001acf4:
      uVar4 = (uint)pbVar8[1];
      if (uVar5 < 0x20) {
        iVar7 = iVar7 + 5;
      }
      pbVar6 = pbVar8 + 1;
      uVar5 = uVar4;
    } while (uVar4 != 0);
LAB_0001ad34:
    pbVar6 = pbVar8 + 1 + (iVar7 - (int)param_1);
    puVar1 = (undefined1 *)FUN_0001aa90(param_2,pbVar6 + 3,pbVar8 + 1,uVar3,param_4);
    if (puVar1 == (undefined1 *)0x0) {
      return 0;
    }
    pbVar8 = puVar1 + 1;
    pbVar10 = pbVar6 + 2;
    pbVar9 = puVar1 + (int)(pbVar6 + 1);
    if (iVar7 != 0) {
      *puVar1 = 0x22;
      bVar2 = *param_1;
      if (bVar2 != 0) {
        __format = (char *)(DAT_0001aee8 + 0x1ad90);
        uVar5 = extraout_r2;
        do {
          while( true ) {
            bVar12 = 0x21 < bVar2;
            bVar11 = bVar2 != 0x22;
            if (bVar11) {
              bVar12 = 0x1e < bVar2;
            }
            if (bVar12 && (bVar11 && bVar2 != 0x1f)) {
              uVar5 = 1;
            }
            if (!bVar12 || (!bVar11 || bVar2 == 0x1f)) {
              uVar5 = 0;
            }
            if (bVar2 == 0x5c) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 & 1;
            }
            if (uVar5 == 0) break;
            *pbVar8 = bVar2;
            pbVar9 = pbVar8 + 1;
LAB_0001adb4:
            param_1 = param_1 + 1;
            bVar2 = *param_1;
            pbVar8 = pbVar9;
            if (bVar2 == 0) goto LAB_0001ae34;
          }
          *pbVar8 = 0x5c;
          uVar5 = (uint)*param_1;
          if (uVar5 == 0xc) {
            pbVar8[1] = 0x66;
            pbVar9 = pbVar8 + 2;
            goto LAB_0001adb4;
          }
          if (uVar5 < 0xd) {
            if (uVar5 == 9) {
              pbVar9 = pbVar8 + 2;
              pbVar8[1] = 0x74;
            }
            else if (uVar5 == 10) {
              pbVar9 = pbVar8 + 2;
              pbVar8[1] = 0x6e;
            }
            else {
              if (uVar5 != 8) goto LAB_0001ada8;
              pbVar9 = pbVar8 + 2;
              pbVar8[1] = 0x62;
            }
            goto LAB_0001adb4;
          }
          if ((uVar5 == 0x22) || (uVar5 == 0x5c)) {
            pbVar8[1] = *param_1;
            pbVar9 = pbVar8 + 2;
            goto LAB_0001adb4;
          }
          if (uVar5 != 0xd) {
LAB_0001ada8:
            pbVar9 = pbVar8 + 6;
            sprintf((char *)(pbVar8 + 1),__format);
            uVar5 = extraout_r2_00;
            goto LAB_0001adb4;
          }
          pbVar8[1] = 0x72;
          param_1 = param_1 + 1;
          bVar2 = *param_1;
          pbVar8 = pbVar8 + 2;
        } while (bVar2 != 0);
      }
LAB_0001ae34:
      puVar1[(int)(pbVar6 + 1)] = 0x22;
      puVar1[(int)pbVar10] = 0;
      return 1;
    }
  }
  *puVar1 = 0x22;
  memcpy(pbVar8,param_1,(size_t)pbVar6);
  *pbVar9 = 0x22;
  puVar1[(int)pbVar10] = 0;
  return 1;
}



/* ===== FUN_0001aeec @ 0001aeec size=1960 ===== */

undefined4 FUN_0001aeec(int param_1,int *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  size_t sVar3;
  void *__dest;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  uint uVar14;
  char *pcVar15;
  undefined4 *puVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  undefined2 *puVar20;
  double __value;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  undefined2 local_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  char cStack_38;
  char cStack_37;
  undefined4 local_36;
  undefined4 local_32;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  if (bVar1 != 8) {
    if (bVar1 < 9) {
      if (bVar1 == 2) {
        puVar4 = (undefined4 *)FUN_0001aa90(param_2,5);
        if (puVar4 == (undefined4 *)0x0) {
          return 0;
        }
        puVar16 = (undefined4 *)(DAT_0001b6a8 + 0x1b2ac);
      }
      else {
        if (bVar1 != 4) {
          if (bVar1 != 1) {
            return 0;
          }
          puVar4 = (undefined4 *)FUN_0001aa90(param_2,6);
          if (puVar4 == (undefined4 *)0x0) {
            return 0;
          }
          uVar2 = *(undefined2 *)(DAT_0001b6a0 + 0x1afe0);
          *puVar4 = *(undefined4 *)(DAT_0001b6a0 + 0x1afdc);
          *(undefined2 *)(puVar4 + 1) = uVar2;
          return 1;
        }
        puVar4 = (undefined4 *)FUN_0001aa90(param_2,5);
        if (puVar4 == (undefined4 *)0x0) {
          return 0;
        }
        puVar16 = (undefined4 *)(DAT_0001b6ac + 0x1b2ec);
      }
      uVar13 = *(undefined1 *)(puVar16 + 1);
      *puVar4 = *puVar16;
      *(undefined1 *)(puVar4 + 1) = uVar13;
      return 1;
    }
    if (bVar1 == 0x20) {
      if (param_2 == (int *)0x0) {
        return 0;
      }
      piVar18 = *(int **)(param_1 + 8);
      puVar7 = (undefined1 *)FUN_0001aa90(param_2,1);
      if (puVar7 == (undefined1 *)0x0) {
        return 0;
      }
      *puVar7 = 0x5b;
      uVar21 = VectorAdd(*(undefined8 *)(param_2 + 2),0x100000001,4);
      *(undefined8 *)(param_2 + 2) = uVar21;
      while (piVar18 != (int *)0x0) {
        iVar19 = FUN_0001aeec(piVar18,param_2);
        if (iVar19 == 0) {
          return 0;
        }
        if (*param_2 != 0) {
          iVar19 = param_2[2];
          sVar3 = strlen((char *)(*param_2 + iVar19));
          param_2[2] = iVar19 + sVar3;
        }
        if (*piVar18 == 0) break;
        if (param_2[5] == 0) {
          uVar12 = 2;
          iVar19 = 1;
        }
        else {
          uVar12 = 3;
          iVar19 = 2;
        }
        puVar7 = (undefined1 *)FUN_0001aa90(param_2,uVar12);
        if (puVar7 == (undefined1 *)0x0) {
          return 0;
        }
        *puVar7 = 0x2c;
        if (param_2[5] == 0) {
          puVar7[1] = 0;
        }
        else {
          puVar7[1] = 0x20;
          puVar7[2] = 0;
        }
        piVar18 = (int *)*piVar18;
        param_2[2] = param_2[2] + iVar19;
      }
      puVar7 = (undefined1 *)FUN_0001aa90(param_2,2);
      if (puVar7 == (undefined1 *)0x0) {
        return 0;
      }
      uVar13 = 0x5d;
      goto LAB_0001b26c;
    }
    if (bVar1 < 0x21) {
      if (bVar1 != 0x10) {
        return 0;
      }
      if (param_2 == (int *)0x0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar12 = FUN_0001acc4();
        return uVar12;
      }
      puVar20 = (undefined2 *)FUN_0001aa90(param_2,3);
      if (puVar20 == (undefined2 *)0x0) {
        return 0;
      }
      uVar13 = *(undefined1 *)(DAT_0001b6c0 + 0x1b67e);
      *puVar20 = *(undefined2 *)(DAT_0001b6c0 + 0x1b67c);
      *(undefined1 *)(puVar20 + 1) = uVar13;
      return 1;
    }
    if (bVar1 != 0x40) {
      if (bVar1 != 0x80) {
        return 0;
      }
      if (*(char **)(param_1 + 0x10) == (char *)0x0) {
        return 0;
      }
      sVar3 = strlen(*(char **)(param_1 + 0x10));
      __dest = (void *)FUN_0001aa90(param_2,sVar3 + 1);
      if (__dest == (void *)0x0) {
        return 0;
      }
      memcpy(__dest,*(void **)(param_1 + 0x10),sVar3 + 1);
      return 1;
    }
    if (param_2 == (int *)0x0) {
      return 0;
    }
    piVar18 = *(int **)(param_1 + 8);
    if (param_2[5] == 0) {
      uVar12 = 2;
      iVar19 = 1;
    }
    else {
      uVar12 = 3;
      iVar19 = 2;
    }
    puVar7 = (undefined1 *)FUN_0001aa90(param_2,uVar12);
    if (puVar7 == (undefined1 *)0x0) {
      return 0;
    }
    *puVar7 = 0x7b;
    param_2[3] = param_2[3] + 1;
    if (param_2[5] == 0) {
      param_2[2] = param_2[2] + iVar19;
      iVar9 = 0;
      if (piVar18 != (int *)0x0) {
LAB_0001b354:
        iVar19 = DAT_0001b6b0;
        puVar20 = (undefined2 *)(DAT_0001b6b0 + 0x1b364);
        do {
          if (iVar9 == 0) {
            iVar9 = piVar18[8];
            if (iVar9 == 0) goto LAB_0001b4e4;
LAB_0001b370:
            iVar9 = FUN_0001acc4(iVar9,param_2);
            if (iVar9 == 0) {
              return 0;
            }
          }
          else {
            puVar7 = (undefined1 *)FUN_0001aa90(param_2,param_2[3]);
            if (puVar7 == (undefined1 *)0x0) {
              return 0;
            }
            uVar14 = 0;
            if (param_2[3] != 0) {
              uVar17 = 0;
              do {
                *puVar7 = 9;
                uVar17 = uVar17 + 1;
                uVar14 = param_2[3];
                puVar7 = puVar7 + 1;
              } while (uVar17 < uVar14);
            }
            iVar9 = piVar18[8];
            param_2[2] = param_2[2] + uVar14;
            if (iVar9 != 0) goto LAB_0001b370;
LAB_0001b4e4:
            puVar10 = (undefined2 *)FUN_0001aa90(param_2,3);
            if (puVar10 == (undefined2 *)0x0) {
              return 0;
            }
            uVar13 = *(undefined1 *)(iVar19 + 0x1b366);
            *puVar10 = *puVar20;
            *(undefined1 *)(puVar10 + 1) = uVar13;
          }
          if (*param_2 != 0) {
            iVar9 = param_2[2];
            sVar3 = strlen((char *)(*param_2 + iVar9));
            param_2[2] = iVar9 + sVar3;
          }
          if (param_2[5] == 0) {
            iVar9 = 1;
          }
          else {
            iVar9 = 2;
          }
          puVar7 = (undefined1 *)FUN_0001aa90(param_2,iVar9);
          if (puVar7 == (undefined1 *)0x0) {
            return 0;
          }
          *puVar7 = 0x3a;
          if (param_2[5] != 0) {
            puVar7[1] = 9;
          }
          param_2[2] = param_2[2] + iVar9;
          iVar9 = FUN_0001aeec(piVar18,param_2);
          if (iVar9 == 0) {
            return 0;
          }
          if (*param_2 != 0) {
            iVar9 = param_2[2];
            sVar3 = strlen((char *)(*param_2 + iVar9));
            param_2[2] = iVar9 + sVar3;
          }
          uVar14 = (uint)(param_2[5] != 0);
          if (*piVar18 != 0) {
            uVar14 = uVar14 + 1;
          }
          puVar7 = (undefined1 *)FUN_0001aa90(param_2,uVar14 + 1);
          if (puVar7 == (undefined1 *)0x0) {
            return 0;
          }
          puVar8 = puVar7;
          if (*piVar18 != 0) {
            puVar8 = puVar7 + 1;
            *puVar7 = 0x2c;
          }
          if (param_2[5] == 0) {
            *puVar8 = 0;
          }
          else {
            *puVar8 = 10;
            puVar8[1] = 0;
          }
          piVar18 = (int *)*piVar18;
          iVar9 = param_2[5];
          param_2[2] = param_2[2] + uVar14;
        } while (piVar18 != (int *)0x0);
        goto LAB_0001b52c;
      }
LAB_0001b68c:
      iVar19 = 2;
    }
    else {
      puVar7[1] = 10;
      iVar9 = param_2[5];
      param_2[2] = param_2[2] + iVar19;
      if (piVar18 != (int *)0x0) goto LAB_0001b354;
LAB_0001b52c:
      if (iVar9 == 0) goto LAB_0001b68c;
      iVar19 = param_2[3] + 1;
    }
    puVar7 = (undefined1 *)FUN_0001aa90(param_2,iVar19);
    if (puVar7 == (undefined1 *)0x0) {
      return 0;
    }
    if ((param_2[5] != 0) && (param_2[3] != 1)) {
      uVar14 = 0;
      puVar8 = puVar7;
      do {
        puVar7 = puVar8 + 1;
        *puVar8 = 9;
        uVar14 = uVar14 + 1;
        puVar8 = puVar7;
      } while (uVar14 < param_2[3] - 1U);
    }
    uVar13 = 0x7d;
LAB_0001b26c:
    *puVar7 = uVar13;
    puVar7[1] = 0;
    param_2[3] = param_2[3] + -1;
    return 1;
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_36 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_32 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_50 = 0;
  uStack_4c = 0;
  local_48 = 0;
  uStack_40 = (undefined2)local_36;
  __value = *(double *)(param_1 + 0x18);
  local_3e = 0;
  uStack_3c = 0;
  uStack_3a = (undefined2)uStack_44;
  cStack_38 = (char)((uint)uStack_44 >> 0x10);
  cStack_37 = (char)((uint)uStack_44 >> 0x18);
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar19 = __isnan(__value);
  if ((iVar19 == 0) && (iVar19 = __isinf(__value), iVar19 == 0)) {
    uVar12 = (undefined4)((ulonglong)__value >> 0x20);
    uVar14 = sprintf((char *)&local_48,(char *)(DAT_0001b6b4 + 0x1b5a0),SUB84(__value,0),uVar12);
    iVar19 = sscanf((char *)&local_48,(char *)(DAT_0001b6b8 + 0x1b5b0),&local_50);
    if (iVar19 == 1) {
      dVar23 = ABS((double)CONCAT44(uStack_4c,local_50));
      dVar22 = ABS(__value);
      if (ABS(__value) < dVar23) {
        dVar22 = dVar23;
      }
      if (dVar22 * DAT_0001b698 < ABS((double)CONCAT44(uStack_4c,local_50) - __value))
      goto LAB_0001b5f4;
    }
    else {
LAB_0001b5f4:
      uVar14 = sprintf((char *)&local_48,(char *)(DAT_0001b6bc + 0x1b608),SUB84(__value,0),uVar12);
    }
    if ((0x19 < uVar14) ||
       (pcVar6 = (char *)FUN_0001aa90(param_2,uVar14 + 1), pcVar6 == (char *)0x0)) {
      return 0;
    }
    pcVar5 = pcVar6;
    if (uVar14 == 0) goto LAB_0001b154;
  }
  else {
    local_48 = *(undefined4 *)(DAT_0001b6a4 + 0x1b044);
    uStack_44 = CONCAT31(uStack_44._1_3_,(char)*(undefined4 *)(DAT_0001b6a4 + 0x1b048));
    pcVar5 = (char *)FUN_0001aa90(param_2,5);
    if (pcVar5 == (char *)0x0) {
      return 0;
    }
    uVar14 = 4;
  }
  pcVar6 = pcVar5 + 0x10;
  if (uVar14 - 1 < 0xf || pcVar5 < &cStack_38 && &local_48 < pcVar6) {
    pcVar11 = (char *)((int)&uStack_4c + 3);
    pcVar6 = pcVar5 + uVar14;
    do {
      pcVar11 = pcVar11 + 1;
      pcVar15 = pcVar5 + 1;
      *pcVar5 = *pcVar11;
      pcVar5 = pcVar15;
    } while (pcVar15 != pcVar6);
  }
  else {
    *(undefined4 *)pcVar5 = local_48;
    *(undefined4 *)(pcVar5 + 4) = uStack_44;
    *(uint *)(pcVar5 + 8) = CONCAT22(local_3e,uStack_40);
    *(uint *)(pcVar5 + 0xc) = CONCAT22(uStack_3a,uStack_3c);
    if (uVar14 != 0x10) {
      pcVar5[0x10] = cStack_38;
      if (uVar14 == 0x11) {
        pcVar6 = pcVar5 + 0x11;
      }
      else {
        pcVar5[0x11] = cStack_37;
        if (uVar14 == 0x12) {
          pcVar6 = pcVar5 + 0x12;
        }
        else {
          pcVar5[0x12] = (char)local_36;
          if (uVar14 == 0x13) {
            pcVar6 = pcVar5 + 0x13;
          }
          else {
            pcVar5[0x13] = local_36._1_1_;
            if (uVar14 == 0x14) {
              pcVar6 = pcVar5 + 0x14;
            }
            else {
              pcVar5[0x14] = local_36._2_1_;
              if (uVar14 == 0x15) {
                pcVar6 = pcVar5 + 0x15;
              }
              else {
                pcVar5[0x15] = local_36._3_1_;
                if (uVar14 == 0x16) {
                  pcVar6 = pcVar5 + 0x16;
                }
                else {
                  pcVar5[0x16] = (char)local_32;
                  if (uVar14 == 0x17) {
                    pcVar6 = pcVar5 + 0x17;
                  }
                  else {
                    pcVar5[0x17] = local_32._1_1_;
                    if (uVar14 == 0x19) {
                      pcVar5[0x18] = local_32._2_1_;
                      pcVar6 = pcVar5 + 0x19;
                    }
                    else {
                      pcVar6 = pcVar5 + uVar14;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0001b154:
  *pcVar6 = '\0';
  param_2[2] = param_2[2] + uVar14;
  return 1;
}



/* ===== FUN_0001b6c4 @ 0001b6c4 size=312 ===== */

void * FUN_0001b6c4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  void *pvVar4;
  uint __n;
  undefined4 *puVar5;
  void *local_3c;
  uint uStack_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = DAT_0001b7fc;
  uStack_38 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar5 = (undefined4 *)(DAT_0001b7fc + 0x1b6e4);
  local_24 = 0;
  local_3c = (void *)0x0;
  local_2c = 0;
  uStack_20 = 0;
  uStack_28 = uStack_38;
  uStack_1c = uStack_38;
  local_3c = (void *)(*(code *)*puVar5)(0x100);
  uStack_38 = 0x100;
  local_24 = *puVar5;
  uStack_20 = *(undefined4 *)(iVar1 + 0x1b6e8);
  uStack_1c = *(undefined4 *)(iVar1 + 0x1b6ec);
  uStack_28 = param_2;
  if ((param_1 != 0 && local_3c != (void *)0x0) &&
     (iVar2 = FUN_0001aeec(param_1,&local_3c), iVar1 = local_34, pvVar4 = local_3c, iVar2 != 0)) {
    if (local_3c != (void *)0x0) {
      sVar3 = strlen((char *)((int)local_3c + local_34));
      local_34 = iVar1 + sVar3;
    }
    iVar1 = DAT_0001b800;
    if (*(code **)(DAT_0001b800 + 0x1b778) == (code *)0x0) {
      pvVar4 = (void *)(**(code **)(DAT_0001b800 + 0x1b770))(local_34 + 1);
      if (pvVar4 != (void *)0x0) {
        __n = uStack_38;
        if (local_34 + 1U < uStack_38) {
          __n = local_34 + 1U;
        }
        memcpy(pvVar4,local_3c,__n);
        *(undefined1 *)((int)pvVar4 + local_34) = 0;
        (**(code **)(iVar1 + 0x1b774))(local_3c);
        return pvVar4;
      }
    }
    else {
      pvVar4 = (void *)(**(code **)(DAT_0001b800 + 0x1b778))(pvVar4);
      if (pvVar4 != (void *)0x0) {
        return pvVar4;
      }
    }
  }
  if (local_3c != (void *)0x0) {
    (**(code **)(DAT_0001b804 + 0x1b7ac))(local_3c);
  }
  return (void *)0x0;
}



/* ===== FUN_0001b808 @ 0001b808 size=1684 ===== */

undefined4 FUN_0001b808(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  
  iVar14 = *param_3;
  iVar9 = param_3[2];
  uVar5 = iVar9 + 1;
  pbVar12 = (byte *)(iVar14 + uVar5);
  if ((*(char *)(iVar14 + iVar9) == '\"') && (uVar1 = param_3[1], uVar5 < uVar1)) {
    bVar8 = *(byte *)(iVar14 + uVar5);
    pbVar10 = pbVar12;
    if (bVar8 == 0x22) {
      pbVar2 = (byte *)(*(code *)param_3[4])(2);
      pbVar3 = pbVar2;
      if (pbVar2 != (byte *)0x0) goto LAB_0001bd68;
    }
    else {
      iVar4 = 0;
      do {
        pbVar11 = pbVar10 + 1;
        pbVar3 = pbVar10;
        pbVar2 = pbVar11;
        uVar5 = (int)pbVar11 - iVar14;
        if (bVar8 == 0x5c) {
          iVar4 = iVar4 + 1;
          uVar5 = (int)(pbVar10 + 2) - iVar14;
          pbVar3 = pbVar11;
          pbVar2 = pbVar10 + 2;
          if (uVar1 <= (uint)((int)pbVar11 - iVar14)) goto LAB_0001b8a0;
        }
        pbVar10 = pbVar2;
        if (uVar1 <= uVar5) goto LAB_0001b8a0;
        bVar8 = pbVar3[1];
      } while (bVar8 != 0x22);
      pbVar2 = (byte *)(*(code *)param_3[4])(pbVar10 + ((1 - iVar4) - (iVar14 + iVar9)));
      if (pbVar2 != (byte *)0x0) {
        pbVar3 = pbVar2;
        pbVar11 = pbVar2;
        if (pbVar12 < pbVar10) {
LAB_0001b908:
          if (*pbVar12 != 0x5c) {
            pbVar13 = pbVar12 + 1;
            pbVar3 = pbVar11 + 1;
            *pbVar11 = *pbVar12;
            goto LAB_0001b900;
          }
          if ((int)pbVar10 - (int)pbVar12 < 1) goto switchD_0001b92c_default;
          switch(pbVar12[1]) {
          case 0x22:
            goto LAB_0001bd2c;
          case 0x23:
            break;
          case 0x24:
            break;
          case 0x25:
            break;
          case 0x26:
            break;
          case 0x27:
            break;
          case 0x28:
            break;
          case 0x29:
            break;
          case 0x2a:
            break;
          case 0x2b:
            break;
          case 0x2c:
            break;
          case 0x2d:
            break;
          case 0x2e:
            break;
          case 0x2f:
            goto LAB_0001bd2c;
          case 0x30:
            break;
          case 0x31:
            break;
          case 0x32:
            break;
          case 0x33:
            break;
          case 0x34:
            break;
          case 0x35:
            break;
          case 0x36:
            break;
          case 0x37:
            break;
          case 0x38:
            break;
          case 0x39:
            break;
          case 0x3a:
            break;
          case 0x3b:
            break;
          case 0x3c:
            break;
          case 0x3d:
            break;
          case 0x3e:
            break;
          case 0x3f:
            break;
          case 0x40:
            break;
          case 0x41:
            break;
          case 0x42:
            break;
          case 0x43:
            break;
          case 0x44:
            break;
          case 0x45:
            break;
          case 0x46:
            break;
          case 0x47:
            break;
          case 0x48:
            break;
          case 0x49:
            break;
          case 0x4a:
            break;
          case 0x4b:
            break;
          case 0x4c:
            break;
          case 0x4d:
            break;
          case 0x4e:
            break;
          case 0x4f:
            break;
          case 0x50:
            break;
          case 0x51:
            break;
          case 0x52:
            break;
          case 0x53:
            break;
          case 0x54:
            break;
          case 0x55:
            break;
          case 0x56:
            break;
          case 0x57:
            break;
          case 0x58:
            break;
          case 0x59:
            break;
          case 0x5a:
            break;
          case 0x5b:
            break;
          case 0x5c:
LAB_0001bd2c:
            pbVar13 = pbVar12 + 2;
            pbVar3 = pbVar11 + 1;
            *pbVar11 = pbVar12[1];
            goto LAB_0001b900;
          case 0x5d:
            break;
          case 0x5e:
            break;
          case 0x5f:
            break;
          case 0x60:
            break;
          case 0x61:
            break;
          case 0x62:
            pbVar13 = pbVar12 + 2;
            pbVar3 = pbVar11 + 1;
            *pbVar11 = 8;
            goto LAB_0001b900;
          case 99:
            break;
          case 100:
            break;
          case 0x65:
            break;
          case 0x66:
            pbVar13 = pbVar12 + 2;
            pbVar3 = pbVar11 + 1;
            *pbVar11 = 0xc;
            goto LAB_0001b900;
          case 0x67:
            break;
          case 0x68:
            break;
          case 0x69:
            break;
          case 0x6a:
            break;
          case 0x6b:
            break;
          case 0x6c:
            break;
          case 0x6d:
            break;
          case 0x6e:
            pbVar13 = pbVar12 + 2;
            pbVar3 = pbVar11 + 1;
            *pbVar11 = 10;
            goto LAB_0001b900;
          case 0x6f:
            break;
          case 0x70:
            break;
          case 0x71:
            break;
          case 0x72:
            pbVar13 = pbVar12 + 2;
            pbVar3 = pbVar11 + 1;
            *pbVar11 = 0xd;
            goto LAB_0001b900;
          case 0x73:
            break;
          case 0x74:
            pbVar13 = pbVar12 + 2;
            pbVar3 = pbVar11 + 1;
            *pbVar11 = 9;
LAB_0001b900:
            pbVar11 = pbVar3;
            pbVar12 = pbVar13;
            if (pbVar10 <= pbVar13) goto LAB_0001bd68;
            goto LAB_0001b908;
          case 0x75:
            if (5 < (int)pbVar10 - (int)pbVar12) {
              uVar5 = (uint)pbVar12[2];
              uVar1 = uVar5 - 0x30;
              if (9 < (uVar1 & 0xff)) {
                if (uVar5 - 0x41 < 6) {
                  uVar1 = uVar5 - 0x37;
                  goto LAB_0001babc;
                }
                if (uVar5 - 0x61 < 6) {
                  uVar1 = uVar5 - 0x57;
                  goto LAB_0001babc;
                }
LAB_0001be18:
                uVar5 = 0;
LAB_0001bdb4:
                pbVar13 = pbVar12 + 6;
                bVar8 = (byte)uVar5;
                iVar9 = 1;
LAB_0001bcd4:
                pbVar3 = pbVar11 + iVar9;
                *pbVar11 = bVar8;
                goto LAB_0001b900;
              }
LAB_0001babc:
              uVar5 = (uint)pbVar12[3];
              iVar9 = uVar1 * 0x10;
              if ((uVar5 - 0x30 & 0xff) < 10) {
                iVar9 = (uVar5 - 0x30) + iVar9;
              }
              else if (uVar5 - 0x41 < 6) {
                iVar9 = (uVar5 - 0x37) + iVar9;
              }
              else {
                if (5 < uVar5 - 0x61) goto LAB_0001be18;
                iVar9 = (uVar5 - 0x57) + iVar9;
              }
              uVar5 = (uint)pbVar12[4];
              iVar9 = iVar9 * 0x10;
              if ((uVar5 - 0x30 & 0xff) < 10) {
                iVar9 = (uVar5 - 0x30) + iVar9;
              }
              else if (uVar5 - 0x41 < 6) {
                iVar9 = (uVar5 - 0x37) + iVar9;
              }
              else {
                if (5 < uVar5 - 0x61) goto LAB_0001be18;
                iVar9 = (uVar5 - 0x57) + iVar9;
              }
              uVar5 = (uint)pbVar12[5];
              iVar9 = iVar9 * 0x10;
              if ((uVar5 - 0x30 & 0xff) < 10) {
                uVar5 = (uVar5 - 0x30) + iVar9;
              }
              else if (uVar5 - 0x41 < 6) {
                uVar5 = (uVar5 - 0x37) + iVar9;
              }
              else {
                if (5 < uVar5 - 0x61) goto LAB_0001be18;
                uVar5 = (uVar5 - 0x57) + iVar9;
              }
              if (0x3ff < uVar5 - 0xdc00) {
                pbVar13 = pbVar12 + 6;
                if (0x3ff < uVar5 - 0xd800) {
                  if (uVar5 < 0x80) goto LAB_0001bdb4;
                  if (uVar5 < 0x800) {
                    bVar7 = (byte)(uVar5 >> 6);
                    pbVar11[1] = (byte)uVar5 & 0x3f | 0x80;
                    iVar9 = 2;
                    bVar8 = 0xc0;
                  }
                  else {
                    pbVar11[1] = (byte)((uVar5 << 0x14) >> 0x1a) | 0x80;
                    bVar7 = (byte)(uVar5 >> 0xc);
                    pbVar11[2] = (byte)uVar5 & 0x3f | 0x80;
                    bVar8 = 0xe0;
                    iVar9 = 3;
                  }
LAB_0001bccc:
                  bVar8 = bVar8 | bVar7;
                  goto LAB_0001bcd4;
                }
                if (((5 < (int)pbVar10 - (int)pbVar13) && (pbVar12[6] == 0x5c)) &&
                   (pbVar12[7] == 0x75)) {
                  uVar6 = (uint)pbVar12[8];
                  uVar1 = uVar6 - 0x30;
                  if (9 < (uVar1 & 0xff)) {
                    if (uVar6 - 0x41 < 6) {
                      uVar1 = uVar6 - 0x37;
                    }
                    else {
                      if (5 < uVar6 - 0x61) break;
                      uVar1 = uVar6 - 0x57;
                    }
                  }
                  uVar6 = (uint)pbVar12[9];
                  iVar9 = uVar1 * 0x10;
                  if ((uVar6 - 0x30 & 0xff) < 10) {
                    iVar9 = (uVar6 - 0x30) + iVar9;
                  }
                  else if (uVar6 - 0x41 < 6) {
                    iVar9 = (uVar6 - 0x37) + iVar9;
                  }
                  else {
                    if (5 < uVar6 - 0x61) break;
                    iVar9 = (uVar6 - 0x57) + iVar9;
                  }
                  uVar1 = (uint)pbVar12[10];
                  iVar9 = iVar9 * 0x10;
                  if ((uVar1 - 0x30 & 0xff) < 10) {
                    iVar9 = (uVar1 - 0x30) + iVar9;
                  }
                  else if (uVar1 - 0x41 < 6) {
                    iVar9 = (uVar1 - 0x37) + iVar9;
                  }
                  else {
                    if (5 < uVar1 - 0x61) break;
                    iVar9 = (uVar1 - 0x57) + iVar9;
                  }
                  uVar1 = (uint)pbVar12[0xb];
                  iVar9 = iVar9 * 0x10;
                  if ((uVar1 - 0x30 & 0xff) < 10) {
                    uVar1 = (uVar1 - 0x30) + iVar9;
                  }
                  else if (uVar1 - 0x41 < 6) {
                    uVar1 = (uVar1 - 0x37) + iVar9;
                  }
                  else {
                    if (5 < uVar1 - 0x61) break;
                    uVar1 = (uVar1 - 0x57) + iVar9;
                  }
                  if (uVar1 - 0xdc00 < 0x400) {
                    uVar5 = (uVar5 & 0x3ff) << 10 | uVar1 & 0x3ff;
                    pbVar13 = pbVar12 + 0xc;
                    uVar1 = uVar5 + 0x10000;
                    iVar9 = 4;
                    pbVar11[3] = (byte)uVar1 & 0x3f | 0x80;
                    bVar7 = (byte)(uVar1 >> 0x12);
                    pbVar11[1] = (byte)(uVar1 * 0x4000 >> 0x1a) | 0x80;
                    bVar8 = 0xf0;
                    pbVar11[2] = (byte)((uVar5 << 0x14) >> 0x1a) | 0x80;
                    goto LAB_0001bccc;
                  }
                }
              }
            }
          }
switchD_0001b92c_default:
          (*(code *)param_3[5])(pbVar2);
          goto LAB_0001bd44;
        }
LAB_0001bd68:
        *pbVar3 = 0;
        iVar9 = *param_3;
        *param_1 = 0x10;
        *param_2 = pbVar2;
        param_3[2] = (int)(pbVar10 + (1 - iVar9));
        return 1;
      }
    }
LAB_0001bd44:
    iVar14 = *param_3;
  }
  else if (pbVar12 == (byte *)0x0) {
    return 0;
  }
LAB_0001b8a0:
  param_3[2] = (int)pbVar12 - iVar14;
  return 0;
}



/* ===== FUN_0001be9c @ 0001be9c size=20 ===== */

int FUN_0001be9c(void)

{
  return *(int *)(DAT_0001beb0 + 0x1bea8) + *(int *)(DAT_0001beb0 + 0x1beac);
}



/* ===== FUN_0001c048 @ 0001c048 size=172 ===== */

void FUN_0001c048(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  
  iVar3 = DAT_0001c0fc;
  iVar2 = DAT_0001c0f8;
  iVar1 = DAT_0001c0f4;
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    uVar5 = param_1[3];
    piVar6 = (int *)*param_1;
    if ((uVar5 & 0x100) == 0) {
      if (param_1[2] != 0) {
        FUN_0001c048();
        uVar5 = param_1[3];
        if ((uVar5 & 0x100) != 0) {
          pcVar4 = *(code **)(iVar2 + 0x1c070);
          goto LAB_0001c0bc;
        }
      }
      pcVar4 = *(code **)(iVar1 + 0x1c06c);
      if (param_1[4] != 0) {
        (*pcVar4)();
        uVar5 = param_1[3];
        pcVar4 = *(code **)(iVar1 + 0x1c06c);
      }
    }
    else {
      pcVar4 = *(code **)(iVar3 + 0x1c074);
    }
LAB_0001c0bc:
    if (((uVar5 & 0x200) == 0) && (param_1[8] != 0)) {
      (*pcVar4)();
      pcVar4 = *(code **)(DAT_0001c100 + 0x1c0e4);
    }
    (*pcVar4)(param_1);
    param_1 = piVar6;
    if (piVar6 == (int *)0x0) {
      return;
    }
  } while( true );
}



/* ===== FUN_0001c104 @ 0001c104 size=2128 ===== */

undefined4 FUN_0001c104(int param_1,int *param_2)

{
  byte bVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  char *pcVar16;
  bool bVar17;
  double dVar18;
  int iVar19;
  int iVar20;
  uint local_84;
  char *local_7c;
  char local_78 [84];
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar11 = *param_2;
  if (iVar11 == 0) {
    return 0;
  }
  uVar9 = param_2[2];
  uVar13 = param_2[1];
  uVar15 = uVar9 + 4;
  if (uVar13 < uVar15) {
    if ((uVar9 + 5 <= uVar13) &&
       (iVar3 = strncmp((char *)(iVar11 + uVar9),(char *)(DAT_0001c974 + 0x1c20c),5), iVar3 == 0))
    goto LAB_0001c214;
  }
  else {
    pcVar16 = (char *)(iVar11 + uVar9);
    iVar3 = strncmp(pcVar16,(char *)(DAT_0001c968 + 0x1c154),4);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 4;
      param_2[2] = uVar15;
      return 1;
    }
    if ((uVar9 + 5 <= uVar13) &&
       (iVar3 = strncmp(pcVar16,(char *)(DAT_0001c96c + 0x1c180),5), iVar3 == 0)) {
LAB_0001c214:
      *(undefined4 *)(param_1 + 0xc) = 1;
      param_2[2] = uVar9 + 5;
      return 1;
    }
    iVar3 = strncmp(pcVar16,(char *)(DAT_0001c970 + 0x1c19c),4);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 1;
      *(undefined4 *)(param_1 + 0xc) = 2;
      param_2[2] = uVar15;
      return 1;
    }
  }
  if (uVar13 <= uVar9) {
    return 0;
  }
  uVar15 = (uint)*(byte *)(iVar11 + uVar9);
  if (uVar15 == 0x22) {
    uVar8 = FUN_0001b808(param_1 + 0xc,param_1 + 0x10,param_2);
    return uVar8;
  }
  bVar17 = 0x2c < uVar15;
  if (uVar15 != 0x2d) {
    bVar17 = 8 < uVar15 - 0x30;
  }
  if (!bVar17 || (uVar15 == 0x2d || uVar15 - 0x30 == 9)) {
    iVar3 = 0;
    local_7c = (char *)0x0;
    pcVar16 = local_78;
    local_84 = uVar9;
    do {
      switch(*(char *)(iVar11 + local_84)) {
      case '+':
        break;
      case ',':
      default:
switchD_0001c538_default:
        local_78[iVar3] = '\0';
        dVar18 = strtod(local_78,&local_7c);
        dVar2 = DAT_0001c958;
        if (local_7c == local_78) {
          return 0;
        }
        *(double *)(param_1 + 0x18) = dVar18;
        if (dVar2 <= dVar18) {
          *(undefined4 *)(param_1 + 0x14) = 0x7fffffff;
        }
        else if (DAT_0001c960 < dVar18) {
          *(int *)(param_1 + 0x14) = (int)(longlong)dVar18;
        }
        else {
          *(undefined4 *)(param_1 + 0x14) = 0x80000000;
        }
        iVar11 = param_2[2];
        *(undefined4 *)(param_1 + 0xc) = 8;
        param_2[2] = (int)(local_7c + (iVar11 - (int)local_78));
        return 1;
      case '-':
        break;
      case '.':
        *pcVar16 = '.';
        goto LAB_0001c630;
      case '/':
        goto switchD_0001c538_default;
      case '0':
        break;
      case '1':
        break;
      case '2':
        break;
      case '3':
        break;
      case '4':
        break;
      case '5':
        break;
      case '6':
        break;
      case '7':
        break;
      case '8':
        break;
      case '9':
        break;
      case ':':
        goto switchD_0001c538_default;
      case ';':
        goto switchD_0001c538_default;
      case '<':
        goto switchD_0001c538_default;
      case '=':
        goto switchD_0001c538_default;
      case '>':
        goto switchD_0001c538_default;
      case '?':
        goto switchD_0001c538_default;
      case '@':
        goto switchD_0001c538_default;
      case 'A':
        goto switchD_0001c538_default;
      case 'B':
        goto switchD_0001c538_default;
      case 'C':
        goto switchD_0001c538_default;
      case 'D':
        goto switchD_0001c538_default;
      case 'E':
        break;
      case 'F':
        goto switchD_0001c538_default;
      case 'G':
        goto switchD_0001c538_default;
      case 'H':
        goto switchD_0001c538_default;
      case 'I':
        goto switchD_0001c538_default;
      case 'J':
        goto switchD_0001c538_default;
      case 'K':
        goto switchD_0001c538_default;
      case 'L':
        goto switchD_0001c538_default;
      case 'M':
        goto switchD_0001c538_default;
      case 'N':
        goto switchD_0001c538_default;
      case 'O':
        goto switchD_0001c538_default;
      case 'P':
        goto switchD_0001c538_default;
      case 'Q':
        goto switchD_0001c538_default;
      case 'R':
        goto switchD_0001c538_default;
      case 'S':
        goto switchD_0001c538_default;
      case 'T':
        goto switchD_0001c538_default;
      case 'U':
        goto switchD_0001c538_default;
      case 'V':
        goto switchD_0001c538_default;
      case 'W':
        goto switchD_0001c538_default;
      case 'X':
        goto switchD_0001c538_default;
      case 'Y':
        goto switchD_0001c538_default;
      case 'Z':
        goto switchD_0001c538_default;
      case '[':
        goto switchD_0001c538_default;
      case '\\':
        goto switchD_0001c538_default;
      case ']':
        goto switchD_0001c538_default;
      case '^':
        goto switchD_0001c538_default;
      case '_':
        goto switchD_0001c538_default;
      case '`':
        goto switchD_0001c538_default;
      case 'a':
        goto switchD_0001c538_default;
      case 'b':
        goto switchD_0001c538_default;
      case 'c':
        goto switchD_0001c538_default;
      case 'd':
        goto switchD_0001c538_default;
      case 'e':
      }
      *pcVar16 = *(char *)(iVar11 + local_84);
LAB_0001c630:
      iVar3 = iVar3 + 1;
      pcVar16 = pcVar16 + 1;
      local_84 = iVar3 + uVar9;
      if ((iVar3 == 0x3f) || (uVar13 <= local_84)) goto switchD_0001c538_default;
    } while( true );
  }
  if (uVar15 == 0x5b) {
    uVar15 = param_2[3];
    if (999 < uVar15) {
      return 0;
    }
    param_2[3] = uVar15 + 1;
    if (*(char *)(iVar11 + uVar9) != '[') {
      return 0;
    }
    uVar9 = uVar9 + 1;
    param_2[2] = uVar9;
    if (uVar13 <= uVar9) goto LAB_0001c8b0;
    pbVar5 = (byte *)(iVar11 + uVar9);
    bVar1 = *(byte *)(iVar11 + uVar9);
    uVar10 = uVar9;
    while (bVar1 < 0x21) {
      uVar9 = uVar10 + 1;
      param_2[2] = uVar9;
      if (uVar13 <= uVar9) {
        if (uVar13 != uVar9) goto LAB_0001c8b0;
        param_2[2] = uVar10;
        goto LAB_0001c758;
      }
      pbVar5 = pbVar5 + 1;
      uVar10 = uVar9;
      bVar1 = *pbVar5;
    }
    uVar10 = param_2[2];
LAB_0001c758:
    if (*(char *)(iVar11 + uVar10) == ']') {
      param_2[3] = uVar15;
      piVar12 = (int *)0x0;
    }
    else {
      iVar11 = 0;
      iVar3 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iVar19 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iVar20 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      piVar12 = (int *)0x0;
      param_2[2] = uVar10 - 1;
      piVar14 = (int *)0x0;
      do {
        piVar4 = (int *)(*(code *)param_2[4])(0x28);
        if (piVar4 == (int *)0x0) goto LAB_0001c8e4;
        bVar17 = piVar12 == (int *)0x0;
        *piVar4 = iVar11;
        piVar4[1] = iVar3;
        piVar4[2] = iVar19;
        piVar4[3] = iVar20;
        if (bVar17) {
          piVar12 = piVar4;
        }
        piVar4[4] = iVar11;
        piVar4[5] = iVar3;
        piVar4[6] = iVar19;
        piVar4[7] = iVar20;
        piVar4[8] = iVar11;
        piVar4[9] = iVar3;
        iVar7 = *param_2;
        if (!bVar17) {
          *piVar14 = (int)piVar4;
        }
        iVar6 = param_2[2];
        if (!bVar17) {
          piVar4[1] = (int)piVar14;
        }
        uVar9 = iVar6 + 1;
        param_2[2] = uVar9;
        if ((iVar7 != 0) && (uVar13 = param_2[1], uVar9 < uVar13)) {
          pbVar5 = (byte *)(iVar7 + uVar9);
          bVar1 = *(byte *)(iVar7 + uVar9);
          while (bVar1 < 0x21) {
            uVar15 = uVar9 + 1;
            param_2[2] = uVar15;
            if (uVar13 <= uVar15) {
              if (uVar13 == uVar15) {
                param_2[2] = uVar9;
              }
              break;
            }
            pbVar5 = pbVar5 + 1;
            uVar9 = uVar15;
            bVar1 = *pbVar5;
          }
        }
        iVar7 = FUN_0001c104(piVar4,param_2);
        if (iVar7 == 0) goto LAB_0001c8d0;
        iVar7 = *param_2;
        uVar9 = param_2[2];
        uVar13 = param_2[1];
        if (iVar7 == 0) {
LAB_0001c874:
          if (uVar13 <= uVar9) goto LAB_0001c8d0;
        }
        else {
          if (uVar13 <= uVar9) goto LAB_0001c8d0;
          pbVar5 = (byte *)(iVar7 + uVar9);
          uVar15 = uVar9;
          if (*(byte *)(iVar7 + uVar9) < 0x21) {
            do {
              uVar9 = uVar15 + 1;
              param_2[2] = uVar9;
              if (uVar13 == uVar9) {
                param_2[2] = uVar15;
                uVar9 = uVar15;
                break;
              }
              pbVar5 = pbVar5 + 1;
              uVar15 = uVar9;
            } while (*pbVar5 < 0x21);
            goto LAB_0001c874;
          }
        }
        piVar14 = piVar4;
      } while (*(char *)(iVar7 + uVar9) == ',');
      if (*(char *)(iVar7 + uVar9) != ']') goto LAB_0001c8d0;
      param_2[3] = param_2[3] + -1;
      *(int **)((int)piVar12 + 4) = piVar4;
    }
    uVar8 = 0x20;
  }
  else {
    if (uVar15 != 0x7b) {
      return 0;
    }
    uVar15 = param_2[3];
    if (999 < uVar15) {
      return 0;
    }
    param_2[3] = uVar15 + 1;
    if (*(char *)(iVar11 + uVar9) != '{') {
      return 0;
    }
    uVar9 = uVar9 + 1;
    param_2[2] = uVar9;
    if (uVar13 <= uVar9) {
LAB_0001c8b0:
      param_2[2] = uVar9 - 1;
      return 0;
    }
    pbVar5 = (byte *)(iVar11 + uVar9);
    bVar1 = *(byte *)(iVar11 + uVar9);
    uVar10 = uVar9;
    while (bVar1 < 0x21) {
      uVar9 = uVar10 + 1;
      param_2[2] = uVar9;
      if (uVar13 <= uVar9) {
        if (uVar13 != uVar9) goto LAB_0001c8b0;
        param_2[2] = uVar10;
        goto LAB_0001c2c4;
      }
      pbVar5 = pbVar5 + 1;
      uVar10 = uVar9;
      bVar1 = *pbVar5;
    }
    uVar10 = param_2[2];
LAB_0001c2c4:
    if (*(char *)(iVar11 + uVar10) == '}') {
      param_2[3] = uVar15;
      piVar12 = (int *)0x0;
    }
    else {
      iVar11 = 0;
      iVar3 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iVar19 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iVar20 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      piVar12 = (int *)0x0;
      param_2[2] = uVar10 - 1;
      piVar14 = (int *)0x0;
      do {
        piVar4 = (int *)(*(code *)param_2[4])(0x28);
        if (piVar4 == (int *)0x0) goto LAB_0001c8e4;
        bVar17 = piVar12 == (int *)0x0;
        *piVar4 = iVar11;
        piVar4[1] = iVar3;
        piVar4[2] = iVar19;
        piVar4[3] = iVar20;
        if (bVar17) {
          piVar12 = piVar4;
        }
        piVar4[4] = iVar11;
        piVar4[5] = iVar3;
        piVar4[6] = iVar19;
        piVar4[7] = iVar20;
        piVar4[8] = iVar11;
        piVar4[9] = iVar3;
        iVar7 = *param_2;
        if (!bVar17) {
          *piVar14 = (int)piVar4;
        }
        iVar6 = param_2[2];
        if (!bVar17) {
          piVar4[1] = (int)piVar14;
        }
        uVar9 = iVar6 + 1;
        param_2[2] = uVar9;
        if ((iVar7 != 0) && (uVar13 = param_2[1], uVar9 < uVar13)) {
          pbVar5 = (byte *)(iVar7 + uVar9);
          bVar1 = *(byte *)(iVar7 + uVar9);
          while (bVar1 < 0x21) {
            uVar15 = uVar9 + 1;
            param_2[2] = uVar15;
            if (uVar13 <= uVar15) {
              if (uVar13 == uVar15) {
                param_2[2] = uVar9;
              }
              break;
            }
            pbVar5 = pbVar5 + 1;
            uVar9 = uVar15;
            bVar1 = *pbVar5;
          }
        }
        iVar7 = FUN_0001b808(piVar4 + 3,piVar4 + 4,param_2);
        if (iVar7 == 0) goto LAB_0001c8d0;
        iVar7 = *param_2;
        uVar9 = param_2[2];
        uVar13 = param_2[1];
        if (iVar7 == 0) {
LAB_0001c3e8:
          iVar6 = piVar4[4];
          piVar4[4] = 0;
          piVar4[8] = iVar6;
          if (uVar13 <= uVar9) goto LAB_0001c8d0;
        }
        else {
          if (uVar13 <= uVar9) {
            iVar11 = piVar4[4];
            piVar4[4] = 0;
            piVar4[8] = iVar11;
            goto LAB_0001c8d0;
          }
          pbVar5 = (byte *)(iVar7 + uVar9);
          uVar15 = uVar9;
          if (*(byte *)(iVar7 + uVar9) < 0x21) {
            do {
              uVar9 = uVar15 + 1;
              param_2[2] = uVar9;
              if (uVar13 == uVar9) {
                param_2[2] = uVar15;
                uVar9 = uVar15;
                break;
              }
              pbVar5 = pbVar5 + 1;
              uVar15 = uVar9;
            } while (*pbVar5 < 0x21);
            goto LAB_0001c3e8;
          }
          iVar6 = piVar4[4];
          piVar4[4] = 0;
          piVar4[8] = iVar6;
        }
        if (*(char *)(iVar7 + uVar9) != ':') goto LAB_0001c8d0;
        uVar9 = uVar9 + 1;
        param_2[2] = uVar9;
        if (iVar7 != 0 && uVar9 < uVar13) {
          pbVar5 = (byte *)(iVar7 + uVar9);
          bVar1 = *(byte *)(iVar7 + uVar9);
          while (bVar1 < 0x21) {
            uVar15 = uVar9 + 1;
            param_2[2] = uVar15;
            if (uVar13 <= uVar15) {
              if (uVar13 == uVar15) {
                param_2[2] = uVar9;
              }
              break;
            }
            pbVar5 = pbVar5 + 1;
            uVar9 = uVar15;
            bVar1 = *pbVar5;
          }
        }
        iVar7 = FUN_0001c104(piVar4,param_2);
        if (iVar7 == 0) goto LAB_0001c8d0;
        iVar7 = *param_2;
        uVar9 = param_2[2];
        uVar13 = param_2[1];
        if (iVar7 == 0) {
LAB_0001c4c0:
          if (uVar13 <= uVar9) goto LAB_0001c8d0;
        }
        else {
          if (uVar13 <= uVar9) goto LAB_0001c8d0;
          pbVar5 = (byte *)(iVar7 + uVar9);
          uVar15 = uVar9;
          if (*(byte *)(iVar7 + uVar9) < 0x21) {
            do {
              uVar9 = uVar15 + 1;
              param_2[2] = uVar9;
              if (uVar13 == uVar9) {
                param_2[2] = uVar15;
                uVar9 = uVar15;
                break;
              }
              pbVar5 = pbVar5 + 1;
              uVar15 = uVar9;
            } while (*pbVar5 < 0x21);
            goto LAB_0001c4c0;
          }
        }
        piVar14 = piVar4;
      } while (*(char *)(iVar7 + uVar9) == ',');
      if (*(char *)(iVar7 + uVar9) != '}') goto LAB_0001c8d0;
      param_2[3] = param_2[3] + -1;
      *(int **)((int)piVar12 + 4) = piVar4;
    }
    uVar8 = 0x40;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  iVar11 = param_2[2];
  *(int **)(param_1 + 8) = piVar12;
  param_2[2] = iVar11 + 1;
  return 1;
LAB_0001c8e4:
  if (piVar12 == (int *)0x0) {
    return 0;
  }
LAB_0001c8d0:
  FUN_0001c048(piVar12);
  return 0;
}



/* ===== FUN_0001cd1c @ 0001cd1c size=376 ===== */

undefined4 * FUN_0001cd1c(char *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  char **ppcVar10;
  uint uVar11;
  char *local_34;
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 == (char *)0x0) {
    return (undefined4 *)0x0;
  }
  sVar6 = strlen(param_1);
  iVar3 = DAT_0001ce98;
  iVar7 = DAT_0001ce94;
  puVar8 = (undefined4 *)(DAT_0001ce94 + 0x1cd48);
  *(undefined4 *)(DAT_0001ce98 + 0x1cd50) = 0;
  *(undefined4 *)(iVar3 + 0x1cd54) = 0;
  local_2c = 0;
  uStack_28 = 0;
  local_30 = sVar6 + 1;
  pcStack_24 = (code *)*puVar8;
  uStack_20 = *(undefined4 *)(iVar7 + 0x1cd4c);
  uStack_1c = *(undefined4 *)(iVar7 + 0x1cd50);
  local_34 = param_1;
  puVar8 = (undefined4 *)(*pcStack_24)(0x28);
  uVar11 = local_2c;
  uVar5 = local_30;
  pcVar4 = local_34;
  if (puVar8 == (undefined4 *)0x0) goto LAB_0001ce44;
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *puVar8 = 0;
  puVar8[1] = uVar2;
  puVar8[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puVar8[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar8[4] = 0;
  puVar8[5] = uVar2;
  puVar8[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puVar8[7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar8[8] = 0;
  puVar8[9] = uVar2;
  ppcVar10 = (char **)0x0;
  if (local_34 != (char *)0x0) {
    if (local_2c == 0) {
      if (local_30 < 5) {
        if (local_30 != 0) goto LAB_0001cde0;
      }
      else {
        iVar7 = strncmp(local_34,(char *)(DAT_0001ce9c + 0x1cdd4),3);
        if (iVar7 == 0) {
          uVar11 = 3;
          local_2c = 3;
        }
LAB_0001cde0:
        pbVar9 = (byte *)(pcVar4 + uVar11);
        bVar1 = pcVar4[uVar11];
        while (bVar1 < 0x21) {
          local_2c = uVar11 + 1;
          if (local_2c == uVar5) {
            ppcVar10 = &local_34;
            local_2c = uVar11;
            goto LAB_0001ce1c;
          }
          pbVar9 = pbVar9 + 1;
          uVar11 = local_2c;
          bVar1 = *pbVar9;
        }
      }
      ppcVar10 = &local_34;
    }
    else {
      ppcVar10 = (char **)0x0;
    }
  }
LAB_0001ce1c:
  iVar7 = FUN_0001c104(puVar8,ppcVar10);
  if (iVar7 != 0) {
    return puVar8;
  }
  FUN_0001c048(puVar8);
LAB_0001ce44:
  iVar7 = DAT_0001cea0;
  if (local_30 <= local_2c) {
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      local_2c = local_30 - 1;
    }
  }
  *(char **)(DAT_0001cea0 + 0x1ce68) = param_1;
  *(uint *)(iVar7 + 0x1ce6c) = local_2c;
  return (undefined4 *)0x0;
}



/* ===== FUN_0001cea4 @ 0001cea4 size=404 ===== */

undefined4 * FUN_0001cea4(char *param_1,uint param_2)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  char **ppcVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char *local_4c;
  uint uStack_48;
  uint local_44;
  undefined4 local_40;
  code *pcStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar5 = DAT_0001d038;
  uVar10 = 0;
  uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar7 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_44 = 0;
  *(undefined4 *)(DAT_0001d038 + 0x1cecc) = 0;
  local_40 = 0;
  *(undefined4 *)(iVar5 + 0x1ced0) = 0;
  if (param_1 == (char *)0x0 || param_2 == 0) {
    if (param_1 == (char *)0x0) {
      return (undefined4 *)0x0;
    }
    goto LAB_0001cf04;
  }
  pcStack_3c = *(code **)(DAT_0001d040 + 0x1cf38);
  uStack_38 = *(undefined4 *)(DAT_0001d040 + 0x1cf3c);
  uStack_34 = *(undefined4 *)(DAT_0001d040 + 0x1cf40);
  local_4c = param_1;
  uStack_48 = param_2;
  local_44 = uVar7;
  puVar4 = (undefined4 *)(*pcStack_3c)(0x28);
  uVar9 = local_44;
  uVar3 = uStack_48;
  pcVar2 = local_4c;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = uVar10;
    puVar4[1] = uVar11;
    puVar4[2] = uVar7;
    puVar4[3] = uVar12;
    puVar4[4] = uVar10;
    puVar4[5] = uVar11;
    puVar4[6] = uVar7;
    puVar4[7] = uVar12;
    puVar4[8] = uVar10;
    puVar4[9] = uVar11;
    ppcVar8 = (char **)0x0;
    if (local_4c != (char *)0x0) {
      if (local_44 == 0) {
        ppcVar8 = &local_4c;
        if (uStack_48 < 5) {
          if (uStack_48 == 0) goto LAB_0001cfec;
        }
        else {
          iVar5 = strncmp(local_4c,(char *)(DAT_0001d044 + 0x1cfa4),3);
          if (iVar5 == 0) {
            uVar9 = 3;
            local_44 = 3;
          }
        }
        bVar1 = pcVar2[uVar9];
        pbVar6 = (byte *)(pcVar2 + uVar9);
        while ((bVar1 < 0x21 && (uVar7 = uVar9 + 1, local_44 = uVar9, uVar7 != uVar3))) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
          uVar9 = uVar7;
          local_44 = uVar7;
        }
      }
      else {
        ppcVar8 = (char **)0x0;
      }
    }
LAB_0001cfec:
    iVar5 = FUN_0001c104(puVar4,ppcVar8);
    if (iVar5 != 0) {
      return puVar4;
    }
    FUN_0001c048(puVar4);
  }
  if (uStack_48 <= local_44) {
    if (uStack_48 == 0) {
      local_44 = 0;
    }
    else {
      local_44 = uStack_48 - 1;
    }
  }
LAB_0001cf04:
  iVar5 = DAT_0001d03c;
  *(char **)(DAT_0001d03c + 0x1cf14) = param_1;
  *(uint *)(iVar5 + 0x1cf18) = local_44;
  return (undefined4 *)0x0;
}



/* ===== FUN_0001d058 @ 0001d058 size=192 ===== */

int FUN_0001d058(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int local_3c;
  int iStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = DAT_0001d118;
  iStack_38 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_24 = 0;
  local_3c = 0;
  local_2c = 0;
  uStack_20 = 0;
  if (-1 < param_2) {
    puVar2 = (undefined4 *)(DAT_0001d118 + 0x1d098);
    uStack_28 = iStack_38;
    uStack_1c = iStack_38;
    local_3c = (*(code *)*puVar2)(param_2);
    if (local_3c != 0) {
      local_24 = *puVar2;
      uStack_20 = *(undefined4 *)(iVar1 + 0x1d09c);
      uStack_1c = *(undefined4 *)(iVar1 + 0x1d0a0);
      local_34 = 0;
      local_2c = 0;
      iStack_38 = param_2;
      uStack_28 = param_3;
      if ((param_1 != 0) && (iVar1 = FUN_0001aeec(param_1,&local_3c), iVar1 != 0)) {
        return local_3c;
      }
      (**(code **)(DAT_0001d11c + 0x1d10c))(local_3c);
    }
  }
  return 0;
}



/* ===== FUN_0001d2e0 @ 0001d2e0 size=112 ===== */

int * FUN_0001d2e0(int param_1,char *param_2)

{
  int iVar1;
  char *__s2;
  int *piVar2;
  
  if (param_2 == (char *)0x0 || param_1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(param_1 + 8);
    if (piVar2 != (int *)0x0) {
      __s2 = (char *)piVar2[8];
      while( true ) {
        if (__s2 == (char *)0x0) {
          return (int *)0x0;
        }
        iVar1 = strcmp(param_2,__s2);
        if ((iVar1 == 0) || (piVar2 = (int *)*piVar2, piVar2 == (int *)0x0)) break;
        __s2 = (char *)piVar2[8];
      }
    }
  }
  return piVar2;
}



/* ===== FUN_0001fa80 @ 0001fa80 size=24 ===== */

bool FUN_0001fa80(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0xc) == '\b';
  }
  return bVar1;
}



/* ===== FUN_0001fa98 @ 0001fa98 size=24 ===== */

bool FUN_0001fa98(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0xc) == '\x10';
  }
  return bVar1;
}



/* ===== FUN_0001fab0 @ 0001fab0 size=24 ===== */

bool FUN_0001fab0(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0xc) == ' ';
  }
  return bVar1;
}



/* ===== FUN_0001fac8 @ 0001fac8 size=24 ===== */

bool FUN_0001fac8(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0xc) == '@';
  }
  return bVar1;
}



/* ===== FUN_0001fd88 @ 0001fd88 size=4028 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_0001fd88(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  byte bVar31;
  char cVar32;
  undefined1 uVar33;
  undefined4 uVar34;
  int iVar35;
  byte *pbVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  undefined8 *puVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
  char *pcVar44;
  undefined1 *puVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  uint uVar49;
  int iVar50;
  int iVar51;
  char *pcVar52;
  undefined1 *puVar53;
  int iVar54;
  uint *puVar55;
  uint *puVar56;
  int iVar57;
  uint uVar58;
  int iVar59;
  int iVar60;
  uint *puVar61;
  byte *pbVar62;
  int iVar63;
  undefined8 *puVar64;
  bool bVar65;
  bool bVar66;
  uint in_fpscr;
  float fVar67;
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined8 uVar76;
  undefined1 *local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  char *local_d4;
  int local_d0;
  int local_cc;
  int local_c0;
  int local_b8;
  int local_b0;
  int local_9c;
  uint local_94;
  int local_90;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_54;
  
  iVar57 = DAT_00020d44 + 0x1fda8;
  if ((*(int *)(param_1 + 0x104) == 2) && (*(int *)(param_1 + 0x110) == 5)) {
    uVar58 = *(uint *)(param_1 + 0x124);
    iVar41 = *(int *)(param_1 + 0x118);
    iVar59 = *(int *)(param_1 + 0x128);
    if (*(int *)(param_1 + 0x114) == 5) {
      iVar46 = *(int *)(param_1 + 0x164);
    }
    else {
      iVar46 = *(int *)(param_1 + 0x15c);
    }
    iVar47 = *(int *)(param_1 + 0x120);
    local_94 = uVar58 * iVar47;
    if (local_94 != 1) {
      local_94 = local_94 + 3 & 0xfffffffc;
    }
    iVar35 = iVar47 * uVar58 * iVar46;
    iVar48 = iVar59 * *(int *)(param_1 + 0x11c) * local_94;
    if (*(int *)(param_1 + 0x100) == 2) {
      if (*(int *)(param_2 + 0x100) == 0) {
        local_cc = *(int *)(param_2 + 0x198);
        local_b8 = *(int *)(param_1 + 0x198);
        if (0 < iVar41) {
          iVar57 = *(int *)(param_1 + 0x1a8);
          fVar68 = *(float *)(param_1 + 0x1a4);
          if ((0 < iVar46) && (0 < iVar47)) {
            iVar43 = iVar59 * (uVar58 - 1);
            iVar54 = iVar59 * 7;
            local_b0 = -local_b8;
            if (iVar59 < 0) {
              iVar60 = iVar43;
              iVar43 = 0;
            }
            else {
              iVar60 = 0;
            }
            auVar70._8_8_ = CONCAT44(iVar57,iVar57);
            auVar70._0_8_ = CONCAT44(iVar57,iVar57);
            auVar69._8_8_ = CONCAT44(fVar68,fVar68);
            auVar69._0_8_ = CONCAT44(fVar68,fVar68);
            uVar42 = uVar58 & 0xfffffff0;
            local_84 = 0;
            do {
              local_d8 = 0;
              local_90 = 0;
              do {
                uVar76 = FUN_0002c380(local_90,iVar59);
                iVar51 = (int)((ulonglong)uVar76 >> 0x20);
                local_f0 = (undefined1 *)0x0;
                local_d0 = 0;
                iVar50 = iVar59 * local_94 * (int)uVar76;
                local_d4 = (char *)(local_b8 + iVar51 + iVar50);
                iVar51 = local_b8 + iVar50 + iVar51;
                do {
                  iVar50 = local_d8;
                  if (0 < (int)uVar58) {
                    pfVar37 = (float *)(local_cc + local_d8 * 4);
                    pcVar44 = (char *)(local_cc + (uVar58 + 0x3fffffff + local_d8) * 4 + 3);
                    bVar66 = local_d4 + local_b8 + iVar43 + local_b0 <= pfVar37;
                    bVar65 = pfVar37 == (float *)(local_d4 + local_b8 + iVar43 + local_b0);
                    if (!bVar66 || bVar65) {
                      bVar66 = pcVar44 <= local_d4 + local_b8 + iVar60 + local_b0;
                      bVar65 = local_d4 + local_b8 + iVar60 + local_b0 == pcVar44;
                    }
                    if (uVar58 - 1 < 0xf || (!bVar66 || bVar65)) {
                      pcVar44 = local_d4;
                      do {
                        fVar67 = (float)VectorSignedToFloat(*pcVar44 - iVar57,
                                                            (byte)(in_fpscr >> 0x16) & 3);
                        *pfVar37 = fVar67 * fVar68;
                        pfVar37 = pfVar37 + 1;
                        pcVar44 = pcVar44 + iVar59;
                        iVar50 = local_d8 + uVar58;
                      } while (pfVar37 != (float *)(local_cc + (local_d8 + uVar58) * 4));
                    }
                    else {
                      pcVar52 = local_d4 + iVar59;
                      pcVar44 = pcVar52 + iVar54;
                      pfVar38 = pfVar37;
                      do {
                        pcVar1 = pcVar52 + -iVar59;
                        cVar32 = *pcVar52;
                        pfVar39 = pfVar38 + 0x10;
                        pcVar2 = pcVar52 + iVar59;
                        pcVar3 = pcVar52 + iVar59 * 2;
                        pcVar4 = pcVar52 + iVar59 * 3;
                        pcVar5 = pcVar52 + iVar59 * 4;
                        pcVar6 = pcVar52 + iVar59 * 5;
                        pcVar7 = pcVar52 + iVar59 * 6;
                        pcVar8 = pcVar52 + iVar54;
                        pcVar52 = pcVar52 + iVar59 * 0x10;
                        pcVar9 = pcVar44 + iVar59;
                        pcVar10 = pcVar44 + iVar59 * 2;
                        pcVar11 = pcVar44 + iVar59 * 3;
                        pcVar12 = pcVar44 + iVar59 * 4;
                        pcVar13 = pcVar44 + iVar59 * 5;
                        pcVar14 = pcVar44 + iVar59 * 6;
                        pcVar15 = pcVar44 + iVar54;
                        pcVar44 = pcVar44 + iVar59 * 0x10;
                        uVar76 = CONCAT17(*pcVar7,CONCAT16(*pcVar6,CONCAT15(*pcVar5,CONCAT14(*pcVar4
                                                  ,CONCAT13(*pcVar3,CONCAT12(*pcVar2,CONCAT11(cVar32
                                                  ,*pcVar1)))))));
                        auVar73[8] = *pcVar8;
                        auVar73._0_8_ = uVar76;
                        auVar73[9] = *pcVar9;
                        auVar73[10] = *pcVar10;
                        auVar73[0xb] = *pcVar11;
                        auVar73[0xc] = *pcVar12;
                        auVar73[0xd] = *pcVar13;
                        auVar73[0xe] = *pcVar14;
                        auVar73[0xf] = *pcVar15;
                        auVar72 = VectorCopyLong(uVar76,1,0);
                        auVar71 = VectorCopyLong(auVar73._8_8_,1,0);
                        auVar75 = VectorCopyLong(auVar72._0_8_,2,0);
                        auVar74 = VectorCopyLong(auVar71._0_8_,2,0);
                        auVar73 = VectorCopyLong(auVar72._8_8_,2,0);
                        auVar71 = VectorCopyLong(auVar71._8_8_,2,0);
                        auVar75 = VectorSub(auVar75,auVar70,4);
                        auVar73 = VectorSub(auVar73,auVar70,4);
                        auVar72 = VectorSub(auVar74,auVar70,4);
                        auVar71 = VectorSub(auVar71,auVar70,4);
                        auVar74 = FixedToFP(auVar75,0,0,0,0x20);
                        auVar73 = FixedToFP(auVar73,0,0,0,0x20);
                        auVar72 = FixedToFP(auVar72,0,0,0,0x20);
                        auVar71 = FixedToFP(auVar71,0,0,0,0x20);
                        auVar74 = FloatVectorMult(auVar74,auVar69,2,0x20);
                        auVar73 = FloatVectorMult(auVar73,auVar69,2,0x20);
                        auVar72 = FloatVectorMult(auVar72,auVar69,2,0x20);
                        auVar71 = FloatVectorMult(auVar71,auVar69,2,0x20);
                        *(longlong *)pfVar38 = auVar74._0_8_;
                        *(longlong *)(pfVar38 + 2) = auVar74._8_8_;
                        *(longlong *)(pfVar38 + 4) = auVar73._0_8_;
                        *(longlong *)(pfVar38 + 6) = auVar73._8_8_;
                        *(longlong *)(pfVar38 + 8) = auVar72._0_8_;
                        *(longlong *)(pfVar38 + 10) = auVar72._8_8_;
                        *(longlong *)(pfVar38 + 0xc) = auVar71._0_8_;
                        *(longlong *)(pfVar38 + 0xe) = auVar71._8_8_;
                        pfVar38 = pfVar39;
                      } while (pfVar39 != pfVar37 + (uVar58 & 0xfffffff0));
                      iVar50 = local_d8 + uVar42;
                      if (uVar42 != uVar58) {
                        pfVar37 = (float *)(local_cc + (local_d8 + uVar42) * 4);
                        fVar67 = (float)VectorSignedToFloat(*(char *)(iVar51 + iVar59 * ((int)
                                                  local_f0 + uVar42)) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                        *pfVar37 = fVar67 * fVar68;
                        if ((int)(uVar42 + 1) < (int)uVar58) {
                          fVar67 = (float)VectorSignedToFloat(*(char *)(iVar51 + iVar59 * ((int)
                                                  local_f0 + uVar42 + 1)) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                          pfVar37[1] = fVar67 * fVar68;
                          if ((int)(uVar42 + 2) < (int)uVar58) {
                            fVar67 = (float)VectorSignedToFloat(*(char *)(iVar51 + iVar59 * ((int)
                                                  local_f0 + uVar42 + 2)) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                            pfVar37[2] = fVar67 * fVar68;
                            if ((int)(uVar42 + 3) < (int)uVar58) {
                              fVar67 = (float)VectorSignedToFloat(*(char *)(iVar51 + iVar59 * ((int)
                                                  local_f0 + uVar42 + 3)) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                              pfVar37[3] = fVar67 * fVar68;
                              if ((int)(uVar42 + 4) < (int)uVar58) {
                                fVar67 = (float)VectorSignedToFloat(*(char *)(iVar51 + iVar59 * ((
                                                  int)local_f0 + uVar42 + 4)) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                pfVar37[4] = fVar67 * fVar68;
                                if ((int)(uVar42 + 5) < (int)uVar58) {
                                  fVar67 = (float)VectorSignedToFloat(*(char *)(iVar51 + iVar59 * ((
                                                  int)local_f0 + uVar42 + 5)) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                  pfVar37[5] = fVar67 * fVar68;
                                  if ((int)(uVar42 + 6) < (int)uVar58) {
                                    fVar67 = (float)VectorSignedToFloat(*(char *)(iVar51 + iVar59 * 
                                                  ((int)local_f0 + uVar42 + 6)) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                    pfVar37[6] = fVar67 * fVar68;
                                    if ((int)(uVar42 + 7) < (int)uVar58) {
                                      fVar67 = (float)VectorSignedToFloat(*(char *)(iVar51 + iVar59 
                                                  * ((int)local_f0 + uVar42 + 7)) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                      pfVar37[7] = fVar67 * fVar68;
                                      if ((int)(uVar42 + 8) < (int)uVar58) {
                                        fVar67 = (float)VectorSignedToFloat(*(char *)(iVar51 + 
                                                  iVar59 * ((int)local_f0 + uVar42 + 8)) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                        pfVar37[8] = fVar67 * fVar68;
                                        if ((int)(uVar42 + 9) < (int)uVar58) {
                                          fVar67 = (float)VectorSignedToFloat(*(char *)(iVar51 + 
                                                  iVar59 * ((int)local_f0 + uVar42 + 9)) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                          pfVar37[9] = fVar67 * fVar68;
                                          if ((int)(uVar42 + 10) < (int)uVar58) {
                                            fVar67 = (float)VectorSignedToFloat(*(char *)(iVar51 + 
                                                  iVar59 * ((int)local_f0 + uVar42 + 10)) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                            pfVar37[10] = fVar67 * fVar68;
                                            if ((int)(uVar42 + 0xb) < (int)uVar58) {
                                              fVar67 = (float)VectorSignedToFloat(*(char *)(iVar51 +
                                                                                           iVar59 * 
                                                  ((int)local_f0 + uVar42 + 0xb)) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                              pfVar37[0xb] = fVar67 * fVar68;
                                              if ((int)(uVar42 + 0xc) < (int)uVar58) {
                                                fVar67 = (float)VectorSignedToFloat(*(char *)(iVar51
                                                                                             + 
                                                  iVar59 * ((int)local_f0 + uVar42 + 0xc)) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                                pfVar37[0xc] = fVar67 * fVar68;
                                                if ((int)(uVar42 + 0xd) < (int)uVar58) {
                                                  fVar67 = (float)VectorSignedToFloat(*(char *)(
                                                  iVar51 + iVar59 * ((int)local_f0 + uVar42 + 0xd))
                                                  - iVar57,(byte)(in_fpscr >> 0x16) & 3);
                                                  pfVar37[0xd] = fVar67 * fVar68;
                                                  if ((int)(uVar42 + 0xe) < (int)uVar58) {
                                                    fVar67 = (float)VectorSignedToFloat(*(char *)(
                                                  iVar51 + iVar59 * ((int)local_f0 + uVar42 + 0xe))
                                                  - iVar57,(byte)(in_fpscr >> 0x16) & 3);
                                                  pfVar37[0xe] = fVar67 * fVar68;
                                                  iVar50 = local_d8 + uVar58;
                                                  goto LAB_000206b8;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        iVar50 = local_d8 + uVar58;
                      }
                    }
                  }
LAB_000206b8:
                  local_d8 = iVar50;
                  local_d4 = local_d4 + iVar59 * uVar58;
                  local_d0 = local_d0 + 1;
                  local_f0 = (undefined1 *)((int)local_f0 + uVar58);
                } while (iVar47 != local_d0);
                local_90 = local_90 + 1;
              } while (iVar46 != local_90);
              local_b8 = local_b8 + iVar48;
              local_84 = local_84 + 1;
              local_cc = local_cc + iVar35 * 4;
              local_b0 = local_b0 - iVar48;
            } while (iVar41 != local_84);
          }
        }
      }
      else {
        if (*(int *)(param_2 + 0x100) != 2) goto LAB_00020754;
        local_cc = *(int *)(param_1 + 0x198);
        local_80 = *(int *)(param_2 + 0x198);
        if (((0 < iVar41) && (0 < iVar46)) && (0 < iVar47)) {
          uVar49 = uVar58 - 1;
          uVar42 = uVar58 & 0xfffffff0;
          iVar43 = uVar42 + 2;
          iVar54 = iVar59 * uVar49;
          iVar57 = iVar43;
          if (-1 < iVar59) {
            iVar54 = 0;
            iVar57 = iVar59 * uVar49;
          }
          local_c0 = -local_cc;
          iVar60 = iVar59 * 7;
          if (-1 >= iVar59) {
            iVar57 = 0;
          }
          local_7c = 0;
          do {
            local_e8 = 0;
            local_9c = 0;
            do {
              uVar76 = FUN_0002c380(local_9c,iVar59);
              iVar51 = (int)((ulonglong)uVar76 >> 0x20);
              iVar63 = 0;
              local_e0 = 0;
              iVar50 = iVar59 * local_94 * (int)uVar76;
              local_f0 = (undefined1 *)(local_cc + iVar51 + iVar50);
              iVar51 = local_cc + iVar50 + iVar51;
              do {
                if (0 < (int)uVar58) {
                  puVar40 = (undefined8 *)(local_80 + local_e8);
                  if (uVar49 < 0x20 ||
                      puVar40 <= local_f0 + local_cc + iVar57 + local_c0 &&
                      local_f0 + local_cc + iVar54 + local_c0 <=
                      (undefined1 *)(local_80 + uVar49 + local_e8)) {
                    puVar45 = local_f0;
                    do {
                      puVar64 = (undefined8 *)((int)puVar40 + 1);
                      *(undefined1 *)puVar40 = *puVar45;
                      puVar40 = puVar64;
                      puVar45 = puVar45 + iVar59;
                    } while (puVar64 != (undefined8 *)(local_80 + uVar58 + local_e8));
                  }
                  else {
                    puVar53 = local_f0 + iVar59;
                    puVar45 = puVar53 + iVar60;
                    puVar64 = (undefined8 *)((int)puVar40 + uVar42);
                    do {
                      puVar16 = puVar53 + -iVar59;
                      uVar33 = *puVar53;
                      puVar17 = puVar53 + iVar59;
                      puVar18 = puVar53 + iVar59 * 2;
                      puVar19 = puVar53 + iVar59 * 3;
                      puVar20 = puVar53 + iVar59 * 4;
                      puVar21 = puVar53 + iVar59 * 5;
                      puVar22 = puVar53 + iVar59 * 6;
                      puVar23 = puVar53 + iVar60;
                      puVar53 = puVar53 + iVar59 * 0x10;
                      puVar24 = puVar45 + iVar59;
                      puVar25 = puVar45 + iVar59 * 2;
                      puVar26 = puVar45 + iVar59 * 3;
                      puVar27 = puVar45 + iVar59 * 4;
                      puVar28 = puVar45 + iVar59 * 5;
                      puVar29 = puVar45 + iVar59 * 6;
                      puVar30 = puVar45 + iVar60;
                      puVar45 = puVar45 + iVar59 * 0x10;
                      uVar76 = CONCAT17(*puVar22,CONCAT16(*puVar21,CONCAT15(*puVar20,CONCAT14(*
                                                  puVar19,CONCAT13(*puVar18,CONCAT12(*puVar17,
                                                  CONCAT11(uVar33,*puVar16)))))));
                      auVar71[8] = *puVar23;
                      auVar71._0_8_ = uVar76;
                      auVar71[9] = *puVar24;
                      auVar71[10] = *puVar25;
                      auVar71[0xb] = *puVar26;
                      auVar71[0xc] = *puVar27;
                      auVar71[0xd] = *puVar28;
                      auVar71[0xe] = *puVar29;
                      auVar71[0xf] = *puVar30;
                      *puVar40 = uVar76;
                      puVar40[1] = auVar71._8_8_;
                      puVar40 = puVar40 + 2;
                    } while (puVar40 != puVar64);
                    iVar50 = local_e8 + uVar42;
                    if (uVar42 != uVar58) {
                      *(undefined1 *)(local_80 + iVar50) =
                           *(undefined1 *)(iVar51 + iVar59 * (iVar63 + uVar42));
                      if ((int)(uVar42 + 1) < (int)uVar58) {
                        *(undefined1 *)(local_80 + iVar50 + 1) =
                             *(undefined1 *)(iVar51 + iVar59 * (iVar63 + uVar42 + 1));
                        if (iVar43 < (int)uVar58) {
                          *(undefined1 *)(local_80 + iVar50 + 2) =
                               *(undefined1 *)(iVar51 + iVar59 * (iVar63 + iVar43));
                          if ((int)(uVar42 + 3) < (int)uVar58) {
                            *(undefined1 *)(local_80 + iVar50 + 3) =
                                 *(undefined1 *)(iVar51 + iVar59 * (iVar63 + uVar42 + 3));
                            if ((int)(uVar42 + 4) < (int)uVar58) {
                              *(undefined1 *)(local_80 + iVar50 + 4) =
                                   *(undefined1 *)(iVar51 + iVar59 * (iVar63 + uVar42 + 4));
                              if ((int)(uVar42 + 5) < (int)uVar58) {
                                *(undefined1 *)(local_80 + iVar50 + 5) =
                                     *(undefined1 *)(iVar51 + iVar59 * (iVar63 + uVar42 + 5));
                                if ((int)(uVar42 + 6) < (int)uVar58) {
                                  *(undefined1 *)(local_80 + iVar50 + 6) =
                                       *(undefined1 *)(iVar51 + iVar59 * (iVar63 + uVar42 + 6));
                                  if ((int)(uVar42 + 7) < (int)uVar58) {
                                    *(undefined1 *)(local_80 + iVar50 + 7) =
                                         *(undefined1 *)(iVar51 + iVar59 * (iVar63 + uVar42 + 7));
                                    if ((int)(uVar42 + 8) < (int)uVar58) {
                                      *(undefined1 *)(local_80 + iVar50 + 8) =
                                           *(undefined1 *)(iVar51 + iVar59 * (iVar63 + uVar42 + 8));
                                      if ((int)(uVar42 + 9) < (int)uVar58) {
                                        *(undefined1 *)(local_80 + iVar50 + 9) =
                                             *(undefined1 *)
                                              (iVar51 + iVar59 * (iVar63 + uVar42 + 9));
                                        if ((int)(uVar42 + 10) < (int)uVar58) {
                                          *(undefined1 *)(local_80 + iVar50 + 10) =
                                               *(undefined1 *)
                                                (iVar51 + iVar59 * (iVar63 + uVar42 + 10));
                                          if ((int)(uVar42 + 0xb) < (int)uVar58) {
                                            *(undefined1 *)(local_80 + iVar50 + 0xb) =
                                                 *(undefined1 *)
                                                  (iVar51 + iVar59 * (iVar63 + uVar42 + 0xb));
                                            if ((int)(uVar42 + 0xc) < (int)uVar58) {
                                              *(undefined1 *)(local_80 + iVar50 + 0xc) =
                                                   *(undefined1 *)
                                                    (iVar51 + iVar59 * (iVar63 + uVar42 + 0xc));
                                              if ((int)(uVar42 + 0xd) < (int)uVar58) {
                                                *(undefined1 *)(local_80 + iVar50 + 0xd) =
                                                     *(undefined1 *)
                                                      (iVar51 + iVar59 * (iVar63 + uVar42 + 0xd));
                                                if ((int)(uVar42 + 0xe) < (int)uVar58) {
                                                  *(undefined1 *)(local_80 + iVar50 + 0xe) =
                                                       *(undefined1 *)
                                                        (iVar51 + iVar59 * (iVar63 + uVar42 + 0xe));
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  local_e8 = local_e8 + uVar58;
                }
                iVar63 = iVar63 + uVar58;
                local_f0 = local_f0 + iVar59 * uVar58;
                local_e0 = local_e0 + 1;
              } while (iVar47 != local_e0);
              local_9c = local_9c + 1;
            } while (iVar46 != local_9c);
            local_cc = local_cc + iVar48;
            local_7c = local_7c + 1;
            local_80 = local_80 + iVar35;
            local_c0 = local_c0 - iVar48;
          } while (iVar41 != local_7c);
        }
      }
    }
    else {
      if ((*(int *)(param_1 + 0x100) != 1) || (*(int *)(param_2 + 0x100) != 0)) {
LAB_00020754:
        iVar41 = FUN_000173e0();
        if (-1 < iVar41) {
          fprintf((FILE *)**(undefined4 **)(iVar57 + DAT_00020d48),(char *)(DAT_00020d4c + 0x20780),
                  *(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_2 + 0x100));
        }
        goto LAB_00020780;
      }
      iVar57 = *(int *)(param_2 + 0x198);
      local_e4 = *(int *)(param_1 + 0x198);
      if (0 < iVar41) {
        if ((0 < iVar46) && (0 < iVar47)) {
          local_dc = 0;
          do {
            iVar54 = 0;
            local_e8 = 0;
            do {
              iVar60 = 0;
              uVar76 = FUN_0002c380(local_e8,iVar59);
              pbVar36 = (byte *)(local_e4 +
                                (iVar59 * local_94 * (int)uVar76 + (int)((ulonglong)uVar76 >> 0x20))
                                * 2);
              iVar43 = iVar54;
              do {
                iVar54 = iVar43;
                if (0 < (int)uVar58) {
                  iVar54 = iVar43 + uVar58;
                  puVar61 = (uint *)(iVar57 + iVar54 * 4);
                  puVar56 = (uint *)(iVar57 + iVar43 * 4);
                  pbVar62 = pbVar36;
                  do {
                    while( true ) {
                      bVar31 = pbVar62[1];
                      uVar42 = (bVar31 & 0x7f) >> 2;
                      uVar49 = (uint)*pbVar62 | (bVar31 & 3) << 8;
                      if (uVar42 == 0x1f) break;
                      if (uVar42 != 0) {
                        uVar42 = uVar42 + 0x70;
                      }
LAB_0001ff0c:
                      pbVar62 = pbVar62 + iVar59 * 2;
                      local_54 = uVar42 << 0x17;
                      local_54 = CONCAT13((byte)((uVar42 << 7) >> 8) | (bVar31 >> 7) << 7,
                                          (undefined3)local_54);
                      puVar55 = puVar56 + 1;
                      *puVar56 = local_54 | uVar49 << 0xd;
                      puVar56 = puVar55;
                      if (puVar55 == puVar61) goto LAB_0001ffac;
                    }
                    uVar42 = 0x6f;
                    if (uVar49 == 0) goto LAB_0001ff0c;
                    pbVar62 = pbVar62 + iVar59 * 2;
                    local_54 = (uint)(byte)((bVar31 >> 7) << 7) << 0x18;
                    puVar55 = puVar56 + 1;
                    *puVar56 = local_54 | 0x7f800001;
                    puVar56 = puVar55;
                  } while (puVar55 != puVar61);
                }
LAB_0001ffac:
                iVar60 = iVar60 + 1;
                pbVar36 = pbVar36 + iVar59 * uVar58 * 2;
                iVar43 = iVar54;
              } while (iVar47 != iVar60);
              local_e8 = local_e8 + 1;
            } while (iVar46 != local_e8);
            local_e4 = local_e4 + iVar48 * 2;
            local_dc = local_dc + 1;
            iVar57 = iVar57 + iVar35 * 4;
          } while (iVar41 != local_dc);
        }
      }
    }
    uVar34 = 0;
  }
  else {
    iVar41 = FUN_000173e0();
    if (-1 < iVar41) {
      fwrite((void *)(DAT_00020d50 + 0x20d38),1,0x33,
             (FILE *)**(undefined4 **)(iVar57 + DAT_00020d48));
      return 0xffffffff;
    }
LAB_00020780:
    uVar34 = 0xffffffff;
  }
  return uVar34;
}



/* ===== FUN_00021a8c @ 00021a8c size=1444 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_00021a8c(int param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  float *pfVar12;
  uint uVar13;
  char *pcVar14;
  uint *puVar15;
  uint *puVar16;
  undefined1 (*pauVar18) [16];
  char *pcVar19;
  uint in_fpscr;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  byte bStack_19;
  uint *puVar17;
  
  uVar7 = *(uint *)(param_1 + 0x114);
  iVar11 = DAT_00022030 + 0x21aa8;
  if ((int)uVar7 < 1) {
    uVar13 = 1;
  }
  else {
    if (uVar7 - 1 < 6) {
      uVar8 = 0;
      uVar13 = 1;
    }
    else {
      uVar13 = uVar7 >> 2;
      auVar22 = *(undefined1 (*) [16])(param_1 + 0x158);
      if (((uVar13 != 1) &&
          (auVar22 = VectorMultiply(auVar22,*(undefined1 (*) [16])(param_1 + 0x168),4), uVar13 != 2)
          ) && (auVar22 = VectorMultiply(auVar22,*(undefined1 (*) [16])(param_1 + 0x178),4),
               uVar13 != 3)) {
        auVar22 = VectorMultiply(auVar22,*(undefined1 (*) [16])(param_1 + 0x188),4);
      }
      uVar8 = uVar7 & 0xfffffffc;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = auVar22._8_8_;
      auVar23 = VectorMultiply(auVar22,auVar23,4);
      auVar22._12_4_ = 0;
      auVar22._0_12_ = auVar23._4_12_;
      auVar22 = VectorMultiply(auVar23,auVar22,4);
      uVar13 = auVar22._0_4_;
      if (uVar7 == uVar8) goto LAB_00021ba0;
    }
    uVar13 = *(int *)(param_1 + (uVar8 + 0x56) * 4) * uVar13;
    if ((((int)(uVar8 + 1) < (int)uVar7) &&
        (uVar13 = *(int *)(param_1 + (uVar8 + 0x57) * 4) * uVar13, (int)(uVar8 + 2) < (int)uVar7))
       && ((uVar13 = *(int *)(param_1 + (uVar8 + 0x58) * 4) * uVar13, (int)(uVar8 + 3) < (int)uVar7
           && ((uVar13 = *(int *)(param_1 + (uVar8 + 0x59) * 4) * uVar13,
               (int)(uVar8 + 4) < (int)uVar7 &&
               (uVar13 = *(int *)(param_1 + (uVar8 + 0x5a) * 4) * uVar13,
               (int)(uVar8 + 5) < (int)uVar7)))))) {
      uVar13 = *(int *)(param_1 + (uVar8 + 0x5b) * 4) * uVar13;
    }
  }
LAB_00021ba0:
  if (*(int *)(param_1 + 0x100) == 2) {
    if (*(int *)(param_2 + 0x100) == 0) {
      pfVar12 = *(float **)(param_2 + 0x198);
      pauVar18 = *(undefined1 (**) [16])(param_1 + 0x198);
      if (uVar13 == 0) {
        return 0;
      }
      fVar21 = *(float *)(param_1 + 0x1a4);
      iVar11 = *(int *)(param_1 + 0x1a8);
      if (uVar13 - 1 < 0xf ||
          pfVar12 < *pauVar18 + uVar13 && pauVar18 < (undefined1 (*) [16])(pfVar12 + uVar13)) {
        pcVar19 = pauVar18[-1] + 0xf;
        pcVar14 = pcVar19 + uVar13;
        do {
          pcVar19 = pcVar19 + 1;
          fVar20 = (float)VectorSignedToFloat(*pcVar19 - iVar11,(byte)(in_fpscr >> 0x16) & 3);
          *pfVar12 = fVar20 * fVar21;
          pfVar12 = pfVar12 + 1;
        } while (pcVar19 != pcVar14);
        return 0;
      }
      auVar2._8_8_ = CONCAT44(iVar11,iVar11);
      auVar2._0_8_ = CONCAT44(iVar11,iVar11);
      auVar1._8_8_ = CONCAT44(fVar21,fVar21);
      auVar1._0_8_ = CONCAT44(fVar21,fVar21);
      pfVar9 = pfVar12;
      pauVar10 = pauVar18;
      do {
        auVar22 = *pauVar10;
        pauVar10 = pauVar10 + 1;
        auVar23 = VectorCopyLong(auVar22._0_8_,1,0);
        auVar22 = VectorCopyLong(auVar22._8_8_,1,0);
        auVar25 = VectorCopyLong(auVar23._0_8_,2,0);
        auVar24 = VectorCopyLong(auVar22._0_8_,2,0);
        auVar23 = VectorCopyLong(auVar23._8_8_,2,0);
        auVar22 = VectorCopyLong(auVar22._8_8_,2,0);
        auVar25 = VectorSub(auVar25,auVar2,4);
        auVar23 = VectorSub(auVar23,auVar2,4);
        auVar24 = VectorSub(auVar24,auVar2,4);
        auVar22 = VectorSub(auVar22,auVar2,4);
        auVar25 = FixedToFP(auVar25,0,0,0,0x20);
        auVar23 = FixedToFP(auVar23,0,0,0,0x20);
        auVar24 = FixedToFP(auVar24,0,0,0,0x20);
        auVar22 = FixedToFP(auVar22,0,0,0,0x20);
        auVar25 = FloatVectorMult(auVar25,auVar1,2,0x20);
        auVar23 = FloatVectorMult(auVar23,auVar1,2,0x20);
        auVar24 = FloatVectorMult(auVar24,auVar1,2,0x20);
        auVar22 = FloatVectorMult(auVar22,auVar1,2,0x20);
        *(longlong *)pfVar9 = auVar25._0_8_;
        *(longlong *)(pfVar9 + 2) = auVar25._8_8_;
        *(longlong *)(pfVar9 + 4) = auVar23._0_8_;
        *(longlong *)(pfVar9 + 6) = auVar23._8_8_;
        *(longlong *)(pfVar9 + 8) = auVar24._0_8_;
        *(longlong *)(pfVar9 + 10) = auVar24._8_8_;
        *(longlong *)(pfVar9 + 0xc) = auVar22._0_8_;
        *(longlong *)(pfVar9 + 0xe) = auVar22._8_8_;
        pfVar9 = pfVar9 + 0x10;
      } while (pauVar10 != (undefined1 (*) [16])(*pauVar18 + (uVar13 & 0xfffffff0)));
      uVar7 = uVar13 & 0xfffffff0;
      if (uVar13 == uVar7) {
        return 0;
      }
      uVar8 = uVar7 + 1;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar7] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar7] = fVar20 * fVar21;
      if (uVar13 <= uVar8) {
        return 0;
      }
      uVar4 = uVar7 + 2;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar8] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar8] = fVar20 * fVar21;
      if (uVar13 <= uVar4) {
        return 0;
      }
      uVar8 = uVar7 + 3;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar4] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar4] = fVar20 * fVar21;
      if (uVar13 <= uVar8) {
        return 0;
      }
      uVar4 = uVar7 + 4;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar8] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar8] = fVar20 * fVar21;
      if (uVar13 <= uVar4) {
        return 0;
      }
      uVar8 = uVar7 + 5;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar4] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar4] = fVar20 * fVar21;
      if (uVar13 <= uVar8) {
        return 0;
      }
      uVar4 = uVar7 + 6;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar8] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar8] = fVar20 * fVar21;
      if (uVar13 <= uVar4) {
        return 0;
      }
      uVar8 = uVar7 + 7;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar4] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar4] = fVar20 * fVar21;
      if (uVar13 <= uVar8) {
        return 0;
      }
      uVar4 = uVar7 + 8;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar8] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar8] = fVar20 * fVar21;
      if (uVar13 <= uVar4) {
        return 0;
      }
      uVar8 = uVar7 + 9;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar4] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar4] = fVar20 * fVar21;
      if (uVar13 <= uVar8) {
        return 0;
      }
      uVar4 = uVar7 + 10;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar8] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar8] = fVar20 * fVar21;
      if (uVar13 <= uVar4) {
        return 0;
      }
      uVar8 = uVar7 + 0xb;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar4] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar4] = fVar20 * fVar21;
      if (uVar13 <= uVar8) {
        return 0;
      }
      uVar4 = uVar7 + 0xc;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar8] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar8] = fVar20 * fVar21;
      if (uVar13 <= uVar4) {
        return 0;
      }
      uVar8 = uVar7 + 0xd;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar4] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar4] = fVar20 * fVar21;
      if (uVar13 <= uVar8) {
        return 0;
      }
      uVar7 = uVar7 + 0xe;
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar8] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar8] = fVar20 * fVar21;
      if (uVar13 <= uVar7) {
        return 0;
      }
      fVar20 = (float)VectorSignedToFloat((char)(*pauVar18)[uVar7] - iVar11,
                                          (byte)(in_fpscr >> 0x16) & 3);
      pfVar12[uVar7] = fVar20 * fVar21;
      return 0;
    }
  }
  else if ((*(int *)(param_1 + 0x100) == 0) && (*(int *)(param_2 + 0x100) == 1)) {
    puVar15 = *(uint **)(param_1 + 0x198);
    if (uVar13 != 0) {
      puVar3 = *(undefined1 **)(param_2 + 0x198);
      puVar16 = puVar15;
      do {
        puVar17 = puVar16 + 1;
        uVar8 = *puVar16;
        uVar7 = (uVar8 & 0x7fffffff) >> 0x17;
        bStack_19 = (byte)(uVar8 >> 0x18);
        if (uVar7 == 0xff) {
          uVar7 = 0x1f;
          if ((uVar8 & 0x7fffff) == 0) goto LAB_00021bf4;
          uVar6 = 1;
        }
        else {
          if (uVar7 < 0x71) {
            uVar7 = 0;
          }
          else if (uVar7 < 0x8f) {
            uVar7 = uVar7 - 0x70 & 0x1f;
          }
          else {
            uVar7 = 0x1f;
          }
LAB_00021bf4:
          uVar6 = (undefined2)((uVar8 & 0x7fffff) >> 0xd);
        }
        *puVar3 = (char)uVar6;
        puVar3[1] = (byte)((ushort)uVar6 >> 8) | (byte)(uVar7 << 2) | bStack_19 & 0x80;
        puVar3 = puVar3 + 2;
        puVar16 = puVar17;
      } while (puVar17 != puVar15 + uVar13);
    }
    return 0;
  }
  iVar5 = FUN_000173e0();
  if (-1 < iVar5) {
    fprintf((FILE *)**(undefined4 **)(iVar11 + DAT_00022034),(char *)(DAT_00022038 + 0x21ffc),
            *(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_2 + 0x100));
  }
  return 0xffffffff;
}



/* ===== FUN_0002203c @ 0002203c size=4452 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_0002203c(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 uVar18;
  byte bVar19;
  undefined8 uVar20;
  byte *pbVar21;
  float *pfVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  undefined1 *puVar36;
  float fVar37;
  undefined8 *puVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  uint uVar47;
  int iVar48;
  int iVar49;
  byte *pbVar50;
  int iVar51;
  int iVar52;
  undefined8 *puVar53;
  int iVar54;
  float *pfVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  float *pfVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  uint uVar63;
  int iVar64;
  float *pfVar65;
  int iVar66;
  int iVar67;
  byte *pbVar68;
  undefined8 *puVar69;
  char *pcVar70;
  int iVar71;
  byte *pbVar72;
  bool bVar73;
  uint in_fpscr;
  float fVar74;
  float fVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 *local_14c;
  undefined8 *local_148;
  int local_140;
  int local_134;
  int local_110;
  int local_10c;
  int local_104;
  undefined4 local_2c;
  
  iVar27 = *(int *)(param_1 + 0x118);
  iVar35 = *(int *)(param_1 + 0x100);
  iVar28 = *(int *)(param_1 + 0x11c);
  uVar63 = *(uint *)(param_1 + 0x120);
  iVar46 = DAT_00022928 + 0x2206c;
  iVar29 = *(int *)(param_2 + 0x15c);
  iVar60 = *(int *)(param_1 + 0x124);
  fVar75 = *(float *)(param_1 + 0x1a4);
  iVar57 = *(int *)(param_1 + 0x1a8);
  iVar42 = *(int *)(param_2 + 0x100);
  if (iVar35 == 2) {
    if (iVar42 == 0) {
      iVar42 = *(int *)(param_2 + 0x198);
      iVar35 = *(int *)(param_1 + 0x198);
      if (iVar27 < 1) {
        return 0;
      }
      if (iVar29 < 1) {
        return 0;
      }
      if (iVar28 < 1) {
        return 0;
      }
      if ((int)uVar63 < 1) {
        return 0;
      }
      uVar47 = uVar63 & 0xfffffff0;
      iVar56 = uVar47 + 2;
      iVar66 = uVar47 + 3;
      iVar23 = uVar47 + 4;
      iVar25 = uVar63 * iVar29 * iVar28;
      iVar58 = uVar47 + 5;
      iVar51 = uVar47 + 6;
      iVar49 = uVar47 + 1;
      iVar44 = uVar47 + 7;
      iVar64 = uVar47 + 8;
      iVar52 = uVar47 + 9;
      iVar48 = uVar47 + 0xb;
      auVar16._8_8_ = CONCAT44(fVar75,fVar75);
      auVar16._0_8_ = CONCAT44(fVar75,fVar75);
      iVar24 = uVar47 + 0xd;
      auVar17._8_8_ = CONCAT44(iVar57,iVar57);
      auVar17._0_8_ = CONCAT44(iVar57,iVar57);
      iVar67 = uVar47 + 10;
      iVar71 = uVar47 + 0xc;
      iVar46 = uVar63 * 4;
      iVar30 = uVar47 + 0xe;
      iVar54 = iVar60 * 6;
      iVar43 = iVar54;
      if (-1 < iVar60) {
        iVar43 = 0;
      }
      iVar39 = (uVar63 - 1) * iVar60;
      iVar40 = iVar39;
      if (-1 >= iVar60) {
        iVar40 = 0;
        iVar43 = iVar39;
      }
      local_110 = 0;
      local_104 = 0;
      local_10c = iVar46;
      do {
        iVar61 = 0;
        iVar39 = 0;
        iVar42 = iVar42 + local_110;
        do {
          puVar53 = (undefined8 *)(iVar42 + iVar39 * 4);
          iVar41 = iVar35 + iVar61;
          local_140 = 0;
          iVar26 = iVar61;
          iVar62 = iVar39;
          do {
            iVar45 = iVar26 - iVar61;
            if (uVar63 - 1 < 0xf ||
                (uint)(iVar35 + iVar43 + iVar26) <= (uint)(iVar46 + -1 + (int)puVar53) &&
                puVar53 <= (undefined8 *)(iVar35 + iVar40 + iVar26)) {
              pfVar65 = (float *)(iVar42 + iVar62 * 4);
              pcVar70 = (char *)(iVar35 + iVar26);
              do {
                fVar74 = (float)VectorSignedToFloat(*pcVar70 - iVar57,(byte)(in_fpscr >> 0x16) & 3);
                *pfVar65 = fVar74 * fVar75;
                pfVar65 = pfVar65 + 1;
                pcVar70 = pcVar70 + iVar60;
              } while (pfVar65 != (float *)(local_110 + local_10c + (int)puVar53));
            }
            else {
              puVar36 = (undefined1 *)(iVar35 + iVar60 + iVar26);
              iVar34 = iVar26 + iVar60 * 8 + iVar35;
              puVar31 = puVar53;
              do {
                puVar1 = puVar36 + -iVar60;
                uVar18 = *puVar36;
                puVar69 = puVar31 + 8;
                puVar2 = puVar36 + iVar60;
                puVar3 = puVar36 + iVar60 * 2;
                puVar4 = puVar36 + iVar60 * 3;
                puVar5 = puVar36 + iVar60 * 4;
                puVar6 = puVar36 + iVar60 * 5;
                puVar7 = puVar36 + iVar54;
                puVar8 = puVar36 + iVar60 * 7;
                puVar36 = puVar36 + iVar60 * 0x10;
                puVar9 = (undefined1 *)(iVar34 + iVar60);
                puVar10 = (undefined1 *)(iVar34 + iVar60 * 2);
                puVar11 = (undefined1 *)(iVar34 + iVar60 * 3);
                puVar12 = (undefined1 *)(iVar34 + iVar60 * 4);
                puVar13 = (undefined1 *)(iVar34 + iVar60 * 5);
                puVar14 = (undefined1 *)(iVar34 + iVar54);
                puVar15 = (undefined1 *)(iVar34 + iVar60 * 7);
                iVar34 = iVar34 + iVar60 * 0x10;
                uVar20 = CONCAT17(*puVar7,CONCAT16(*puVar6,CONCAT15(*puVar5,CONCAT14(*puVar4,
                                                  CONCAT13(*puVar3,CONCAT12(*puVar2,CONCAT11(uVar18,
                                                  *puVar1)))))));
                auVar76[8] = *puVar8;
                auVar76._0_8_ = uVar20;
                auVar76[9] = *puVar9;
                auVar76[10] = *puVar10;
                auVar76[0xb] = *puVar11;
                auVar76[0xc] = *puVar12;
                auVar76[0xd] = *puVar13;
                auVar76[0xe] = *puVar14;
                auVar76[0xf] = *puVar15;
                auVar77 = VectorCopyLong(uVar20,1,0);
                auVar76 = VectorCopyLong(auVar76._8_8_,1,0);
                auVar79 = VectorCopyLong(auVar77._0_8_,2,0);
                auVar78 = VectorCopyLong(auVar76._0_8_,2,0);
                auVar77 = VectorCopyLong(auVar77._8_8_,2,0);
                auVar76 = VectorCopyLong(auVar76._8_8_,2,0);
                auVar79 = VectorSub(auVar79,auVar17,4);
                auVar77 = VectorSub(auVar77,auVar17,4);
                auVar78 = VectorSub(auVar78,auVar17,4);
                auVar76 = VectorSub(auVar76,auVar17,4);
                auVar79 = FixedToFP(auVar79,0,0,0,0x20);
                auVar77 = FixedToFP(auVar77,0,0,0,0x20);
                auVar78 = FixedToFP(auVar78,0,0,0,0x20);
                auVar76 = FixedToFP(auVar76,0,0,0,0x20);
                auVar79 = FloatVectorMult(auVar79,auVar16,2,0x20);
                auVar77 = FloatVectorMult(auVar77,auVar16,2,0x20);
                auVar78 = FloatVectorMult(auVar78,auVar16,2,0x20);
                auVar76 = FloatVectorMult(auVar76,auVar16,2,0x20);
                *puVar31 = auVar79._0_8_;
                puVar31[1] = auVar79._8_8_;
                puVar31[2] = auVar77._0_8_;
                puVar31[3] = auVar77._8_8_;
                puVar31[4] = auVar78._0_8_;
                puVar31[5] = auVar78._8_8_;
                puVar31[6] = auVar76._0_8_;
                puVar31[7] = auVar76._8_8_;
                puVar31 = puVar69;
              } while (puVar69 != puVar53 + (uVar63 >> 4) * 8);
              if (uVar47 != uVar63) {
                fVar74 = (float)VectorSignedToFloat(*(char *)(iVar41 + uVar47 * iVar60 + iVar45) -
                                                    iVar57,(byte)(in_fpscr >> 0x16) & 3);
                *(float *)(iVar42 + (iVar62 + uVar47) * 4) = fVar74 * fVar75;
                if (iVar49 < (int)uVar63) {
                  fVar74 = (float)VectorSignedToFloat(*(char *)(iVar49 * iVar60 + iVar35 + iVar61 +
                                                               iVar45) - iVar57,
                                                      (byte)(in_fpscr >> 0x16) & 3);
                  *(float *)(iVar42 + (iVar49 + iVar62) * 4) = fVar74 * fVar75;
                  if (iVar56 < (int)uVar63) {
                    fVar74 = (float)VectorSignedToFloat(*(char *)(iVar41 + iVar56 * iVar60 + iVar45)
                                                        - iVar57,(byte)(in_fpscr >> 0x16) & 3);
                    *(float *)(iVar42 + (iVar62 + iVar56) * 4) = fVar74 * fVar75;
                    if (iVar66 < (int)uVar63) {
                      fVar74 = (float)VectorSignedToFloat(*(char *)(iVar35 + iVar66 * iVar60 +
                                                                    iVar61 + iVar45) - iVar57,
                                                          (byte)(in_fpscr >> 0x16) & 3);
                      *(float *)(iVar42 + (iVar66 + iVar62) * 4) = fVar74 * fVar75;
                      if (iVar23 < (int)uVar63) {
                        fVar74 = (float)VectorSignedToFloat(*(char *)(iVar41 + iVar23 * iVar60 +
                                                                     iVar45) - iVar57,
                                                            (byte)(in_fpscr >> 0x16) & 3);
                        *(float *)(iVar42 + (iVar62 + iVar23) * 4) = fVar74 * fVar75;
                        if (iVar58 < (int)uVar63) {
                          fVar74 = (float)VectorSignedToFloat(*(char *)(iVar41 + iVar58 * iVar60 +
                                                                       iVar45) - iVar57,
                                                              (byte)(in_fpscr >> 0x16) & 3);
                          *(float *)(iVar42 + (iVar62 + iVar58) * 4) = fVar74 * fVar75;
                          if (iVar51 < (int)uVar63) {
                            fVar74 = (float)VectorSignedToFloat(*(char *)(iVar41 + iVar51 * iVar60 +
                                                                         iVar45) - iVar57,
                                                                (byte)(in_fpscr >> 0x16) & 3);
                            *(float *)(iVar42 + (iVar62 + iVar51) * 4) = fVar74 * fVar75;
                            if (iVar44 < (int)uVar63) {
                              fVar74 = (float)VectorSignedToFloat(*(char *)(iVar41 + iVar44 * iVar60
                                                                           + iVar45) - iVar57,
                                                                  (byte)(in_fpscr >> 0x16) & 3);
                              *(float *)(iVar42 + (iVar62 + iVar44) * 4) = fVar74 * fVar75;
                              if (iVar64 < (int)uVar63) {
                                fVar74 = (float)VectorSignedToFloat(*(char *)(iVar41 + iVar64 * 
                                                  iVar60 + iVar45) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                *(float *)(iVar42 + (iVar62 + iVar64) * 4) = fVar74 * fVar75;
                                if (iVar52 < (int)uVar63) {
                                  fVar74 = (float)VectorSignedToFloat(*(char *)(iVar41 + iVar52 * 
                                                  iVar60 + iVar45) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                  *(float *)(iVar42 + (iVar62 + iVar52) * 4) = fVar74 * fVar75;
                                  if (iVar67 < (int)uVar63) {
                                    fVar74 = (float)VectorSignedToFloat(*(char *)(iVar41 + iVar60 * 
                                                  iVar67 + iVar45) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                    *(float *)(iVar42 + (iVar62 + iVar67) * 4) = fVar74 * fVar75;
                                    if (iVar48 < (int)uVar63) {
                                      fVar74 = (float)VectorSignedToFloat(*(char *)(iVar41 + iVar48 
                                                  * iVar60 + iVar45) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                      *(float *)(iVar42 + (iVar62 + iVar48) * 4) = fVar74 * fVar75;
                                      if (iVar71 < (int)uVar63) {
                                        fVar74 = (float)VectorSignedToFloat(*(char *)(iVar41 + 
                                                  iVar71 * iVar60 + iVar45) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                        *(float *)(iVar42 + (iVar62 + iVar71) * 4) = fVar74 * fVar75
                                        ;
                                        if (iVar24 < (int)uVar63) {
                                          fVar74 = (float)VectorSignedToFloat(*(char *)(iVar41 + 
                                                  iVar60 * iVar24 + iVar45) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                          *(float *)(iVar42 + (iVar62 + iVar24) * 4) =
                                               fVar74 * fVar75;
                                          if (iVar30 < (int)uVar63) {
                                            fVar74 = (float)VectorSignedToFloat(*(char *)(iVar41 + 
                                                  iVar30 * iVar60 + iVar45) - iVar57,
                                                  (byte)(in_fpscr >> 0x16) & 3);
                                            *(float *)(iVar42 + (iVar62 + iVar30) * 4) =
                                                 fVar74 * fVar75;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            iVar62 = iVar62 + uVar63;
            iVar26 = iVar26 + iVar60 * uVar63;
            local_140 = local_140 + 1;
            puVar53 = (undefined8 *)((int)puVar53 + iVar46);
          } while (iVar28 != local_140);
          iVar39 = iVar39 + uVar63 * iVar28;
          iVar61 = iVar61 + 1;
        } while (iVar29 != iVar61);
        local_110 = local_110 + iVar25 * 4;
        local_104 = local_104 + 1;
        local_10c = local_10c + iVar25 * -4;
      } while (iVar27 != local_104);
      return 0;
    }
  }
  else if ((iVar35 == 1) && (iVar42 == 0)) {
    pbVar21 = *(byte **)(param_1 + 0x198);
    pfVar65 = *(float **)(param_2 + 0x198);
    if (iVar27 < 1) {
      return 0;
    }
    if (iVar29 < 1) {
      return 0;
    }
    if (iVar28 < 1) {
      return 0;
    }
    if ((int)uVar63 < 1) {
      return 0;
    }
    fVar74 = (float)VectorSignedToFloat(iVar57,(byte)(in_fpscr >> 0x16) & 3);
    iVar35 = 0;
    iVar42 = 0;
    do {
      pfVar65 = (float *)((int)pfVar65 + iVar35);
      pfVar59 = pfVar65;
      pbVar72 = pbVar21;
      do {
        iVar46 = 0;
        pfVar22 = pfVar59;
        pbVar50 = pbVar72;
        do {
          pfVar55 = pfVar22 + uVar63;
          pbVar68 = pbVar50;
          do {
            bVar19 = pbVar68[1];
            uVar47 = (bVar19 & 0x7f) >> 2;
            uVar33 = (uint)*pbVar68 | (bVar19 & 3) << 8;
            if (uVar47 == 0x1f) {
              uVar47 = 0x6f;
              if (uVar33 == 0) goto LAB_000227e4;
              local_2c = (uint)(byte)((bVar19 >> 7) << 7) << 0x18;
              fVar37 = (float)(local_2c | 0x7f800001);
            }
            else {
              if (uVar47 != 0) {
                uVar47 = uVar47 + 0x70;
              }
LAB_000227e4:
              local_2c = uVar47 << 0x17;
              local_2c = CONCAT13((byte)((uVar47 << 7) >> 8) | (bVar19 >> 7) << 7,
                                  (undefined3)local_2c);
              fVar37 = (float)(local_2c | uVar33 << 0xd);
            }
            pbVar68 = pbVar68 + iVar60 * 2;
            *pfVar22 = (fVar37 - fVar74) * fVar75;
            pfVar22 = pfVar22 + 1;
          } while (pfVar22 != pfVar55);
          iVar46 = iVar46 + 1;
          pbVar50 = pbVar50 + iVar60 * uVar63 * 2;
        } while (iVar28 != iVar46);
        pbVar72 = pbVar72 + 2;
        pfVar59 = pfVar59 + uVar63 * iVar28;
      } while (pbVar72 != pbVar21 + iVar29 * 2);
      iVar42 = iVar42 + 1;
      iVar35 = iVar35 + uVar63 * iVar29 * iVar28 * 4;
      if (iVar27 == iVar42) {
        return 0;
      }
    } while( true );
  }
  if ((iVar35 == iVar42) && (iVar35 - 2U < 2)) {
    iVar35 = *(int *)(param_1 + 0x198);
    puVar53 = *(undefined8 **)(param_2 + 0x198);
    if ((((0 < iVar27) && (0 < iVar29)) && (0 < iVar28)) && (0 < (int)uVar63)) {
      uVar47 = uVar63 & 0xfffffff0;
      iVar67 = uVar47 + 2;
      iVar46 = uVar47 + 1;
      iVar71 = uVar47 + 3;
      iVar43 = uVar47 + 4;
      iVar64 = uVar47 + 6;
      iVar58 = uVar47 + 5;
      bVar73 = iVar60 < 0;
      local_140 = 0;
      iVar57 = uVar63 * iVar29 * iVar28;
      local_134 = 0;
      iVar42 = iVar57;
      if (!bVar73) {
        iVar42 = 0;
      }
      iVar30 = iVar60 * (uVar63 - 1);
      if (bVar73) {
        iVar42 = iVar30;
      }
      if (bVar73) {
        iVar30 = 0;
      }
      do {
        iVar54 = 0;
        puVar53 = (undefined8 *)((int)puVar53 + local_140);
        local_14c = puVar53;
        local_148 = puVar53;
        do {
          iVar48 = iVar35 + iVar54;
          iVar44 = 0;
          iVar23 = iVar54;
          puVar31 = local_148;
          puVar69 = local_14c;
          do {
            iVar24 = iVar23 - iVar54;
            if (uVar63 - 1 < 0x20 ||
                (undefined1 *)(iVar35 + iVar42 + iVar23) <=
                (undefined1 *)((uVar63 - 1) + (int)puVar69) &&
                puVar69 <= (undefined8 *)(iVar35 + iVar30 + iVar23)) {
              puVar32 = (undefined8 *)((int)puVar31 + uVar63);
              puVar36 = (undefined1 *)(iVar35 + iVar23);
              do {
                puVar38 = (undefined8 *)((int)puVar31 + 1);
                *(undefined1 *)puVar31 = *puVar36;
                puVar36 = puVar36 + iVar60;
                puVar31 = puVar38;
              } while (puVar38 != puVar32);
            }
            else {
              puVar36 = (undefined1 *)(iVar35 + iVar60 + iVar23);
              iVar25 = iVar23 + iVar60 * 8 + iVar35;
              puVar32 = puVar69;
              do {
                puVar1 = puVar36 + -iVar60;
                uVar18 = *puVar36;
                puVar2 = puVar36 + iVar60;
                puVar3 = puVar36 + iVar60 * 2;
                puVar4 = puVar36 + iVar60 * 3;
                puVar5 = puVar36 + iVar60 * 4;
                puVar6 = puVar36 + iVar60 * 5;
                puVar7 = puVar36 + iVar60 * 6;
                puVar8 = puVar36 + iVar60 * 7;
                puVar36 = puVar36 + iVar60 * 0x10;
                puVar9 = (undefined1 *)(iVar25 + iVar60);
                puVar10 = (undefined1 *)(iVar25 + iVar60 * 2);
                puVar11 = (undefined1 *)(iVar25 + iVar60 * 3);
                puVar12 = (undefined1 *)(iVar25 + iVar60 * 4);
                puVar13 = (undefined1 *)(iVar25 + iVar60 * 5);
                puVar14 = (undefined1 *)(iVar25 + iVar60 * 6);
                puVar15 = (undefined1 *)(iVar25 + iVar60 * 7);
                iVar25 = iVar25 + iVar60 * 0x10;
                uVar20 = CONCAT17(*puVar7,CONCAT16(*puVar6,CONCAT15(*puVar5,CONCAT14(*puVar4,
                                                  CONCAT13(*puVar3,CONCAT12(*puVar2,CONCAT11(uVar18,
                                                  *puVar1)))))));
                auVar77[8] = *puVar8;
                auVar77._0_8_ = uVar20;
                auVar77[9] = *puVar9;
                auVar77[10] = *puVar10;
                auVar77[0xb] = *puVar11;
                auVar77[0xc] = *puVar12;
                auVar77[0xd] = *puVar13;
                auVar77[0xe] = *puVar14;
                auVar77[0xf] = *puVar15;
                *puVar32 = uVar20;
                puVar32[1] = auVar77._8_8_;
                puVar32 = puVar32 + 2;
              } while (puVar32 != (undefined8 *)(uVar47 + (int)puVar69));
              if (uVar47 == uVar63) {
                puVar32 = (undefined8 *)((int)puVar31 + uVar47);
              }
              else {
                *(undefined1 *)((int)puVar31 + uVar47) =
                     *(undefined1 *)(iVar48 + uVar47 * iVar60 + iVar24);
                if (((((iVar46 < (int)uVar63) &&
                      (*(undefined1 *)((int)puVar31 + iVar46) =
                            *(undefined1 *)(iVar48 + iVar60 * iVar46 + iVar24), iVar67 < (int)uVar63
                      )) && ((*(undefined1 *)((int)puVar31 + iVar67) =
                                   *(undefined1 *)(iVar48 + iVar67 * iVar60 + iVar24),
                             iVar71 < (int)uVar63 &&
                             ((*(undefined1 *)((int)puVar31 + iVar71) =
                                    *(undefined1 *)(iVar48 + iVar60 * iVar71 + iVar24),
                              iVar43 < (int)uVar63 &&
                              (*(undefined1 *)((int)puVar31 + iVar43) =
                                    *(undefined1 *)(iVar48 + iVar43 * iVar60 + iVar24),
                              iVar58 < (int)uVar63)))))) &&
                    (*(undefined1 *)((int)puVar31 + iVar58) =
                          *(undefined1 *)(iVar48 + iVar58 * iVar60 + iVar24), iVar64 < (int)uVar63))
                   && (((((*(undefined1 *)((int)puVar31 + iVar64) =
                                *(undefined1 *)(iVar48 + iVar60 * iVar64 + iVar24),
                          (int)(uVar47 + 7) < (int)uVar63 &&
                          (*(undefined1 *)((int)puVar31 + uVar47 + 7) =
                                *(undefined1 *)(iVar48 + iVar60 * (uVar47 + 7) + iVar24),
                          (int)(uVar47 + 8) < (int)uVar63)) &&
                         (*(undefined1 *)((int)puVar31 + uVar47 + 8) =
                               *(undefined1 *)(iVar48 + iVar60 * (uVar47 + 8) + iVar24),
                         (int)(uVar47 + 9) < (int)uVar63)) &&
                        ((*(undefined1 *)((int)puVar31 + uVar47 + 9) =
                               *(undefined1 *)(iVar48 + (uVar47 + 9) * iVar60 + iVar24),
                         (int)(uVar47 + 10) < (int)uVar63 &&
                         (*(undefined1 *)((int)puVar31 + uVar47 + 10) =
                               *(undefined1 *)(iVar48 + iVar60 * (uVar47 + 10) + iVar24),
                         (int)(uVar47 + 0xb) < (int)uVar63)))) &&
                       ((*(undefined1 *)((int)puVar31 + uVar47 + 0xb) =
                              *(undefined1 *)(iVar48 + iVar60 * (uVar47 + 0xb) + iVar24),
                        (int)(uVar47 + 0xc) < (int)uVar63 &&
                        ((*(undefined1 *)((int)puVar31 + uVar47 + 0xc) =
                               *(undefined1 *)(iVar48 + (uVar47 + 0xc) * iVar60 + iVar24),
                         (int)(uVar47 + 0xd) < (int)uVar63 &&
                         (*(undefined1 *)((int)puVar31 + uVar47 + 0xd) =
                               *(undefined1 *)(iVar48 + (uVar47 + 0xd) * iVar60 + iVar24),
                         (int)(uVar47 + 0xe) < (int)uVar63)))))))) {
                  puVar32 = (undefined8 *)((int)puVar31 + uVar63);
                  *(undefined1 *)((int)puVar31 + uVar47 + 0xe) =
                       *(undefined1 *)(iVar48 + (uVar47 + 0xe) * iVar60 + iVar24);
                }
                else {
                  puVar32 = (undefined8 *)((int)puVar31 + uVar63);
                }
              }
            }
            iVar44 = iVar44 + 1;
            puVar69 = (undefined8 *)((int)puVar69 + uVar63);
            iVar23 = iVar23 + iVar60 * uVar63;
            puVar31 = puVar32;
          } while (iVar28 != iVar44);
          iVar54 = iVar54 + 1;
          local_14c = (undefined8 *)((int)local_14c + uVar63 * iVar28);
          local_148 = (undefined8 *)((int)local_148 + uVar63 * iVar28);
        } while (iVar29 != iVar54);
        local_140 = local_140 + iVar57;
        local_134 = local_134 + 1;
      } while (iVar27 != local_134);
    }
    return 0;
  }
  iVar27 = FUN_000173e0();
  if (iVar27 < 0) {
    return 0xffffffff;
  }
  fprintf((FILE *)**(undefined4 **)(iVar46 + DAT_0002292c),(char *)(DAT_00022930 + 0x231a4),
          *(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_2 + 0x100));
  return 0xffffffff;
}



/* ===== FUN_000231ac @ 000231ac size=396 ===== */

void * FUN_000231ac(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                   undefined4 *param_5,int param_6,void *param_7,undefined4 param_8)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar9 = DAT_00023338 + 0x231dc;
  pvVar1 = calloc(0x1bc,1);
  if (pvVar1 == (void *)0x0) {
    iVar4 = FUN_000173e0();
    if (-1 < iVar4) {
      fwrite((void *)(DAT_00023340 + 0x23330),1,0x35,(FILE *)**(undefined4 **)(iVar9 + DAT_0002333c)
            );
    }
  }
  else {
    if (param_6 == 5) {
      uVar6 = param_5[3];
      uVar7 = param_5[2];
      uVar3 = *param_5;
      if (param_3 == 1) {
        *(undefined4 *)((int)pvVar1 + 0x100) = param_2;
        *(undefined4 *)((int)pvVar1 + 0x1a4) = param_1;
        *(undefined4 *)((int)pvVar1 + 0x1a8) = param_8;
        *(undefined4 *)((int)pvVar1 + 0x104) = 0;
        uVar8 = param_5[1];
        uVar5 = uVar6;
        uVar6 = uVar7;
      }
      else {
        *(undefined4 *)((int)pvVar1 + 0x104) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1a4) = param_1;
        uVar5 = *(undefined4 *)((int)param_7 + 0xc);
        *(undefined4 *)((int)pvVar1 + 0x100) = param_2;
        *(undefined4 *)((int)pvVar1 + 0x1a8) = param_8;
        uVar8 = uVar7;
      }
      param_6 = 4;
      *(undefined4 *)((int)pvVar1 + 0x110) = 4;
      *(undefined4 *)((int)pvVar1 + 0x114) = 4;
      *(undefined4 *)((int)pvVar1 + 0x118) = uVar3;
      *(undefined4 *)((int)pvVar1 + 0x11c) = uVar5;
      *(undefined4 *)((int)pvVar1 + 0x120) = uVar8;
      *(undefined4 *)((int)pvVar1 + 0x124) = uVar6;
      *(undefined4 *)((int)pvVar1 + 0x158) = uVar3;
      *(undefined4 *)((int)pvVar1 + 0x15c) = uVar5;
      *(undefined4 *)((int)pvVar1 + 0x160) = uVar8;
      *(undefined4 *)((int)pvVar1 + 0x164) = uVar6;
    }
    else {
      *(undefined4 *)((int)pvVar1 + 0x1a8) = param_8;
      *(undefined4 *)((int)pvVar1 + 0x100) = param_2;
      *(undefined4 *)((int)pvVar1 + 0x1a4) = param_1;
      *(undefined4 *)((int)pvVar1 + 0x104) = 0;
      *(ulonglong *)((int)pvVar1 + 0x110) = CONCAT44(param_6,param_6);
      memcpy((void *)((int)pvVar1 + 0x118),param_7,param_6 << 2);
      memcpy((void *)((int)pvVar1 + 0x158),param_7,param_6 << 2);
    }
    iVar9 = FUN_0001756c(param_6,(int)pvVar1 + 0x158,0,0xffffffff);
    pvVar2 = malloc(iVar9 << 2);
    *(void **)((int)pvVar1 + 0x198) = pvVar2;
  }
  return pvVar1;
}



/* ===== FUN_00023344 @ 00023344 size=112 ===== */

undefined4 FUN_00023344(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_000233b4 + 0x23358;
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x198) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x198));
    }
    free(param_1);
    return 0;
  }
  iVar1 = FUN_000173e0();
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  fwrite((void *)(DAT_000233bc + 0x233a8),1,0x1e,(FILE *)**(undefined4 **)(iVar2 + DAT_000233b8));
  return 0xffffffff;
}



/* ===== FUN_000233c0 @ 000233c0 size=44 ===== */

undefined4
FUN_000233c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  param_1[6] = param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[10] = param_5;
  param_1[0xb] = param_6;
  param_1[3] = param_7;
  return 0;
}



/* ===== FUN_000233f0 @ 000233f0 size=68 ===== */

undefined4 FUN_000233f0(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  vsnprintf((char *)(DAT_00023434 + 0x2341c),0x100,param_2,&uStack_8);
  return param_1;
}



/* ===== FUN_00023438 @ 00023438 size=256 ===== */

void FUN_00023438(int param_1,char *param_2,int param_3)

{
  size_t sVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  char *pcVar6;
  char acStack_34 [16];
  
  sVar1 = strlen(param_2);
  *(undefined2 *)(param_2 + sVar1) = *(undefined2 *)(DAT_00023538 + 0x23464);
  if (0 < param_3) {
    if (param_3 + -1 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      pcVar6 = (char *)(DAT_0002353c + 0x2349c);
      puVar4 = (undefined4 *)(param_1 + -4);
      puVar5 = (undefined2 *)(DAT_00023540 + 0x234a4);
      do {
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + 1;
        sprintf(acStack_34,pcVar6,*puVar4);
        sVar1 = strlen(param_2);
        pcVar2 = stpcpy(param_2 + sVar1,acStack_34);
        *(undefined2 *)pcVar2 = *puVar5;
      } while (iVar3 < param_3 + -1);
      if (param_3 <= iVar3) goto LAB_00023518;
    }
    pcVar6 = (char *)(DAT_00023544 + 0x234f0);
    puVar4 = (undefined4 *)(param_1 + iVar3 * 4);
    do {
      iVar3 = iVar3 + 1;
      sprintf(acStack_34,pcVar6,*puVar4);
      strcat(param_2,acStack_34);
      puVar4 = puVar4 + 1;
    } while (iVar3 < param_3);
  }
LAB_00023518:
  sVar1 = strlen(param_2);
  *(undefined2 *)(param_2 + sVar1) = *(undefined2 *)(DAT_00023548 + 0x2352c);
  return;
}



/* ===== FUN_0002354c @ 0002354c size=64 ===== */

undefined4 FUN_0002354c(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  vsnprintf((char *)(DAT_0002358c + 0x23574),0x100,param_2,&uStack_8);
  return 3;
}



/* ===== FUN_00023590 @ 00023590 size=4688 ===== */

int FUN_00023590(char *param_1,int param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *pvVar5;
  byte *__len;
  void *__addr;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  byte *__s1;
  byte *pbVar18;
  int unaff_r8;
  bool bVar19;
  byte *local_130;
  int local_12c;
  int local_128;
  byte *local_124;
  void *local_120;
  int local_118;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  void *local_a0;
  byte *local_9c;
  byte *local_98;
  int local_90;
  int local_8c;
  int iStack_88;
  uint uStack_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  void *local_70;
  byte *pbStack_6c;
  byte *pbStack_68;
  void *local_64;
  byte *local_60;
  byte *local_5c;
  byte *pbStack_58;
  uint local_54;
  int local_50;
  int local_4c;
  uint uStack_48;
  int local_44;
  uint uStack_40;
  uint local_3c;
  uint auStack_38 [5];
  
  if (param_2 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 2;
  }
  iVar9 = open(param_1,iVar9);
  iVar17 = DAT_00024598 + 0x235b8;
  if (iVar9 == -1) {
    piVar10 = __errno_location();
    pcVar6 = strerror(*piVar10);
    iVar9 = DAT_000245ac + 0x23908;
LAB_00023908:
    iVar9 = FUN_000233f0(1,iVar9,pcVar6);
    return iVar9;
  }
  __len = (byte *)lseek(iVar9,0,2);
  lseek(iVar9,0,0);
  if (__len == (byte *)0x0) {
    close(iVar9);
    iVar9 = FUN_0002354c(3,DAT_000245b4 + 0x2395c);
    return iVar9;
  }
  if (__len == (byte *)0xffffffff) {
    close(iVar9);
    iVar9 = FUN_0002354c(3,DAT_000245d8 + 0x23bf8,0xffffffff);
    return iVar9;
  }
  if (param_2 == 0) {
    iVar13 = 2;
  }
  else {
    iVar13 = 1;
  }
  __addr = mmap((void *)0x0,(size_t)__len,3,iVar13,iVar9,0);
  if (__addr == (void *)0xffffffff) {
    close(iVar9);
    piVar10 = __errno_location();
    pcVar6 = strerror(*piVar10);
    iVar9 = FUN_000233f0(2,DAT_000245b0 + 0x23934,pcVar6);
    return iVar9;
  }
  iVar9 = close(iVar9);
  if (iVar9 != 0) {
    munmap(__addr,(size_t)__len);
    piVar10 = __errno_location();
    pcVar6 = strerror(*piVar10);
    iVar9 = DAT_000245b8 + 0x23988;
    goto LAB_00023908;
  }
  uStack_48 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_54 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_50 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  pbVar18 = (byte *)0xffffffff;
  local_5c = (byte *)0x0;
  auStack_38[1] = 0;
  pbStack_58 = (byte *)0xffffffff;
  local_4c = 0;
  local_44 = 0;
  local_3c = 0;
  auStack_38[2] = 0;
  pbVar16 = (byte *)0x0;
  local_64 = __addr;
  local_60 = __len;
  uStack_40 = uStack_48;
  auStack_38[0] = uStack_48;
  auStack_38[3] = uStack_48;
  if (__len < (byte *)0x10) {
    iVar9 = FUN_0002354c(3,DAT_000245dc + 0x23c10);
LAB_00023c14:
    if (iVar9 != 0) {
      munmap(__addr,(size_t)__len);
      return iVar9;
    }
LAB_000236e4:
    pbVar14 = (byte *)((int)__addr + (int)pbVar16);
    uVar12 = (uint)*(byte *)((int)__addr + (int)pbVar16);
    piVar10 = *(int **)(iVar17 + DAT_0002459c);
    iVar9 = *piVar10;
    if ((*(ushort *)(iVar9 + uVar12 * 2) & 0x20) != 0) {
      do {
        pbVar16 = pbVar14 + (1 - (int)__addr);
        local_5c = pbVar16;
        if (pbVar18 + (int)__addr + -1 == pbVar14) goto LAB_00023744;
        pbVar14 = pbVar14 + 1;
        uVar12 = (uint)*pbVar14;
      } while ((*(ushort *)(iVar9 + uVar12 * 2) & 0x20) != 0);
    }
    if (uVar12 == 0x7b) {
      local_118 = 0;
      local_5c = pbVar16 + 1;
      iVar17 = DAT_000245c0 + 0x23a18;
      iVar13 = DAT_000245c4 + 0x23a28;
      iVar15 = DAT_000245c8 + 0x23a38;
      do {
        pvVar5 = local_64;
        if (local_5c < pbVar18) {
          pbVar16 = (byte *)((int)local_64 + (int)local_5c);
          uVar12 = (uint)*(byte *)((int)local_64 + (int)local_5c);
          if ((*(ushort *)(iVar9 + uVar12 * 2) & 0x20) != 0) {
            do {
              local_5c = pbVar16 + (1 - (int)local_64);
              if (pbVar18 + (int)local_64 + -1 == pbVar16) goto LAB_00023a90;
              pbVar16 = pbVar16 + 1;
              uVar12 = (uint)*pbVar16;
            } while ((*(ushort *)(iVar9 + uVar12 * 2) & 0x20) != 0);
          }
          pbVar16 = local_5c + 1;
          local_5c = pbVar16;
          if (uVar12 != 0x27 && uVar12 != 0x22) {
            iVar9 = FUN_0002354c(3,DAT_00024610 + 0x23ff0);
            goto LAB_00023a9c;
          }
          if (pbVar18 <= pbVar16) {
LAB_00023cdc:
            iVar9 = FUN_0002354c(3,iVar13);
            goto LAB_00023a9c;
          }
          __s1 = (byte *)((int)local_64 + (int)pbVar16);
          pbVar14 = pbVar16;
          if (*(byte *)((int)local_64 + (int)pbVar16) != uVar12) {
            pbVar7 = __s1;
            do {
              local_5c = pbVar7 + (1 - (int)local_64);
              if (pbVar18 + (int)local_64 + -1 == pbVar7) goto LAB_00023cdc;
              pbVar7 = pbVar7 + 1;
              pbVar14 = local_5c;
            } while (*pbVar7 != uVar12);
          }
          local_5c = pbVar14 + 1;
          if (pbVar18 <= local_5c) {
LAB_00023ddc:
            iVar9 = FUN_0002354c(3,iVar15);
            goto LAB_00023a9c;
          }
          uVar12 = (uint)*(byte *)((int)local_64 + (int)local_5c);
          pbVar7 = (byte *)((int)local_64 + (int)local_5c);
          if ((*(ushort *)(iVar9 + uVar12 * 2) & 0x20) != 0) {
            do {
              local_5c = pbVar7 + (1 - (int)local_64);
              if (pbVar18 + (int)local_64 + -1 == pbVar7) goto LAB_00023ddc;
              pbVar7 = pbVar7 + 1;
              uVar12 = (uint)*pbVar7;
            } while ((*(ushort *)(iVar9 + uVar12 * 2) & 0x20) != 0);
          }
          if (uVar12 != 0x3a) goto LAB_00023ddc;
          local_5c = local_5c + 1;
          if ((local_5c < pbVar18) &&
             (pbVar7 = (byte *)((int)local_64 + (int)local_5c),
             (*(ushort *)(iVar9 + (uint)*(byte *)((int)local_64 + (int)local_5c) * 2) & 0x20) != 0))
          {
            do {
              local_5c = pbVar7 + (1 - (int)local_64);
              if (pbVar18 + (int)local_64 + -1 == pbVar7) break;
              pbVar7 = pbVar7 + 1;
            } while ((*(ushort *)(iVar9 + (uint)*pbVar7 * 2) & 0x20) != 0);
          }
          pbVar7 = local_5c;
          if ((int)pbVar14 - (int)pbVar16 == 5) {
            iVar8 = memcmp(__s1,(void *)(DAT_0002461c + 0x240b8),5);
            if (iVar8 == 0) {
              if ((local_54 & 0xff) != 0) {
                iVar9 = FUN_0002354c(3,DAT_00024634 + 0x24470);
                goto LAB_00023a9c;
              }
              if (pbVar7 < pbVar18) {
                bVar1 = *(byte *)((int)pvVar5 + (int)pbVar7);
                if (bVar1 == 0x22 || bVar1 == 0x27) {
                  local_5c = pbVar7 + 1;
                  if (local_5c < pbVar18) {
                    bVar2 = *(byte *)((int)pvVar5 + (int)local_5c);
                    local_5c = pbVar7 + 2;
                    if (bVar2 == 0x3d) {
                      iVar9 = FUN_0002354c(3,DAT_00024654 + 0x246cc);
                    }
                    else {
                      if (bVar2 < 0x3e) {
                        if (bVar2 != 0x3c) {
LAB_00024444:
                          iVar9 = FUN_0002354c(3,DAT_00024630 + 0x24454);
                          goto LAB_00024454;
                        }
                        local_50 = 0;
                      }
                      else if (bVar2 == 0x3e) {
                        local_50 = 1;
                      }
                      else {
                        if (bVar2 != 0x7c) goto LAB_00024444;
                        local_50 = 2;
                      }
                      if (local_5c < pbVar18) {
                        pbVar16 = pbVar7 + 3;
                        bVar2 = *(byte *)((int)pvVar5 + (int)local_5c);
                        local_5c = pbVar16;
                        if (pbVar16 < pbVar18) {
                          uVar12 = (uint)*(byte *)((int)pvVar5 + (int)pbVar16);
                          pbVar14 = (byte *)((int)pvVar5 + (int)pbVar16);
                          if ((*(ushort *)(iVar9 + uVar12 * 2) & 8) == 0) {
                            iVar9 = FUN_0002354c(3,DAT_00024688 + 0x248c0);
                          }
                          else {
                            iVar8 = 0;
                            do {
                              local_5c = pbVar14 + (1 - (int)pvVar5);
                              iVar8 = iVar8 * 10 + (uVar12 - 0x30);
                              if (pbVar7 + (int)(pbVar18 + (int)pvVar5 + (2 - (int)pbVar16)) ==
                                  pbVar14) break;
                              pbVar14 = pbVar14 + 1;
                              uVar12 = (uint)*pbVar14;
                            } while ((*(ushort *)(iVar9 + uVar12 * 2) & 8) != 0);
                            if (local_5c < pbVar18) {
                              if (bVar1 == *(byte *)((int)pvVar5 + (int)local_5c)) {
                                local_5c = local_5c + 1;
                                if (iVar8 == 1) {
                                  local_50 = 2;
                                  if (bVar2 == 0x62) {
                                    local_4c = 0;
                                    iVar8 = local_4c;
                                  }
                                  else if (bVar2 != 0x69) {
                                    if (bVar2 != 0x75) goto LAB_000241e0;
                                    local_4c = 5;
                                    iVar8 = local_4c;
                                  }
LAB_0002421c:
                                  local_4c = iVar8;
                                  local_54 = CONCAT31(local_54._1_3_,1);
                                  goto LAB_00023aa8;
                                }
                                if (bVar2 == 0x62) {
                                  iVar9 = FUN_0002354c(3,DAT_00024674 + 0x24818);
                                }
                                else {
                                  if (bVar2 == 0x69) {
                                    if (iVar8 != 2) {
                                      if (iVar8 == 4) {
                                        local_4c = 3;
                                        iVar8 = local_4c;
                                      }
                                      else {
                                        if (iVar8 != 8) {
                                          iVar9 = FUN_0002354c(3,DAT_00024670 + 0x24804);
                                          goto LAB_00024454;
                                        }
                                        local_4c = 4;
                                        iVar8 = local_4c;
                                      }
                                    }
                                  }
                                  else if (bVar2 == 0x75) {
                                    if (iVar8 == 2) {
                                      local_4c = 6;
                                      iVar8 = local_4c;
                                    }
                                    else if (iVar8 == 4) {
                                      local_4c = 7;
                                      iVar8 = local_4c;
                                    }
                                    else if (iVar8 != 8) {
                                      iVar9 = FUN_0002354c(3,DAT_0002466c + 0x247f0);
                                      goto LAB_00024454;
                                    }
                                  }
                                  else {
LAB_000241e0:
                                    if (bVar2 == 0x66) {
                                      if (iVar8 == 4) {
                                        iVar8 = 9;
                                      }
                                      else {
                                        if (iVar8 != 8) {
                                          iVar9 = FUN_0002354c(3,DAT_00024668 + 0x247dc);
                                          goto LAB_00024454;
                                        }
                                        local_4c = 10;
                                        iVar8 = local_4c;
                                      }
                                    }
                                    else {
                                      if (bVar2 != 99) {
                                        iVar9 = FUN_0002354c(3,DAT_00024664 + 0x24748,bVar2);
                                        goto LAB_00024454;
                                      }
                                      if (iVar8 == 8) {
                                        local_4c = 0xb;
                                        iVar8 = local_4c;
                                      }
                                      else {
                                        if (iVar8 != 0x10) {
                                          iVar9 = FUN_0002354c(3,DAT_0002468c + 0x248d4);
                                          goto LAB_00024454;
                                        }
                                        local_4c = 0xc;
                                        iVar8 = local_4c;
                                      }
                                    }
                                  }
                                  local_4c = iVar8;
                                  iVar8 = local_4c;
                                  if (local_50 != 2) goto LAB_0002421c;
                                  iVar9 = FUN_0002354c(3,DAT_00024660 + 0x24730);
                                }
                              }
                              else {
                                iVar9 = FUN_0002354c(3,DAT_00024678 + 0x2484c,bVar1);
                              }
                            }
                            else {
                              iVar9 = FUN_0002354c(3,DAT_0002467c + 0x24864,bVar1);
                            }
                          }
                        }
                        else {
                          iVar9 = FUN_0002354c(3,DAT_00024680 + 0x24898);
                        }
                      }
                      else {
                        iVar9 = FUN_0002354c(3,DAT_00024684 + 0x248ac);
                      }
                    }
                  }
                  else {
                    iVar9 = FUN_0002354c(3,DAT_0002464c + 0x246a0);
                  }
                }
                else {
                  iVar9 = FUN_0002354c(3,DAT_00024650 + 0x246b8,bVar1);
                }
              }
              else {
                iVar9 = FUN_0002354c(3,DAT_00024640 + 0x2454c);
              }
LAB_00024454:
              local_54 = CONCAT31(local_54._1_3_,1);
              goto LAB_00023a9c;
            }
            iVar8 = memcmp(__s1,(void *)(DAT_00024620 + 0x24240),5);
            if (iVar8 != 0) goto LAB_00024090;
            if ((uStack_40 & 0xff) != 0) {
              iVar9 = FUN_0002354c(3,DAT_00024638 + 0x244e8);
              goto LAB_00023a9c;
            }
            if (pbVar7 < pbVar18) {
              bVar1 = *(byte *)((int)pvVar5 + (int)pbVar7);
              if (bVar1 == 0x5b || bVar1 == 0x28) {
                local_5c = pbVar7 + 1;
                bVar19 = false;
                local_3c = 0;
                do {
                  if ((pbVar18 == local_5c) ||
                     (uVar12 = (uint)*(byte *)((int)pvVar5 + (int)local_5c),
                     (*(ushort *)(iVar9 + uVar12 * 2) & 8) == 0)) break;
                  uVar11 = 0;
                  pbVar16 = (byte *)((int)pvVar5 + (int)(local_5c + 1));
                  do {
                    local_5c = pbVar16 + -(int)pvVar5;
                    uVar11 = uVar11 * 10 + (uVar12 - 0x30);
                    if ((byte *)((int)pvVar5 + (int)pbVar18) == pbVar16) break;
                    uVar12 = (uint)*pbVar16;
                    pbVar16 = pbVar16 + 1;
                  } while ((*(ushort *)(iVar9 + uVar12 * 2) & 8) != 0);
                  auStack_38[local_3c] = uVar11;
                  local_3c = local_3c + 1;
                  if (pbStack_58 <= local_5c) goto LAB_000244f0;
                  uVar12 = (uint)*(byte *)((int)pvVar5 + (int)local_5c);
                  pbVar16 = (byte *)((int)pvVar5 + (int)local_5c);
                  if ((*(ushort *)(iVar9 + uVar12 * 2) & 0x20) != 0) {
                    do {
                      local_5c = pbVar16 + (1 - (int)pvVar5);
                      if ((byte *)((int)pvVar5 + (int)(pbStack_58 + -1)) == pbVar16)
                      goto LAB_00024384;
                      pbVar16 = pbVar16 + 1;
                      uVar12 = (uint)*pbVar16;
                    } while ((*(ushort *)(iVar9 + uVar12 * 2) & 0x20) != 0);
                  }
                  if (uVar12 == 0x2c) {
                    local_5c = local_5c + 1;
                    if (pbStack_58 <= local_5c) goto LAB_000244f0;
                    pbVar16 = (byte *)((int)pvVar5 + (int)local_5c);
                    bVar19 = true;
                    if ((*(ushort *)(iVar9 + (uint)*(byte *)((int)pvVar5 + (int)local_5c) * 2) &
                        0x20) != 0) {
                      do {
                        local_5c = pbVar16 + (1 - (int)pvVar5);
                        if ((byte *)((int)pvVar5 + (int)(pbStack_58 + -1)) == pbVar16)
                        goto LAB_00024384;
                        pbVar16 = pbVar16 + 1;
                      } while ((*(ushort *)(iVar9 + (uint)*pbVar16 * 2) & 0x20) != 0);
                    }
                  }
                  if (3 < local_3c) {
                    bVar19 = false;
                  }
                  if (pbStack_58 <= local_5c) {
                    bVar19 = false;
                  }
                  pbVar18 = pbStack_58;
                } while (bVar19);
LAB_00024384:
                if (local_5c < pbStack_58) {
                  uVar12 = (uint)*(byte *)((int)pvVar5 + (int)local_5c);
                  if (bVar1 == 0x28) {
                    if (uVar12 == 0x29) goto LAB_00024570;
                  }
                  else if (uVar12 == 0x5d) {
LAB_00024570:
                    local_5c = local_5c + 1;
                    uStack_40 = CONCAT31(uStack_40._1_3_,1);
                    goto LAB_00023aa8;
                  }
                  if ((*(ushort *)(iVar9 + uVar12 * 2) & 8) == 0) {
                    iVar9 = FUN_0002354c(3,DAT_00024644 + 0x24564,bVar1);
                  }
                  else {
                    iVar9 = FUN_0002354c(3,DAT_00024624 + 0x243c8);
                  }
                }
                else {
LAB_000244f0:
                  iVar9 = FUN_0002354c(3,DAT_0002463c + 0x24500);
                }
              }
              else {
                iVar9 = FUN_0002354c(3,DAT_00024658 + 0x246f0,bVar1);
              }
            }
            else {
              iVar9 = FUN_0002354c(3,DAT_00024648 + 0x24594);
            }
            uStack_40 = CONCAT31(uStack_40._1_3_,1);
            goto LAB_00023a9c;
          }
          if (((int)pbVar14 - (int)pbVar16 != 0xd) ||
             (iVar9 = memcmp(__s1,(void *)(DAT_000245f8 + 0x23e94),0xd), iVar9 != 0)) {
LAB_00024090:
            iVar9 = FUN_0002354c(3,DAT_00024618 + 0x240a0);
            goto LAB_00023a9c;
          }
          if ((uStack_48 & 0xff) != 0) {
            iVar9 = FUN_0002354c(3,DAT_00024628 + 0x24420);
            goto LAB_00023a9c;
          }
          if ((byte *)0xfffffffb < pbVar7) {
LAB_00024424:
            iVar9 = FUN_0002354c(3,DAT_0002462c + 0x24434);
LAB_00023f10:
            uStack_48 = CONCAT31(uStack_48._1_3_,1);
            goto LAB_00023a9c;
          }
          if ((pbVar18 <= pbVar7 + 4) ||
             (iVar9 = strncmp((char *)((int)pvVar5 + (int)pbVar7),(char *)(DAT_000245fc + 0x23ecc),4
                             ), iVar9 != 0)) {
            if ((byte *)0xfffffffa < pbVar7) goto LAB_00024424;
            if ((pbVar7 + 5 < pbVar18) &&
               (iVar9 = strncmp((char *)((int)pvVar5 + (int)pbVar7),(char *)(DAT_00024600 + 0x23ef8)
                                ,5), iVar9 == 0)) {
              local_5c = pbVar7 + 5;
              uStack_48 = CONCAT31(uStack_48._1_3_,1);
              local_44 = 0;
              goto LAB_00023aa8;
            }
            iVar9 = FUN_0002354c(3,DAT_00024604 + 0x23f10);
            goto LAB_00023f10;
          }
          local_5c = pbVar7 + 4;
          local_44 = 1;
          uStack_48 = CONCAT31(uStack_48._1_3_,1);
        }
        else {
LAB_00023a90:
          iVar9 = FUN_0002354c(3,iVar17);
LAB_00023a9c:
          if (iVar9 != 0) goto LAB_000239e0;
        }
LAB_00023aa8:
        if (pbStack_58 <= local_5c) {
LAB_00023b18:
          if (local_118 != 2) {
            if (local_118 == 0) {
              iVar9 = DAT_00024608 + 0x23f28;
            }
            else {
              iVar9 = DAT_000245cc + 0x23b3c;
            }
            iVar9 = FUN_0002354c(3,DAT_000245d0 + 0x23b48,iVar9);
            goto LAB_00023758;
          }
          break;
        }
        uVar12 = (uint)*(byte *)((int)local_64 + (int)local_5c);
        iVar9 = *piVar10;
        pbVar16 = (byte *)((int)local_64 + (int)local_5c);
        if ((*(ushort *)(iVar9 + uVar12 * 2) & 0x20) != 0) {
          do {
            local_5c = pbVar16 + (1 - (int)local_64);
            if ((byte *)((int)local_64 + (int)(pbStack_58 + -1)) == pbVar16) goto LAB_00023b18;
            pbVar16 = pbVar16 + 1;
            uVar12 = (uint)*pbVar16;
          } while ((*(ushort *)(iVar9 + uVar12 * 2) & 0x20) != 0);
        }
        if (uVar12 != 0x2c) goto LAB_00023b18;
        local_5c = local_5c + 1;
        local_118 = local_118 + 1;
        pbVar18 = pbStack_58;
      } while (local_118 != 3);
      if (local_5c < pbStack_58) {
        pbVar16 = (byte *)((int)local_64 + (int)local_5c);
        if ((*(ushort *)(*piVar10 + (uint)*(byte *)((int)local_64 + (int)local_5c) * 2) & 0x20) == 0
           ) {
          if (*(byte *)((int)local_64 + (int)local_5c) == 0x7d) {
LAB_00024028:
            local_5c = local_5c + 1;
            if (pbStack_58 <= local_5c) goto LAB_00023fac;
          }
          if ((*(ushort *)(*piVar10 + (uint)*(byte *)((int)local_64 + (int)local_5c) * 2) & 0x20) !=
              0) {
            pbVar16 = (byte *)((int)local_64 + (int)local_5c);
            do {
              local_5c = local_5c + 1;
              if (pbStack_58 <= local_5c) goto LAB_00023fac;
              pbVar16 = pbVar16 + 1;
            } while ((*(ushort *)(*piVar10 + (uint)*pbVar16 * 2) & 0x20) != 0);
          }
        }
        else {
          do {
            local_5c = pbVar16 + (1 - (int)local_64);
            if (pbVar16 == pbStack_58 + (int)local_64 + -1) goto LAB_00023fac;
            pbVar16 = pbVar16 + 1;
          } while ((*(ushort *)(*piVar10 + (uint)*pbVar16 * 2) & 0x20) != 0);
          if (*pbVar16 == 0x7d) goto LAB_00024028;
        }
LAB_00024000:
        iVar9 = FUN_0002354c(3,DAT_00024614 + 0x24018,local_5c,pbStack_58);
        goto LAB_00023758;
      }
LAB_00023fac:
      if (pbStack_58 != local_5c) goto LAB_00024000;
      if (((byte *)((int)local_64 + (int)pbStack_58))[-1] != 10) {
        iVar9 = FUN_0002354c(3,DAT_0002460c + 0x23fd8);
        goto LAB_00023758;
      }
    }
    else {
LAB_00023744:
      iVar9 = FUN_0002354c(3,DAT_000245a0 + 0x23754);
LAB_00023758:
      if (iVar9 != 0) goto LAB_000239e0;
    }
    uVar12 = local_3c;
    iVar15 = local_44;
    iVar13 = local_4c;
    iVar17 = local_50;
    pbVar16 = pbStack_58;
    if (local_3c == 0) {
LAB_00023d68:
      local_130 = pbVar16;
      local_a0 = __addr;
      local_9c = local_130;
      local_98 = __len;
      iVar9 = FUN_0002354c(3,DAT_000245f4 + 0x23d78);
      goto LAB_000238e4;
    }
    if (local_3c < 2) {
LAB_000237b8:
      local_128 = local_50;
      local_12c = local_44;
      local_130 = pbStack_58;
      memcpy(&local_b0,auStack_38,local_3c << 2);
      local_9c = pbVar16;
      local_90 = iVar17;
      local_8c = iVar13;
      iStack_88 = iVar15;
      uStack_84 = uVar12;
      local_80 = local_b0;
      local_7c = uStack_ac;
      local_78 = uStack_a8;
      local_74 = uStack_a4;
      pbStack_6c = pbVar16;
      uVar3 = (ulonglong)local_b0 * (ulonglong)*(byte *)(DAT_000245a4 + 0x2382c + iVar13);
      lVar4 = CONCAT44(uStack_a4,(int)uVar3);
      local_70 = __addr;
      pbStack_68 = __len;
      if ((int)(uVar3 >> 0x20) != 0) {
LAB_00023c44:
        local_a0 = __addr;
        local_98 = __len;
        iVar9 = FUN_0002354c(3,DAT_000245e4 + 0x23c54);
        goto LAB_000238e4;
      }
      if (1 < uVar12) {
        uVar3 = (ulonglong)uStack_ac * (uVar3 & 0xffffffff);
        lVar4 = CONCAT44(uStack_a4,(int)uVar3);
        if ((int)(uVar3 >> 0x20) != 0) goto LAB_00023c44;
        if (uVar12 != 2) {
          uVar3 = (ulonglong)uStack_a8 * (uVar3 & 0xffffffff);
          lVar4 = CONCAT44(uStack_a4,(int)uVar3);
          if (((int)(uVar3 >> 0x20) != 0) ||
             ((uVar12 != 3 &&
              (lVar4 = (ulonglong)uStack_a4 * (uVar3 & 0xffffffff),
              (int)((ulonglong)lVar4 >> 0x20) != 0)))) goto LAB_00023c44;
        }
      }
      uVar11 = (uint)lVar4;
      if (uVar11 == 0) goto LAB_00023d68;
      if (CARRY4((uint)pbVar16,uVar11)) {
        local_a0 = __addr;
        local_98 = __len;
        iVar9 = FUN_0002354c(3,DAT_0002465c + 0x24718);
LAB_000238e4:
        local_128 = iVar17;
        local_12c = iVar15;
        local_130 = pbVar16;
        local_124 = __len;
        local_120 = __addr;
        goto LAB_00023b64;
      }
      local_124 = __len;
      local_120 = __addr;
      if (__len != pbVar16 + uVar11) {
        local_a0 = __addr;
        local_98 = __len;
        iVar9 = FUN_0002354c(3,DAT_000245a8 + 0x238e0,uVar11,pbVar16,__len);
        goto LAB_000238e4;
      }
    }
    else {
      lVar4 = CONCAT44(auStack_38[0],auStack_38[1]);
      if ((int)((ulonglong)auStack_38[1] * (ulonglong)auStack_38[0] >> 0x20) == 0) {
        if (local_3c != 2) {
          lVar4 = CONCAT44(auStack_38[0],auStack_38[2]);
          uVar3 = (ulonglong)auStack_38[2] *
                  ((ulonglong)auStack_38[1] * (ulonglong)auStack_38[0] & 0xffffffff);
          if (((int)(uVar3 >> 0x20) != 0) ||
             ((local_3c != 3 &&
              (lVar4 = (uVar3 & 0xffffffff) * (ulonglong)auStack_38[3],
              (int)((ulonglong)lVar4 >> 0x20) != 0)))) goto LAB_00023b50;
        }
        goto LAB_000237b8;
      }
LAB_00023b50:
      iVar9 = FUN_0002354c(3,DAT_000245d4 + 0x23b60,(int)((ulonglong)lVar4 >> 0x20),(int)lVar4);
      iVar13 = unaff_r8;
LAB_00023b64:
      if (iVar9 != 0) goto LAB_000239e0;
    }
    iVar9 = 0;
    *param_3 = local_128;
    param_3[1] = iVar13;
    param_3[2] = local_12c;
    param_3[3] = uVar12;
    param_3[4] = local_b0;
    param_3[5] = uStack_ac;
    param_3[6] = uStack_a8;
    param_3[7] = uStack_a4;
    param_3[8] = (int)local_120;
    param_3[9] = (int)local_130;
    param_3[10] = (int)local_124;
  }
  else {
    local_90 = 0x4d554e93;
    local_8c = CONCAT22(local_8c._2_2_,0x5950);
    iVar9 = memcmp(__addr,&local_90,6);
    if (iVar9 != 0) {
      iVar9 = FUN_0002354c(3,DAT_000245e0 + 0x23c3c);
      goto LAB_00023c14;
    }
    pbVar16 = (byte *)0x8;
    local_5c = (byte *)0x8;
    if (*(char *)((int)__addr + 6) == '\x01' && *(char *)((int)__addr + 7) == '\0') {
      pbVar16 = (byte *)0xa;
      local_5c = (byte *)0xa;
      pbVar18 = (byte *)(*(ushort *)((int)__addr + 8) + 10);
LAB_000236cc:
      pbStack_58 = pbVar18;
      if (__len < pbVar18) {
        iVar9 = FUN_0002354c(3,DAT_000245e8 + 0x23c74,pbVar18,__len);
        goto LAB_00023c14;
      }
      if (((uint)pbVar18 & 0xf) != 0) {
        iVar9 = FUN_0002354c(3,DAT_000245ec + 0x23d00,pbVar18);
        goto LAB_000239d8;
      }
LAB_000236dc:
      if (pbVar16 < pbVar18) goto LAB_000236e4;
      goto LAB_00023744;
    }
    if (*(char *)((int)__addr + 6) != '\x02' || *(char *)((int)__addr + 7) != '\0') {
      iVar9 = FUN_0002354c(3,DAT_000245f0 + 0x23d18);
      goto LAB_00023c14;
    }
    local_5c = (byte *)0xc;
    pbVar18 = (byte *)(*(uint *)((int)__addr + 8) + 0xc);
    if (*(uint *)((int)__addr + 8) < 0xfffffff4) {
      pbVar16 = (byte *)0xc;
      goto LAB_000236cc;
    }
    pbVar16 = (byte *)0xc;
    pbStack_58 = pbVar18;
    iVar9 = FUN_0002354c(3,DAT_000245bc + 0x239d4);
LAB_000239d8:
    if (iVar9 == 0) goto LAB_000236dc;
LAB_000239e0:
    munmap(__addr,(size_t)__len);
  }
  return iVar9;
}



/* ===== FUN_00024958 @ 00024958 size=660 ===== */

void FUN_00024958(char *param_1,int param_2,uint param_3,int param_4,int param_5,uint param_6,
                 undefined4 *param_7)

{
  size_t sVar1;
  char *__s;
  size_t __maxlen;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *__s_00;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *__format;
  uint in_fpscr;
  undefined4 uVar9;
  double dVar10;
  
  __s_00 = *(char **)(DAT_00024bec + 0x24968 + param_4 * 4);
  sVar1 = strlen(__s_00);
  if (param_5 == 1) {
    iVar6 = 4;
  }
  else {
    iVar6 = 5;
  }
  uVar7 = param_6 + 0x39 + sVar1 + iVar6;
  if (param_6 != 0) {
    puVar5 = param_7;
    do {
      uVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      dVar10 = (double)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
      dVar10 = log10(dVar10);
      uVar7 = uVar7 + (uint)(0.0 < dVar10) * (int)(longlong)dVar10 + 1;
    } while (param_7 + param_6 != puVar5);
  }
  if ((uVar7 & 0xf) != 0) {
    uVar7 = (uVar7 & 0xfffffff0) + 0x10;
  }
  sVar1 = param_2 + 1;
  snprintf(param_1,sVar1,(char *)(DAT_00024bf0 + 0x249f8));
  uVar3 = 0;
  param_1[6] = '\x01';
  param_1[7] = '\0';
  param_1[9] = '\0';
  param_1[8] = (char)uVar7 + -10;
  if (param_3 < 3) {
    uVar3 = (uint)*(byte *)(DAT_00024bf4 + param_3 + 0x24a3c);
  }
  iVar6 = snprintf(param_1 + 10,param_2 - 9,(char *)(DAT_00024bf8 + 0x24a4c),uVar3,__s_00);
  iVar6 = iVar6 + 10;
  if (param_5 == 1) {
    iVar4 = DAT_00024c18 + 0x24bcc;
  }
  else {
    iVar4 = DAT_00024bfc + 0x24a6c;
  }
  iVar4 = snprintf(param_1 + iVar6,sVar1 - iVar6,(char *)(DAT_00024c00 + 0x24a74),iVar4,__s_00);
  iVar4 = iVar4 + iVar6;
  snprintf(param_1 + iVar4,sVar1 - iVar4,(char *)(DAT_00024c04 + 0x24a80));
  iVar4 = iVar4 + 10;
  if (param_6 == 0) {
    __maxlen = sVar1 - iVar4;
    __s = param_1 + iVar4;
  }
  else {
    uVar3 = param_6 - 1;
    if (uVar3 == 0) {
      __s = param_1 + iVar4;
      uVar3 = 0;
    }
    else {
      __s = param_1 + iVar4;
      pcVar8 = (char *)(DAT_00024c10 + 0x24b44);
      __format = (char *)(DAT_00024c14 + 0x24b48);
      puVar5 = param_7 + -1;
      uVar2 = param_6;
      if (uVar3 <= param_6) {
        uVar2 = uVar3;
      }
      uVar3 = 0;
      do {
        puVar5 = puVar5 + 1;
        uVar3 = uVar3 + 1;
        iVar6 = snprintf(__s,sVar1 - iVar4,pcVar8,*puVar5,__s_00);
        iVar6 = iVar6 + iVar4;
        snprintf(param_1 + iVar6,sVar1 - iVar6,__format);
        iVar4 = iVar6 + 1;
        __s = param_1 + iVar4;
        __maxlen = param_2 - iVar6;
      } while (uVar3 < uVar2);
      if (param_6 <= uVar3) goto LAB_00024ae4;
    }
    __maxlen = sVar1 - iVar4;
    pcVar8 = (char *)(DAT_00024c08 + 0x24ab8);
    puVar5 = param_7 + uVar3;
    do {
      iVar6 = snprintf(__s,__maxlen,pcVar8,*puVar5);
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + iVar6;
      __s = param_1 + iVar4;
      __maxlen = sVar1 - iVar4;
      puVar5 = puVar5 + 1;
    } while (uVar3 < param_6);
  }
LAB_00024ae4:
  uVar7 = uVar7 - 1;
  uVar3 = iVar4 + 2;
  snprintf(__s,__maxlen,(char *)(DAT_00024c0c + 0x24afc),__maxlen,__s_00);
  if (uVar3 < uVar7) {
    memset(param_1 + uVar3,0x20,uVar7 - uVar3);
    param_1[uVar7] = '\n';
    return;
  }
  param_1[uVar3] = '\n';
  return;
}



/* ===== FUN_00024c1c @ 00024c1c size=1092 ===== */

undefined4
FUN_00024c1c(char *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,uint *param_6,
            undefined4 *param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  size_t sVar4;
  uint *puVar5;
  int iVar6;
  void *__addr;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  double dVar15;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  void *local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 local_54;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  void *local_34;
  uint uStack_30;
  size_t sStack_2c;
  
  uVar12 = (uint)*(byte *)(DAT_00025060 + 0x24c2c + param_3);
  if (uVar12 == 1) {
    param_2 = 2;
  }
  sVar4 = strlen(*(char **)(DAT_00025064 + 0x24c40 + param_3 * 4));
  if (param_4 == 1) {
    iVar10 = 4;
  }
  else {
    iVar10 = 5;
  }
  uVar11 = sVar4 + param_5 + 0x39 + iVar10;
  if (param_5 != 0) {
    puVar5 = param_6;
    do {
      uVar14 = *puVar5;
      puVar5 = puVar5 + 1;
      dVar15 = (double)VectorUnsignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
      dVar15 = log10(dVar15);
      uVar11 = uVar11 + (uint)(0.0 < dVar15) * (int)(longlong)dVar15 + 1;
    } while (param_6 + param_5 != puVar5);
    if ((uVar11 & 0xf) != 0) {
      uVar11 = (uVar11 & 0xfffffff0) + 0x10;
    }
    uVar1 = (ulonglong)*param_6 * (ulonglong)uVar12;
    if ((int)(uVar1 >> 0x20) == 0) {
      uVar14 = 0;
      puVar5 = param_6;
      do {
        uVar14 = uVar14 + 1;
        if (param_5 <= uVar14) goto LAB_00024d00;
        puVar5 = puVar5 + 1;
        uVar1 = (ulonglong)*puVar5 * (uVar1 & 0xffffffff);
      } while ((int)(uVar1 >> 0x20) == 0);
    }
LAB_00024d9c:
    uVar9 = FUN_0002354c(3,DAT_0002506c + 0x24dac);
    return uVar9;
  }
  bVar13 = (uVar11 & 0xf) != 0;
  if (bVar13) {
    uVar11 = uVar11 & 0xfffffff0;
  }
  uVar1 = CONCAT44(0x39,uVar12);
  if (bVar13) {
    uVar11 = uVar11 + 0x10;
  }
LAB_00024d00:
  sVar4 = uVar11 + (uint)uVar1;
  if (CARRY4(uVar11,(uint)uVar1)) goto LAB_00024d9c;
  if (param_1 == (char *)0x0) {
    __addr = mmap((void *)0x0,sVar4,3,0x21,-1,0);
    if (__addr == (void *)0xffffffff) {
LAB_00024f7c:
      piVar7 = __errno_location();
      pcVar8 = strerror(*piVar7);
      uVar9 = FUN_000233f0(2,DAT_00025074 + 0x24f94,pcVar8);
      return uVar9;
    }
  }
  else {
    iVar10 = open(param_1,0x42,0x1a4);
    if (iVar10 == -1) {
      piVar7 = __errno_location();
      pcVar8 = strerror(*piVar7);
      iVar10 = DAT_0002507c + 0x25004;
LAB_00025004:
      uVar9 = FUN_000233f0(1,iVar10,pcVar8);
      return uVar9;
    }
    iVar6 = ftruncate(iVar10,sVar4);
    if (iVar6 != 0) {
      piVar7 = __errno_location();
      pcVar8 = strerror(*piVar7);
      iVar10 = DAT_00025084 + 0x25048;
      goto LAB_00025004;
    }
    __addr = mmap((void *)0x0,sVar4,3,1,iVar10,0);
    if (__addr == (void *)0xffffffff) {
      close(iVar10);
      goto LAB_00024f7c;
    }
    iVar10 = close(iVar10);
    if (iVar10 != 0) {
      munmap(__addr,sVar4);
      piVar7 = __errno_location();
      pcVar8 = strerror(*piVar7);
      iVar10 = DAT_00025068 + 0x24d98;
      goto LAB_00025004;
    }
  }
  FUN_00024958(__addr,uVar11,param_2,param_3,param_4,param_5,param_6);
  memset((void *)((int)__addr + uVar11),0,sVar4 - uVar11);
  uStack_6c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_60 = (void *)0x0;
  local_70 = 0;
  local_68 = 0;
  uStack_5c = 0;
  uStack_64 = uStack_6c;
  if (param_5 != 0) {
    local_58 = uStack_6c;
    memcpy(&local_70,param_6,param_5 << 2);
    uStack_48 = param_5;
    local_44 = local_70;
    local_40 = uStack_6c;
    local_3c = local_68;
    local_38 = uStack_64;
    uVar1 = (ulonglong)local_70 * (ulonglong)uVar12;
    lVar3 = CONCAT44(uStack_64,(int)uVar1);
    local_54 = param_2;
    iStack_50 = param_3;
    iStack_4c = param_4;
    local_34 = __addr;
    uStack_30 = uVar11;
    sStack_2c = sVar4;
    if ((int)(uVar1 >> 0x20) != 0) {
LAB_00024f48:
      local_60 = __addr;
      uStack_5c = uVar11;
      local_58 = sVar4;
      FUN_0002354c(3,DAT_00025070 + 0x24f58);
      goto LAB_00024f20;
    }
    if (1 < param_5) {
      uVar2 = (ulonglong)uStack_6c * (uVar1 & 0xffffffff);
      lVar3 = CONCAT44((int)uVar1,(int)uVar2);
      if ((int)(uVar2 >> 0x20) != 0) goto LAB_00024f48;
      if (param_5 != 2) {
        uVar1 = (ulonglong)local_68 * (uVar2 & 0xffffffff);
        lVar3 = CONCAT44(local_68,(int)uVar1);
        if (((int)(uVar1 >> 0x20) != 0) ||
           ((param_5 != 3 &&
            (lVar3 = (ulonglong)uStack_64 * (uVar1 & 0xffffffff),
            (int)((ulonglong)lVar3 >> 0x20) != 0)))) goto LAB_00024f48;
      }
    }
    uVar12 = (uint)lVar3;
    if (uVar12 != 0) {
      if (CARRY4(uVar11,uVar12)) {
        local_60 = __addr;
        uStack_5c = uVar11;
        local_58 = sVar4;
        FUN_0002354c(3,DAT_00025088 + 0x2505c);
      }
      else {
        local_60 = __addr;
        uStack_5c = uVar11;
        local_58 = sVar4;
        if (sVar4 != uVar11 + uVar12) {
          FUN_0002354c(3,DAT_00025080 + 0x2502c,uVar12,uVar11,sVar4);
        }
      }
      goto LAB_00024f20;
    }
  }
  local_60 = __addr;
  uStack_5c = uVar11;
  local_58 = sVar4;
  FUN_0002354c(3,DAT_00025078 + 0x24fe8);
LAB_00024f20:
  *param_7 = param_2;
  param_7[1] = param_3;
  param_7[2] = param_4;
  param_7[3] = param_5;
  param_7[4] = local_70;
  param_7[5] = uStack_6c;
  param_7[6] = local_68;
  param_7[7] = uStack_64;
  param_7[8] = local_60;
  param_7[9] = uStack_5c;
  param_7[10] = local_58;
  return 0;
}



/* ===== FUN_0002508c @ 0002508c size=1916 ===== */

undefined4 FUN_0002508c(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  ushort *puVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  ushort *puVar16;
  undefined2 *puVar17;
  undefined4 uVar18;
  char *__s;
  char acStack_440 [12];
  char acStack_434 [12];
  char acStack_428 [4];
  char acStack_424 [252];
  char acStack_328 [256];
  char acStack_228 [256];
  char acStack_128 [32];
  void *local_108;
  int local_104;
  size_t local_100;
  
  iVar3 = FUN_0001756c(*(undefined4 *)(param_2 + 0x110),param_2 + 0x118,0,0xffffffff);
  iVar4 = FUN_000174fc(*(undefined4 *)(param_2 + 0x100));
  iVar13 = DAT_00025808 + 0x250ec;
  FUN_00014578(param_1,*(undefined4 *)(param_2 + 0x1b4),*(undefined4 *)(param_2 + 0x19c),
               iVar4 * iVar3,2);
  iVar3 = FUN_000176ec();
  memset(acStack_428,0,0xff);
  memset(acStack_328,0,0xff);
  switch(*(undefined4 *)(param_2 + 0x100)) {
  case 0:
    pcVar12 = (char *)(DAT_0002580c + 0x25160);
    break;
  case 1:
    pcVar12 = (char *)(DAT_00025834 + 0x2558c);
    break;
  case 2:
    pcVar12 = (char *)(DAT_00025850 + 0x255e0);
    break;
  case 3:
    pcVar12 = (char *)(DAT_00025848 + 0x255c8);
    break;
  case 4:
    pcVar12 = (char *)(DAT_0002584c + 0x255d4);
    break;
  case 5:
    pcVar12 = (char *)(DAT_00025838 + 0x25598);
    break;
  case 6:
    pcVar12 = (char *)(DAT_0002583c + 0x255a4);
    break;
  case 7:
    pcVar12 = (char *)(DAT_00025840 + 0x255b0);
    break;
  case 8:
    pcVar12 = (char *)(DAT_00025844 + 0x255bc);
    break;
  default:
    pcVar12 = (char *)((int)&DAT_00025808 + DAT_00025888);
  }
  pcVar15 = acStack_228;
  strcpy(acStack_440,pcVar12);
  iVar4 = DAT_00025810;
  sVar5 = strlen(pcVar15);
  uVar14 = *(uint *)(param_2 + 0x114);
  memset(pcVar15,0,sVar5);
  pcVar12 = param_2;
  while (pcVar6 = strchr(pcVar12,0x2f), pcVar6 != (char *)0x0) {
    strncat(pcVar15,pcVar12,(int)pcVar6 - (int)pcVar12);
    sVar5 = strlen(pcVar15);
    pcVar12 = pcVar12 + ((int)pcVar6 - (int)pcVar12) + 1;
    *(undefined2 *)(pcVar15 + sVar5) = *(undefined2 *)(iVar4 + 0x25188);
  }
  sVar5 = strlen(pcVar15);
  __s = acStack_128;
  puVar17 = (undefined2 *)(DAT_00025814 + 0x25204);
  pcVar6 = stpcpy(pcVar15 + sVar5,pcVar12);
  sVar5 = strlen(__s);
  memset(__s,0,sVar5);
  pcVar12 = pcVar15;
  while (pcVar7 = strchr(pcVar12,0x3a), pcVar7 != (char *)0x0) {
    strncat(__s,pcVar12,(int)pcVar7 - (int)pcVar12);
    sVar5 = strlen(__s);
    pcVar12 = pcVar12 + ((int)pcVar7 - (int)pcVar12) + 1;
    *(undefined2 *)(__s + sVar5) = *puVar17;
  }
  sVar5 = strlen(__s);
  puVar17 = (undefined2 *)(DAT_00025818 + 0x25288);
  pcVar7 = stpcpy(__s + sVar5,pcVar12);
  memset(pcVar15,0,(int)pcVar6 - (int)pcVar15);
  pcVar12 = __s;
  while (pcVar6 = strchr(pcVar12,0x2e), pcVar6 != (char *)0x0) {
    strncat(pcVar15,pcVar12,(int)pcVar6 - (int)pcVar12);
    sVar5 = strlen(pcVar15);
    pcVar12 = pcVar12 + ((int)pcVar6 - (int)pcVar12) + 1;
    *(undefined2 *)(pcVar15 + sVar5) = *puVar17;
  }
  strcat(pcVar15,pcVar12);
  iVar4 = DAT_0002581c;
  memset(__s,0,(int)pcVar7 - (int)__s);
  while (pcVar12 = strchr(pcVar15,0x3b), pcVar12 != (char *)0x0) {
    strncat(__s,pcVar15,(int)pcVar12 - (int)pcVar15);
    sVar5 = strlen(__s);
    pcVar15 = pcVar15 + ((int)pcVar12 - (int)pcVar15) + 1;
    *(undefined2 *)(__s + sVar5) = *(undefined2 *)(iVar4 + 0x25318);
  }
  strcat(__s,pcVar15);
  pcVar12 = __s;
  sprintf(acStack_328,(char *)(DAT_00025820 + 0x2537c),param_4,param_3,__s);
  if (0 < (int)uVar14) {
    pcVar7 = param_2 + 0x154;
    pcVar15 = (char *)(DAT_00025824 + 0x253a4);
    puVar16 = (ushort *)(DAT_00025828 + 0x253b0);
    pcVar6 = pcVar7 + uVar14 * 4;
    do {
      pcVar7 = pcVar7 + 4;
      sprintf(acStack_434,pcVar15,*(undefined4 *)pcVar7,uVar14,pcVar12);
      sVar5 = strlen(acStack_328);
      puVar8 = (ushort *)stpcpy(acStack_328 + sVar5,acStack_434);
      uVar14 = (uint)*puVar16;
      *puVar8 = *puVar16;
    } while (pcVar6 != pcVar7);
  }
  pcVar12 = (char *)FUN_000176c0();
  sVar5 = strlen(acStack_428);
  pcVar12 = stpcpy(acStack_428 + sVar5,pcVar12);
  *pcVar12 = '/';
  pcVar12 = stpcpy(pcVar12 + 1,acStack_328);
  iVar2 = DAT_00025860;
  iVar9 = DAT_00025858;
  iVar4 = DAT_00025830;
  if (*(int *)(param_2 + 0x100) == 3) {
    puVar11 = (undefined4 *)(DAT_00025860 + 0x25668);
    cVar1 = *(char *)(DAT_0002585c + 0x25668);
    *(undefined4 *)pcVar12 = *(undefined4 *)(DAT_0002585c + 0x25664);
    pcVar12[4] = cVar1;
    cVar1 = *(char *)(iVar2 + 0x2566c);
    *(undefined4 *)(acStack_428 + (int)(pcVar12 + (5 - (int)acStack_428))) = *puVar11;
    acStack_424[(int)(pcVar12 + (5 - (int)acStack_428))] = cVar1;
    iVar4 = FUN_000173e0();
    if (2 < iVar4) goto LAB_00025694;
LAB_000256b4:
    if (iVar3 != 0) goto LAB_00025470;
LAB_00025624:
    iVar3 = *(int *)(param_2 + 0x100);
    if (iVar3 != 3) {
      iVar3 = 0;
    }
  }
  else {
    if (iVar3 == 0) {
      puVar11 = (undefined4 *)(DAT_00025858 + 0x255fc);
      cVar1 = *(char *)(DAT_00025854 + 0x255fc);
      *(undefined4 *)pcVar12 = *(undefined4 *)(DAT_00025854 + 0x255f8);
      pcVar12[4] = cVar1;
      cVar1 = *(char *)(iVar9 + 0x25600);
      *(undefined4 *)(acStack_428 + (int)(pcVar12 + (5 - (int)acStack_428))) = *puVar11;
      acStack_424[(int)(pcVar12 + (5 - (int)acStack_428))] = cVar1;
      iVar4 = FUN_000173e0();
      if (2 < iVar4) goto LAB_00025694;
      goto LAB_00025624;
    }
    puVar11 = (undefined4 *)(DAT_00025830 + 0x25450);
    *(undefined4 *)pcVar12 = *(undefined4 *)(DAT_0002582c + 0x2544c);
    cVar1 = *(char *)(iVar4 + 0x25454);
    *(undefined4 *)(acStack_428 + (int)(pcVar12 + (4 - (int)acStack_428))) = *puVar11;
    acStack_424[(int)(pcVar12 + (4 - (int)acStack_428))] = cVar1;
    iVar4 = FUN_000173e0();
    if (2 < iVar4) {
LAB_00025694:
      fprintf((FILE *)**(undefined4 **)(iVar13 + DAT_00025864),(char *)(DAT_00025868 + 0x256b0),
              acStack_428);
      goto LAB_000256b4;
    }
LAB_00025470:
    iVar3 = *(int *)(param_2 + 0x100);
  }
  iVar3 = FUN_000231ac(*(undefined4 *)(param_2 + 0x1a4),iVar3,*(undefined4 *)(param_2 + 0x104),
                       *(undefined4 *)(param_2 + 0x110),param_2 + 0x118,
                       *(undefined4 *)(param_2 + 0x114),param_2 + 0x158,
                       *(undefined4 *)(param_2 + 0x1a8));
  if (iVar3 == 0) {
    uVar18 = 0xffffffff;
  }
  else {
    uVar14 = *(int *)(param_2 + 0x100) - 1;
    if (*(int *)(param_2 + 0x104) == 2) {
      if (1 < uVar14) {
        iVar3 = FUN_000173e0();
        if (-1 < iVar3) {
          fprintf((FILE *)**(undefined4 **)(iVar13 + DAT_00025870),(char *)(DAT_00025884 + 0x257f4),
                  *(undefined4 *)(param_2 + 0x100));
        }
        goto LAB_00025798;
      }
      FUN_0001fd88(param_2,iVar3);
    }
    else if (*(int *)(param_2 + 0x104) == 1) {
      if (2 < uVar14) {
        iVar3 = FUN_000173e0();
        if (-1 < iVar3) {
          fprintf((FILE *)**(undefined4 **)(iVar13 + DAT_00025870),(char *)(DAT_00025880 + 0x257c4),
                  *(undefined4 *)(param_2 + 0x100));
        }
        goto LAB_00025798;
      }
      FUN_0002203c(param_2,iVar3);
    }
    else {
      if (1 < uVar14) {
        iVar3 = FUN_000173e0();
        if (-1 < iVar3) {
          fprintf((FILE *)**(undefined4 **)(iVar13 + DAT_00025870),(char *)(DAT_0002587c + 0x25794),
                  *(undefined4 *)(param_2 + 0x100));
        }
LAB_00025798:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_00021a8c(param_2,iVar3);
    }
    iVar4 = iVar3 + 0x158;
    sVar5 = FUN_0001756c(*(undefined4 *)(iVar3 + 0x114),iVar4,0,0xffffffff);
    if ((*(int *)(iVar3 + 0x100) != 3) && (*(int *)(iVar3 + 0x100) != 2)) {
      sVar5 = sVar5 << 2;
    }
    uVar18 = *(undefined4 *)(iVar3 + 0x114);
    iVar9 = FUN_00024c1c(acStack_428,0);
    if (iVar9 == 0) {
      memcpy((void *)((int)local_108 + local_104),*(void **)(iVar3 + 0x198),sVar5);
      iVar4 = munmap(local_108,local_100);
      if (iVar4 != 0) {
        piVar10 = __errno_location();
        pcVar12 = strerror(*piVar10);
        iVar4 = FUN_000233f0(2,DAT_0002586c + 0x256f4,pcVar12);
        if ((iVar4 != 0) && (iVar4 = FUN_000173e0(), -1 < iVar4)) {
          fprintf((FILE *)**(undefined4 **)(iVar13 + DAT_00025870),(char *)(DAT_00025874 + 0x2572c),
                  acStack_428);
        }
      }
    }
    else {
      iVar9 = FUN_000173e0();
      if (-1 < iVar9) {
        fprintf((FILE *)**(undefined4 **)(iVar13 + DAT_00025870),(char *)(DAT_00025878 + 0x2575c),
                acStack_428,*(undefined4 **)(iVar13 + DAT_00025870),uVar18,iVar4,__s);
      }
    }
    FUN_00023344(iVar3);
    uVar18 = 0;
  }
  return uVar18;
}



/* ===== FUN_0002588c @ 0002588c size=668 ===== */

undefined1 FUN_0002588c(int param_1,int param_2)

{
  undefined8 *puVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar5;
  int iVar6;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined1 local_28 [12];
  
  __src = (void *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar2 = (uint)*(byte *)(DAT_00025b40 + 0x25928 + param_2);
    if (uVar2 != 0) {
      uVar5 = uVar2 - 1;
      if (uVar5 < 0xf) {
        uVar4 = 0;
      }
      else {
        iVar3 = (int)__src + (uVar2 - 0x10);
        iVar6 = iVar3 - (uVar2 & 0xf0);
        do {
          iVar3 = iVar3 + -0x10;
          puVar1 = (undefined8 *)VectorTableLookup(unaff_r4,uVar2,2);
          __src = (void *)VectorTableLookup(unaff_r5,uVar2,2);
          *puVar1 = in_d16;
          puVar1[1] = in_d17;
        } while (iVar3 != iVar6);
        uVar4 = uVar2 & 0xfffffff0;
        if (uVar2 == uVar4) {
          return local_28[0];
        }
      }
      local_28[uVar4] = *(undefined1 *)((int)__src + (uVar5 - uVar4));
      if (uVar4 + 1 < uVar2) {
        local_28[uVar4 + 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 1)));
        if (uVar4 + 2 < uVar2) {
          local_28[uVar4 + 2] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 2)));
          if (uVar4 + 3 < uVar2) {
            local_28[uVar4 + 3] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 3)));
            if (uVar4 + 4 < uVar2) {
              local_28[uVar4 + 4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 4)));
              if (uVar4 + 5 < uVar2) {
                local_28[uVar4 + 5] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 5)));
                if (uVar4 + 6 < uVar2) {
                  local_28[uVar4 + 6] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 6)));
                  if (uVar4 + 7 < uVar2) {
                    local_28[uVar4 + 7] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 7)));
                    if (uVar4 + 8 < uVar2) {
                      local_28[uVar4 + 8] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 8)));
                      if (uVar4 + 9 < uVar2) {
                        local_28[uVar4 + 9] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 9)));
                        if (uVar4 + 10 < uVar2) {
                          local_28[uVar4 + 10] =
                               *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 10)));
                          if (uVar4 + 0xb < uVar2) {
                            local_28[uVar4 + 0xb] =
                                 *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xb)));
                            if (uVar4 + 0xc < uVar2) {
                              (&stack0xffffffe4)[uVar4] =
                                   *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xc)));
                              if (uVar4 + 0xd < uVar2) {
                                (&stack0xffffffe5)[uVar4] =
                                     *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xd)));
                                if (uVar4 + 0xe < uVar2) {
                                  (&stack0xffffffe6)[uVar4] =
                                       *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xe)));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar2 = (uint)*(byte *)(DAT_00025b3c + 0x25908 + param_2);
    if (uVar2 != 0) {
      memcpy(local_28,__src,uVar2);
    }
  }
  else if ((param_1 == 2) && (uVar2 = (uint)*(byte *)(DAT_00025b38 + 0x258d8 + param_2), uVar2 != 0)
          ) {
    memcpy(local_28,__src,uVar2);
  }
  return local_28[0];
}



/* ===== FUN_00025b44 @ 00025b44 size=652 ===== */

void FUN_00025b44(int param_1,int param_2)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 unaff_r5;
  uint uVar6;
  uint uVar7;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  
  __dest = (undefined8 *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar1 = (uint)*(byte *)(DAT_00025de8 + 0x25bd4 + param_2);
    if (uVar1 != 0) {
      uVar7 = uVar1 - 1;
      if (uVar7 < 0xf) {
        uVar3 = 0;
      }
      else {
        puVar4 = (undefined8 *)((uVar1 & 0xf0) + (int)__dest);
        puVar2 = __dest;
        do {
          __dest = (undefined8 *)VectorTableLookup(puVar4,puVar2,2);
          uVar1 = VectorTableLookup(unaff_r5,puVar2,2);
          *puVar2 = in_d16;
          puVar2[1] = in_d17;
          puVar2 = puVar2 + 2;
        } while (puVar2 != puVar4);
        uVar3 = uVar1 & 0xfffffff0;
        if (uVar1 == uVar3) {
          return;
        }
      }
      uVar5 = uVar3 + 1;
      *(undefined1 *)((int)__dest + uVar3) = (&stack0x0000001f)[(uVar7 - uVar3) + 1];
      if (uVar5 < uVar1) {
        uVar6 = uVar3 + 2;
        *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
        if (uVar6 < uVar1) {
          uVar5 = uVar3 + 3;
          *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
          if (uVar5 < uVar1) {
            uVar6 = uVar3 + 4;
            *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
            if (uVar6 < uVar1) {
              uVar5 = uVar3 + 5;
              *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
              if (uVar5 < uVar1) {
                uVar6 = uVar3 + 6;
                *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                if (uVar6 < uVar1) {
                  uVar5 = uVar3 + 7;
                  *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                  if (uVar5 < uVar1) {
                    uVar6 = uVar3 + 8;
                    *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                    if (uVar6 < uVar1) {
                      uVar5 = uVar3 + 9;
                      *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1]
                      ;
                      if (uVar5 < uVar1) {
                        uVar6 = uVar3 + 10;
                        *(undefined1 *)((int)__dest + uVar5) =
                             (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                        if (uVar6 < uVar1) {
                          uVar5 = uVar3 + 0xb;
                          *(undefined1 *)((int)__dest + uVar6) =
                               (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                          if (uVar5 < uVar1) {
                            uVar6 = uVar3 + 0xc;
                            *(undefined1 *)((int)__dest + uVar5) =
                                 (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                            if (uVar6 < uVar1) {
                              uVar5 = uVar3 + 0xd;
                              *(undefined1 *)((int)__dest + uVar6) =
                                   (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                              if (uVar5 < uVar1) {
                                uVar3 = uVar3 + 0xe;
                                *(undefined1 *)((int)__dest + uVar5) =
                                     (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                                if (uVar3 < uVar1) {
                                  *(undefined1 *)((int)__dest + uVar3) =
                                       (&stack0x0000001f)[(uVar7 - uVar3) + 1];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar1 = (uint)*(byte *)(DAT_00025de4 + 0x25bb4 + param_2);
    if (uVar1 != 0) {
      memcpy(__dest,&stack0x00000020,uVar1);
    }
  }
  else if ((param_1 == 2) && (uVar1 = (uint)*(byte *)(DAT_00025de0 + 0x25b8c + param_2), uVar1 != 0)
          ) {
    memcpy(__dest,&stack0x00000020,uVar1);
  }
  return;
}



/* ===== FUN_00025dec @ 00025dec size=668 ===== */

int FUN_00025dec(int param_1,int param_2)

{
  undefined8 *puVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar5;
  int iVar6;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  char local_28 [12];
  
  __src = (void *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar2 = (uint)*(byte *)(DAT_000260a0 + 0x25e88 + param_2);
    if (uVar2 != 0) {
      uVar5 = uVar2 - 1;
      if (uVar5 < 0xf) {
        uVar4 = 0;
      }
      else {
        iVar3 = (int)__src + (uVar2 - 0x10);
        iVar6 = iVar3 - (uVar2 & 0xf0);
        do {
          iVar3 = iVar3 + -0x10;
          puVar1 = (undefined8 *)VectorTableLookup(unaff_r4,uVar2,2);
          __src = (void *)VectorTableLookup(unaff_r5,uVar2,2);
          *puVar1 = in_d16;
          puVar1[1] = in_d17;
        } while (iVar3 != iVar6);
        uVar4 = uVar2 & 0xfffffff0;
        if (uVar2 == uVar4) goto LAB_00025e48;
      }
      local_28[uVar4] = *(char *)((int)__src + (uVar5 - uVar4));
      if (uVar4 + 1 < uVar2) {
        local_28[uVar4 + 1] = *(char *)((int)__src + (uVar5 - (uVar4 + 1)));
        if (uVar4 + 2 < uVar2) {
          local_28[uVar4 + 2] = *(char *)((int)__src + (uVar5 - (uVar4 + 2)));
          if (uVar4 + 3 < uVar2) {
            local_28[uVar4 + 3] = *(char *)((int)__src + (uVar5 - (uVar4 + 3)));
            if (uVar4 + 4 < uVar2) {
              local_28[uVar4 + 4] = *(char *)((int)__src + (uVar5 - (uVar4 + 4)));
              if (uVar4 + 5 < uVar2) {
                local_28[uVar4 + 5] = *(char *)((int)__src + (uVar5 - (uVar4 + 5)));
                if (uVar4 + 6 < uVar2) {
                  local_28[uVar4 + 6] = *(char *)((int)__src + (uVar5 - (uVar4 + 6)));
                  if (uVar4 + 7 < uVar2) {
                    local_28[uVar4 + 7] = *(char *)((int)__src + (uVar5 - (uVar4 + 7)));
                    if (uVar4 + 8 < uVar2) {
                      local_28[uVar4 + 8] = *(char *)((int)__src + (uVar5 - (uVar4 + 8)));
                      if (uVar4 + 9 < uVar2) {
                        local_28[uVar4 + 9] = *(char *)((int)__src + (uVar5 - (uVar4 + 9)));
                        if (uVar4 + 10 < uVar2) {
                          local_28[uVar4 + 10] = *(char *)((int)__src + (uVar5 - (uVar4 + 10)));
                          if (uVar4 + 0xb < uVar2) {
                            local_28[uVar4 + 0xb] = *(char *)((int)__src + (uVar5 - (uVar4 + 0xb)));
                            if (uVar4 + 0xc < uVar2) {
                              (&stack0xffffffe4)[uVar4] =
                                   *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xc)));
                              if (uVar4 + 0xd < uVar2) {
                                (&stack0xffffffe5)[uVar4] =
                                     *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xd)));
                                if (uVar4 + 0xe < uVar2) {
                                  (&stack0xffffffe6)[uVar4] =
                                       *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xe)));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar2 = (uint)*(byte *)(DAT_0002609c + 0x25e68 + param_2);
    if (uVar2 != 0) {
      memcpy(local_28,__src,uVar2);
    }
  }
  else if ((param_1 == 2) && (uVar2 = (uint)*(byte *)(DAT_00026098 + 0x25e38 + param_2), uVar2 != 0)
          ) {
    memcpy(local_28,__src,uVar2);
  }
LAB_00025e48:
  return (int)local_28[0];
}



/* ===== FUN_000260a4 @ 000260a4 size=652 ===== */

void FUN_000260a4(int param_1,int param_2)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 unaff_r5;
  uint uVar6;
  uint uVar7;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  
  __dest = (undefined8 *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar1 = (uint)*(byte *)(DAT_00026348 + 0x26134 + param_2);
    if (uVar1 != 0) {
      uVar7 = uVar1 - 1;
      if (uVar7 < 0xf) {
        uVar3 = 0;
      }
      else {
        puVar4 = (undefined8 *)((uVar1 & 0xf0) + (int)__dest);
        puVar2 = __dest;
        do {
          __dest = (undefined8 *)VectorTableLookup(puVar4,puVar2,2);
          uVar1 = VectorTableLookup(unaff_r5,puVar2,2);
          *puVar2 = in_d16;
          puVar2[1] = in_d17;
          puVar2 = puVar2 + 2;
        } while (puVar2 != puVar4);
        uVar3 = uVar1 & 0xfffffff0;
        if (uVar1 == uVar3) {
          return;
        }
      }
      uVar5 = uVar3 + 1;
      *(undefined1 *)((int)__dest + uVar3) = (&stack0x0000001f)[(uVar7 - uVar3) + 1];
      if (uVar5 < uVar1) {
        uVar6 = uVar3 + 2;
        *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
        if (uVar6 < uVar1) {
          uVar5 = uVar3 + 3;
          *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
          if (uVar5 < uVar1) {
            uVar6 = uVar3 + 4;
            *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
            if (uVar6 < uVar1) {
              uVar5 = uVar3 + 5;
              *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
              if (uVar5 < uVar1) {
                uVar6 = uVar3 + 6;
                *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                if (uVar6 < uVar1) {
                  uVar5 = uVar3 + 7;
                  *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                  if (uVar5 < uVar1) {
                    uVar6 = uVar3 + 8;
                    *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                    if (uVar6 < uVar1) {
                      uVar5 = uVar3 + 9;
                      *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1]
                      ;
                      if (uVar5 < uVar1) {
                        uVar6 = uVar3 + 10;
                        *(undefined1 *)((int)__dest + uVar5) =
                             (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                        if (uVar6 < uVar1) {
                          uVar5 = uVar3 + 0xb;
                          *(undefined1 *)((int)__dest + uVar6) =
                               (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                          if (uVar5 < uVar1) {
                            uVar6 = uVar3 + 0xc;
                            *(undefined1 *)((int)__dest + uVar5) =
                                 (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                            if (uVar6 < uVar1) {
                              uVar5 = uVar3 + 0xd;
                              *(undefined1 *)((int)__dest + uVar6) =
                                   (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                              if (uVar5 < uVar1) {
                                uVar3 = uVar3 + 0xe;
                                *(undefined1 *)((int)__dest + uVar5) =
                                     (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                                if (uVar3 < uVar1) {
                                  *(undefined1 *)((int)__dest + uVar3) =
                                       (&stack0x0000001f)[(uVar7 - uVar3) + 1];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar1 = (uint)*(byte *)(DAT_00026344 + 0x26114 + param_2);
    if (uVar1 != 0) {
      memcpy(__dest,&stack0x00000020,uVar1);
    }
  }
  else if ((param_1 == 2) && (uVar1 = (uint)*(byte *)(DAT_00026340 + 0x260ec + param_2), uVar1 != 0)
          ) {
    memcpy(__dest,&stack0x00000020,uVar1);
  }
  return;
}



/* ===== FUN_0002634c @ 0002634c size=668 ===== */

int FUN_0002634c(int param_1,int param_2)

{
  undefined8 *puVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar5;
  int iVar6;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined2 local_28;
  undefined1 auStack_26 [10];
  
  __src = (void *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar2 = (uint)*(byte *)(DAT_00026600 + 0x263e8 + param_2);
    if (uVar2 != 0) {
      uVar5 = uVar2 - 1;
      if (uVar5 < 0xf) {
        uVar4 = 0;
      }
      else {
        iVar3 = (int)__src + (uVar2 - 0x10);
        iVar6 = iVar3 - (uVar2 & 0xf0);
        do {
          iVar3 = iVar3 + -0x10;
          puVar1 = (undefined8 *)VectorTableLookup(unaff_r4,uVar2,2);
          __src = (void *)VectorTableLookup(unaff_r5,uVar2,2);
          *puVar1 = in_d16;
          puVar1[1] = in_d17;
        } while (iVar3 != iVar6);
        uVar4 = uVar2 & 0xfffffff0;
        if (uVar2 == uVar4) goto LAB_000263a8;
      }
      auStack_26[uVar4 - 2] = *(undefined1 *)((int)__src + (uVar5 - uVar4));
      if (uVar4 + 1 < uVar2) {
        auStack_26[uVar4 - 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 1)));
        if (uVar4 + 2 < uVar2) {
          auStack_26[uVar4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 2)));
          if (uVar4 + 3 < uVar2) {
            auStack_26[uVar4 + 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 3)));
            if (uVar4 + 4 < uVar2) {
              auStack_26[uVar4 + 2] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 4)));
              if (uVar4 + 5 < uVar2) {
                auStack_26[uVar4 + 3] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 5)));
                if (uVar4 + 6 < uVar2) {
                  auStack_26[uVar4 + 4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 6)));
                  if (uVar4 + 7 < uVar2) {
                    auStack_26[uVar4 + 5] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 7)));
                    if (uVar4 + 8 < uVar2) {
                      auStack_26[uVar4 + 6] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 8)));
                      if (uVar4 + 9 < uVar2) {
                        auStack_26[uVar4 + 7] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 9)));
                        if (uVar4 + 10 < uVar2) {
                          auStack_26[uVar4 + 8] =
                               *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 10)));
                          if (uVar4 + 0xb < uVar2) {
                            auStack_26[uVar4 + 9] =
                                 *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xb)));
                            if (uVar4 + 0xc < uVar2) {
                              (&stack0xffffffe4)[uVar4] =
                                   *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xc)));
                              if (uVar4 + 0xd < uVar2) {
                                (&stack0xffffffe5)[uVar4] =
                                     *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xd)));
                                if (uVar4 + 0xe < uVar2) {
                                  (&stack0xffffffe6)[uVar4] =
                                       *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xe)));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar2 = (uint)*(byte *)(DAT_000265fc + 0x263c8 + param_2);
    if (uVar2 != 0) {
      memcpy(&local_28,__src,uVar2);
    }
  }
  else if ((param_1 == 2) && (uVar2 = (uint)*(byte *)(DAT_000265f8 + 0x26398 + param_2), uVar2 != 0)
          ) {
    memcpy(&local_28,__src,uVar2);
  }
LAB_000263a8:
  return (int)local_28;
}



/* ===== FUN_00026604 @ 00026604 size=652 ===== */

void FUN_00026604(int param_1,int param_2)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 unaff_r5;
  uint uVar6;
  uint uVar7;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  
  __dest = (undefined8 *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar1 = (uint)*(byte *)(DAT_000268a8 + 0x26694 + param_2);
    if (uVar1 != 0) {
      uVar7 = uVar1 - 1;
      if (uVar7 < 0xf) {
        uVar3 = 0;
      }
      else {
        puVar4 = (undefined8 *)((uVar1 & 0xf0) + (int)__dest);
        puVar2 = __dest;
        do {
          __dest = (undefined8 *)VectorTableLookup(puVar4,puVar2,2);
          uVar1 = VectorTableLookup(unaff_r5,puVar2,2);
          *puVar2 = in_d16;
          puVar2[1] = in_d17;
          puVar2 = puVar2 + 2;
        } while (puVar2 != puVar4);
        uVar3 = uVar1 & 0xfffffff0;
        if (uVar1 == uVar3) {
          return;
        }
      }
      uVar5 = uVar3 + 1;
      *(undefined1 *)((int)__dest + uVar3) = (&stack0x0000001f)[(uVar7 - uVar3) + 1];
      if (uVar5 < uVar1) {
        uVar6 = uVar3 + 2;
        *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
        if (uVar6 < uVar1) {
          uVar5 = uVar3 + 3;
          *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
          if (uVar5 < uVar1) {
            uVar6 = uVar3 + 4;
            *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
            if (uVar6 < uVar1) {
              uVar5 = uVar3 + 5;
              *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
              if (uVar5 < uVar1) {
                uVar6 = uVar3 + 6;
                *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                if (uVar6 < uVar1) {
                  uVar5 = uVar3 + 7;
                  *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                  if (uVar5 < uVar1) {
                    uVar6 = uVar3 + 8;
                    *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                    if (uVar6 < uVar1) {
                      uVar5 = uVar3 + 9;
                      *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1]
                      ;
                      if (uVar5 < uVar1) {
                        uVar6 = uVar3 + 10;
                        *(undefined1 *)((int)__dest + uVar5) =
                             (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                        if (uVar6 < uVar1) {
                          uVar5 = uVar3 + 0xb;
                          *(undefined1 *)((int)__dest + uVar6) =
                               (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                          if (uVar5 < uVar1) {
                            uVar6 = uVar3 + 0xc;
                            *(undefined1 *)((int)__dest + uVar5) =
                                 (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                            if (uVar6 < uVar1) {
                              uVar5 = uVar3 + 0xd;
                              *(undefined1 *)((int)__dest + uVar6) =
                                   (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                              if (uVar5 < uVar1) {
                                uVar3 = uVar3 + 0xe;
                                *(undefined1 *)((int)__dest + uVar5) =
                                     (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                                if (uVar3 < uVar1) {
                                  *(undefined1 *)((int)__dest + uVar3) =
                                       (&stack0x0000001f)[(uVar7 - uVar3) + 1];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar1 = (uint)*(byte *)(DAT_000268a4 + 0x26674 + param_2);
    if (uVar1 != 0) {
      memcpy(__dest,&stack0x00000020,uVar1);
    }
  }
  else if ((param_1 == 2) && (uVar1 = (uint)*(byte *)(DAT_000268a0 + 0x2664c + param_2), uVar1 != 0)
          ) {
    memcpy(__dest,&stack0x00000020,uVar1);
  }
  return;
}



/* ===== FUN_000268ac @ 000268ac size=668 ===== */

undefined4 FUN_000268ac(int param_1,int param_2)

{
  undefined8 *puVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar5;
  int iVar6;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 local_28;
  undefined1 auStack_24 [8];
  
  __src = (void *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar2 = (uint)*(byte *)(DAT_00026b60 + 0x26948 + param_2);
    if (uVar2 != 0) {
      uVar5 = uVar2 - 1;
      if (uVar5 < 0xf) {
        uVar4 = 0;
      }
      else {
        iVar3 = (int)__src + (uVar2 - 0x10);
        iVar6 = iVar3 - (uVar2 & 0xf0);
        do {
          iVar3 = iVar3 + -0x10;
          puVar1 = (undefined8 *)VectorTableLookup(unaff_r4,uVar2,2);
          __src = (void *)VectorTableLookup(unaff_r5,uVar2,2);
          *puVar1 = in_d16;
          puVar1[1] = in_d17;
        } while (iVar3 != iVar6);
        uVar4 = uVar2 & 0xfffffff0;
        if (uVar2 == uVar4) {
          return local_28;
        }
      }
      auStack_24[uVar4 - 4] = *(undefined1 *)((int)__src + (uVar5 - uVar4));
      if (uVar4 + 1 < uVar2) {
        auStack_24[uVar4 - 3] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 1)));
        if (uVar4 + 2 < uVar2) {
          auStack_24[uVar4 - 2] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 2)));
          if (uVar4 + 3 < uVar2) {
            auStack_24[uVar4 - 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 3)));
            if (uVar4 + 4 < uVar2) {
              auStack_24[uVar4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 4)));
              if (uVar4 + 5 < uVar2) {
                auStack_24[uVar4 + 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 5)));
                if (uVar4 + 6 < uVar2) {
                  auStack_24[uVar4 + 2] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 6)));
                  if (uVar4 + 7 < uVar2) {
                    auStack_24[uVar4 + 3] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 7)));
                    if (uVar4 + 8 < uVar2) {
                      auStack_24[uVar4 + 4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 8)));
                      if (uVar4 + 9 < uVar2) {
                        auStack_24[uVar4 + 5] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 9)));
                        if (uVar4 + 10 < uVar2) {
                          auStack_24[uVar4 + 6] =
                               *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 10)));
                          if (uVar4 + 0xb < uVar2) {
                            auStack_24[uVar4 + 7] =
                                 *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xb)));
                            if (uVar4 + 0xc < uVar2) {
                              (&stack0xffffffe4)[uVar4] =
                                   *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xc)));
                              if (uVar4 + 0xd < uVar2) {
                                (&stack0xffffffe5)[uVar4] =
                                     *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xd)));
                                if (uVar4 + 0xe < uVar2) {
                                  (&stack0xffffffe6)[uVar4] =
                                       *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xe)));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar2 = (uint)*(byte *)(DAT_00026b5c + 0x26928 + param_2);
    if (uVar2 != 0) {
      memcpy(&local_28,__src,uVar2);
    }
  }
  else if ((param_1 == 2) && (uVar2 = (uint)*(byte *)(DAT_00026b58 + 0x268f8 + param_2), uVar2 != 0)
          ) {
    memcpy(&local_28,__src,uVar2);
  }
  return local_28;
}



/* ===== FUN_00026b64 @ 00026b64 size=652 ===== */

void FUN_00026b64(int param_1,int param_2)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 unaff_r5;
  uint uVar6;
  uint uVar7;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  
  __dest = (undefined8 *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar1 = (uint)*(byte *)(DAT_00026e08 + 0x26bf4 + param_2);
    if (uVar1 != 0) {
      uVar7 = uVar1 - 1;
      if (uVar7 < 0xf) {
        uVar3 = 0;
      }
      else {
        puVar4 = (undefined8 *)((uVar1 & 0xf0) + (int)__dest);
        puVar2 = __dest;
        do {
          __dest = (undefined8 *)VectorTableLookup(puVar4,puVar2,2);
          uVar1 = VectorTableLookup(unaff_r5,puVar2,2);
          *puVar2 = in_d16;
          puVar2[1] = in_d17;
          puVar2 = puVar2 + 2;
        } while (puVar2 != puVar4);
        uVar3 = uVar1 & 0xfffffff0;
        if (uVar1 == uVar3) {
          return;
        }
      }
      uVar5 = uVar3 + 1;
      *(undefined1 *)((int)__dest + uVar3) = (&stack0x0000001f)[(uVar7 - uVar3) + 1];
      if (uVar5 < uVar1) {
        uVar6 = uVar3 + 2;
        *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
        if (uVar6 < uVar1) {
          uVar5 = uVar3 + 3;
          *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
          if (uVar5 < uVar1) {
            uVar6 = uVar3 + 4;
            *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
            if (uVar6 < uVar1) {
              uVar5 = uVar3 + 5;
              *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
              if (uVar5 < uVar1) {
                uVar6 = uVar3 + 6;
                *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                if (uVar6 < uVar1) {
                  uVar5 = uVar3 + 7;
                  *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                  if (uVar5 < uVar1) {
                    uVar6 = uVar3 + 8;
                    *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                    if (uVar6 < uVar1) {
                      uVar5 = uVar3 + 9;
                      *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1]
                      ;
                      if (uVar5 < uVar1) {
                        uVar6 = uVar3 + 10;
                        *(undefined1 *)((int)__dest + uVar5) =
                             (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                        if (uVar6 < uVar1) {
                          uVar5 = uVar3 + 0xb;
                          *(undefined1 *)((int)__dest + uVar6) =
                               (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                          if (uVar5 < uVar1) {
                            uVar6 = uVar3 + 0xc;
                            *(undefined1 *)((int)__dest + uVar5) =
                                 (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                            if (uVar6 < uVar1) {
                              uVar5 = uVar3 + 0xd;
                              *(undefined1 *)((int)__dest + uVar6) =
                                   (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                              if (uVar5 < uVar1) {
                                uVar3 = uVar3 + 0xe;
                                *(undefined1 *)((int)__dest + uVar5) =
                                     (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                                if (uVar3 < uVar1) {
                                  *(undefined1 *)((int)__dest + uVar3) =
                                       (&stack0x0000001f)[(uVar7 - uVar3) + 1];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar1 = (uint)*(byte *)(DAT_00026e04 + 0x26bd4 + param_2);
    if (uVar1 != 0) {
      memcpy(__dest,&stack0x00000020,uVar1);
    }
  }
  else if ((param_1 == 2) && (uVar1 = (uint)*(byte *)(DAT_00026e00 + 0x26bac + param_2), uVar1 != 0)
          ) {
    memcpy(__dest,&stack0x00000020,uVar1);
  }
  return;
}



/* ===== FUN_00026e0c @ 00026e0c size=668 ===== */

undefined8 FUN_00026e0c(int param_1,int param_2)

{
  undefined8 *puVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar5;
  int iVar6;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined8 local_28;
  undefined1 auStack_20 [4];
  
  __src = (void *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar2 = (uint)*(byte *)(DAT_000270c0 + 0x26ea8 + param_2);
    if (uVar2 != 0) {
      uVar5 = uVar2 - 1;
      if (uVar5 < 0xf) {
        uVar4 = 0;
      }
      else {
        iVar3 = (int)__src + (uVar2 - 0x10);
        iVar6 = iVar3 - (uVar2 & 0xf0);
        do {
          iVar3 = iVar3 + -0x10;
          puVar1 = (undefined8 *)VectorTableLookup(unaff_r4,uVar2,2);
          __src = (void *)VectorTableLookup(unaff_r5,uVar2,2);
          *puVar1 = in_d16;
          puVar1[1] = in_d17;
        } while (iVar3 != iVar6);
        uVar4 = uVar2 & 0xfffffff0;
        if (uVar2 == uVar4) {
          return local_28;
        }
      }
      auStack_20[uVar4 - 8] = *(undefined1 *)((int)__src + (uVar5 - uVar4));
      if (uVar4 + 1 < uVar2) {
        auStack_20[uVar4 - 7] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 1)));
        if (uVar4 + 2 < uVar2) {
          auStack_20[uVar4 - 6] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 2)));
          if (uVar4 + 3 < uVar2) {
            auStack_20[uVar4 - 5] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 3)));
            if (uVar4 + 4 < uVar2) {
              auStack_20[uVar4 - 4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 4)));
              if (uVar4 + 5 < uVar2) {
                auStack_20[uVar4 - 3] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 5)));
                if (uVar4 + 6 < uVar2) {
                  auStack_20[uVar4 - 2] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 6)));
                  if (uVar4 + 7 < uVar2) {
                    auStack_20[uVar4 - 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 7)));
                    if (uVar4 + 8 < uVar2) {
                      auStack_20[uVar4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 8)));
                      if (uVar4 + 9 < uVar2) {
                        auStack_20[uVar4 + 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 9)));
                        if (uVar4 + 10 < uVar2) {
                          auStack_20[uVar4 + 2] =
                               *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 10)));
                          if (uVar4 + 0xb < uVar2) {
                            auStack_20[uVar4 + 3] =
                                 *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xb)));
                            if (uVar4 + 0xc < uVar2) {
                              (&stack0xffffffe4)[uVar4] =
                                   *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xc)));
                              if (uVar4 + 0xd < uVar2) {
                                (&stack0xffffffe5)[uVar4] =
                                     *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xd)));
                                if (uVar4 + 0xe < uVar2) {
                                  (&stack0xffffffe6)[uVar4] =
                                       *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xe)));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar2 = (uint)*(byte *)(DAT_000270bc + 0x26e88 + param_2);
    if (uVar2 != 0) {
      memcpy(&local_28,__src,uVar2);
    }
  }
  else if ((param_1 == 2) && (uVar2 = (uint)*(byte *)(DAT_000270b8 + 0x26e58 + param_2), uVar2 != 0)
          ) {
    memcpy(&local_28,__src,uVar2);
  }
  return local_28;
}



/* ===== FUN_000270c4 @ 000270c4 size=652 ===== */

void FUN_000270c4(int param_1,int param_2)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 unaff_r5;
  uint uVar6;
  uint uVar7;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  
  __dest = (undefined8 *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar1 = (uint)*(byte *)(DAT_00027368 + 0x27154 + param_2);
    if (uVar1 != 0) {
      uVar7 = uVar1 - 1;
      if (uVar7 < 0xf) {
        uVar3 = 0;
      }
      else {
        puVar4 = (undefined8 *)((uVar1 & 0xf0) + (int)__dest);
        puVar2 = __dest;
        do {
          __dest = (undefined8 *)VectorTableLookup(puVar4,puVar2,2);
          uVar1 = VectorTableLookup(unaff_r5,puVar2,2);
          *puVar2 = in_d16;
          puVar2[1] = in_d17;
          puVar2 = puVar2 + 2;
        } while (puVar2 != puVar4);
        uVar3 = uVar1 & 0xfffffff0;
        if (uVar1 == uVar3) {
          return;
        }
      }
      uVar5 = uVar3 + 1;
      *(undefined1 *)((int)__dest + uVar3) = (&stack0x0000001f)[(uVar7 - uVar3) + 1];
      if (uVar5 < uVar1) {
        uVar6 = uVar3 + 2;
        *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
        if (uVar6 < uVar1) {
          uVar5 = uVar3 + 3;
          *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
          if (uVar5 < uVar1) {
            uVar6 = uVar3 + 4;
            *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
            if (uVar6 < uVar1) {
              uVar5 = uVar3 + 5;
              *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
              if (uVar5 < uVar1) {
                uVar6 = uVar3 + 6;
                *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                if (uVar6 < uVar1) {
                  uVar5 = uVar3 + 7;
                  *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                  if (uVar5 < uVar1) {
                    uVar6 = uVar3 + 8;
                    *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                    if (uVar6 < uVar1) {
                      uVar5 = uVar3 + 9;
                      *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1]
                      ;
                      if (uVar5 < uVar1) {
                        uVar6 = uVar3 + 10;
                        *(undefined1 *)((int)__dest + uVar5) =
                             (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                        if (uVar6 < uVar1) {
                          uVar5 = uVar3 + 0xb;
                          *(undefined1 *)((int)__dest + uVar6) =
                               (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                          if (uVar5 < uVar1) {
                            uVar6 = uVar3 + 0xc;
                            *(undefined1 *)((int)__dest + uVar5) =
                                 (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                            if (uVar6 < uVar1) {
                              uVar5 = uVar3 + 0xd;
                              *(undefined1 *)((int)__dest + uVar6) =
                                   (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                              if (uVar5 < uVar1) {
                                uVar3 = uVar3 + 0xe;
                                *(undefined1 *)((int)__dest + uVar5) =
                                     (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                                if (uVar3 < uVar1) {
                                  *(undefined1 *)((int)__dest + uVar3) =
                                       (&stack0x0000001f)[(uVar7 - uVar3) + 1];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar1 = (uint)*(byte *)(DAT_00027364 + 0x27134 + param_2);
    if (uVar1 != 0) {
      memcpy(__dest,&stack0x00000020,uVar1);
    }
  }
  else if ((param_1 == 2) && (uVar1 = (uint)*(byte *)(DAT_00027360 + 0x2710c + param_2), uVar1 != 0)
          ) {
    memcpy(__dest,&stack0x00000020,uVar1);
  }
  return;
}



/* ===== FUN_0002736c @ 0002736c size=668 ===== */

undefined1 FUN_0002736c(int param_1,int param_2)

{
  undefined8 *puVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar5;
  int iVar6;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined1 local_28 [12];
  
  __src = (void *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar2 = (uint)*(byte *)(DAT_00027620 + 0x27408 + param_2);
    if (uVar2 != 0) {
      uVar5 = uVar2 - 1;
      if (uVar5 < 0xf) {
        uVar4 = 0;
      }
      else {
        iVar3 = (int)__src + (uVar2 - 0x10);
        iVar6 = iVar3 - (uVar2 & 0xf0);
        do {
          iVar3 = iVar3 + -0x10;
          puVar1 = (undefined8 *)VectorTableLookup(unaff_r4,uVar2,2);
          __src = (void *)VectorTableLookup(unaff_r5,uVar2,2);
          *puVar1 = in_d16;
          puVar1[1] = in_d17;
        } while (iVar3 != iVar6);
        uVar4 = uVar2 & 0xfffffff0;
        if (uVar2 == uVar4) {
          return local_28[0];
        }
      }
      local_28[uVar4] = *(undefined1 *)((int)__src + (uVar5 - uVar4));
      if (uVar4 + 1 < uVar2) {
        local_28[uVar4 + 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 1)));
        if (uVar4 + 2 < uVar2) {
          local_28[uVar4 + 2] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 2)));
          if (uVar4 + 3 < uVar2) {
            local_28[uVar4 + 3] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 3)));
            if (uVar4 + 4 < uVar2) {
              local_28[uVar4 + 4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 4)));
              if (uVar4 + 5 < uVar2) {
                local_28[uVar4 + 5] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 5)));
                if (uVar4 + 6 < uVar2) {
                  local_28[uVar4 + 6] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 6)));
                  if (uVar4 + 7 < uVar2) {
                    local_28[uVar4 + 7] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 7)));
                    if (uVar4 + 8 < uVar2) {
                      local_28[uVar4 + 8] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 8)));
                      if (uVar4 + 9 < uVar2) {
                        local_28[uVar4 + 9] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 9)));
                        if (uVar4 + 10 < uVar2) {
                          local_28[uVar4 + 10] =
                               *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 10)));
                          if (uVar4 + 0xb < uVar2) {
                            local_28[uVar4 + 0xb] =
                                 *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xb)));
                            if (uVar4 + 0xc < uVar2) {
                              (&stack0xffffffe4)[uVar4] =
                                   *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xc)));
                              if (uVar4 + 0xd < uVar2) {
                                (&stack0xffffffe5)[uVar4] =
                                     *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xd)));
                                if (uVar4 + 0xe < uVar2) {
                                  (&stack0xffffffe6)[uVar4] =
                                       *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xe)));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar2 = (uint)*(byte *)(DAT_0002761c + 0x273e8 + param_2);
    if (uVar2 != 0) {
      memcpy(local_28,__src,uVar2);
    }
  }
  else if ((param_1 == 2) && (uVar2 = (uint)*(byte *)(DAT_00027618 + 0x273b8 + param_2), uVar2 != 0)
          ) {
    memcpy(local_28,__src,uVar2);
  }
  return local_28[0];
}



/* ===== FUN_00027624 @ 00027624 size=652 ===== */

void FUN_00027624(int param_1,int param_2)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 unaff_r5;
  uint uVar6;
  uint uVar7;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  
  __dest = (undefined8 *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar1 = (uint)*(byte *)(DAT_000278c8 + 0x276b4 + param_2);
    if (uVar1 != 0) {
      uVar7 = uVar1 - 1;
      if (uVar7 < 0xf) {
        uVar3 = 0;
      }
      else {
        puVar4 = (undefined8 *)((uVar1 & 0xf0) + (int)__dest);
        puVar2 = __dest;
        do {
          __dest = (undefined8 *)VectorTableLookup(puVar4,puVar2,2);
          uVar1 = VectorTableLookup(unaff_r5,puVar2,2);
          *puVar2 = in_d16;
          puVar2[1] = in_d17;
          puVar2 = puVar2 + 2;
        } while (puVar2 != puVar4);
        uVar3 = uVar1 & 0xfffffff0;
        if (uVar1 == uVar3) {
          return;
        }
      }
      uVar5 = uVar3 + 1;
      *(undefined1 *)((int)__dest + uVar3) = (&stack0x0000001f)[(uVar7 - uVar3) + 1];
      if (uVar5 < uVar1) {
        uVar6 = uVar3 + 2;
        *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
        if (uVar6 < uVar1) {
          uVar5 = uVar3 + 3;
          *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
          if (uVar5 < uVar1) {
            uVar6 = uVar3 + 4;
            *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
            if (uVar6 < uVar1) {
              uVar5 = uVar3 + 5;
              *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
              if (uVar5 < uVar1) {
                uVar6 = uVar3 + 6;
                *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                if (uVar6 < uVar1) {
                  uVar5 = uVar3 + 7;
                  *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                  if (uVar5 < uVar1) {
                    uVar6 = uVar3 + 8;
                    *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                    if (uVar6 < uVar1) {
                      uVar5 = uVar3 + 9;
                      *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1]
                      ;
                      if (uVar5 < uVar1) {
                        uVar6 = uVar3 + 10;
                        *(undefined1 *)((int)__dest + uVar5) =
                             (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                        if (uVar6 < uVar1) {
                          uVar5 = uVar3 + 0xb;
                          *(undefined1 *)((int)__dest + uVar6) =
                               (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                          if (uVar5 < uVar1) {
                            uVar6 = uVar3 + 0xc;
                            *(undefined1 *)((int)__dest + uVar5) =
                                 (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                            if (uVar6 < uVar1) {
                              uVar5 = uVar3 + 0xd;
                              *(undefined1 *)((int)__dest + uVar6) =
                                   (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                              if (uVar5 < uVar1) {
                                uVar3 = uVar3 + 0xe;
                                *(undefined1 *)((int)__dest + uVar5) =
                                     (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                                if (uVar3 < uVar1) {
                                  *(undefined1 *)((int)__dest + uVar3) =
                                       (&stack0x0000001f)[(uVar7 - uVar3) + 1];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar1 = (uint)*(byte *)(DAT_000278c4 + 0x27694 + param_2);
    if (uVar1 != 0) {
      memcpy(__dest,&stack0x00000020,uVar1);
    }
  }
  else if ((param_1 == 2) && (uVar1 = (uint)*(byte *)(DAT_000278c0 + 0x2766c + param_2), uVar1 != 0)
          ) {
    memcpy(__dest,&stack0x00000020,uVar1);
  }
  return;
}



/* ===== FUN_000278cc @ 000278cc size=668 ===== */

undefined2 FUN_000278cc(int param_1,int param_2)

{
  undefined8 *puVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar5;
  int iVar6;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined2 local_28;
  undefined1 auStack_26 [10];
  
  __src = (void *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar2 = (uint)*(byte *)(DAT_00027b80 + 0x27968 + param_2);
    if (uVar2 != 0) {
      uVar5 = uVar2 - 1;
      if (uVar5 < 0xf) {
        uVar4 = 0;
      }
      else {
        iVar3 = (int)__src + (uVar2 - 0x10);
        iVar6 = iVar3 - (uVar2 & 0xf0);
        do {
          iVar3 = iVar3 + -0x10;
          puVar1 = (undefined8 *)VectorTableLookup(unaff_r4,uVar2,2);
          __src = (void *)VectorTableLookup(unaff_r5,uVar2,2);
          *puVar1 = in_d16;
          puVar1[1] = in_d17;
        } while (iVar3 != iVar6);
        uVar4 = uVar2 & 0xfffffff0;
        if (uVar2 == uVar4) {
          return local_28;
        }
      }
      auStack_26[uVar4 - 2] = *(undefined1 *)((int)__src + (uVar5 - uVar4));
      if (uVar4 + 1 < uVar2) {
        auStack_26[uVar4 - 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 1)));
        if (uVar4 + 2 < uVar2) {
          auStack_26[uVar4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 2)));
          if (uVar4 + 3 < uVar2) {
            auStack_26[uVar4 + 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 3)));
            if (uVar4 + 4 < uVar2) {
              auStack_26[uVar4 + 2] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 4)));
              if (uVar4 + 5 < uVar2) {
                auStack_26[uVar4 + 3] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 5)));
                if (uVar4 + 6 < uVar2) {
                  auStack_26[uVar4 + 4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 6)));
                  if (uVar4 + 7 < uVar2) {
                    auStack_26[uVar4 + 5] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 7)));
                    if (uVar4 + 8 < uVar2) {
                      auStack_26[uVar4 + 6] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 8)));
                      if (uVar4 + 9 < uVar2) {
                        auStack_26[uVar4 + 7] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 9)));
                        if (uVar4 + 10 < uVar2) {
                          auStack_26[uVar4 + 8] =
                               *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 10)));
                          if (uVar4 + 0xb < uVar2) {
                            auStack_26[uVar4 + 9] =
                                 *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xb)));
                            if (uVar4 + 0xc < uVar2) {
                              (&stack0xffffffe4)[uVar4] =
                                   *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xc)));
                              if (uVar4 + 0xd < uVar2) {
                                (&stack0xffffffe5)[uVar4] =
                                     *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xd)));
                                if (uVar4 + 0xe < uVar2) {
                                  (&stack0xffffffe6)[uVar4] =
                                       *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xe)));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar2 = (uint)*(byte *)(DAT_00027b7c + 0x27948 + param_2);
    if (uVar2 != 0) {
      memcpy(&local_28,__src,uVar2);
    }
  }
  else if ((param_1 == 2) && (uVar2 = (uint)*(byte *)(DAT_00027b78 + 0x27918 + param_2), uVar2 != 0)
          ) {
    memcpy(&local_28,__src,uVar2);
  }
  return local_28;
}



/* ===== FUN_00027b84 @ 00027b84 size=652 ===== */

void FUN_00027b84(int param_1,int param_2)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 unaff_r5;
  uint uVar6;
  uint uVar7;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  
  __dest = (undefined8 *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar1 = (uint)*(byte *)(DAT_00027e28 + 0x27c14 + param_2);
    if (uVar1 != 0) {
      uVar7 = uVar1 - 1;
      if (uVar7 < 0xf) {
        uVar3 = 0;
      }
      else {
        puVar4 = (undefined8 *)((uVar1 & 0xf0) + (int)__dest);
        puVar2 = __dest;
        do {
          __dest = (undefined8 *)VectorTableLookup(puVar4,puVar2,2);
          uVar1 = VectorTableLookup(unaff_r5,puVar2,2);
          *puVar2 = in_d16;
          puVar2[1] = in_d17;
          puVar2 = puVar2 + 2;
        } while (puVar2 != puVar4);
        uVar3 = uVar1 & 0xfffffff0;
        if (uVar1 == uVar3) {
          return;
        }
      }
      uVar5 = uVar3 + 1;
      *(undefined1 *)((int)__dest + uVar3) = (&stack0x0000001f)[(uVar7 - uVar3) + 1];
      if (uVar5 < uVar1) {
        uVar6 = uVar3 + 2;
        *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
        if (uVar6 < uVar1) {
          uVar5 = uVar3 + 3;
          *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
          if (uVar5 < uVar1) {
            uVar6 = uVar3 + 4;
            *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
            if (uVar6 < uVar1) {
              uVar5 = uVar3 + 5;
              *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
              if (uVar5 < uVar1) {
                uVar6 = uVar3 + 6;
                *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                if (uVar6 < uVar1) {
                  uVar5 = uVar3 + 7;
                  *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                  if (uVar5 < uVar1) {
                    uVar6 = uVar3 + 8;
                    *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                    if (uVar6 < uVar1) {
                      uVar5 = uVar3 + 9;
                      *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1]
                      ;
                      if (uVar5 < uVar1) {
                        uVar6 = uVar3 + 10;
                        *(undefined1 *)((int)__dest + uVar5) =
                             (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                        if (uVar6 < uVar1) {
                          uVar5 = uVar3 + 0xb;
                          *(undefined1 *)((int)__dest + uVar6) =
                               (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                          if (uVar5 < uVar1) {
                            uVar6 = uVar3 + 0xc;
                            *(undefined1 *)((int)__dest + uVar5) =
                                 (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                            if (uVar6 < uVar1) {
                              uVar5 = uVar3 + 0xd;
                              *(undefined1 *)((int)__dest + uVar6) =
                                   (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                              if (uVar5 < uVar1) {
                                uVar3 = uVar3 + 0xe;
                                *(undefined1 *)((int)__dest + uVar5) =
                                     (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                                if (uVar3 < uVar1) {
                                  *(undefined1 *)((int)__dest + uVar3) =
                                       (&stack0x0000001f)[(uVar7 - uVar3) + 1];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar1 = (uint)*(byte *)(DAT_00027e24 + 0x27bf4 + param_2);
    if (uVar1 != 0) {
      memcpy(__dest,&stack0x00000020,uVar1);
    }
  }
  else if ((param_1 == 2) && (uVar1 = (uint)*(byte *)(DAT_00027e20 + 0x27bcc + param_2), uVar1 != 0)
          ) {
    memcpy(__dest,&stack0x00000020,uVar1);
  }
  return;
}



/* ===== FUN_00027e2c @ 00027e2c size=668 ===== */

undefined4 FUN_00027e2c(int param_1,int param_2)

{
  undefined8 *puVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar5;
  int iVar6;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 local_28;
  undefined1 auStack_24 [8];
  
  __src = (void *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar2 = (uint)*(byte *)(DAT_000280e0 + 0x27ec8 + param_2);
    if (uVar2 != 0) {
      uVar5 = uVar2 - 1;
      if (uVar5 < 0xf) {
        uVar4 = 0;
      }
      else {
        iVar3 = (int)__src + (uVar2 - 0x10);
        iVar6 = iVar3 - (uVar2 & 0xf0);
        do {
          iVar3 = iVar3 + -0x10;
          puVar1 = (undefined8 *)VectorTableLookup(unaff_r4,uVar2,2);
          __src = (void *)VectorTableLookup(unaff_r5,uVar2,2);
          *puVar1 = in_d16;
          puVar1[1] = in_d17;
        } while (iVar3 != iVar6);
        uVar4 = uVar2 & 0xfffffff0;
        if (uVar2 == uVar4) {
          return local_28;
        }
      }
      auStack_24[uVar4 - 4] = *(undefined1 *)((int)__src + (uVar5 - uVar4));
      if (uVar4 + 1 < uVar2) {
        auStack_24[uVar4 - 3] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 1)));
        if (uVar4 + 2 < uVar2) {
          auStack_24[uVar4 - 2] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 2)));
          if (uVar4 + 3 < uVar2) {
            auStack_24[uVar4 - 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 3)));
            if (uVar4 + 4 < uVar2) {
              auStack_24[uVar4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 4)));
              if (uVar4 + 5 < uVar2) {
                auStack_24[uVar4 + 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 5)));
                if (uVar4 + 6 < uVar2) {
                  auStack_24[uVar4 + 2] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 6)));
                  if (uVar4 + 7 < uVar2) {
                    auStack_24[uVar4 + 3] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 7)));
                    if (uVar4 + 8 < uVar2) {
                      auStack_24[uVar4 + 4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 8)));
                      if (uVar4 + 9 < uVar2) {
                        auStack_24[uVar4 + 5] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 9)));
                        if (uVar4 + 10 < uVar2) {
                          auStack_24[uVar4 + 6] =
                               *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 10)));
                          if (uVar4 + 0xb < uVar2) {
                            auStack_24[uVar4 + 7] =
                                 *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xb)));
                            if (uVar4 + 0xc < uVar2) {
                              (&stack0xffffffe4)[uVar4] =
                                   *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xc)));
                              if (uVar4 + 0xd < uVar2) {
                                (&stack0xffffffe5)[uVar4] =
                                     *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xd)));
                                if (uVar4 + 0xe < uVar2) {
                                  (&stack0xffffffe6)[uVar4] =
                                       *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xe)));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar2 = (uint)*(byte *)(DAT_000280dc + 0x27ea8 + param_2);
    if (uVar2 != 0) {
      memcpy(&local_28,__src,uVar2);
    }
  }
  else if ((param_1 == 2) && (uVar2 = (uint)*(byte *)(DAT_000280d8 + 0x27e78 + param_2), uVar2 != 0)
          ) {
    memcpy(&local_28,__src,uVar2);
  }
  return local_28;
}



/* ===== FUN_000280e4 @ 000280e4 size=652 ===== */

void FUN_000280e4(int param_1,int param_2)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 unaff_r5;
  uint uVar6;
  uint uVar7;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  
  __dest = (undefined8 *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar1 = (uint)*(byte *)(DAT_00028388 + 0x28174 + param_2);
    if (uVar1 != 0) {
      uVar7 = uVar1 - 1;
      if (uVar7 < 0xf) {
        uVar3 = 0;
      }
      else {
        puVar4 = (undefined8 *)((uVar1 & 0xf0) + (int)__dest);
        puVar2 = __dest;
        do {
          __dest = (undefined8 *)VectorTableLookup(puVar4,puVar2,2);
          uVar1 = VectorTableLookup(unaff_r5,puVar2,2);
          *puVar2 = in_d16;
          puVar2[1] = in_d17;
          puVar2 = puVar2 + 2;
        } while (puVar2 != puVar4);
        uVar3 = uVar1 & 0xfffffff0;
        if (uVar1 == uVar3) {
          return;
        }
      }
      uVar5 = uVar3 + 1;
      *(undefined1 *)((int)__dest + uVar3) = (&stack0x0000001f)[(uVar7 - uVar3) + 1];
      if (uVar5 < uVar1) {
        uVar6 = uVar3 + 2;
        *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
        if (uVar6 < uVar1) {
          uVar5 = uVar3 + 3;
          *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
          if (uVar5 < uVar1) {
            uVar6 = uVar3 + 4;
            *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
            if (uVar6 < uVar1) {
              uVar5 = uVar3 + 5;
              *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
              if (uVar5 < uVar1) {
                uVar6 = uVar3 + 6;
                *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                if (uVar6 < uVar1) {
                  uVar5 = uVar3 + 7;
                  *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                  if (uVar5 < uVar1) {
                    uVar6 = uVar3 + 8;
                    *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                    if (uVar6 < uVar1) {
                      uVar5 = uVar3 + 9;
                      *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1]
                      ;
                      if (uVar5 < uVar1) {
                        uVar6 = uVar3 + 10;
                        *(undefined1 *)((int)__dest + uVar5) =
                             (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                        if (uVar6 < uVar1) {
                          uVar5 = uVar3 + 0xb;
                          *(undefined1 *)((int)__dest + uVar6) =
                               (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                          if (uVar5 < uVar1) {
                            uVar6 = uVar3 + 0xc;
                            *(undefined1 *)((int)__dest + uVar5) =
                                 (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                            if (uVar6 < uVar1) {
                              uVar5 = uVar3 + 0xd;
                              *(undefined1 *)((int)__dest + uVar6) =
                                   (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                              if (uVar5 < uVar1) {
                                uVar3 = uVar3 + 0xe;
                                *(undefined1 *)((int)__dest + uVar5) =
                                     (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                                if (uVar3 < uVar1) {
                                  *(undefined1 *)((int)__dest + uVar3) =
                                       (&stack0x0000001f)[(uVar7 - uVar3) + 1];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar1 = (uint)*(byte *)(DAT_00028384 + 0x28154 + param_2);
    if (uVar1 != 0) {
      memcpy(__dest,&stack0x00000020,uVar1);
    }
  }
  else if ((param_1 == 2) && (uVar1 = (uint)*(byte *)(DAT_00028380 + 0x2812c + param_2), uVar1 != 0)
          ) {
    memcpy(__dest,&stack0x00000020,uVar1);
  }
  return;
}



/* ===== FUN_0002838c @ 0002838c size=668 ===== */

undefined8 FUN_0002838c(int param_1,int param_2)

{
  undefined8 *puVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar5;
  int iVar6;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined8 local_28;
  undefined1 auStack_20 [4];
  
  __src = (void *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar2 = (uint)*(byte *)(DAT_00028640 + 0x28428 + param_2);
    if (uVar2 != 0) {
      uVar5 = uVar2 - 1;
      if (uVar5 < 0xf) {
        uVar4 = 0;
      }
      else {
        iVar3 = (int)__src + (uVar2 - 0x10);
        iVar6 = iVar3 - (uVar2 & 0xf0);
        do {
          iVar3 = iVar3 + -0x10;
          puVar1 = (undefined8 *)VectorTableLookup(unaff_r4,uVar2,2);
          __src = (void *)VectorTableLookup(unaff_r5,uVar2,2);
          *puVar1 = in_d16;
          puVar1[1] = in_d17;
        } while (iVar3 != iVar6);
        uVar4 = uVar2 & 0xfffffff0;
        if (uVar2 == uVar4) {
          return local_28;
        }
      }
      auStack_20[uVar4 - 8] = *(undefined1 *)((int)__src + (uVar5 - uVar4));
      if (uVar4 + 1 < uVar2) {
        auStack_20[uVar4 - 7] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 1)));
        if (uVar4 + 2 < uVar2) {
          auStack_20[uVar4 - 6] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 2)));
          if (uVar4 + 3 < uVar2) {
            auStack_20[uVar4 - 5] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 3)));
            if (uVar4 + 4 < uVar2) {
              auStack_20[uVar4 - 4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 4)));
              if (uVar4 + 5 < uVar2) {
                auStack_20[uVar4 - 3] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 5)));
                if (uVar4 + 6 < uVar2) {
                  auStack_20[uVar4 - 2] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 6)));
                  if (uVar4 + 7 < uVar2) {
                    auStack_20[uVar4 - 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 7)));
                    if (uVar4 + 8 < uVar2) {
                      auStack_20[uVar4] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 8)));
                      if (uVar4 + 9 < uVar2) {
                        auStack_20[uVar4 + 1] = *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 9)));
                        if (uVar4 + 10 < uVar2) {
                          auStack_20[uVar4 + 2] =
                               *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 10)));
                          if (uVar4 + 0xb < uVar2) {
                            auStack_20[uVar4 + 3] =
                                 *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xb)));
                            if (uVar4 + 0xc < uVar2) {
                              (&stack0xffffffe4)[uVar4] =
                                   *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xc)));
                              if (uVar4 + 0xd < uVar2) {
                                (&stack0xffffffe5)[uVar4] =
                                     *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xd)));
                                if (uVar4 + 0xe < uVar2) {
                                  (&stack0xffffffe6)[uVar4] =
                                       *(undefined1 *)((int)__src + (uVar5 - (uVar4 + 0xe)));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar2 = (uint)*(byte *)(DAT_0002863c + 0x28408 + param_2);
    if (uVar2 != 0) {
      memcpy(&local_28,__src,uVar2);
    }
  }
  else if ((param_1 == 2) && (uVar2 = (uint)*(byte *)(DAT_00028638 + 0x283d8 + param_2), uVar2 != 0)
          ) {
    memcpy(&local_28,__src,uVar2);
  }
  return local_28;
}



/* ===== FUN_00028644 @ 00028644 size=652 ===== */

void FUN_00028644(int param_1,int param_2)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 unaff_r5;
  uint uVar6;
  uint uVar7;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  
  __dest = (undefined8 *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar1 = (uint)*(byte *)(DAT_000288e8 + 0x286d4 + param_2);
    if (uVar1 != 0) {
      uVar7 = uVar1 - 1;
      if (uVar7 < 0xf) {
        uVar3 = 0;
      }
      else {
        puVar4 = (undefined8 *)((uVar1 & 0xf0) + (int)__dest);
        puVar2 = __dest;
        do {
          __dest = (undefined8 *)VectorTableLookup(puVar4,puVar2,2);
          uVar1 = VectorTableLookup(unaff_r5,puVar2,2);
          *puVar2 = in_d16;
          puVar2[1] = in_d17;
          puVar2 = puVar2 + 2;
        } while (puVar2 != puVar4);
        uVar3 = uVar1 & 0xfffffff0;
        if (uVar1 == uVar3) {
          return;
        }
      }
      uVar5 = uVar3 + 1;
      *(undefined1 *)((int)__dest + uVar3) = (&stack0x0000001f)[(uVar7 - uVar3) + 1];
      if (uVar5 < uVar1) {
        uVar6 = uVar3 + 2;
        *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
        if (uVar6 < uVar1) {
          uVar5 = uVar3 + 3;
          *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
          if (uVar5 < uVar1) {
            uVar6 = uVar3 + 4;
            *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
            if (uVar6 < uVar1) {
              uVar5 = uVar3 + 5;
              *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
              if (uVar5 < uVar1) {
                uVar6 = uVar3 + 6;
                *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                if (uVar6 < uVar1) {
                  uVar5 = uVar3 + 7;
                  *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                  if (uVar5 < uVar1) {
                    uVar6 = uVar3 + 8;
                    *(undefined1 *)((int)__dest + uVar5) = (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                    if (uVar6 < uVar1) {
                      uVar5 = uVar3 + 9;
                      *(undefined1 *)((int)__dest + uVar6) = (&stack0x0000001f)[(uVar7 - uVar6) + 1]
                      ;
                      if (uVar5 < uVar1) {
                        uVar6 = uVar3 + 10;
                        *(undefined1 *)((int)__dest + uVar5) =
                             (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                        if (uVar6 < uVar1) {
                          uVar5 = uVar3 + 0xb;
                          *(undefined1 *)((int)__dest + uVar6) =
                               (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                          if (uVar5 < uVar1) {
                            uVar6 = uVar3 + 0xc;
                            *(undefined1 *)((int)__dest + uVar5) =
                                 (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                            if (uVar6 < uVar1) {
                              uVar5 = uVar3 + 0xd;
                              *(undefined1 *)((int)__dest + uVar6) =
                                   (&stack0x0000001f)[(uVar7 - uVar6) + 1];
                              if (uVar5 < uVar1) {
                                uVar3 = uVar3 + 0xe;
                                *(undefined1 *)((int)__dest + uVar5) =
                                     (&stack0x0000001f)[(uVar7 - uVar5) + 1];
                                if (uVar3 < uVar1) {
                                  *(undefined1 *)((int)__dest + uVar3) =
                                       (&stack0x0000001f)[(uVar7 - uVar3) + 1];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar1 = (uint)*(byte *)(DAT_000288e4 + 0x286b4 + param_2);
    if (uVar1 != 0) {
      memcpy(__dest,&stack0x00000020,uVar1);
    }
  }
  else if ((param_1 == 2) && (uVar1 = (uint)*(byte *)(DAT_000288e0 + 0x2868c + param_2), uVar1 != 0)
          ) {
    memcpy(__dest,&stack0x00000020,uVar1);
  }
  return;
}



/* ===== FUN_000288ec @ 000288ec size=668 ===== */

undefined8 * FUN_000288ec(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *__src;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined1 local_28 [12];
  
  __src = (void *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    puVar4 = (undefined8 *)(uint)*(byte *)(DAT_00028ba0 + 0x28988 + (int)param_2);
    if (puVar4 != (undefined8 *)0x0) {
      puVar7 = (undefined1 *)((int)puVar4 - 1);
      if (puVar7 < (undefined1 *)0xf) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)((int)__src + (int)(puVar4 + -2));
        puVar8 = puVar5 + -((uint)puVar4 & 0xf0);
        do {
          puVar5 = puVar5 + -0x10;
          puVar1 = (undefined8 *)VectorTableLookup(unaff_r4,puVar4,2);
          __src = (void *)VectorTableLookup(unaff_r5,puVar4,2);
          *puVar1 = in_d16;
          puVar1[1] = in_d17;
        } while (puVar5 != puVar8);
        puVar6 = (undefined8 *)((uint)puVar4 & 0xfffffff0);
        if (puVar4 == puVar6) {
          return puVar1 + 2;
        }
      }
      param_2 = (undefined8 *)((int)puVar6 + 1);
      local_28[(int)puVar6] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar6));
      if (param_2 < puVar4) {
        puVar1 = (undefined8 *)((int)puVar6 + 2);
        puVar5 = local_28 + 8;
        local_28[(int)param_2] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)param_2));
        param_2 = (undefined8 *)(puVar5 + (int)param_2);
        if (puVar1 < puVar4) {
          param_2 = (undefined8 *)((int)puVar6 + 3);
          local_28[(int)puVar1] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar1));
          if (param_2 < puVar4) {
            puVar1 = (undefined8 *)((int)puVar6 + 4);
            local_28[(int)param_2] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)param_2));
            param_2 = (undefined8 *)(puVar5 + (int)param_2);
            if (puVar1 < puVar4) {
              param_2 = (undefined8 *)((int)puVar6 + 5);
              local_28[(int)puVar1] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar1));
              if (param_2 < puVar4) {
                puVar1 = (undefined8 *)((int)puVar6 + 6);
                local_28[(int)param_2] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)param_2));
                param_2 = (undefined8 *)(puVar5 + (int)param_2);
                if (puVar1 < puVar4) {
                  param_2 = (undefined8 *)((int)puVar6 + 7);
                  local_28[(int)puVar1] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar1));
                  if (param_2 < puVar4) {
                    puVar1 = puVar6 + 1;
                    local_28[(int)param_2] =
                         *(undefined1 *)((int)__src + ((int)puVar7 - (int)param_2));
                    param_2 = (undefined8 *)(puVar5 + (int)param_2);
                    if (puVar1 < puVar4) {
                      param_2 = (undefined8 *)((int)puVar6 + 9);
                      local_28[(int)puVar1] =
                           *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar1));
                      if (param_2 < puVar4) {
                        puVar1 = (undefined8 *)((int)puVar6 + 10);
                        local_28[(int)param_2] =
                             *(undefined1 *)((int)__src + ((int)puVar7 - (int)param_2));
                        param_2 = (undefined8 *)(puVar5 + (int)param_2);
                        if (puVar1 < puVar4) {
                          param_2 = (undefined8 *)((int)puVar6 + 0xb);
                          local_28[(int)puVar1] =
                               *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar1));
                          if (param_2 < puVar4) {
                            puVar1 = (undefined8 *)((int)puVar6 + 0xc);
                            local_28[(int)param_2] =
                                 *(undefined1 *)((int)__src + ((int)puVar7 - (int)param_2));
                            param_2 = (undefined8 *)(puVar5 + (int)param_2);
                            if (puVar1 < puVar4) {
                              puVar2 = (undefined8 *)((int)puVar6 + 0xd);
                              local_28[(int)puVar1] =
                                   *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar1));
                              param_2 = puVar2;
                              if (puVar2 < puVar4) {
                                puVar6 = (undefined8 *)((int)puVar6 + 0xe);
                                param_2 = (undefined8 *)(puVar5 + (int)puVar2);
                                local_28[(int)puVar2] =
                                     *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar2));
                                if (puVar6 < puVar4) {
                                  local_28[(int)puVar6] =
                                       *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar6));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar3 = (uint)*(byte *)(DAT_00028b9c + 0x28968 + (int)param_2);
    if (uVar3 != 0) {
      param_2 = memcpy(local_28,__src,uVar3);
    }
  }
  else if ((param_1 == 2) &&
          (uVar3 = (uint)*(byte *)(DAT_00028b98 + 0x28938 + (int)param_2), uVar3 != 0)) {
    param_2 = memcpy(local_28,__src,uVar3);
  }
  return param_2;
}



/* ===== FUN_00028ba4 @ 00028ba4 size=672 ===== */

void FUN_00028ba4(undefined4 param_1,int param_2,int param_3)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 unaff_r4;
  uint uVar4;
  undefined4 unaff_r5;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined1 uStack_25;
  undefined4 local_24 [2];
  
  local_24[0] = param_1;
  __dest = (undefined8 *)(in_stack_00000010 + in_stack_00000014);
  if (param_2 == 1) {
    uVar1 = (uint)*(byte *)(DAT_00028e60 + 0x28c40 + param_3);
    if (uVar1 != 0) {
      uVar5 = uVar1 - 1;
      if (uVar5 < 0xf) {
        uVar3 = 0;
      }
      else {
        puVar6 = (undefined8 *)((uVar1 & 0xf0) + (int)__dest);
        puVar2 = __dest;
        do {
          __dest = (undefined8 *)VectorTableLookup(unaff_r4,puVar2,2);
          uVar1 = VectorTableLookup(unaff_r5,puVar2,2);
          *puVar2 = in_d16;
          puVar2[1] = in_d17;
          puVar2 = puVar2 + 2;
        } while (puVar2 != puVar6);
        uVar3 = uVar1 & 0xfffffff0;
        if (uVar1 == uVar3) {
          return;
        }
      }
      uVar7 = uVar3 + 1;
      *(undefined1 *)((int)__dest + uVar3) = (&uStack_25)[(uVar5 - uVar3) + 1];
      if (uVar7 < uVar1) {
        uVar4 = uVar3 + 2;
        *(undefined1 *)((int)__dest + uVar7) = (&uStack_25)[(uVar5 - uVar7) + 1];
        if (uVar4 < uVar1) {
          uVar7 = uVar3 + 3;
          *(undefined1 *)((int)__dest + uVar4) = (&uStack_25)[(uVar5 - uVar4) + 1];
          if (uVar7 < uVar1) {
            uVar4 = uVar3 + 4;
            *(undefined1 *)((int)__dest + uVar7) = (&uStack_25)[(uVar5 - uVar7) + 1];
            if (uVar4 < uVar1) {
              uVar7 = uVar3 + 5;
              *(undefined1 *)((int)__dest + uVar4) = (&uStack_25)[(uVar5 - uVar4) + 1];
              if (uVar7 < uVar1) {
                uVar4 = uVar3 + 6;
                *(undefined1 *)((int)__dest + uVar7) = (&uStack_25)[(uVar5 - uVar7) + 1];
                if (uVar4 < uVar1) {
                  uVar7 = uVar3 + 7;
                  *(undefined1 *)((int)__dest + uVar4) = (&uStack_25)[(uVar5 - uVar4) + 1];
                  if (uVar7 < uVar1) {
                    uVar4 = uVar3 + 8;
                    *(undefined1 *)((int)__dest + uVar7) = (&uStack_25)[(uVar5 - uVar7) + 1];
                    if (uVar4 < uVar1) {
                      uVar7 = uVar3 + 9;
                      *(undefined1 *)((int)__dest + uVar4) = (&uStack_25)[(uVar5 - uVar4) + 1];
                      if (uVar7 < uVar1) {
                        uVar4 = uVar3 + 10;
                        *(undefined1 *)((int)__dest + uVar7) = (&uStack_25)[(uVar5 - uVar7) + 1];
                        if (uVar4 < uVar1) {
                          uVar7 = uVar3 + 0xb;
                          *(undefined1 *)((int)__dest + uVar4) = (&uStack_25)[(uVar5 - uVar4) + 1];
                          if (uVar7 < uVar1) {
                            uVar4 = uVar3 + 0xc;
                            *(undefined1 *)((int)__dest + uVar7) = (&uStack_25)[(uVar5 - uVar7) + 1]
                            ;
                            if (uVar4 < uVar1) {
                              uVar7 = uVar3 + 0xd;
                              *(undefined1 *)((int)__dest + uVar4) =
                                   (&uStack_25)[(uVar5 - uVar4) + 1];
                              if (uVar7 < uVar1) {
                                uVar3 = uVar3 + 0xe;
                                *(undefined1 *)((int)__dest + uVar7) =
                                     (&uStack_25)[(uVar5 - uVar7) + 1];
                                if (uVar3 < uVar1) {
                                  *(undefined1 *)((int)__dest + uVar3) =
                                       (&uStack_25)[(uVar5 - uVar3) + 1];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_2 == 0) {
    uVar1 = (uint)*(byte *)(DAT_00028e5c + 0x28c20 + param_3);
    if (uVar1 != 0) {
      memcpy(__dest,local_24,uVar1);
    }
  }
  else if ((param_2 == 2) && (uVar1 = (uint)*(byte *)(DAT_00028e58 + 0x28bf4 + param_3), uVar1 != 0)
          ) {
    memcpy(__dest,local_24,uVar1);
  }
  return;
}



/* ===== FUN_00028e64 @ 00028e64 size=668 ===== */

undefined8 * FUN_00028e64(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *__src;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined1 local_28 [12];
  
  __src = (void *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    puVar4 = (undefined8 *)(uint)*(byte *)(DAT_00029118 + 0x28f00 + (int)param_2);
    if (puVar4 != (undefined8 *)0x0) {
      puVar7 = (undefined1 *)((int)puVar4 - 1);
      if (puVar7 < (undefined1 *)0xf) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)((int)__src + (int)(puVar4 + -2));
        puVar8 = puVar5 + -((uint)puVar4 & 0xf0);
        do {
          puVar5 = puVar5 + -0x10;
          puVar1 = (undefined8 *)VectorTableLookup(unaff_r4,puVar4,2);
          __src = (void *)VectorTableLookup(unaff_r5,puVar4,2);
          *puVar1 = in_d16;
          puVar1[1] = in_d17;
        } while (puVar5 != puVar8);
        puVar6 = (undefined8 *)((uint)puVar4 & 0xfffffff0);
        if (puVar4 == puVar6) {
          return puVar1 + 2;
        }
      }
      param_2 = (undefined8 *)((int)puVar6 + 1);
      local_28[(int)puVar6] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar6));
      if (param_2 < puVar4) {
        puVar1 = (undefined8 *)((int)puVar6 + 2);
        puVar5 = local_28 + 8;
        local_28[(int)param_2] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)param_2));
        param_2 = (undefined8 *)(puVar5 + (int)param_2);
        if (puVar1 < puVar4) {
          param_2 = (undefined8 *)((int)puVar6 + 3);
          local_28[(int)puVar1] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar1));
          if (param_2 < puVar4) {
            puVar1 = (undefined8 *)((int)puVar6 + 4);
            local_28[(int)param_2] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)param_2));
            param_2 = (undefined8 *)(puVar5 + (int)param_2);
            if (puVar1 < puVar4) {
              param_2 = (undefined8 *)((int)puVar6 + 5);
              local_28[(int)puVar1] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar1));
              if (param_2 < puVar4) {
                puVar1 = (undefined8 *)((int)puVar6 + 6);
                local_28[(int)param_2] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)param_2));
                param_2 = (undefined8 *)(puVar5 + (int)param_2);
                if (puVar1 < puVar4) {
                  param_2 = (undefined8 *)((int)puVar6 + 7);
                  local_28[(int)puVar1] = *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar1));
                  if (param_2 < puVar4) {
                    puVar1 = puVar6 + 1;
                    local_28[(int)param_2] =
                         *(undefined1 *)((int)__src + ((int)puVar7 - (int)param_2));
                    param_2 = (undefined8 *)(puVar5 + (int)param_2);
                    if (puVar1 < puVar4) {
                      param_2 = (undefined8 *)((int)puVar6 + 9);
                      local_28[(int)puVar1] =
                           *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar1));
                      if (param_2 < puVar4) {
                        puVar1 = (undefined8 *)((int)puVar6 + 10);
                        local_28[(int)param_2] =
                             *(undefined1 *)((int)__src + ((int)puVar7 - (int)param_2));
                        param_2 = (undefined8 *)(puVar5 + (int)param_2);
                        if (puVar1 < puVar4) {
                          param_2 = (undefined8 *)((int)puVar6 + 0xb);
                          local_28[(int)puVar1] =
                               *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar1));
                          if (param_2 < puVar4) {
                            puVar1 = (undefined8 *)((int)puVar6 + 0xc);
                            local_28[(int)param_2] =
                                 *(undefined1 *)((int)__src + ((int)puVar7 - (int)param_2));
                            param_2 = (undefined8 *)(puVar5 + (int)param_2);
                            if (puVar1 < puVar4) {
                              puVar2 = (undefined8 *)((int)puVar6 + 0xd);
                              local_28[(int)puVar1] =
                                   *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar1));
                              param_2 = puVar2;
                              if (puVar2 < puVar4) {
                                puVar6 = (undefined8 *)((int)puVar6 + 0xe);
                                param_2 = (undefined8 *)(puVar5 + (int)puVar2);
                                local_28[(int)puVar2] =
                                     *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar2));
                                if (puVar6 < puVar4) {
                                  local_28[(int)puVar6] =
                                       *(undefined1 *)((int)__src + ((int)puVar7 - (int)puVar6));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar3 = (uint)*(byte *)(DAT_00029114 + 0x28ee0 + (int)param_2);
    if (uVar3 != 0) {
      param_2 = memcpy(local_28,__src,uVar3);
    }
  }
  else if ((param_1 == 2) &&
          (uVar3 = (uint)*(byte *)(DAT_00029110 + 0x28eb0 + (int)param_2), uVar3 != 0)) {
    param_2 = memcpy(local_28,__src,uVar3);
  }
  return param_2;
}



/* ===== FUN_0002911c @ 0002911c size=672 ===== */

void FUN_0002911c(int param_1,int param_2)

{
  undefined8 *__dest;
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 unaff_r4;
  uint uVar4;
  undefined4 unaff_r5;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 in_d16;
  undefined8 in_d17;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined1 auStack_29 [13];
  
  __dest = (undefined8 *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 1) {
    uVar1 = (uint)*(byte *)(DAT_000293d8 + 0x291b8 + param_2);
    if (uVar1 != 0) {
      uVar5 = uVar1 - 1;
      if (uVar5 < 0xf) {
        uVar3 = 0;
      }
      else {
        puVar6 = (undefined8 *)((uVar1 & 0xf0) + (int)__dest);
        puVar2 = __dest;
        do {
          __dest = (undefined8 *)VectorTableLookup(unaff_r4,puVar2,2);
          uVar1 = VectorTableLookup(unaff_r5,puVar2,2);
          *puVar2 = in_d16;
          puVar2[1] = in_d17;
          puVar2 = puVar2 + 2;
        } while (puVar2 != puVar6);
        uVar3 = uVar1 & 0xfffffff0;
        if (uVar1 == uVar3) {
          return;
        }
      }
      uVar7 = uVar3 + 1;
      *(undefined1 *)((int)__dest + uVar3) = auStack_29[(uVar5 - uVar3) + 1];
      if (uVar7 < uVar1) {
        uVar4 = uVar3 + 2;
        *(undefined1 *)((int)__dest + uVar7) = auStack_29[(uVar5 - uVar7) + 1];
        if (uVar4 < uVar1) {
          uVar7 = uVar3 + 3;
          *(undefined1 *)((int)__dest + uVar4) = auStack_29[(uVar5 - uVar4) + 1];
          if (uVar7 < uVar1) {
            uVar4 = uVar3 + 4;
            *(undefined1 *)((int)__dest + uVar7) = auStack_29[(uVar5 - uVar7) + 1];
            if (uVar4 < uVar1) {
              uVar7 = uVar3 + 5;
              *(undefined1 *)((int)__dest + uVar4) = auStack_29[(uVar5 - uVar4) + 1];
              if (uVar7 < uVar1) {
                uVar4 = uVar3 + 6;
                *(undefined1 *)((int)__dest + uVar7) = auStack_29[(uVar5 - uVar7) + 1];
                if (uVar4 < uVar1) {
                  uVar7 = uVar3 + 7;
                  *(undefined1 *)((int)__dest + uVar4) = auStack_29[(uVar5 - uVar4) + 1];
                  if (uVar7 < uVar1) {
                    uVar4 = uVar3 + 8;
                    *(undefined1 *)((int)__dest + uVar7) = auStack_29[(uVar5 - uVar7) + 1];
                    if (uVar4 < uVar1) {
                      uVar7 = uVar3 + 9;
                      *(undefined1 *)((int)__dest + uVar4) = auStack_29[(uVar5 - uVar4) + 1];
                      if (uVar7 < uVar1) {
                        uVar4 = uVar3 + 10;
                        *(undefined1 *)((int)__dest + uVar7) = auStack_29[(uVar5 - uVar7) + 1];
                        if (uVar4 < uVar1) {
                          uVar7 = uVar3 + 0xb;
                          *(undefined1 *)((int)__dest + uVar4) = auStack_29[(uVar5 - uVar4) + 1];
                          if (uVar7 < uVar1) {
                            uVar4 = uVar3 + 0xc;
                            *(undefined1 *)((int)__dest + uVar7) = auStack_29[(uVar5 - uVar7) + 1];
                            if (uVar4 < uVar1) {
                              uVar7 = uVar3 + 0xd;
                              *(undefined1 *)((int)__dest + uVar4) = auStack_29[(uVar5 - uVar4) + 1]
                              ;
                              if (uVar7 < uVar1) {
                                uVar3 = uVar3 + 0xe;
                                *(undefined1 *)((int)__dest + uVar7) =
                                     auStack_29[(uVar5 - uVar7) + 1];
                                if (uVar3 < uVar1) {
                                  *(undefined1 *)((int)__dest + uVar3) =
                                       auStack_29[(uVar5 - uVar3) + 1];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 0) {
    uVar1 = (uint)*(byte *)(DAT_000293d4 + 0x29198 + param_2);
    if (uVar1 != 0) {
      memcpy(__dest,auStack_29 + 1,uVar1);
    }
  }
  else if ((param_1 == 2) && (uVar1 = (uint)*(byte *)(DAT_000293d0 + 0x2916c + param_2), uVar1 != 0)
          ) {
    memcpy(__dest,auStack_29 + 1,uVar1);
  }
  return;
}



/* ===== FUN_000293dc @ 000293dc size=1508 ===== */

undefined8 FUN_000293dc(int param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  void *__src;
  uint __n;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *unaff_r4;
  undefined1 *puVar10;
  undefined4 unaff_r5;
  undefined1 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined8 in_d18;
  undefined8 uVar15;
  undefined8 in_d19;
  int iStack00000010;
  int iStack00000014;
  undefined8 local_28;
  
  bVar1 = *(byte *)(DAT_000297e8 + 0x29404 + param_2);
  __n = (uint)bVar1;
  __src = (void *)(iStack00000010 + iStack00000014);
  if (param_1 == 0) {
    if (__n == 0) {
      return local_28;
    }
    memcpy(&local_28,__src,__n);
    return local_28;
  }
  if (param_1 != 1) {
    return local_28;
  }
  puVar2 = (undefined1 *)(uint)(bVar1 >> 1);
  if (puVar2 == (undefined1 *)0x0) {
    return local_28;
  }
  puVar13 = puVar2 + -1;
  uVar15 = in_d18;
  if (puVar13 < (undefined1 *)0xf) {
    puVar11 = (undefined1 *)0x0;
LAB_00029528:
    puVar8 = puVar11 + 1;
    *(undefined1 *)((int)&local_28 + (int)puVar11) =
         *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar11));
    unaff_r4 = &stack0xffffffe0 + (int)puVar11;
    if (puVar8 < puVar2) {
      unaff_r4 = puVar11 + 2;
      *(undefined1 *)((int)&local_28 + (int)puVar8) =
           *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar8));
      if (unaff_r4 < puVar2) {
        puVar8 = puVar11 + 3;
        *(undefined1 *)((int)&local_28 + (int)unaff_r4) =
             *(undefined1 *)((int)__src + ((int)puVar13 - (int)unaff_r4));
        unaff_r4 = &stack0xffffffe0 + (int)unaff_r4;
        if (puVar8 < puVar2) {
          unaff_r4 = puVar11 + 4;
          *(undefined1 *)((int)&local_28 + (int)puVar8) =
               *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar8));
          if (unaff_r4 < puVar2) {
            puVar8 = puVar11 + 5;
            *(undefined1 *)((int)&local_28 + (int)unaff_r4) =
                 *(undefined1 *)((int)__src + ((int)puVar13 - (int)unaff_r4));
            unaff_r4 = &stack0xffffffe0 + (int)unaff_r4;
            if (puVar8 < puVar2) {
              unaff_r4 = puVar11 + 6;
              *(undefined1 *)((int)&local_28 + (int)puVar8) =
                   *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar8));
              if (unaff_r4 < puVar2) {
                puVar8 = puVar11 + 7;
                *(undefined1 *)((int)&local_28 + (int)unaff_r4) =
                     *(undefined1 *)((int)__src + ((int)puVar13 - (int)unaff_r4));
                unaff_r4 = &stack0xffffffe0 + (int)unaff_r4;
                if (puVar8 < puVar2) {
                  unaff_r4 = puVar11 + 8;
                  *(undefined1 *)((int)&local_28 + (int)puVar8) =
                       *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar8));
                  if (unaff_r4 < puVar2) {
                    puVar8 = puVar11 + 9;
                    *(undefined1 *)((int)&local_28 + (int)unaff_r4) =
                         *(undefined1 *)((int)__src + ((int)puVar13 - (int)unaff_r4));
                    unaff_r4 = &stack0xffffffe0 + (int)unaff_r4;
                    if (puVar8 < puVar2) {
                      unaff_r4 = puVar11 + 10;
                      *(undefined1 *)((int)&local_28 + (int)puVar8) =
                           *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar8));
                      if (unaff_r4 < puVar2) {
                        puVar8 = puVar11 + 0xb;
                        *(undefined1 *)((int)&local_28 + (int)unaff_r4) =
                             *(undefined1 *)((int)__src + ((int)puVar13 - (int)unaff_r4));
                        unaff_r4 = &stack0xffffffe0 + (int)unaff_r4;
                        if (puVar8 < puVar2) {
                          puVar10 = puVar11 + 0xc;
                          *(undefined1 *)((int)&local_28 + (int)puVar8) =
                               *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar8));
                          unaff_r4 = puVar10;
                          if (puVar10 < puVar2) {
                            puVar8 = puVar11 + 0xd;
                            unaff_r4 = &stack0xffffffe0 + (int)puVar10;
                            *(undefined1 *)((int)&local_28 + (int)puVar10) =
                                 *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar10));
                            if (puVar8 < puVar2) {
                              puVar11 = puVar11 + 0xe;
                              unaff_r4 = puVar13 + -(int)puVar8;
                              if (puVar11 < puVar2) {
                                unaff_r4 = &stack0xffffffe0;
                              }
                              *(undefined1 *)((int)&local_28 + (int)puVar8) =
                                   *(undefined1 *)((int)__src + (int)(puVar13 + -(int)puVar8));
                              if (puVar11 < puVar2) {
                                (unaff_r4 + (int)puVar11)[-8] =
                                     *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar11));
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar12 = (int)puVar2 * 2 + -1;
    if (puVar13 < (undefined1 *)0xf) {
      puVar13 = (undefined1 *)0x0;
      goto LAB_000297ec;
    }
    uVar7 = __n >> 5;
  }
  else {
    puVar11 = (undefined1 *)((int)__src + (int)(puVar2 + -0x10));
    __n = VectorTableLookup(puVar2,unaff_r4,2);
    uVar7 = VectorTableLookup(__src,unaff_r4,2);
    if (bVar1 >> 5 != 1) {
      unaff_r4 = puVar11 + -0x10;
      bVar14 = uVar7 != 2;
      __n = VectorTableLookup(puVar2,unaff_r4,2);
      uVar7 = VectorTableLookup(__src,unaff_r4,2);
      if (bVar14) {
        unaff_r4 = puVar11 + -0x20;
        bVar14 = uVar7 != 3;
        __n = VectorTableLookup(puVar2,unaff_r4,2);
        uVar7 = VectorTableLookup(__src,unaff_r4,2);
        if (bVar14) {
          unaff_r4 = puVar11 + -0x30;
          bVar14 = uVar7 != 4;
          __n = VectorTableLookup(puVar2,unaff_r4,2);
          uVar7 = VectorTableLookup(__src,unaff_r4,2);
          if (bVar14) {
            unaff_r4 = puVar11 + -0x40;
            bVar14 = uVar7 != 5;
            __n = VectorTableLookup(puVar2,unaff_r4,2);
            uVar7 = VectorTableLookup(__src,unaff_r4,2);
            if (bVar14) {
              unaff_r4 = puVar11 + -0x50;
              bVar14 = uVar7 == 7;
              __n = VectorTableLookup(puVar2,unaff_r4,2);
              uVar7 = VectorTableLookup(__src,unaff_r4,2);
              if (bVar14) {
                uVar15 = *(undefined8 *)(puVar11 + -0x60);
                in_d19 = *(undefined8 *)(puVar11 + -0x58);
                puVar2 = (undefined1 *)VectorTableLookup(puVar2,__n,2);
                __src = (void *)VectorTableLookup(unaff_r5,__n,2);
              }
            }
          }
        }
      }
    }
    puVar11 = (undefined1 *)(uVar7 * 0x10);
    local_28 = in_d18;
    if (puVar2 != puVar11) goto LAB_00029528;
    iVar12 = uVar7 * 0x20 + -1;
  }
  puVar3 = (undefined8 *)VectorTableLookup(puVar2,unaff_r4,2);
  iVar9 = VectorTableLookup(__src,unaff_r4,2);
  *puVar3 = uVar15;
  puVar3[1] = in_d19;
  if (uVar7 != 1) {
    puVar6 = puVar3 + 2;
    bVar14 = iVar9 != 2;
    iVar4 = VectorTableLookup(puVar2,puVar6,2);
    iVar9 = VectorTableLookup(__src,puVar6,2);
    *puVar6 = uVar15;
    puVar3[3] = in_d19;
    if (bVar14) {
      puVar3 = (undefined8 *)(iVar4 + 0x20);
      bVar14 = iVar9 != 3;
      iVar5 = VectorTableLookup(puVar2,puVar3,2);
      iVar9 = VectorTableLookup(__src,puVar3,2);
      *puVar3 = uVar15;
      *(undefined8 *)(iVar4 + 0x28) = in_d19;
      if (bVar14) {
        puVar3 = (undefined8 *)(iVar5 + 0x30);
        bVar14 = iVar9 != 4;
        iVar4 = VectorTableLookup(puVar2,puVar3,2);
        iVar9 = VectorTableLookup(__src,puVar3,2);
        *puVar3 = uVar15;
        *(undefined8 *)(iVar5 + 0x38) = in_d19;
        if (bVar14) {
          puVar3 = (undefined8 *)(iVar4 + 0x40);
          bVar14 = iVar9 != 5;
          iVar5 = VectorTableLookup(puVar2,puVar3,2);
          iVar9 = VectorTableLookup(__src,puVar3,2);
          *puVar3 = uVar15;
          *(undefined8 *)(iVar4 + 0x48) = in_d19;
          if (bVar14) {
            puVar3 = (undefined8 *)(iVar5 + 0x50);
            bVar14 = iVar9 == 7;
            VectorTableLookup(puVar2,puVar3,2);
            iVar9 = VectorTableLookup(__src,puVar3,2);
            *puVar3 = uVar15;
            *(undefined8 *)(iVar5 + 0x58) = in_d19;
            if (bVar14) {
              puVar6 = (undefined8 *)VectorTableLookup(puVar2,puVar3,2);
              iVar9 = VectorTableLookup(__src,puVar3,2);
              *puVar6 = uVar15;
              puVar6[1] = in_d19;
            }
          }
        }
      }
    }
  }
  puVar13 = (undefined1 *)(iVar9 * 0x10);
  if (puVar2 == puVar13) {
    return local_28;
  }
LAB_000297ec:
  puVar11 = &stack0xffffffe0 + (int)puVar2;
  puVar8 = puVar13 + 1;
  (puVar11 + (int)puVar13)[-8] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar13));
  if (puVar8 < puVar2) {
    puVar10 = puVar13 + 2;
    (puVar11 + (int)puVar8)[-8] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
    if (puVar10 < puVar2) {
      puVar8 = puVar13 + 3;
      (puVar11 + (int)puVar10)[-8] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar10));
      if (puVar8 < puVar2) {
        puVar10 = puVar13 + 4;
        (puVar11 + (int)puVar8)[-8] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
        if (puVar10 < puVar2) {
          puVar8 = puVar13 + 5;
          (puVar11 + (int)puVar10)[-8] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar10));
          if (puVar8 < puVar2) {
            puVar10 = puVar13 + 6;
            (puVar11 + (int)puVar8)[-8] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
            if (puVar10 < puVar2) {
              puVar8 = puVar13 + 7;
              (puVar11 + (int)puVar10)[-8] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar10));
              if (puVar8 < puVar2) {
                puVar10 = puVar13 + 8;
                (puVar11 + (int)puVar8)[-8] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
                if (puVar10 < puVar2) {
                  puVar8 = puVar13 + 9;
                  (puVar11 + (int)puVar10)[-8] =
                       *(undefined1 *)((int)__src + (iVar12 - (int)puVar10));
                  if (puVar8 < puVar2) {
                    puVar10 = puVar13 + 10;
                    (puVar11 + (int)puVar8)[-8] =
                         *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
                    if (puVar10 < puVar2) {
                      puVar8 = puVar13 + 0xb;
                      (puVar11 + (int)puVar10)[-8] =
                           *(undefined1 *)((int)__src + (iVar12 - (int)puVar10));
                      if (puVar8 < puVar2) {
                        puVar10 = puVar13 + 0xc;
                        (puVar11 + (int)puVar8)[-8] =
                             *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
                        if (puVar10 < puVar2) {
                          puVar8 = puVar13 + 0xd;
                          (puVar11 + (int)puVar10)[-8] =
                               *(undefined1 *)((int)__src + (iVar12 - (int)puVar10));
                          if (puVar8 < puVar2) {
                            puVar13 = puVar13 + 0xe;
                            (puVar11 + (int)puVar8)[-8] =
                                 *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
                            if (puVar13 < puVar2) {
                              (puVar11 + (int)puVar13)[-8] =
                                   *(undefined1 *)((int)__src + (iVar12 - (int)puVar13));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return local_28;
}



/* ===== FUN_000299d8 @ 000299d8 size=1524 ===== */

void FUN_000299d8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  undefined8 in_d18;
  undefined8 in_d19;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined8 auStack_a0 [13];
  undefined1 uStack_31;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar3 = DAT_00029de8;
  uVar2 = DAT_00029de0;
  local_30 = param_1;
  bVar1 = *(byte *)(DAT_00029df0 + 0x29a04 + param_4);
  uVar7 = (uint)bVar1;
  puVar4 = (undefined8 *)(in_stack_00000010 + in_stack_00000014);
  local_2c = param_2;
  if (param_3 == 0) {
    if (uVar7 == 0) {
      return;
    }
    memcpy(puVar4,&local_30,uVar7);
    return;
  }
  if (param_3 != 1) {
    return;
  }
  uVar6 = (uint)(bVar1 >> 1);
  if (uVar6 == 0) {
    return;
  }
  uVar12 = uVar6 - 1;
  if (uVar12 < 0xf) {
    uVar14 = 0;
LAB_00029b30:
    uVar10 = uVar14 + 1;
    *(undefined1 *)((int)puVar4 + uVar14) = (&uStack_31)[(uVar12 - uVar14) + 1];
    if (uVar10 < uVar6) {
      uVar13 = uVar14 + 2;
      *(undefined1 *)((int)puVar4 + uVar10) = (&uStack_31)[(uVar12 - uVar10) + 1];
      if (uVar13 < uVar6) {
        uVar10 = uVar14 + 3;
        *(undefined1 *)((int)puVar4 + uVar13) = (&uStack_31)[(uVar12 - uVar13) + 1];
        if (uVar10 < uVar6) {
          uVar13 = uVar14 + 4;
          *(undefined1 *)((int)puVar4 + uVar10) = (&uStack_31)[(uVar12 - uVar10) + 1];
          if (uVar13 < uVar6) {
            uVar10 = uVar14 + 5;
            *(undefined1 *)((int)puVar4 + uVar13) = (&uStack_31)[(uVar12 - uVar13) + 1];
            if (uVar10 < uVar6) {
              uVar13 = uVar14 + 6;
              *(undefined1 *)((int)puVar4 + uVar10) = (&uStack_31)[(uVar12 - uVar10) + 1];
              if (uVar13 < uVar6) {
                uVar10 = uVar14 + 7;
                *(undefined1 *)((int)puVar4 + uVar13) = (&uStack_31)[(uVar12 - uVar13) + 1];
                if (uVar10 < uVar6) {
                  uVar13 = uVar14 + 8;
                  *(undefined1 *)((int)puVar4 + uVar10) = (&uStack_31)[(uVar12 - uVar10) + 1];
                  if (uVar13 < uVar6) {
                    uVar10 = uVar14 + 9;
                    *(undefined1 *)((int)puVar4 + uVar13) = (&uStack_31)[(uVar12 - uVar13) + 1];
                    if (uVar10 < uVar6) {
                      uVar13 = uVar14 + 10;
                      *(undefined1 *)((int)puVar4 + uVar10) = (&uStack_31)[(uVar12 - uVar10) + 1];
                      if (uVar13 < uVar6) {
                        uVar10 = uVar14 + 0xb;
                        *(undefined1 *)((int)puVar4 + uVar13) = (&uStack_31)[(uVar12 - uVar13) + 1];
                        if (uVar10 < uVar6) {
                          uVar13 = uVar14 + 0xc;
                          *(undefined1 *)((int)puVar4 + uVar10) =
                               (&uStack_31)[(uVar12 - uVar10) + 1];
                          if (uVar13 < uVar6) {
                            uVar10 = uVar14 + 0xd;
                            *(undefined1 *)((int)puVar4 + uVar13) =
                                 (&uStack_31)[(uVar12 - uVar13) + 1];
                            if (uVar10 < uVar6) {
                              uVar14 = uVar14 + 0xe;
                              *(undefined1 *)((int)puVar4 + uVar10) =
                                   (&uStack_31)[(uVar12 - uVar10) + 1];
                              if (uVar14 < uVar6) {
                                *(undefined1 *)((int)puVar4 + uVar14) =
                                     (&uStack_31)[(uVar12 - uVar14) + 1];
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar15 = uVar6 * 2 + -1;
    puVar5 = puVar4;
    if (uVar12 < 0xf) {
      uVar7 = 0;
      goto LAB_00029df4;
    }
    uVar10 = uVar7 >> 5;
  }
  else {
    uVar7 = VectorTableLookup(puVar4,uVar12,2);
    uVar10 = VectorTableLookup(uVar6,uVar12,2);
    *puVar4 = in_d18;
    puVar4[1] = in_d19;
    puVar5 = puVar4;
    if (bVar1 >> 5 != 1) {
      bVar16 = uVar10 != 2;
      uVar7 = VectorTableLookup(puVar4,uVar12,2);
      uVar10 = VectorTableLookup(uVar6,uVar12,2);
      puVar4[2] = in_d18;
      puVar4[3] = in_d19;
      if (bVar16) {
        bVar16 = uVar10 != 3;
        uVar7 = VectorTableLookup(puVar4,uVar12,2);
        uVar10 = VectorTableLookup(uVar6,uVar12,2);
        puVar4[4] = in_d18;
        puVar4[5] = in_d19;
        if (bVar16) {
          bVar16 = uVar10 != 4;
          uVar7 = VectorTableLookup(puVar4,uVar12,2);
          uVar10 = VectorTableLookup(uVar6,uVar12,2);
          puVar4[6] = in_d18;
          puVar4[7] = in_d19;
          if (bVar16) {
            bVar16 = uVar10 != 5;
            uVar7 = VectorTableLookup(puVar4,uVar12,2);
            uVar10 = VectorTableLookup(uVar6,uVar12,2);
            puVar4[8] = in_d18;
            puVar4[9] = in_d19;
            if (bVar16) {
              bVar16 = uVar10 == 7;
              uVar7 = VectorTableLookup(puVar4,uVar12,2);
              uVar10 = VectorTableLookup(uVar6,uVar12,2);
              puVar4[10] = in_d18;
              puVar4[0xb] = in_d19;
              if (bVar16) {
                in_d18 = *(undefined8 *)((int)auStack_a0 + uVar6);
                in_d19 = *(undefined8 *)((int)auStack_a0 + uVar6 + 8);
                puVar5 = (undefined8 *)VectorTableLookup(puVar4,uVar7,2);
                uVar6 = VectorTableLookup(in_stack_00000010,uVar7,2);
                puVar4[0xc] = uVar2;
                puVar4[0xd] = uVar3;
              }
            }
          }
        }
      }
    }
    uVar14 = uVar10 * 0x10;
    puVar4 = puVar5;
    if (uVar6 != uVar14) goto LAB_00029b30;
    iVar15 = uVar10 * 0x20 + -1;
  }
  puVar4 = (undefined8 *)(in_stack_00000010 + in_stack_00000014 + uVar6);
  iVar8 = VectorTableLookup(puVar5,uVar12,2);
  iVar11 = VectorTableLookup(uVar6,uVar12,2);
  *puVar4 = in_d18;
  puVar4[1] = in_d19;
  if (uVar10 != 1) {
    bVar16 = iVar11 != 2;
    iVar9 = VectorTableLookup(puVar5,iVar8 + -0x10,2);
    iVar11 = VectorTableLookup(uVar6,iVar8 + -0x10,2);
    puVar4[2] = in_d18;
    puVar4[3] = in_d19;
    if (bVar16) {
      bVar16 = iVar11 != 3;
      iVar8 = VectorTableLookup(puVar5,iVar9 + -0x20,2);
      iVar11 = VectorTableLookup(uVar6,iVar9 + -0x20,2);
      puVar4[4] = in_d18;
      puVar4[5] = in_d19;
      if (bVar16) {
        bVar16 = iVar11 != 4;
        iVar9 = VectorTableLookup(puVar5,iVar8 + -0x30,2);
        iVar11 = VectorTableLookup(uVar6,iVar8 + -0x30,2);
        puVar4[6] = in_d18;
        puVar4[7] = in_d19;
        if (bVar16) {
          bVar16 = iVar11 != 5;
          iVar8 = VectorTableLookup(puVar5,iVar9 + -0x40,2);
          iVar11 = VectorTableLookup(uVar6,iVar9 + -0x40,2);
          puVar4[8] = in_d18;
          puVar4[9] = in_d19;
          if (bVar16) {
            iVar8 = iVar8 + -0x50;
            bVar16 = iVar11 == 7;
            VectorTableLookup(puVar5,iVar8,2);
            iVar11 = VectorTableLookup(uVar6,iVar8,2);
            puVar4[10] = in_d18;
            puVar4[0xb] = in_d19;
            if (bVar16) {
              VectorTableLookup(puVar5,iVar8,2);
              iVar11 = VectorTableLookup(uVar6,iVar8,2);
              puVar4[0xc] = in_d18;
              puVar4[0xd] = in_d19;
            }
          }
        }
      }
    }
  }
  uVar7 = iVar11 * 0x10;
  if (uVar6 == uVar7) {
    return;
  }
LAB_00029df4:
  uVar12 = uVar7 + 1;
  *(undefined1 *)((int)puVar5 + uVar7 + uVar6) = *(undefined1 *)((int)&local_30 + (iVar15 - uVar7));
  if (uVar12 < uVar6) {
    uVar14 = uVar7 + 2;
    *(undefined1 *)((int)puVar5 + uVar12 + uVar6) =
         *(undefined1 *)((int)&local_30 + (iVar15 - uVar12));
    if (uVar14 < uVar6) {
      uVar12 = uVar7 + 3;
      *(undefined1 *)((int)puVar5 + uVar14 + uVar6) =
           *(undefined1 *)((int)&local_30 + (iVar15 - uVar14));
      if (uVar12 < uVar6) {
        uVar14 = uVar7 + 4;
        *(undefined1 *)((int)puVar5 + uVar12 + uVar6) =
             *(undefined1 *)((int)&local_30 + (iVar15 - uVar12));
        if (uVar14 < uVar6) {
          uVar12 = uVar7 + 5;
          *(undefined1 *)((int)puVar5 + uVar14 + uVar6) =
               *(undefined1 *)((int)&local_30 + (iVar15 - uVar14));
          if (uVar12 < uVar6) {
            uVar14 = uVar7 + 6;
            *(undefined1 *)((int)puVar5 + uVar12 + uVar6) =
                 *(undefined1 *)((int)&local_30 + (iVar15 - uVar12));
            if (uVar14 < uVar6) {
              uVar12 = uVar7 + 7;
              *(undefined1 *)((int)puVar5 + uVar14 + uVar6) =
                   *(undefined1 *)((int)&local_30 + (iVar15 - uVar14));
              if (uVar12 < uVar6) {
                uVar14 = uVar7 + 8;
                *(undefined1 *)((int)puVar5 + uVar12 + uVar6) =
                     *(undefined1 *)((int)&local_30 + (iVar15 - uVar12));
                if (uVar14 < uVar6) {
                  uVar12 = uVar7 + 9;
                  *(undefined1 *)((int)puVar5 + uVar14 + uVar6) =
                       *(undefined1 *)((int)&local_30 + (iVar15 - uVar14));
                  if (uVar12 < uVar6) {
                    uVar14 = uVar7 + 10;
                    *(undefined1 *)((int)puVar5 + uVar12 + uVar6) =
                         *(undefined1 *)((int)&local_30 + (iVar15 - uVar12));
                    if (uVar14 < uVar6) {
                      uVar12 = uVar7 + 0xb;
                      *(undefined1 *)((int)puVar5 + uVar14 + uVar6) =
                           *(undefined1 *)((int)&local_30 + (iVar15 - uVar14));
                      if (uVar12 < uVar6) {
                        uVar14 = uVar7 + 0xc;
                        *(undefined1 *)((int)puVar5 + uVar12 + uVar6) =
                             *(undefined1 *)((int)&local_30 + (iVar15 - uVar12));
                        if (uVar14 < uVar6) {
                          uVar12 = uVar7 + 0xd;
                          *(undefined1 *)((int)puVar5 + uVar14 + uVar6) =
                               *(undefined1 *)((int)&local_30 + (iVar15 - uVar14));
                          if (uVar12 < uVar6) {
                            uVar7 = uVar7 + 0xe;
                            *(undefined1 *)((int)puVar5 + uVar12 + uVar6) =
                                 *(undefined1 *)((int)&local_30 + (iVar15 - uVar12));
                            if (uVar7 < uVar6) {
                              *(undefined1 *)((int)puVar5 + uVar7 + uVar6) =
                                   *(undefined1 *)((int)&local_30 + (iVar15 - uVar7));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_00029fe0 @ 00029fe0 size=1508 ===== */

undefined4 FUN_00029fe0(int param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  void *__src;
  uint __n;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *unaff_r4;
  undefined1 *puVar10;
  undefined4 unaff_r5;
  undefined1 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined8 in_d18;
  undefined8 uVar15;
  undefined8 in_d19;
  int iStack00000010;
  int iStack00000014;
  undefined8 local_30;
  undefined1 local_28 [8];
  
  bVar1 = *(byte *)(DAT_0002a3e8 + 0x2a008 + param_2);
  __n = (uint)bVar1;
  __src = (void *)(iStack00000010 + iStack00000014);
  if (param_1 == 0) {
    if (__n == 0) {
      return (undefined4)local_30;
    }
    memcpy(&local_30,__src,__n);
    return (undefined4)local_30;
  }
  if (param_1 != 1) {
    return (undefined4)local_30;
  }
  puVar2 = (undefined1 *)(uint)(bVar1 >> 1);
  if (puVar2 == (undefined1 *)0x0) {
    return (undefined4)local_30;
  }
  puVar13 = puVar2 + -1;
  uVar15 = in_d18;
  if (puVar13 < (undefined1 *)0xf) {
    puVar11 = (undefined1 *)0x0;
LAB_0002a12c:
    puVar8 = puVar11 + 1;
    *(undefined1 *)((int)&local_30 + (int)puVar11) =
         *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar11));
    unaff_r4 = &stack0xffffffe0 + (int)puVar11;
    if (puVar8 < puVar2) {
      unaff_r4 = puVar11 + 2;
      *(undefined1 *)((int)&local_30 + (int)puVar8) =
           *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar8));
      if (unaff_r4 < puVar2) {
        puVar8 = puVar11 + 3;
        *(undefined1 *)((int)&local_30 + (int)unaff_r4) =
             *(undefined1 *)((int)__src + ((int)puVar13 - (int)unaff_r4));
        unaff_r4 = &stack0xffffffe0 + (int)unaff_r4;
        if (puVar8 < puVar2) {
          unaff_r4 = puVar11 + 4;
          *(undefined1 *)((int)&local_30 + (int)puVar8) =
               *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar8));
          if (unaff_r4 < puVar2) {
            puVar8 = puVar11 + 5;
            *(undefined1 *)((int)&local_30 + (int)unaff_r4) =
                 *(undefined1 *)((int)__src + ((int)puVar13 - (int)unaff_r4));
            unaff_r4 = &stack0xffffffe0 + (int)unaff_r4;
            if (puVar8 < puVar2) {
              unaff_r4 = puVar11 + 6;
              *(undefined1 *)((int)&local_30 + (int)puVar8) =
                   *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar8));
              if (unaff_r4 < puVar2) {
                puVar8 = puVar11 + 7;
                *(undefined1 *)((int)&local_30 + (int)unaff_r4) =
                     *(undefined1 *)((int)__src + ((int)puVar13 - (int)unaff_r4));
                unaff_r4 = &stack0xffffffe0 + (int)unaff_r4;
                if (puVar8 < puVar2) {
                  unaff_r4 = puVar11 + 8;
                  *(undefined1 *)((int)&local_30 + (int)puVar8) =
                       *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar8));
                  if (unaff_r4 < puVar2) {
                    puVar8 = puVar11 + 9;
                    *(undefined1 *)((int)&local_30 + (int)unaff_r4) =
                         *(undefined1 *)((int)__src + ((int)puVar13 - (int)unaff_r4));
                    unaff_r4 = &stack0xffffffe0 + (int)unaff_r4;
                    if (puVar8 < puVar2) {
                      unaff_r4 = puVar11 + 10;
                      *(undefined1 *)((int)&local_30 + (int)puVar8) =
                           *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar8));
                      if (unaff_r4 < puVar2) {
                        puVar8 = puVar11 + 0xb;
                        *(undefined1 *)((int)&local_30 + (int)unaff_r4) =
                             *(undefined1 *)((int)__src + ((int)puVar13 - (int)unaff_r4));
                        unaff_r4 = &stack0xffffffe0 + (int)unaff_r4;
                        if (puVar8 < puVar2) {
                          puVar10 = puVar11 + 0xc;
                          *(undefined1 *)((int)&local_30 + (int)puVar8) =
                               *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar8));
                          unaff_r4 = puVar10;
                          if (puVar10 < puVar2) {
                            puVar8 = puVar11 + 0xd;
                            unaff_r4 = &stack0xffffffe0 + (int)puVar10;
                            *(undefined1 *)((int)&local_30 + (int)puVar10) =
                                 *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar10));
                            if (puVar8 < puVar2) {
                              puVar11 = puVar11 + 0xe;
                              unaff_r4 = puVar13 + -(int)puVar8;
                              if (puVar11 < puVar2) {
                                unaff_r4 = &stack0xffffffe0;
                              }
                              *(undefined1 *)((int)&local_30 + (int)puVar8) =
                                   *(undefined1 *)((int)__src + (int)(puVar13 + -(int)puVar8));
                              if (puVar11 < puVar2) {
                                (unaff_r4 + (int)puVar11)[-0x10] =
                                     *(undefined1 *)((int)__src + ((int)puVar13 - (int)puVar11));
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar12 = (int)puVar2 * 2 + -1;
    if (puVar13 < (undefined1 *)0xf) {
      puVar13 = (undefined1 *)0x0;
      goto LAB_0002a3ec;
    }
    uVar7 = __n >> 5;
  }
  else {
    puVar11 = (undefined1 *)((int)__src + (int)(puVar2 + -0x10));
    __n = VectorTableLookup(puVar2,unaff_r4,2);
    uVar7 = VectorTableLookup(__src,unaff_r4,2);
    if (bVar1 >> 5 != 1) {
      unaff_r4 = puVar11 + -0x10;
      bVar14 = uVar7 != 2;
      __n = VectorTableLookup(puVar2,unaff_r4,2);
      uVar7 = VectorTableLookup(__src,unaff_r4,2);
      if (bVar14) {
        unaff_r4 = puVar11 + -0x20;
        bVar14 = uVar7 != 3;
        __n = VectorTableLookup(puVar2,unaff_r4,2);
        uVar7 = VectorTableLookup(__src,unaff_r4,2);
        if (bVar14) {
          unaff_r4 = puVar11 + -0x30;
          bVar14 = uVar7 != 4;
          __n = VectorTableLookup(puVar2,unaff_r4,2);
          uVar7 = VectorTableLookup(__src,unaff_r4,2);
          if (bVar14) {
            unaff_r4 = puVar11 + -0x40;
            bVar14 = uVar7 != 5;
            __n = VectorTableLookup(puVar2,unaff_r4,2);
            uVar7 = VectorTableLookup(__src,unaff_r4,2);
            if (bVar14) {
              unaff_r4 = puVar11 + -0x50;
              bVar14 = uVar7 == 7;
              __n = VectorTableLookup(puVar2,unaff_r4,2);
              uVar7 = VectorTableLookup(__src,unaff_r4,2);
              if (bVar14) {
                uVar15 = *(undefined8 *)(puVar11 + -0x60);
                in_d19 = *(undefined8 *)(puVar11 + -0x58);
                puVar2 = (undefined1 *)VectorTableLookup(puVar2,__n,2);
                __src = (void *)VectorTableLookup(unaff_r5,__n,2);
              }
            }
          }
        }
      }
    }
    puVar11 = (undefined1 *)(uVar7 * 0x10);
    local_30 = in_d18;
    if (puVar2 != puVar11) goto LAB_0002a12c;
    iVar12 = uVar7 * 0x20 + -1;
  }
  puVar3 = (undefined8 *)VectorTableLookup(puVar2,unaff_r4,2);
  iVar9 = VectorTableLookup(__src,unaff_r4,2);
  *puVar3 = uVar15;
  puVar3[1] = in_d19;
  if (uVar7 != 1) {
    puVar6 = puVar3 + 2;
    bVar14 = iVar9 != 2;
    iVar4 = VectorTableLookup(puVar2,puVar6,2);
    iVar9 = VectorTableLookup(__src,puVar6,2);
    *puVar6 = uVar15;
    puVar3[3] = in_d19;
    if (bVar14) {
      puVar3 = (undefined8 *)(iVar4 + 0x20);
      bVar14 = iVar9 != 3;
      iVar5 = VectorTableLookup(puVar2,puVar3,2);
      iVar9 = VectorTableLookup(__src,puVar3,2);
      *puVar3 = uVar15;
      *(undefined8 *)(iVar4 + 0x28) = in_d19;
      if (bVar14) {
        puVar3 = (undefined8 *)(iVar5 + 0x30);
        bVar14 = iVar9 != 4;
        iVar4 = VectorTableLookup(puVar2,puVar3,2);
        iVar9 = VectorTableLookup(__src,puVar3,2);
        *puVar3 = uVar15;
        *(undefined8 *)(iVar5 + 0x38) = in_d19;
        if (bVar14) {
          puVar3 = (undefined8 *)(iVar4 + 0x40);
          bVar14 = iVar9 != 5;
          iVar5 = VectorTableLookup(puVar2,puVar3,2);
          iVar9 = VectorTableLookup(__src,puVar3,2);
          *puVar3 = uVar15;
          *(undefined8 *)(iVar4 + 0x48) = in_d19;
          if (bVar14) {
            puVar3 = (undefined8 *)(iVar5 + 0x50);
            bVar14 = iVar9 == 7;
            VectorTableLookup(puVar2,puVar3,2);
            iVar9 = VectorTableLookup(__src,puVar3,2);
            *puVar3 = uVar15;
            *(undefined8 *)(iVar5 + 0x58) = in_d19;
            if (bVar14) {
              puVar6 = (undefined8 *)VectorTableLookup(puVar2,puVar3,2);
              iVar9 = VectorTableLookup(__src,puVar3,2);
              *puVar6 = uVar15;
              puVar6[1] = in_d19;
            }
          }
        }
      }
    }
  }
  puVar13 = (undefined1 *)(iVar9 * 0x10);
  if (puVar2 == puVar13) {
    return (undefined4)local_30;
  }
LAB_0002a3ec:
  puVar11 = &stack0xffffffe0 + (int)puVar2;
  puVar8 = puVar13 + 1;
  (puVar11 + (int)puVar13)[-0x10] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar13));
  if (puVar8 < puVar2) {
    puVar10 = puVar13 + 2;
    (puVar11 + (int)puVar8)[-0x10] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
    if (puVar10 < puVar2) {
      puVar8 = puVar13 + 3;
      (puVar11 + (int)puVar10)[-0x10] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar10));
      if (puVar8 < puVar2) {
        puVar10 = puVar13 + 4;
        (puVar11 + (int)puVar8)[-0x10] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
        if (puVar10 < puVar2) {
          puVar8 = puVar13 + 5;
          (puVar11 + (int)puVar10)[-0x10] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar10));
          if (puVar8 < puVar2) {
            puVar10 = puVar13 + 6;
            (puVar11 + (int)puVar8)[-0x10] = *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
            if (puVar10 < puVar2) {
              puVar8 = puVar13 + 7;
              (puVar11 + (int)puVar10)[-0x10] =
                   *(undefined1 *)((int)__src + (iVar12 - (int)puVar10));
              if (puVar8 < puVar2) {
                puVar10 = puVar13 + 8;
                (puVar11 + (int)puVar8)[-0x10] =
                     *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
                if (puVar10 < puVar2) {
                  puVar8 = puVar13 + 9;
                  (puVar11 + (int)puVar10)[-0x10] =
                       *(undefined1 *)((int)__src + (iVar12 - (int)puVar10));
                  if (puVar8 < puVar2) {
                    puVar10 = puVar13 + 10;
                    (puVar11 + (int)puVar8)[-0x10] =
                         *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
                    if (puVar10 < puVar2) {
                      puVar8 = puVar13 + 0xb;
                      (puVar11 + (int)puVar10)[-0x10] =
                           *(undefined1 *)((int)__src + (iVar12 - (int)puVar10));
                      if (puVar8 < puVar2) {
                        puVar10 = puVar13 + 0xc;
                        (puVar11 + (int)puVar8)[-0x10] =
                             *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
                        if (puVar10 < puVar2) {
                          puVar8 = puVar13 + 0xd;
                          (puVar11 + (int)puVar10)[-0x10] =
                               *(undefined1 *)((int)__src + (iVar12 - (int)puVar10));
                          if (puVar8 < puVar2) {
                            puVar13 = puVar13 + 0xe;
                            (puVar11 + (int)puVar8)[-0x10] =
                                 *(undefined1 *)((int)__src + (iVar12 - (int)puVar8));
                            if (puVar13 < puVar2) {
                              (puVar11 + (int)puVar13)[-0x10] =
                                   *(undefined1 *)((int)__src + (iVar12 - (int)puVar13));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (undefined4)local_30;
}



/* ===== FUN_0002a5d8 @ 0002a5d8 size=1524 ===== */

void FUN_0002a5d8(int param_1,int param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  undefined8 in_d18;
  undefined8 in_d19;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined8 auStack_a8 [13];
  undefined1 auStack_39 [17];
  
  uVar3 = DAT_0002a9e8;
  uVar2 = DAT_0002a9e0;
  bVar1 = *(byte *)(DAT_0002a9f0 + 0x2a604 + param_2);
  uVar7 = (uint)bVar1;
  puVar4 = (undefined8 *)(in_stack_00000010 + in_stack_00000014);
  if (param_1 == 0) {
    if (uVar7 == 0) {
      return;
    }
    memcpy(puVar4,auStack_39 + 1,uVar7);
    return;
  }
  if (param_1 != 1) {
    return;
  }
  uVar6 = (uint)(bVar1 >> 1);
  if (uVar6 == 0) {
    return;
  }
  uVar12 = uVar6 - 1;
  if (uVar12 < 0xf) {
    uVar14 = 0;
LAB_0002a730:
    uVar10 = uVar14 + 1;
    *(undefined1 *)((int)puVar4 + uVar14) = auStack_39[(uVar12 - uVar14) + 1];
    if (uVar10 < uVar6) {
      uVar13 = uVar14 + 2;
      *(undefined1 *)((int)puVar4 + uVar10) = auStack_39[(uVar12 - uVar10) + 1];
      if (uVar13 < uVar6) {
        uVar10 = uVar14 + 3;
        *(undefined1 *)((int)puVar4 + uVar13) = auStack_39[(uVar12 - uVar13) + 1];
        if (uVar10 < uVar6) {
          uVar13 = uVar14 + 4;
          *(undefined1 *)((int)puVar4 + uVar10) = auStack_39[(uVar12 - uVar10) + 1];
          if (uVar13 < uVar6) {
            uVar10 = uVar14 + 5;
            *(undefined1 *)((int)puVar4 + uVar13) = auStack_39[(uVar12 - uVar13) + 1];
            if (uVar10 < uVar6) {
              uVar13 = uVar14 + 6;
              *(undefined1 *)((int)puVar4 + uVar10) = auStack_39[(uVar12 - uVar10) + 1];
              if (uVar13 < uVar6) {
                uVar10 = uVar14 + 7;
                *(undefined1 *)((int)puVar4 + uVar13) = auStack_39[(uVar12 - uVar13) + 1];
                if (uVar10 < uVar6) {
                  uVar13 = uVar14 + 8;
                  *(undefined1 *)((int)puVar4 + uVar10) = auStack_39[(uVar12 - uVar10) + 1];
                  if (uVar13 < uVar6) {
                    uVar10 = uVar14 + 9;
                    *(undefined1 *)((int)puVar4 + uVar13) = auStack_39[(uVar12 - uVar13) + 1];
                    if (uVar10 < uVar6) {
                      uVar13 = uVar14 + 10;
                      *(undefined1 *)((int)puVar4 + uVar10) = auStack_39[(uVar12 - uVar10) + 1];
                      if (uVar13 < uVar6) {
                        uVar10 = uVar14 + 0xb;
                        *(undefined1 *)((int)puVar4 + uVar13) = auStack_39[(uVar12 - uVar13) + 1];
                        if (uVar10 < uVar6) {
                          uVar13 = uVar14 + 0xc;
                          *(undefined1 *)((int)puVar4 + uVar10) = auStack_39[(uVar12 - uVar10) + 1];
                          if (uVar13 < uVar6) {
                            uVar10 = uVar14 + 0xd;
                            *(undefined1 *)((int)puVar4 + uVar13) =
                                 auStack_39[(uVar12 - uVar13) + 1];
                            if (uVar10 < uVar6) {
                              uVar14 = uVar14 + 0xe;
                              *(undefined1 *)((int)puVar4 + uVar10) =
                                   auStack_39[(uVar12 - uVar10) + 1];
                              if (uVar14 < uVar6) {
                                *(undefined1 *)((int)puVar4 + uVar14) =
                                     auStack_39[(uVar12 - uVar14) + 1];
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar15 = uVar6 * 2 + -1;
    puVar5 = puVar4;
    if (uVar12 < 0xf) {
      uVar7 = 0;
      goto LAB_0002a9f4;
    }
    uVar10 = uVar7 >> 5;
  }
  else {
    uVar7 = VectorTableLookup(puVar4,uVar12,2);
    uVar10 = VectorTableLookup(uVar6,uVar12,2);
    *puVar4 = in_d18;
    puVar4[1] = in_d19;
    puVar5 = puVar4;
    if (bVar1 >> 5 != 1) {
      bVar16 = uVar10 != 2;
      uVar7 = VectorTableLookup(puVar4,uVar12,2);
      uVar10 = VectorTableLookup(uVar6,uVar12,2);
      puVar4[2] = in_d18;
      puVar4[3] = in_d19;
      if (bVar16) {
        bVar16 = uVar10 != 3;
        uVar7 = VectorTableLookup(puVar4,uVar12,2);
        uVar10 = VectorTableLookup(uVar6,uVar12,2);
        puVar4[4] = in_d18;
        puVar4[5] = in_d19;
        if (bVar16) {
          bVar16 = uVar10 != 4;
          uVar7 = VectorTableLookup(puVar4,uVar12,2);
          uVar10 = VectorTableLookup(uVar6,uVar12,2);
          puVar4[6] = in_d18;
          puVar4[7] = in_d19;
          if (bVar16) {
            bVar16 = uVar10 != 5;
            uVar7 = VectorTableLookup(puVar4,uVar12,2);
            uVar10 = VectorTableLookup(uVar6,uVar12,2);
            puVar4[8] = in_d18;
            puVar4[9] = in_d19;
            if (bVar16) {
              bVar16 = uVar10 == 7;
              uVar7 = VectorTableLookup(puVar4,uVar12,2);
              uVar10 = VectorTableLookup(uVar6,uVar12,2);
              puVar4[10] = in_d18;
              puVar4[0xb] = in_d19;
              if (bVar16) {
                in_d18 = *(undefined8 *)((int)auStack_a8 + uVar6);
                in_d19 = *(undefined8 *)((int)auStack_a8 + uVar6 + 8);
                puVar5 = (undefined8 *)VectorTableLookup(puVar4,uVar7,2);
                uVar6 = VectorTableLookup(in_stack_00000010,uVar7,2);
                puVar4[0xc] = uVar2;
                puVar4[0xd] = uVar3;
              }
            }
          }
        }
      }
    }
    uVar14 = uVar10 * 0x10;
    puVar4 = puVar5;
    if (uVar6 != uVar14) goto LAB_0002a730;
    iVar15 = uVar10 * 0x20 + -1;
  }
  puVar4 = (undefined8 *)(in_stack_00000010 + in_stack_00000014 + uVar6);
  iVar8 = VectorTableLookup(puVar5,uVar12,2);
  iVar11 = VectorTableLookup(uVar6,uVar12,2);
  *puVar4 = in_d18;
  puVar4[1] = in_d19;
  if (uVar10 != 1) {
    bVar16 = iVar11 != 2;
    iVar9 = VectorTableLookup(puVar5,iVar8 + -0x10,2);
    iVar11 = VectorTableLookup(uVar6,iVar8 + -0x10,2);
    puVar4[2] = in_d18;
    puVar4[3] = in_d19;
    if (bVar16) {
      bVar16 = iVar11 != 3;
      iVar8 = VectorTableLookup(puVar5,iVar9 + -0x20,2);
      iVar11 = VectorTableLookup(uVar6,iVar9 + -0x20,2);
      puVar4[4] = in_d18;
      puVar4[5] = in_d19;
      if (bVar16) {
        bVar16 = iVar11 != 4;
        iVar9 = VectorTableLookup(puVar5,iVar8 + -0x30,2);
        iVar11 = VectorTableLookup(uVar6,iVar8 + -0x30,2);
        puVar4[6] = in_d18;
        puVar4[7] = in_d19;
        if (bVar16) {
          bVar16 = iVar11 != 5;
          iVar8 = VectorTableLookup(puVar5,iVar9 + -0x40,2);
          iVar11 = VectorTableLookup(uVar6,iVar9 + -0x40,2);
          puVar4[8] = in_d18;
          puVar4[9] = in_d19;
          if (bVar16) {
            iVar8 = iVar8 + -0x50;
            bVar16 = iVar11 == 7;
            VectorTableLookup(puVar5,iVar8,2);
            iVar11 = VectorTableLookup(uVar6,iVar8,2);
            puVar4[10] = in_d18;
            puVar4[0xb] = in_d19;
            if (bVar16) {
              VectorTableLookup(puVar5,iVar8,2);
              iVar11 = VectorTableLookup(uVar6,iVar8,2);
              puVar4[0xc] = in_d18;
              puVar4[0xd] = in_d19;
            }
          }
        }
      }
    }
  }
  uVar7 = iVar11 * 0x10;
  if (uVar6 == uVar7) {
    return;
  }
LAB_0002a9f4:
  uVar12 = uVar7 + 1;
  *(undefined1 *)((int)puVar5 + uVar7 + uVar6) = auStack_39[(iVar15 - uVar7) + 1];
  if (uVar12 < uVar6) {
    uVar14 = uVar7 + 2;
    *(undefined1 *)((int)puVar5 + uVar12 + uVar6) = auStack_39[(iVar15 - uVar12) + 1];
    if (uVar14 < uVar6) {
      uVar12 = uVar7 + 3;
      *(undefined1 *)((int)puVar5 + uVar14 + uVar6) = auStack_39[(iVar15 - uVar14) + 1];
      if (uVar12 < uVar6) {
        uVar14 = uVar7 + 4;
        *(undefined1 *)((int)puVar5 + uVar12 + uVar6) = auStack_39[(iVar15 - uVar12) + 1];
        if (uVar14 < uVar6) {
          uVar12 = uVar7 + 5;
          *(undefined1 *)((int)puVar5 + uVar14 + uVar6) = auStack_39[(iVar15 - uVar14) + 1];
          if (uVar12 < uVar6) {
            uVar14 = uVar7 + 6;
            *(undefined1 *)((int)puVar5 + uVar12 + uVar6) = auStack_39[(iVar15 - uVar12) + 1];
            if (uVar14 < uVar6) {
              uVar12 = uVar7 + 7;
              *(undefined1 *)((int)puVar5 + uVar14 + uVar6) = auStack_39[(iVar15 - uVar14) + 1];
              if (uVar12 < uVar6) {
                uVar14 = uVar7 + 8;
                *(undefined1 *)((int)puVar5 + uVar12 + uVar6) = auStack_39[(iVar15 - uVar12) + 1];
                if (uVar14 < uVar6) {
                  uVar12 = uVar7 + 9;
                  *(undefined1 *)((int)puVar5 + uVar14 + uVar6) = auStack_39[(iVar15 - uVar14) + 1];
                  if (uVar12 < uVar6) {
                    uVar14 = uVar7 + 10;
                    *(undefined1 *)((int)puVar5 + uVar12 + uVar6) =
                         auStack_39[(iVar15 - uVar12) + 1];
                    if (uVar14 < uVar6) {
                      uVar12 = uVar7 + 0xb;
                      *(undefined1 *)((int)puVar5 + uVar14 + uVar6) =
                           auStack_39[(iVar15 - uVar14) + 1];
                      if (uVar12 < uVar6) {
                        uVar14 = uVar7 + 0xc;
                        *(undefined1 *)((int)puVar5 + uVar12 + uVar6) =
                             auStack_39[(iVar15 - uVar12) + 1];
                        if (uVar14 < uVar6) {
                          uVar12 = uVar7 + 0xd;
                          *(undefined1 *)((int)puVar5 + uVar14 + uVar6) =
                               auStack_39[(iVar15 - uVar14) + 1];
                          if (uVar12 < uVar6) {
                            uVar7 = uVar7 + 0xe;
                            *(undefined1 *)((int)puVar5 + uVar12 + uVar6) =
                                 auStack_39[(iVar15 - uVar12) + 1];
                            if (uVar7 < uVar6) {
                              *(undefined1 *)((int)puVar5 + uVar7 + uVar6) =
                                   auStack_39[(iVar15 - uVar7) + 1];
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== FUN_0002ac14 @ 0002ac14 size=552 ===== */

undefined4
FUN_0002ac14(uint param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *in_stack_0000001c;
  uint auStack_10 [4];
  
  auStack_10[0] = param_1;
  auStack_10[1] = param_2;
  auStack_10[2] = param_3;
  auStack_10[3] = param_4;
  if (param_3 != 0) {
    if (param_3 != 1) {
      return 0;
    }
    if (param_4 == 0) {
      return 0;
    }
    if (*in_stack_0000001c + 1 < param_5) {
      *in_stack_0000001c = *in_stack_0000001c + 1;
      return 1;
    }
    if (1 < param_4) {
      puVar5 = in_stack_0000001c + 1;
      uVar1 = in_stack_0000001c[1] + 1;
      iVar3 = 1;
      if (param_6 <= uVar1) {
        if (param_4 == 2) {
          return 0;
        }
        puVar5 = in_stack_0000001c + 2;
        uVar1 = in_stack_0000001c[2] + 1;
        if (uVar1 < param_7) {
          iVar3 = 2;
        }
        else {
          if (param_4 == 3) {
            return 0;
          }
          puVar5 = in_stack_0000001c + 3;
          uVar1 = in_stack_0000001c[3] + 1;
          if (param_8 <= uVar1) {
            return 0;
          }
          iVar3 = 3;
        }
      }
      *puVar5 = uVar1;
      memset(in_stack_0000001c,0,iVar3 << 2);
      return 1;
    }
    return 0;
  }
  uVar1 = param_4 - 1;
  if (param_4 == 0) {
    return 0;
  }
  if (in_stack_0000001c[uVar1] + 1 < auStack_10[param_4 + 3]) {
    in_stack_0000001c[uVar1] = in_stack_0000001c[uVar1] + 1;
    return 1;
  }
  uVar4 = param_4 - 2;
  if (param_4 < 2) {
    return 0;
  }
  uVar2 = in_stack_0000001c[uVar4] + 1;
  if (uVar2 < auStack_10[param_4 + 2]) {
LAB_0002ae34:
    in_stack_0000001c[uVar4] = uVar2;
  }
  else {
    uVar1 = param_4 - 3;
    if (param_4 < 3) {
      return 0;
    }
    uVar6 = in_stack_0000001c[uVar1] + 1;
    uVar2 = uVar1;
    if (auStack_10[param_4 + 1] <= uVar6) {
      uVar4 = param_4 - 4;
      if (param_4 < 4) {
        return 0;
      }
      uVar2 = in_stack_0000001c[uVar4] + 1;
      if (uVar2 < auStack_10[param_4]) goto LAB_0002ae34;
      uVar2 = param_4 - 5;
      if (param_4 < 5) {
        return 0;
      }
      uVar6 = in_stack_0000001c[uVar2] + 1;
      if ((&param_5)[uVar2] <= uVar6) {
        return 0;
      }
    }
    uVar1 = uVar4;
    in_stack_0000001c[uVar2] = uVar6;
    if (param_4 <= uVar1) {
      return 1;
    }
  }
  memset(in_stack_0000001c + uVar1,0,(param_4 - uVar1) * 4);
  return 1;
}



/* ===== FUN_0002ae3c @ 0002ae3c size=1540 ===== */

undefined4 FUN_0002ae3c(int param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *__format;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_270 [3];
  int local_264;
  undefined4 local_260;
  int local_25c;
  int local_258;
  undefined4 local_254;
  int local_250;
  int local_24c;
  undefined4 local_248;
  char *local_244;
  int local_240;
  undefined4 local_23c;
  char *local_238;
  int local_234;
  undefined4 local_230;
  int local_22c;
  int local_228;
  undefined4 local_224;
  int local_220;
  char *local_218;
  int local_214;
  undefined4 local_210;
  char *local_20c;
  undefined1 *local_208;
  int local_204;
  char local_1fc [100];
  char local_198 [100];
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined2 uStack_128;
  undefined2 uStack_126;
  undefined2 local_124;
  undefined2 uStack_122;
  undefined2 uStack_120;
  undefined2 uStack_11e;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  
  local_204 = DAT_0002b440 + 0x2ae64;
  local_210 = param_4;
  local_20c = param_3;
  if (param_1 == 0) {
    local_220 = DAT_0002b484 + 0x2b2e8;
    local_270[0] = DAT_0002b488 + 0x2b2f0;
    local_22c = DAT_0002b48c + 0x2b2fc;
    local_250 = DAT_0002b490 + 0x2b328;
    local_270[2] = DAT_0002b494 + 0x2b32c;
    local_230 = 0xe;
    local_270[1] = 0x14;
    local_260 = 8;
    local_238 = (char *)(DAT_0002b498 + 0x2b358);
    local_244 = (char *)(DAT_0002b49c + 0x2b364);
    local_25c = DAT_0002b4a0 + 0x2b36c;
    local_224 = 0x10;
    local_248 = 0x2c;
    local_23c = 0x16;
    local_254 = 6;
    local_264 = local_270[0];
    local_258 = local_270[0];
    local_24c = local_270[0];
    local_240 = local_270[0];
    local_234 = local_270[0];
    local_228 = local_270[0];
    sprintf((char *)&local_134,(char *)(DAT_0002b4a8 + 0x2b394),4,DAT_0002b4a4 + 0x2b374);
    strcat(local_20c,(char *)&local_134);
    return 0;
  }
  iVar5 = *(int *)(param_2 + 0x140);
  if (0 < iVar5) {
    piVar6 = *(int **)(param_2 + 0x144);
    switch(*(undefined4 *)(*piVar6 * 0x1bc + param_1 + 0x100)) {
    case 0:
LAB_0002aebc:
      memset(local_1fc,0,100);
      if (0 < iVar5) {
        piVar6 = *(int **)(param_2 + 0x144);
        local_214 = DAT_0002b444 + 0x2aee8;
        goto LAB_0002aee8;
      }
      iVar3 = *(int *)(param_2 + 0x148);
      local_214 = DAT_0002b45c + 0x2b208;
      goto LAB_0002b208;
    case 1:
      local_214 = DAT_0002b474 + 0x2b284;
      break;
    case 2:
      local_214 = DAT_0002b478 + 0x2b294;
      break;
    case 3:
      local_214 = DAT_0002b460 + 0x2b220;
      break;
    case 4:
      local_214 = DAT_0002b47c + 0x2b2a4;
      break;
    case 5:
      local_214 = DAT_0002b464 + 0x2b244;
      break;
    case 6:
      local_214 = DAT_0002b468 + 0x2b254;
      break;
    case 7:
      local_214 = DAT_0002b46c + 0x2b264;
      break;
    case 8:
      local_214 = DAT_0002b470 + 0x2b274;
      break;
    default:
      local_214 = DAT_0002b4c8 + 0x2b42c;
    }
    memset(local_1fc,0,100);
LAB_0002aee8:
    uVar7 = 0;
    uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar5 = 0;
    __format = (char *)(DAT_0002b448 + 0x2af04);
    local_208 = (undefined1 *)local_204;
    do {
      uStack_128 = (undefined2)uVar10;
      uStack_126 = (undefined2)((uint)uVar10 >> 0x10);
      local_124 = (undefined2)uVar7;
      uStack_122 = (undefined2)((uint)uVar7 >> 0x10);
      uStack_120 = (undefined2)uVar8;
      uStack_11e = (undefined2)((uint)uVar8 >> 0x10);
      iVar3 = piVar6[iVar5] * 0x1bc + param_1;
      local_134 = uVar7;
      uStack_130 = uVar8;
      uStack_12c = uVar9;
      local_11c = uVar7;
      uStack_118 = uVar8;
      local_114 = uVar7;
      uStack_110 = uVar7;
      uStack_10c = uVar8;
      FUN_00023438(iVar3 + 0x158,&local_134,*(undefined4 *)(iVar3 + 0x114));
      sVar1 = strlen(local_1fc);
      sVar2 = strlen((char *)&local_134);
      if (sVar1 + sVar2 < 100) {
        memcpy(local_1fc + sVar1,&local_134,sVar2 + 1);
LAB_0002af0c:
        iVar4 = *(int *)(param_2 + 0x140);
        if (iVar4 <= iVar5 + 1) goto LAB_0002afcc;
      }
      else {
        iVar3 = FUN_000173e0();
        if (iVar3 < 1) goto LAB_0002af0c;
        sVar1 = strlen(local_1fc);
        sVar2 = strlen((char *)&local_134);
        fprintf((FILE *)**(undefined4 **)((int)local_208 + DAT_0002b44c),__format,sVar1 + sVar2,100)
        ;
        iVar4 = *(int *)(param_2 + 0x140);
        if (iVar4 <= iVar5 + 1) goto LAB_0002afcc;
      }
      iVar5 = iVar5 + 1;
      piVar6 = *(int **)(param_2 + 0x144);
    } while( true );
  }
  iVar3 = *(int *)(param_2 + 0x148);
  if (0 < iVar3) {
    switch(*(undefined4 *)(**(int **)(param_2 + 0x14c) * 0x1bc + param_1 + 0x100)) {
    case 0:
      goto LAB_0002aebc;
    case 1:
      local_214 = DAT_0002b4ac + 0x2b3bc;
      break;
    case 2:
      local_214 = DAT_0002b480 + 0x2b2b4;
      break;
    case 3:
      local_214 = DAT_0002b4c0 + 0x2b40c;
      break;
    case 4:
      local_214 = DAT_0002b4b0 + 0x2b3cc;
      break;
    case 5:
      local_214 = DAT_0002b4b4 + 0x2b3dc;
      break;
    case 6:
      local_214 = DAT_0002b4b8 + 0x2b3ec;
      break;
    case 7:
      local_214 = DAT_0002b4bc + 0x2b3fc;
      break;
    case 8:
      local_214 = DAT_0002b4c4 + 0x2b41c;
      break;
    default:
      local_214 = DAT_0002b4cc + 0x2b43c;
    }
  }
  memset(local_1fc + 2,0,0x62);
LAB_0002b208:
  local_1fc[0] = '\\';
  local_1fc[1] = '\0';
LAB_0002afd8:
  local_208 = (undefined1 *)local_270;
  memset(local_198,0,100);
  local_244 = local_1fc;
  if (0 < iVar3) {
    uVar7 = 0;
    uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar5 = 0;
    local_218 = local_1fc;
    do {
      while( true ) {
        uStack_128 = (undefined2)uVar10;
        uStack_126 = (undefined2)uVar7;
        local_124 = (undefined2)((uint)uVar7 >> 0x10);
        uStack_122 = (undefined2)uVar8;
        uStack_120 = (undefined2)((uint)uVar8 >> 0x10);
        iVar3 = *(int *)(*(int *)(param_2 + 0x14c) + iVar5 * 4) * 0x1bc + param_1;
        local_134 = uVar7;
        uStack_130 = uVar8;
        uStack_12c = uVar9;
        FUN_00023438(iVar3 + 0x158,&local_134,*(undefined4 *)(iVar3 + 0x114));
        sVar1 = strlen(local_198);
        sVar2 = strlen((char *)&local_134);
        if (99 < sVar1 + sVar2) break;
        memcpy(local_198 + sVar1,&local_134,sVar2 + 1);
LAB_0002b014:
        iVar3 = *(int *)(param_2 + 0x148);
        iVar5 = iVar5 + 1;
        if (iVar3 <= iVar5) goto LAB_0002b0cc;
      }
      iVar3 = FUN_000173e0();
      if (iVar3 < 1) goto LAB_0002b014;
      sVar1 = strlen(local_198);
      iVar5 = iVar5 + 1;
      sVar2 = strlen((char *)&local_134);
      fprintf((FILE *)**(undefined4 **)(local_204 + DAT_0002b44c),(char *)(DAT_0002b450 + 0x2b0b8),
              sVar1 + sVar2,100);
      iVar3 = *(int *)(param_2 + 0x148);
    } while (iVar5 < iVar3);
LAB_0002b0cc:
    local_244 = local_218;
    if (0 < iVar3) goto LAB_0002b0d8;
  }
  local_198[0] = '\\';
  local_198[1] = '\0';
LAB_0002b0d8:
  local_220 = param_2 + 0x40;
  local_250 = param_2 + 0x20;
  local_22c = param_5;
  local_25c = local_214;
  local_230 = 0xe;
  local_270[1] = 0x14;
  local_270[0] = DAT_0002b454 + 0x2b124;
  local_224 = 0x10;
  local_23c = 0x16;
  local_248 = 0x2c;
  local_254 = 6;
  local_260 = 8;
  local_270[2] = param_2;
  local_264 = local_270[0];
  local_258 = local_270[0];
  local_24c = local_270[0];
  local_240 = local_270[0];
  local_238 = local_198;
  local_234 = local_270[0];
  local_228 = local_270[0];
  sprintf((char *)&local_134,(char *)(DAT_0002b458 + 0x2b134),4,local_210);
  strcat(local_20c,(char *)&local_134);
  return 0;
LAB_0002afcc:
  iVar3 = *(int *)(param_2 + 0x148);
  if (iVar4 < 1) goto LAB_0002b208;
  goto LAB_0002afd8;
}



/* ===== FUN_0002b4d0 @ 0002b4d0 size=300 ===== */

undefined4 FUN_0002b4d0(undefined4 param_1,int param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = strcmp(param_3,(char *)(DAT_0002b5fc + 0x2b4f0));
  if (iVar1 == 0) {
    if (0 < *(int *)(param_3 + 0x148)) {
      iVar1 = 0;
      do {
        iVar3 = iVar1 * 4;
        iVar1 = iVar1 + 1;
        FUN_0002508c(param_1,*(int *)(*(int *)(param_3 + 0x14c) + iVar3) * 0x1bc + param_2,param_3,
                     param_4);
      } while (iVar1 < *(int *)(param_3 + 0x148));
    }
  }
  else {
    iVar1 = strcmp(param_3,(char *)(DAT_0002b600 + 0x2b550));
    if (iVar1 == 0) {
      if (0 < *(int *)(param_3 + 0x140)) {
        iVar1 = 0;
        do {
          iVar3 = iVar1 * 4;
          iVar1 = iVar1 + 1;
          FUN_0002508c(param_1,*(int *)(*(int *)(param_3 + 0x144) + iVar3) * 0x1bc + param_2,param_3
                       ,param_4);
        } while (iVar1 < *(int *)(param_3 + 0x140));
        return 0;
      }
    }
    else {
      iVar1 = *(int *)(param_3 + 0x148);
      if (0 < iVar1) {
        iVar4 = *(int *)(param_3 + 0x14c);
        iVar3 = 0;
        do {
          while (iVar2 = *(int *)(iVar4 + iVar3 * 4), iVar2 != -1) {
            FUN_0002508c(param_1,iVar2 * 0x1bc + param_2,param_3,param_4);
            iVar1 = *(int *)(param_3 + 0x148);
            iVar3 = iVar3 + 1;
            if (iVar1 <= iVar3) {
              return 0;
            }
            iVar4 = *(int *)(param_3 + 0x14c);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
    }
  }
  return 0;
}



/* ===== FUN_0002bdd8 @ 0002bdd8 size=12 ===== */

int FUN_0002bdd8(void)

{
  return (int)&DAT_0002bde4 + DAT_0002bde4;
}



/* ===== FUN_0002bde8 @ 0002bde8 size=348 ===== */

int FUN_0002bde8(undefined1 *param_1,byte *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  
  if (param_3 < 3) {
    uVar7 = 0;
    puVar6 = param_1;
  }
  else {
    iVar8 = DAT_0002bf44 + 0x2be1c;
    iVar9 = DAT_0002bf48 + 0x2be24;
    uVar7 = 0;
    pbVar11 = param_2;
    puVar10 = param_1;
    do {
      puVar6 = puVar10 + 4;
      uVar7 = uVar7 + 3;
      uVar1 = *(undefined1 *)(iVar9 + (uint)pbVar11[2]);
      uVar2 = *(undefined1 *)(iVar8 + (uint)*pbVar11);
      uVar3 = *(undefined1 *)(iVar8 + ((*pbVar11 & 3) << 4 | (uint)(pbVar11[1] >> 4)) + 0x100);
      puVar10[2] = *(undefined1 *)
                    (iVar8 + ((pbVar11[1] & 0xf) << 2 | (uint)(pbVar11[2] >> 6)) + 0x100);
      puVar10[3] = uVar1;
      puVar10[1] = uVar3;
      *puVar10 = uVar2;
      pbVar11 = pbVar11 + 3;
      puVar10 = puVar6;
    } while (uVar7 < param_3 - 2);
    param_3 = param_3 - uVar7;
  }
  iVar9 = DAT_0002bf50;
  iVar8 = DAT_0002bf4c;
  puVar10 = puVar6;
  if (param_3 != 0) {
    if (param_3 == 1) {
      bVar4 = param_2[uVar7];
      puVar10 = puVar6 + 4;
      puVar6[2] = 0x3d;
      puVar6[3] = 0x3d;
      uVar1 = *(undefined1 *)(iVar8 + 0x2beb8 + (bVar4 & 3) * 0x10 + 0x100);
      *puVar6 = *(undefined1 *)(iVar8 + 0x2beb8 + (uint)bVar4);
      puVar6[1] = uVar1;
    }
    else {
      bVar4 = param_2[uVar7];
      bVar5 = param_2[uVar7 + 1];
      puVar10 = puVar6 + 4;
      puVar6[3] = 0x3d;
      uVar1 = *(undefined1 *)(iVar9 + 0x2bf24 + (bVar5 & 0xf) * 4);
      uVar2 = *(undefined1 *)
               (DAT_0002bf54 + 180000 + ((bVar4 & 3) << 4 | (uint)(bVar5 >> 4)) + 0x100);
      *puVar6 = *(undefined1 *)(DAT_0002bf54 + 180000 + (uint)bVar4);
      puVar6[2] = uVar1;
      puVar6[1] = uVar2;
    }
  }
  *puVar10 = 0;
  return (int)puVar10 - (int)param_1;
}



/* ===== FUN_0002bf58 @ 0002bf58 size=620 ===== */

int FUN_0002bf58(undefined1 *param_1,byte *param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((param_3 < 4) || ((param_3 & 3) != 0)) {
    return -1;
  }
  if (param_2[param_3 - 1] == 0x3d) {
    uVar5 = param_3 - 1;
    if (param_2[param_3 - 2] == 0x3d) {
      uVar5 = param_3 - 2;
    }
    uVar6 = uVar5 & 3;
    param_3 = uVar5 >> 2;
    if (uVar6 == 0) goto LAB_0002bf8c;
  }
  else {
    param_3 = param_3 >> 2;
LAB_0002bf8c:
    param_3 = param_3 - 1;
    uVar6 = 0;
  }
  iVar2 = DAT_0002c1c4 + 0x2bfa8;
  uVar5 = *(uint *)(iVar2 + (uint)*param_2 * 4 + 0x200);
  if (param_3 != 0) {
    uVar5 = uVar5 | *(uint *)(iVar2 + (uint)param_2[1] * 4 + 0x600) |
            *(uint *)(iVar2 + (uint)param_2[2] * 4 + 0xa00) |
            *(uint *)(iVar2 + (uint)param_2[3] * 4 + 0xe00);
    if (0x1fffffe < uVar5) {
      return -1;
    }
    puVar3 = param_1 + param_3 * 3;
    iVar2 = DAT_0002c1c8 + 0x2c008;
    pbVar4 = param_2;
    puVar1 = param_1;
    while( true ) {
      param_1 = puVar1 + 3;
      *puVar1 = (char)uVar5;
      puVar1[1] = (char)(uVar5 >> 8);
      puVar1[2] = (char)(uVar5 >> 0x10);
      param_2 = pbVar4 + 4;
      if (puVar3 == param_1) break;
      uVar5 = *(uint *)(iVar2 + (uint)pbVar4[4] * 4 + 0x200) |
              *(uint *)(iVar2 + (uint)pbVar4[5] * 4 + 0x600) |
              *(uint *)(iVar2 + (uint)pbVar4[6] * 4 + 0xa00) |
              *(uint *)(iVar2 + (uint)pbVar4[7] * 4 + 0xe00);
      pbVar4 = param_2;
      puVar1 = param_1;
      if (0x1fffffe < uVar5) {
        return -1;
      }
    }
    uVar5 = *(uint *)(&UNK_0002c288 + DAT_0002c1cc + (uint)pbVar4[4] * 4);
  }
  if (uVar6 != 1) {
    if (uVar6 != 2) {
      if (uVar6 == 0) {
        iVar2 = DAT_0002c1d4 + 0x2c11c;
        uVar5 = *(uint *)(iVar2 + (uint)param_2[1] * 4 + 0x600) |
                *(uint *)(iVar2 + (uint)param_2[2] * 4 + 0xa00) | uVar5 |
                *(uint *)(iVar2 + (uint)param_2[3] * 4 + 0xe00);
        if (0x1fffffe < uVar5) {
          return -1;
        }
        *param_1 = (char)uVar5;
        param_1[1] = (char)(uVar5 >> 8);
        param_1[2] = (char)(uVar5 >> 0x10);
        return (param_3 + 1) * 3;
      }
      uVar5 = uVar5 | *(uint *)(DAT_0002c1d0 + 0x2c0b8 + (uint)param_2[1] * 4 + 0x600) |
                      *(uint *)(DAT_0002c1d0 + 0x2c0b8 + (uint)param_2[2] * 4 + 0xa00);
      *param_1 = (char)uVar5;
      param_1[1] = (char)(uVar5 >> 8);
      goto LAB_0002c0d8;
    }
    uVar5 = uVar5 | *(uint *)("E RKNN: failed to allocate executor context!\n" +
                             DAT_0002c1d8 + (uint)param_2[1] * 4 + 0x1c);
  }
  *param_1 = (char)uVar5;
LAB_0002c0d8:
  if (0x1fffffe < uVar5) {
    return -1;
  }
  return param_3 * 3 + ((int)(uVar6 * 6) >> 3);
}



/* ===== FUN_0002c1dc @ 0002c1dc size=168 ===== */

ulonglong FUN_0002c1dc(uint param_1,uint param_2)

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



/* ===== FUN_0002c2a4 @ 0002c2a4 size=24 ===== */

ulonglong FUN_0002c2a4(uint param_1,uint param_2)

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



/* ===== FUN_0002c2ac @ 0002c2ac size=196 ===== */

uint FUN_0002c2ac(uint param_1,uint param_2)

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



/* ===== FUN_0002c380 @ 0002c380 size=48 ===== */

void FUN_0002c380(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0002c2ac();
    return;
  }
  raise(8);
  return;
}



/* ===== _fini @ 0002c3b0 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::stpcpy @ 00043000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * stpcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00043004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00043008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00043010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00043014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 00043018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__isnan @ 0004301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __isnan(double __value)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 00043024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00043028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0004302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__isinf @ 00043030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __isinf(double __value)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00043034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00043038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftruncate @ 0004303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ftruncate(int __fd,__off_t __length)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek @ 00043040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t lseek(int __fd,__off_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap @ 00043044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00043048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0004304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtod @ 00043050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00043054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00043058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0004305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00043060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00043064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ferror @ 00043068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ferror(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0004306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00043070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00043074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::log10 @ 00043078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log10(double __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0004307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok @ 00043080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok(char *__s,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 00043084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00043088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncat @ 0004308c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00043090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00043094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 00043098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 0004309c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000430a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 000430a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 000430a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000430ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000430b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 000430b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000430bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000430c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::expf @ 000430c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float expf(float __x)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000430c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 000430cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000430d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000430d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000430dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000430e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000430e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


