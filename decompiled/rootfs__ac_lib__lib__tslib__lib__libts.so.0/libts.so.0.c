// libts.so.0 — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010c24 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 00010c48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002300c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00010c54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00023010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010c60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00023014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010c6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00023018)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00010c78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002301c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 00010c84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00023020)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::bsearch @ 00010c90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_bsearch_00023024)(__key);
  return pvVar1;
}



/* ===== <EXTERNAL>::fgets @ 00010c9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00023028)(__s);
  return pcVar1;
}



/* ===== ts_close @ 00010ca8 size=12 ===== */

void ts_close(void)

{
  (*(code *)PTR_ts_close_0002302c)();
  return;
}



/* ===== <EXTERNAL>::puts @ 00010cb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00023030)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010cc0 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00023034)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00010ccc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00023038)(__size);
  return pvVar1;
}



/* ===== ts_config @ 00010cd8 size=12 ===== */

void ts_config(void)

{
  (*(code *)PTR_ts_config_0002303c)();
  return;
}



/* ===== <EXTERNAL>::dlclose @ 00010ce4 size=12 ===== */

void dlclose(void)

{
  (*(code *)PTR_dlclose_00023040)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00010cf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00023044)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010cfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00023048)(__stream);
  return iVar1;
}



/* ===== ts_libversion @ 00010d08 size=12 ===== */

void ts_libversion(void)

{
  (*(code *)PTR_ts_libversion_0002304c)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010d14 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00023050)();
  return;
}



/* ===== ts_open @ 00010d20 size=12 ===== */

void ts_open(void)

{
  (*(code *)PTR_ts_open_00023054)();
  return;
}



/* ===== <EXTERNAL>::scandir @ 00010d2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int scandir(char *__dir,dirent ***__namelist,__selector *__selector,__cmp *__cmp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_scandir_00023058)(__dir);
  return iVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010d38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002305c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::dlopen @ 00010d44 size=12 ===== */

void dlopen(void)

{
  (*(code *)PTR_dlopen_00023060)();
  return;
}



/* ===== <EXTERNAL>::strncpy @ 00010d50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00023064)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 00010d5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_00023068)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::dlsym @ 00010d68 size=12 ===== */

void dlsym(void)

{
  (*(code *)PTR_dlsym_0002306c)();
  return;
}



/* ===== <EXTERNAL>::strdup @ 00010d74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_00023070)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::fopen @ 00010d80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00023074)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::fclose @ 00010d8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00023078)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010d98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002307c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010da4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00023080)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strsep @ 00010db0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strsep_00023084)(__stringp);
  return pcVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010dbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00023088)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010dc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002308c)();
  return piVar1;
}



/* ===== ts_load_module @ 00010dd4 size=12 ===== */

void ts_load_module(void)

{
  (*(code *)PTR_ts_load_module_00023090)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010de0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00023094)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 00010dec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_00023098)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 00010df8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002309c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010e04 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000230a0)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010e10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000230a4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00010e1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_000230a8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strpbrk @ 00010e28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strpbrk(char *__s,char *__accept)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strpbrk_000230ac)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::free @ 00010e34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000230b0)(__ptr);
  return;
}



/* ===== entry @ 00010e40 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_00010e8c + 0x10e58 == DAT_00010e88 + 0x10e50) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010e90 + 0x10e60 + DAT_00010e94);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00010efc size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00010f70 + 0x10f18;
  if (*(char *)(DAT_00010f6c + 0x10f0c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00010f74) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00010f78 + 0x10f38));
  }
  entry();
  if (*(int *)(iVar1 + DAT_00010f7c) != 0) {
    __deregister_frame_info(DAT_00010f80 + 0x10f58);
  }
  *(undefined1 *)(DAT_00010f84 + 0x10f68) = 1;
  return;
}



/* ===== _INIT_0 @ 00010f88 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010fc0 + 0x10f98 + DAT_00010fc4) != 0) {
    __register_frame_info(DAT_00010fcc + 0x10fb8,DAT_00010fc8 + 0x10fb4);
  }
  if (((DAT_00010ef0 + 0x10eb0) - (DAT_00010eec + 0x10ea8) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010ef4 + 0x10eb8 + DAT_00010ef8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00010fd0 @ 00010fd0 size=28 ===== */

undefined4 FUN_00010fd0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *param_2 = param_1;
  param_2[1] = iVar1;
  *(int **)(param_1 + 8) = param_2;
  return 0;
}



/* ===== FUN_00010fec @ 00010fec size=64 ===== */

