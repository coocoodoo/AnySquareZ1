// ts_calibrate — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00010b70 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::putchar @ 00010b94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0002500c)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00010ba0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00025010)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 00010bac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00025014)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00010bb8 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00025018)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 00010bc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002501c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::munmap @ 00010bd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00025020)(__addr);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 00010bdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00025024)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::usleep @ 00010be8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00025028)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::qsort @ 00010bf4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_0002502c)(__base);
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00010c00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00025030)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::ts_close @ 00010c0c size=12 ===== */

void ts_close(void)

{
  (*(code *)PTR_ts_close_00025034)();
  return;
}



/* ===== <EXTERNAL>::perror @ 00010c18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00025038)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00010c24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002503c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010c30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00025040)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::sleep @ 00010c3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00025044)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::select @ 00010c48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00025048)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010c54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0002504c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::mmap @ 00010c60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap_00025050)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::abort @ 00010c6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00025054)();
  return;
}



/* ===== <EXTERNAL>::write @ 00010c78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00025058)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00010c84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002505c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_read @ 00010c90 size=12 ===== */

void ts_read(void)

{
  (*(code *)PTR_ts_read_00025060)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010c9c size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00025064)();
  return;
}



/* ===== <EXTERNAL>::ts_read_raw @ 00010ca8 size=12 ===== */

void ts_read_raw(void)

{
  (*(code *)PTR_ts_read_raw_00025068)();
  return;
}



/* ===== <EXTERNAL>::rand @ 00010cb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0002506c)();
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00010cc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00025070)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::read @ 00010ccc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00025074)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00010ce4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_0002507c)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010cf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00025080)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::srand @ 00010cfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_00025084)(__seed);
  return;
}



/* ===== <EXTERNAL>::time @ 00010d08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00025088)(__timer);
  return tVar1;
}



/* ===== <EXTERNAL>::ts_fd @ 00010d14 size=12 ===== */

void ts_fd(void)

{
  (*(code *)PTR_ts_fd_0002508c)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010d20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00025090)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010d2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00025094)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_setup @ 00010d38 size=12 ===== */

void ts_setup(void)

{
  (*(code *)PTR_ts_setup_00025098)();
  return;
}



/* ===== <EXTERNAL>::fwrite @ 00010d44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002509c)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::tslib_version @ 00010d50 size=12 ===== */

void tslib_version(void)

{
  (*(code *)PTR_tslib_version_000250a0)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00010d5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_000250a4)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00010d68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_000250a8)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00010d74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000250ac)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 00010d80 size=12 ===== */

void ts_print_ascii_logo(void)

{
  (*(code *)PTR_ts_print_ascii_logo_000250b0)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010d8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_000250b4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::open @ 00010d98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_000250b8)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010da4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_000250bc)();
  return;
}



/* ===== <EXTERNAL>::close @ 00010db0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_000250c0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00010dbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_000250c4)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010dc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_000250c8)(__ptr);
  return;
}



/* ===== FUN_00010dd8 @ 00010dd8 size=3448 ===== */

