// memtester — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010780 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 000107a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002400c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000107b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00024010)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::sysconf @ 000107bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_00024014)(__name);
  return lVar1;
}



/* ===== <EXTERNAL>::strerror @ 000107c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00024018)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::stat64 @ 000107d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_0002401c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 000107e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00024020)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::perror @ 000107ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00024024)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 000107f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00024028)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010804 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002402c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00010810 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00024030)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::fflush @ 0001081c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00024034)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010828 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00024038)();
  return;
}



/* ===== <EXTERNAL>::mlock @ 00010834 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mlock(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mlock_0002403c)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010840 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00024040)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0001084c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00024044)();
  return;
}



/* ===== <EXTERNAL>::rand @ 00010858 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_00024048)();
  return iVar1;
}



/* ===== <EXTERNAL>::strtoull @ 00010870 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_00024050)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::getopt @ 0001087c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getopt_00024054)(___argc);
  return iVar1;
}



/* ===== <EXTERNAL>::open64 @ 00010888 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_00024058)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::mmap64 @ 00010894 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_0002405c)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::fputc @ 000108a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00024060)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 000108ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00024064)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000108b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00024068)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 000108c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002406c)(__status);
  return;
}



/* ===== <EXTERNAL>::munlock @ 000108d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munlock(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munlock_00024070)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000108dc size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00024074)();
  return;
}



/* ===== <EXTERNAL>::raise @ 000108e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00024078)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000108f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002407c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00010900 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_00024080)();
  return;
}



/* ===== FUN_0001090c @ 0001090c size=2440 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001090c(int param_1,char **param_2)

{
  size_t __len;
  FILE *pFVar1;
  uint uVar2;
  FILE *pFVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  int extraout_r1;
  uint extraout_r3;
  uint uVar9;
  void *__ptr;
  char *unaff_r6;
  char *pcVar10;
  undefined4 uVar11;
  FILE *local_d4;
  undefined8 local_d0;
  ulong local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc;
  uint local_b8;
  void *local_b0;
  byte *local_9c;
  char *local_98;
  char *local_94;
  stat64 sStack_90;
  
  printf("memtester version 4.3.0 (%d-bit)\n",0x20);
  puts("Copyright (C) 2001-2012 Charles Cazabon.");
  puts("Licensed under the GNU General Public License version 2 (only).");
  putchar(10);
  FUN_000113ac();
  uVar2 = FUN_0001140c();
  printf("pagesizemask is 0x%tx\n",-uVar2);
  pFVar3 = (FILE *)getenv("MEMTESTER_TEST_MASK");
  if (pFVar3 == (FILE *)0x0) {
    local_c8 = 0;
  }
  else {
    piVar4 = __errno_location();
    *piVar4 = 0;
    local_c8 = strtoul((char *)pFVar3,(char **)0x0,0);
    pFVar1 = stderr;
    if (*piVar4 != 0) {
      pcVar10 = strerror(*piVar4);
      fprintf(pFVar1,"error parsing MEMTESTER_TEST_MASK %s: %s\n",pFVar3,pcVar10);
      FUN_00011450(*param_2);
      goto LAB_00010ab4;
    }
    printf("using testmask 0x%lx\n",local_c8);
  }
  unaff_r6 = "p:d:";
  pFVar3 = (FILE *)0x0;
  local_d4 = (FILE *)0x0;
  local_d0 = VectorShiftRight(CONCAT44(uVar2 - 1,uVar2 - 1),0x20);
  pcVar10 = "/dev/mem";
LAB_000109e4:
  while( true ) {
    iVar5 = getopt(param_1,param_2,unaff_r6);
    if (iVar5 == -1) break;
    if (iVar5 == 100) goto LAB_00010adc;
    if (iVar5 != 0x70) goto LAB_00010ad4;
    piVar4 = __errno_location();
    *piVar4 = 0;
    _DAT_00024160 = strtoull(optarg,&local_98,0x10);
    if ((*piVar4 != 0) || (*local_98 != '\0')) goto LAB_00010b7c;
    pFVar3 = (FILE *)((uint)(char **)local_d0 & (uint)_DAT_00024160);
    if (pFVar3 != (FILE *)0x0 || (local_d0._4_4_ & (uint)(_DAT_00024160 >> 0x20)) != 0) {
      do {
        fwrite("bad physaddrbase arg; does not start on page boundary\n",1,0x36,stderr);
        uVar7 = FUN_00011450(*param_2);
        uVar9 = extraout_r3;
LAB_00010ff4:
        if (uVar9 == 0) goto LAB_00010f54;
LAB_00010ad4:
        FUN_00011450(*param_2);
LAB_00010adc:
        pcVar10 = (char *)&optarg;
        iVar5 = stat64(optarg,&sStack_90);
        pFVar1 = stderr;
        pcVar8 = optarg;
        if (iVar5 == 0) {
          pcVar10 = optarg;
          if ((sStack_90.st_mode & 0xf000) == 0x2000) goto code_r0x00010b0c;
        }
        else {
          piVar4 = __errno_location();
          pcVar6 = strerror(*piVar4);
          fprintf(pFVar1,"can not use %s as device: %s\n",pcVar8,pcVar6);
          FUN_00011450(*param_2);
          pFVar3 = pFVar1;
        }
        fprintf(stderr,"can not mmap non-char device %s\n",pcVar10);
        FUN_00011450(*param_2);
      } while( true );
    }
    DAT_00024168 = 1;
  }
  if ((local_d4 == (FILE *)0x0) || (pFVar3 = local_d4, DAT_00024168 != 0)) goto LAB_00010b40;
LAB_00010ab4:
  fwrite("for mem device, physaddrbase (-p) must be specified\n",1,0x34,stderr);
  goto LAB_00010ad4;
code_r0x00010da0:
  puts("failed for unknown reason.");
  local_b8 = __len;
LAB_00010db8:
  local_bc = 0;
  fwrite("Continuing with unlocked memory; testing will be slower and less reliable.\n",1,0x4b,
         stderr);
  goto LAB_00010dd8;
code_r0x00010b0c:
  local_d4 = (FILE *)0x1;
  goto LAB_000109e4;
LAB_00010b40:
  pFVar3 = (FILE *)&optind;
  if (param_1 <= optind) {
    fwrite("need memory argument, in MB\n",1,0x1c,stderr);
    FUN_00011450(*param_2);
LAB_00010b7c:
    fwrite("failed to parse physaddrbase arg; should be hex address (0x123...)\n",1,0x43,stderr);
    FUN_00011450(*param_2);
  }
  local_d4 = (FILE *)__errno_location();
  local_d4->_flags = 0;
  uVar7 = strtoul(param_2[pFVar3->_flags],(char **)&local_9c,0);
  local_d0 = CONCAT44(local_d0._4_4_,local_d4->_flags);
  if (local_d4->_flags != 0) {
    fwrite("failed to parse memory argument",1,0x1f,stderr);
    FUN_00011450(*param_2);
    local_d0._0_4_ = param_2;
    goto LAB_00011074;
  }
  uVar9 = (uint)*local_9c;
  if (uVar9 == 0x4d) {
LAB_00010f54:
    iVar5 = 0x14;
  }
  else if (uVar9 < 0x4e) {
    if (uVar9 == 0x42) {
LAB_00011008:
      iVar5 = 0;
    }
    else {
      if (uVar9 < 0x43) goto LAB_00010ff4;
      if (uVar9 == 0x47) goto LAB_00011030;
      if (uVar9 != 0x4b) goto LAB_00010ad4;
LAB_00010c08:
      iVar5 = 10;
    }
  }
  else {
    if (uVar9 != 0x67) {
      if (uVar9 < 0x68) {
        if (uVar9 != 0x62) goto LAB_00010ad4;
        goto LAB_00011008;
      }
      if (uVar9 == 0x6b) goto LAB_00010c08;
      if (uVar9 != 0x6d) goto LAB_00010ad4;
      goto LAB_00010f54;
    }
LAB_00011030:
    iVar5 = 0x1e;
  }
  local_b8 = uVar7 << iVar5;
  iVar5 = pFVar3->_flags + 1;
  pFVar3->_flags = iVar5;
  if (local_b8 < uVar2) {
    fprintf(stderr,"bytes %ld < pagesize %ld -- memory argument too large?\n",local_b8,uVar2);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (iVar5 < param_1) {
    local_d4->_flags = 0;
    local_c0 = strtoul(param_2[pFVar3->_flags],&local_94,0);
    if (local_d4->_flags == 0) {
      if (*local_94 == '\0') goto LAB_00010c70;
    }
    else {
      fwrite("failed to parse number of loops",1,0x1f,stderr);
      FUN_00011450(*param_2);
    }
    fprintf(stderr,"loop suffix %c\n");
    FUN_00011450(*param_2);
LAB_000111f8:
    pFVar3 = stderr;
    pcVar8 = strerror(local_d4->_flags);
    fprintf(pFVar3,"failed to open %s for physical memory: %s\n",pcVar10,pcVar8);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_c0 = 0;
LAB_00010c70:
  uVar11 = 0;
  printf("want %lluMB (%llu bytes)\n");
  if (DAT_00024168 == 0) {
    local_bc = 1;
    __ptr = (void *)0x0;
    uVar9 = local_b8;
    do {
      while (__ptr == (void *)0x0 && uVar9 != 0) {
        __ptr = malloc(uVar9);
        if (__ptr == (void *)0x0) {
          uVar9 = uVar9 - uVar2;
        }
      }
      printf("got  %lluMB (%llu bytes)");
      fflush(stdout);
      if (local_bc == 0) {
        putchar(10);
        local_b8 = uVar9;
        goto LAB_00010db8;
      }
      printf(", trying mlock ...");
      fflush(stdout);
      FUN_0001298c(__ptr,uVar2);
      __len = uVar9;
      local_b0 = __ptr;
      if (extraout_r1 != 0) {
        local_b0 = (void *)((-uVar2 & (uint)__ptr) + uVar2);
        __len = (int)__ptr + (uVar9 - (int)local_b0);
      }
      iVar5 = mlock(local_b0,__len);
      if (-1 < iVar5) {
        puts("locked.");
        local_b8 = __len;
        goto LAB_00010dd8;
      }
      iVar5 = local_d4->_flags;
      if (iVar5 == 0xb) {
        uVar9 = uVar9 - uVar2;
        puts("over system/pre-process limit, reducing...");
        free(__ptr);
      }
      else if (iVar5 == 0xc) {
        puts("too many pages, reducing...");
        uVar9 = uVar9 - uVar2;
        free(__ptr);
      }
      else {
        if (iVar5 != 1) goto code_r0x00010da0;
        puts("insufficient permission.");
        local_bc = 0;
        puts("Trying again, unlocked:");
        free(__ptr);
        uVar9 = local_b8;
      }
      __ptr = (void *)0x0;
    } while( true );
  }
  iVar5 = open64(pcVar10,0x1002);
  if (iVar5 == -1) goto LAB_000111f8;
  local_b0 = mmap64((void *)0x0,local_b8,3,1,iVar5,_DAT_00024160);
  pFVar3 = stderr;
  if (local_b0 == (void *)0xffffffff) {
    pcVar8 = strerror(local_d4->_flags);
    fprintf(pFVar3,"failed to mmap %s for physical memory: %s\n",pcVar10,pcVar8,iVar5,uVar11);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar5 = mlock(local_b0,local_b8);
  if (iVar5 < 0) {
    fwrite("failed to mlock mmap\'ed space\n",1,0x1e,stderr);
    goto LAB_00010db8;
  }
  local_bc = 1;
LAB_00010dd8:
  pcVar10 = (char *)&stdout;
  local_c4 = 1;
  while (local_c0 == 0 || local_c4 <= local_c0) {
    printf("Loop %lu",local_c4);
    if (local_c0 != 0) {
      printf("/%lu",local_c0);
    }
    puts(":");
    printf("  %-20s: ","Stuck Address");
    fflush(stdout);
    iVar5 = FUN_00011554(local_b0,local_b8 >> 2);
    if (iVar5 == 0) {
      puts("ok");
    }
    else {
      local_d0._0_4_ = (char **)((uint)(char **)local_d0 | 2);
    }
    uVar2 = 0;
    for (piVar4 = &DAT_0002408c; *piVar4 != 0; piVar4 = piVar4 + 2) {
      if ((local_c8 == 0) || ((local_c8 & 1 << (uVar2 & 0xff)) != 0)) {
        printf("  %-20s: ");
        iVar5 = (*(code *)piVar4[1])(local_b0,(int)local_b0 + (local_b8 >> 1),local_b8 >> 3);
        if (iVar5 == 0) {
          puts("ok");
        }
        else {
          local_d0._0_4_ = (char **)((uint)(char **)local_d0 | 4);
        }
        fflush(stdout);
      }
      uVar2 = uVar2 + 1;
    }
    local_c4 = local_c4 + 1;
    putchar(10);
    fflush(stdout);
  }
LAB_00011074:
  if (local_bc != 0) {
    munlock(local_b0,local_b8);
  }
  puts("Done.");
  fflush(*(FILE **)pcVar10);
                    /* WARNING: Subroutine does not return */
  exit((int)(char **)local_d0);
}