undefined4 FUN_00010fec(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 8);
  *param_2 = param_1;
  param_2[1] = iVar1;
  *(int **)(param_1 + 0xc) = param_2;
  if (iVar2 == 0 || iVar2 == iVar1) {
    *(int **)(param_1 + 8) = param_2;
  }
  else {
    do {
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != 0 && iVar1 != iVar2);
    *(int **)(iVar2 + 4) = param_2;
  }
  return 0;
}



/* ===== ts_close @ 0001102c size=160 ===== */

int ts_close(int *param_1)

{
  void *__ptr;
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_000110cc + 0x11048;
  __ptr = (void *)param_1[2];
  while (__ptr != (void *)0x0) {
    pvVar2 = *(void **)((int)__ptr + 4);
    iVar3 = *(int *)((int)__ptr + 8);
    pcVar1 = *(code **)(*(int *)((int)__ptr + 0xc) + 8);
    if (pcVar1 == (code *)0x0) {
      free(__ptr);
    }
    else {
      (*pcVar1)();
    }
    __ptr = pvVar2;
    if (iVar3 != 0) {
      dlclose();
    }
  }
  pcVar1 = (code *)**(undefined4 **)(iVar4 + DAT_000110d0);
  if (pcVar1 == (code *)0x0) {
    iVar4 = close(*param_1);
  }
  else {
    iVar4 = 0;
    (*pcVar1)(*param_1,0);
  }
  free((void *)param_1[1]);
  free(param_1);
  return iVar4;
}



/* ===== FUN_000110d4 @ 000110d4 size=92 ===== */

void FUN_000110d4(char **param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *__delim;
  
  if (*param_1 == (char *)0x0) {
    return;
  }
  if (*(char *)*param_2 != '\0') {
    return;
  }
  __delim = (char *)(DAT_00011130 + 0x11108);
  do {
    pcVar1 = strsep(param_1,__delim);
    *param_2 = pcVar1;
    if (*param_1 == (char *)0x0) {
      return;
    }
  } while (*pcVar1 == '\0');
  return;
}



/* ===== FUN_00011494 @ 00011494 size=4 ===== */

int FUN_00011494(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  FILE *__stream;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *__s2;
  int iVar6;
  char *__delim;
  char *pcStack_240;
  char *pcStack_234;
  char *pcStack_230;
  char *pcStack_22c;
  char acStack_228 [510];
  char cStack_2a;
  
  pcStack_240 = getenv((char *)(DAT_00011460 + 0x11154));
  if (pcStack_240 == (char *)0x0) {
    pcStack_240 = strdup((char *)(DAT_00011480 + 0x113c8));
    if (pcStack_240 == (char *)0x0) {
      piVar4 = __errno_location();
      pcVar5 = strerror(*piVar4);
      FUN_00011534(DAT_00011490 + 0x1145c,pcVar5);
      return -1;
    }
    __stream = fopen(pcStack_240,(char *)(DAT_00011484 + 0x113e0));
    if (__stream == (FILE *)0x0) {
      free(pcStack_240);
      goto LAB_000113f8;
    }
    bVar1 = true;
  }
  else {
    __stream = fopen(pcStack_240,(char *)(DAT_00011464 + 70000));
    if (__stream == (FILE *)0x0) {
LAB_000113f8:
      piVar4 = __errno_location();
      pcVar5 = strerror(*piVar4);
      FUN_00011534(DAT_00011488 + 0x1141c,pcStack_240,pcVar5);
      return -1;
    }
    bVar1 = false;
  }
  iVar6 = 0;
  __delim = (char *)(DAT_00011468 + 0x11198);
  cStack_2a = '\0';
  pcVar5 = (char *)(DAT_0001146c + 0x111a0);
  __s2 = (char *)(DAT_00011470 + 0x111ac);
LAB_000111ac:
  do {
    do {
      pcStack_234 = fgets(acStack_228,0x200,__stream);
      iVar3 = 0;
      if (pcStack_234 == (char *)0x0) goto LAB_00011328;
      iVar6 = iVar6 + 1;
      pcVar2 = strchr(pcStack_234,10);
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
      }
      if (cStack_2a != '\0') {
        iVar3 = 0;
        FUN_00011534(DAT_00011478 + 0x11398,pcStack_240,iVar6);
        iVar6 = *(int *)(param_1 + 0xc);
        goto joined_r0x000113a4;
      }
      pcStack_230 = strsep(&pcStack_234,__delim);
      FUN_000110d4(&pcStack_234,&pcStack_230);
      pcVar2 = pcStack_230;
    } while ((pcStack_234 == (char *)0x0) || (*pcStack_230 == '#'));
    iVar3 = strcasecmp(pcStack_230,pcVar5);
    if (iVar3 == 0) {
      pcStack_22c = strsep(&pcStack_234,__delim);
      FUN_000110d4(&pcStack_234,&pcStack_22c);
      if (param_2 != 0) {
        strcpy(*(char **)(param_2 + iVar6 * 4),pcStack_22c);
        if (param_3 != 0) {
          strcpy(*(char **)(param_3 + iVar6 * 4),pcStack_234);
        }
        goto LAB_000111ac;
      }
      iVar3 = ts_load_module(param_1,pcStack_22c,pcStack_234);
    }
    else {
      iVar3 = strcasecmp(pcVar2,__s2);
      if (iVar3 != 0) {
        FUN_00011534(DAT_0001148c + 0x11438,pcStack_240,iVar6,pcVar2);
        iVar3 = 0;
        goto LAB_00011328;
      }
      pcStack_22c = strsep(&pcStack_234,__delim);
      FUN_000110d4(&pcStack_234,&pcStack_22c);
      if (param_2 != 0) {
        strcpy(*(char **)(param_2 + iVar6 * 4),pcStack_22c);
        if (param_3 != 0) {
          strcpy(*(char **)(param_3 + iVar6 * 4),pcStack_234);
        }
        if (param_4 != 0) {
          *(undefined4 *)(param_4 + iVar6 * 4) = 1;
        }
        goto LAB_000111ac;
      }
      iVar3 = FUN_0001178c(param_1,pcStack_22c,pcStack_234);
    }
    if (iVar3 != 0) {
      FUN_00011534(DAT_00011474 + 0x11328,pcStack_22c);
LAB_00011328:
      iVar6 = *(int *)(param_1 + 0xc);
joined_r0x000113a4:
      if (iVar6 == 0) {
        iVar3 = -1;
        FUN_00011534(DAT_0001147c + 0x113b8);
      }
      fclose(__stream);
      if (!bVar1) {
        return iVar3;
      }
      free(pcStack_240);
      return iVar3;
    }
  } while( true );
}



