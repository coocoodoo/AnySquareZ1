// media-ctl — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010a04 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00010a28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002a00c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00010a34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_0002a010)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010a40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_0002a014)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010a4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002a018)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010a58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002a01c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::strndup @ 00010a64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strndup_0002a020)(__string);
  return pcVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00010a70 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_0002a024)();
  return;
}



/* ===== <EXTERNAL>::fgets @ 00010a7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0002a028)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::gnu_dev_major @ 00010a88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_major_0002a02c)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010a94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002a030)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::readlink @ 00010aa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_readlink_0002a034)(__path);
  return sVar1;
}



/* ===== <EXTERNAL>::puts @ 00010aac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002a038)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010ab8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002a03c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00010ac4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_0002a040)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 00010ad0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_gnu_dev_minor_0002a044)((int)__dev,(int)(__dev >> 0x20));
  return uVar1;
}



/* ===== <EXTERNAL>::abort @ 00010adc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002a048)();
  return;
}



/* ===== <EXTERNAL>::strrchr @ 00010ae8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_0002a04c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::calloc @ 00010af4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0002a050)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010b00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002a054)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010b0c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002a058)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 00010b18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0002a05c)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010b24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002a060)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00010b30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002a064)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 00010b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_0002a068)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 00010b48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0002a06c)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::strdup @ 00010b60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_0002a074)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memset @ 00010b6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002a078)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010b78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0002a07c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010b84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_0002a080)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::stat @ 00010b90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_0002a084)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010b9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002a088)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002a08c)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002a090)(__status);
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010bc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002a094)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 00010bcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0002a098)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 00010bd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_0002a09c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010be4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002a0a0)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010bf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002a0a4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00010bfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_0002a0a8)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010c08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002a0ac)(__ptr);
  return;
}



/* ===== entry @ 00010c14 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002a070)
            (DAT_00010c48,param_2,&stack0x00000004,DAT_00010c4c,DAT_00010c44,param_1);
  return;
}



/* ===== FUN_00010c50 @ 00010c50 size=32 ===== */

void FUN_00010c50(void)

{
  if (DAT_00010c74 == DAT_00010c70) {
    return;
  }
  if (DAT_00010c78 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010c78)();
  return;
}



/* ===== _FINI_0 @ 00010cb4 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010cf0;
  if (*DAT_00010cf0 != '\0') {
    return;
  }
  FUN_00010c50();
  if (DAT_00010cf4 != 0) {
    __deregister_frame_info(DAT_00010cf8);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010cfc size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010d20 != 0) {
    __register_frame_info(DAT_00010d28,DAT_00010d24);
  }
  if ((DAT_00010cac - DAT_00010ca8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010cb0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010cb0)();
  return;
}



/* ===== FUN_00010d2c @ 00010d2c size=48 ===== */

uint FUN_00010d2c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00013094(param_1);
  return *(uint *)(iVar1 + 0x24) & 0xff0000;
}



/* ===== FUN_00010d5c @ 00010d5c size=292 ===== */

void FUN_00010d5c(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint local_1c;
  uint local_10;
  
  bVar1 = true;
  local_1c = param_3;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    if ((local_1c & *(uint *)(param_1 + local_10 * 8)) != 0) {
      if (!bVar1) {
        putchar(0x2c);
      }
      printf("%s",*(undefined4 *)(param_1 + local_10 * 8 + 4));
      local_1c = ~*(uint *)(param_1 + local_10 * 8) & local_1c;
      bVar1 = false;
    }
  }
  if (local_1c != 0) {
    if (!bVar1) {
      putchar(0x2c);
    }
    printf("0x%x",local_1c);
  }
  return;
}



/* ===== FUN_00010e80 @ 00010e80 size=488 ===== */

void FUN_00010e80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_c;
  
  local_c = FUN_00015358(param_1,&local_3c,param_2,param_3);
  if (local_c == 0) {
    uVar1 = FUN_00016f94(local_34);
    printf("\t\t[fmt:%s/%ux%u",uVar1,local_3c,local_38);
    if (local_30 != 0) {
      uVar1 = FUN_000170a0(local_30);
      printf(" field:%s",uVar1);
    }
    local_c = FUN_00015524(param_1,&local_4c,param_2,2,param_3);
    if (local_c == 0) {
      printf("\n\t\t crop.bounds:(%u,%u)/%ux%u",local_4c,local_48,local_44,local_40);
    }
    local_c = FUN_00015524(param_1,&local_4c,param_2,0,param_3);
    if (local_c == 0) {
      printf("\n\t\t crop:(%u,%u)/%ux%u",local_4c,local_48,local_44,local_40);
    }
    local_c = FUN_00015524(param_1,&local_4c,param_2,0x102,param_3);
    if (local_c == 0) {
      printf("\n\t\t compose.bounds:(%u,%u)/%ux%u",local_4c,local_48,local_44,local_40);
    }
    local_c = FUN_00015524(param_1,&local_4c,param_2,0x100,param_3);
    if (local_c == 0) {
      printf("\n\t\t compose:(%u,%u)/%ux%u",local_4c,local_48,local_44,local_40);
    }
    puts("]");
  }
  return;
}



/* ===== FUN_00011068 @ 00011068 size=152 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00011068(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  while( true ) {
    if (bVar1) {
      sprintf(&DAT_0002a280,"Unknown (%u)",param_1);
      return &DAT_0002a280;
    }
    if (param_1 == _DAT_00017a1c) break;
    bVar1 = true;
  }
  return _DAT_00017a20;
}



/* ===== FUN_00011100 @ 00011100 size=500 ===== */

void FUN_00011100(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar2 = FUN_00011068(*param_1);
  printf("\t\t[dv.%s:%s",param_2,uVar2);
  if (*param_1 == 0) {
    iVar3 = param_1[1] + param_1[7] + param_1[8] + param_1[9];
    iVar4 = param_1[2] +
            param_1[10] + param_1[0xb] + param_1[0xc] + param_1[0xd] + param_1[0xe] + param_1[0xf];
    iVar5 = param_1[1];
    iVar6 = param_1[2];
    if (param_1[3] == 0) {
      uVar1 = 0x7558;
    }
    else {
      uVar1 = 0x7554;
    }
    if (iVar4 * iVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_000171e0(param_1[5],param_1[6],iVar4 * iVar3,0);
    }
    printf(" %ux%u%s%llu (%ux%u)",iVar5,iVar6,uVar1 | 0x10000,uVar7,iVar3,iVar4);
    printf(" stds:");
    FUN_00010d5c(&DAT_00017450,5,param_1[0x10]);
    printf(" flags:");
    FUN_00010d5c(&DAT_00017518,6,param_1[0x11]);
  }
  puts("]");
  return;
}



/* ===== FUN_000112f4 @ 000112f4 size=280 ===== */

void FUN_000112f4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_14;
  
  local_a0 = param_2;
  local_14 = FUN_0001581c(param_1,&local_a4);
  if (local_14 == 0) {
    uVar1 = FUN_00011068(local_a4);
    printf("\t\t[dv.caps:%s",uVar1);
    if (local_a4 == 0) {
      printf(" min:%ux%u@%llu max:%ux%u@%llu",local_94,local_8c,local_80,local_84,local_80,local_90,
             local_88,local_7c,local_78);
      printf(" stds:");
      FUN_00010d5c(&DAT_00017450,5,local_74);
      printf(" caps:");
      FUN_00010d5c(&DAT_000174ac,4,local_70);
    }
    puts("]");
  }
  return;
}



/* ===== FUN_0001140c @ 0001140c size=236 ===== */

void FUN_0001140c(undefined4 param_1)

{
  undefined1 auStack_90 [132];
  int local_c;
  
  local_c = FUN_000158c8(param_1,auStack_90);
  if (local_c == -0x25) {
    puts("\t\t[dv.query:no-lock]");
  }
  else if (local_c < -0x24) {
    if (local_c != -0x43) {
      return;
    }
    puts("\t\t[dv.query:no-link]");
  }
  else if (local_c == -0x22) {
    puts("\t\t[dv.query:out-of-range]");
  }
  else {
    if (local_c != 0) {
      return;
    }
    FUN_00011100(auStack_90,"detect");
  }
  local_c = FUN_0001595c(param_1,auStack_90);
  if (local_c == 0) {
    FUN_00011100(auStack_90,"current");
  }
  return;
}



/* ===== FUN_000114f8 @ 000114f8 size=144 ===== */

char * FUN_000114f8(uint param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (1 < local_c) {
      return "Unknown";
    }
    if ((param_1 & 0xff0000) == *(uint *)(&DAT_00017a38 + local_c * 8)) break;
    local_c = local_c + 1;
  }
  return *(char **)(&DAT_00017a3c + local_c * 8);
}



/* ===== FUN_00011588 @ 00011588 size=164 ===== */

undefined * FUN_00011588(uint param_1)

{
  undefined *puVar1;
  uint local_c;
  
  local_c = param_1 & 0xffff;
  if ((param_1 & 0xff0000) == 0x10000) {
    if (4 < local_c) {
      local_c = 0;
    }
    puVar1 = (&PTR_s_Unknown_0002a0b8)[local_c];
  }
  else {
    puVar1 = PTR_s_Unknown_0002a0b8;
    if ((param_1 & 0xff0000) == 0x20000) {
      if (5 < local_c) {
        local_c = 0;
      }
      puVar1 = (&PTR_s_Unknown_0002a0cc)[local_c];
    }
  }
  return puVar1;
}



/* ===== FUN_0001162c @ 0001162c size=136 ===== */

char * FUN_0001162c(uint param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (1 < local_c) {
      return "Unknown";
    }
    if ((param_1 & *(uint *)(&DAT_00017a94 + local_c * 8)) != 0) break;
    local_c = local_c + 1;
  }
  return *(char **)(&DAT_00017a98 + local_c * 8);
}



/* ===== FUN_000116b4 @ 000116b4 size=1072 ===== */

