// ts_test_mt — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010a54 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 00010a78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002400c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010a84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00024010)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010a90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00024014)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00010a9c size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00024018)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00010aa8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002401c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::munmap @ 00010ab4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00024020)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_read_mt @ 00010ac0 size=12 ===== */

void ts_read_mt(void)

{
  (*(code *)PTR_ts_read_mt_00024024)();
  return;
}



/* ===== <EXTERNAL>::getenv @ 00010acc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00024028)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::qsort @ 00010ad8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0002402c)(__base);
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00010ae4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00024030)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::ts_close @ 00010af0 size=12 ===== */

void ts_close(void)

{
  (*(code *)PTR_ts_close_00024034)();
  return;
}



/* ===== <EXTERNAL>::perror @ 00010afc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00024038)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010b08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002403c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010b14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00024040)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010b20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00024044)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::mmap @ 00010b2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap_00024048)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::abort @ 00010b38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002404c)();
  return;
}



/* ===== <EXTERNAL>::calloc @ 00010b44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00024050)(__nmemb);
  return pvVar1;
}



/* ===== <EXTERNAL>::ts_read @ 00010b50 size=12 ===== */

void ts_read(void)

{
  (*(code *)PTR_ts_read_00024054)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010b5c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00024058)();
  return;
}



/* ===== <EXTERNAL>::ts_read_raw @ 00010b68 size=12 ===== */

void ts_read_raw(void)

{
  (*(code *)PTR_ts_read_raw_0002405c)();
  return;
}



/* ===== <EXTERNAL>::signal @ 00010b74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00024060)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::read @ 00010b80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00024064)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::memset @ 00010b98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002406c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::ts_fd @ 00010ba4 size=12 ===== */

void ts_fd(void)

{
  (*(code *)PTR_ts_fd_00024070)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010bb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00024074)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010bbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00024078)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_setup @ 00010bc8 size=12 ===== */

void ts_setup(void)

{
  (*(code *)PTR_ts_setup_0002407c)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00010bd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00024080)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::tslib_version @ 00010be0 size=12 ===== */

void tslib_version(void)

{
  (*(code *)PTR_tslib_version_00024084)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010bec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00024088)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010bf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002408c)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010c04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00024090)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 00010c10 size=12 ===== */

void ts_print_ascii_logo(void)

{
  (*(code *)PTR_ts_print_ascii_logo_00024094)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010c1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00024098)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 00010c28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0002409c)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010c34 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000240a0)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010c40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000240a4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00010c4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000240a8)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010c58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000240ac)(__ptr);
  return;
}



/* ===== FUN_00010c64 @ 00010c64 size=2160 ===== */