/* ===== ts_config @ 00011498 size=828 ===== */

/* WARNING: Removing unreachable block (ram,0x000112d4) */
/* WARNING: Removing unreachable block (ram,0x000112ec) */
/* WARNING: Removing unreachable block (ram,0x00011278) */
/* WARNING: Removing unreachable block (ram,0x00011290) */
/* WARNING: Removing unreachable block (ram,0x0001129c) */
/* WARNING: Removing unreachable block (ram,0x000112a4) */
/* WARNING: Removing unreachable block (ram,0x000112a8) */
/* WARNING: Removing unreachable block (ram,0x000112ac) */

int ts_config(int param_1)

{
  bool bVar1;
  FILE *__stream;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *__s2;
  int iVar6;
  char *__delim;
  char *local_240;
  char *local_234;
  char *local_230;
  char *local_22c;
  char acStack_228 [510];
  char local_2a;
  
  local_240 = getenv((char *)(DAT_00011460 + 0x11154));
  if (local_240 == (char *)0x0) {
    local_240 = strdup((char *)(DAT_00011480 + 0x113c8));
    if (local_240 == (char *)0x0) {
      piVar4 = __errno_location();
      pcVar5 = strerror(*piVar4);
      FUN_00011534(DAT_00011490 + 0x1145c,pcVar5);
      return -1;
    }
    __stream = fopen(local_240,(char *)(DAT_00011484 + 0x113e0));
    if (__stream == (FILE *)0x0) {
      free(local_240);
      goto LAB_000113f8;
    }
    bVar1 = true;
  }
  else {
    __stream = fopen(local_240,(char *)(DAT_00011464 + 70000));
    if (__stream == (FILE *)0x0) {
LAB_000113f8:
      piVar4 = __errno_location();
      pcVar5 = strerror(*piVar4);
      FUN_00011534(DAT_00011488 + 0x1141c,local_240,pcVar5);
      return -1;
    }
    bVar1 = false;
  }
  iVar6 = 0;
  __delim = (char *)(DAT_00011468 + 0x11198);
  local_2a = '\0';
  pcVar5 = (char *)(DAT_0001146c + 0x111a0);
  __s2 = (char *)(DAT_00011470 + 0x111ac);
  do {
    do {
      local_234 = fgets(acStack_228,0x200,__stream);
      iVar3 = 0;
      if (local_234 == (char *)0x0) goto LAB_00011328;
      iVar6 = iVar6 + 1;
      pcVar2 = strchr(local_234,10);
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
      }
      if (local_2a != '\0') {
        iVar3 = 0;
        FUN_00011534(DAT_00011478 + 0x11398,local_240,iVar6);
        iVar6 = *(int *)(param_1 + 0xc);
        goto joined_r0x000113a4;
      }
      local_230 = strsep(&local_234,__delim);
      FUN_000110d4(&local_234,&local_230);
      pcVar2 = local_230;
    } while ((local_234 == (char *)0x0) || (*local_230 == '#'));
    iVar3 = strcasecmp(local_230,pcVar5);
    if (iVar3 == 0) {
      local_22c = strsep(&local_234,__delim);
      FUN_000110d4(&local_234,&local_22c);
      iVar3 = ts_load_module(param_1,local_22c,local_234);
    }
    else {
      iVar3 = strcasecmp(pcVar2,__s2);
      if (iVar3 != 0) {
        FUN_00011534(DAT_0001148c + 0x11438,local_240,iVar6,pcVar2);
        iVar3 = 0;
        goto LAB_00011328;
      }
      local_22c = strsep(&local_234,__delim);
      FUN_000110d4(&local_234,&local_22c);
      iVar3 = FUN_0001178c(param_1,local_22c,local_234);
    }
  } while (iVar3 == 0);
  FUN_00011534(DAT_00011474 + 0x11328,local_22c);