/* ===== entry @ 00011294 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002404c)
            (DAT_000112c8,param_2,&stack0x00000004,DAT_000112cc,DAT_000112c4,param_1);
  return;
}



/* ===== FUN_000112d0 @ 000112d0 size=32 ===== */

void FUN_000112d0(void)

{
  if (DAT_000112f4 == DAT_000112f0) {
    return;
  }
  if (DAT_000112f8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000112ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000112f8)();
  return;
}



/* ===== _FINI_0 @ 00011334 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011370;
  if (*DAT_00011370 != '\0') {
    return;
  }
  FUN_000112d0();
  if (DAT_00011374 != 0) {
    __deregister_frame_info(DAT_00011378);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001137c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_000113a0 != 0) {
    __register_frame_info(DAT_000113a8,DAT_000113a4);
  }
  if ((DAT_0001132c - DAT_00011328 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011330 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011330)();
  return;
}



/* ===== FUN_000113ac @ 000113ac size=96 ===== */

void FUN_000113ac(void)

{
  FILE *__stream;
  long lVar1;
  
  lVar1 = sysconf(0x1d);
  if (0x30897 < lVar1) {
    return;
  }
  fwrite("A POSIX system is required.  Don\'t be surprised if this craps out.\n",1,0x43,stderr);
  __stream = stderr;
  lVar1 = sysconf(0x1d);
  fprintf(__stream,"_SC_VERSION is %lu\n",lVar1);
  return;
}