undefined4 FUN_00010dd8(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *__file;
  size_t __n;
  ssize_t sVar7;
  int iVar8;
  int iVar9;
  int extraout_r1;
  int extraout_r1_00;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  __sighandler_t __handler;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  void *__src;
  int iVar18;
  uint *puVar19;
  int iVar20;
  timeval *__tv;
  undefined4 uVar21;
  uint uVar22;
  uint local_1d8;
  int local_1c8;
  uint *local_1c4;
  uint *local_1bc;
  int local_1b8;
  int local_1b4;
  uint local_1b0;
  int local_19c;
  int local_198;
  undefined1 auStack_194 [80];
  undefined4 local_144 [4];
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  char acStack_128 [260];
  
  __handler = (__sighandler_t)(DAT_00011b50 + 0x10df8);
  memset(auStack_194,0,0x6c);
  local_1c8 = 0;
  signal(0xb,__handler);
  signal(2,__handler);
  signal(0xf,__handler);
  local_1b8 = 0;
  piVar3 = __errno_location();
  iVar20 = DAT_00011b58 + 0x10e6c;
  __src = (void *)(DAT_00011b54 + 0x10e64);
  local_1d8 = 0;
  iVar18 = DAT_00011b5c + 0x10e78;
  local_1b4 = 10;
  local_1b0 = 5;
LAB_00010e80:
  memcpy(acStack_128,__src,0x80);
  local_198 = 0;
  iVar4 = getopt_long(param_1,param_2,iVar20,acStack_128,&local_198);
  *piVar3 = 0;
  if (iVar4 != -1) {
    switch(iVar4) {
    case 0x62:
      if (local_1c8 == 0) {
        fwrite((void *)(DAT_00011c14 + 0x11a9c),1,0x2d,
               (FILE *)**(undefined4 **)(iVar18 + DAT_00011b60));
        FUN_00011da0();
        return 0;
      }
      local_1b4 = atoi((char *)**(undefined4 **)(iVar18 + DAT_00011b68));
      goto LAB_00010e80;
    case 99:
      local_1c8 = 1;
      goto LAB_00010e80;
    case 100:
      break;
    case 0x65:
      break;
    case 0x66:
      break;
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
      if (local_1c8 != 0) {
        local_1b8 = atoi((char *)**(undefined4 **)(iVar18 + DAT_00011b68));
        goto LAB_00010e80;
      }
      fwrite((void *)(DAT_00011b64 + 0x10f40),1,0x29,
             (FILE *)**(undefined4 **)(iVar18 + DAT_00011b60));
      break;
    case 0x6d:
      break;
    case 0x6e:
      break;
    case 0x6f:
      break;
    case 0x70:
      break;
    case 0x71:
      break;
    case 0x72:
      uVar6 = atoi((char *)**(undefined4 **)(iVar18 + DAT_00011b68));
      **(undefined1 **)(iVar18 + DAT_00011b70) = (char)uVar6;
      if ((uVar6 & 0xff) < 4) goto LAB_00010e80;
      break;
    case 0x73:
      if (local_1c8 == 0) {
        fwrite((void *)(DAT_00011c18 + 0x11ae0),1,0x2c,
               (FILE *)**(undefined4 **)(iVar18 + DAT_00011b60));
        FUN_00011da0();
        return 0;
      }
      local_1b0 = atoi((char *)**(undefined4 **)(iVar18 + DAT_00011b68));
      goto LAB_00010e80;
    case 0x74:
      goto LAB_00010f90;
    case 0x75:
      break;
    case 0x76:
      FUN_00012964();
      return 0;
    }
    FUN_00011da0();
    return 0;
  }
  iVar20 = ts_setup(0,0);
  if (iVar20 == 0) {
    perror((char *)(DAT_00011c28 + 0x11b48));
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar4 = FUN_00012a64();
  if (iVar4 != 0) goto LAB_00011b1c;
  iVar4 = 0;
  puVar14 = (undefined4 *)(DAT_00011b74 + 0x11080);
  do {
    iVar16 = iVar4 + 1;
    FUN_0001302c(iVar4,*puVar14);
    iVar8 = DAT_00011b84;
    iVar4 = iVar16;
    puVar14 = puVar14 + 1;
  } while (iVar16 != 6);
  if (local_1c8 == 0) {
    puVar17 = *(uint **)(iVar18 + DAT_00011b78);
    puVar19 = *(uint **)(iVar18 + DAT_00011b7c);
    __tv = (timeval *)(DAT_00011b84 + 0x110d8);
    FUN_000133a0(*puVar19 >> 1,*puVar17 >> 2,DAT_00011b80 + 0x110c4);
    FUN_000133a0(*puVar19 >> 1,(*puVar17 >> 2) + 0x14,DAT_00011b88 + 0x11108);
    printf((char *)(DAT_00011b8c + 0x11124),*puVar19,*puVar17);
    FUN_000120f4(iVar20);
    iVar16 = DAT_00011b94;
    iVar4 = DAT_00011b90;
    uVar22 = *puVar19;
    pcVar5 = *(char **)(iVar18 + DAT_00011b70);
    cVar1 = *pcVar5;
    *pcVar5 = '\0';
    puVar12 = *(uint **)(iVar18 + iVar4);
    uVar6 = *puVar17;
    *puVar19 = *puVar12;
    puVar13 = *(uint **)(iVar18 + iVar16);
    *puVar17 = *puVar13;
    do {
      do {
        do {
          iVar18 = DAT_00011b98 + 0x1118c;
          do {
            do {
              gettimeofday(__tv,(__timezone_ptr_t)0x0);
              iVar4 = *(int *)(iVar8 + 0x110dc);
              iVar16 = *(int *)(iVar8 + 0x110d8);
              FUN_00011f54(iVar20,auStack_194,0,0x32,0x32,iVar18,local_1c8);
              gettimeofday(__tv,(__timezone_ptr_t)0x0);
              local_1c8 = 1;
            } while ((uint)((*(int *)(iVar8 + 0x110d8) * 1000 + *(int *)(iVar8 + 0x110dc) / 1000 +
                            iVar16 * -1000) - iVar4 / 1000) < local_1d8);
            FUN_000120f4(iVar20);
            gettimeofday(__tv,(__timezone_ptr_t)0x0);
            iVar4 = *(int *)(iVar8 + 0x110dc);
            iVar16 = *(int *)(iVar8 + 0x110d8);
            FUN_00011f54(iVar20,auStack_194,1,*puVar19 - 0x32,0x32,DAT_00011b9c + 0x11254,0);
            gettimeofday(__tv,(__timezone_ptr_t)0x0);
          } while ((uint)((*(int *)(iVar8 + 0x110d8) * 1000 + *(int *)(iVar8 + 0x110dc) / 1000 +
                          iVar16 * -1000) - iVar4 / 1000) < local_1d8);
          local_1c8 = 1;
          FUN_000120f4(iVar20);
          gettimeofday(__tv,(__timezone_ptr_t)0x0);
          iVar18 = *(int *)(iVar8 + 0x110dc);
          iVar4 = *(int *)(iVar8 + 0x110d8);
          FUN_00011f54(iVar20,auStack_194,2,*puVar19 - 0x32,*puVar17 - 0x32,DAT_00011ba0 + 0x112f4,0
                      );
          gettimeofday(__tv,(__timezone_ptr_t)0x0);
        } while ((uint)((*(int *)(iVar8 + 0x110d8) * 1000 + *(int *)(iVar8 + 0x110dc) / 1000 +
                        iVar4 * -1000) - iVar18 / 1000) < local_1d8);
        FUN_000120f4(iVar20);
        gettimeofday(__tv,(__timezone_ptr_t)0x0);
        iVar18 = *(int *)(iVar8 + 0x110dc);
        iVar4 = *(int *)(iVar8 + 0x110d8);
        FUN_00011f54(iVar20,auStack_194,3,0x32,*puVar17 - 0x32,DAT_00011ba4 + 0x11394,0);
        gettimeofday(__tv,(__timezone_ptr_t)0x0);
      } while ((uint)((*(int *)(iVar8 + 0x110d8) * 1000 + *(int *)(iVar8 + 0x110dc) / 1000 +
                      iVar4 * -1000) - iVar18 / 1000) < local_1d8);
      FUN_000120f4(iVar20);
      gettimeofday(__tv,(__timezone_ptr_t)0x0);
      iVar18 = *(int *)(iVar8 + 0x110dc);
      iVar4 = *(int *)(iVar8 + 0x110d8);
      FUN_00011f54(iVar20,auStack_194,4,*puVar12 >> 1,*puVar13 >> 1,DAT_00011ba8 + 0x11454,0);
      gettimeofday(__tv,(__timezone_ptr_t)0x0);
    } while ((uint)((*(int *)(iVar8 + 0x110d8) * 1000 + *(int *)(iVar8 + 0x110dc) / 1000 +
                    iVar4 * -1000) - iVar18 / 1000) < local_1d8);
    *pcVar5 = cVar1;
    *puVar19 = uVar22;
    *puVar17 = uVar6;
    iVar4 = FUN_000121b8(auStack_194);
    iVar18 = DAT_00011bb0;
    if (iVar4 == 0) {
      uVar21 = 0xffffffff;
      puts((char *)(DAT_00011bf4 + 0x1198c));
LAB_000115c4:
      FUN_000137a0(0,0,*puVar19 - 1,*puVar17 - 1,0);
      FUN_00012efc();
      ts_close(iVar20);
      return uVar21;
    }
    iVar4 = 0;
    printf((char *)(DAT_00011bac + 0x114ec));
    puVar14 = local_144;
    do {
      iVar4 = iVar4 + 1;
      printf((char *)(iVar18 + 0x114f4),*puVar14);
      puVar14 = puVar14 + 1;
    } while (iVar4 != 7);
    putchar(10);
    __file = getenv((char *)(DAT_00011bb4 + 0x1151c));
    if (__file == (char *)0x0) {
      __file = (char *)(DAT_00011c1c + 0x11af8);
    }
    iVar18 = open(__file,0x242,0x1a4);
    if (iVar18 < 0) {
      pcVar5 = (char *)(DAT_00011c24 + 0x11b3c);
    }
    else {
      __n = sprintf(acStack_128,(char *)(DAT_00011bb8 + 0x11594),local_144[1],local_144[2],
                    local_144[0],local_134,local_130,local_144[3],local_12c,*puVar12,*puVar13,
                    (int)*pcVar5);
      sVar7 = write(iVar18,acStack_128,__n);
      if (sVar7 != -1) {
        uVar21 = 0;
        close(iVar18);
        goto LAB_000115c4;
      }
      pcVar5 = (char *)(DAT_00011c20 + 0x11b1c);
    }
    perror(pcVar5);
LAB_00011b1c:
    FUN_00012efc();
    ts_close(iVar20);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (local_1b4 < 10) {
    local_1c4 = *(uint **)(iVar18 + DAT_00011b7c);
    local_1bc = *(uint **)(iVar18 + DAT_00011b78);
LAB_00011640:
    local_1b4 = 10;
    fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_00011b60),(char *)(DAT_00011bbc + 0x1165c));
  }
  else {
    local_1c4 = *(uint **)(iVar18 + DAT_00011b7c);
    local_1bc = *(uint **)(iVar18 + DAT_00011b78);
    if (((int)*local_1c4 < local_1b4) || ((int)*local_1bc < local_1b4)) goto LAB_00011640;
  }
  if (local_1b8 == 0) {
    local_1b8 = 3;
  }
  snprintf(acStack_128,0x40,(char *)(DAT_00011bc0 + 0x11688),local_1b4);
  iVar4 = DAT_00011bc8;
  iVar18 = DAT_00011bc4;
  FUN_000133a0(*local_1c4 >> 1,*local_1bc >> 2,acStack_128);
  FUN_000133a0(*local_1c4 >> 1,(*local_1bc >> 2) + 0x14,DAT_00011bcc + 0x116e8);
  local_1d8 = 0;
  while( true ) {
    uVar6 = time((time_t *)0x0);
    srand(uVar6);
    iVar8 = rand();
    FUN_00013aa0(iVar8,*local_1c4);
    iVar8 = rand();
    FUN_00013aa0(iVar8,*local_1bc);
    iVar8 = DAT_00011bd0;
    iVar16 = *(int *)(iVar18 + 0x11738);
    if (iVar16 != -1) {
      iVar9 = iVar16 << 0x10;
      iVar10 = *(int *)(iVar4 + 0x116cc);
      *(int *)(iVar18 + 0x11738) = iVar9;
      iVar11 = iVar10 << 0x10;
      *(int *)(iVar4 + 0x116cc) = iVar11;
      iVar2 = DAT_00011bd4;
      iVar15 = 10;
      do {
        FUN_000134fc(iVar9 >> 0x10,iVar11 >> 0x10,0x80000002);
        usleep(1000);
        FUN_000134fc((int)*(short *)(iVar2 + 0x1183e),(int)*(short *)(iVar8 + 0x11786),0x80000002);
        iVar11 = *(int *)(iVar8 + 0x11784);
        iVar15 = iVar15 + -1;
        iVar9 = ((extraout_r1 - iVar16) * 0x10000) / 10 + *(int *)(iVar2 + 0x1183c);
        *(int *)(iVar2 + 0x1183c) = iVar9;
        iVar11 = ((extraout_r1_00 - iVar10) * 0x10000) / 10 + iVar11;
        *(int *)(iVar8 + 0x11784) = iVar11;
      } while (iVar15 != 0);
    }
    FUN_000134fc(extraout_r1,extraout_r1_00,0x80000002);
    FUN_0001281c(iVar20,&local_19c,&local_198);
    if ((((local_19c <= extraout_r1 - local_1b4) || (local_1b4 + extraout_r1 <= local_19c)) ||
        (local_198 <= extraout_r1_00 - local_1b4)) || (local_1b4 + extraout_r1_00 <= local_198))
    break;
    local_1d8 = local_1d8 + 1;
    FUN_000134fc(extraout_r1,extraout_r1_00,0x80000002);
    iVar16 = DAT_00011be4;
    iVar8 = DAT_00011be0;
    iVar11 = DAT_00011bdc + 0x11898;
    *(int *)(DAT_00011bd8 + 0x1190c) = extraout_r1;
    iVar9 = DAT_00011be8 + 0x118bc;
    *(int *)(iVar8 + 0x118a4) = extraout_r1_00;
    printf((char *)(iVar16 + 0x118b4),iVar9,local_19c,extraout_r1,local_198,extraout_r1_00,iVar11);
    if (local_1d8 == local_1b8) {
      FUN_000137a0(0,0,*local_1c4 - 1,*local_1bc - 1,0);
      FUN_000133a0(*local_1c4 >> 1,*local_1bc >> 2,acStack_128);
      if (local_1b0 == 0) {
        uVar21 = 0;
LAB_00011afc:
        FUN_00012efc();
        ts_close(iVar20);
        return uVar21;
      }
      puts((char *)(DAT_00011bec + 0x1192c));
      FUN_000133a0(*local_1c4 >> 1,(*local_1bc >> 2) + 0x14,DAT_00011bf0 + 72000,5);
      uVar21 = 0;
LAB_00011958:
      if (0 < (int)local_1b0) {
        sleep(local_1b0);
        FUN_00012efc();
        ts_close(iVar20);
        return uVar21;
      }
      return uVar21;
    }
  }
  FUN_000134fc(extraout_r1,extraout_r1_00,0x80000002);
  iVar4 = DAT_00011c04;
  iVar18 = DAT_00011c00;
  iVar16 = DAT_00011bfc + 0x119c8;
  *(int *)(DAT_00011bf8 + 0x11a3c) = extraout_r1;
  iVar8 = DAT_00011c08;
  *(int *)(iVar18 + 0x119d0) = extraout_r1_00;
  printf((char *)(iVar4 + 0x119e4),iVar8 + 0x119f0,local_19c,extraout_r1,local_198,extraout_r1_00,
         iVar16);
  FUN_000137a0(0,0,*local_1c4 - 1,*local_1bc - 1,0);
  FUN_000133a0(*local_1c4 >> 1,*local_1bc >> 2,acStack_128);
  uVar21 = 0xffffffff;
  if (local_1b0 == 0) goto LAB_00011afc;
  uVar21 = 0xffffffff;
  puts((char *)(DAT_00011c0c + 0x11a50));
  FUN_000133a0(*local_1c4 >> 1,(*local_1bc >> 2) + 0x14,DAT_00011c10 + 0x11a64,4);
  goto LAB_00011958;
LAB_00010f90:
  local_1d8 = atoi((char *)**(undefined4 **)(iVar18 + DAT_00011b68));
  if (10000 < local_1d8) {
    fwrite((void *)(DAT_00011b6c + 0x10fcc),1,0x1a,(FILE *)**(undefined4 **)(iVar18 + DAT_00011b60))
    ;
    return 0;
  }
  goto LAB_00010e80;
}