int FUN_00010c64(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *__ptr;
  void *__ptr_00;
  void *pvVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  void *pvVar9;
  uint *puVar10;
  undefined4 uVar11;
  __sighandler_t __handler;
  uint uVar12;
  size_t sVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  size_t sVar17;
  int iVar18;
  size_t __nmemb;
  int iVar19;
  bool bVar20;
  size_t local_e0;
  uint local_dc;
  int local_d8;
  int local_d0;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  undefined1 auStack_98 [116];
  
  __handler = (__sighandler_t)(DAT_000114d4 + 0x10c84);
  pvVar9 = (void *)(DAT_000114d8 + 0x10c8c);
  local_d8 = 0;
  signal(0xb,__handler);
  signal(2,__handler);
  iVar4 = DAT_000114dc;
  signal(0xf,__handler);
  local_dc = 0;
  bVar1 = false;
  local_e0 = 0;
  piVar2 = __errno_location();
  iVar15 = DAT_000114e0 + 0x10ce0;
  do {
    memcpy(auStack_98,pvVar9,0x70);
    local_b0 = 0;
    iVar3 = getopt_long(param_1,param_2,iVar4 + 0x10cc8,auStack_98,&local_b0);
    *piVar2 = 0;
    if (iVar3 == -1) {
      iVar4 = ts_setup(local_dc,0);
      if (iVar4 == 0) {
        perror((char *)(DAT_0001151c + 0x11458));
        return *piVar2;
      }
      bVar20 = bVar1;
      if (local_dc == 0) {
        bVar20 = false;
      }
      if (bVar20) {
        printf((char *)(DAT_00011510 + 0x110f0),local_dc);
      }
      iVar3 = ts_fd(iVar4);
      iVar3 = ioctl(iVar3,0x8018456f,&local_b0);
      if (iVar3 < 0) {
        perror((char *)(DAT_00011518 + 0x11438));
        ts_close(iVar4);
        return *piVar2;
      }
      __nmemb = local_e0;
      if (local_e0 == 0) {
        __nmemb = (local_a8 + 1) - local_ac;
      }
      piVar2 = malloc(4);
      if (piVar2 == (int *)0x0) {
        ts_close(iVar4);
        return -0xc;
      }
      pvVar9 = calloc(__nmemb,0x48);
      *piVar2 = (int)pvVar9;
      if (pvVar9 == (void *)0x0) {
        free(piVar2);
        ts_close(iVar4);
        return -0xc;
      }
      iVar3 = FUN_00011f1c();
      if (iVar3 != 0) {
        FUN_000123b4();
        free((void *)*piVar2);
LAB_000114a8:
        free(piVar2);
        ts_close(iVar4);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      pvVar9 = calloc(__nmemb,4);
      puVar6 = *(uint **)(iVar15 + DAT_000114f0);
      puVar10 = *(uint **)(iVar15 + DAT_000114f4);
      uVar12 = *puVar6;
      uVar16 = *puVar10;
      if (pvVar9 == (void *)0x0) {
        FUN_00012c58(0,0,uVar12 - 1,uVar16 - 1,0);
        FUN_000123b4();
        ts_close(iVar4);
        if ((void *)*piVar2 != (void *)0x0) {
          free((void *)*piVar2);
        }
        free(piVar2);
        return 0;
      }
      __ptr = calloc(__nmemb,4);
      if (__ptr == (void *)0x0) {
        __ptr_00 = (void *)0x0;
      }
      else {
        __ptr_00 = calloc(__nmemb,4);
        if (__ptr_00 != (void *)0x0) {
          for (iVar15 = 0; iVar15 < (int)__nmemb; iVar15 = iVar15 + 1) {
            *(uint *)((int)pvVar9 + iVar15 * 4) = uVar12 >> 1;
            *(uint *)((int)__ptr + iVar15 * 4) = uVar16 >> 1;
          }
          iVar15 = 0;
          puVar7 = (undefined4 *)(DAT_000114f8 + 0x10f94);
          do {
            iVar3 = iVar15 + 1;
            FUN_000124e4(iVar15,*puVar7);
            iVar15 = iVar3;
            puVar7 = puVar7 + 1;
          } while (iVar3 != 6);
          iVar3 = DAT_00011500 + 0x10fc4;
          pvVar5 = memset((void *)(DAT_000114fc + 0x10fc0),0,0x48);
          iVar15 = DAT_0001150c;
          iVar19 = DAT_00011508 + 0x10fe8;
          uVar16 = *puVar6 * 3;
          uVar12 = *puVar6 >> 2;
          *(int *)((int)pvVar5 + 0x10) = DAT_00011504 + 0x10fe4;
          *(uint *)((int)pvVar5 + 0x38) = uVar12;
          *(uint *)((int)pvVar5 + 0x20) = uVar12;
          *(uint *)((int)pvVar5 + 8) = uVar12;
          *(int *)((int)pvVar5 + 0x28) = iVar19;
          *(uint *)((int)pvVar5 + 0x18) = uVar16 >> 3;
          *(uint *)((int)pvVar5 + 0x30) = uVar16 >> 2;
          *(int *)((int)pvVar5 + 0x40) = iVar15 + 0x11000;
          *(undefined4 *)((int)pvVar5 + 0x3c) = 0x14;
          *(undefined4 *)((int)pvVar5 + 0x24) = 0x14;
          *(undefined4 *)((int)pvVar5 + 0xc) = 0x14;
          *(undefined4 *)((int)pvVar5 + 0x34) = 10;
          *(undefined4 *)((int)pvVar5 + 0x1c) = 10;
          *(undefined4 *)((int)pvVar5 + 4) = 10;
          FUN_0001181c();
          FUN_000118e4(auStack_98,0x40,__nmemb,local_e0);
          local_dc = 0;
          while (local_d8 == 0) {
            do {
              if ((int)__nmemb < 1) {
                local_d0 = ts_read_mt(iVar4,piVar2,__nmemb,1);
              }
              else {
                sVar13 = 0;
                do {
                  sVar17 = sVar13;
                  if (((local_dc & 0xf) != 1) &&
                     ((uVar12 = *(uint *)((int)__ptr_00 + sVar17 * 4), sVar17 == 0 ||
                      ((uVar12 & 8) != 0)))) {
                    if ((uVar12 & 0x1000) == 0) {
                      FUN_000129b4(*(undefined4 *)((int)pvVar9 + sVar17 * 4),
                                   *(undefined4 *)((int)__ptr + sVar17 * 4),0x80000002);
                    }
                    *(uint *)((int)__ptr_00 + sVar17 * 4) = uVar12 | 0x1000;
                  }
                  sVar13 = sVar17 + 1;
                } while (__nmemb != sVar17 + 1);
                sVar13 = 0;
                local_d0 = ts_read_mt(iVar4,piVar2,__nmemb,1);
                do {
                  if (((local_dc & 0xf) != 1) &&
                     ((uVar12 = *(uint *)((int)__ptr_00 + sVar13 * 4), sVar13 == 0 ||
                      ((uVar12 & 0x1008) != 0)))) {
                    FUN_000129b4(*(undefined4 *)((int)pvVar9 + sVar13 * 4),
                                 *(undefined4 *)((int)__ptr + sVar13 * 4),0x80000002);
                    *(uint *)((int)__ptr_00 + sVar13 * 4) = uVar12 & 0xffffefff;
                  }
                  bVar20 = sVar17 != sVar13;
                  sVar13 = sVar13 + 1;
                } while (bVar20);
              }
              if (local_d0 < 0) {
                perror((char *)(DAT_00011520 + 0x114a0));
                FUN_000123b4();
                goto LAB_000114a8;
              }
            } while (local_d0 != 1);
            for (iVar15 = 0; iVar15 < (int)__nmemb; iVar15 = iVar15 + 1) {
              iVar19 = *piVar2;
              iVar14 = iVar15 * 0x48;
              if ((*(ushort *)(iVar19 + iVar14 + 0x46) & 1) != 0) {
                bVar20 = false;
                iVar18 = 0;
LAB_000111f0:
                iVar19 = FUN_00011a38(iVar18 * 0x18 + iVar3,*(undefined4 *)(iVar19 + iVar14),
                                      *(undefined4 *)(iVar19 + iVar14 + 4),
                                      *(undefined4 *)(iVar19 + iVar14 + 8));
                if (iVar19 == 0) {
LAB_00011244:
                  if (iVar18 + 1 == 3) goto LAB_0001125c;
LAB_0001124c:
                  iVar19 = *piVar2;
                  iVar18 = iVar18 + 1;
                  goto LAB_000111f0;
                }
                if (iVar18 == 1) {
                  FUN_0001181c();
                  FUN_000118e4(auStack_98,0x40,__nmemb,local_e0);
                  local_dc = 1;
                  goto LAB_0001124c;
                }
                if (iVar18 != 2) {
                  FUN_0001181c();
                  local_dc = 0;
                  FUN_000118e4(auStack_98,0x40,__nmemb,local_e0);
                  goto LAB_00011244;
                }
                bVar20 = true;
LAB_0001125c:
                if (bVar1) {
                  iVar19 = *piVar2 + iVar14;
                  printf((char *)(DAT_00011514 + 0x113a0),*(undefined4 *)(iVar19 + 0x3c),
                         *(undefined4 *)(iVar19 + 0x40),*(undefined4 *)(iVar19 + 0xc),
                         *(undefined4 *)(*piVar2 + iVar14),*(undefined4 *)(iVar19 + 4),
                         *(undefined4 *)(iVar19 + 8));
                }
                iVar19 = *piVar2;
                uVar12 = *(uint *)((int)__ptr_00 + iVar15 * 4);
                puVar7 = (undefined4 *)(iVar19 + iVar14);
                if (puVar7[2] == 0) {
                  local_dc = local_dc & 0x7fffffff;
                  *(uint *)((int)__ptr_00 + iVar15 * 4) = uVar12 & 0x7ffffff7;
                }
                else {
                  if ((((int)local_dc < 0) && ((local_dc & 1) != 0)) && ((int)uVar12 < 0)) {
                    FUN_000128b4(*(undefined4 *)((int)pvVar9 + iVar15 * 4),
                                 *(undefined4 *)((int)__ptr + iVar15 * 4),*puVar7,puVar7[1],2);
                    iVar19 = *piVar2;
                  }
                  uVar8 = *(undefined4 *)(iVar19 + iVar14);
                  local_dc = local_dc | 0x80000000;
                  uVar11 = *(undefined4 *)(iVar19 + iVar14 + 4);
                  *(uint *)((int)__ptr_00 + iVar15 * 4) = uVar12 | 0x80000008;
                  *(undefined4 *)((int)pvVar9 + iVar15 * 4) = uVar8;
                  *(undefined4 *)((int)__ptr + iVar15 * 4) = uVar11;
                }
                if (bVar20) goto LAB_000112d0;
              }
            }
          }
        }
      }
LAB_000112d0:
      FUN_00012c58(0,0,*puVar6 - 1,*puVar10 - 1,0);
      FUN_000123b4();
      ts_close(iVar4);
      if ((void *)*piVar2 != (void *)0x0) {
        free((void *)*piVar2);
      }
      free(piVar2);
      free(pvVar9);
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      if (__ptr_00 == (void *)0x0) {
        return 0;
      }
      free(__ptr_00);
      return 0;
    }
    switch(iVar3) {
    case 0x61:
      uVar12 = atoi((char *)**(undefined4 **)(iVar15 + DAT_000114e4));
      **(undefined1 **)(iVar15 + DAT_000114ec) = (char)uVar12;
      if (1 < (uVar12 & 0xff)) goto switchD_00010d24_default;
      break;
    case 0x62:
      goto switchD_00010d24_default;
    case 99:
      goto switchD_00010d24_default;
    case 100:
      goto switchD_00010d24_default;
    case 0x65:
      goto switchD_00010d24_default;
    case 0x66:
      goto switchD_00010d24_default;
    case 0x67:
      goto switchD_00010d24_default;
    case 0x68:
      goto switchD_00010d24_default;
    case 0x69:
      local_dc = **(int **)(iVar15 + DAT_000114e4);
      break;
    case 0x6a:
      local_e0 = atoi((char *)**(undefined4 **)(iVar15 + DAT_000114e4));
      if ((int)local_e0 < 1) goto switchD_00010d24_default;
      break;
    case 0x6b:
      goto switchD_00010d24_default;
    case 0x6c:
      goto switchD_00010d24_default;
    case 0x6d:
      goto switchD_00010d24_default;
    case 0x6e:
      local_d8 = atoi((char *)**(undefined4 **)(iVar15 + DAT_000114e4));
      break;
    case 0x6f:
      goto switchD_00010d24_default;
    case 0x70:
      goto switchD_00010d24_default;
    case 0x71:
      goto switchD_00010d24_default;
    case 0x72:
      uVar12 = atoi((char *)**(undefined4 **)(iVar15 + DAT_000114e4));
      **(undefined1 **)(iVar15 + DAT_000114e8) = (char)uVar12;
      if (3 < (uVar12 & 0xff)) {
switchD_00010d24_default:
        FUN_00011698();
        return 0;
      }
      break;
    case 0x73:
      goto switchD_00010d24_default;
    case 0x74:
      goto switchD_00010d24_default;
    case 0x75:
      goto switchD_00010d24_default;
    case 0x76:
      bVar1 = true;
      break;
    default:
      goto switchD_00010d24_default;
    }
  } while( true );
}



/* ===== entry @ 00011524 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00024068)
            (DAT_00011558,param_2,&stack0x00000004,DAT_0001155c,DAT_00011554,param_1);
  return;
}



/* ===== FUN_00011560 @ 00011560 size=32 ===== */

void FUN_00011560(void)

{
  if (DAT_00011584 == DAT_00011580) {
    return;
  }
  if (DAT_00011588 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001157c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011588)();
  return;
}



/* ===== _FINI_0 @ 000115c4 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011600;
  if (*DAT_00011600 != '\0') {
    return;
  }
  FUN_00011560();
  if (DAT_00011604 != 0) {
    __deregister_frame_info(DAT_00011608);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 0001160c size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011630 != 0) {
    __register_frame_info(DAT_00011638,DAT_00011634);
  }
  if ((DAT_000115bc - DAT_000115b8 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000115c0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000115b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000115c0)();
  return;
}



/* ===== FUN_0001163c @ 0001163c size=76 ===== */

void FUN_0001163c(undefined4 param_1)

{
  int iVar1;
  
  FUN_000123b4();
  iVar1 = DAT_00011688 + 0x11658;
  fflush((FILE *)**(undefined4 **)(iVar1 + DAT_0001168c));
  printf((char *)(DAT_00011690 + 0x11670),param_1);
  fflush((FILE *)**(undefined4 **)(iVar1 + DAT_00011694));
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011698 @ 00011698 size=304 ===== */

void FUN_00011698(void)

{
  ts_print_ascii_logo(0x10);
  FUN_00011e1c();
  putchar(10);
  puts((char *)(DAT_000117c8 + 0x116bc));
  putchar(10);
  puts((char *)(DAT_000117cc + 0x116d0));
  puts((char *)(DAT_000117d0 + 0x116dc));
  puts((char *)(DAT_000117d4 + 0x116e8));
  puts((char *)(DAT_000117d8 + 0x116f4));
  puts((char *)(DAT_000117dc + 0x11700));
  puts((char *)(DAT_000117e0 + 0x1170c));
  puts((char *)(DAT_000117e4 + 0x11718));
  puts((char *)(DAT_000117e8 + 0x11724));
  puts((char *)(DAT_000117ec + 0x11730));
  puts((char *)(DAT_000117f0 + 0x1173c));
  puts((char *)(DAT_000117f4 + 0x11748));
  puts((char *)(DAT_000117f8 + 0x11754));
  puts((char *)(DAT_000117fc + 0x11760));
  puts((char *)(DAT_00011800 + 0x1176c));
  puts((char *)(DAT_00011804 + 0x11778));
  puts((char *)(DAT_00011808 + 0x11784));
  puts((char *)(DAT_0001180c + 0x11790));
  puts((char *)(DAT_00011810 + 0x1179c));
  puts((char *)(DAT_00011814 + 0x117a8));
  putchar(10);
  puts((char *)(DAT_00011818 + 0x117bc));
  putchar(10);
  return;
}



/* ===== FUN_0001181c @ 0001181c size=176 ===== */

void FUN_0001181c(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  iVar1 = DAT_000118d8;
  puVar3 = *(uint **)(DAT_000118cc + 0x11830 + DAT_000118d0);
  puVar2 = *(uint **)(DAT_000118cc + 0x11830 + DAT_000118d4);
  FUN_00012c58(0,0,*puVar2 - 1,*puVar3 - 1,0);
  FUN_00012858(*puVar2 >> 1,*puVar3 >> 2,DAT_000118dc + 0x11888);
  FUN_00012858(*puVar2 >> 1,(*puVar3 >> 2) + 0x14,DAT_000118e0 + 0x118a4);
  FUN_00011988(iVar1 + 0x1187c);
  FUN_00011988(iVar1 + 0x11894);
  FUN_00011988(iVar1 + 0x118ac);
  return;
}



/* ===== FUN_000118e4 @ 000118e4 size=112 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000118e4(byte *param_1,size_t param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  
  iVar4 = DAT_00011954 + 0x11904;
  if (param_4 == 0) {
    iVar2 = DAT_00011958 + 0x11910;
  }
  else {
    iVar2 = (int)&DAT_00011954 + DAT_00011964;
  }
  snprintf((char *)param_1,param_2,(char *)(DAT_0001195c + 0x11920),param_3,iVar2);
  iVar4 = **(int **)(iVar4 + DAT_00011960);
  uVar8 = (uint)*param_1;
  if (uVar8 != 0) {
    iVar9 = 2;
    iVar6 = *(int *)(_UNK_00012850 + 0x127a4 + _UNK_00012854);
    iVar2 = *(int *)(iVar6 + 8);
    do {
      iVar3 = *(int *)(iVar6 + 0xc);
      if (0 < iVar3) {
        iVar5 = 0;
        do {
          bVar7 = *(byte *)(iVar3 * uVar8 + *(int *)(iVar6 + 0x10) + iVar5);
          if (0 < iVar2) {
            iVar3 = 0;
            do {
              while (bVar1 = bVar7 & 0x80, bVar7 = bVar7 << 1, bVar1 != 0) {
                iVar2 = iVar3 + iVar9;
                iVar3 = iVar3 + 1;
                FUN_000125f8(iVar2,iVar5 + iVar4 + -0xe,2);
                iVar2 = *(int *)(iVar6 + 8);
                if (iVar2 <= iVar3) goto LAB_00012828;
              }
              iVar2 = *(int *)(iVar6 + 8);
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar2);
          }
LAB_00012828:
          iVar3 = *(int *)(iVar6 + 0xc);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
      param_1 = param_1 + 1;
      uVar8 = (uint)*param_1;
      iVar9 = iVar9 + iVar2;
    } while (uVar8 != 0);
  }
  return;
}



/* ===== FUN_00011988 @ 00011988 size=380 ===== */

void FUN_00011988(int *param_1)

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
  FUN_00012bdc(*param_1,param_1[1],*param_1 + param_1[2],param_1[1] + param_1[3],1);
  FUN_00012c58(*param_1 + 1,param_1[1] + 1,*param_1 + param_1[2] + -2,param_1[1] + param_1[3] + -2,
               uVar2);
  FUN_00012858(*param_1 + param_1[2] / 2,param_1[1] + param_1[3] / 2,param_1[4],uVar1);
  return;
}



/* ===== FUN_00011a38 @ 00011a38 size=188 ===== */

uint FUN_00011a38(int *param_1,int param_2,int param_3,int param_4)

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
      FUN_00011988(param_1);
      return 0;
    }
  }
  else if (param_4 != 0) {
    if (uVar1 == 0) {
      param_1[5] = uVar2 | 1;
      FUN_00011988();
      return 0;
    }
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  param_1[5] = uVar2 & 0xfffffffe;
  FUN_00011988(param_1);
  return uVar1;
}