LAB_00011328:
  iVar6 = *(int *)(param_1 + 0xc);
joined_r0x000113a4:
  if (iVar6 == 0) {
    iVar3 = -1;
    FUN_00011534(DAT_0001147c + 0x113b8);
  }
  fclose(__stream);
  if (bVar1) {
    free(local_240);
    return iVar3;
  }
  return iVar3;
}



/* ===== ts_reconfig @ 000114a8 size=100 ===== */

void ts_reconfig(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    iVar4 = *(int *)(iVar1 + 8);
    pcVar2 = *(code **)(*(int *)(iVar1 + 0xc) + 8);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar1);
    }
    iVar1 = iVar3;
    if (iVar4 != 0) {
      dlclose();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  ts_config(param_1);
  return;
}



/* ===== FUN_0001150c @ 0001150c size=32 ===== */

void FUN_0001150c(char *param_1,__gnuc_va_list param_2)

{
  vfprintf((FILE *)**(undefined4 **)(DAT_0001152c + 0x11524 + DAT_00011530),param_1,param_2);
  return;
}



/* ===== FUN_00011534 @ 00011534 size=64 ===== */

void FUN_00011534(undefined4 param_1)

{
  (*(code *)**(undefined4 **)(DAT_00011574 + 0x1154c + DAT_00011578))(param_1);
  return;
}



/* ===== ts_fd @ 0001157c size=8 ===== */

undefined4 ts_fd(undefined4 *param_1)

{
  return *param_1;
}



/* ===== FUN_00011590 @ 00011590 size=240 ===== */

int FUN_00011590(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *__s;
  size_t sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char acStack_418 [1028];
  
  __s = getenv((char *)(DAT_00011680 + 0x115b0));
  if (__s == (char *)0x0) {
    __s = (char *)(DAT_0001168c + 0x11664);
  }
  else {
    sVar1 = strlen(__s);
    if (0x3ff < sVar1) {
      return 0;
    }
  }
  snprintf(acStack_418,0x400,(char *)(DAT_00011684 + 0x115e0),__s,param_2);
  iVar2 = dlopen(acStack_418,2);
  if (iVar2 == 0) {
    return 0;
  }
  puVar3 = (undefined4 *)dlsym(iVar2,DAT_00011688 + 0x11608);
  if ((puVar3 == (undefined4 *)0x0) || ((code *)*puVar3 == (code *)0x0)) {
    iVar4 = 0;
    dlclose(iVar2);
  }
  else {
    iVar4 = (*(code *)*puVar3)(param_1,param_3);
    if (iVar4 == 0) {
      dlclose(iVar2);
    }
    else {
      *(int *)(iVar4 + 8) = iVar2;
    }
  }
  return iVar4;
}



/* ===== ts_load_module @ 00011784 size=244 ===== */

/* WARNING: Removing unreachable block (ram,0x00011750) */

int ts_load_module(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 local_20 [2];
  
  local_20[0] = param_2;
  pvVar1 = bsearch(local_20,(void *)(DAT_00011780 + 0x116c8),0,8,
                   (__compar_fn_t)(DAT_0001177c + 0x116b0));
  if ((pvVar1 == (void *)0x0) ||
     (iVar2 = (**(code **)((int)pvVar1 + 4))(param_1,param_3), iVar2 == 0)) {
    iVar2 = FUN_00011590(param_1,param_2,param_3);
    if (iVar2 == 0) {
      return -1;
    }
  }
  else {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  iVar3 = FUN_00010fd0();
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar2 + 8);
    pcVar4 = *(code **)(*(int *)(iVar2 + 0xc) + 8);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar2);
    }
    if (iVar5 != 0) {
      dlclose(iVar5);
    }
  }
  return iVar3;
}