/* ===== FUN_0001140c @ 0001140c size=68 ===== */

long FUN_0001140c(void)

{
  long lVar1;
  
  lVar1 = sysconf(0x1e);
  if (lVar1 != -1) {
    printf("pagesize is %ld\n",lVar1);
    return lVar1;
  }
  perror("get page size failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011450 @ 00011450 size=40 ===== */

void FUN_00011450(undefined4 param_1)

{
  fprintf(stderr,"\nUsage: %s [-p physaddrbase [-d device]] <mem>[B|K|M|G] [loops]\n",param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011478 @ 00011478 size=220 ===== */

undefined4 FUN_00011478(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = 0;
    uVar2 = 0;
    do {
      uVar1 = iVar3 * 4;
      if (*param_1 != *param_2) {
        if (DAT_00024168 == 0) {
          fprintf(stderr,"FAILURE: 0x%08lx != 0x%08lx at offset 0x%08lx.\n",*param_1,*param_2,uVar1)
          ;
          uVar2 = 0xffffffff;
        }
        else {
          fprintf(stderr,"FAILURE: 0x%08lx != 0x%08lx at physical address 0x%08lx.\n",*param_1,
                  *param_2,DAT_00024160 + uVar1,DAT_00024164 + (uint)CARRY4(DAT_00024160,uVar1));
          uVar2 = 0xffffffff;
        }
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != iVar3);
  }
  return uVar2;
}



/* ===== FUN_00011554 @ 00011554 size=436 ===== */

undefined4 FUN_00011554(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  printf("           ");
  fflush(stdout);
  uVar6 = 0;
  uVar7 = param_2;
  do {
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    printf("setting %3u",uVar6);
    fflush(stdout);
    uVar3 = uVar6;
    puVar5 = param_1;
    if (param_2 == 0) {
      printf("\b\b\b\b\b\b\b\b\b\b\b");
      printf("testing %3u",uVar6);
      fflush(stdout);
    }
    else {
      do {
        uVar4 = uVar3 & 1;
        uVar3 = uVar3 + 1;
        puVar1 = puVar5;
        if (uVar4 != 0) {
          puVar1 = (uint *)~(uint)puVar5;
        }
        *puVar5 = (uint)puVar1;
        puVar1 = puVar5 + 1;
        uVar4 = *puVar5;
        puVar5 = puVar1;
      } while (uVar3 != uVar7);
      printf("\b\b\b\b\b\b\b\b\b\b\b",puVar1,uVar3,uVar4);
      printf("testing %3u",uVar6);
      fflush(stdout);
      uVar3 = 0;
      puVar5 = param_1;
      do {
        puVar2 = (uint *)*puVar5;
        puVar1 = puVar5;
        if ((uVar3 + uVar6 & 1) != 0) {
          puVar1 = (uint *)~(uint)puVar5;
        }
        puVar5 = puVar5 + 1;
        if (puVar2 != puVar1) {
          if (DAT_00024168 == 0) {
            fprintf(stderr,"FAILURE: possible bad address line at offset 0x%08lx.\n");
          }
          else {
            fprintf(stderr,"FAILURE: possible bad address line at physical address 0x%08lx.\n",
                    DAT_00024160 + uVar3 * 4,DAT_00024164 + (uint)CARRY4(DAT_00024160,uVar3 * 4));
          }
          puts("Skipping to next test...");
          fflush(stdout);
          return 0xffffffff;
        }
        uVar3 = uVar3 + 1;
      } while (param_2 != uVar3);
    }
    uVar6 = uVar6 + 1;
    uVar7 = uVar7 + 1;
    if (uVar6 == 0x10) {
      printf("\b\b\b\b\b\b\b\b\b\b\b           \b\b\b\b\b\b\b\b\b\b\b");
      fflush(stdout);
      return 0;
    }
  } while( true );
}



/* ===== FUN_00011708 @ 00011708 size=432 ===== */

void FUN_00011708(uint *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  if (__stdout->_chain == (_IO_FILE *)0x0) {
    fputc(0x20,__stdout);
  }
  else {
    pcVar4 = __stdout->_IO_write_base;
    if (pcVar4 < __stdout->_IO_buf_base) {
      __stdout->_IO_write_base = pcVar4 + 1;
      *pcVar4 = ' ';
    }
    else {
      __fputc_unlocked(0x20);
    }
  }
  fflush(stdout);
  if (param_3 != 0) {
    uVar7 = 0;
    uVar8 = 0;
    puVar6 = param_1;
    puVar9 = param_2;
    do {
      uVar2 = rand();
      iVar3 = rand();
      uVar2 = uVar2 | iVar3 << 0x10;
      *puVar9 = uVar2;
      *puVar6 = uVar2;
      if (uVar8 % 0x9c4 == 0) {
        if (__stdout->_chain == (_IO_FILE *)0x0) {
          fputc(8,__stdout);
        }
        else {
          pcVar4 = __stdout->_IO_write_base;
          if (pcVar4 < __stdout->_IO_buf_base) {
            __stdout->_IO_write_base = pcVar4 + 1;
            *pcVar4 = '\b';
          }
          else {
            __fputc_unlocked(8);
          }
        }
        uVar7 = uVar7 + 1;
        bVar1 = (&DAT_0002411c)[uVar7 & 3];
        if (__stdout->_chain == (_IO_FILE *)0x0) {
          fputc((uint)bVar1,__stdout);
        }
        else {
          pbVar5 = (byte *)__stdout->_IO_write_base;
          if (pbVar5 < __stdout->_IO_buf_base) {
            __stdout->_IO_write_base = (char *)(pbVar5 + 1);
            *pbVar5 = bVar1;
          }
          else {
            __fputc_unlocked();
          }
        }
        fflush(stdout);
      }
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    } while (param_3 != uVar8);
  }
  printf("\b \b");
  fflush(stdout);
  FUN_00011478(param_1,param_2,param_3);
  return;
}



/* ===== FUN_000118b8 @ 000118b8 size=124 ===== */

void FUN_000118b8(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar1 = rand();
  iVar2 = rand();
  uVar1 = uVar1 | iVar2 << 0x10;
  if (param_3 != 0) {
    iVar2 = 0;
    puVar3 = param_2;
    puVar4 = param_1;
    do {
      iVar2 = iVar2 + 1;
      *puVar4 = *puVar4 ^ uVar1;
      *puVar3 = *puVar3 ^ uVar1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (param_3 != iVar2);
  }
  FUN_00011478(param_1,param_2,param_3);
  return;
}



/* ===== FUN_00011934 @ 00011934 size=124 ===== */

void FUN_00011934(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = rand();
  iVar2 = rand();
  uVar1 = uVar1 | iVar2 << 0x10;
  if (param_3 != 0) {
    iVar2 = 0;
    piVar3 = param_2;
    piVar4 = param_1;
    do {
      iVar2 = iVar2 + 1;
      *piVar4 = *piVar4 - uVar1;
      *piVar3 = *piVar3 - uVar1;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (param_3 != iVar2);
  }
  FUN_00011478(param_1,param_2,param_3);
  return;
}



/* ===== FUN_000119b0 @ 000119b0 size=124 ===== */

void FUN_000119b0(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = rand();
  iVar2 = rand();
  uVar1 = uVar1 | iVar2 << 0x10;
  if (param_3 != 0) {
    iVar2 = 0;
    piVar3 = param_2;
    piVar4 = param_1;
    do {
      iVar2 = iVar2 + 1;
      *piVar4 = uVar1 * *piVar4;
      *piVar3 = uVar1 * *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (param_3 != iVar2);
  }
  FUN_00011478(param_1,param_2,param_3);
  return;
}



/* ===== FUN_00011a2c @ 00011a2c size=148 ===== */

void FUN_00011a2c(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = rand();
  iVar2 = rand();
  uVar1 = uVar1 | iVar2 << 0x10;
  if (param_3 != 0) {
    iVar2 = 0;
    puVar4 = param_1;
    puVar5 = param_2;
    do {
      if (uVar1 == 0) {
        uVar1 = 1;
      }
      iVar2 = iVar2 + 1;
      uVar3 = FUN_000128e4(*puVar4,uVar1);
      *puVar4 = uVar3;
      uVar3 = FUN_000128e4(*puVar5,uVar1);
      *puVar5 = uVar3;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (param_3 != iVar2);
  }
  FUN_00011478(param_1,param_2,param_3);
  return;
}



/* ===== FUN_00011ac0 @ 00011ac0 size=124 ===== */

void FUN_00011ac0(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar1 = rand();
  iVar2 = rand();
  uVar1 = uVar1 | iVar2 << 0x10;
  if (param_3 != 0) {
    iVar2 = 0;
    puVar3 = param_2;
    puVar4 = param_1;
    do {
      iVar2 = iVar2 + 1;
      *puVar4 = *puVar4 | uVar1;
      *puVar3 = *puVar3 | uVar1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (param_3 != iVar2);
  }
  FUN_00011478(param_1,param_2,param_3);
  return;
}



/* ===== FUN_00011b3c @ 00011b3c size=124 ===== */

void FUN_00011b3c(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar1 = rand();
  iVar2 = rand();
  uVar1 = uVar1 | iVar2 << 0x10;
  if (param_3 != 0) {
    iVar2 = 0;
    puVar3 = param_2;
    puVar4 = param_1;
    do {
      iVar2 = iVar2 + 1;
      *puVar4 = *puVar4 & uVar1;
      *puVar3 = *puVar3 & uVar1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (param_3 != iVar2);
  }
  FUN_00011478(param_1,param_2,param_3);
  return;
}



/* ===== FUN_00011bb8 @ 00011bb8 size=92 ===== */

void FUN_00011bb8(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar1 = rand();
  iVar2 = rand();
  uVar1 = uVar1 | iVar2 << 0x10;
  if (param_3 != 0) {
    uVar5 = uVar1 + param_3;
    puVar3 = param_1;
    puVar4 = param_2;
    do {
      *puVar4 = uVar1;
      *puVar3 = uVar1;
      uVar1 = uVar1 + 1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != uVar1);
  }
  FUN_00011478(param_1,param_2,param_3);
  return;
}



/* ===== FUN_00011c14 @ 00011c14 size=292 ===== */

undefined4 FUN_00011c14(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = 0;
  printf("           ");
  fflush(stdout);
  while( true ) {
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    printf("setting %3u",uVar7);
    fflush(stdout);
    iVar2 = -(~uVar7 & 1);
    if (param_3 != 0) {
      uVar1 = 0;
      piVar3 = param_2;
      piVar5 = param_1;
      iVar8 = iVar2;
      while( true ) {
        uVar1 = uVar1 + 1;
        piVar4 = piVar3 + 1;
        *piVar3 = iVar8;
        piVar6 = piVar5 + 1;
        *piVar5 = iVar8;
        if (param_3 == uVar1) break;
        piVar3 = piVar4;
        piVar5 = piVar6;
        iVar8 = iVar2;
        if ((uVar1 & 1) != 0) {
          iVar8 = (~uVar7 & 1) - 1;
        }
      }
    }
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    printf("testing %3u",uVar7);
    fflush(stdout);
    iVar2 = FUN_00011478(param_1,param_2,param_3);
    if (iVar2 != 0) break;
    uVar7 = uVar7 + 1;
    if (uVar7 == 0x40) {
      printf("\b\b\b\b\b\b\b\b\b\b\b           \b\b\b\b\b\b\b\b\b\b\b");
      fflush(stdout);
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00011d38 @ 00011d38 size=316 ===== */

undefined4 FUN_00011d38(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_2c;
  
  uVar6 = 0;
  printf("           ");
  fflush(stdout);
  local_2c = 0xaaaaaaaa;
  while( true ) {
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    uVar7 = 0x55555555;
    if ((uVar6 & 1) != 0) {
      uVar7 = local_2c;
    }
    printf("setting %3u",uVar6);
    fflush(stdout);
    if (param_3 != 0) {
      uVar1 = 0;
      puVar3 = param_1;
      puVar4 = param_2;
      uVar8 = uVar7;
      while( true ) {
        uVar1 = uVar1 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = uVar8;
        puVar4 = puVar3 + 1;
        *puVar3 = uVar8;
        if (param_3 == uVar1) break;
        puVar3 = puVar4;
        puVar4 = puVar5;
        uVar8 = uVar7;
        if ((uVar1 & 1) != 0) {
          uVar8 = ~uVar7;
        }
      }
    }
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    printf("testing %3u",uVar6);
    fflush(stdout);
    iVar2 = FUN_00011478(param_1,param_2,param_3);
    if (iVar2 != 0) break;
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x40) {
      printf("\b\b\b\b\b\b\b\b\b\b\b           \b\b\b\b\b\b\b\b\b\b\b");
      fflush(stdout);
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00011e74 @ 00011e74 size=256 ===== */

undefined4 FUN_00011e74(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  printf("           ");
  fflush(stdout);
  uVar5 = 0;
  while( true ) {
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    printf("setting %3u",uVar5);
    fflush(stdout);
    if (param_3 != 0) {
      iVar2 = 0;
      uVar1 = uVar5 << 8 | uVar5 << 0x10 | uVar5 | uVar5 << 0x18;
      puVar3 = param_2;
      puVar4 = param_1;
      do {
        iVar2 = iVar2 + 1;
        *puVar3 = uVar1;
        *puVar4 = uVar1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (param_3 != iVar2);
    }
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    printf("testing %3u",uVar5);
    fflush(stdout);
    iVar2 = FUN_00011478(param_1,param_2,param_3);
    if (iVar2 != 0) break;
    uVar5 = uVar5 + 1;
    if (uVar5 == 0x100) {
      printf("\b\b\b\b\b\b\b\b\b\b\b           \b\b\b\b\b\b\b\b\b\b\b");
      fflush(stdout);
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00011f74 @ 00011f74 size=284 ===== */

undefined4 FUN_00011f74(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  printf("           ");
  fflush(stdout);
  uVar6 = 0;
  while( true ) {
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    printf("setting %3u",uVar6);
    fflush(stdout);
    if (param_3 != 0) {
      iVar2 = 1 << (0x3f - uVar6 & 0xff);
      iVar1 = 1 << (uVar6 & 0xff);
      iVar5 = 0;
      piVar3 = param_2;
      piVar4 = param_1;
      do {
        iVar5 = iVar5 + 1;
        if (uVar6 < 0x20) {
          *piVar3 = iVar1;
          *piVar4 = iVar1;
        }
        else {
          *piVar3 = iVar2;
          *piVar4 = iVar2;
        }
        piVar4 = piVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (param_3 != iVar5);
    }
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    printf("testing %3u",uVar6);
    fflush(stdout);
    iVar2 = FUN_00011478(param_1,param_2,param_3);
    if (iVar2 != 0) break;
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x40) {
      printf("\b\b\b\b\b\b\b\b\b\b\b           \b\b\b\b\b\b\b\b\b\b\b");
      fflush(stdout);
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00012090 @ 00012090 size=284 ===== */

undefined4 FUN_00012090(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  printf("           ");
  fflush(stdout);
  uVar4 = 0;
  while( true ) {
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    printf("setting %3u",uVar4);
    fflush(stdout);
    if (param_3 != 0) {
      uVar5 = ~(1 << (uVar4 & 0xff));
      uVar6 = ~(1 << (0x3f - uVar4 & 0xff));
      iVar3 = 0;
      puVar1 = param_2;
      puVar2 = param_1;
      do {
        iVar3 = iVar3 + 1;
        if (uVar4 < 0x20) {
          *puVar1 = uVar5;
          *puVar2 = uVar5;
        }
        else {
          *puVar1 = uVar6;
          *puVar2 = uVar6;
        }
        puVar2 = puVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (param_3 != iVar3);
    }
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    printf("testing %3u",uVar4);
    fflush(stdout);
    iVar3 = FUN_00011478(param_1,param_2,param_3);
    if (iVar3 != 0) break;
    uVar4 = uVar4 + 1;
    if (uVar4 == 0x40) {
      printf("\b\b\b\b\b\b\b\b\b\b\b           \b\b\b\b\b\b\b\b\b\b\b");
      fflush(stdout);
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_000121ac @ 000121ac size=368 ===== */

undefined4 FUN_000121ac(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = 0;
  printf("           ");
  fflush(stdout);
  while( true ) {
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    printf("setting %3u",uVar6);
    fflush(stdout);
    if (param_3 != 0) {
      uVar7 = 1 << (0x41 - uVar6 & 0xff) | 1 << (0x3f - uVar6 & 0xff);
      uVar8 = 1 << (uVar6 & 0xff) | 1 << (uVar6 + 2 & 0xff);
      uVar4 = 0;
      puVar1 = param_1;
      puVar3 = param_2;
      do {
        if (uVar6 < 0x20) {
          uVar5 = uVar8;
          if ((uVar4 & 1) != 0) {
            uVar5 = ~uVar8;
          }
          *puVar3 = uVar5;
          *puVar1 = uVar5;
        }
        else {
          uVar5 = uVar7;
          if ((uVar4 & 1) != 0) {
            uVar5 = ~uVar7;
          }
          *puVar3 = uVar5;
          *puVar1 = uVar5;
        }
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (param_3 != uVar4);
    }
    printf("\b\b\b\b\b\b\b\b\b\b\b");
    printf("testing %3u",uVar6);
    fflush(stdout);
    iVar2 = FUN_00011478(param_1,param_2,param_3);
    if (iVar2 != 0) break;
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x40) {
      printf("\b\b\b\b\b\b\b\b\b\b\b           \b\b\b\b\b\b\b\b\b\b\b");
      fflush(stdout);
      return 0;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_0001231c @ 0001231c size=360 ===== */

undefined4 FUN_0001231c(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_38;
  uint local_2c;
  
  printf("           ");
  fflush(stdout);
  local_38 = 8;
  local_2c = 0;
  do {
    iVar6 = local_2c << 3;
    uVar8 = 1 << (local_2c & 0xff);
    do {
      uVar7 = ~uVar8;
      printf("\b\b\b\b\b\b\b\b\b\b\b");
      printf("setting %3u",iVar6);
      fflush(stdout);
      if (param_3 != 0) {
        uVar1 = 0;
        puVar3 = param_1;
        puVar4 = param_2;
        uVar9 = uVar7;
        while( true ) {
          uVar1 = uVar1 + 1;
          puVar5 = puVar4 + 1;
          *puVar4 = uVar9;
          puVar4 = puVar3 + 1;
          *puVar3 = uVar9;
          if (param_3 == uVar1) break;
          puVar3 = puVar4;
          puVar4 = puVar5;
          uVar9 = uVar8;
          if ((uVar1 & 1) == 0) {
            uVar9 = uVar7;
          }
        }
      }
      printf("\b\b\b\b\b\b\b\b\b\b\b");
      printf("testing %3u",iVar6);
      fflush(stdout);
      iVar2 = FUN_00011478(param_1,param_2,param_3);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar6 = iVar6 + 1;
      uVar8 = uVar7;
    } while (local_38 != iVar6);
    local_2c = local_2c + 1;
    local_38 = local_38 + 8;
    if (local_2c == 0x20) {
      printf("\b\b\b\b\b\b\b\b\b\b\b           \b\b\b\b\b\b\b\b\b\b\b");
      fflush(stdout);
      return 0;
    }
  } while( true );
}



/* ===== FUN_00012484 @ 00012484 size=564 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00012484(uint *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte *pbVar11;
  uint *puVar12;
  int local_2c;
  
  if (__stdout->_chain == (_IO_FILE *)0x0) {
    fputc(0x20,__stdout);
  }
  else {
    pcVar4 = __stdout->_IO_write_base;
    if (pcVar4 < __stdout->_IO_buf_base) {
      __stdout->_IO_write_base = pcVar4 + 1;
      *pcVar4 = ' ';
    }
    else {
      __fputc_unlocked(0x20);
    }
  }
  fflush(stdout);
  uVar6 = 0;
  local_2c = 2;
  puVar5 = param_2;
  puVar8 = param_1;
  while( true ) {
    if (param_3 != 0) {
      uVar7 = 0;
      do {
        uVar2 = rand();
        iVar3 = rand();
        DAT_0002416c = uVar2 | iVar3 << 0x10;
        *puVar8 = DAT_0002416c;
        puVar9 = puVar5;
        puVar12 = &DAT_0002416c;
        do {
          puVar10 = (uint *)((int)puVar9 + 1);
          *(char *)puVar9 = (char)*puVar12;
          puVar9 = puVar10;
          puVar12 = (uint *)((int)puVar12 + 1);
        } while (puVar10 != puVar5 + 1);
        if (uVar7 % 0x9c4 == 0) {
          if (__stdout->_chain == (_IO_FILE *)0x0) {
            fputc(8,__stdout);
          }
          else {
            pcVar4 = __stdout->_IO_write_base;
            if (pcVar4 < __stdout->_IO_buf_base) {
              __stdout->_IO_write_base = pcVar4 + 1;
              *pcVar4 = '\b';
            }
            else {
              __fputc_unlocked(8);
            }
          }
          uVar6 = uVar6 + 1;
          bVar1 = (&DAT_0002411c)[uVar6 & 3];
          if (__stdout->_chain == (_IO_FILE *)0x0) {
            fputc((uint)bVar1,__stdout);
          }
          else {
            pbVar11 = (byte *)__stdout->_IO_write_base;
            if (pbVar11 < __stdout->_IO_buf_base) {
              __stdout->_IO_write_base = (char *)(pbVar11 + 1);
              *pbVar11 = bVar1;
            }
            else {
              __fputc_unlocked();
            }
          }
          fflush(stdout);
        }
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 1;
        puVar5 = puVar5 + 1;
      } while (param_3 != uVar7);
    }
    iVar3 = FUN_00011478(param_1,param_2,param_3);
    if (iVar3 != 0) break;
    if (local_2c == 1) {
      printf("\b \b");
      fflush(stdout);
      return 0;
    }
    local_2c = 1;
    puVar5 = param_1;
    puVar8 = param_2;
  }
  return 0xffffffff;
}



/* ===== FUN_000126b8 @ 000126b8 size=556 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_000126b8(uint *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int local_2c;
  
  if (__stdout->_chain == (_IO_FILE *)0x0) {
    fputc(0x20,__stdout);
  }
  else {
    pcVar4 = __stdout->_IO_write_base;
    if (pcVar4 < __stdout->_IO_buf_base) {
      __stdout->_IO_write_base = pcVar4 + 1;
      *pcVar4 = ' ';
    }
    else {
      __fputc_unlocked(0x20);
    }
  }
  fflush(stdout);
  uVar8 = 0;
  local_2c = 2;
  puVar6 = param_1;
  puVar9 = param_2;
  while( true ) {
    if (param_3 != 0) {
      uVar7 = 0;
      do {
        uVar2 = rand();
        iVar3 = rand();
        DAT_00024170 = uVar2 | iVar3 << 0x10;
        *puVar6 = DAT_00024170;
        *(undefined2 *)puVar9 = (undefined2)DAT_00024170;
        *(undefined2 *)((int)puVar9 + 2) = DAT_00024170._2_2_;
        if (uVar7 % 0x9c4 == 0) {
          if (__stdout->_chain == (_IO_FILE *)0x0) {
            fputc(8,__stdout);
          }
          else {
            pcVar4 = __stdout->_IO_write_base;
            if (pcVar4 < __stdout->_IO_buf_base) {
              __stdout->_IO_write_base = pcVar4 + 1;
              *pcVar4 = '\b';
            }
            else {
              __fputc_unlocked(8);
            }
          }
          uVar8 = uVar8 + 1;
          bVar1 = (&DAT_0002411c)[uVar8 & 3];
          if (__stdout->_chain == (_IO_FILE *)0x0) {
            fputc((uint)bVar1,__stdout);
          }
          else {
            pbVar5 = (byte *)__stdout->_IO_write_base;
            if (pbVar5 < __stdout->_IO_buf_base) {
              __stdout->_IO_write_base = (char *)(pbVar5 + 1);
              *pbVar5 = bVar1;
            }
            else {
              __fputc_unlocked();
            }
          }
          fflush(stdout);
        }
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      } while (param_3 != uVar7);
    }
    iVar3 = FUN_00011478(param_1,param_2,param_3);
    if (iVar3 != 0) break;
    if (local_2c == 1) {
      printf("\b \b");
      fflush(stdout);
      return 0;
    }
    local_2c = 1;
    puVar6 = param_2;
    puVar9 = param_1;
  }
  return 0xffffffff;
}



/* ===== FUN_000128e4 @ 000128e4 size=168 ===== */

ulonglong FUN_000128e4(uint param_1,uint param_2)

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



/* ===== FUN_0001298c @ 0001298c size=48 ===== */

void FUN_0001298c(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000128e4();
    return;
  }
  raise(8);
  return;
}



/* ===== _DT_FINI @ 000129bc size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00025000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00025004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 00025008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sysconf @ 0002500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00025010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt @ 00025014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getopt(int ___argc,char **___argv,char *__shortopts)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00025018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00025020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munlock @ 00025024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munlock(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 00025028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0002502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00025030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 00025034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00025038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00025040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mlock @ 00025044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mlock(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00025048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoull @ 0002504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 00025050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00025054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 00025058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00025060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00025064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rand @ 00025068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 0002506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00025070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 00025074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