/* ===== FUN_00011af4 @ 00011af4 size=456 ===== */

void FUN_00011af4(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint __nmemb;
  int local_a34 [645];
  
  do {
    iVar1 = ts_read_raw(param_1,local_a34 + 5,1);
    if (iVar1 < 0) goto LAB_00011ca4;
  } while (local_a34[7] == 0);
  __nmemb = 0;
  do {
    if ((int)__nmemb < 0x7f) {
      __nmemb = __nmemb + 1;
    }
    iVar1 = ts_read_raw(param_1,local_a34 + __nmemb * 5 + 5,1);
    if (iVar1 < 0) {
LAB_00011ca4:
      perror((char *)(DAT_00011cd0 + 0x11cb0));
      FUN_000123b4();
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  } while (local_a34[__nmemb * 5 + 7] != 0);
  iVar1 = (int)__nmemb >> 1;
  printf((char *)(DAT_00011cbc + 0x11b84),__nmemb);
  if (param_2 == (int *)0x0) {
    if (param_3 == (int *)0x0) {
      return;
    }
    qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_00011ccc + 0x11c94));
    if ((__nmemb & 1) == 0) goto LAB_00011c44;
  }
  else {
    qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_00011cc0 + 0x11ba4));
    if ((__nmemb & 1) == 0) {
      *param_2 = (local_a34[(iVar1 + -1) * 5 + 5] + local_a34[iVar1 * 5 + 5]) / 2;
      if (param_3 == (int *)0x0) {
        return;
      }
      qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_00011cc8 + 0x11c44));