/* ===== entry @ 00011c2c size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00025078)
            (DAT_00011c60,param_2,&stack0x00000004,DAT_00011c64,DAT_00011c5c,param_1);
  return;
}



/* ===== FUN_00011c68 @ 00011c68 size=32 ===== */

void FUN_00011c68(void)

{
  if (DAT_00011c8c == DAT_00011c88) {
    return;
  }
  if (DAT_00011c90 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011c90)();
  return;
}



/* ===== _FINI_0 @ 00011ccc size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00011d08;
  if (*DAT_00011d08 != '\0') {
    return;
  }
  FUN_00011c68();
  if (DAT_00011d0c != 0) {
    __deregister_frame_info(DAT_00011d10);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00011d14 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00011d38 != 0) {
    __register_frame_info(DAT_00011d40,DAT_00011d3c);
  }
  if ((DAT_00011cc4 - DAT_00011cc0 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00011cc8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00011cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00011cc8)();
  return;
}



/* ===== FUN_00011d44 @ 00011d44 size=76 ===== */

void FUN_00011d44(undefined4 param_1)

{
  int iVar1;
  
  FUN_00012efc();
  iVar1 = DAT_00011d90 + 0x11d60;
  fflush((FILE *)**(undefined4 **)(iVar1 + DAT_00011d94));
  printf((char *)(DAT_00011d98 + 0x11d78),param_1);
  fflush((FILE *)**(undefined4 **)(iVar1 + DAT_00011d9c));
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00011da0 @ 00011da0 size=340 ===== */

void FUN_00011da0(void)

{
  ts_print_ascii_logo(0x10);
  FUN_00012964();
  putchar(10);
  puts((char *)(DAT_00011ef4 + 0x11dc4));
  putchar(10);
  puts((char *)(DAT_00011ef8 + 0x11dd8));
  puts((char *)(DAT_00011efc + 0x11de4));
  puts((char *)(DAT_00011f00 + 0x11df0));
  puts((char *)(DAT_00011f04 + 0x11dfc));
  puts((char *)(DAT_00011f08 + 0x11e08));
  puts((char *)(DAT_00011f0c + 0x11e14));
  puts((char *)(DAT_00011f10 + 0x11e20));
  puts((char *)(DAT_00011f14 + 0x11e2c));
  puts((char *)(DAT_00011f18 + 0x11e38));
  puts((char *)(DAT_00011f1c + 0x11e44));
  puts((char *)(DAT_00011f20 + 0x11e50));
  puts((char *)(DAT_00011f24 + 0x11e5c));
  puts((char *)(DAT_00011f28 + 0x11e68));
  puts((char *)(DAT_00011f2c + 0x11e74));
  puts((char *)(DAT_00011f30 + 0x11e80));
  puts((char *)(DAT_00011f34 + 0x11e8c));
  puts((char *)(DAT_00011f38 + 0x11e98));
  puts((char *)(DAT_00011f3c + 0x11ea4));
  puts((char *)(DAT_00011f40 + 0x11eb0));
  puts((char *)(DAT_00011f44 + 0x11ebc));
  puts((char *)(DAT_00011f48 + 0x11ec8));
  puts((char *)(DAT_00011f4c + 0x11ed4));
  putchar(10);
  puts((char *)(DAT_00011f50 + 0x11ee8));
  putchar(10);
  return;
}



/* ===== FUN_00011f54 @ 00011f54 size=388 ===== */

void FUN_00011f54(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,short param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  
  iVar9 = DAT_000120f0;
  iVar1 = DAT_000120ec;
  if (param_7 == 0) {
    piVar11 = (int *)(DAT_000120ec + 0x12030);
    iVar2 = *piVar11;
    if (iVar2 != -1) {
      piVar12 = (int *)(DAT_000120f0 + 0x12050);
      iVar10 = 10;
      iVar3 = iVar2 << 0x10;
      iVar4 = *piVar12;
      iVar5 = iVar4 << 0x10;
      *piVar12 = iVar5;
      *piVar11 = iVar3;
      do {
        FUN_000134fc(iVar3 >> 0x10,iVar5 >> 0x10,0x80000002);
        usleep(1000);
        FUN_000134fc((int)*(short *)(iVar1 + 0x12032),(int)*(short *)(iVar9 + 0x12052),0x80000002);
        iVar5 = *piVar12;
        iVar10 = iVar10 + -1;
        iVar3 = ((param_4 - iVar2) * 0x10000) / 10 + *piVar11;
        *piVar11 = iVar3;
        iVar5 = ((param_5 - iVar4) * 0x10000) / 10 + iVar5;
        *piVar12 = iVar5;
      } while (iVar10 != 0);
    }
  }
  else {
    puVar7 = (undefined4 *)(DAT_000120dc + 0x11fa0);
    *(undefined4 *)(DAT_000120d8 + 0x11f9c) = 0xffffffff;
    *puVar7 = 0;
  }
  FUN_000134fc(param_4,param_5,0x80000002);
  iVar9 = param_2 + param_3 * 4;
  FUN_0001263c(param_1,iVar9,param_2 + param_3 * 4 + 0x28);
  FUN_000134fc(param_4,param_5,0x80000002);
  iVar1 = DAT_000120e8;
  piVar12 = (int *)(DAT_000120e0 + 0x11ff4);
  piVar11 = (int *)(DAT_000120e4 + 0x11ffc);
  *(int *)(iVar9 + 0x14) = param_4;
  *(int *)(iVar9 + 0x3c) = param_5;
  uVar8 = *(undefined4 *)(iVar9 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + param_3 * 4);
  *piVar12 = param_4;
  *piVar11 = param_5;
  printf((char *)(iVar1 + 0x12008),param_6,uVar6,uVar8);
  return;
}



/* ===== FUN_000120f4 @ 000120f4 size=188 ===== */

void FUN_000120f4(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  timeval local_c4;
  undefined1 auStack_bc [16];
  undefined4 uStack_ac;
  fd_set local_a8;
  
  uVar1 = ts_fd();
  puVar3 = &uStack_ac;
  while( true ) {
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
    } while (puVar3 != local_a8.fds_bits + 0x1f);
    local_a8.fds_bits[uVar1 >> 5] = local_a8.fds_bits[uVar1 >> 5] | 1 << (uVar1 & 0x1f);
    local_c4.tv_sec = 0;
    local_c4.tv_usec = 0;
    iVar2 = select(uVar1 + 1,&local_a8,(fd_set *)0x0,(fd_set *)0x0,&local_c4);
    if (iVar2 == 0) break;
    iVar2 = ts_read_raw(param_1,auStack_bc,1);
    puVar3 = &uStack_ac;
    if (iVar2 < 0) {
      perror((char *)(DAT_000121b0 + 0x121a0));
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  return;
}



/* ===== FUN_000121b8 @ 000121b8 size=724 ===== */

undefined4 FUN_000121b8(int param_1)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  
  piVar8 = (int *)(param_1 + -4);
  piVar9 = (int *)(param_1 + 0x10);
  piVar3 = piVar8;
  fVar11 = DAT_000124a0;
  fVar12 = DAT_000124a0;
  fVar13 = DAT_000124a0;
  fVar14 = DAT_000124a0;
  fVar15 = DAT_000124a0;
  fVar19 = DAT_000124a0;
  do {
    piVar5 = piVar3 + 1;
    iVar7 = *piVar5;
    iVar6 = piVar3[0xb];
    fVar13 = fVar13 + 1.0;
    fVar23 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
    fVar16 = (float)VectorSignedToFloat(iVar6 * iVar6,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(iVar7 * iVar7,(byte)(in_fpscr >> 0x16) & 3);
    fVar17 = (float)VectorSignedToFloat(iVar6 * iVar7,(byte)(in_fpscr >> 0x16) & 3);
    fVar24 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = fVar11 + fVar16;
    fVar19 = fVar19 + fVar17;
    fVar15 = fVar15 + fVar23;
    fVar12 = fVar12 + fVar18;
    fVar14 = fVar14 + fVar24;
    piVar3 = piVar5;
  } while (piVar9 != piVar5);
  fVar17 = -(fVar11 * fVar14) + fVar15 * fVar19;
  fVar16 = -(fVar19 * fVar19) + fVar12 * fVar11;
  fVar18 = -(fVar12 * fVar15) + fVar14 * fVar19;
  fVar23 = fVar17 * fVar14 + fVar16 * fVar13 + fVar18 * fVar15;
  dVar26 = (double)fVar23;
  uVar10 = in_fpscr & 0xfffffff | (uint)(dVar26 < DAT_00012490) << 0x1f;
  if (SUB41(uVar10 >> 0x1f,0)) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(dVar26 < DAT_00012498) << 0x1f |
            (uint)(dVar26 == DAT_00012498) << 0x1e;
    uVar10 = uVar1 | (uint)(NAN(dVar26) || NAN(DAT_00012498)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar10 >> 0x1c) & 1)) {
      printf((char *)(DAT_000124ac + 0x1247c),piVar5,SUB84(dVar26,0),
             (int)((ulonglong)dVar26 >> 0x20));
      return 0;
    }
  }
  fVar19 = (-(fVar19 * fVar13) + fVar14 * fVar15) / fVar23;
  fVar15 = (-(fVar15 * fVar15) + fVar13 * fVar11) / fVar23;
  fVar14 = (-(fVar14 * fVar14) + fVar13 * fVar12) / fVar23;
  fVar16 = fVar16 / fVar23;
  fVar17 = fVar17 / fVar23;
  fVar18 = fVar18 / fVar23;
  piVar3 = piVar8;
  fVar11 = DAT_000124a0;
  fVar12 = DAT_000124a0;
  fVar13 = DAT_000124a0;
  do {
    iVar7 = piVar3[6];
    piVar5 = piVar3 + 1;
    iVar6 = piVar3[0xb];
    fVar24 = (float)VectorSignedToFloat(*piVar5 * iVar7,(byte)(uVar10 >> 0x16) & 3);
    fVar23 = (float)VectorSignedToFloat(iVar6 * iVar7,(byte)(uVar10 >> 0x16) & 3);
    fVar25 = (float)VectorSignedToFloat(iVar7,(byte)(uVar10 >> 0x16) & 3);
    fVar12 = fVar12 + fVar23;
    fVar13 = fVar13 + fVar24;
    fVar11 = fVar11 + fVar25;
    piVar3 = piVar5;
  } while (piVar9 != piVar5);
  pcVar4 = (char *)(DAT_000124a4 + 0x12318);
  fVar23 = fVar17 * fVar13 + fVar16 * fVar11 + fVar18 * fVar12;
  fVar24 = fVar15 * fVar13 + fVar17 * fVar11 + fVar19 * fVar12;
  fVar11 = fVar19 * fVar13 + fVar18 * fVar11 + fVar14 * fVar12;
  uVar20 = VectorFloatToSignedFixed(fVar23,0x20,0x10);
  uVar21 = VectorFloatToSignedFixed(fVar24,0x20,0x10);
  uVar22 = VectorFloatToSignedFixed(fVar11,0x20,0x10);
  *(undefined4 *)(param_1 + 0x50) = uVar20;
  *(undefined4 *)(param_1 + 0x54) = uVar21;
  dVar26 = (double)fVar23;
  *(undefined4 *)(param_1 + 0x58) = uVar22;
  printf(pcVar4,iVar6 * iVar7,SUB84(dVar26,0),(int)((ulonglong)dVar26 >> 0x20),(double)fVar24,
         (double)fVar11);
  fVar11 = DAT_000124a0;
  fVar12 = DAT_000124a0;
  fVar13 = DAT_000124a0;
  do {
    iVar6 = piVar8[0x10];
    piVar3 = piVar8 + 1;
    fVar23 = (float)VectorSignedToFloat(iVar6,(byte)(uVar10 >> 0x16) & 3);
    fVar11 = fVar11 + fVar23;
    fVar23 = (float)VectorSignedToFloat(piVar8[0xb] * iVar6,(byte)(uVar10 >> 0x16) & 3);
    fVar24 = (float)VectorSignedToFloat(*piVar3 * iVar6,(byte)(uVar10 >> 0x16) & 3);
    fVar12 = fVar12 + fVar23;
    fVar13 = fVar13 + fVar24;
    piVar8 = piVar3;
  } while (piVar9 != piVar3);
  pcVar4 = (char *)(DAT_000124a8 + 0x123dc);
  fVar16 = fVar17 * fVar13 + fVar16 * fVar11 + fVar18 * fVar12;
  fVar15 = fVar15 * fVar13 + fVar17 * fVar11 + fVar19 * fVar12;
  fVar11 = fVar19 * fVar13 + fVar18 * fVar11 + fVar14 * fVar12;
  uVar20 = VectorFloatToSignedFixed(fVar16,0x20,0x10);
  uVar21 = VectorFloatToSignedFixed(fVar15,0x20,0x10);
  *(undefined4 *)(param_1 + 0x5c) = uVar20;
  uVar20 = VectorFloatToSignedFixed(fVar11,0x20,0x10);
  *(undefined4 *)(param_1 + 0x60) = uVar21;
  *(undefined4 *)(param_1 + 100) = uVar20;
  dVar26 = (double)fVar16;
  printf(pcVar4,iVar6,SUB84(dVar26,0),(int)((ulonglong)dVar26 >> 0x20),(double)fVar15,(double)fVar11
        );
  *(undefined4 *)(param_1 + 0x68) = 0x10000;
  return 1;
}