/* ===== FUN_0001178c @ 0001178c size=8 ===== */

/* WARNING: Removing unreachable block (ram,0x00011708) */

int FUN_0001178c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 auStack_20 [2];
  
  auStack_20[0] = param_2;
  pvVar1 = bsearch(auStack_20,(void *)(DAT_00011780 + 0x116c8),0,8,
                   (__compar_fn_t)(DAT_0001177c + 0x116b0));
  if ((pvVar1 == (void *)0x0) ||
     (iVar2 = (**(code **)((int)pvVar1 + 4))(param_1,param_3), iVar2 == 0)) {
    iVar2 = FUN_00011590(param_1,param_2,param_3);
    if (iVar2 == 0) {
      return -1;
    }
  }
  else {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  iVar3 = FUN_00010fec(param_1,iVar2);
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar2 + 8);
    pcVar4 = *(code **)(*(int *)(iVar2 + 0xc) + 8);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar2);
    }
    if (iVar5 != 0) {
      dlclose(iVar5);
    }
  }
  return iVar3;
}



/* ===== ts_open @ 00011794 size=228 ===== */

int * ts_open(char *param_1,int param_2)

{
  int *__ptr;
  char *pcVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 2;
  }
  else {
    iVar5 = 0x802;
  }
  __ptr = calloc(0x1c,1);
  iVar4 = DAT_00011878 + 0x117c4;
  if (__ptr == (int *)0x0) {
    return (int *)0x0;
  }
  pcVar1 = strdup(param_1);
  __ptr[1] = (int)pcVar1;
  if (pcVar1 == (char *)0x0) goto LAB_00011864;
  pcVar3 = (code *)**(undefined4 **)(iVar4 + DAT_0001187c);
  if (pcVar3 == (code *)0x0) {
    iVar5 = open(param_1,iVar5);
    *__ptr = iVar5;
    if (iVar5 != -1) {
      return __ptr;
    }
    piVar2 = __errno_location();
    if (*piVar2 == 0xd) {
      if (param_2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0x800;
      }
      iVar5 = open(param_1,iVar5);
      *__ptr = iVar5;
      goto joined_r0x00011850;
    }
  }
  else {
    iVar5 = (*pcVar3)(param_1,iVar5,0);
    *__ptr = iVar5;
joined_r0x00011850:
    if (iVar5 != -1) {
      return __ptr;
    }
  }
  if ((void *)__ptr[1] != (void *)0x0) {
    free((void *)__ptr[1]);
  }
LAB_00011864:
  free(__ptr);
  return (int *)0x0;
}



/* ===== tslib_parse_vars @ 00011880 size=240 ===== */

int tslib_parse_vars(undefined4 param_1,undefined4 *param_2,int param_3,char *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  char *__s;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *local_2c [2];
  
  iVar2 = DAT_00011974;
  iVar4 = 0;
  if (param_4 != (char *)0x0) {
    local_2c[0] = strncpy((char *)(DAT_00011970 + 0x118a8),param_4,0x3ff);
    iVar4 = 0;
    local_2c[0][0x3ff] = '\0';
LAB_000118dc:
    __s = strsep(local_2c,(char *)(iVar2 + 0x118d0));
    if (iVar4 == 0 && __s != (char *)0x0) {
      pcVar3 = strchr(__s,0x3d);
      puVar1 = param_2;
      pcVar5 = pcVar3;
      if (pcVar3 != (char *)0x0) {
        pcVar5 = pcVar3 + 1;
        *pcVar3 = '\0';
      }
      for (; puVar1 < param_2 + param_3 * 3; puVar1 = puVar1 + 3) {
        iVar4 = strcasecmp((char *)*puVar1,__s);
        if (iVar4 == 0) {
          iVar4 = (*(code *)puVar1[2])(param_1,pcVar5,puVar1[1]);
          goto LAB_000118dc;
        }
      }
      iVar4 = 0;
      goto LAB_000118dc;
    }
  }
  return iVar4;
}



/* ===== ts_read @ 00011978 size=16 ===== */

void ts_read(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00011984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 0xc))();
  return;
}



/* ===== ts_read_mt @ 00011988 size=28 ===== */

void ts_read_mt(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000119a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 4))();
  return;
}



/* ===== ts_read_raw @ 000119a4 size=16 ===== */

void ts_read_raw(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000119b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(*(int *)(param_1 + 0xc) + 0xc))();
  return;
}



/* ===== ts_read_raw_mt @ 000119b4 size=28 ===== */