void FUN_000116b4(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int local_18;
  undefined *local_14;
  uint local_10;
  uint local_c;
  
  uVar2 = FUN_00012e28(param_1);
  puts("digraph board {");
  puts("\trankdir=TB");
  local_c = 0;
  do {
    if (uVar2 <= local_c) {
      puts("}");
      return;
    }
    iVar3 = FUN_00012e50(param_1,local_c);
    puVar4 = (undefined4 *)FUN_00013094(iVar3);
    local_14 = (undefined *)FUN_00012f84(iVar3);
    uVar5 = FUN_00012f04(iVar3);
    if (local_14 == (undefined *)0x0) {
      local_14 = &DAT_0001763c;
    }
    iVar6 = FUN_00010d2c(iVar3);
    if (iVar6 == 0x10000) {
      printf("\tn%08x [label=\"%s\\n%s\", shape=box, style=filled, fillcolor=yellow]\n",*puVar4,
             puVar4 + 1,local_14);
LAB_00011934:
      for (local_10 = 0; local_10 < uVar5; local_10 = local_10 + 1) {
        piVar7 = (int *)FUN_00012f2c(iVar3,local_10);
        piVar9 = (int *)*piVar7;
        puVar4 = (undefined4 *)piVar7[1];
        if (iVar3 == *piVar9) {
          puVar8 = (undefined4 *)FUN_00013094(*piVar9);
          printf("\tn%08x",*puVar8);
          iVar6 = FUN_00010d2c(*piVar9);
          if (iVar6 == 0x20000) {
            printf(":port%u",piVar9[1]);
          }
          printf(" -> ");
          puVar8 = (undefined4 *)FUN_00013094(*puVar4);
          printf("n%08x",*puVar8);
          iVar6 = FUN_00010d2c(*puVar4);
          if (iVar6 == 0x20000) {
            printf(":port%u",puVar4[1]);
          }
          if ((piVar7[3] & 2U) == 0) {
            if ((piVar7[3] & 1U) == 0) {
              printf(" [style=dashed]");
            }
          }
          else {
            printf(" [style=bold]");
          }
          putchar(10);
        }
      }
    }
    else if (iVar6 == 0x20000) {
      printf("\tn%08x [label=\"{{",*puVar4);
      local_18 = 0;
      for (local_10 = 0; local_10 < *(ushort *)(puVar4 + 0xd); local_10 = local_10 + 1) {
        iVar6 = FUN_00012ea8(iVar3,local_10);
        if ((*(uint *)(iVar6 + 8) & 1) != 0) {
          if (local_18 == 0) {
            uVar1 = 0x763c;
          }
          else {
            uVar1 = 0x7698;
          }
          printf("%s<port%u> %u",uVar1 | 0x10000,local_10,local_10);
          local_18 = local_18 + 1;
        }
      }
      printf("} | %s",puVar4 + 1);
      if (local_14 != (undefined *)0x0) {
        printf("\\n%s",local_14);
      }
      printf(" | {");
      local_18 = 0;
      for (local_10 = 0; local_10 < *(ushort *)(puVar4 + 0xd); local_10 = local_10 + 1) {
        iVar6 = FUN_00012ea8(iVar3,local_10);
        if ((*(uint *)(iVar6 + 8) & 2) != 0) {
          if (local_18 == 0) {
            uVar1 = 0x763c;
          }
          else {
            uVar1 = 0x7698;
          }
          printf("%s<port%u> %u",uVar1 | 0x10000,local_10,local_10);
          local_18 = local_18 + 1;
        }
      }
      puts("}}\", shape=Mrecord, style=filled, fillcolor=green]");
      goto LAB_00011934;
    }
    local_c = local_c + 1;
  } while( true );
}



/* ===== FUN_00011ae4 @ 00011ae4 size=132 ===== */

void FUN_00011ae4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010d2c(param_1);
  if (iVar1 == 0x20000) {
    FUN_00010e80(param_1,*(undefined4 *)(param_2 + 4),1);
    FUN_000112f4(param_1,*(undefined4 *)(param_2 + 4),1);
    if ((*(uint *)(param_2 + 8) & 2) != 0) {
      FUN_0001140c(param_1);
    }
  }
  return;
}



/* ===== FUN_00011b68 @ 00011b68 size=768 ===== */

void FUN_00011b68(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  uint local_18;
  uint local_14;
  
  puVar3 = (undefined4 *)FUN_00013094(param_2);
  iVar4 = FUN_00012f84(param_2);
  uVar5 = FUN_00012f04(param_2);
  iVar6 = printf("- entity %u: ",*puVar3);
  if (*(ushort *)(puVar3 + 0xd) < 2) {
    uVar1 = 0x763c;
  }
  else {
    uVar1 = 0x774c;
  }
  if (uVar5 < 2) {
    uVar2 = 0x763c;
  }
  else {
    uVar2 = 0x774c;
  }
  printf("%s (%u pad%s, %u link%s)\n",puVar3 + 1,(uint)*(ushort *)(puVar3 + 0xd),uVar1 | 0x10000,
         uVar5,uVar2 | 0x10000,param_2,param_1);
  uVar7 = FUN_000114f8(puVar3[9]);
  uVar8 = FUN_00011588(puVar3[9]);
  uVar10 = puVar3[0xb];
  printf("%*ctype %s subtype %s flags %x\n",iVar6,0x20,uVar7,uVar8,uVar10);
  if (iVar4 != 0) {
    printf("%*cdevice node name %s\n",iVar6,0x20,iVar4,uVar8,uVar10);
  }
  local_14 = 0;
  do {
    if (*(ushort *)(puVar3 + 0xd) <= local_14) {
      putchar(10);
      return;
    }
    iVar4 = FUN_00012ea8(param_2,local_14);
    uVar7 = FUN_0001162c(*(undefined4 *)(iVar4 + 8));
    printf("\tpad%u: %s\n",local_14,uVar7);
    FUN_00011ae4(param_2,iVar4);
    local_18 = 0;
    while( true ) {
      if (uVar5 <= local_18) break;
      piVar9 = (int *)FUN_00012f2c(param_2,local_18);
      piVar11 = (int *)*piVar9;
      piVar12 = (int *)piVar9[1];
      if ((param_2 == *piVar11) && (local_14 == piVar11[1])) {
        iVar4 = FUN_00013094(*piVar12);
        printf("\t\t-> \"%s\":%u [",iVar4 + 4,piVar12[1]);
LAB_00011de4:
        FUN_00010d5c(&DAT_00017ac0,3,piVar9[3]);
        puts("]");
      }
      else if ((param_2 == *piVar12) && (local_14 == piVar12[1])) {
        iVar4 = FUN_00013094(*piVar11);
        printf("\t\t<- \"%s\":%u [",iVar4 + 4,piVar11[1]);
        goto LAB_00011de4;
      }
      local_18 = local_18 + 1;
    }
    local_14 = local_14 + 1;
  } while( true );
}



/* ===== FUN_00011e68 @ 00011e68 size=120 ===== */

void FUN_00011e68(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint local_c;
  
  uVar1 = FUN_00012e28(param_1);
  puts("Device topology");
  local_c = 0;
  while( true ) {
    if (uVar1 <= local_c) break;
    uVar2 = FUN_00012e50(param_1,local_c);
    FUN_00011b68(param_1,uVar2);
    local_c = local_c + 1;
  }
  return;
}



/* ===== FUN_00011ee0 @ 00011ee0 size=1692 ===== */

bool FUN_00011ee0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  char local_b4 [132];
  undefined1 auStack_30 [4];
  char *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = -1;
  iVar1 = FUN_000128c0(param_1,param_2);
  if (iVar1 != 0) {
    return true;
  }
  local_1c = FUN_000143ec(DAT_0002a0e4);
  if (local_1c == 0) {
    puts("Failed to create media device");
  }
  else {
    if ((DAT_0002a0e8 & 0x10) != 0) {
      FUN_00014314(local_1c,fprintf,stdout);
    }
    local_18 = FUN_000140c8(local_1c);
    if (local_18 < 0) {
      printf("Failed to enumerate %s (%d)\n",DAT_0002a0e4,local_18);
    }
    else {
      if ((DAT_0002a0e8 & 2) != 0) {
        local_20 = FUN_00013044(local_1c);
        printf("Media controller API version %u.%u.%u\n\n",*(uint *)(local_20 + 0x78) >> 0x10 & 0xff
               ,*(uint *)(local_20 + 0x78) >> 8 & 0xff,*(uint *)(local_20 + 0x78) & 0xff);
        printf("Media device information\n------------------------\ndriver          %s\nmodel           %s\nserial          %s\nbus info        %s\nhw revision     0x%x\ndriver version  %u.%u.%u\n\n"
               ,local_20,local_20 + 0x10,local_20 + 0x30,local_20 + 0x58,
               *(undefined4 *)(local_20 + 0x7c),*(uint *)(local_20 + 0x80) >> 0x10 & 0xff,
               *(uint *)(local_20 + 0x80) >> 8 & 0xff,*(uint *)(local_20 + 0x80) & 0xff);
      }
      if ((DAT_0002a0ec == 0) || (local_14 = FUN_00012cb0(local_1c,DAT_0002a0ec), local_14 != 0)) {
        if (DAT_0002a0f8 != 0) {
          local_24 = (undefined4 *)FUN_00014adc(local_1c,DAT_0002a0f8,0);
          if (local_24 == (undefined4 *)0x0) {
            printf("Pad \'%s\' not found\n",DAT_0002a0f8);
            goto LAB_00012548;
          }
          FUN_00010e80(*local_24,local_24[1],1);
        }
        if (DAT_0002a0fc != 0) {
          local_28 = (undefined4 *)FUN_00014adc(local_1c,DAT_0002a0fc,0);
          if (local_28 == (undefined4 *)0x0) {
            printf("Pad \'%s\' not found\n",DAT_0002a0fc);
            goto LAB_00012548;
          }
          local_18 = FUN_000158c8(*local_28,local_b4);
          if (local_18 < 0) {
            pcVar2 = strerror(-local_18);
            printf("Failed to query DV timings: %s\n",pcVar2);
            goto LAB_00012548;
          }
          local_18 = FUN_000159f0(*local_28,local_b4);
          if (local_18 < 0) {
            pcVar2 = strerror(-local_18);
            printf("Failed to set DV timings: %s\n",pcVar2);
            goto LAB_00012548;
          }
        }
        if ((DAT_0002a0e8 & 4) == 0) {
          if ((DAT_0002a0e8 & 2) == 0) {
            if ((local_14 != 0) &&
               (local_2c = (char *)FUN_00012f84(local_14), local_2c != (char *)0x0)) {
              puts(local_2c);
            }
          }
          else if (local_14 == 0) {
            FUN_00011e68(local_1c);
          }
          else {
            FUN_00011b68(local_1c,local_14);
          }
        }
        else {
          FUN_000116b4(local_1c);
        }
        if ((DAT_0002a0e8 & 8) != 0) {
          if ((DAT_0002a0e8 & 0x10) != 0) {
            puts("Resetting all links to inactive");
          }
          local_18 = FUN_0001347c(local_1c);
          if (local_18 != 0) {
            pcVar2 = strerror(-local_18);
            printf("Unable to reset links: %s (%d)\n",pcVar2,-local_18);
            goto LAB_00012548;
          }
        }
        if ((DAT_0002a0f4 == 0) || (local_18 = FUN_000151d0(local_1c,DAT_0002a0f4), local_18 == 0))
        {
          if ((DAT_0002a0f0 == 0) || (local_18 = FUN_00016ed8(local_1c,DAT_0002a0f0), local_18 == 0)
             ) {
            if ((DAT_0002a0e8 & 1) != 0) {
              while( true ) {
                puts("Enter a link to modify or enter to stop");
                pcVar2 = fgets(local_b4,0x20,stdin);
                if ((pcVar2 == (char *)0x0) || (local_b4[0] == '\n')) break;
                local_18 = FUN_00014ea0(local_1c,local_b4,auStack_30);
                if (local_18 != 0) {
                  pcVar2 = strerror(-local_18);
                  printf("Unable to parse link: %s (%d)\n",pcVar2,-local_18);
                }
              }
            }
            local_18 = 0;
          }
          else {
            pcVar2 = strerror(-local_18);
            printf("Unable to setup formats: %s (%d)\n",pcVar2,-local_18);
          }
        }
        else {
          pcVar2 = strerror(-local_18);
          printf("Unable to parse link: %s (%d)\n",pcVar2,-local_18);
        }
      }
      else {
        printf("Entity \'%s\' not found\n",DAT_0002a0ec);
      }
    }
  }
LAB_00012548:
  if (local_1c != 0) {
    FUN_000144f0(local_1c);
  }
  return local_18 != 0;
}



/* ===== FUN_0001257c @ 0001257c size=640 ===== */

void FUN_0001257c(undefined4 param_1)