/* ===== FUN_000124d0 @ 000124d0 size=176 ===== */

void FUN_000124d0(int *param_1)

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
  FUN_00013724(*param_1,param_1[1],*param_1 + param_1[2],param_1[1] + param_1[3],1);
  FUN_000137a0(*param_1 + 1,param_1[1] + 1,*param_1 + param_1[2] + -2,param_1[1] + param_1[3] + -2,
               uVar2);
  FUN_000133a0(*param_1 + param_1[2] / 2,param_1[1] + param_1[3] / 2,param_1[4],uVar1);
  return;
}



/* ===== FUN_00012580 @ 00012580 size=188 ===== */

uint FUN_00012580(int *param_1,int param_2,int param_3,int param_4)

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
      FUN_000124d0(param_1);
      return 0;
    }
  }
  else if (param_4 != 0) {
    if (uVar1 == 0) {
      param_1[5] = uVar2 | 1;
      FUN_000124d0();
      return 0;
    }
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  param_1[5] = uVar2 & 0xfffffffe;
  FUN_000124d0(param_1);
  return uVar1;
}



/* ===== FUN_0001263c @ 0001263c size=456 ===== */

void FUN_0001263c(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint __nmemb;
  int local_a34 [645];
  
  do {
    iVar1 = ts_read_raw(param_1,local_a34 + 5,1);
    if (iVar1 < 0) goto LAB_000127ec;
  } while (local_a34[7] == 0);
  __nmemb = 0;
  do {
    if ((int)__nmemb < 0x7f) {
      __nmemb = __nmemb + 1;
    }
    iVar1 = ts_read_raw(param_1,local_a34 + __nmemb * 5 + 5,1);
    if (iVar1 < 0) {
LAB_000127ec:
      perror((char *)(DAT_00012818 + 0x127f8));
      FUN_00012efc();
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  } while (local_a34[__nmemb * 5 + 7] != 0);
  iVar1 = (int)__nmemb >> 1;
  printf((char *)(DAT_00012804 + 0x126cc),__nmemb);
  if (param_2 == (int *)0x0) {
    if (param_3 == (int *)0x0) {
      return;
    }
    qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_00012814 + 0x127dc));
    if ((__nmemb & 1) == 0) goto LAB_0001278c;
  }
  else {
    qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_00012808 + 0x126ec));
    if ((__nmemb & 1) == 0) {
      *param_2 = (local_a34[(iVar1 + -1) * 5 + 5] + local_a34[iVar1 * 5 + 5]) / 2;
      if (param_3 == (int *)0x0) {
        return;
      }
      qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_00012810 + 0x1278c));