LAB_00011c44:
      *param_3 = (local_a34[(iVar1 + -1) * 5 + 6] + local_a34[iVar1 * 5 + 6]) / 2;
      return;
    }
    *param_2 = local_a34[iVar1 * 5 + 5];
    if (param_3 == (int *)0x0) {
      return;
    }
    qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_00011cc4 + 0x11bdc));
  }
  *param_3 = local_a34[iVar1 * 5 + 6];
  return;
}



/* ===== FUN_00011cd4 @ 00011cd4 size=228 ===== */

void FUN_00011cd4(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_a20 [640];
  
  do {
    iVar1 = ts_read(param_1,aiStack_a20,1);
    if (iVar1 < 0) goto LAB_00011da0;
  } while (aiStack_a20[2] == 0);
  iVar1 = 0;
  while( true ) {
    if (iVar1 < 0x7f) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = ts_read(param_1,aiStack_a20 + iVar1 * 5,1);
    if (iVar2 < 0) break;
    if (aiStack_a20[iVar1 * 5 + 2] == 0) {
      printf((char *)(DAT_00011db8 + 0x11d60),iVar1);
      if (param_2 != (int *)0x0) {
        *param_2 = aiStack_a20[(iVar1 + -1) * 5];
      }
      if (param_3 != (int *)0x0) {
        *param_3 = aiStack_a20[(iVar1 + -1) * 5 + 1];
      }
      return;
    }
  }
LAB_00011da0:
  perror((char *)(DAT_00011dbc + 0x11dac));
  FUN_000123b4();
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011e1c @ 00011e1c size=28 ===== */

void FUN_00011e1c(void)

{
  undefined4 uVar1;
  
  uVar1 = tslib_version();
  printf((char *)((int)&DAT_00011e38 + DAT_00011e38),uVar1);
  return;
}



/* ===== FUN_00011e3c @ 00011e3c size=204 ===== */

void FUN_00011e3c(int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00011f08 + 0x11e4c;
  iVar2 = *(int *)(DAT_00011f10 + 0x11e5c);
  iVar4 = *(int *)(DAT_00011f10 + 0x11e60);
  cVar1 = **(char **)(iVar3 + DAT_00011f0c);
  if (cVar1 == '\x02') {
    *param_3 = iVar4 * ((**(int **)(iVar3 + DAT_00011f18) + -1) - param_1) +
               *(int *)(iVar2 + ((**(int **)(iVar3 + DAT_00011f14) + 0x3fffffff) - param_2) * 4);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x01') {
      *param_3 = iVar4 * param_1 + *(int *)(iVar2 + param_2 * 4);
      return;
    }
    *param_3 = iVar4 * ((**(int **)(iVar3 + DAT_00011f14) + -1) - param_2) +
               *(int *)(iVar2 + param_1 * 4);
    return;
  }
  *param_3 = iVar4 * param_2 +
             *(int *)(iVar2 + ((**(int **)(iVar3 + DAT_00011f18) + 0x3fffffff) - param_1) * 4);
  return;
}