void ts_read_raw_mt(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000119cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0xc) + 4))();
  return;
}



/* ===== ts_option @ 000119d0 size=88 ===== */

undefined4 ts_option(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    return 0;
  }
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x18) = param_3;
  }
  return 0;
}



/* ===== FUN_00011a28 @ 00011a28 size=304 ===== */

char * FUN_00011a28(void)

{
  dirent **ppdVar1;
  int iVar2;
  int __fd;
  int iVar3;
  int iVar4;
  char *__dir;
  char *pcVar5;
  dirent **local_228;
  uint local_224;
  char acStack_220 [512];
  
  iVar4 = 0;
  local_224 = 0;
  __dir = (char *)(DAT_00011b60 + 0x11a54);
  iVar2 = scandir(__dir,&local_228,(__selector *)(DAT_00011b64 + 0x11a64),
                  *(__cmp **)(DAT_00011b58 + 0x11a3c + DAT_00011b5c));
  if (iVar2 < 1) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar5 = (char *)(DAT_00011b68 + 0x11a88);
    do {
      snprintf(acStack_220,0x200,pcVar5,__dir,local_228[iVar4]->d_name);
      __fd = open(acStack_220,0);
      if (-1 < __fd) {
        iVar3 = ioctl(__fd,0x80044509,&local_224);
        if ((-1 < iVar3) && ((local_224 & 2) != 0)) {
          close(__fd);
          pcVar5 = malloc(0x1b);
          if (pcVar5 != (char *)0x0) {
            sprintf(pcVar5,(char *)(DAT_00011b70 + 0x11b10),__dir,DAT_00011b6c + 0x11b0c,iVar4);
          }
          goto LAB_00011b10;
        }
        close(__fd);
      }
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
    pcVar5 = (char *)0x0;
LAB_00011b10:
    iVar4 = 0;
    do {
      ppdVar1 = local_228 + iVar4;
      iVar4 = iVar4 + 1;
      free(*ppdVar1);
    } while (iVar2 != iVar4);
    free(local_228);
  }
  return pcVar5;
}



/* ===== ts_setup @ 00011b9c size=212 ===== */

int ts_setup(char *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *__ptr;
  int *piVar3;
  char *pcVar4;
  
  if ((param_1 == (char *)0x0) &&
     (param_1 = getenv((char *)(DAT_00011c70 + 0x11be0)), param_1 == (char *)0x0)) {
    piVar3 = (int *)(DAT_00011c74 + 0x11bf8);
    iVar1 = DAT_00011c78 + 0x11bfc;
    do {
      iVar1 = ts_open(iVar1,param_2);
      if (iVar1 != 0) goto LAB_00011bbc;
      piVar3 = piVar3 + 1;
      iVar1 = *piVar3;
    } while (iVar1 != 0);
  }
  else {
    iVar1 = ts_open(param_1,param_2);
    if (iVar1 != 0) goto LAB_00011bbc;
  }
  __ptr = (void *)FUN_00011a28();
  if (__ptr == (void *)0x0) {
    return 0;
  }
  iVar1 = ts_open(__ptr,param_2);
  free(__ptr);
  if (iVar1 == 0) {
    return 0;
  }
LAB_00011bbc:
  iVar2 = ts_config(iVar1);
  if (iVar2 != 0) {
    piVar3 = __errno_location();
    pcVar4 = strerror(*piVar3);
    FUN_00011534(DAT_00011c7c + 0x11c64,pcVar4);
    ts_close(iVar1);
    return 0;
  }
  return iVar1;
}



/* ===== ts_libversion @ 00011c80 size=64 ===== */

int ts_libversion(void)

{
  int iVar1;
  
  iVar1 = DAT_00011cc4;
  if (*(short *)(DAT_00011cc0 + 0x11c8c) == 0) {
    *(short *)(DAT_00011cc0 + 0x11c8c) = 1;
    *(uint *)(iVar1 + 0x11cac) = *(uint *)(iVar1 + 0x11cac) | 0xa04;
  }
  return (int)&DAT_00011cc0 + DAT_00011cc8;
}



/* ===== tslib_version @ 00011ccc size=112 ===== */

int tslib_version(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00011d3c;
  puVar2 = (undefined4 *)ts_libversion();
  if (*(short *)(iVar1 + 0x11ce6) == 0) {
    snprintf((char *)(iVar1 + 0x11ce8),100,(char *)(DAT_00011d44 + 0x11d20),*puVar2,
             (int)puVar2[1] >> 0x10,puVar2[1],DAT_00011d40 + 0x11d14);
    *(undefined2 *)(iVar1 + 0x11ce6) = 1;
  }
  return DAT_00011d48 + 0x11d38;
}