LAB_0001278c:
      *param_3 = (local_a34[(iVar1 + -1) * 5 + 6] + local_a34[iVar1 * 5 + 6]) / 2;
      return;
    }
    *param_2 = local_a34[iVar1 * 5 + 5];
    if (param_3 == (int *)0x0) {
      return;
    }
    qsort(local_a34 + 5,__nmemb,0x14,(__compar_fn_t)(DAT_0001280c + 0x12724));
  }
  *param_3 = local_a34[iVar1 * 5 + 6];
  return;
}



/* ===== FUN_0001281c @ 0001281c size=228 ===== */

void FUN_0001281c(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_a20 [640];
  
  do {
    iVar1 = ts_read(param_1,aiStack_a20,1);
    if (iVar1 < 0) goto LAB_000128e8;
  } while (aiStack_a20[2] == 0);
  iVar1 = 0;
  while( true ) {
    if (iVar1 < 0x7f) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = ts_read(param_1,aiStack_a20 + iVar1 * 5,1);
    if (iVar2 < 0) break;
    if (aiStack_a20[iVar1 * 5 + 2] == 0) {
      printf((char *)(DAT_00012900 + 0x128a8),iVar1);
      if (param_2 != (int *)0x0) {
        *param_2 = aiStack_a20[(iVar1 + -1) * 5];
      }
      if (param_3 != (int *)0x0) {
        *param_3 = aiStack_a20[(iVar1 + -1) * 5 + 1];
      }
      return;
    }
  }
LAB_000128e8:
  perror((char *)(DAT_00012904 + 0x128f4));
  FUN_00012efc();
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00012908 @ 00012908 size=76 ===== */

void FUN_00012908(void)

{
  int __fd;
  ssize_t sVar1;
  
  __fd = ts_fd();
  sVar1 = read(__fd,(void *)(DAT_00012954 + 0x12920),0x8000);
  if (sVar1 != -1) {
    return;
  }
  fwrite((void *)(DAT_00012960 + 0x1294c),1,0x14,
         (FILE *)**(undefined4 **)(DAT_00012958 + 0x1292c + DAT_0001295c));
  return;
}



/* ===== FUN_00012964 @ 00012964 size=28 ===== */

void FUN_00012964(void)

{
  undefined4 uVar1;
  
  uVar1 = tslib_version();
  printf((char *)((int)&DAT_00012980 + DAT_00012980),uVar1);
  return;
}



/* ===== FUN_00012984 @ 00012984 size=204 ===== */

void FUN_00012984(int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00012a50 + 0x12994;
  iVar2 = *(int *)(DAT_00012a58 + 0x129a4);
  iVar4 = *(int *)(DAT_00012a58 + 0x129a8);
  cVar1 = **(char **)(iVar3 + DAT_00012a54);
  if (cVar1 == '\x02') {
    *param_3 = iVar4 * ((**(int **)(iVar3 + DAT_00012a60) + -1) - param_1) +
               *(int *)(iVar2 + ((**(int **)(iVar3 + DAT_00012a5c) + 0x3fffffff) - param_2) * 4);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x01') {
      *param_3 = iVar4 * param_1 + *(int *)(iVar2 + param_2 * 4);
      return;
    }
    *param_3 = iVar4 * ((**(int **)(iVar3 + DAT_00012a5c) + -1) - param_2) +
               *(int *)(iVar2 + param_1 * 4);
    return;
  }
  *param_3 = iVar4 * param_2 +
             *(int *)(iVar2 + ((**(int **)(iVar3 + DAT_00012a60) + 0x3fffffff) - param_1) * 4);
  return;
}