/* ===== FUN_00011f1c @ 00011f1c size=1048 ===== */

undefined4 FUN_00011f1c(void)

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
  
  iVar12 = DAT_00012338;
  pcVar1 = getenv((char *)(DAT_00012334 + 0x11f2c));
  iVar12 = iVar12 + 0x11f3c;
  if (pcVar1 == (char *)0x0) {
    *(int *)(DAT_00012378 + 0x12218) = DAT_0001237c + 0x12214;
  }
  else {
    *(char **)(DAT_0001233c + 0x11f54) = pcVar1;
  }
  pcVar1 = getenv((char *)(DAT_00012340 + 0x11f58));
  iVar2 = DAT_00012344;
  *(char **)(DAT_00012344 + 0x11f70) = pcVar1;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)(DAT_00012374 + 0x121fc);
    *(char **)(iVar2 + 0x11f70) = pcVar1;
  }
  else {
    iVar2 = strcmp(pcVar1,(char *)(DAT_00012348 + 0x11f7c));
    if (iVar2 == 0) goto LAB_00012084;
    sVar3 = strlen(pcVar1);
    if (0x7f < sVar3) {
      return 0xffffffff;
    }
  }
  __format = (char *)(DAT_0001234c + 0x11fac);
  sprintf(acStack_98,__format,pcVar1,1);
  iVar2 = open(acStack_98,1);
  if (iVar2 < 0) {
    perror((char *)(DAT_00012390 + 0x12280));
    return 0xffffffff;
  }
  iVar4 = ioctl(iVar2,0x5600,&local_a4);
  iVar5 = DAT_00012350;
  if (iVar4 < 0) {
    close(iVar2);
    perror((char *)(DAT_00012394 + 0x1229c));
    return 0xffffffff;
  }
  close(iVar2);
  sprintf(acStack_98,__format,*(undefined4 *)(iVar5 + 0x12000),local_a4);
  iVar2 = open(acStack_98,0x802);
  *(int *)(iVar5 + 0x12004) = iVar2;
  if (iVar2 < 0) {
    perror((char *)(DAT_00012398 + 0x122b0));
    return 0xffffffff;
  }
  iVar5 = ioctl(iVar2,0x5603,local_a0);
  if (iVar5 == 0) {
    *(uint *)(DAT_00012354 + 0x1203c) = (uint)local_a0[0];
  }
  iVar5 = ioctl(iVar2,0x5606,local_a4);
  if (iVar5 < 0) {
    perror((char *)(DAT_0001239c + 0x122c4));
    close(*(int *)(DAT_000123a0 + 0x122e0));
    return 0xffffffff;
  }
  iVar5 = ioctl(iVar2,0x5607,local_a4);
  if (iVar5 < 0) {
    perror((char *)(DAT_000123a4 + 0x122e8));
    close(*(int *)(DAT_000123a8 + 0x12304));
    return 0xffffffff;
  }
  iVar2 = ioctl(iVar2,0x4b3a,1);
  if (iVar2 < 0) {
    perror((char *)(DAT_00012380 + 0x12228));
    close(*(int *)(DAT_00012384 + 0x12244));
    return 0xffffffff;
  }