{
  undefined4 uVar1;
  uint local_c;
  
  printf("%s [options]\n",param_1);
  printf("-d, --device dev\tMedia device name (default: %s)\n","/dev/media0");
  puts("-e, --entity name\tPrint the device name associated with the given entity");
  puts("-V, --set-v4l2 v4l2\tComma-separated list of formats to setup");
  puts("    --get-v4l2 pad\tPrint the active format on a given pad");
  puts("    --set-dv pad\tConfigure DV timings on a given pad");
  puts("-h, --help\t\tShow verbose help and exit");
  puts("-i, --interactive\tModify links interactively");
  puts("-l, --links links\tComma-separated list of link descriptors to setup");
  puts("    --known-mbus-fmts\tList known media bus formats and their numeric values");
  puts("-p, --print-topology\tPrint the device topology. If an entity");
  puts("\t\t\tis specified through the -e option, print");
  puts("\t\t\tinformation for that entity only.");
  puts("    --print-dot\t\tPrint the device topology as a dot graph");
  puts("-r, --reset\t\tReset all links to inactive");
  puts("-v, --verbose\t\tBe verbose");
  putchar(10);
  puts("Links and formats are defined as");
  puts("\tlinks           = link { \',\' link } ;");
  puts("\tlink            = pad \'->\' pad \'[\' flags \']\' ;");
  puts("\tpad             = entity \':\' pad-number ;");
  puts("\tentity          = entity-number | ( \'\"\' entity-name \'\"\' ) ;");
  putchar(10);
  puts("\tv4l2            = pad \'[\' v4l2-properties \']\' ;");
  puts("\tv4l2-properties = v4l2-property { \',\' v4l2-property } ;");
  puts("\tv4l2-property   = v4l2-mbusfmt | v4l2-crop | v4l2-interval");
  puts("\t                | v4l2-compose | v4l2-interval ;");
  puts("\tv4l2-mbusfmt    = \'fmt:\' fcc \'/\' size ; { \'field:\' v4l2-field ; }");
  puts("\tv4l2-crop       = \'crop:\' rectangle ;");
  puts("\tv4l2-compose    = \'compose:\' rectangle ;");
  puts("\tv4l2-interval   = \'@\' numerator \'/\' denominator ;");
  putchar(10);
  puts("\trectangle       = \'(\' left \',\' top, \')\' \'/\' size ;");
  puts("\tsize            = width \'x\' height ;");
  putchar(10);
  puts("where the fields are");
  puts("\tentity-number   Entity numeric identifier");
  puts("\tentity-name     Entity name (string) ");
  puts("\tpad-number      Pad numeric identifier");
  puts("\tflags           Link flags (0: inactive, 1: active)");
  puts("\tfcc             Format FourCC");
  puts("\twidth           Image width in pixels");
  puts("\theight          Image height in pixels");
  puts("\tnumerator       Frame interval numerator");
  puts("\tdenominator     Frame interval denominator");
  puts("\tv4l2-field      One of the following:");
  for (local_c = 0; local_c < 10; local_c = local_c + 1) {
    uVar1 = FUN_000170a0(local_c);
    printf("\t                %s\n",uVar1);
  }
  return;
}



/* ===== FUN_000127fc @ 000127fc size=196 ===== */

void FUN_000127fc(void)

{
  size_t sVar1;
  int local_18;
  char *local_14;
  int local_10;
  int *local_c;
  
  local_c = (int *)FUN_000171ac(&local_18);
  while( true ) {
    if (local_18 == 0) {
      return;
    }
    local_18 = local_18 + -1;
    local_14 = (char *)FUN_00016f94(*local_c);
    sVar1 = strlen(local_14);
    local_10 = 0x1e - sVar1;
    if (*local_c == 0) break;
    if (local_10 < 0) {
      local_10 = 0;
    }
    printf("%s %*c 0x%4.4x\n",local_14,local_10,0x20,*local_c);
    local_c = local_c + 1;
  }
  return;
}



/* ===== FUN_000128c0 @ 000128c0 size=760 ===== */

undefined4 FUN_000128c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 == 1) {
    FUN_0001257c(*param_2);
    return 1;
  }
LAB_00012b74:
  while( true ) {
    iVar1 = getopt_long(param_1,param_2,"d:e:f:hil:prvV:",&DAT_0002a100,0);
    if (iVar1 == -1) {
      return 0;
    }
    if (iVar1 != 0x6c) break;
    DAT_0002a0f4 = optarg;
  }
  if (iVar1 < 0x6d) {
    if (iVar1 == 0x65) {
      DAT_0002a0ec = optarg;
      goto LAB_00012b74;
    }
    if (iVar1 < 0x66) {
      if (iVar1 != 0x56) {
        if (iVar1 == 100) {
          DAT_0002a0e4 = optarg;
          goto LAB_00012b74;
        }
        goto LAB_00012b44;
      }
    }
    else {
      if (iVar1 == 0x68) {
        FUN_0001257c(*param_2);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar1 == 0x69) {
        DAT_0002a0e8 = DAT_0002a0e8 | 1;
        goto LAB_00012b74;
      }
      if (iVar1 != 0x66) goto LAB_00012b44;
      fwrite("Warning: the -f option is deprecated and has been replaced by -V.\n",1,0x42,stderr);
    }
    DAT_0002a0f0 = optarg;
    goto LAB_00012b74;
  }
  if (iVar1 == 0x100) {
    DAT_0002a0e8 = DAT_0002a0e8 | 4;
    goto LAB_00012b74;
  }
  if (0x100 < iVar1) {
    if (iVar1 == 0x102) {
      DAT_0002a0fc = optarg;
    }
    else {
      if (0x101 < iVar1) {
        if (iVar1 == 0x103) {
          FUN_000127fc();
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        goto LAB_00012b44;
      }
      DAT_0002a0f8 = optarg;
    }
    goto LAB_00012b74;
  }
  if (iVar1 == 0x72) {
    DAT_0002a0e8 = DAT_0002a0e8 | 8;
    goto LAB_00012b74;
  }
  if (iVar1 == 0x76) {
    DAT_0002a0e8 = DAT_0002a0e8 | 0x10;
    goto LAB_00012b74;
  }
  if (iVar1 == 0x70) {
    DAT_0002a0e8 = DAT_0002a0e8 | 2;
    goto LAB_00012b74;
  }
LAB_00012b44:
  printf("Invalid option -%c\n",iVar1);
  printf("Run %s -h for help.\n",*param_2);
  return 1;
}



/* ===== FUN_00012bb8 @ 00012bb8 size=48 ===== */

uint FUN_00012bb8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00013094(param_1);
  return *(uint *)(iVar1 + 0x24) & 0xff0000;
}



/* ===== FUN_00012cb0 @ 00012cb0 size=148 ===== */

int FUN_00012cb0(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0x110) <= local_c) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x10c) + local_c * 0x138;
    iVar1 = strcmp((char *)(iVar2 + 8),param_2);
    if (iVar1 == 0) break;
    local_c = local_c + 1;
  }
  return iVar2;
}



/* ===== FUN_00012d44 @ 00012d44 size=228 ===== */

int FUN_00012d44(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  uint local_c;
  
  bVar2 = (param_2 & 0x80000000) != 0;
  local_c = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0x110) <= local_c) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x10c) + local_c * 0x138;
    if (((param_2 & 0x7fffffff) == *(uint *)(iVar1 + 4)) && (!bVar2)) break;
    if (((param_2 & 0x7fffffff) < *(uint *)(iVar1 + 4)) && (bVar2)) {
      return iVar1;
    }
    local_c = local_c + 1;
  }
  return iVar1;
}



/* ===== FUN_00012e28 @ 00012e28 size=40 ===== */

undefined4 FUN_00012e28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x110);
}



/* ===== FUN_00012e50 @ 00012e50 size=88 ===== */