/* ===== FUN_00012a64 @ 00012a64 size=1048 ===== */

undefined4 FUN_00012a64(void)

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
  
  iVar12 = DAT_00012e80;
  pcVar1 = getenv((char *)(DAT_00012e7c + 0x12a74));
  iVar12 = iVar12 + 0x12a84;
  if (pcVar1 == (char *)0x0) {
    *(int *)(DAT_00012ec0 + 0x12d60) = DAT_00012ec4 + 0x12d5c;
  }
  else {
    *(char **)(DAT_00012e84 + 0x12a9c) = pcVar1;
  }
  pcVar1 = getenv((char *)(DAT_00012e88 + 0x12aa0));
  iVar2 = DAT_00012e8c;
  *(char **)(DAT_00012e8c + 0x12ab8) = pcVar1;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)(DAT_00012ebc + 0x12d44);
    *(char **)(iVar2 + 0x12ab8) = pcVar1;
  }
  else {
    iVar2 = strcmp(pcVar1,(char *)(DAT_00012e90 + 0x12ac4));
    if (iVar2 == 0) goto LAB_00012bcc;
    sVar3 = strlen(pcVar1);
    if (0x7f < sVar3) {
      return 0xffffffff;
    }
  }
  __format = (char *)(DAT_00012e94 + 0x12af4);
  sprintf(acStack_98,__format,pcVar1,1);
  iVar2 = open(acStack_98,1);
  if (iVar2 < 0) {
    perror((char *)(DAT_00012ed8 + 0x12dc8));
    return 0xffffffff;
  }
  iVar4 = ioctl(iVar2,0x5600,&local_a4);
  iVar5 = DAT_00012e98;
  if (iVar4 < 0) {
    close(iVar2);
    perror((char *)(DAT_00012edc + 0x12de4));
    return 0xffffffff;
  }
  close(iVar2);
  sprintf(acStack_98,__format,*(undefined4 *)(iVar5 + 0x12b48),local_a4);
  iVar2 = open(acStack_98,0x802);
  *(int *)(iVar5 + 0x12b4c) = iVar2;
  if (iVar2 < 0) {
    perror((char *)(DAT_00012ee0 + 0x12df8));
    return 0xffffffff;
  }
  iVar5 = ioctl(iVar2,0x5603,local_a0);
  if (iVar5 == 0) {
    *(uint *)(DAT_00012e9c + 0x12b84) = (uint)local_a0[0];
  }
  iVar5 = ioctl(iVar2,0x5606,local_a4);
  if (iVar5 < 0) {
    perror((char *)(DAT_00012ee4 + 0x12e0c));
    close(*(int *)(DAT_00012ee8 + 0x12e28));
    return 0xffffffff;
  }
  iVar5 = ioctl(iVar2,0x5607,local_a4);
  if (iVar5 < 0) {
    perror((char *)(DAT_00012eec + 0x12e30));
    close(*(int *)(DAT_00012ef0 + 0x12e4c));
    return 0xffffffff;
  }
  iVar2 = ioctl(iVar2,0x4b3a,1);
  if (iVar2 < 0) {
    perror((char *)(DAT_00012ec8 + 0x12d70));
    close(*(int *)(DAT_00012ecc + 0x12d8c));
    return 0xffffffff;
  }