LAB_00012084:
  iVar2 = DAT_00012358;
  iVar5 = open(*(char **)(DAT_00012358 + 0x1209c),2);
  *(int *)(iVar2 + 0x120a8) = iVar5;
  if (iVar5 == -1) {
    perror((char *)(DAT_0001238c + 0x1226c));
    uVar9 = 0xffffffff;
  }
  else {
    iVar4 = ioctl(iVar5,0x4602,iVar2 + 0x120ac);
    if (iVar4 < 0) {
      uVar9 = 0xffffffff;
      perror((char *)(DAT_00012388 + 0x12254));
      close(*(int *)(iVar2 + 0x120a8));
    }
    else {
      iVar6 = ioctl(iVar5,0x4600,iVar2 + 0x120f0);
      iVar4 = DAT_00012360;
      if (iVar6 < 0) {
        uVar9 = 0xffffffff;
        perror((char *)(DAT_000123b0 + 0x12328));
        close(*(int *)(iVar2 + 0x120a8));
      }
      else {
        uVar9 = *(undefined4 *)(iVar2 + 0x120f0);
        uVar10 = *(undefined4 *)(iVar2 + 0x120f4);
        **(undefined4 **)(iVar12 + DAT_0001235c) = uVar9;
        iVar2 = DAT_00012364;
        **(undefined4 **)(iVar12 + iVar4) = uVar10;
        iVar6 = DAT_0001236c;
        iVar4 = DAT_00012368;
        if ((**(byte **)(iVar12 + iVar2) & 1) == 0) {
          **(undefined4 **)(iVar12 + DAT_00012368) = uVar9;
          **(undefined4 **)(iVar12 + iVar6) = uVar10;
        }
        else {
          **(undefined4 **)(iVar12 + DAT_0001236c) = uVar9;
          **(undefined4 **)(iVar12 + iVar4) = uVar10;
        }
        iVar12 = DAT_00012370;
        puVar13 = (undefined4 *)(DAT_00012370 + 0x12138);
        __s = mmap((void *)0x0,*(size_t *)(DAT_00012370 + 0x12164),3,1,iVar5,0);
        *(void **)(iVar12 + 0x12234) = __s;
        if (__s == (void *)0xffffffff) {
          perror((char *)(DAT_000123ac + 0x1230c));
          close(*(int *)(iVar12 + 0x1214c));
          uVar9 = 0xffffffff;
        }
        else {
          memset(__s,0,*(size_t *)(iVar12 + 0x12164));
          iVar5 = *(int *)(iVar12 + 0x121a0);
          *(uint *)(iVar12 + 0x1213c) = *(int *)(iVar12 + 0x121ac) + 7U >> 3;
          *(int *)(iVar12 + 0x12238) =
               ~(-1 << (*(uint *)(iVar12 + 0x121dc) & 0xff)) << (*(uint *)(iVar12 + 0x121d8) & 0xff)
          ;
          puVar7 = malloc(iVar5 * 4);
          pvVar11 = extraout_r3;
          iVar2 = extraout_r1;
          if (iVar5 != 0) {
            iVar2 = *(int *)(iVar12 + 0x1217c);
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



/* ===== FUN_000123b4 @ 000123b4 size=260 ===== */

void FUN_000123b4(void)

{
  void *__addr;
  int iVar1;
  int iVar2;
  int iVar3;
  int __fd;
  
  iVar2 = DAT_000124b8;
  iVar3 = DAT_000124bc + 0x123d0;
  __addr = memset(*(void **)((int)&DAT_000124c8 + DAT_000124b8),0,
                  *(size_t *)(DAT_000124b8 + 0x123f8));
  munmap(__addr,*(size_t *)(iVar2 + 0x123f8));
  close(*(int *)(iVar2 + 0x123e0));
  iVar1 = strcmp(*(char **)(iVar2 + 0x123d8),(char *)(DAT_000124c0 + 0x123fc));
  if (iVar1 != 0) {
    __fd = *(int *)(iVar2 + 0x123dc);
    iVar1 = ioctl(__fd,0x4b3a,0);
    if (iVar1 < 0) {
      perror((char *)(DAT_000124e0 + 0x124b0));
      __fd = *(int *)(iVar2 + 0x123dc);
    }
    if ((-1 < *(int *)(DAT_000124d4 + 0x12464)) && (iVar2 = ioctl(__fd,0x5606), iVar2 != 0)) {
      perror((char *)(DAT_000124d8 + 0x12494));
      __fd = *(int *)(DAT_000124dc + 0x124b0);
    }
    close(__fd);
  }
  free(*(void **)(DAT_000124c4 + 0x12410));
  iVar1 = DAT_000124d0;
  iVar2 = DAT_000124cc;
  **(undefined4 **)(iVar3 + DAT_000124c8) = 0;
  **(undefined4 **)(iVar3 + iVar2) = 0;
  **(undefined1 **)(iVar3 + iVar1) = 0;
  return;
}



/* ===== FUN_000124e4 @ 000124e4 size=264 ===== */

void FUN_000124e4(uint param_1,uint param_2)

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
  if (*(int *)(DAT_000125ec + 0x12504) - 2U < 3) {
    uVar2 = ((int)((param_2 & 0xffffff) >> 8 & 0xff) >>
            (8U - *(int *)(DAT_000125ec + 0x1258c) & 0xff)) <<
            (*(uint *)(DAT_000125ec + 0x12588) & 0xff) |
            ((int)((param_2 & 0xffffff) >> 0x10) >> (8U - *(int *)(DAT_000125ec + 0x12580) & 0xff))
            << (*(uint *)(DAT_000125ec + 0x1257c) & 0xff) |
            ((int)(param_2 & 0xff) >> (8U - *(int *)(DAT_000125ec + 0x12598) & 0xff)) <<
            (*(uint *)(DAT_000125ec + 0x12594) & 0xff);
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
    iVar1 = ioctl(*(int *)(DAT_000125ec + 0x12514),0x4605,local_28);
    uVar2 = param_1;
    if (iVar1 < 0) {
      perror((char *)(DAT_000125f4 + 0x125e4));
    }
  }
  *(uint *)(DAT_000125f0 + param_1 * 4 + 0x12670) = uVar2;
  return;
}



/* ===== FUN_000125f8 @ 000125f8 size=364 ===== */

void FUN_000125f8(uint param_1,uint param_2,uint param_3)

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
    if (((param_1 < **(uint **)(DAT_00012764 + 0x12608 + DAT_00012768) && -1 < (int)param_2) &&
        (param_2 < **(uint **)(DAT_00012764 + 0x12608 + DAT_0001276c))) &&
       ((param_3 & 0x7fffff00) == 0)) {
      FUN_00011e3c(param_1,param_2,&local_c);
      iVar4 = *(int *)(DAT_00012770 + 0x12680);
      uVar8 = *(uint *)((int)&DAT_00012780 + DAT_00012770 + param_3 * 4);
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
        iVar4 = DAT_00012778;
        if (bVar9) {
          bVar2 = bVar2 ^ bVar1;
          *(byte *)local_c = bVar2;
          bVar6 = bVar6 ^ *(byte *)((int)local_c + 2);
        }
        *(byte *)((int)local_c + 2) = bVar6;
        uVar5 = *(undefined4 *)(iVar4 + 0x127f8);
        if (!bVar9) {
          *(byte *)local_c = bVar2;
        }
        *(byte *)((int)local_c + 2) = *(byte *)((int)local_c + 2) | (byte)uVar5;
      }
      else if (iVar4 == 4) {
        if ((int)param_3 < 0) {
          uVar8 = uVar8 ^ *local_c;
        }
        *local_c = *(uint *)(FUN_00012858 + DAT_00012780) | uVar8;
      }
      else if (iVar4 == 2) {
        uVar7 = (ushort)uVar8;
        if ((int)param_3 < 0) {
          uVar7 = uVar7 ^ (ushort)*local_c;
        }
        *(ushort *)local_c = uVar7 | (ushort)*(undefined4 *)(DAT_0001277c + 0x12834);
      }
      else {
        if ((int)param_3 < 0) {
          bVar6 = bVar6 ^ (byte)*local_c;
        }
        *(byte *)local_c = bVar6 | (byte)*(undefined4 *)(DAT_00012774 + 0x127b8);
      }
    }
    return;
  }
  return;
}



/* ===== FUN_00012858 @ 00012858 size=84 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012858(int param_1,int param_2,byte *param_3,undefined4 param_4)

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
  iVar9 = *(int *)(DAT_000128ac + 0x12888 + DAT_000128b0);
  iVar8 = *(int *)(iVar9 + 0xc);
  param_1 = param_1 - *(int *)(iVar9 + 8) * (sVar2 >> 1);
  uVar7 = (uint)*param_3;
  if (uVar7 != 0) {
    iVar5 = *(int *)(_UNK_00012850 + 0x127a4 + _UNK_00012854);
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
                FUN_000125f8(iVar9,iVar4 + (param_2 - iVar8 / 2),param_4);
                iVar9 = *(int *)(iVar5 + 8);
                if (iVar9 <= iVar3) goto LAB_00012828;
              }
              iVar9 = *(int *)(iVar5 + 8);
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar9);
          }
LAB_00012828:
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



/* ===== FUN_000128b4 @ 000128b4 size=256 ===== */

void FUN_000128b4(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

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
    iVar2 = FUN_00012eb0(uVar5 << 0x10,uVar1);
    param_1 = param_1 << 0x10;
    do {
      iVar4 = iVar3 + 1;
      FUN_000125f8(param_1 >> 0x10,iVar3,param_5);
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
    if (uVar5 == 0) goto LAB_00012980;
  }
  uVar5 = FUN_00012eb0(uVar1 << 0x10,uVar5);
  param_3 = iVar3;
LAB_00012980:
  do {
    iVar3 = param_1 + 1;
    FUN_000125f8(param_1,param_4 >> 0x10,param_5);
    param_4 = param_4 + uVar5;
    param_1 = iVar3;
  } while (iVar3 <= param_3);
  return;
}



/* ===== FUN_000129b4 @ 000129b4 size=544 ===== */

void FUN_000129b4(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_00012bd4;
  FUN_000128b4(param_1 + -10,param_2,param_1 + -2,param_2,param_3);
  FUN_000128b4(param_1 + 2,param_2,param_1 + 10,param_2,param_3);
  FUN_000128b4(param_1,param_2 + -10,param_1,param_2 + -2,param_3);
  FUN_000128b4(param_1,param_2 + 2,param_1,param_2 + 10,param_3);
  cVar1 = **(char **)(iVar2 + 0x12a34 + DAT_00012bd8);
  if (cVar1 == '\0') {
    iVar3 = param_1 + -9;
    iVar2 = param_2 + -9;
    param_3 = param_3 + 1;
    iVar5 = param_2 + 9;
    FUN_000128b4(param_1 + -6,iVar2,iVar3,iVar2,param_3);
    FUN_000128b4(iVar3,param_2 + -8,iVar3,param_2 + -6,param_3);
    iVar4 = param_1 + 9;
    FUN_000128b4(iVar3,param_2 + 6,iVar3,iVar5,param_3);
    FUN_000128b4(param_1 + -8,iVar5,param_1 + -6,iVar5,param_3);
    FUN_000128b4(param_1 + 6,iVar5,iVar4,iVar5,param_3);
    FUN_000128b4(iVar4,param_2 + 8,iVar4,param_2 + 6,param_3);
    FUN_000128b4(iVar4,param_2 + -6,iVar4,iVar2,param_3);
    FUN_000128b4(param_1 + 8,iVar2,param_1 + 6,iVar2,param_3);
    return;
  }
  if (cVar1 != '\x01') {
    return;
  }
  param_3 = param_3 + 1;
  FUN_000128b4(param_1 + -7,param_2 + -7,param_1 + -4,param_2 + -4,param_3);
  FUN_000128b4(param_1 + -7,param_2 + 7,param_1 + -4,param_2 + 4,param_3);
  FUN_000128b4(param_1 + 4,param_2 + -4,param_1 + 7,param_2 + -7,param_3);
  FUN_000128b4(param_1 + 4,param_2 + 4,param_1 + 7,param_2 + 7,param_3);
  return;
}



/* ===== FUN_00012bdc @ 00012bdc size=124 ===== */

void FUN_00012bdc(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  FUN_000128b4();
  FUN_000128b4(param_3,param_2 + 1,param_3,param_4 + -1,param_5);
  FUN_000128b4(param_3,param_4,param_1,param_4,param_5);
  FUN_000128b4(param_1,param_4 + -1,param_1,param_2 + 1);
  return;
}



/* ===== FUN_00012c58 @ 00012c58 size=568 ===== */

void FUN_00012c58(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

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
  
  iVar6 = DAT_00012eac;
  iVar5 = DAT_00012ea8;
  iVar4 = DAT_00012ea4;
  iVar3 = DAT_00012ea0;
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
  uVar10 = **(uint **)(DAT_00012e90 + 0x12c6c + DAT_00012e94);
  local_38 = param_3 & ~((int)param_3 >> 0x1f);
  param_4 = param_4 & ~((int)param_4 >> 0x1f);
  local_34 = local_34 & ~((int)local_34 >> 0x1f);
  if (uVar10 <= local_38) {
    local_38 = uVar10 - 1;
  }
  if (uVar10 <= uVar11) {
    uVar11 = uVar10 - 1;
  }
  uVar10 = **(uint **)(DAT_00012e90 + 0x12c6c + DAT_00012e98);
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
    iVar13 = *(int *)(DAT_00012e9c + 0x12d20);
    uVar12 = *(uint *)(DAT_00012e9c + param_5 * 4 + 0x12e20);
    bVar1 = (byte)(uVar12 >> 0x10);
    bVar2 = (byte)(uVar12 >> 8);
    uVar10 = local_38;
    do {
      FUN_00011e3c(uVar10,param_4,local_2c);
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
             *(byte *)((int)local_2c[0] + 2) | (byte)*(undefined4 *)(iVar3 + 0x12e28);
      }
      else if (iVar13 == 4) {
        uVar7 = uVar12;
        if ((int)param_5 < 0) {
          uVar7 = uVar12 ^ *local_2c[0];
        }
        *local_2c[0] = *(uint *)(iVar4 + 0x12e30) | uVar7;
      }
      else if (iVar13 == 2) {
        uVar9 = (ushort)uVar12;
        if ((int)param_5 < 0) {
          uVar9 = uVar9 ^ (ushort)*local_2c[0];
        }
        *(ushort *)local_2c[0] = uVar9 | (ushort)*(undefined4 *)(iVar5 + 0x12e40);
      }
      else {
        if ((int)param_5 < 0) {
          bVar8 = bVar8 ^ (byte)*local_2c[0];
        }
        *(byte *)local_2c[0] = bVar8 | (byte)*(undefined4 *)(iVar6 + 0x12e5c);
      }
      uVar10 = uVar10 + 1;
      local_2c[0] = (uint *)((int)local_2c[0] + iVar13);
    } while (((int)uVar10 <= (int)uVar11) ||
            (param_4 = param_4 + 1, uVar10 = local_38, (int)param_4 <= (int)local_34));
  }
  return;
}



/* ===== FUN_00012eb0 @ 00012eb0 size=236 ===== */

ulonglong FUN_00012eb0(uint param_1,uint param_2)

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



/* ===== _fini @ 00012fbc size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002e008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002e018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002e01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002e020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 0002e024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_print_ascii_logo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002e028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002e02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_mt @ 0002e030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_mt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002e034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002e038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 0002e03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002e040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_version @ 0002e044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002e048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002e04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002e050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_fd @ 0002e054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_close @ 0002e058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_raw @ 0002e05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_raw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002e060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002e064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002e068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0002e06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_setup @ 0002e070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read @ 0002e074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002e078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002e07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002e080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0002e084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002e088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0002e08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0002e090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap @ 0002e094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0002e098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002e09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002e0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002e0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002e0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002e0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::calloc @ 0002e0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002e0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