/* ===== ts_print_ascii_logo @ 00011d4c size=256 ===== */

void ts_print_ascii_logo(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    puts((char *)(DAT_00011e60 + 0x11e24));
    puts((char *)(DAT_00011e64 + 0x11e30));
    puts((char *)(DAT_00011e68 + 0x11e3c));
    puts((char *)(DAT_00011e6c + 0x11e48));
  }
  else {
    iVar2 = 0;
    do {
      iVar1 = iVar2;
      putchar(0x20);
      iVar2 = iVar1 + 1;
    } while (param_1 != iVar1 + 1);
    iVar2 = 0;
    puts((char *)(DAT_00011e4c + 0x11d88));
    do {
      putchar(0x20);
      bVar3 = iVar2 != iVar1;
      iVar2 = iVar2 + 1;
    } while (bVar3);
    iVar2 = 0;
    puts((char *)(DAT_00011e50 + 0x11dac));
    do {
      putchar(0x20);
      bVar3 = iVar2 != iVar1;
      iVar2 = iVar2 + 1;
    } while (bVar3);
    iVar2 = 0;
    puts((char *)(DAT_00011e54 + 0x11dd0));
    do {
      putchar(0x20);
      bVar3 = iVar2 != iVar1;
      iVar2 = iVar2 + 1;
    } while (bVar3);
    iVar2 = 0;
    puts((char *)(DAT_00011e58 + 0x11df4));
    do {
      putchar(0x20);
      bVar3 = iVar2 != iVar1;
      iVar2 = iVar2 + 1;
    } while (bVar3);
  }
  puts((char *)(DAT_00011e5c + 0x11e18));
  return;
}



/* ===== ts_conf_get @ 00011e70 size=600 ===== */

undefined4 * ts_conf_get(undefined4 param_1)