LAB_00012bcc:
  iVar2 = DAT_00012ea0;
  iVar5 = open(*(char **)(DAT_00012ea0 + 0x12be4),2);
  *(int *)(iVar2 + 0x12bf0) = iVar5;
  if (iVar5 == -1) {
    perror((char *)(DAT_00012ed4 + 0x12db4));
    uVar9 = 0xffffffff;
  }
  else {
    iVar4 = ioctl(iVar5,0x4602,iVar2 + 0x12bf4);
    if (iVar4 < 0) {
      uVar9 = 0xffffffff;
      perror((char *)(DAT_00012ed0 + 0x12d9c));
      close(*(int *)(iVar2 + 0x12bf0));
    }
    else {
      iVar6 = ioctl(iVar5,0x4600,iVar2 + 0x12c38);
      iVar4 = DAT_00012ea8;
      if (iVar6 < 0) {
        uVar9 = 0xffffffff;
        perror((char *)(DAT_00012ef8 + 0x12e70));
        close(*(int *)(iVar2 + 0x12bf0));
      }
      else {
        uVar9 = *(undefined4 *)(iVar2 + 0x12c38);
        uVar10 = *(undefined4 *)(iVar2 + 0x12c3c);
        **(undefined4 **)(iVar12 + DAT_00012ea4) = uVar9;
        iVar2 = DAT_00012eac;
        **(undefined4 **)(iVar12 + iVar4) = uVar10;
        iVar6 = DAT_00012eb4;
        iVar4 = DAT_00012eb0;
        if ((**(byte **)(iVar12 + iVar2) & 1) == 0) {
          **(undefined4 **)(iVar12 + DAT_00012eb0) = uVar9;
          **(undefined4 **)(iVar12 + iVar6) = uVar10;
        }
        else {
          **(undefined4 **)(iVar12 + DAT_00012eb4) = uVar9;
          **(undefined4 **)(iVar12 + iVar4) = uVar10;
        }
        iVar12 = DAT_00012eb8;
        puVar13 = (undefined4 *)(DAT_00012eb8 + 0x12c80);
        __s = mmap((void *)0x0,*(size_t *)(DAT_00012eb8 + 0x12cac),3,1,iVar5,0);
        *(void **)(iVar12 + 0x12d7c) = __s;
        if (__s == (void *)0xffffffff) {
          perror((char *)(DAT_00012ef4 + 0x12e54));
          close(*(int *)(iVar12 + 0x12c94));
          uVar9 = 0xffffffff;
        }
        else {
          memset(__s,0,*(size_t *)(iVar12 + 0x12cac));
          iVar5 = *(int *)(iVar12 + 0x12ce8);
          *(uint *)(iVar12 + 0x12c84) = *(int *)(iVar12 + 0x12cf4) + 7U >> 3;
          *(int *)(iVar12 + 0x12d80) =
               ~(-1 << (*(uint *)(iVar12 + 0x12d24) & 0xff)) << (*(uint *)(iVar12 + 0x12d20) & 0xff)
          ;
          puVar7 = malloc(iVar5 * 4);
          pvVar11 = extraout_r3;
          iVar2 = extraout_r1;
          if (iVar5 != 0) {
            iVar2 = *(int *)(iVar12 + 0x12cc4);
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



/* ===== FUN_00012efc @ 00012efc size=260 ===== */

void FUN_00012efc(void)

{
  void *__addr;
  int iVar1;
  int iVar2;
  int iVar3;
  int __fd;
  
  iVar2 = DAT_00013000;
  iVar3 = DAT_00013004 + 0x12f18;
  __addr = memset(*(void **)((int)&DAT_00013010 + DAT_00013000),0,
                  *(size_t *)(DAT_00013000 + 0x12f40));
  munmap(__addr,*(size_t *)(iVar2 + 0x12f40));
  close(*(int *)(iVar2 + 0x12f28));
  iVar1 = strcmp(*(char **)(iVar2 + 0x12f20),(char *)(DAT_00013008 + 0x12f44));
  if (iVar1 != 0) {
    __fd = *(int *)(iVar2 + 0x12f24);
    iVar1 = ioctl(__fd,0x4b3a,0);
    if (iVar1 < 0) {
      perror((char *)(DAT_00013028 + 0x12ff8));
      __fd = *(int *)(iVar2 + 0x12f24);
    }
    if ((-1 < *(int *)(DAT_0001301c + 0x12fac)) && (iVar2 = ioctl(__fd,0x5606), iVar2 != 0)) {
      perror((char *)(DAT_00013020 + 0x12fdc));
      __fd = *(int *)(DAT_00013024 + 0x12ff8);
    }
    close(__fd);
  }
  free(*(void **)(DAT_0001300c + 0x12f58));
  iVar1 = DAT_00013018;
  iVar2 = DAT_00013014;
  **(undefined4 **)(iVar3 + DAT_00013010) = 0;
  **(undefined4 **)(iVar3 + iVar2) = 0;
  **(undefined1 **)(iVar3 + iVar1) = 0;
  return;
}



/* ===== FUN_0001302c @ 0001302c size=264 ===== */

void FUN_0001302c(uint param_1,uint param_2)

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
  if (*(int *)(DAT_00013134 + 0x1304c) - 2U < 3) {
    uVar2 = ((int)((param_2 & 0xffffff) >> 8 & 0xff) >>
            (8U - *(int *)(DAT_00013134 + 0x130d4) & 0xff)) <<
            (*(uint *)(DAT_00013134 + 0x130d0) & 0xff) |
            ((int)((param_2 & 0xffffff) >> 0x10) >> (8U - *(int *)(DAT_00013134 + 0x130c8) & 0xff))
            << (*(uint *)(DAT_00013134 + 0x130c4) & 0xff) |
            ((int)(param_2 & 0xff) >> (8U - *(int *)(DAT_00013134 + 0x130e0) & 0xff)) <<
            (*(uint *)(DAT_00013134 + 0x130dc) & 0xff);
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
    iVar1 = ioctl(*(int *)(DAT_00013134 + 0x1305c),0x4605,local_28);
    uVar2 = param_1;
    if (iVar1 < 0) {
      perror((char *)(DAT_0001313c + 0x1312c));
    }
  }
  *(uint *)(DAT_00013138 + param_1 * 4 + 0x131b8) = uVar2;
  return;
}



/* ===== FUN_00013140 @ 00013140 size=364 ===== */

void FUN_00013140(uint param_1,uint param_2,uint param_3)

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
    if (((param_1 < **(uint **)(DAT_000132ac + 0x13150 + DAT_000132b0) && -1 < (int)param_2) &&
        (param_2 < **(uint **)(DAT_000132ac + 0x13150 + DAT_000132b4))) &&
       ((param_3 & 0x7fffff00) == 0)) {
      FUN_00012984(param_1,param_2,&local_c);
      iVar4 = *(int *)(DAT_000132b8 + 0x131c8);
      uVar8 = *(uint *)((int)&DAT_000132c8 + DAT_000132b8 + param_3 * 4);
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
        iVar4 = DAT_000132c0;
        if (bVar9) {
          bVar2 = bVar2 ^ bVar1;
          *(byte *)local_c = bVar2;
          bVar6 = bVar6 ^ *(byte *)((int)local_c + 2);
        }
        *(byte *)((int)local_c + 2) = bVar6;
        uVar5 = *(undefined4 *)(iVar4 + 0x13340);
        if (!bVar9) {
          *(byte *)local_c = bVar2;
        }
        *(byte *)((int)local_c + 2) = *(byte *)((int)local_c + 2) | (byte)uVar5;
      }
      else if (iVar4 == 4) {
        if ((int)param_3 < 0) {
          uVar8 = uVar8 ^ *local_c;
        }
        *local_c = *(uint *)(FUN_000133a0 + DAT_000132c8) | uVar8;
      }
      else if (iVar4 == 2) {
        uVar7 = (ushort)uVar8;
        if ((int)param_3 < 0) {
          uVar7 = uVar7 ^ (ushort)*local_c;
        }
        *(ushort *)local_c = uVar7 | (ushort)*(undefined4 *)(DAT_000132c4 + 0x1337c);
      }
      else {
        if ((int)param_3 < 0) {
          bVar6 = bVar6 ^ (byte)*local_c;
        }
        *(byte *)local_c = bVar6 | (byte)*(undefined4 *)(DAT_000132bc + 0x13300);
      }
    }
    return;
  }
  return;
}



/* ===== FUN_000133a0 @ 000133a0 size=288 ===== */

void FUN_000133a0(int param_1,int param_2,byte *param_3,undefined4 param_4)

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
  iVar9 = *(int *)(DAT_000133f4 + 0x133d0 + DAT_000133f8);
  iVar8 = *(int *)(iVar9 + 0xc);
  param_1 = param_1 - *(int *)(iVar9 + 8) * (sVar2 >> 1);
  uVar7 = (uint)*param_3;
  if (uVar7 != 0) {
    iVar5 = *(int *)(DAT_00013398 + 0x132ec + DAT_0001339c);
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
                FUN_00013140(iVar9,iVar4 + (param_2 - iVar8 / 2),param_4);
                iVar9 = *(int *)(iVar5 + 8);
                if (iVar9 <= iVar3) goto LAB_00013370;
              }
              iVar9 = *(int *)(iVar5 + 8);
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar9);
          }