int FUN_00012e50(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x110)) {
    iVar1 = *(int *)(param_1 + 0x10c) + param_2 * 0x138;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00012ea8 @ 00012ea8 size=92 ===== */

int FUN_00012ea8(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < *(ushort *)(param_1 + 0x38)) {
    iVar1 = *(int *)(param_1 + 0x104) + param_2 * 0x18;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00012f04 @ 00012f04 size=40 ===== */

undefined4 FUN_00012f04(int param_1)

{
  return *(undefined4 *)(param_1 + 0x110);
}



/* ===== FUN_00012f2c @ 00012f2c size=88 ===== */

int FUN_00012f2c(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x110)) {
    iVar1 = *(int *)(param_1 + 0x108) + param_2 * 0x1c;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== FUN_00012f84 @ 00012f84 size=64 ===== */

int FUN_00012f84(int param_1)

{
  if (*(char *)(param_1 + 0x114) == '\0') {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x114;
  }
  return param_1;
}



/* ===== FUN_00013044 @ 00013044 size=40 ===== */

int FUN_00013044(int param_1)

{
  return param_1 + 0xc;
}



/* ===== FUN_00013094 @ 00013094 size=40 ===== */

int FUN_00013094(int param_1)

{
  return param_1 + 4;
}



/* ===== FUN_000130bc @ 000130bc size=212 ===== */

int FUN_000130bc(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 == -1) {
    (*(code *)param_1[0x45])(param_1[0x46],"Opening media device %s\n",param_1[2]);
    iVar2 = open((char *)param_1[2],2);
    *param_1 = iVar2;
    if (*param_1 < 0) {
      piVar1 = __errno_location();
      iVar2 = -*piVar1;
      (*(code *)param_1[0x45])
                (param_1[0x46],"%s: Can\'t open media device %s\n","media_device_open",param_1[2]);
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_00013190 @ 00013190 size=72 ===== */

void FUN_00013190(int *param_1)

{
  if (*param_1 != -1) {
    close(*param_1);
    *param_1 = -1;
  }
  return;
}



/* ===== FUN_000131d8 @ 000131d8 size=676 ===== */

int FUN_000131d8(int *param_1,int *param_2,int *param_3,uint param_4)

{
  int *piVar1;
  char *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  uint local_18;
  int *local_14;
  
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_3c = uStack_4c;
  uStack_34 = uStack_4c;
  uStack_2c = uStack_4c;
  uStack_20 = uStack_4c;
  local_1c = FUN_000130bc(param_1);
  if (-1 < local_1c) {
    local_18 = 0;
    while ((local_18 < *(uint *)(*param_2 + 0x110) &&
           ((((local_14 = (int *)(*(int *)(*param_2 + 0x108) + local_18 * 0x1c),
              *(int *)*local_14 != *param_2 || (*(int *)(*local_14 + 4) != param_2[1])) ||
             (*(int *)local_14[1] != *param_3)) || (*(int *)(local_14[1] + 4) != param_3[1]))))) {
      local_18 = local_18 + 1;
    }
    if (local_18 == *(uint *)(*param_2 + 0x110)) {
      (*(code *)param_1[0x45])(param_1[0x46],"%s: Link not found\n","media_setup_link");
      local_1c = -2;
    }
    else {
      local_50 = *(undefined4 *)(*param_2 + 4);
      uStack_4c = CONCAT22(uStack_4c._2_2_,(short)param_2[1]);
      local_48 = 2;
      uStack_3c = *(undefined4 *)(*param_3 + 4);
      local_38 = CONCAT22(local_38._2_2_,(short)param_3[1]);
      uStack_34 = 1;
      local_28 = local_14[3] & 2U | param_4;
      local_1c = ioctl(*param_1,0xc0347c03,&local_50);
      if (local_1c == -1) {
        piVar1 = __errno_location();
        local_1c = -*piVar1;
        pcVar3 = (code *)param_1[0x45];
        iVar4 = param_1[0x46];
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        (*pcVar3)(iVar4,"%s: Unable to setup link (%s)\n","media_setup_link",pcVar2);
      }
      else {
        local_14[3] = local_28;
        *(uint *)(local_14[2] + 0xc) = local_28;
        local_1c = 0;
      }
    }
  }
  FUN_00013190(param_1);
  return local_1c;
}



/* ===== FUN_0001347c @ 0001347c size=284 ===== */

int FUN_0001347c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  do {
    if (*(uint *)(param_1 + 0x110) <= local_c) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x10c) + local_c * 0x138;
    for (local_10 = 0; local_10 < *(uint *)(iVar2 + 0x110); local_10 = local_10 + 1) {
      puVar3 = (undefined4 *)(*(int *)(iVar2 + 0x108) + local_10 * 0x1c);
      if ((((puVar3[3] & 2) == 0) && (iVar2 == *(int *)*puVar3)) &&
         (iVar1 = FUN_000131d8(param_1,*puVar3,puVar3[1],puVar3[3] & 0xfffffffe), iVar1 < 0)) {
        return iVar1;
      }
    }
    local_c = local_c + 1;
  } while( true );
}



/* ===== FUN_00013598 @ 00013598 size=284 ===== */

int FUN_00013598(int param_1)

{
  void *pvVar1;
  int iVar2;
  uint local_c;
  
  if (*(uint *)(param_1 + 0x10c) <= *(uint *)(param_1 + 0x110)) {
    iVar2 = *(int *)(param_1 + 0x10c);
    pvVar1 = realloc(*(void **)(param_1 + 0x108),iVar2 * 0x38);
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
    for (local_c = 0; local_c < *(uint *)(param_1 + 0x110); local_c = local_c + 1) {
      *(void **)(*(int *)((int)pvVar1 + local_c * 0x1c + 8) + 8) =
           (void *)((int)pvVar1 + local_c * 0x1c);
    }
    *(int *)(param_1 + 0x10c) = iVar2 * 2;
    *(void **)(param_1 + 0x108) = pvVar1;
  }
  iVar2 = *(int *)(param_1 + 0x110);
  *(int *)(param_1 + 0x110) = iVar2 + 1;
  return *(int *)(param_1 + 0x108) + iVar2 * 0x1c;
}



/* ===== FUN_000136b4 @ 000136b4 size=1056 ===== */

int FUN_000136b4(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  code *pcVar4;
  undefined4 local_50;
  void *pvStack_4c;
  void *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_18 = 0;
  local_14 = 1;
  while( true ) {
    if ((uint)param_1[0x44] < local_14) {
      return local_18;
    }
    local_20 = param_1[0x43] + local_14 * 0x138 + -0x138;
    pvStack_4c = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_48 = *(void **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_44 = 0;
    local_50 = *(undefined4 *)(local_20 + 4);
    uStack_40 = pvStack_4c;
    uStack_3c = local_48;
    pvStack_4c = calloc((uint)*(ushort *)(local_20 + 0x38),0x14);
    local_48 = calloc((uint)*(ushort *)(local_20 + 0x3a),0x34);
    iVar1 = ioctl(*param_1,0xc01c7c02,&local_50);
    if (iVar1 < 0) break;
    for (local_1c = 0; local_1c < *(ushort *)(local_20 + 0x38); local_1c = local_1c + 1) {
      *(int *)(*(int *)(local_20 + 0x104) + local_1c * 0x18) = local_20;
      *(uint *)(*(int *)(local_20 + 0x104) + local_1c * 0x18 + 4) =
           (uint)*(ushort *)((int)pvStack_4c + local_1c * 0x14 + 4);
      *(undefined4 *)(*(int *)(local_20 + 0x104) + local_1c * 0x18 + 8) =
           *(undefined4 *)((int)pvStack_4c + local_1c * 0x14 + 8);
    }
    for (local_1c = 0; local_1c < *(ushort *)(local_20 + 0x3a); local_1c = local_1c + 1) {
      local_24 = (undefined4 *)((int)local_48 + local_1c * 0x34);
      local_28 = FUN_00012d44(param_1,*local_24);
      local_2c = FUN_00012d44(param_1,local_24[5]);
      if ((local_28 == 0) || (local_2c == 0)) {
        (*(code *)param_1[0x45])
                  (param_1[0x46],"WARNING entity %u link %u from %u/%u to %u/%u is invalid!\n",
                   local_14,local_1c,*local_24,*(undefined2 *)(local_24 + 1),local_24[5],
                   *(undefined2 *)(local_24 + 6));
        local_18 = -0x16;
      }
      else {
        local_30 = (int *)FUN_00013598(local_28);
        *local_30 = *(int *)(local_28 + 0x104) + (uint)*(ushort *)(local_24 + 1) * 0x18;
        local_30[1] = *(int *)(local_2c + 0x104) + (uint)*(ushort *)(local_24 + 6) * 0x18;
        local_30[3] = local_24[10];
        local_34 = (int *)FUN_00013598(local_2c);
        *local_34 = *(int *)(local_28 + 0x104) + (uint)*(ushort *)(local_24 + 1) * 0x18;
        local_34[1] = *(int *)(local_2c + 0x104) + (uint)*(ushort *)(local_24 + 6) * 0x18;
        local_34[3] = local_24[10];
        local_30[2] = (int)local_34;
        local_34[2] = (int)local_30;
      }
    }
    free(pvStack_4c);
    free(local_48);
    local_14 = local_14 + 1;
  }
  piVar2 = __errno_location();
  local_18 = -*piVar2;
  pcVar4 = (code *)param_1[0x45];
  iVar1 = param_1[0x46];
  piVar2 = __errno_location();
  pcVar3 = strerror(*piVar2);
  (*pcVar4)(iVar1,"%s: Unable to enumerate pads and links (%s).\n","media_enum_links",pcVar3);
  free(pvStack_4c);
  free(local_48);
  return local_18;
}



/* ===== FUN_00013ad4 @ 00013ad4 size=36 ===== */

undefined4 FUN_00013ad4(void)

{
  return 0;
}



/* ===== FUN_00013af8 @ 00013af8 size=32 ===== */

void FUN_00013af8(void)

{
  return;
}



/* ===== FUN_00013b18 @ 00013b18 size=40 ===== */

undefined4 FUN_00013b18(void)

{
  return 0xffffffa1;
}



/* ===== FUN_00013b40 @ 00013b40 size=588 ===== */

int FUN_00013b40(int param_1)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char acStack_4b0 [1024];
  char acStack_b0 [32];
  char acStack_90 [32];
  stat sStack_70;
  char *local_14;
  char *local_10;
  ssize_t local_c;
  
  sprintf(acStack_b0,"/sys/dev/char/%u:%u",*(undefined4 *)(param_1 + 0x4c),
          *(undefined4 *)(param_1 + 0x50));
  local_c = readlink(acStack_b0,acStack_4b0,0x3ff);
  if (local_c < 0) {
    piVar1 = __errno_location();
    iVar4 = -*piVar1;
  }
  else {
    acStack_4b0[local_c] = '\0';
    local_10 = strrchr(acStack_4b0,0x2f);
    if (local_10 == (char *)0x0) {
      iVar4 = -0x16;
    }
    else {
      sprintf(acStack_90,"/dev/%s",local_10 + 1);
      pcVar2 = strstr(local_10 + 1,"dvb");
      if (pcVar2 == (char *)0x0) {
        sprintf(acStack_90,"/dev/%s",local_10 + 1);
      }
      else {
        local_14 = local_10 + 1;
        iVar4 = strncmp(local_14,"dvb",3);
        if (iVar4 != 0) {
          return -0x16;
        }
        local_14 = local_14 + 3;
        local_10 = strchr(local_14,0x2e);
        if (local_10 == (char *)0x0) {
          return -0x16;
        }
        *local_10 = '/';
        sprintf(acStack_90,"/dev/dvb/adapter%s",local_14);
      }
      local_c = stat(acStack_90,&sStack_70);
      if (local_c < 0) {
        piVar1 = __errno_location();
        iVar4 = -*piVar1;
      }
      else {
        uVar3 = gnu_dev_major(sStack_70.st_rdev);
        if ((uVar3 == *(uint *)(param_1 + 0x4c)) &&
           (uVar3 = gnu_dev_minor(sStack_70.st_rdev), uVar3 == *(uint *)(param_1 + 0x50))) {
          strcpy((char *)(param_1 + 0x114),acStack_90);
        }
        iVar4 = 0;
      }
    }
  }
  return iVar4;
}



/* ===== FUN_00013d8c @ 00013d8c size=812 ===== */

int FUN_00013d8c(int *param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_1c;
  int *local_18;
  size_t local_14;
  int local_10;
  uint local_c;
  
  local_10 = FUN_00013ad4(&local_1c);
  if (local_10 < 0) {
    (*(code *)param_1[0x45])(param_1[0x46],"Can\'t get udev context\n");
  }
  local_c = 0;
  local_10 = 0;
  do {
    local_14 = (param_1[0x44] + 1) * 0x138;
    pvVar1 = realloc((void *)param_1[0x43],local_14);
    param_1[0x43] = (int)pvVar1;
    local_18 = (int *)(param_1[0x43] + param_1[0x44] * 0x138);
    memset(local_18,0,0x138);
    local_18[0x4d] = -1;
    local_18[1] = local_c | 0x80000000;
    *local_18 = (int)param_1;
    local_10 = ioctl(*param_1,0xc1007c01,local_18 + 1);
    if (local_10 < 0) {
      piVar2 = __errno_location();
      if (*piVar2 == 0x16) {
        local_10 = 0;
      }
      else {
        piVar2 = __errno_location();
        local_10 = -*piVar2;
      }
LAB_000140ac:
      FUN_00013af8(local_1c);
      return local_10;
    }
    local_18[0x43] = (uint)*(ushort *)(local_18 + 0xe) + (uint)*(ushort *)((int)local_18 + 0x3a);
    pvVar1 = malloc((uint)*(ushort *)(local_18 + 0xe) * 0x18);
    local_18[0x41] = (int)pvVar1;
    pvVar1 = malloc(local_18[0x43] * 0x1c);
    local_18[0x42] = (int)pvVar1;
    if ((local_18[0x41] == 0) || (local_18[0x42] == 0)) {
      local_10 = -0xc;
      goto LAB_000140ac;
    }
    param_1[0x44] = param_1[0x44] + 1;
    if ((local_18[0xc] & 1U) != 0) {
      switch(local_18[10]) {
      case 0x10001:
        param_1[0x47] = (int)local_18;
        break;
      case 0x10002:
        param_1[0x48] = (int)local_18;
        break;
      case 0x10003:
        param_1[0x49] = (int)local_18;
        break;
      case 0x10004:
        param_1[0x4a] = (int)local_18;
      }
    }
    iVar3 = FUN_00012bb8(local_18);
    if ((((iVar3 == 0x10000) || (iVar3 = FUN_00012bb8(local_18), iVar3 == 0x20000)) &&
        ((local_18[0x13] != 0 || (local_18[0x14] != 0)))) &&
       (iVar3 = FUN_00013b18(local_1c,local_18), iVar3 != 0)) {
      FUN_00013b40(local_18);
    }
    local_c = local_18[1];
  } while( true );
}



/* ===== FUN_000140c8 @ 000140c8 size=556 ===== */

int FUN_000140c8(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  code *pcVar4;
  int iVar5;
  int local_1c;
  
  if (param_1[0x43] == 0) {
    local_1c = FUN_000130bc(param_1);
    if (-1 < local_1c) {
      memset(param_1 + 3,0,0x100);
      iVar1 = ioctl(*param_1,0xc1007c00,param_1 + 3);
      if (iVar1 < 0) {
        piVar2 = __errno_location();
        local_1c = -*piVar2;
        pcVar4 = (code *)param_1[0x45];
        iVar1 = param_1[0x46];
        iVar5 = param_1[2];
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        (*pcVar4)(iVar1,"%s: Unable to retrieve media device information for device %s (%s)\n",
                  "media_device_enumerate",iVar5,pcVar3);
      }
      else {
        (*(code *)param_1[0x45])(param_1[0x46],"Enumerating entities\n");
        local_1c = FUN_00013d8c(param_1);
        if (local_1c < 0) {
          pcVar4 = (code *)param_1[0x45];
          iVar1 = param_1[0x46];
          iVar5 = param_1[2];
          pcVar3 = strerror(-local_1c);
          (*pcVar4)(iVar1,"%s: Unable to enumerate entities for device %s (%s)\n",
                    "media_device_enumerate",iVar5,pcVar3);
        }
        else {
          (*(code *)param_1[0x45])(param_1[0x46],"Found %u entities\n",param_1[0x44]);
          (*(code *)param_1[0x45])(param_1[0x46],"Enumerating pads and links\n");
          local_1c = FUN_000136b4(param_1);
          if (local_1c < 0) {
            (*(code *)param_1[0x45])
                      (param_1[0x46],"%s: Unable to enumerate pads and linksfor device %s\n",
                       "media_device_enumerate",param_1[2]);
          }
          else {
            local_1c = 0;
          }
        }
      }
      FUN_00013190(param_1);
    }
  }
  else {
    local_1c = 0;
  }
  return local_1c;
}



/* ===== FUN_00014314 @ 00014314 size=108 ===== */

void FUN_00014314(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    *(undefined1 **)(param_1 + 0x114) = &LAB_000142f4;
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  else {
    *(int *)(param_1 + 0x114) = param_2;
    *(undefined4 *)(param_1 + 0x118) = param_3;
  }
  return;
}



/* ===== FUN_00014380 @ 00014380 size=108 ===== */

undefined4 * FUN_00014380(void)

{
  undefined4 *puVar1;
  
  puVar1 = calloc(1,300);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0xffffffff;
    puVar1[1] = 1;
    FUN_00014314(puVar1,0,0);
  }
  return puVar1;
}



/* ===== FUN_000143ec @ 000143ec size=116 ===== */

int FUN_000143ec(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00014380();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    pcVar2 = strdup(param_1);
    *(char **)(iVar1 + 8) = pcVar2;
    if (*(int *)(iVar1 + 8) == 0) {
      FUN_000144f0(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00014460 @ 00014460 size=88 ===== */

int FUN_00014460(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00014380();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    memcpy((void *)(iVar1 + 0xc),param_1,0x100);
  }
  return iVar1;
}



/* ===== FUN_000144f0 @ 000144f0 size=244 ===== */

void FUN_000144f0(void *param_1)

{
  int iVar1;
  undefined4 local_c;
  
  *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + -1;
  if (*(int *)((int)param_1 + 4) < 1) {
    for (local_c = 0; local_c < *(uint *)((int)param_1 + 0x110); local_c = local_c + 1) {
      iVar1 = *(int *)((int)param_1 + 0x10c) + local_c * 0x138;
      free(*(void **)(iVar1 + 0x104));
      free(*(void **)(iVar1 + 0x108));
      if (*(int *)(iVar1 + 0x134) != -1) {
        close(*(int *)(iVar1 + 0x134));
      }
    }
    free(*(void **)((int)param_1 + 0x10c));
    free(*(void **)((int)param_1 + 8));
    free(param_1);
  }
  return;
}



/* ===== FUN_000145e4 @ 000145e4 size=572 ===== */

undefined4 FUN_000145e4(int param_1,int param_2,char *param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *__s;
  undefined4 *local_c;
  
  local_c = (undefined4 *)0x0;
  pvVar1 = realloc(*(void **)(param_1 + 0x10c),(*(int *)(param_1 + 0x110) + 1) * 0x138);
  if (pvVar1 == (void *)0x0) {
    uVar4 = 0xfffffff4;
  }
  else {
    *(void **)(param_1 + 0x10c) = pvVar1;
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
    __s = (int *)(*(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0x110) * 0x138 + -0x138);
    memset(__s,0,0x138);
    __s[0x4d] = -1;
    *__s = param_1;
    strncpy((char *)(__s + 0x45),param_3,0x20);
    *(undefined1 *)((int)__s + 0x133) = 0;
    __s[1] = 0;
    __s[10] = *(int *)(param_2 + 0x24);
    __s[0xc] = 0;
    memcpy(__s + 2,(void *)(param_2 + 4),0x20);
    switch(__s[10]) {
    case 0x10001:
      local_c = (undefined4 *)(param_1 + 0x11c);
      iVar2 = *(int *)(param_2 + 0x4c);
      __s[0x13] = *(int *)(param_2 + 0x48);
      __s[0x14] = iVar2;
      break;
    case 0x10002:
      local_c = (undefined4 *)(param_1 + 0x120);
      iVar2 = *(int *)(param_2 + 0x4c);
      __s[0x13] = *(int *)(param_2 + 0x48);
      __s[0x14] = iVar2;
      break;
    case 0x10003:
      local_c = (undefined4 *)(param_1 + 0x124);
      iVar2 = *(int *)(param_2 + 0x4c);
      iVar3 = *(int *)(param_2 + 0x50);
      __s[0x13] = *(int *)(param_2 + 0x48);
      __s[0x14] = iVar2;
      __s[0x15] = iVar3;
      break;
    case 0x10004:
      local_c = (undefined4 *)(param_1 + 0x128);
      __s[0x13] = *(int *)(param_2 + 0x48);
    }
    if (((*(uint *)(param_2 + 0x2c) & 1) != 0) &&
       (__s[0xc] = __s[0xc] | 1, local_c != (undefined4 *)0x0)) {
      *local_c = __s;
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== FUN_00014830 @ 00014830 size=684 ===== */

int FUN_00014830(int param_1,byte *param_2,byte **param_3)

{
  byte *pbVar1;
  byte **local_2c;
  byte *local_28;
  byte *local_20;
  char *local_1c;
  ulong local_18;
  int local_14;
  
  local_2c = param_3;
  local_28 = param_2;
  if (param_3 == (byte **)0x0) {
    local_2c = &local_20;
  }
  while ((*(ushort *)(__ctype_b + (uint)*local_28 * 2) & 0x20) != 0) {
    local_28 = local_28 + 1;
  }
  pbVar1 = local_28;
  if ((*local_28 == 0x22) || (*local_28 == 0x27)) {
    while (local_20 = pbVar1 + 1, *local_20 != 0) {
      if ((*local_20 == 0x22) || (pbVar1 = local_20, *local_20 == 0x27)) break;
    }
    if ((*local_20 != 0x22) && (*local_20 != 0x27)) {
      (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"missing matching \'\"\'\n");
      *local_2c = local_20;
      return 0;
    }
    local_1c = strndup((char *)(local_28 + 1),(size_t)(local_20 + (-1 - (int)local_28)));
    if (local_1c == (char *)0x0) {
      return 0;
    }
    local_14 = FUN_00012cb0(param_1,local_1c);
    free(local_1c);
    if (local_14 == 0) {
      (**(code **)(param_1 + 0x114))
                (*(undefined4 *)(param_1 + 0x118),"no such entity \"%.*s\"\n",
                 local_20 + (-1 - (int)local_28),local_28 + 1);
      *local_2c = local_28 + 1;
      return 0;
    }
    local_20 = local_20 + 1;
  }
  else {
    local_18 = strtoul((char *)local_28,(char **)&local_20,10);
    local_14 = FUN_00012d44(param_1,local_18);
    if (local_14 == 0) {
      (**(code **)(param_1 + 0x114))
                (*(undefined4 *)(param_1 + 0x118),"no such entity %d\n",local_18);
      *local_2c = local_28;
      return 0;
    }
  }
  local_28 = local_20;
  while ((*(ushort *)(__ctype_b + (uint)*local_28 * 2) & 0x20) != 0) {
    local_28 = local_28 + 1;
  }
  *local_2c = local_28;
  return local_14;
}



/* ===== FUN_00014adc @ 00014adc size=488 ===== */

int FUN_00014adc(int param_1,undefined4 param_2,byte **param_3)

{
  int iVar1;
  byte **local_2c;
  byte *local_28;
  byte *local_1c;
  ulong local_18;
  int local_14;
  
  local_2c = param_3;
  if (param_3 == (byte **)0x0) {
    local_2c = &local_1c;
  }
  local_14 = FUN_00014830(param_1,param_2,&local_1c);
  if (local_14 == 0) {
    *local_2c = local_1c;
    iVar1 = 0;
  }
  else {
    local_28 = local_1c;
    if (*local_1c == 0x3a) {
      do {
        local_28 = local_28 + 1;
      } while ((*(ushort *)(__ctype_b + (uint)*local_28 * 2) & 0x20) != 0);
      local_18 = strtoul((char *)local_28,(char **)&local_1c,10);
      if (local_18 < *(ushort *)(local_14 + 0x38)) {
        local_28 = local_1c;
        while ((*(ushort *)(__ctype_b + (uint)*local_28 * 2) & 0x20) != 0) {
          local_28 = local_28 + 1;
        }
        *local_2c = local_28;
        iVar1 = *(int *)(local_14 + 0x104) + local_18 * 0x18;
      }
      else {
        (**(code **)(param_1 + 0x114))
                  (*(undefined4 *)(param_1 + 0x118),
                   "No pad \'%d\' on entity \"%s\". Maximum pad number is %d\n",local_18,
                   local_14 + 8,*(ushort *)(local_14 + 0x38) - 1);
        *local_2c = local_28;
        iVar1 = 0;
      }
    }
    else {
      (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"Expected \':\'\n",*local_1c);
      *local_2c = local_1c;
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00014cc4 @ 00014cc4 size=476 ===== */

undefined4 * FUN_00014cc4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char *local_24;
  undefined4 *local_20;
  int *local_1c;
  int *local_18;
  uint local_14;
  
  local_18 = (int *)FUN_00014adc(param_1,param_2,&local_24);
  if (local_18 == (int *)0x0) {
    *param_3 = local_24;
  }
  else if ((*local_24 == '-') && (local_24[1] == '>')) {
    local_1c = (int *)FUN_00014adc(param_1,local_24 + 2,&local_24);
    if (local_1c == (int *)0x0) {
      *param_3 = local_24;
    }
    else {
      *param_3 = local_24;
      for (local_14 = 0; local_14 < *(uint *)(*local_18 + 0x110); local_14 = local_14 + 1) {
        local_20 = (undefined4 *)(*(int *)(*local_18 + 0x108) + local_14 * 0x1c);
        if ((local_18 == (int *)*local_20) && (local_1c == (int *)local_20[1])) {
          return local_20;
        }
      }
      (**(code **)(param_1 + 0x114))
                (*(undefined4 *)(param_1 + 0x118),"No link between \"%s\":%d and \"%s\":%d\n",
                 *local_18 + 8,local_18[1],*local_1c + 8,local_1c[1]);
    }
  }
  else {
    *param_3 = local_24;
    (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"Expected \'->\'\n");
  }
  return (undefined4 *)0x0;
}



/* ===== FUN_00014ea0 @ 00014ea0 size=596 ===== */

undefined4 FUN_00014ea0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  byte *local_28;
  byte *local_1c;
  ulong local_18;
  int *local_14;
  
  local_14 = (int *)FUN_00014cc4(param_1,param_2,&local_1c);
  if (local_14 == (int *)0x0) {
    (**(code **)(param_1 + 0x114))
              (*(undefined4 *)(param_1 + 0x118),"%s: Unable to parse link\n",
               "media_parse_setup_link");
    *param_3 = local_1c;
    uVar1 = 0xffffffea;
  }
  else if (*local_1c == 0x5b) {
    local_18 = strtoul((char *)(local_1c + 1),(char **)&local_1c,10);
    local_28 = local_1c;
    while ((*(ushort *)(__ctype_b + (uint)*local_28 * 2) & 0x20) != 0) {
      local_28 = local_28 + 1;
    }
    if (*local_28 == 0x5d) {
      do {
        local_28 = local_28 + 1;
      } while ((*(ushort *)(__ctype_b + (uint)*local_28 * 2) & 0x20) != 0);
      *param_3 = local_28;
      (**(code **)(param_1 + 0x114))
                (*(undefined4 *)(param_1 + 0x118),"Setting up link %u:%u -> %u:%u [%u]\n",
                 *(undefined4 *)(*(int *)*local_14 + 4),*(undefined4 *)(*local_14 + 4),
                 *(undefined4 *)(*(int *)local_14[1] + 4),*(undefined4 *)(local_14[1] + 4),local_18)
      ;
      uVar1 = FUN_000131d8(param_1,*local_14,local_14[1],local_18);
    }
    else {
      (**(code **)(param_1 + 0x114))
                (*(undefined4 *)(param_1 + 0x118),"Unable to parse link flags: expected \']\'.\n");
      *param_3 = local_28;
      uVar1 = 0xffffffea;
    }
  }
  else {
    (**(code **)(param_1 + 0x114))
              (*(undefined4 *)(param_1 + 0x118),"Unable to parse link flags: expected \'[\'.\n");
    *param_3 = local_1c;
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== FUN_000150f4 @ 000150f4 size=220 ===== */

void FUN_000150f4(int param_1,char *param_2,int param_3)

{
  size_t sVar1;
  uint local_14;
  
  local_14 = (param_3 - (int)param_2) + 1;
  if ((int)local_14 < 0) {
    local_14 = 0;
  }
  sVar1 = strlen(param_2);
  if (sVar1 < local_14) {
    local_14 = strlen(param_2);
  }
  (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),&DAT_000187a4);
  (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),&DAT_000187a8,param_2);
  (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118)," %*s\n",local_14,&DAT_000187b0);
  return;
}



/* ===== FUN_000151d0 @ 000151d0 size=152 ===== */

int FUN_000151d0(undefined4 param_1,char *param_2)

{
  int iVar1;
  char *local_18;
  char *local_10;
  int local_c;
  
  local_18 = param_2;
  do {
    local_c = FUN_00014ea0(param_1,local_18,&local_10);
    if (local_c < 0) {
      FUN_000150f4(param_1,local_18,local_10);
      return local_c;
    }
    local_18 = local_10 + 1;
  } while (*local_10 == ',');
  if (*local_10 == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = -0x16;
  }
  return iVar1;
}



/* ===== FUN_00015268 @ 00015268 size=184 ===== */

int FUN_00015268(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x4d] == -1) {
    iVar2 = open((char *)(param_1 + 0x45),2);
    param_1[0x4d] = iVar2;
    if (param_1[0x4d] == -1) {
      piVar1 = __errno_location();
      iVar2 = -*piVar1;
      (**(code **)(*param_1 + 0x114))
                (*(undefined4 *)(*param_1 + 0x118),"%s: Failed to open subdev device node %s\n",
                 "v4l2_subdev_open",param_1 + 0x45);
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



/* ===== FUN_00015320 @ 00015320 size=56 ===== */

void FUN_00015320(int param_1)

{
  close(*(int *)(param_1 + 0x134));
  *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
  return;
}



/* ===== FUN_00015358 @ 00015358 size=212 ===== */

int FUN_00015358(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_c;
  
  local_c = FUN_00015268(param_1);
  if (-1 < local_c) {
    memset(&local_64,0,0x58);
    local_64 = param_4;
    local_60 = param_3;
    local_c = ioctl(*(int *)(param_1 + 0x134),0xc0585604,&local_64);
    if (local_c < 0) {
      piVar1 = __errno_location();
      local_c = -*piVar1;
    }
    else {
      *param_2 = local_5c;
      param_2[1] = uStack_58;
      param_2[2] = uStack_54;
      param_2[3] = uStack_50;
      param_2[4] = local_4c;
      param_2[5] = uStack_48;
      param_2[6] = uStack_44;
      param_2[7] = uStack_40;
      param_2[8] = local_3c;
      param_2[9] = uStack_38;
      param_2[10] = uStack_34;
      param_2[0xb] = uStack_30;
      local_c = 0;
    }
  }
  return local_c;
}



/* ===== FUN_0001542c @ 0001542c size=248 ===== */

int FUN_0001542c(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_c;
  
  local_c = FUN_00015268(param_1);
  if (-1 < local_c) {
    memset(&local_64,0,0x58);
    local_5c = *param_2;
    uStack_58 = param_2[1];
    uStack_54 = param_2[2];
    uStack_50 = param_2[3];
    local_4c = param_2[4];
    uStack_48 = param_2[5];
    uStack_44 = param_2[6];
    uStack_40 = param_2[7];
    local_3c = param_2[8];
    uStack_38 = param_2[9];
    uStack_34 = param_2[10];
    uStack_30 = param_2[0xb];
    local_64 = param_4;
    local_60 = param_3;
    local_c = ioctl(*(int *)(param_1 + 0x134),0xc0585605,&local_64);
    if (local_c < 0) {
      piVar1 = __errno_location();
      local_c = -*piVar1;
    }
    else {
      *param_2 = local_5c;
      param_2[1] = uStack_58;
      param_2[2] = uStack_54;
      param_2[3] = uStack_50;
      param_2[4] = local_4c;
      param_2[5] = uStack_48;
      param_2[6] = uStack_44;
      param_2[7] = uStack_40;
      param_2[8] = local_3c;
      param_2[9] = uStack_38;
      param_2[10] = uStack_34;
      param_2[0xb] = uStack_30;
      local_c = 0;
    }
  }
  return local_c;
}



/* ===== FUN_00015524 @ 00015524 size=364 ===== */

int FUN_00015524(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_c;
  
  local_c = FUN_00015268(param_1);
  if (-1 < local_c) {
    memset(&local_4c,0,0x40);
    local_4c = param_5;
    local_48 = param_3;
    local_44 = param_4;
    local_c = ioctl(*(int *)(param_1 + 0x134),0xc040563d,&local_4c);
    if (local_c < 0) {
      piVar1 = __errno_location();
      if ((*piVar1 == 0x19) && (param_4 == 0)) {
        memset(&local_4c,0,0x38);
        local_4c = param_5;
        local_48 = param_3;
        local_c = ioctl(*(int *)(param_1 + 0x134),0xc038563b,&local_4c);
        if (local_c < 0) {
          piVar1 = __errno_location();
          local_c = -*piVar1;
        }
        else {
          *param_2 = local_44;
          param_2[1] = iStack_40;
          param_2[2] = local_3c;
          param_2[3] = iStack_38;
          local_c = 0;
        }
      }
      else {
        piVar1 = __errno_location();
        local_c = -*piVar1;
      }
    }
    else {
      *param_2 = local_3c;
      param_2[1] = iStack_38;
      param_2[2] = iStack_34;
      param_2[3] = iStack_30;
      local_c = 0;
    }
  }
  return local_c;
}



/* ===== FUN_00015690 @ 00015690 size=396 ===== */

int FUN_00015690(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_c;
  
  local_c = FUN_00015268(param_1);
  if (-1 < local_c) {
    memset(&local_4c,0,0x40);
    local_4c = param_5;
    local_3c = *param_2;
    uStack_38 = param_2[1];
    uStack_34 = param_2[2];
    uStack_30 = param_2[3];
    local_48 = param_3;
    local_44 = param_4;
    local_c = ioctl(*(int *)(param_1 + 0x134),0xc040563e,&local_4c);
    if (local_c < 0) {
      piVar1 = __errno_location();
      if ((*piVar1 == 0x19) && (param_4 == 0)) {
        memset(&local_4c,0,0x38);
        local_4c = param_5;
        local_44 = *param_2;
        uStack_40 = param_2[1];
        local_3c = param_2[2];
        uStack_38 = param_2[3];
        local_48 = param_3;
        local_c = ioctl(*(int *)(param_1 + 0x134),0xc038563c,&local_4c);
        if (local_c < 0) {
          piVar1 = __errno_location();
          local_c = -*piVar1;
        }
        else {
          *param_2 = local_44;
          param_2[1] = uStack_40;
          param_2[2] = local_3c;
          param_2[3] = uStack_38;
          local_c = 0;
        }
      }
      else {
        piVar1 = __errno_location();
        local_c = -*piVar1;
      }
    }
    else {
      *param_2 = local_3c;
      param_2[1] = uStack_38;
      param_2[2] = uStack_34;
      param_2[3] = uStack_30;
      local_c = 0;
    }
  }
  return local_c;
}



/* ===== FUN_0001581c @ 0001581c size=172 ===== */

int FUN_0001581c(int param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)((int)param_2 + 4);
  iVar1 = FUN_00015268(param_1);
  if (-1 < iVar1) {
    memset(param_2,0,0x90);
    *(undefined4 *)((int)param_2 + 4) = uVar3;
    iVar1 = ioctl(*(int *)(param_1 + 0x134),0xc0905664,param_2);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      iVar1 = -*piVar2;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_000158c8 @ 000158c8 size=148 ===== */

int FUN_000158c8(int param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00015268(param_1);
  if (-1 < iVar1) {
    memset(param_2,0,0x84);
    iVar1 = ioctl(*(int *)(param_1 + 0x134),0x80845663,param_2);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      iVar1 = -*piVar2;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_0001595c @ 0001595c size=148 ===== */

int FUN_0001595c(int param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00015268(param_1);
  if (-1 < iVar1) {
    memset(param_2,0,0x84);
    iVar1 = ioctl(*(int *)(param_1 + 0x134),0xc0845658,param_2);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      iVar1 = -*piVar2;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_000159f0 @ 000159f0 size=132 ===== */

int FUN_000159f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00015268(param_1);
  if (-1 < iVar1) {
    iVar1 = ioctl(*(int *)(param_1 + 0x134),0xc0845657,param_2);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      iVar1 = -*piVar2;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== FUN_00015a74 @ 00015a74 size=172 ===== */

int FUN_00015a74(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  int local_c;
  
  local_c = FUN_00015268(param_1);
  if (-1 < local_c) {
    memset(auStack_3c,0,0x30);
    local_c = ioctl(*(int *)(param_1 + 0x134),0xc0305615,auStack_3c);
    if (local_c < 0) {
      piVar1 = __errno_location();
      local_c = -*piVar1;
    }
    else {
      *param_2 = local_38;
      param_2[1] = uStack_34;
      local_c = 0;
    }
  }
  return local_c;
}



/* ===== FUN_00015b20 @ 00015b20 size=188 ===== */

int FUN_00015b20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  int local_c;
  
  local_c = FUN_00015268(param_1);
  if (-1 < local_c) {
    memset(auStack_3c,0,0x30);
    local_38 = *param_2;
    uStack_34 = param_2[1];
    local_c = ioctl(*(int *)(param_1 + 0x134),0xc0305616,auStack_3c);
    if (local_c < 0) {
      piVar1 = __errno_location();
      local_c = -*piVar1;
    }
    else {
      *param_2 = local_38;
      param_2[1] = uStack_34;
      local_c = 0;
    }
  }
  return local_c;
}



/* ===== FUN_00015bdc @ 00015bdc size=504 ===== */

undefined4 FUN_00015bdc(int param_1,ulong *param_2,byte *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  byte *local_34;
  byte *local_24;
  ulong local_20;
  ulong local_1c;
  ulong local_18;
  char *local_14;
  
  local_34 = param_3;
  while ((*(ushort *)(__ctype_b + (uint)*local_34 * 2) & 0x20) != 0) {
    local_34 = local_34 + 1;
  }
  for (local_24 = local_34; ((*local_24 != 0x2f && (*local_24 != 0x20)) && (*local_24 != 0));
      local_24 = local_24 + 1) {
  }
  local_14 = strndup((char *)local_34,(int)local_24 - (int)local_34);
  if (local_14 == (char *)0x0) {
    uVar1 = 0xfffffff4;
  }
  else {
    local_18 = FUN_00017018(local_14);
    free(local_14);
    if (local_18 == 0xffffffff) {
      (**(code **)(param_1 + 0x114))
                (*(undefined4 *)(param_1 + 0x118),"Invalid pixel code \'%.*s\'\n",
                 (int)local_24 - (int)local_34,local_34);
      uVar1 = 0xffffffea;
    }
    else {
      local_1c = strtoul((char *)(local_24 + 1),(char **)&local_24,10);
      if (*local_24 == 0x78) {
        local_20 = strtoul((char *)(local_24 + 1),(char **)&local_24,10);
        *param_4 = local_24;
        memset(param_2,0,0x30);
        *param_2 = local_1c;
        param_2[1] = local_20;
        param_2[2] = local_18;
        uVar1 = 0;
      }
      else {
        (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"Expected \'x\'\n");
        uVar1 = 0xffffffea;
      }
    }
  }
  return uVar1;
}



/* ===== FUN_00015dd4 @ 00015dd4 size=592 ===== */

undefined4 FUN_00015dd4(int param_1,ulong *param_2,char *param_3,undefined4 *param_4)

{
  ulong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *__nptr;
  char *local_c;
  
  if (*param_3 == '(') {
    uVar1 = strtoul(param_3 + 1,&local_c,10);
    *param_2 = uVar1;
    if (*local_c == ',') {
      uVar1 = strtoul(local_c + 1,&local_c,10);
      param_2[1] = uVar1;
      pcVar2 = local_c + 1;
      if (*local_c == ')') {
        if (*pcVar2 == '/') {
          __nptr = local_c + 2;
          local_c = pcVar2;
          uVar1 = strtoul(__nptr,&local_c,10);
          param_2[2] = uVar1;
          if (*local_c == 'x') {
            uVar1 = strtoul(local_c + 1,&local_c,10);
            param_2[3] = uVar1;
            *param_4 = local_c;
            uVar3 = 0;
          }
          else {
            (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"Expected \'x\'\n");
            *param_4 = local_c;
            uVar3 = 0xffffffea;
          }
        }
        else {
          local_c = pcVar2;
          (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"Expected \'/\'\n");
          *param_4 = local_c;
          uVar3 = 0xffffffea;
        }
      }
      else {
        local_c = pcVar2;
        (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"Expected \')\'\n");
        *param_4 = local_c + -1;
        uVar3 = 0xffffffea;
      }
    }
    else {
      (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"Expected \',\'\n");
      *param_4 = local_c;
      uVar3 = 0xffffffea;
    }
  }
  else {
    (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"Expected \'(\'\n");
    *param_4 = param_3;
    uVar3 = 0xffffffea;
  }
  return uVar3;
}



/* ===== FUN_00016024 @ 00016024 size=384 ===== */

undefined4 FUN_00016024(int param_1,ulong *param_2,byte *param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  byte *local_1c;
  byte *local_c;
  
  local_1c = param_3;
  while ((*(ushort *)(__ctype_b + (uint)*local_1c * 2) & 0x20) != 0) {
    local_1c = local_1c + 1;
  }
  uVar1 = strtoul((char *)local_1c,(char **)&local_c,10);
  *param_2 = uVar1;
  local_1c = local_c;
  while ((*(ushort *)(__ctype_b + (uint)*local_1c * 2) & 0x20) != 0) {
    local_1c = local_1c + 1;
  }
  if (*local_1c == 0x2f) {
    do {
      local_1c = local_1c + 1;
    } while ((*(ushort *)(__ctype_b + (uint)*local_1c * 2) & 0x20) != 0);
    uVar1 = strtoul((char *)local_1c,(char **)&local_c,10);
    param_2[1] = uVar1;
    *param_4 = local_c;
    uVar2 = 0;
  }
  else {
    (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"Expected \'/\'\n");
    *param_4 = local_1c;
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== FUN_000161a4 @ 000161a4 size=192 ===== */

undefined4 FUN_000161a4(char *param_1,int *param_2)

{
  size_t __n;
  int iVar1;
  undefined4 uVar2;
  
  __n = strlen(param_1);
  iVar1 = strncmp(param_1,(char *)*param_2,__n);
  if (iVar1 == 0) {
    *param_2 = *param_2 + __n;
    while ((*(ushort *)(__ctype_b + (uint)*(byte *)*param_2 * 2) & 0x20) != 0) {
      *param_2 = *param_2 + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00016264 @ 00016264 size=1304 ===== */

int FUN_00016264(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                byte *param_6,undefined4 *param_7)

{
  int iVar1;
  byte *local_28;
  int local_24;
  int local_20;
  char *local_1c;
  int local_18;
  char local_11;
  
  while ((*(ushort *)(__ctype_b + (uint)*param_6 * 2) & 0x20) != 0) {
    param_6 = param_6 + 1;
  }
  local_18 = FUN_00014adc(param_1,param_6,&local_28);
  if (local_18 == 0) {
    *param_7 = local_28;
  }
  else {
    param_6 = local_28;
    while ((*(ushort *)(__ctype_b + (uint)*param_6 * 2) & 0x20) != 0) {
      param_6 = param_6 + 1;
    }
    if (*param_6 == 0x5b) {
      local_11 = '\x01';
      param_6 = param_6 + 1;
      do {
        while ((*(ushort *)(__ctype_b + (uint)*param_6 * 2) & 0x20) != 0) {
          param_6 = param_6 + 1;
        }
        iVar1 = FUN_000161a4(&DAT_000188d0,&param_6);
        if ((iVar1 == 0) &&
           ((local_11 == '\0' || ((*(ushort *)(__ctype_b + (uint)*param_6 * 2) & 1) == 0)))) {
          iVar1 = FUN_000161a4("field:",&param_6);
          if (iVar1 == 0) {
            iVar1 = FUN_000161a4("crop:",&param_6);
            if ((iVar1 == 0) && (*param_6 != 0x28)) {
              iVar1 = FUN_000161a4("compose:",&param_6);
              if (iVar1 == 0) {
                if (*param_6 != 0x40) {
                  if (*param_6 != 0x5d) {
                    (**(code **)(param_1 + 0x114))
                              (*(undefined4 *)(param_1 + 0x118),"Expected \']\'\n");
                    *param_7 = param_6;
                    return 0;
                  }
                  *param_7 = param_6 + 1;
                  return local_18;
                }
                param_6 = param_6 + 1;
                local_24 = FUN_00016024(param_1,param_5,param_6,&local_28);
                if (local_24 < 0) {
                  *param_7 = local_28;
                  return 0;
                }
                param_6 = local_28;
              }
              else {
                local_24 = FUN_00015dd4(param_1,param_4,param_6,&local_28);
                if (local_24 < 0) {
                  *param_7 = local_28;
                  return 0;
                }
                param_6 = local_28;
                while ((*(ushort *)(__ctype_b + (uint)*param_6 * 2) & 0x20) != 0) {
                  param_6 = param_6 + 1;
                }
              }
            }
            else {
              local_24 = FUN_00015dd4(param_1,param_3,param_6,&local_28);
              if (local_24 < 0) {
                *param_7 = local_28;
                return 0;
              }
              param_6 = local_28;
            }
          }
          else {
            for (local_28 = param_6;
                ((*(ushort *)(__ctype_b + (uint)*local_28 * 2) & 4) != 0 || (*local_28 == 0x2d));
                local_28 = local_28 + 1) {
            }
            local_1c = strndup((char *)param_6,(int)local_28 - (int)param_6);
            if (local_1c == (char *)0x0) {
              *param_7 = param_6;
              return 0;
            }
            local_20 = FUN_00017124(local_1c);
            free(local_1c);
            if (local_20 == -1) {
              (**(code **)(param_1 + 0x114))
                        (*(undefined4 *)(param_1 + 0x118),"Invalid field value \'%*s\'\n",
                         (int)local_28 - (int)param_6,param_6);
              *param_7 = param_6;
              return 0;
            }
            *(int *)(param_2 + 0xc) = local_20;
            param_6 = local_28;
          }
        }
        else {
          local_24 = FUN_00015bdc(param_1,param_2,param_6,&local_28);
          if (local_24 < 0) {
            *param_7 = local_28;
            return 0;
          }
          param_6 = local_28;
        }
        local_11 = '\0';
      } while( true );
    }
    param_6 = param_6 + 1;
    (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"Expected \'[\'\n");
    *param_7 = param_6 + -1;
  }
  return 0;
}



/* ===== FUN_0001677c @ 0001677c size=420 ===== */

int FUN_0001677c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  
  if ((*param_2 == 0) || (param_2[1] == 0)) {
    iVar3 = 0;
  }
  else {
    pcVar4 = *(code **)(*(int *)*param_1 + 0x114);
    uVar5 = *(undefined4 *)(*(int *)*param_1 + 0x118);
    uVar1 = FUN_00016f94(param_2[2]);
    (*pcVar4)(uVar5,"Setting up format %s %ux%u on pad %s/%u\n",uVar1,*param_2,param_2[1],
              *param_1 + 8,param_1[1]);
    iVar3 = FUN_0001542c(*param_1,param_2,param_1[1],1);
    if (iVar3 < 0) {
      pcVar4 = *(code **)(*(int *)*param_1 + 0x114);
      uVar1 = *(undefined4 *)(*(int *)*param_1 + 0x118);
      pcVar2 = strerror(-iVar3);
      (*pcVar4)(uVar1,"Unable to set format: %s (%d)\n",pcVar2,iVar3);
    }
    else {
      pcVar4 = *(code **)(*(int *)*param_1 + 0x114);
      uVar5 = *(undefined4 *)(*(int *)*param_1 + 0x118);
      uVar1 = FUN_00016f94(param_2[2]);
      (*pcVar4)(uVar5,"Format set: %s %ux%u\n",uVar1,*param_2,param_2[1]);
      iVar3 = 0;
    }
  }
  return iVar3;
}



/* ===== FUN_00016920 @ 00016920 size=432 ===== */

int FUN_00016920(int *param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  if ((*param_3 == -1) || (param_3[1] == -1)) {
    iVar2 = 0;
  }
  else {
    (**(code **)(*(int *)*param_1 + 0x114))
              (*(undefined4 *)(*(int *)*param_1 + 0x118),
               "Setting up selection target %u rectangle (%u,%u)/%ux%u on pad %s/%u\n",param_2,
               *param_3,param_3[1],param_3[2],param_3[3],*param_1 + 8,param_1[1]);
    iVar2 = FUN_00015690(*param_1,param_3,param_1[1],param_2,1);
    if (iVar2 < 0) {
      pcVar3 = *(code **)(*(int *)*param_1 + 0x114);
      uVar4 = *(undefined4 *)(*(int *)*param_1 + 0x118);
      pcVar1 = strerror(-iVar2);
      (*pcVar3)(uVar4,"Unable to set selection rectangle: %s (%d)\n",pcVar1,iVar2);
    }
    else {
      (**(code **)(*(int *)*param_1 + 0x114))
                (*(undefined4 *)(*(int *)*param_1 + 0x118),
                 "Selection rectangle set: (%u,%u)/%ux%u\n",*param_3,param_3[1],param_3[2],
                 param_3[3]);
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== FUN_00016ad0 @ 00016ad0 size=280 ===== */

int FUN_00016ad0(int *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  if (*param_2 == 0) {
    iVar2 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x114))
              (*(undefined4 *)(*param_1 + 0x118),"Setting up frame interval %u/%u on entity %s\n",
               *param_2,param_2[1],param_1 + 2);
    iVar2 = FUN_00015b20(param_1,param_2);
    if (iVar2 < 0) {
      pcVar3 = *(code **)(*param_1 + 0x114);
      uVar4 = *(undefined4 *)(*param_1 + 0x118);
      pcVar1 = strerror(-iVar2);
      (*pcVar3)(uVar4,"Unable to set frame interval: %s (%d)",pcVar1,iVar2);
    }
    else {
      (**(code **)(*param_1 + 0x114))
                (*(undefined4 *)(*param_1 + 0x118),"Frame interval set: %u/%u\n",*param_2,param_2[1]
                );
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== FUN_00016be8 @ 00016be8 size=752 ===== */

int FUN_00016be8(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 *local_18;
  int local_14;
  int *local_10;
  uint local_c;
  
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_58 = DAT_00018aac;
  uStack_54 = DAT_00018ab0;
  uStack_50 = DAT_00018ab4;
  uStack_4c = DAT_00018ab8;
  local_68 = DAT_00018aac;
  uStack_64 = DAT_00018ab0;
  uStack_60 = DAT_00018ab4;
  uStack_5c = DAT_00018ab8;
  local_70 = 0;
  local_6c = 0;
  uStack_34 = uStack_44;
  uStack_2c = uStack_44;
  uStack_24 = uStack_44;
  uStack_1c = uStack_44;
  local_10 = (int *)FUN_00016264(param_1,&local_48,&local_58,&local_68,&local_70,param_2,&local_74);
  if (local_10 == (int *)0x0) {
    FUN_000150f4(param_1,param_2,local_74);
    (**(code **)(param_1 + 0x114))(*(undefined4 *)(param_1 + 0x118),"Unable to parse format\n");
    local_14 = -0x16;
  }
  else if ((((((local_10[2] & 1U) == 0) ||
             (local_14 = FUN_0001677c(local_10,&local_48), -1 < local_14)) &&
            (local_14 = FUN_00016920(local_10,0,&local_58), -1 < local_14)) &&
           (local_14 = FUN_00016920(local_10,0x100,&local_68), -1 < local_14)) &&
          ((((local_10[2] & 2U) == 0 || (local_14 = FUN_0001677c(local_10,&local_48), -1 < local_14)
            ) && (local_14 = FUN_00016ad0(*local_10,&local_70), -1 < local_14)))) {
    if ((local_10[2] & 2U) != 0) {
      for (local_c = 0; local_c < *(uint *)(*local_10 + 0x110); local_c = local_c + 1) {
        local_18 = (undefined4 *)(*(int *)(*local_10 + 0x108) + local_c * 0x1c);
        if ((((local_18[3] & 1) != 0) && (local_10 == (int *)*local_18)) &&
           (*(int *)(*(int *)local_18[1] + 0x28) == 0x20000)) {
          local_a4 = local_48;
          uStack_a0 = uStack_44;
          uStack_9c = uStack_40;
          uStack_98 = uStack_3c;
          local_94 = local_38;
          uStack_90 = uStack_34;
          uStack_8c = local_30;
          uStack_88 = uStack_2c;
          local_84 = local_28;
          uStack_80 = uStack_24;
          uStack_7c = local_20;
          uStack_78 = uStack_1c;
          FUN_0001677c(local_18[1],&local_a4);
        }
      }
    }
    *param_3 = local_74;
    local_14 = 0;
  }
  return local_14;
}



/* ===== FUN_00016ed8 @ 00016ed8 size=188 ===== */

int FUN_00016ed8(undefined4 param_1,byte *param_2)

{
  int iVar1;
  byte *local_18;
  byte *local_10;
  int local_c;
  
  local_18 = param_2;
  do {
    local_c = FUN_00016be8(param_1,local_18,&local_10);
    if (local_c < 0) {
      return local_c;
    }
    while ((*(ushort *)(__ctype_b + (uint)*local_10 * 2) & 0x20) != 0) {
      local_10 = local_10 + 1;
    }
    local_18 = local_10 + 1;
  } while (*local_10 == 0x2c);
  if (*local_10 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = -0x16;
  }
  return iVar1;
}



/* ===== FUN_00016f94 @ 00016f94 size=132 ===== */

char * FUN_00016f94(int param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (0x7c < local_c) {
      return "unknown";
    }
    if (param_1 == *(int *)(&DAT_0001915c + local_c * 8)) break;
    local_c = local_c + 1;
  }
  return *(char **)(&DAT_00019158 + local_c * 8);
}



/* ===== FUN_00017018 @ 00017018 size=136 ===== */

undefined4 FUN_00017018(char *param_1)

{
  int iVar1;
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (0x7c < local_c) {
      return 0xffffffff;
    }
    iVar1 = strcmp(*(char **)(&DAT_00019158 + local_c * 8),param_1);
    if (iVar1 == 0) break;
    local_c = local_c + 1;
  }
  return *(undefined4 *)(&DAT_0001915c + local_c * 8);
}



/* ===== FUN_000170a0 @ 000170a0 size=132 ===== */

char * FUN_000170a0(int param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return "unknown";
    }
    if (param_1 == *(int *)(&DAT_0002a204 + local_c * 8)) break;
    local_c = local_c + 1;
  }
  return *(char **)(&DAT_0002a200 + local_c * 8);
}



/* ===== FUN_00017124 @ 00017124 size=136 ===== */

undefined4 FUN_00017124(char *param_1)

{
  int iVar1;
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return 0xffffffff;
    }
    iVar1 = strcasecmp(*(char **)(&DAT_0002a200 + local_c * 8),param_1);
    if (iVar1 == 0) break;
    local_c = local_c + 1;
  }
  return *(undefined4 *)(&DAT_0002a204 + local_c * 8);
}



/* ===== FUN_000171ac @ 000171ac size=52 ===== */

undefined * FUN_000171ac(undefined4 *param_1)

{
  *param_1 = 0x5f;
  return &DAT_000195a8;
}



/* ===== FUN_000171e0 @ 000171e0 size=76 ===== */

void FUN_000171e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_0001722c();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_0001722c @ 0001722c size=328 ===== */

undefined8 FUN_0001722c(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  bVar8 = param_4 <= param_2;
  if (param_2 == param_4) {
    bVar8 = param_3 <= param_1;
  }
  if (bVar8) {
    if (param_4 == 0) {
      iVar3 = LZCOUNT(param_3) + 0x20;
    }
    else {
      iVar3 = LZCOUNT(param_4);
    }
    if (param_2 == 0) {
      iVar6 = LZCOUNT(param_1) + 0x20;
    }
    else {
      iVar6 = LZCOUNT(param_2);
    }
    uVar7 = iVar3 - iVar6;
    uVar2 = param_4 << (uVar7 & 0xff) | param_3 << (uVar7 - 0x20 & 0xff) |
            param_3 >> (0x20 - uVar7 & 0xff);
    param_3 = param_3 << (uVar7 & 0xff);
    bVar8 = uVar2 <= param_2;
    if (param_2 == uVar2) {
      bVar8 = param_3 <= param_1;
    }
    if (bVar8) {
      bVar8 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = param_2 - (uVar2 + bVar8);
      uVar9 = CONCAT44(0 << (uVar7 & 0xff) | 1 << (uVar7 - 0x20 & 0xff) |
                       1U >> (0x20 - uVar7 & 0xff),1 << (uVar7 & 0xff));
    }
    else {
      uVar9 = 0;
    }
    if (uVar7 != 0) {
      uVar1 = param_3 >> 1 | uVar2 << 0x1f;
      uVar2 = uVar2 >> 1;
      uVar4 = uVar7;
      do {
        bVar8 = uVar2 <= param_2;
        if (param_2 == uVar2) {
          bVar8 = uVar1 <= param_1;
        }
        if (bVar8) {
          bVar8 = param_1 < uVar1;
          uVar5 = param_1 - uVar1;
          param_1 = uVar5 * 2 + 1;
          param_2 = (param_2 - (uVar2 + bVar8)) * 2 + (uint)CARRY4(uVar5,uVar5) +
                    (uint)(0xfffffffe < uVar5 * 2);
        }
        else {
          bVar8 = CARRY4(param_1,param_1);
          param_1 = param_1 * 2;
          param_2 = param_2 * 2 + (uint)bVar8;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      uVar10 = CONCAT44(param_2,param_1);
      param_1 = param_1 >> (uVar7 & 0xff) | param_2 << (0x20 - uVar7 & 0xff) |
                param_2 >> (uVar7 - 0x20 & 0xff);
      param_2 = param_2 >> (uVar7 & 0xff);
      uVar9 = VectorAdd(uVar9,uVar10,8);
      uVar9 = VectorSub(uVar9,CONCAT44(param_2 << (uVar7 & 0xff) | param_1 << (uVar7 - 0x20 & 0xff)
                                       | param_1 >> (0x20 - uVar7 & 0xff),param_1 << (uVar7 & 0xff))
                        ,8);
    }
  }
  else {
    uVar9 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = param_1;
    param_5[1] = param_2;
  }
  return uVar9;
}



/* ===== _DT_FINI @ 00017374 size=16 ===== */

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



/* ===== <EXTERNAL>::__register_frame_info @ 0002b004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002b008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002b00c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002b010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002b014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strndup @ 0002b018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strndup(char *__string,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002b01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0002b020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 0002b024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 0002b028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strrchr @ 0002b02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 0002b030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002b034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002b038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002b03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002b040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002b044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 0002b048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002b04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0002b050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0002b054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002b058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002b05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002b060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002b064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_minor @ 0002b068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_minor(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 0002b06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readlink @ 0002b070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002b074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0002b078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0002b07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0002b080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gnu_dev_major @ 0002b084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint gnu_dev_major(ulonglong __dev)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002b088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002b08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 0002b090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0002b094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002b098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002b09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002b0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