{
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *pvVar1;
  int iVar2;
  char *__dest;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  
  __ptr = calloc(200,4);
  if ((__ptr == (void *)0x0) || (__ptr_00 = calloc(200,4), __ptr_00 == (void *)0x0)) {
    __ptr_01 = (void *)0x0;
    __ptr_00 = (void *)0x0;
  }
  else {
    __ptr_01 = calloc(200,4);
    if (__ptr_01 != (void *)0x0) {
      puVar5 = (undefined4 *)((int)__ptr_00 + -4);
      puVar8 = (undefined4 *)((int)__ptr + -4);
      puVar6 = puVar5;
      puVar7 = puVar8;
      do {
        pvVar1 = calloc(1,0x400);
        puVar7 = puVar7 + 1;
        *puVar7 = pvVar1;
        if (pvVar1 == (void *)0x0) goto LAB_00011fe0;
        pvVar1 = calloc(1,0x400);
        puVar6 = puVar6 + 1;
        *puVar6 = pvVar1;
        if (pvVar1 == (void *)0x0) goto LAB_00011fe0;
      } while (puVar6 != (undefined4 *)((int)__ptr_00 + 0x31c));
      iVar2 = FUN_00011494(param_1,__ptr,__ptr_00,__ptr_01);
      if (iVar2 == 0) {
        iVar2 = 0;
        iVar10 = 0;
        puVar6 = (undefined4 *)0x0;
        puVar7 = puVar8;
        do {
          puVar7 = puVar7 + 1;
          pcVar9 = (char *)*puVar7;
          puVar3 = puVar6;
          if (*pcVar9 != '\0') {
            puVar3 = calloc(1,0x18);
            if (puVar3 == (undefined4 *)0x0) break;
            __dest = calloc(1,0x400);
            *puVar3 = __dest;
            if (__dest == (char *)0x0) break;
            strcpy(__dest,pcVar9);
            pcVar9 = calloc(1,0x400);
            puVar3[1] = pcVar9;
            if (pcVar9 == (char *)0x0) break;
            strcpy(pcVar9,*(char **)((int)__ptr_00 + iVar2 * 4));
            uVar4 = *(undefined4 *)((int)__ptr_01 + iVar2 * 4);
            if (puVar6 != (undefined4 *)0x0) {
              puVar3[5] = puVar6;
            }
            puVar3[2] = uVar4;
            if (puVar6 != (undefined4 *)0x0) {
              puVar6[4] = puVar3;
            }
            puVar3[3] = iVar10;
            iVar10 = iVar10 + 1;
          }
          iVar2 = iVar2 + 1;
          puVar6 = puVar3;
          if (iVar2 == 200) {
            do {
              puVar8 = puVar8 + 1;
              free((void *)*puVar8);
              puVar5 = puVar5 + 1;
              free((void *)*puVar5);
            } while ((undefined4 *)((int)__ptr + 0x31c) != puVar8);
            free(__ptr);
            free(__ptr_00);
            free(__ptr_01);
            if (puVar3 != (undefined4 *)0x0) {
              puVar6 = (undefined4 *)puVar3[5];
              while (puVar7 = puVar6, puVar7 != (undefined4 *)0x0) {
                puVar3 = puVar7;
                puVar6 = (undefined4 *)puVar7[5];
              }
              return puVar3;
            }
            return (undefined4 *)0x0;
          }
        } while( true );
      }
    }
  }
LAB_00011fe0:
  iVar2 = 0;
  do {
    if (__ptr != (void *)0x0) {
      free(*(void **)((int)__ptr + iVar2 * 4));
    }
    if (__ptr_00 != (void *)0x0) {
      free(*(void **)((int)__ptr_00 + iVar2 * 4));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 200);
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if (__ptr_01 != (void *)0x0) {
    free(__ptr_01);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}



/* ===== ts_conf_set @ 000120c8 size=396 ===== */

undefined4 ts_conf_set(undefined4 *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  FILE *__s;
  int *piVar3;
  int iVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_00011534(DAT_00012274 + 0x12228);
    return 0xffffffff;
  }
  pcVar2 = getenv((char *)(DAT_00012254 + 0x120e0));
  if (pcVar2 == (char *)0x0) {
    pcVar2 = strdup((char *)(DAT_00012268 + 0x121cc));
    if (pcVar2 == (char *)0x0) {
      piVar3 = __errno_location();
      pcVar2 = strerror(*piVar3);
      FUN_00011534(DAT_00012278 + 0x1224c,pcVar2);
      return 0xffffffff;
    }
    __s = fopen(pcVar2,(char *)(DAT_0001226c + 0x121e0));
    if (__s == (FILE *)0x0) {
      free(pcVar2);
      goto LAB_000121f8;
    }
    free(pcVar2);
  }
  else {
    __s = fopen(pcVar2,(char *)(DAT_00012258 + 0x120f4));
    if (__s == (FILE *)0x0) {
LAB_000121f8:
      piVar3 = __errno_location();
      pcVar2 = strerror(*piVar3);
      FUN_00011534(DAT_00012270 + 0x12214,pcVar2);
      return 0xffffffff;
    }
  }
  fwrite((void *)(DAT_0001225c + 0x12114),1,0x15,__s);
  puVar1 = (undefined4 *)param_1[5];
  if ((undefined4 *)param_1[5] == (undefined4 *)0x0) goto LAB_00012148;
  do {
    param_1 = puVar1;
    puVar1 = (undefined4 *)param_1[5];
  } while ((undefined4 *)param_1[5] != (undefined4 *)0x0);
  iVar4 = param_1[2];
  while (iVar4 == 0) {
    param_1 = (undefined4 *)param_1[4];
    if (param_1 == (undefined4 *)0x0) goto LAB_000121b0;
LAB_00012148:
    iVar4 = param_1[2];
  }
  pcVar2 = (char *)(DAT_00012264 + 0x12174);
  fprintf(__s,(char *)(DAT_00012260 + 0x1216c),*param_1,param_1[1]);
  do {
    while (param_1[2] != 0) {
      param_1 = (undefined4 *)param_1[4];
      if (param_1 == (undefined4 *)0x0) goto LAB_000121b0;
    }
    fprintf(__s,pcVar2,*param_1,param_1[1]);
    param_1 = (undefined4 *)param_1[4];
  } while (param_1 != (undefined4 *)0x0);
LAB_000121b0:
  fclose(__s);
  return 0;
}



/* ===== ts_get_eventpath @ 0001227c size=8 ===== */

undefined4 ts_get_eventpath(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ===== FUN_00012284 @ 00012284 size=72 ===== */

char * FUN_00012284(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  char *__s;
  
  __s = (char *)*param_1;
  if ((__s != (char *)0x0) && (pcVar1 = strpbrk(__s,param_2), pcVar1 != (char *)0x0)) {
    *pcVar1 = '\0';
    *param_1 = pcVar1 + 1;
    return __s;
  }
  *param_1 = 0;
  return __s;
}



/* ===== _fini @ 000122cc size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00024000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00024004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00024008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002400c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bsearch @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00024028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlclose @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlclose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::scandir @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int scandir(char *__dir,dirent ***__namelist,__selector *__selector,__cmp *__cmp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlopen @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlopen(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alphasort @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int alphasort(dirent **__e1,dirent **__e2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dlsym @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dlsym(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsep @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00024090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strpbrk @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strpbrk(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