LAB_00013370:
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



/* ===== FUN_000133fc @ 000133fc size=256 ===== */

void FUN_000133fc(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

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
    iVar2 = FUN_00013ac0(uVar5 << 0x10,uVar1);
    param_1 = param_1 << 0x10;
    do {
      iVar4 = iVar3 + 1;
      FUN_00013140(param_1 >> 0x10,iVar3,param_5);
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
    if (uVar5 == 0) goto LAB_000134c8;
  }
  uVar5 = FUN_00013ac0(uVar1 << 0x10,uVar5);
  param_3 = iVar3;
LAB_000134c8:
  do {
    iVar3 = param_1 + 1;
    FUN_00013140(param_1,param_4 >> 0x10,param_5);
    param_4 = param_4 + uVar5;
    param_1 = iVar3;
  } while (iVar3 <= param_3);
  return;
}



/* ===== FUN_000134fc @ 000134fc size=544 ===== */

void FUN_000134fc(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_0001371c;
  FUN_000133fc(param_1 + -10,param_2,param_1 + -2,param_2,param_3);
  FUN_000133fc(param_1 + 2,param_2,param_1 + 10,param_2,param_3);
  FUN_000133fc(param_1,param_2 + -10,param_1,param_2 + -2,param_3);
  FUN_000133fc(param_1,param_2 + 2,param_1,param_2 + 10,param_3);
  cVar1 = **(char **)(iVar2 + 0x1357c + DAT_00013720);
  if (cVar1 == '\0') {
    iVar3 = param_1 + -9;
    iVar2 = param_2 + -9;
    param_3 = param_3 + 1;
    iVar5 = param_2 + 9;
    FUN_000133fc(param_1 + -6,iVar2,iVar3,iVar2,param_3);
    FUN_000133fc(iVar3,param_2 + -8,iVar3,param_2 + -6,param_3);
    iVar4 = param_1 + 9;
    FUN_000133fc(iVar3,param_2 + 6,iVar3,iVar5,param_3);
    FUN_000133fc(param_1 + -8,iVar5,param_1 + -6,iVar5,param_3);
    FUN_000133fc(param_1 + 6,iVar5,iVar4,iVar5,param_3);
    FUN_000133fc(iVar4,param_2 + 8,iVar4,param_2 + 6,param_3);
    FUN_000133fc(iVar4,param_2 + -6,iVar4,iVar2,param_3);
    FUN_000133fc(param_1 + 8,iVar2,param_1 + 6,iVar2,param_3);
    return;
  }
  if (cVar1 != '\x01') {
    return;
  }
  param_3 = param_3 + 1;
  FUN_000133fc(param_1 + -7,param_2 + -7,param_1 + -4,param_2 + -4,param_3);
  FUN_000133fc(param_1 + -7,param_2 + 7,param_1 + -4,param_2 + 4,param_3);
  FUN_000133fc(param_1 + 4,param_2 + -4,param_1 + 7,param_2 + -7,param_3);
  FUN_000133fc(param_1 + 4,param_2 + 4,param_1 + 7,param_2 + 7,param_3);
  return;
}



/* ===== FUN_00013724 @ 00013724 size=124 ===== */

void FUN_00013724(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  FUN_000133fc();
  FUN_000133fc(param_3,param_2 + 1,param_3,param_4 + -1,param_5);
  FUN_000133fc(param_3,param_4,param_1,param_4,param_5);
  FUN_000133fc(param_1,param_4 + -1,param_1,param_2 + 1);
  return;
}



/* ===== FUN_000137a0 @ 000137a0 size=568 ===== */

void FUN_000137a0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

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
  
  iVar6 = DAT_000139f4;
  iVar5 = DAT_000139f0;
  iVar4 = DAT_000139ec;
  iVar3 = DAT_000139e8;
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
  uVar10 = **(uint **)(DAT_000139d8 + 0x137b4 + DAT_000139dc);
  local_38 = param_3 & ~((int)param_3 >> 0x1f);
  param_4 = param_4 & ~((int)param_4 >> 0x1f);
  local_34 = local_34 & ~((int)local_34 >> 0x1f);
  if (uVar10 <= local_38) {
    local_38 = uVar10 - 1;
  }
  if (uVar10 <= uVar11) {
    uVar11 = uVar10 - 1;
  }
  uVar10 = **(uint **)(DAT_000139d8 + 0x137b4 + DAT_000139e0);
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
    iVar13 = *(int *)(DAT_000139e4 + 0x13868);
    uVar12 = *(uint *)(DAT_000139e4 + param_5 * 4 + 0x13968);
    bVar1 = (byte)(uVar12 >> 0x10);
    bVar2 = (byte)(uVar12 >> 8);
    uVar10 = local_38;
    do {
      FUN_00012984(uVar10,param_4,local_2c);
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
             *(byte *)((int)local_2c[0] + 2) | (byte)*(undefined4 *)(iVar3 + 0x13970);
      }
      else if (iVar13 == 4) {
        uVar7 = uVar12;
        if ((int)param_5 < 0) {
          uVar7 = uVar12 ^ *local_2c[0];
        }
        *local_2c[0] = *(uint *)(iVar4 + 0x13978) | uVar7;
      }
      else if (iVar13 == 2) {
        uVar9 = (ushort)uVar12;
        if ((int)param_5 < 0) {
          uVar9 = uVar9 ^ (ushort)*local_2c[0];
        }
        *(ushort *)local_2c[0] = uVar9 | (ushort)*(undefined4 *)(iVar5 + 0x13988);
      }
      else {
        if ((int)param_5 < 0) {
          bVar8 = bVar8 ^ (byte)*local_2c[0];
        }
        *(byte *)local_2c[0] = bVar8 | (byte)*(undefined4 *)(iVar6 + 0x139a4);
      }
      uVar10 = uVar10 + 1;
      local_2c[0] = (uint *)((int)local_2c[0] + iVar13);
    } while (((int)uVar10 <= (int)uVar11) ||
            (param_4 = param_4 + 1, uVar10 = local_38, (int)param_4 <= (int)local_34));
  }
  return;
}



/* ===== FUN_000139f8 @ 000139f8 size=168 ===== */

ulonglong FUN_000139f8(uint param_1,uint param_2)

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



/* ===== FUN_00013aa0 @ 00013aa0 size=32 ===== */

void FUN_00013aa0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000139f8();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_00013ac0 @ 00013ac0 size=236 ===== */

ulonglong FUN_00013ac0(uint param_1,uint param_2)

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



/* ===== _fini @ 00013bcc size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002f008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 0002f018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002f01c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open @ 0002f020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_print_ascii_logo @ 0002f024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_print_ascii_logo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rand @ 0002f028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0002f02c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002f030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0002f034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::srand @ 0002f038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void srand(uint __seed)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002f03c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 0002f040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 0002f044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002f048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::time @ 0002f04c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tslib_version @ 0002f050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tslib_version(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002f054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002f058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002f05c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 0002f060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0002f064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_fd @ 0002f068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_close @ 0002f06c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read_raw @ 0002f070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read_raw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002f074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putchar @ 0002f078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 0002f07c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0002f080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_setup @ 0002f084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_setup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ts_read @ 0002f088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ts_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 0002f08c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002f090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 0002f094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0002f098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 0002f09c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 0002f0a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 0002f0a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 0002f0a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::qsort @ 0002f0ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap @ 0002f0b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 0002f0b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 0002f0b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002f0bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002f0c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0002f0c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0002f0c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 0002f0cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0002f0d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


