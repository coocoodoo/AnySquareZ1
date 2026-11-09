// hcitool — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00011b18 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00011b3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_00033efc)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00011b48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00033f00)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00011b54 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00033f04)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::writev @ 00011b60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_writev_00033f08)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::printf @ 00011b6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00033f0c)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00011b78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00033f10)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00011b84 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00033f14)();
  return;
}



/* ===== <EXTERNAL>::usleep @ 00011b90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_00033f18)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00011b9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00033f1c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00011ba8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00033f20)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00011bb4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00033f24)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00011bc0 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00033f28)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00011bcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00033f2c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::sleep @ 00011bd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00033f30)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::strtoul @ 00011bf0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00033f38)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::socket @ 00011bfc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00033f3c)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::fflush @ 00011c08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00033f40)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strncasecmp @ 00011c14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncasecmp_00033f44)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00011c2c size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00033f4c)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 00011c38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00033f50)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00011c44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00033f54)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00011c50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00033f58)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::bind @ 00011c5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00033f5c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00011c74 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00033f64)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 00011c80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_00033f68)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 00011c8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00033f6c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00011c98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00033f70)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00011ca4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00033f74)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 00011cb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_00033f78)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00011cbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00033f7c)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncat @ 00011cc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncat_00033f80)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::sigaction @ 00011cd4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_00033f84)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::strdup @ 00011cec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_00033f8c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memset @ 00011cf8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00033f90)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::poll @ 00011d04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_00033f94)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00011d10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00033f98)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strsep @ 00011d1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strsep_00033f9c)(__stringp);
  return pcVar1;
}



/* ===== <EXTERNAL>::getsockopt @ 00011d28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockopt_00033fa0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00011d34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00033fa4)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00011d40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00033fa8)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00011d4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00033fac)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00011d58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00033fb0)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::fputs @ 00011d64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00033fb4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00011d70 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00033fb8)();
  return;
}



/* ===== <EXTERNAL>::close @ 00011d7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00033fbc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00011d88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_00033fc0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00011d94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00033fc4)(__ptr);
  return;
}



/* ===== FUN_00011da0 @ 00011da0 size=408 ===== */

void FUN_00011da0(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  size_t __n;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *__s;
  int iVar8;
  undefined1 auStack_34 [8];
  int local_2c;
  
  iVar5 = DAT_00011f38 + 0x11dc0;
  iVar6 = -1;
  piVar4 = *(int **)(iVar5 + DAT_00011f3c);
  iVar7 = (int)&DAT_00012398 + DAT_00011f40;
  local_2c = *piVar4;
  iVar8 = DAT_00011f44 + 0x11de8;
LAB_00011de8:
  iVar1 = getopt_long(param_1,param_2,iVar8,iVar7,0);
  if (iVar1 != -1) {
    if (iVar1 == 0x69) goto code_r0x00011e38;
LAB_00011e24:
    FUN_000123a0();
    iVar6 = 0;
    goto LAB_00011e2c;
  }
  iVar7 = **(int **)(iVar5 + DAT_00011f48);
  **(int **)(iVar5 + DAT_00011f48) = 0;
  if (param_1 - iVar7 < 1) goto LAB_00011e24;
  if ((iVar6 == -1) || (iVar8 = FUN_0001b0a4(iVar6,auStack_34), -1 < iVar8)) {
    iVar1 = 0;
    pcVar2 = *(char **)(param_2 + iVar7 * 4);
    iVar8 = DAT_00011f58 + 0x11ea0;
    while( true ) {
      __s = *(char **)(iVar1 * 0xc + iVar8);
      if (__s == (char *)0x0) break;
      __n = strlen(__s);
      iVar3 = strncmp(__s,pcVar2,__n);
      if (iVar3 == 0) {
        (**(code **)(iVar8 + iVar1 * 0xc + 4))(iVar6,param_1 - iVar7,param_2 + iVar7 * 4);
        if (local_2c == *piVar4) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(0);
      }
      iVar1 = iVar1 + 1;
    }
    fprintf((FILE *)**(undefined4 **)(iVar5 + DAT_00011f5c),(char *)(DAT_00011f60 + 0x11ec8),pcVar2)
    ;
    goto LAB_00011e5c;
  }
  pcVar2 = (char *)(DAT_00011f54 + 0x11e88);
  goto LAB_00011e58;
code_r0x00011e38:
  iVar6 = FUN_0001b148(**(undefined4 **)(iVar5 + DAT_00011f4c));
  if (iVar6 < 0) {
    pcVar2 = (char *)(DAT_00011f50 + 0x11e5c);
LAB_00011e58:
    perror(pcVar2);
LAB_00011e5c:
    iVar6 = 1;
LAB_00011e2c:
                    /* WARNING: Subroutine does not return */
    exit(iVar6);
  }
  goto LAB_00011de8;
}



/* ===== entry @ 00011f64 size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00033f88)
            (*(undefined4 *)((int)&DAT_00011fac + DAT_00011fb8 + DAT_00011fac),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_00011fac + DAT_00011fb4 + DAT_00011fac),
             *(undefined4 *)((int)&DAT_00011fac + DAT_00011fb0 + DAT_00011fac),param_1);
  return;
}



/* ===== FUN_00011fbc @ 00011fbc size=72 ===== */

void FUN_00011fbc(void)

{
  code *pcVar1;
  
  if (DAT_00012008 + 0x11fd4 == DAT_00012004 + 0x11fcc) {
    return;
  }
  pcVar1 = *(code **)(DAT_0001200c + 0x11fdc + DAT_00012010);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00012078 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000120ec + 0x12094;
  if (*(char *)(DAT_000120e8 + 0x12088) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000120f0) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000120f4 + 0x120b4));
  }
  FUN_00011fbc();
  if (*(int *)(iVar1 + DAT_000120f8) != 0) {
    __deregister_frame_info(DAT_000120fc + 0x120d4);
  }
  *(undefined1 *)(DAT_00012100 + 0x120e4) = 1;
  return;
}



/* ===== _INIT_0 @ 00012104 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_0001213c + 0x12114 + DAT_00012140) != 0) {
    __register_frame_info(DAT_00012148 + 0x12134,DAT_00012144 + 0x12130);
  }
  if (((DAT_0001206c + 0x1202c) - (DAT_00012068 + 0x12024) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012070 + 0x12034 + DAT_00012074);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_000123a0 @ 000123a0 size=120 ===== */

void FUN_000123a0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_00012420;
  printf((char *)(DAT_0001241c + 0x123b8),DAT_00012418 + 0x123b4);
  iVar2 = DAT_00012428;
  puts((char *)(DAT_00012424 + 0x123cc));
  puts((char *)(DAT_0001242c + 0x123e0));
  puts((char *)(DAT_00012430 + 0x123ec));
  piVar3 = (int *)(iVar1 + 0x123d0);
  while( true ) {
    if (*piVar3 == 0) break;
    printf((char *)(iVar2 + 0x123dc),*piVar3,piVar3[2]);
    piVar3 = piVar3 + 3;
  }
  puts((char *)(DAT_00012434 + 0x12408));
  return;
}



/* ===== FUN_00012438 @ 00012438 size=20 ===== */

void FUN_00012438(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return;
}



/* ===== FUN_000124f8 @ 000124f8 size=196 ===== */

void FUN_000124f8(int param_1,int param_2,int *param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = DAT_000125bc + 0x1250c;
  piVar3 = *(int **)(iVar6 + DAT_000125c0);
  iVar5 = *param_3 - *piVar3;
  *param_3 = iVar5;
  bVar7 = SBORROW4(param_2,param_1);
  iVar4 = param_2 - param_1;
  iVar1 = param_1;
  if (param_1 <= param_2) {
    bVar7 = SBORROW4(iVar5,param_2);
    iVar4 = iVar5 - param_2;
    iVar1 = iVar5;
  }
  puVar2 = (undefined4 *)*param_4;
  if (param_2 == iVar1 || iVar4 < 0 != bVar7) {
    iVar4 = 0;
    if (param_1 <= iVar5) {
      *param_4 = (int)(puVar2 + *piVar3);
      return;
    }
    fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_000125c4),(char *)(DAT_000125d0 + 0x12590),*puVar2
            ,param_1);
    printf((char *)(DAT_000125d4 + 0x125a4),param_5);
  }
  else {
    fprintf((FILE *)**(undefined4 **)(iVar6 + DAT_000125c4),(char *)(DAT_000125c8 + 0x12554),*puVar2
            ,param_2);
    printf((char *)(DAT_000125cc + 0x12564),param_5);
    iVar4 = 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(iVar4);
}



/* ===== FUN_000125d8 @ 000125d8 size=260 ===== */

void FUN_000125d8(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char *__s;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *local_18;
  int local_14;
  
  local_18 = param_3;
  local_14 = param_2;
  iVar2 = getopt_long(param_2,param_3,DAT_000126e0 + 0x12610,DAT_000126dc + 0x12674,0,param_2);
  if (iVar2 != -1) {
    puts((char *)(DAT_000126e4 + 0x12624));
    return;
  }
  FUN_000124f8(1,2,&local_14,&local_18,DAT_000126e8 + 0x12644);
  if (param_1 < 0) {
    param_1 = FUN_0001afc4(0);
  }
  iVar2 = FUN_0001b360(param_1);
  puVar1 = local_18;
  if (iVar2 < 0) {
    __s = (char *)(DAT_000126ec + 0x1267c);
  }
  else {
    uVar3 = atoi((char *)*local_18);
    if (local_14 < 2) {
      uVar5 = 0x13;
    }
    else {
      uVar5 = atoi((char *)puVar1[1]);
      uVar5 = uVar5 & 0xff;
    }
    iVar4 = FUN_0001b8e4(iVar2,uVar3 & 0xffff,uVar5,10000);
    if (-1 < iVar4) {
      close(iVar2);
      return;
    }
    __s = (char *)(DAT_000126f0 + 0x126d0);
  }
  perror(__s);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000126f4 @ 000126f4 size=444 ===== */

void FUN_000126f4(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  char *__s;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *local_38;
  undefined4 local_34;
  ushort local_2e;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  
  uVar2 = 0;
  uVar5 = 0;
  piVar4 = *(int **)(DAT_000128b0 + 0x12714 + DAT_000128b4);
  local_24 = *piVar4;
  iVar3 = DAT_000128b8 + 0x127c4;
  iVar6 = DAT_000128bc + 0x12740;
  local_38 = param_3;
  local_34 = param_2;
  while (iVar1 = getopt_long(local_34,local_38,iVar6,iVar3,0), iVar1 != -1) {
    if (iVar1 == 0x72) {
      uVar2 = 1;
    }
    else {
      if (iVar1 != 0x77) {
        puts((char *)(DAT_000128c8 + 0x127d4));
        goto LAB_000127d4;
      }
      uVar5 = 1;
    }
  }
  FUN_000124f8(0,1,&local_34,&local_38,DAT_000128c0 + 0x12778);
  if (param_1 < 0) {
    param_1 = FUN_0001afc4(0);
  }
  iVar3 = FUN_0001b360(param_1);
  if (iVar3 < 0) {
    __s = (char *)(DAT_000128c4 + 0x127b0);
  }
  else {
    local_2c = 0;
    local_28 = local_28 & 0xffff0000;
    if (*local_38 != 0) {
      FUN_000176e0(*local_38,&local_2c);
    }
    iVar6 = FUN_0001e2e8(iVar3,4,4,uVar5,uVar2,local_2c,(short)local_28,0,0xf,0xf,0,0xc80,1,1,
                         &local_2e,25000);
    if (-1 < iVar6) {
      printf((char *)(DAT_000128d0 + 0x1289c),(uint)local_2e);
      close(iVar3);
LAB_000127d4:
      if (local_24 == *piVar4) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __s = (char *)(DAT_000128cc + 0x1288c);
  }
  perror(__s);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000128d4 @ 000128d4 size=264 ===== */

void FUN_000128d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  FILE *__stream;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = DAT_000129e4;
  local_18 = param_3;
  local_14 = param_2;
  iVar2 = getopt_long(param_2,param_3,DAT_000129e0 + 0x1290c,DAT_000129dc + 0x129d0,0,param_2);
  if (iVar2 != -1) {
    puts((char *)(DAT_000129e8 + 0x12928));
    return;
  }
  FUN_000124f8(0,0,&local_14,&local_18,DAT_000129ec + 0x12948);
  if (param_1 < 0) {
    param_1 = FUN_0001afc4(0);
  }
  iVar2 = FUN_0001b360(param_1);
  if (iVar2 < 0) {
    perror((char *)(DAT_000129f0 + 0x12980));
  }
  else {
    iVar3 = FUN_0001bbd8(iVar2,1000);
    close(iVar2);
    if (-1 < iVar3) {
      return;
    }
    piVar4 = __errno_location();
    iVar2 = *piVar4;
    __stream = (FILE *)**(undefined4 **)(iVar1 + 0x1291c + DAT_000129f4);
    pcVar5 = strerror(iVar2);
    fprintf(__stream,(char *)(DAT_000129f8 + 0x129d8),pcVar5,iVar2);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000129fc @ 000129fc size=328 ===== */

void FUN_000129fc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  FILE *__stream;
  int *piVar5;
  undefined4 local_28;
  undefined4 local_24;
  byte local_1d;
  int local_1c;
  
  iVar4 = DAT_00012b44 + 0x12a1c;
  piVar5 = *(int **)(iVar4 + DAT_00012b48);
  local_1c = *piVar5;
  local_28 = param_3;
  local_24 = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_00012b4c + 0x12a34,DAT_00012b50 + 0x12b34,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_00012b54 + 0x12a64));
LAB_00012a64:
    if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  FUN_000124f8(0,0,&local_24,&local_28,DAT_00012b58 + 0x12a90);
  if (param_1 < 0) {
    param_1 = FUN_0001afc4(0);
  }
  iVar1 = FUN_0001b360(param_1);
  if (iVar1 < 0) {
    perror((char *)(DAT_00012b5c + 0x12ac8));
  }
  else {
    iVar2 = FUN_0001bb20(iVar1,&local_1d,1000);
    close(iVar1);
    if (-1 < iVar2) {
      printf((char *)(DAT_00012b68 + 0x12b38),(uint)local_1d);
      goto LAB_00012a64;
    }
    piVar5 = __errno_location();
    iVar1 = *piVar5;
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00012b60);
    pcVar3 = strerror(iVar1);
    fprintf(__stream,(char *)(DAT_00012b64 + 0x12b24),pcVar3,iVar1);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00012b6c @ 00012b6c size=336 ===== */

void FUN_00012b6c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  FILE *__stream;
  int *piVar5;
  undefined4 *local_30;
  undefined4 local_2c [2];
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar4 = DAT_00012cbc + 0x12b8c;
  piVar5 = *(int **)(iVar4 + DAT_00012cc0);
  local_1c = *piVar5;
  local_30 = param_3;
  local_2c[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_00012cc4 + 0x12ba4,(int)&DAT_00012cc4 + DAT_00012cc8,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_00012ccc + 0x12bd4));
LAB_00012bd4:
    if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  FUN_000124f8(1,1,local_2c,&local_30,DAT_00012cd0 + 0x12c00);
  if (param_1 < 0) {
    param_1 = FUN_0001afc4(0);
  }
  iVar1 = FUN_0001b360(param_1);
  if (iVar1 < 0) {
    perror((char *)(DAT_00012cd4 + 0x12c38));
  }
  else {
    FUN_000176e0(*local_30,auStack_24);
    iVar2 = FUN_0001ba58(iVar1,auStack_24,0,1000);
    close(iVar1);
    if (-1 < iVar2) goto LAB_00012bd4;
    piVar5 = __errno_location();
    iVar1 = *piVar5;
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00012cd8);
    pcVar3 = strerror(iVar1);
    fprintf(__stream,(char *)(DAT_00012cdc + 0x12cb0),pcVar3,iVar1);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00012ce0 @ 00012ce0 size=360 ===== */

void FUN_00012ce0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  FILE *__stream;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *local_38;
  undefined4 local_34 [2];
  undefined1 auStack_2c [8];
  int local_24;
  
  uVar4 = 0;
  iVar3 = DAT_00012e48 + 0x12d00;
  piVar6 = *(int **)(iVar3 + DAT_00012e4c);
  local_24 = *piVar6;
  iVar5 = (int)&DAT_00012e4c + DAT_00012e50;
  iVar7 = DAT_00012e54 + 0x12d28;
  local_38 = param_3;
  local_34[0] = param_2;
  do {
    iVar1 = getopt_long(local_34[0],local_38,iVar7,iVar5,0);
    if (iVar1 == -1) {
      FUN_000124f8(1,1,local_34,&local_38,DAT_00012e58 + 0x12d60);
      if (param_1 < 0) {
        param_1 = FUN_0001afc4(0);
      }
      iVar5 = FUN_0001b360(param_1);
      if (iVar5 < 0) {
        perror((char *)(DAT_00012e5c + 0x12d98));
      }
      else {
        FUN_000176e0(*local_38,auStack_2c);
        iVar7 = FUN_0001b990(iVar5,auStack_2c,uVar4,1000);
        close(iVar5);
        if (-1 < iVar7) goto LAB_00012db8;
        piVar6 = __errno_location();
        iVar5 = *piVar6;
        __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00012e64);
        pcVar2 = strerror(iVar5);
        fprintf(__stream,(char *)(DAT_00012e68 + 0x12e3c),pcVar2,iVar5);
      }
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    uVar4 = 1;
  } while (iVar1 == 0x72);
  puts((char *)(DAT_00012e60 + 0x12db8));
LAB_00012db8:
  if (local_24 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00012e6c @ 00012e6c size=448 ===== */

void FUN_00012e6c(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  char *__s;
  void *__ptr;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *local_30;
  int local_2c [2];
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar2 = DAT_0001302c + 0x12e88;
  piVar3 = *(int **)(iVar2 + DAT_00013030);
  local_1c = *piVar3;
  local_30 = param_3;
  local_2c[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_00013034 + 0x12ea0,DAT_00013038 + 0x13018,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_0001303c + 0x12ed4));
LAB_00012ed4:
    if (local_1c == *piVar3) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_000124f8(1,2,local_2c,&local_30,DAT_00013040 + 0x12f00);
  FUN_000176e0(*local_30,auStack_24);
  if (local_2c[0] < 2) {
    uVar4 = 0x13;
  }
  else {
    uVar4 = atoi((char *)local_30[1]);
    uVar4 = uVar4 & 0xff;
  }
  if ((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_00013044 + 0x12f58,auStack_24), param_1 < 0)) {
    fputs((char *)(DAT_0001304c + 0x12f74),(FILE *)**(undefined4 **)(iVar2 + DAT_00013048));
  }
  else {
    iVar1 = FUN_0001b360(param_1);
    if (iVar1 < 0) {
      __s = (char *)(DAT_00013050 + 0x12f9c);
    }
    else {
      __ptr = malloc(0x18);
      if (__ptr == (void *)0x0) {
        __s = (char *)(DAT_00013054 + 0x12fb8);
      }
      else {
        FUN_00012438(__ptr,auStack_24);
        *(undefined1 *)((int)__ptr + 6) = 1;
        iVar2 = ioctl(iVar1,DAT_00013058,__ptr);
        if (-1 < iVar2) {
          iVar2 = FUN_0001b8e4(iVar1,*(undefined2 *)((int)__ptr + 8),uVar4,10000);
          if (iVar2 < 0) {
            perror((char *)(DAT_00013060 + 0x13010));
          }
          free(__ptr);
          close(iVar1);
          goto LAB_00012ed4;
        }
        __s = (char *)(DAT_0001305c + 0x12fe8);
      }
    }
    perror(__s);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013064 @ 00013064 size=428 ===== */

void FUN_00013064(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char *__s;
  void *__ptr;
  int iVar2;
  int *piVar3;
  undefined4 *local_30;
  undefined4 local_2c;
  ushort local_26;
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar2 = DAT_00013210 + 0x13084;
  piVar3 = *(int **)(iVar2 + DAT_00013214);
  local_1c = *piVar3;
  local_30 = param_3;
  local_2c = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_00013218 + 0x1309c,(int)&DAT_0001322c + DAT_0001321c,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_00013220 + 0x130cc));
LAB_000130cc:
    if (local_1c == *piVar3) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_000124f8(1,1,&local_2c,&local_30,DAT_00013224 + 0x130f8);
  FUN_000176e0(*local_30,auStack_24);
  if ((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_00013228 + 0x13130,auStack_24), param_1 < 0)) {
    fputs((char *)(DAT_00013230 + 0x1314c),(FILE *)**(undefined4 **)(iVar2 + DAT_0001322c));
  }
  else {
    iVar1 = FUN_0001b360(param_1);
    if (iVar1 < 0) {
      __s = (char *)(DAT_00013234 + 0x13174);
    }
    else {
      __ptr = malloc(0x18);
      if (__ptr == (void *)0x0) {
        __s = (char *)(DAT_00013238 + 0x13190);
      }
      else {
        FUN_00012438(__ptr,auStack_24);
        *(undefined1 *)((int)__ptr + 6) = 1;
        iVar2 = ioctl(iVar1,DAT_0001323c,__ptr);
        if (iVar2 < 0) {
          __s = (char *)(DAT_00013240 + 0x131c0);
        }
        else {
          iVar2 = FUN_0001c1f0(iVar1,*(undefined2 *)((int)__ptr + 8),&local_26,1000);
          if (-1 < iVar2) {
            printf((char *)(DAT_00013248 + 0x131f4),(uint)local_26);
            free(__ptr);
            close(iVar1);
            goto LAB_000130cc;
          }
          __s = (char *)(DAT_00013244 + 0x131e4);
        }
      }
    }
    perror(__s);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001324c @ 0001324c size=408 ===== */

void FUN_0001324c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char *__s;
  void *__ptr;
  int iVar2;
  int *piVar3;
  undefined4 *local_30;
  undefined4 local_2c [2];
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar2 = DAT_000133e4 + 0x1326c;
  piVar3 = *(int **)(iVar2 + DAT_000133e8);
  local_1c = *piVar3;
  local_30 = param_3;
  local_2c[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_000133ec + 0x13284,DAT_000133f0 + 0x13434,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_000133f4 + 0x132b4));
LAB_000132b4:
    if (local_1c == *piVar3) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_000124f8(1,1,local_2c,&local_30,DAT_000133f8 + 0x132e0);
  FUN_000176e0(*local_30,auStack_24);
  if ((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_000133fc + 0x13318,auStack_24), param_1 < 0)) {
    fputs((char *)(DAT_00013404 + 0x13334),(FILE *)**(undefined4 **)(iVar2 + DAT_00013400));
  }
  else {
    iVar1 = FUN_0001b360(param_1);
    if (iVar1 < 0) {
      __s = (char *)(DAT_00013408 + 0x1335c);
    }
    else {
      __ptr = malloc(0x18);
      if (__ptr == (void *)0x0) {
        __s = (char *)(DAT_0001340c + 0x13378);
      }
      else {
        FUN_00012438(__ptr,auStack_24);
        *(undefined1 *)((int)__ptr + 6) = 1;
        iVar2 = ioctl(iVar1,DAT_00013410,__ptr);
        if (iVar2 < 0) {
          __s = (char *)(DAT_00013414 + 0x133a8);
        }
        else {
          iVar2 = FUN_0001cdd8(iVar1,*(undefined2 *)((int)__ptr + 8),25000);
          if (-1 < iVar2) {
            free(__ptr);
            close(iVar1);
            goto LAB_000132b4;
          }
          __s = (char *)(DAT_00013418 + 0x133c8);
        }
      }
    }
    perror(__s);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001341c @ 0001341c size=440 ===== */

void FUN_0001341c(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  char *__s;
  void *__ptr;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *local_30;
  int local_2c [2];
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar3 = DAT_000135d4 + 0x1343c;
  piVar4 = *(int **)(iVar3 + DAT_000135d8);
  local_1c = *piVar4;
  local_30 = param_3;
  local_2c[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_000135dc + 0x13454,DAT_000135e0 + 0x13624,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_000135e4 + 0x13484));
LAB_00013484:
    if (local_1c == *piVar4) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_000124f8(1,2,local_2c,&local_30,DAT_000135e8 + 0x134b0);
  FUN_000176e0(*local_30,auStack_24);
  if ((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_000135ec + 0x134e8,auStack_24), param_1 < 0)) {
    fputs((char *)(DAT_000135f4 + 0x13504),(FILE *)**(undefined4 **)(iVar3 + DAT_000135f0));
  }
  else {
    iVar1 = FUN_0001b360(param_1);
    if (iVar1 < 0) {
      __s = (char *)(DAT_000135f8 + 0x1352c);
    }
    else {
      __ptr = malloc(0x18);
      if (__ptr == (void *)0x0) {
        __s = (char *)(DAT_000135fc + 0x13548);
      }
      else {
        FUN_00012438(__ptr,auStack_24);
        *(undefined1 *)((int)__ptr + 6) = 1;
        iVar3 = ioctl(iVar1,DAT_00013600,__ptr);
        if (iVar3 < 0) {
          __s = (char *)(DAT_00013604 + 0x13578);
        }
        else {
          if (local_2c[0] < 2) {
            uVar2 = 1;
          }
          else {
            uVar2 = atoi((char *)local_30[1]);
            uVar2 = uVar2 & 0xff;
          }
          iVar3 = FUN_0001cd28(iVar1,*(undefined2 *)((int)__ptr + 8),uVar2,25000);
          if (-1 < iVar3) {
            free(__ptr);
            close(iVar1);
            goto LAB_00013484;
          }
          __s = (char *)(DAT_00013608 + 0x135b8);
        }
      }
    }
    perror(__s);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001360c @ 0001360c size=408 ===== */

void FUN_0001360c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char *__s;
  void *__ptr;
  int iVar2;
  int *piVar3;
  undefined4 *local_30;
  undefined4 local_2c [2];
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar2 = DAT_000137a4 + 0x1362c;
  piVar3 = *(int **)(iVar2 + DAT_000137a8);
  local_1c = *piVar3;
  local_30 = param_3;
  local_2c[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_000137ac + 0x13644,DAT_000137b0 + 0x13834,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_000137b4 + 0x13674));
LAB_00013674:
    if (local_1c == *piVar3) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_000124f8(1,1,local_2c,&local_30,DAT_000137b8 + 0x136a0);
  FUN_000176e0(*local_30,auStack_24);
  if ((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_000137bc + 0x136d8,auStack_24), param_1 < 0)) {
    fputs((char *)(DAT_000137c4 + 0x136f4),(FILE *)**(undefined4 **)(iVar2 + DAT_000137c0));
  }
  else {
    iVar1 = FUN_0001b360(param_1);
    if (iVar1 < 0) {
      __s = (char *)(DAT_000137c8 + 0x1371c);
    }
    else {
      __ptr = malloc(0x18);
      if (__ptr == (void *)0x0) {
        __s = (char *)(DAT_000137cc + 0x13738);
      }
      else {
        FUN_00012438(__ptr,auStack_24);
        *(undefined1 *)((int)__ptr + 6) = 1;
        iVar2 = ioctl(iVar1,DAT_000137d0,__ptr);
        if (iVar2 < 0) {
          __s = (char *)(DAT_000137d4 + 0x13768);
        }
        else {
          iVar2 = FUN_0001cc80(iVar1,*(undefined2 *)((int)__ptr + 8),25000);
          if (-1 < iVar2) {
            free(__ptr);
            close(iVar1);
            goto LAB_00013674;
          }
          __s = (char *)(DAT_000137d8 + 0x13788);
        }
      }
    }
    perror(__s);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000137dc @ 000137dc size=548 ===== */

void FUN_000137dc(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  char *__s;
  void *__ptr;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint in_fpscr;
  double dVar5;
  undefined4 *local_30;
  int local_2c;
  ushort local_26;
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar3 = DAT_00013a00 + 0x137fc;
  piVar4 = *(int **)(iVar3 + DAT_00013a04);
  local_1c = *piVar4;
  local_30 = param_3;
  local_2c = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_00013a08 + 0x13814,(int)&DAT_00013a24 + DAT_00013a0c,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_00013a10 + 0x13844));
    goto LAB_00013844;
  }
  FUN_000124f8(1,2,&local_2c,&local_30,DAT_00013a14 + 0x13870);
  FUN_000176e0(*local_30,auStack_24);
  if ((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_00013a18 + 0x138a8,auStack_24), param_1 < 0)) {
    fputs((char *)(DAT_00013a20 + 0x138c4),(FILE *)**(undefined4 **)(iVar3 + DAT_00013a1c));
    goto LAB_000138c8;
  }
  iVar1 = FUN_0001b360(param_1);
  if (iVar1 < 0) {
    __s = (char *)(DAT_00013a24 + 0x138ec);
  }
  else {
    __ptr = malloc(0x18);
    if (__ptr == (void *)0x0) {
      __s = (char *)(DAT_00013a28 + 0x13908);
    }
    else {
      FUN_00012438(__ptr,auStack_24);
      *(undefined1 *)((int)__ptr + 6) = 1;
      iVar3 = ioctl(iVar1,DAT_00013a2c,__ptr);
      if (iVar3 < 0) {
        __s = (char *)(DAT_00013a30 + 0x13938);
      }
      else if (local_2c == 1) {
        iVar3 = FUN_0001db8c(iVar1,*(undefined2 *)((int)__ptr + 8),&local_26,1000);
        if (-1 < iVar3) {
          uVar2 = (uint)local_26;
          if (uVar2 == 0) {
            puts((char *)(DAT_00013a3c + 0x139b4));
          }
          else {
            dVar5 = (double)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
            printf((char *)(DAT_00013a38 + 0x1398c),uVar2,SUB84(dVar5 * 0.625,0),
                   (int)((ulonglong)(dVar5 * 0.625) >> 0x20));
          }
LAB_00013994:
          free(__ptr);
          close(iVar1);
LAB_00013844:
          if (local_1c == *piVar4) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        __s = (char *)(DAT_00013a34 + 0x13968);
      }
      else {
        uVar2 = strtol((char *)local_30[1],(char **)0x0,10);
        local_26 = (ushort)uVar2;
        iVar3 = FUN_0001dc4c(iVar1,*(undefined2 *)((int)__ptr + 8),uVar2 & 0xffff,1000);
        if (-1 < iVar3) goto LAB_00013994;
        __s = (char *)(DAT_00013a40 + 0x139f8);
      }
    }
  }
  perror(__s);
LAB_000138c8:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013a44 @ 00013a44 size=580 ===== */

void FUN_00013a44(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  void *__ptr;
  int iVar3;
  void *__ptr_00;
  FILE *__stream;
  int iVar4;
  int *piVar5;
  undefined4 *local_40;
  int local_3c [2];
  undefined2 local_32;
  undefined2 local_30 [2];
  undefined1 auStack_2c [8];
  int local_24;
  
  iVar4 = DAT_00013c88 + 0x13a64;
  piVar5 = *(int **)(iVar4 + DAT_00013c8c);
  local_24 = *piVar5;
  local_40 = param_3;
  local_3c[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_00013c90 + 0x13a7c,(int)&DAT_00013cac + DAT_00013c94,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_00013c98 + 0x13aac));
    goto LAB_00013aac;
  }
  FUN_000124f8(1,2,local_3c,&local_40,DAT_00013c9c + 0x13ad8);
  FUN_000176e0(*local_40,auStack_2c);
  if ((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_00013ca0 + 0x13b10,auStack_2c), param_1 < 0)) {
    pcVar2 = (char *)(DAT_00013ca8 + 0x13b2c);
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00013ca4);
    goto LAB_00013b2c;
  }
  iVar1 = FUN_0001b360(param_1);
  if (iVar1 < 0) {
    pcVar2 = (char *)(DAT_00013cac + 0x13b50);
  }
  else {
    __ptr = malloc(0x18);
    if (__ptr == (void *)0x0) {
      pcVar2 = (char *)(DAT_00013cb0 + 0x13b70);
    }
    else {
      FUN_00012438(__ptr,auStack_2c);
      *(undefined1 *)((int)__ptr + 6) = 1;
      iVar3 = ioctl(iVar1,DAT_00013cb4,__ptr);
      if (iVar3 < 0) {
        pcVar2 = (char *)(DAT_00013cb8 + 0x13ba0);
      }
      else if (local_3c[0] == 1) {
        iVar3 = FUN_0001da1c(iVar1,*(undefined2 *)((int)__ptr + 8),&local_32,1000);
        if (-1 < iVar3) {
          __ptr_00 = (void *)FUN_0001a9d8(local_32);
          if (__ptr_00 != (void *)0x0) {
            printf((char *)(DAT_00013cc0 + 0x13bf0),__ptr_00);
            free(__ptr_00);
LAB_00013bf8:
            free(__ptr);
            close(iVar1);
LAB_00013aac:
            if (local_24 == *piVar5) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          pcVar2 = (char *)(DAT_00013cc4 + 0x13c20);
          __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00013ca4);
LAB_00013b2c:
          fputs(pcVar2,__stream);
          goto LAB_00013b50;
        }
        pcVar2 = (char *)(DAT_00013cbc + 0x13bd0);
      }
      else {
        iVar3 = FUN_0001a9f0(local_40[1],local_30);
        if (iVar3 < 0) {
          pcVar2 = (char *)(DAT_00013cc8 + 0x13c50);
          __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00013ca4);
          goto LAB_00013b2c;
        }
        local_32 = local_30[0];
        iVar4 = FUN_0001dadc(iVar1,*(undefined2 *)((int)__ptr + 8),local_30[0],1000);
        if (-1 < iVar4) goto LAB_00013bf8;
        pcVar2 = (char *)(DAT_00013ccc + 0x13c80);
      }
    }
  }
  perror(pcVar2);
LAB_00013b50:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013cd0 @ 00013cd0 size=508 ===== */

void FUN_00013cd0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  void *__ptr;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  undefined4 *local_48;
  undefined4 local_44 [2];
  char local_39;
  undefined1 auStack_38 [8];
  byte abStack_30 [12];
  int local_24;
  
  iVar4 = DAT_00013ecc + 0x13cf0;
  piVar5 = *(int **)(iVar4 + DAT_00013ed0);
  local_24 = *piVar5;
  local_48 = param_3;
  local_44[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_00013ed4 + 0x13d08,DAT_00013ed8 + 0x13f58,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_00013edc + 0x13d38));
LAB_00013d38:
    if (local_24 == *piVar5) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_000124f8(1,1,local_44,&local_48,DAT_00013ee0 + 0x13d64);
  FUN_000176e0(*local_48,auStack_38);
  if ((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_00013ee4 + 0x13d9c,auStack_38), param_1 < 0)) {
    fputs((char *)(DAT_00013eec + 0x13db8),(FILE *)**(undefined4 **)(iVar4 + DAT_00013ee8));
  }
  else {
    iVar1 = FUN_0001b360(param_1);
    if (iVar1 < 0) {
      pcVar2 = (char *)(DAT_00013ef0 + 0x13de0);
    }
    else {
      __ptr = malloc(0x18);
      if (__ptr == (void *)0x0) {
        pcVar2 = (char *)(DAT_00013ef4 + 0x13dfc);
      }
      else {
        FUN_00012438(__ptr,auStack_38);
        *(undefined1 *)((int)__ptr + 6) = 1;
        iVar4 = ioctl(iVar1,DAT_00013ef8,__ptr);
        if (iVar4 < 0) {
          pcVar2 = (char *)(DAT_00013efc + 0x13e2c);
        }
        else {
          iVar4 = FUN_0001df30(iVar1,*(undefined2 *)((int)__ptr + 8),&local_39,abStack_30,1000);
          if (-1 < iVar4) {
            if (local_39 == '\x01') {
              iVar4 = 0;
              pcVar2 = (char *)(DAT_00013f08 + 0x13e80);
              printf((char *)(DAT_00013f04 + 0x13e7c));
              pbVar3 = abStack_30;
              do {
                iVar4 = iVar4 + 1;
                printf(pcVar2,(uint)*pbVar3);
                pbVar3 = pbVar3 + 1;
              } while (iVar4 != 10);
              putchar(10);
            }
            else {
              puts((char *)(DAT_00013f0c + 0x13ec0));
            }
            free(__ptr);
            close(iVar1);
            goto LAB_00013d38;
          }
          pcVar2 = (char *)(DAT_00013f00 + 0x13e5c);
        }
      }
    }
    perror(pcVar2);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013f10 @ 00013f10 size=492 ===== */

void FUN_00013f10(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  char *__s;
  void *__ptr;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *local_30;
  int local_2c;
  char local_25;
  undefined1 auStack_24 [8];
  int local_1c;
  
  uVar2 = 0;
  iVar3 = DAT_000140fc + 0x13f30;
  piVar4 = *(int **)(iVar3 + DAT_00014100);
  local_1c = *piVar4;
  local_30 = param_3;
  local_2c = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_00014104 + 0x13f48,DAT_00014108 + 0x141b8,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_0001410c + 0x13f78));
LAB_00013f78:
    if (local_1c == *piVar4) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_000124f8(1,2,&local_2c,&local_30,DAT_00014110 + 0x13fa4);
  FUN_000176e0(*local_30,auStack_24);
  if (1 < local_2c) {
    uVar2 = atoi((char *)local_30[1]);
    uVar2 = uVar2 & 0xff;
  }
  if ((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_00014114 + 0x13ff8,auStack_24), param_1 < 0)) {
    fputs((char *)(DAT_0001411c + 0x14014),(FILE *)**(undefined4 **)(iVar3 + DAT_00014118));
  }
  else {
    iVar1 = FUN_0001b360(param_1);
    if (iVar1 < 0) {
      __s = (char *)(DAT_00014120 + 0x1403c);
    }
    else {
      __ptr = malloc(0x18);
      if (__ptr == (void *)0x0) {
        __s = (char *)(DAT_00014124 + 0x14058);
      }
      else {
        FUN_00012438(__ptr,auStack_24);
        *(undefined1 *)((int)__ptr + 6) = 1;
        iVar3 = ioctl(iVar1,DAT_00014128,__ptr);
        if (iVar3 < 0) {
          __s = (char *)(DAT_0001412c + 0x14088);
        }
        else {
          iVar3 = FUN_0001d964(iVar1,*(undefined2 *)((int)__ptr + 8),uVar2,&local_25,1000);
          if (-1 < iVar3) {
            if (uVar2 == 0) {
              iVar3 = DAT_0001413c + 0x140f4;
            }
            else {
              iVar3 = DAT_00014134 + 0x140c8;
            }
            printf((char *)(DAT_00014138 + 0x140d4),iVar3,(int)local_25);
            free(__ptr);
            close(iVar1);
            goto LAB_00013f78;
          }
          __s = (char *)(DAT_00014130 + 0x140b4);
        }
      }
    }
    perror(__s);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00014140 @ 00014140 size=428 ===== */

void FUN_00014140(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char *__s;
  void *__ptr;
  int iVar2;
  int *piVar3;
  undefined4 *local_30;
  undefined4 local_2c;
  byte local_25;
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar2 = DAT_000142ec + 0x14160;
  piVar3 = *(int **)(iVar2 + DAT_000142f0);
  local_1c = *piVar3;
  local_30 = param_3;
  local_2c = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_000142f4 + 0x14178,DAT_000142f8 + 0x14408,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_000142fc + 0x141a8));
LAB_000141a8:
    if (local_1c == *piVar3) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_000124f8(1,1,&local_2c,&local_30,DAT_00014300 + 0x141d4);
  FUN_000176e0(*local_30,auStack_24);
  if ((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_00014304 + 0x1420c,auStack_24), param_1 < 0)) {
    fputs((char *)(DAT_0001430c + 0x14228),(FILE *)**(undefined4 **)(iVar2 + DAT_00014308));
  }
  else {
    iVar1 = FUN_0001b360(param_1);
    if (iVar1 < 0) {
      __s = (char *)(DAT_00014310 + 0x14250);
    }
    else {
      __ptr = malloc(0x18);
      if (__ptr == (void *)0x0) {
        __s = (char *)(DAT_00014314 + 0x1426c);
      }
      else {
        FUN_00012438(__ptr,auStack_24);
        *(undefined1 *)((int)__ptr + 6) = 1;
        iVar2 = ioctl(iVar1,DAT_00014318,__ptr);
        if (iVar2 < 0) {
          __s = (char *)(DAT_0001431c + 0x1429c);
        }
        else {
          iVar2 = FUN_0001ddc0(iVar1,*(undefined2 *)((int)__ptr + 8),&local_25,1000);
          if (-1 < iVar2) {
            printf((char *)(DAT_00014324 + 0x142d0),(uint)local_25);
            free(__ptr);
            close(iVar1);
            goto LAB_000141a8;
          }
          __s = (char *)(DAT_00014320 + 0x142c0);
        }
      }
    }
    perror(__s);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00014328 @ 00014328 size=428 ===== */

void FUN_00014328(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char *__s;
  void *__ptr;
  int iVar2;
  int *piVar3;
  undefined4 *local_30;
  undefined4 local_2c;
  char local_25;
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar2 = DAT_000144d4 + 0x14348;
  piVar3 = *(int **)(iVar2 + DAT_000144d8);
  local_1c = *piVar3;
  local_30 = param_3;
  local_2c = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_000144dc + 0x14360,DAT_000144e0 + 0x14610,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_000144e4 + 0x14390));
LAB_00014390:
    if (local_1c == *piVar3) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_000124f8(1,1,&local_2c,&local_30,DAT_000144e8 + 0x143bc);
  FUN_000176e0(*local_30,auStack_24);
  if ((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_000144ec + 0x143f4,auStack_24), param_1 < 0)) {
    fputs((char *)(DAT_000144f4 + 0x14410),(FILE *)**(undefined4 **)(iVar2 + DAT_000144f0));
  }
  else {
    iVar1 = FUN_0001b360(param_1);
    if (iVar1 < 0) {
      __s = (char *)(DAT_000144f8 + 83000);
    }
    else {
      __ptr = malloc(0x18);
      if (__ptr == (void *)0x0) {
        __s = (char *)(DAT_000144fc + 0x14454);
      }
      else {
        FUN_00012438(__ptr,auStack_24);
        *(undefined1 *)((int)__ptr + 6) = 1;
        iVar2 = ioctl(iVar1,DAT_00014500,__ptr);
        if (iVar2 < 0) {
          __s = (char *)(DAT_00014504 + 0x14484);
        }
        else {
          iVar2 = FUN_0001de78(iVar1,*(undefined2 *)((int)__ptr + 8),&local_25,1000);
          if (-1 < iVar2) {
            printf((char *)(DAT_0001450c + 0x144b8),(int)local_25);
            free(__ptr);
            close(iVar1);
            goto LAB_00014390;
          }
          __s = (char *)(DAT_00014508 + 0x144a8);
        }
      }
    }
    perror(__s);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00014510 @ 00014510 size=484 ===== */

void FUN_00014510(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char *__s;
  void *__ptr;
  int iVar2;
  int *piVar3;
  undefined4 *local_58;
  undefined4 local_54 [2];
  undefined2 local_4c [2];
  undefined1 local_48 [4];
  undefined1 auStack_44 [8];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined2 *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar2 = DAT_000146f4 + 0x14530;
  piVar3 = *(int **)(iVar2 + DAT_000146f8);
  local_1c = *piVar3;
  local_58 = param_3;
  local_54[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_000146fc + 0x14548,DAT_00014700 + 0x14818,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_00014704 + 0x14578));
LAB_00014578:
    if (local_1c == *piVar3) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_000124f8(2,2,local_54,&local_58,DAT_00014708 + 0x145a4);
  FUN_000176e0(*local_58,auStack_24);
  FUN_0001a988(local_58[1],local_48);
  if ((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_0001470c + 0x145ec,auStack_24), param_1 < 0)) {
    fputs((char *)(DAT_00014714 + 0x14608),(FILE *)**(undefined4 **)(iVar2 + DAT_00014710));
  }
  else {
    iVar1 = FUN_0001b360(param_1);
    if (iVar1 < 0) {
      __s = (char *)(DAT_00014718 + 0x14630);
    }
    else {
      __ptr = malloc(0x18);
      if (__ptr == (void *)0x0) {
        __s = (char *)(DAT_0001471c + 0x1464c);
      }
      else {
        FUN_00012438(__ptr,auStack_24);
        *(undefined1 *)((int)__ptr + 6) = 1;
        iVar2 = ioctl(iVar1,DAT_00014720,__ptr);
        if (iVar2 < 0) {
          __s = (char *)(DAT_00014724 + 0x1467c);
        }
        else {
          local_4c[0] = *(undefined2 *)((int)__ptr + 8);
          local_3c = DAT_00014728;
          uStack_38 = 0x1d;
          local_34 = local_4c;
          local_30 = 4;
          local_2c = auStack_44;
          local_28 = 5;
          iVar2 = FUN_0001b4d8(iVar1,&local_3c,100);
          if (-1 < iVar2) {
            free(__ptr);
            close(iVar1);
            goto LAB_00014578;
          }
          __s = (char *)(DAT_0001472c + 0x146d8);
        }
      }
    }
    perror(__s);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00014730 @ 00014730 size=356 ===== */

void FUN_00014730(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *__s;
  int iVar2;
  int *piVar3;
  undefined4 local_48;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined2 local_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  int local_14;
  
  piVar3 = *(int **)(DAT_00014894 + 0x14750 + DAT_00014898);
  local_14 = *piVar3;
  local_48 = param_3;
  local_44[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_0001489c + 0x14768,(int)&DAT_00014a58 + DAT_000148a0,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_000148a4 + 0x14798));
LAB_00014798:
    if (local_14 == *piVar3) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_000124f8(0,0,local_44,&local_48,DAT_000148a8 + 0x147c4);
  if (param_1 < 0) {
    param_1 = FUN_0001afc4(0);
  }
  iVar1 = FUN_0001b360(param_1);
  if (iVar1 < 0) {
    __s = (char *)(DAT_000148ac + 0x147fc);
  }
  else {
    local_1c = 0;
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_20 = (undefined2)DAT_000148b0;
    _local_18 = CONCAT12(0x9e,local_20);
    local_1e = 0x9e;
    local_24 = DAT_000148b4;
    local_1d = 8;
    local_38 = 0;
    local_2c = 0;
    local_3c = DAT_000148b8;
    puStack_34 = &local_24;
    local_30 = 9;
    iVar2 = FUN_0001b4d8(iVar1,&local_3c,100);
    if (-1 < iVar2) {
      close(iVar1);
      goto LAB_00014798;
    }
    __s = (char *)(DAT_000148bc + 0x14880);
  }
  perror(__s);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000148c0 @ 000148c0 size=368 ===== */

void FUN_000148c0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  char *__s;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *local_30;
  undefined4 local_2c [2];
  undefined1 auStack_24 [8];
  int local_1c;
  
  uVar3 = 0;
  iVar4 = DAT_00014a30 + 0x148e0;
  piVar5 = *(int **)(iVar4 + DAT_00014a34);
  local_1c = *piVar5;
  local_30 = param_3;
  local_2c[0] = param_2;
  iVar2 = getopt_long(param_2,param_3,DAT_00014a38 + 0x148f8,(int)&DAT_00014c08 + DAT_00014a3c,0);
  if (iVar2 != -1) {
    puts((char *)(DAT_00014a40 + 0x14928));
LAB_00014928:
    if (local_1c == *piVar5) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_000124f8(2,2,local_2c,&local_30,DAT_00014a44 + 0x14954);
  FUN_000176e0(*local_30,auStack_24);
  cVar1 = *(char *)local_30[1];
  if ((cVar1 != 'm') && (uVar3 = (uint)(cVar1 == 's'), cVar1 != 's')) {
    uVar3 = atoi((char *)local_30[1]);
    uVar3 = uVar3 & 0xff;
  }
  if ((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_00014a48 + 0x149b4,auStack_24), param_1 < 0)) {
    fputs((char *)(DAT_00014a50 + 0x149d0),(FILE *)**(undefined4 **)(iVar4 + DAT_00014a4c));
  }
  else {
    iVar2 = FUN_0001b360(param_1);
    if (iVar2 < 0) {
      __s = (char *)(DAT_00014a54 + 0x149f8);
    }
    else {
      iVar4 = FUN_0001ce80(iVar2,auStack_24,uVar3,10000);
      if (-1 < iVar4) {
        close(iVar2);
        goto LAB_00014928;
      }
      __s = (char *)(DAT_00014a58 + 0x14a1c);
    }
    perror(__s);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00014a5c @ 00014a5c size=428 ===== */

void FUN_00014a5c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  undefined4 *local_40;
  undefined4 local_3c [2];
  undefined1 auStack_32 [2];
  uint local_30;
  undefined1 auStack_2c [8];
  int local_24;
  
  bVar6 = true;
  iVar2 = DAT_00014c08 + 0x14a7c;
  piVar4 = *(int **)(iVar2 + DAT_00014c0c);
  local_24 = *piVar4;
  iVar5 = DAT_00014c14 + 0x14aa0;
  iVar3 = DAT_00014c10 + 0x14dbc;
  local_30 = 0xcc18;
  local_40 = param_3;
  local_3c[0] = param_2;
LAB_00014aac:
  do {
    iVar1 = getopt_long(local_3c[0],local_40,iVar5,iVar3,0);
    if (iVar1 == -1) {
      FUN_000124f8(1,1,local_3c,&local_40,DAT_00014c18 + 0x14ae4);
      FUN_000176e0(*local_40,auStack_2c);
      if ((param_1 < 0) && (param_1 = FUN_0001afc4(auStack_2c), param_1 < 0)) {
        fputs((char *)(DAT_00014c20 + 0x14b2c),(FILE *)**(undefined4 **)(iVar2 + DAT_00014c1c));
      }
      else {
        iVar2 = FUN_0001b360(param_1);
        if (-1 < iVar2) {
          iVar3 = FUN_0001b7f4(iVar2,auStack_2c,local_30 & 0xffff,0,bVar6,auStack_32,25000);
          if (iVar3 < 0) {
            perror((char *)(DAT_00014c30 + 0x14bf4));
          }
          close(iVar2);
LAB_00014b54:
          if (local_24 == *piVar4) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        perror((char *)(DAT_00014c2c + 0x14bb8));
      }
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (iVar1 != 0x70) {
      if (iVar1 != 0x72) {
        puts((char *)(DAT_00014c24 + 0x14b54));
        goto LAB_00014b54;
      }
      bVar6 = *(char *)**(undefined4 **)(iVar2 + DAT_00014c28) != 'm';
      goto LAB_00014aac;
    }
    FUN_0001a988(**(undefined4 **)(iVar2 + DAT_00014c28),&local_30);
  } while( true );
}



/* ===== FUN_00014c34 @ 00014c34 size=224 ===== */

void FUN_00014c34(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *__s;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  local_18 = param_3;
  local_14[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_00014d18 + 0x14c70,DAT_00014d14 + 0x14fc4,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_00014d1c + 0x14c84));
    return;
  }
  FUN_000124f8(0,0,local_14,&local_18,DAT_00014d20 + 0x14ca4);
  if (param_1 < 0) {
    param_1 = FUN_0001afc4(0);
  }
  iVar1 = FUN_0001b360(param_1);
  if (iVar1 < 0) {
    __s = (char *)(DAT_00014d24 + 0x14cdc);
  }
  else {
    iVar2 = FUN_0001b410(iVar1,1,4,0,0);
    if (-1 < iVar2) {
      close(iVar1);
      return;
    }
    __s = (char *)(DAT_00014d28 + 0x14d08);
  }
  perror(__s);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00014d2c @ 00014d2c size=328 ===== */

void FUN_00014d2c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *local_128;
  undefined4 local_124 [2];
  undefined1 auStack_11c [8];
  char acStack_114 [248];
  int local_1c;
  
  iVar2 = DAT_00014e74 + 0x14d48;
  piVar3 = *(int **)(iVar2 + DAT_00014e78);
  local_1c = *piVar3;
  local_128 = param_3;
  local_124[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_00014e7c + 0x14d60,DAT_00014e80 + 0x150f8,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_00014e84 + 0x14d94));
LAB_00014d94:
    if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  FUN_000124f8(1,1,local_124,&local_128,DAT_00014e88 + 0x14dc0);
  FUN_000176e0(*local_128,auStack_11c);
  if ((param_1 < 0) && (param_1 = FUN_0001afc4(auStack_11c), param_1 < 0)) {
    fputs((char *)(DAT_00014e90 + 0x14e08),(FILE *)**(undefined4 **)(iVar2 + DAT_00014e8c));
  }
  else {
    iVar1 = FUN_0001b360(param_1);
    if (-1 < iVar1) {
      iVar2 = FUN_0001bebc(iVar1,auStack_11c,0xf8,acStack_114,25000);
      if (iVar2 == 0) {
        puts(acStack_114);
      }
      close(iVar1);
      goto LAB_00014d94;
    }
    perror((char *)(DAT_00014e94 + 0x14e30));
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00014e98 @ 00014e98 size=1192 ===== */

void FUN_00014e98(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  void *__ptr;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *__format;
  bool bVar8;
  undefined4 *local_1b0;
  undefined4 local_1ac [2];
  byte local_1a3;
  undefined2 local_1a2;
  ushort local_1a0 [3];
  byte local_19a;
  ushort local_198;
  undefined1 auStack_194 [8];
  undefined1 auStack_18c [28];
  char local_170;
  uint local_16c;
  undefined8 local_130;
  undefined1 auStack_128 [252];
  int local_2c;
  
  iVar5 = DAT_00015340 + 0x14eb8;
  piVar7 = *(int **)(iVar5 + DAT_00015344);
  local_2c = *piVar7;
  local_1a3 = 0;
  local_1b0 = param_3;
  local_1ac[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_00015348 + 0x14ed0,DAT_0001534c + 0x15280,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_00015350 + 0x14f04));
    goto LAB_00014f04;
  }
  FUN_000124f8(1,1,local_1ac,&local_1b0,DAT_00015354 + 0x14f30);
  FUN_000176e0(*local_1b0,auStack_194);
  if (((param_1 < 0) && (param_1 = FUN_0001ae94(0,DAT_00015358 + 0x14f68,auStack_194), param_1 < 0))
     && (param_1 = FUN_0001afc4(auStack_194), param_1 < 0)) {
    fputs((char *)(DAT_00015360 + 0x14f94),(FILE *)**(undefined4 **)(iVar5 + DAT_0001535c));
    goto LAB_00014f98;
  }
  iVar1 = FUN_0001b02c(param_1,auStack_18c);
  if (iVar1 < 0) {
    pcVar2 = (char *)(DAT_00015364 + 0x14fc0);
  }
  else {
    puts((char *)(DAT_00015368 + 0x14fd0));
    iVar1 = FUN_0001b360(param_1);
    if (-1 < iVar1) {
      pvVar3 = malloc(0x18);
      if (pvVar3 != (void *)0x0) {
        FUN_00012438(pvVar3,auStack_194);
        *(undefined1 *)((int)pvVar3 + 6) = 1;
        iVar5 = ioctl(iVar1,DAT_00015374,pvVar3);
        bVar8 = iVar5 < 0;
        if (bVar8) {
          iVar5 = FUN_0001b7f4(iVar1,auStack_194,local_16c & 0xcc18,0,bVar8,&local_1a2,25000);
          if (iVar5 < 0) {
            perror((char *)(DAT_00015378 + 0x1508c));
            free(pvVar3);
            goto LAB_00015004;
          }
          sleep(1);
        }
        else {
          local_1a2 = *(undefined2 *)((int)pvVar3 + 8);
        }
        free(pvVar3);
        printf((char *)(DAT_0001537c + 0x150c0),*local_1b0);
        pvVar3 = (void *)FUN_000175a8(auStack_194);
        if (pvVar3 != (void *)0x0) {
          FUN_0001761c(auStack_194,auStack_128);
          printf((char *)(DAT_00015380 + 0x150f0),pvVar3,auStack_128);
          free(pvVar3);
        }
        iVar5 = FUN_0001bebc(iVar1,auStack_194,0xf9,auStack_128,25000);
        if (iVar5 == 0) {
          printf((char *)(DAT_00015384 + 0x1512c),auStack_128);
        }
        iVar5 = FUN_0001bf74(iVar1,local_1a2,local_1a0,20000);
        if (iVar5 == 0) {
          __ptr = (void *)thunk_FUN_0001ac4c(local_19a);
          pvVar3 = __ptr;
          if (__ptr == (void *)0x0) {
            pvVar3 = (void *)(DAT_00015388 + 0x15164);
          }
          uVar4 = FUN_000179b4(local_1a0[0]);
          printf((char *)(DAT_0001538c + 0x15190),pvVar3,(uint)local_19a,(uint)local_198,uVar4,
                 (uint)local_1a0[0]);
          if (__ptr != (void *)0x0) {
            free(__ptr);
          }
        }
        local_130 = 0;
        FUN_0001c040(iVar1,local_1a2,&local_130,20000);
        if ((local_170 < '\0') && (local_130 < 0)) {
          FUN_0001c10c(iVar1,local_1a2,0,&local_1a3,&local_130,20000);
        }
        if (local_1a3 == 0) {
          iVar5 = DAT_00015390 + 0x15210;
        }
        else {
          iVar5 = DAT_000153a0 + 0x152cc;
        }
        __format = (char *)(DAT_00015398 + 0x1524c);
        printf((char *)(DAT_00015394 + 0x15234),iVar5,(uint)(byte)local_130,(uint)local_130._1_1_,
               (uint)local_130._2_1_,(uint)local_130._3_1_,(uint)local_130._4_1_,
               (uint)local_130._5_1_,(uint)local_130._6_1_,(uint)local_130._7_1_);
        pcVar2 = (char *)FUN_0001accc(&local_130,DAT_0001539c + 0x15270,0x3f);
        puts(pcVar2);
        free(pcVar2);
        for (uVar6 = 1; (int)uVar6 <= (int)(uint)local_1a3; uVar6 = uVar6 + 1) {
          iVar5 = FUN_0001c10c(iVar1,local_1a2,uVar6 & 0xff,0,&local_130,20000);
          if (-1 < iVar5) {
            printf(__format,uVar6,(uint)(byte)local_130,(uint)local_130._1_1_,(uint)local_130._2_1_,
                   (uint)local_130._3_1_,(uint)local_130._4_1_,(uint)local_130._5_1_,
                   (uint)local_130._6_1_,(uint)local_130._7_1_);
          }
        }
        if (bVar8) {
          usleep(10000);
          FUN_0001b8e4(iVar1,local_1a2,0x13,10000);
        }
        close(iVar1);
LAB_00014f04:
        if (local_2c == *piVar7) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      perror((char *)(DAT_00015370 + 0x15004));
LAB_00015004:
      close(iVar1);
      goto LAB_00014f98;
    }
    pcVar2 = (char *)(DAT_0001536c + 0x14fe8);
  }
  perror(pcVar2);
LAB_00014f98:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000153a4 @ 000153a4 size=660 ===== */

void FUN_000153a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined1 auStack_40 [20];
  int local_2c;
  
  uVar7 = 0;
  iVar9 = DAT_00015638 + 0x153c4;
  iVar10 = 8;
  iVar11 = 0;
  piVar4 = *(int **)(iVar9 + DAT_0001563c);
  local_48 = (void *)0x0;
  local_2c = *piVar4;
  local_44 = *(undefined2 *)(DAT_00015640 + 0x153f4);
  local_42 = *(undefined1 *)(DAT_00015640 + 0x153f6);
  iVar5 = DAT_00015644 + 0x157cc;
  iVar6 = DAT_00015648 + 0x1541c;
  local_50 = param_3;
  local_4c = param_2;
LAB_0001541c:
  iVar8 = 0;
  iVar1 = getopt_long(local_4c,local_50,iVar6,iVar5,0);
  if (iVar1 == -1) {
    FUN_000124f8(0,0,&local_4c,&local_50,DAT_0001564c + 0x15458);
    puts((char *)(DAT_00015650 + 0x1546c));
    iVar10 = FUN_0001b214(param_1,iVar10,iVar11,&local_44,&local_48,uVar7);
    if (iVar10 < 0) {
      perror((char *)(DAT_00015654 + 0x154a0));
LAB_0001557c:
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    pcVar12 = (char *)(DAT_00015674 + 0x15630);
    for (; iVar8 != iVar10; iVar8 = iVar8 + 1) {
      iVar11 = iVar8 * 0xe;
      FUN_000175cc((void *)((int)local_48 + iVar11),auStack_40);
      printf(pcVar12,auStack_40,(uint)*(ushort *)((int)local_48 + iVar11 + 0xc),
             (uint)*(byte *)((int)local_48 + iVar11 + 0xb),
             (uint)*(byte *)((int)local_48 + iVar11 + 10),
             (uint)*(byte *)((int)local_48 + iVar11 + 9));
    }
    free(local_48);
LAB_000155a8:
    if (local_2c != *piVar4) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  switch(iVar1) {
  case 0x66:
    uVar7 = 1;
    goto LAB_0001541c;
  case 0x67:
    break;
  case 0x68:
    break;
  case 0x69:
    puVar13 = *(undefined4 **)(iVar9 + DAT_00015658);
    uVar2 = strtoul((char *)*puVar13,(char **)0x0,0x10);
    pcVar12 = (char *)*puVar13;
    iVar1 = strcasecmp(pcVar12,(char *)(DAT_0001565c + 0x15538));
    uVar3 = DAT_00015660;
    if ((iVar1 != 0) &&
       (iVar1 = strcasecmp(pcVar12,(char *)(DAT_00015664 + 0x15554)), uVar3 = DAT_00015668,
       iVar1 != 0)) {
      uVar3 = uVar2;
    }
    if (0x3f < uVar3 - 0x9e8b00) {
      printf((char *)(DAT_0001566c + 0x1557c));
      goto LAB_0001557c;
    }
    local_44 = CONCAT11(0x8b,(char)uVar3);
    local_42 = 0x9e;
    goto LAB_0001541c;
  case 0x6a:
    break;
  case 0x6b:
    break;
  case 0x6c:
    iVar10 = atoi((char *)**(undefined4 **)(iVar9 + DAT_00015658));
    goto LAB_0001541c;
  case 0x6d:
    break;
  case 0x6e:
    goto LAB_000154f0;
  }
  puts((char *)(DAT_00015670 + 0x155a8));
  goto LAB_000155a8;
LAB_000154f0:
  iVar11 = atoi((char *)**(undefined4 **)(iVar9 + DAT_00015658));
  goto LAB_0001541c;
}



/* ===== FUN_00015678 @ 00015678 size=3576 ===== */

void FUN_00015678(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  void *pvVar10;
  size_t sVar11;
  void *pvVar12;
  uint uVar13;
  byte *pbVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  byte *pbVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  uint uVar26;
  char *__s;
  bool bVar27;
  bool bVar28;
  int local_1f0;
  undefined4 local_1d0;
  undefined4 local_1cc;
  short local_1c6;
  void *local_1c4;
  ushort local_1c0 [3];
  byte local_1ba;
  ushort local_1b8;
  undefined1 auStack_1b4 [32];
  uint local_194;
  undefined2 local_158;
  undefined1 local_156;
  undefined2 local_154;
  byte local_152;
  byte local_150;
  byte local_14f;
  byte local_14e;
  byte local_14d;
  byte local_14c;
  byte local_14b;
  byte local_14a;
  byte local_149;
  undefined1 auStack_148 [12];
  undefined1 auStack_13c [20];
  byte local_128 [248];
  undefined1 local_30;
  int local_2c;
  
  iVar20 = DAT_00016470 + 0x15698;
  iVar22 = 8;
  piVar15 = *(int **)(iVar20 + DAT_00016474);
  local_2c = *piVar15;
  local_158 = (undefined2)DAT_00016478;
  local_1c4 = (void *)0x0;
  bVar4 = false;
  bVar6 = false;
  uVar24 = 0;
  bVar5 = false;
  local_1f0 = 0;
  local_156 = 0x9e;
  iVar16 = DAT_0001647c + 0x15b08;
  iVar17 = DAT_00016480 + 0x156f8;
  local_1d0 = param_3;
  local_1cc = param_2;
LAB_000156f8:
  iVar7 = getopt_long(local_1cc,local_1d0,iVar17,iVar16,0);
  if (iVar7 == -1) goto code_r0x0001571c;
  if (iVar7 == 0x4f) {
    bVar4 = true;
    goto LAB_000156f8;
  }
  if (iVar7 < 0x50) {
    if (iVar7 == 0x43) {
      bVar5 = true;
      goto LAB_000156f8;
    }
    if (iVar7 == 0x49) {
      bVar6 = true;
      goto LAB_000156f8;
    }
    if (iVar7 == 0x41) {
      bVar4 = true;
      bVar6 = true;
      bVar5 = true;
      goto LAB_000156f8;
    }
  }
  else {
    if (iVar7 == 0x69) {
      puVar25 = *(undefined4 **)(iVar20 + DAT_00016490);
      uVar9 = strtoul((char *)*puVar25,(char **)0x0,0x10);
      pcVar8 = (char *)*puVar25;
      iVar7 = strcasecmp(pcVar8,(char *)(DAT_00016494 + 0x15840));
      uVar18 = DAT_000164a0;
      if (((iVar7 != 0) &&
          (iVar7 = strcasecmp(pcVar8,(char *)(DAT_00016498 + 0x15858)), uVar18 = DAT_000164a4,
          iVar7 != 0)) && (uVar18 = uVar9, 0x3f < uVar9 - 0x9e8b00)) {
        printf((char *)(DAT_0001649c + 0x15884),uVar9);
        goto LAB_00015884;
      }
      local_158 = (undefined2)uVar18;
      local_156 = (undefined1)(uVar18 >> 0x10);
      goto LAB_000156f8;
    }
    if (iVar7 < 0x6a) {
      if (iVar7 != 0x66) goto LAB_000157ac;
      uVar24 = 1;
      goto LAB_000156f8;
    }
    if (iVar7 == 0x6c) {
      iVar22 = atoi((char *)**(undefined4 **)(iVar20 + DAT_00016490));
      goto LAB_000156f8;
    }
    if (iVar7 == 0x6e) {
      local_1f0 = atoi((char *)**(undefined4 **)(iVar20 + DAT_00016490));
      goto LAB_000156f8;
    }
  }
LAB_000157ac:
  puts((char *)(DAT_0001648c + 0x157b8));
  goto LAB_000157b8;
code_r0x0001571c:
  FUN_000124f8(0,0,&local_1cc,&local_1d0,DAT_00016484 + 0x15734);
  if ((param_1 < 0) && (param_1 = FUN_0001afc4(0), param_1 < 0)) {
    pcVar8 = (char *)(DAT_00016488 + 0x15760);
  }
  else {
    iVar16 = FUN_0001b02c(param_1,auStack_1b4);
    if (iVar16 < 0) {
      pcVar8 = (char *)(DAT_000164a8 + 0x158ec);
    }
    else {
      puts((char *)(DAT_000164ac + 0x158f8));
      iVar22 = FUN_0001b214(param_1,iVar22,local_1f0,&local_158,&local_1c4,uVar24);
      if (-1 < iVar22) {
        iVar16 = FUN_0001b360(param_1);
        if (-1 < iVar16) {
          if ((bVar6 || bVar4) || bVar5) {
            putchar(10);
          }
          iVar17 = 0;
          pbVar21 = local_128;
          do {
            if (iVar17 == iVar22) {
              free(local_1c4);
              close(iVar16);
LAB_000157b8:
              if (local_2c == *piVar15) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            local_1c6 = 0;
            iVar20 = iVar17 * 0xe;
            if ((bVar6 || bVar4) || bVar5) {
              FUN_000175cc((void *)((int)local_1c4 + iVar20),auStack_13c);
              printf((char *)(DAT_000164c8 + 0x15aa8),auStack_13c,
                     (uint)*(byte *)((int)local_1c4 + iVar20 + 6),
                     (uint)*(ushort *)((int)local_1c4 + iVar20 + 0xc));
              if ((bVar4) &&
                 (pvVar12 = (void *)FUN_000175a8((void *)((int)local_1c4 + iVar20)),
                 pvVar12 != (void *)0x0)) {
                FUN_0001761c((void *)((int)local_1c4 + iVar20),auStack_148);
                printf((char *)(DAT_000164cc + 0x15af4),pvVar12,auStack_148);
                free(pvVar12);
              }
              pvVar12 = local_1c4;
              if ((bVar6) && (pvVar10 = malloc(0x18), pvVar10 != (void *)0x0)) {
                FUN_00012438(pvVar10,(void *)((int)pvVar12 + iVar20));
                uVar18 = DAT_000164f4;
                *(undefined1 *)((int)pvVar10 + 6) = 1;
                iVar7 = ioctl(iVar16,uVar18,pvVar10);
                if (iVar7 < 0) {
                  local_1c6 = 0;
                  bVar27 = bVar6;
                }
                else {
                  local_1c6 = *(short *)((int)pvVar10 + 8);
                  bVar27 = false;
                }
                free(pvVar10);
                if (!bVar27) goto LAB_00015b08;
                iVar7 = FUN_0001b7f4(iVar16,(void *)((int)local_1c4 + iVar20),local_194 & 0xcc18,
                                     *(ushort *)((int)local_1c4 + iVar20 + 0xc) | 0x8000,1,
                                     &local_1c6,25000);
                if (iVar7 < 0) {
                  bVar27 = false;
                  local_1c6 = 0;
                }
              }
              else {
LAB_00015b08:
                bVar27 = false;
              }
              pvVar12 = (void *)((int)local_1c4 + iVar20);
              iVar7 = FUN_0001bdcc(iVar16,pvVar12,*(undefined1 *)((int)pvVar12 + 6),
                                   *(ushort *)((int)pvVar12 + 0xc) | 0x8000,0xf9,local_128,
                                   DAT_000164bc);
              if (-1 < iVar7) {
                iVar7 = 0;
                pbVar14 = local_128;
                do {
                  if (*pbVar14 == 0) break;
                  bVar2 = *pbVar21;
                  iVar7 = iVar7 + 1;
                  bVar28 = 0x7e < bVar2;
                  if (bVar2 != 0x7f) {
                    bVar28 = 0x1e < bVar2;
                  }
                  if (!bVar28 || (bVar2 == 0x7f || bVar2 == 0x1f)) {
                    *pbVar21 = 0x2e;
                  }
                  pbVar14 = pbVar14 + 1;
                } while (iVar7 != 0xf8);
                local_30 = 0;
              }
              if (local_128[0] != 0) {
                printf((char *)(DAT_000164d0 + 0x15b70),local_128);
              }
              if (bVar5) {
                uVar3 = *(undefined2 *)((int)local_1c4 + iVar20 + 9);
                local_152 = *(byte *)((int)local_1c4 + iVar20 + 0xb);
                uVar26 = (uint)local_152;
                local_154._1_1_ = (byte)((ushort)uVar3 >> 8);
                uVar19 = (uint)local_154._1_1_;
                local_154._0_1_ = (byte)uVar3;
                bVar2 = (byte)local_154;
                uVar23 = (uint)(byte)local_154;
                local_154 = uVar3;
                printf((char *)(DAT_000164d4 + 0x15b90));
                uVar13 = uVar19 & 0x1f;
                if (uVar13 < 9) {
                  uVar1 = (uint)(bVar2 >> 2);
                  uVar24 = *(undefined4 *)(DAT_000164f8 + uVar13 * 4 + 0x15fa8);
                  switch(uVar13) {
                  case 1:
                    switch(uVar1) {
                    case 0:
                      break;
                    case 1:
                      break;
                    case 2:
                      break;
                    case 3:
                      break;
                    case 4:
                      break;
                    case 5:
                      break;
                    case 6:
                    }
                    break;
                  case 2:
                    switch(uVar1) {
                    case 0:
                      break;
                    case 1:
                      break;
                    case 2:
                      break;
                    case 3:
                      break;
                    case 4:
                      break;
                    case 5:
                      break;
                    case 6:
                    }
                    break;
                  case 3:
                    if (uVar1 != 0) {
                      switch((int)uVar1 >> 3) {
                      case 1:
                        break;
                      case 2:
                        break;
                      case 3:
                        break;
                      case 4:
                        break;
                      case 5:
                        break;
                      case 6:
                        break;
                      case 7:
                      }
                    }
                    break;
                  case 4:
                    switch(uVar1) {
                    case 0:
                      break;
                    case 1:
                      break;
                    case 2:
                      break;
                    case 3:
                      break;
                    case 4:
                      break;
                    case 5:
                      break;
                    case 6:
                      break;
                    case 7:
                      break;
                    case 8:
                      break;
                    case 9:
                      break;
                    case 10:
                      break;
                    case 0xb:
                      break;
                    case 0xc:
                      break;
                    case 0xd:
                      break;
                    case 0xe:
                      break;
                    case 0xf:
                      break;
                    case 0x10:
                      break;
                    case 0x11:
                      break;
                    case 0x12:
                    }
                    break;
                  case 5:
                    uVar13 = uVar1 & 0x30;
                    if (uVar13 == 0x20) {
                      pcVar8 = (char *)(DAT_000165a8 + 0x161b4);
                      iVar20 = DAT_000165ac + 0x161b8;
LAB_00016194:
                      strncpy((char *)(iVar20 + 4),pcVar8,0x30);
                    }
                    else {
                      if (uVar13 == 0x30) {
                        pcVar8 = (char *)(DAT_000165b0 + 0x161c8);
                        iVar20 = DAT_000165b4 + 0x161cc;
                        goto LAB_00016194;
                      }
                      if (uVar13 == 0x10) {
                        pcVar8 = (char *)(DAT_000165a0 + 0x16194);
                        iVar20 = DAT_000165a4 + 0x16198;
                        goto LAB_00016194;
                      }
                      *(undefined1 *)(DAT_00016594 + 0x16130) = 0;
                    }
                    if ((bVar2 >> 2 & 0xf) != 0) {
                      if (*(char *)(DAT_00016598 + 0x16144) != '\0') {
                        strcat((char *)(DAT_00016598 + 0x16144),(char *)(DAT_0001659c + 0x16158));
                      }
                      switch(uVar1 & 0xf) {
                      case 1:
                        __s = (char *)(DAT_000165b8 + 0x161dc);
                        sVar11 = strlen(__s);
                        sVar11 = 0x2f - sVar11;
                        pcVar8 = (char *)(DAT_000165bc + 0x161f0);
                        break;
                      case 2:
                        __s = (char *)(DAT_000165c4 + 0x16224);
                        sVar11 = strlen(__s);
                        sVar11 = 0x2f - sVar11;
                        pcVar8 = (char *)(DAT_000165c8 + 0x16238);
                        break;
                      case 3:
                        __s = (char *)(DAT_000165cc + 0x16248);
                        sVar11 = strlen(__s);
                        sVar11 = 0x2f - sVar11;
                        pcVar8 = (char *)(DAT_000165d0 + 0x1625c);
                        break;
                      case 4:
                        __s = (char *)(DAT_000165d4 + 0x1626c);
                        sVar11 = strlen(__s);
                        sVar11 = 0x2f - sVar11;
                        pcVar8 = (char *)(DAT_000165d8 + 0x16280);
                        break;
                      case 5:
                        __s = (char *)(DAT_000165dc + 0x16290);
                        sVar11 = strlen(__s);
                        sVar11 = 0x2f - sVar11;
                        pcVar8 = (char *)(DAT_000165e0 + 0x162a4);
                        break;
                      case 6:
                        __s = (char *)(DAT_000165e4 + 0x162b4);
                        sVar11 = strlen(__s);
                        sVar11 = 0x2f - sVar11;
                        pcVar8 = (char *)(DAT_000165e8 + 0x162c8);
                        break;
                      default:
                        __s = (char *)(DAT_000165ec + 0x162d8);
                        sVar11 = strlen(__s);
                        sVar11 = 0x2f - sVar11;
                        pcVar8 = (char *)(DAT_000165f0 + 0x162ec);
                      }
                      strncat(__s,pcVar8,sVar11);
                    }
                    break;
                  case 6:
                    break;
                  case 7:
                    switch(uVar1) {
                    case 1:
                      break;
                    case 2:
                      break;
                    case 3:
                      break;
                    case 4:
                      break;
                    case 5:
                    }
                    break;
                  case 8:
                    switch(uVar1) {
                    case 1:
                      break;
                    case 2:
                      break;
                    case 3:
                      break;
                    case 4:
                      break;
                    case 5:
                    }
                  }
                  printf((char *)(DAT_00016500 + 0x15e94),uVar24);
                }
                else {
                  printf((char *)(DAT_000164d8 + 0x15bc4));
                }
                printf((char *)(DAT_000164dc + 0x15bdc),uVar26,uVar19,uVar23);
              }
              if ((bVar6) && (local_1c6 != 0)) {
                iVar20 = FUN_0001bf74(iVar16,local_1c6,local_1c0,20000);
                if (iVar20 == 0) {
                  pvVar10 = (void *)thunk_FUN_0001ac4c(local_1ba);
                  uVar24 = FUN_000179b4(local_1c0[0]);
                  printf((char *)(DAT_000164e0 + 0x15c38),uVar24,(uint)local_1c0[0]);
                  pvVar12 = pvVar10;
                  if (pvVar10 == (void *)0x0) {
                    pvVar12 = (void *)(DAT_000164e4 + 0x15c4c);
                  }
                  printf((char *)(DAT_000164e8 + 0x15c5c),pvVar12,(uint)local_1ba,(uint)local_1b8);
                  if (pvVar10 != (void *)0x0) {
                    free(pvVar10);
                  }
                }
                iVar20 = FUN_0001c040(iVar16,local_1c6,&local_150,20000);
                if (iVar20 == 0) {
                  pcVar8 = (char *)FUN_0001accc(&local_150,DAT_000164ec + 0x15ca0,0x3f);
                  printf((char *)(DAT_000164f0 + 0x15cd4),(uint)local_150,(uint)local_14f,
                         (uint)local_14e,(uint)local_14d,(uint)local_14c,(uint)local_14b,
                         (uint)local_14a,(uint)local_149);
                  puts(pcVar8);
                  free(pcVar8);
                }
                if (bVar27) {
                  usleep(10000);
                  FUN_0001b8e4(iVar16,local_1c6,0x13,10000);
                }
              }
              putchar(10);
            }
            else {
              FUN_000175cc((void *)((int)local_1c4 + iVar20),auStack_13c);
              pvVar12 = (void *)((int)local_1c4 + iVar20);
              iVar20 = FUN_0001bdcc(iVar16,pvVar12,*(undefined1 *)((int)pvVar12 + 6),
                                    *(ushort *)((int)pvVar12 + 0xc) | 0x8000,0xf9,local_128,
                                    DAT_000164bc);
              if (iVar20 < 0) {
                strcpy((char *)local_128,(char *)(DAT_000164c0 + 0x15a30));
              }
              iVar20 = 0;
              pbVar14 = local_128;
              do {
                if (*pbVar14 == 0) break;
                bVar2 = *pbVar21;
                iVar20 = iVar20 + 1;
                bVar27 = 0x7e < bVar2;
                if (bVar2 != 0x7f) {
                  bVar27 = 0x1e < bVar2;
                }
                if (!bVar27 || (bVar2 == 0x7f || bVar2 == 0x1f)) {
                  *pbVar21 = 0x2e;
                }
                pbVar14 = pbVar14 + 1;
              } while (iVar20 != 0xf8);
              local_30 = 0;
              printf((char *)(DAT_000164c4 + 0x15a7c),auStack_13c,local_128);
            }
            iVar17 = iVar17 + 1;
            pbVar21 = pbVar21 + 1;
          } while( true );
        }
        perror((char *)(DAT_000164b4 + 0x15948));
        free(local_1c4);
        goto LAB_00015884;
      }
      pcVar8 = (char *)(DAT_000164b0 + 0x1592c);
    }
  }
  perror(pcVar8);
LAB_00015884:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00016650 @ 00016650 size=156 ===== */

void FUN_00016650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  local_18 = param_3;
  local_14[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_000166f0 + 0x1668c,DAT_000166ec + 0x16b50,0);
  if (iVar1 == -1) {
    FUN_000124f8(0,0,local_14,&local_18,DAT_000166f8 + 0x166c0);
    puts((char *)(DAT_000166fc + 0x166d4));
    FUN_0001ae94(0,DAT_00016700 + 0x166e8,param_1);
  }
  else {
    puts((char *)(DAT_000166f4 + 0x166a0));
  }
  return;
}



/* ===== FUN_00016704 @ 00016704 size=148 ===== */

void FUN_00016704(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_3;
  local_c = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_0001679c + 0x16738,DAT_00016798 + 0x16c1c,0,param_2);
  if (iVar1 == -1) {
    FUN_000124f8(0,0,&local_c,&local_10,DAT_000167a4 + 0x1676c);
    puts((char *)(DAT_000167a8 + 0x16780));
    FUN_0001ae94(0,DAT_000167ac + 0x16794,0);
  }
  else {
    puts((char *)(DAT_000167a0 + 0x1674c));
  }
  return;
}



/* ===== FUN_0001697c @ 0001697c size=140 ===== */

void FUN_0001697c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *__format;
  char *__format_00;
  bool bVar4;
  
  iVar1 = 1;
  iVar3 = DAT_00016a08 + 0x169a4;
  __format = (char *)(DAT_00016a0c + 0x169a8);
  __format_00 = (char *)(DAT_00016a10 + 0x169ac);
  for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
    if (iVar1 == 1) {
      printf(__format,iVar3);
    }
    printf(__format_00,(uint)*(byte *)(param_1 + iVar2));
    if (iVar1 == 0x14) {
      iVar1 = 0;
      putchar(10);
    }
    iVar1 = iVar1 + 1;
  }
  bVar4 = iVar1 == 1;
  iVar2 = iVar1 + -1;
  if (!bVar4) {
    iVar2 = param_2;
  }
  if ((bVar4 || param_2 == 0) || iVar2 < 0 != (bVar4 && SBORROW4(iVar1,1))) {
    return;
  }
  putchar(10);
  return;
}



/* ===== FUN_00016a14 @ 00016a14 size=644 ===== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00016a14(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ssize_t sVar8;
  int *piVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined4 *local_148;
  int local_144 [5];
  undefined1 uStack_130;
  byte local_12f;
  byte local_12e;
  undefined1 auStack_12d [257];
  int local_2c;
  
  iVar12 = DAT_00016c98 + 0x16a34;
  piVar9 = *(int **)(iVar12 + DAT_00016c9c);
  local_2c = *piVar9;
  local_148 = param_3;
  local_144[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_00016ca0 + 0x16a50,DAT_00016ca4 + 0x16f70,0);
  if (iVar1 == -1) {
    FUN_000124f8(2,0xffffffff,local_144,&local_148,DAT_00016cac + 0x16ab0);
    if (param_1 < 0) {
      param_1 = FUN_0001afc4(0);
    }
    piVar3 = __errno_location();
    *piVar3 = 0;
    uVar4 = strtol((char *)*local_148,(char **)0x0,0x10);
    uVar4 = uVar4 & 0xff;
    uVar5 = strtol((char *)local_148[1],(char **)0x0,0x10);
    if (*piVar3 != 0x22) {
      bVar14 = 0x3e < uVar4;
      if (uVar4 < 0x40) {
        bVar14 = 0x3ff < (uVar5 & 0xffff);
      }
      if (!bVar14) {
        puVar10 = &uStack_130;
        for (iVar1 = 2; uVar11 = iVar1 - 2, iVar1 < local_144[0]; iVar1 = iVar1 + 1) {
          if (iVar1 == 0x106) {
            uVar11 = 0x104;
            break;
          }
          lVar6 = strtol((char *)local_148[iVar1],(char **)0x0,0x10);
          *puVar10 = (char)lVar6;
          puVar10 = puVar10 + 1;
        }
        iVar1 = FUN_0001b360(param_1);
        if (iVar1 < 0) {
          pcVar2 = (char *)(DAT_00016cb4 + 0x16ba0);
LAB_00016b9c:
          perror(pcVar2);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        local_144[1] = 0x10;
        local_144[4] = 0;
        local_144[2] = -1;
        local_144[3] = -1;
        iVar7 = setsockopt(iVar1,0,2,local_144 + 1,0x10);
        if (iVar7 < 0) {
          pcVar2 = (char *)(DAT_00016cb8 + 0x16be0);
          goto LAB_00016b9c;
        }
        printf((char *)(DAT_00016cbc + 0x16bf8),uVar4,uVar5 & 0xffff,uVar11);
        FUN_0001697c(&uStack_130,uVar11);
        puVar13 = *(undefined4 **)(iVar12 + DAT_00016cc0);
        fflush((FILE *)*puVar13);
        iVar12 = FUN_0001b410(iVar1,uVar4,uVar5 & 0xffff,uVar11 & 0xff,&uStack_130);
        if (iVar12 < 0) {
          pcVar2 = (char *)(DAT_00016cc4 + 0x16c3c);
          goto LAB_00016b9c;
        }
        sVar8 = read(iVar1,&uStack_130,0x104);
        if (sVar8 < 0) {
          pcVar2 = (char *)(DAT_00016cc8 + 0x16c5c);
          goto LAB_00016b9c;
        }
        printf((char *)(DAT_00016ccc + 0x16c70),(uint)local_12f,(uint)local_12e);
        FUN_0001697c(auStack_12d,sVar8 + -3);
        fflush((FILE *)*puVar13);
        close(iVar1);
        goto LAB_00016a80;
      }
    }
    pcVar2 = (char *)(DAT_00016cb0 + 0x16b40);
  }
  else {
    pcVar2 = (char *)(DAT_00016ca8 + 0x16a80);
  }
  puts(pcVar2);
LAB_00016a80:
  if (local_2c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00016cd0 @ 00016cd0 size=180 ===== */

undefined4 FUN_00016cd0(int param_1,undefined2 param_2,void *param_3)

{
  ushort uVar1;
  undefined2 *__ptr;
  char *__s;
  int iVar2;
  int iVar3;
  
  __ptr = malloc(0xa4);
  if (__ptr == (undefined2 *)0x0) {
    __s = (char *)(DAT_00016d84 + 0x16cfc);
  }
  else {
    *__ptr = param_2;
    __ptr[1] = 10;
    iVar2 = ioctl(param_1,DAT_00016d88,__ptr);
    if (iVar2 == 0) {
      uVar1 = __ptr[1];
      iVar2 = 0;
      while( true ) {
        if ((int)(uint)uVar1 <= iVar2) {
          free(__ptr);
          return 0;
        }
        iVar3 = memcmp(param_3,__ptr + iVar2 * 8 + 3,6);
        if (iVar3 == 0) break;
        iVar2 = iVar2 + 1;
      }
      free(__ptr);
      return 1;
    }
    __s = (char *)(DAT_00016d8c + 0x16d40);
  }
  perror(__s);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00016d90 @ 00016d90 size=720 ===== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00016d90(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  ssize_t sVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  socklen_t local_1a4 [5];
  undefined1 auStack_190 [16];
  _union_1051 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined1 auStack_16c [20];
  char local_158 [4];
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  undefined2 local_14a;
  undefined2 uStack_148;
  undefined4 uStack_146;
  undefined4 uStack_142;
  undefined4 uStack_13e;
  undefined1 auStack_138 [3];
  char local_135;
  undefined1 auStack_131 [6];
  byte local_12b;
  byte local_12a [246];
  int local_34;
  
  iVar10 = DAT_00017060 + 0x16db0;
  piVar9 = *(int **)(iVar10 + DAT_00017064);
  local_34 = *piVar9;
  local_1a4[0] = 0x10;
  iVar2 = getsockopt(param_1,0,2,auStack_190,local_1a4);
  if (iVar2 < 0) {
    pcVar3 = (char *)(DAT_00017068 + 0x16df8);
  }
  else {
    local_1a4[1] = 0x10;
    local_1a4[2] = 0;
    local_1a4[4] = 0;
    local_1a4[3] = 0x40000000;
    iVar2 = setsockopt(param_1,0,2,local_1a4 + 1,0x10);
    if (-1 < iVar2) {
      local_17c = 1;
      pcVar3 = (char *)(DAT_00017070 + 0x16e74);
      local_180.sa_handler = (__sighandler_t)(DAT_00017074 + 0x16e7c);
      local_178 = 0;
      uStack_174 = 0;
      uStack_170 = 0;
      sigaction(2,(sigaction *)&local_180,(sigaction *)0x0);
LAB_00016e90:
      do {
        sVar4 = read(param_1,auStack_138,0x104);
        if (-1 < sVar4) {
          if (local_135 != '\x02') {
            sVar4 = sVar4 + -3;
            break;
          }
          if (param_2 == 0) {
LAB_00016f30:
            uStack_154 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_150 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_13e = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            local_158[0] = '\0';
            local_158[1] = '\0';
            local_158[2] = '\0';
            local_158[3] = '\0';
            uStack_14c = (undefined2)uStack_13e;
            local_14a = 0;
            uStack_148 = 0;
            uStack_146 = uStack_154;
            uStack_142 = uStack_150;
            FUN_000175cc(auStack_131,auStack_16c);
            uVar7 = 0;
            pbVar6 = local_12a;
            while( true ) {
              if (((local_12b <= uVar7) || (uVar8 = (uint)*pbVar6, uVar8 == 0)) ||
                 ((uint)local_12b < uVar8 + uVar7)) goto LAB_00016f60;
              if (pbVar6[1] - 8 < 2) break;
              uVar7 = uVar8 + uVar7 + 1;
              pbVar6 = pbVar6 + uVar8 + 1;
            }
            if ((int)(uVar8 - 1) < 0x1e) {
              memcpy(local_158,pbVar6 + 2,uVar8 - 1);
              goto LAB_00017030;
            }
LAB_00016f60:
            strcpy(local_158,(char *)(DAT_0001707c + 0x16f70));
LAB_00017030:
            printf(pcVar3,auStack_16c,local_158);
            goto LAB_00016e90;
          }
          uVar7 = 0;
          while( true ) {
            if (((local_12b <= uVar7) || (local_12a[uVar7] == 0)) ||
               (uVar8 = local_12a[uVar7] + uVar7, local_12b < uVar8)) goto LAB_00016e90;
            if (local_12a[uVar7 + 1] == 1) break;
            uVar7 = uVar8 + 1;
          }
          if (param_2 == 0x67) {
            bVar1 = local_12a[uVar7 + 2] & 3;
          }
          else {
            if (param_2 != 0x6c) {
              fputs((char *)(DAT_00017084 + 0x16fd4),
                    (FILE *)**(undefined4 **)(iVar10 + DAT_00017080));
              goto LAB_00016e90;
            }
            bVar1 = local_12a[uVar7 + 2] & 1;
          }
          if (bVar1 != 0) goto LAB_00016f30;
          goto LAB_00016e90;
        }
        piVar5 = __errno_location();
        if (*piVar5 == 4) {
          if (*(int *)(DAT_00017078 + 0x16ee4) == 2) {
            sVar4 = 0;
            break;
          }
          goto LAB_00016e90;
        }
      } while (*piVar5 == 0xb);
      setsockopt(param_1,0,2,auStack_190,0x10);
      iVar2 = sVar4 >> 0x1f;
      goto LAB_00016dfc;
    }
    pcVar3 = (char *)(DAT_0001706c + 0x16e54);
  }
  puts(pcVar3);
  iVar2 = -1;
LAB_00016dfc:
  if (local_34 != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* ===== FUN_000172d4 @ 000172d4 size=660 ===== */

void FUN_000172d4(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  char *__s;
  void *__ptr;
  uint uVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  uint in_fpscr;
  undefined4 *local_50;
  int local_4c [2];
  ushort local_42;
  undefined4 local_40;
  undefined1 auStack_3c [8];
  undefined4 local_34;
  undefined2 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined4 local_24;
  undefined2 local_20;
  int local_1c;
  
  iVar5 = DAT_00017568 + 0x172f4;
  piVar4 = *(int **)(iVar5 + DAT_0001756c);
  local_1c = *piVar4;
  local_50 = param_3;
  local_4c[0] = param_2;
  iVar1 = getopt_long(param_2,param_3,DAT_00017570 + 0x1730c,DAT_00017574 + 0x178bc,0);
  if (iVar1 != -1) {
    puts((char *)(DAT_00017578 + 0x1733c));
    goto LAB_0001733c;
  }
  FUN_000124f8(0,2,local_4c,&local_50,DAT_0001757c + 0x17368);
  if (local_4c[0] < 1) {
    local_34 = 0;
    local_30 = 0;
    FUN_00012438(auStack_3c);
  }
  else {
    FUN_000176e0(*local_50,auStack_3c);
  }
  if (param_1 < 0) {
    local_2c = 0;
    local_28 = 0;
    iVar1 = memcmp(auStack_3c,&local_2c,6);
    if (((iVar1 != 0) || (param_1 = FUN_0001afc4(), param_1 < 0)) &&
       (param_1 = FUN_0001ae94(0,DAT_00017580 + 0x173d0,auStack_3c), param_1 < 0)) {
      fputs((char *)(DAT_00017588 + 0x173ec),(FILE *)**(undefined4 **)(iVar5 + DAT_00017584));
      goto LAB_000173f0;
    }
  }
  iVar1 = FUN_0001b360(param_1);
  if (iVar1 < 0) {
    __s = (char *)(DAT_0001758c + 0x17438);
  }
  else {
    local_24 = 0;
    local_20 = 0;
    iVar5 = memcmp(auStack_3c,&local_24,6);
    if (iVar5 == 0) {
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      __ptr = malloc(0x18);
      if (__ptr == (void *)0x0) {
        __s = (char *)(DAT_00017590 + 0x17478);
        goto LAB_00017434;
      }
      uVar2 = 1;
      FUN_00012438(__ptr,auStack_3c);
      *(undefined1 *)((int)__ptr + 6) = 1;
      iVar5 = ioctl(iVar1,DAT_00017594,__ptr);
      if (iVar5 < 0) {
        perror((char *)(DAT_00017598 + 0x174ac));
        free(__ptr);
        goto LAB_000173f0;
      }
      uVar3 = *(undefined2 *)((int)__ptr + 8);
      if (1 < local_4c[0]) {
        uVar2 = atoi((char *)local_50[1]);
        uVar2 = uVar2 & 0xff;
      }
      free(__ptr);
    }
    iVar5 = FUN_0001e008(iVar1,uVar3,uVar2,&local_40,&local_42,1000);
    if (-1 < iVar5) {
      printf((char *)(DAT_000175a0 + 0x17530),local_40);
      VectorUnsignedToFloat((uint)local_42,(byte)(in_fpscr >> 0x16) & 3);
      printf((char *)(DAT_000175a4 + 0x17548));
      close(iVar1);
LAB_0001733c:
      if (local_1c == *piVar4) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __s = (char *)(DAT_0001759c + 0x17518);
  }
LAB_00017434:
  perror(__s);
LAB_000173f0:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000175a8 @ 000175a8 size=8 ===== */

undefined4 FUN_000175a8(void)

{
  return 0;
}



/* ===== FUN_000175cc @ 000175cc size=76 ===== */

undefined4 FUN_000175cc(byte *param_1,char *param_2)

{
  sprintf(param_2,(char *)(DAT_00017618 + 0x175f0),(uint)param_1[5],(uint)param_1[4],
          (uint)param_1[3],(uint)param_1[2],(uint)param_1[1],(uint)*param_1);
  return 0x11;
}



/* ===== FUN_0001761c @ 0001761c size=52 ===== */

undefined4 FUN_0001761c(int param_1,char *param_2,undefined4 param_3)

{
  sprintf(param_2,(char *)(DAT_00017650 + 0x1763c),(uint)*(byte *)(param_1 + 5),
          (uint)*(byte *)(param_1 + 4),(uint)*(byte *)(param_1 + 3),param_2,param_3);
  return 8;
}



/* ===== FUN_00017654 @ 00017654 size=132 ===== */

undefined4 FUN_00017654(byte *param_1)

{
  byte *pbVar1;
  size_t sVar2;
  int iVar3;
  
  iVar3 = DAT_000176d8 + 0x17668;
  if ((param_1 != (byte *)0x0) && (sVar2 = strlen((char *)param_1), sVar2 == 0x11)) {
    iVar3 = **(int **)(iVar3 + DAT_000176dc);
    do {
      if (*param_1 == 0) {
        return 0;
      }
      if ((*(ushort *)(iVar3 + (uint)*param_1 * 2) & 0x10) == 0) {
        return 0xffffffff;
      }
      if ((*(ushort *)(iVar3 + (uint)param_1[1] * 2) & 0x10) == 0) {
        return 0xffffffff;
      }
      pbVar1 = param_1 + 2;
      if (*pbVar1 == 0) {
        return 0;
      }
      param_1 = param_1 + 3;
    } while (*pbVar1 == 0x3a);
  }
  return 0xffffffff;
}



/* ===== FUN_000176e0 @ 000176e0 size=92 ===== */

undefined4 FUN_000176e0(char *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  char *__nptr;
  char *pcVar4;
  
  iVar1 = FUN_00017654();
  if (iVar1 < 0) {
    *param_2 = 0;
    *(undefined2 *)(param_2 + 1) = 0;
    return 0xffffffff;
  }
  puVar3 = (undefined1 *)((int)param_2 + 5);
  __nptr = param_1;
  do {
    pcVar4 = __nptr + 3;
    lVar2 = strtol(__nptr,(char **)0x0,0x10);
    *puVar3 = (char)lVar2;
    puVar3 = puVar3 + -1;
    __nptr = pcVar4;
  } while (param_1 + 0x12 != pcVar4);
  return 0;
}



/* ===== <EXTERNAL>::malloc @ 000178b0 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00033f2c)(__size);
  return pvVar1;
}



/* ===== FUN_000178b4 @ 000178b4 size=92 ===== */

char * FUN_000178b4(byte *param_1)

{
  char *__s;
  
  __s = malloc(0x12);
  if (__s != (char *)0x0) {
    sprintf(__s,(char *)(DAT_00017910 + 0x178f4),(uint)*param_1,(uint)param_1[1],(uint)param_1[2],
            (uint)param_1[3],(uint)param_1[4],(uint)param_1[5]);
  }
  return __s;
}



/* ===== <EXTERNAL>::free @ 0001798c size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00033fc4)(__ptr);
  return;
}



/* ===== FUN_000179b4 @ 000179b4 size=9000 ===== */

code * FUN_000179b4(int param_1)

{
  if (param_1 == 0xb2) {
    return (code *)(DAT_00018920 + 0x18fe8);
  }
  if (0xb2 < param_1) {
    if (param_1 == 0x10b) {
      return (code *)(DAT_0001a078 + 0x1984c);
    }
    if (0x10b < param_1) {
      if (param_1 == 0x138) {
        return (code *)(DAT_0001a1dc + 0x19c78);
      }
      if (0x138 < param_1) {
        if (param_1 == 0x14e) {
          return (code *)(DAT_0001a290 + 0x19e94);
        }
        if (0x14e < param_1) {
          if (param_1 == 0x159) {
            return (code *)(DAT_0001a2e8 + 0x19f9c);
          }
          if (0x159 < param_1) {
            if (param_1 == 0x15f) {
              return (code *)(DAT_0001a314 + 0x1a394);
            }
            if (0x15f < param_1) {
              if (param_1 == 0x162) {
                return (code *)(DAT_0001a32c + 0x1a3dc);
              }
              if (0x162 < param_1) {
                if (param_1 == 0x163) {
                  return (code *)(DAT_0001a338 + 0x1a400);
                }
                if (param_1 != 0xffff) {
                  return (code *)(DAT_0001891c + 0x18fdc);
                }
                return FUN_0001a40c + DAT_0001a33c;
              }
              if (param_1 == 0x160) {
                return (code *)(DAT_0001a330 + 0x1a3e8);
              }
              if (param_1 != 0x161) {
                return (code *)(DAT_00018918 + 0x18fb8);
              }
              return (code *)(DAT_0001a334 + 0x1a3f4);
            }
            if (param_1 == 0x15c) {
              return (code *)(DAT_0001a318 + 0x1a3a0);
            }
            if (0x15c < param_1) {
              if (param_1 == 0x15d) {
                return (code *)(DAT_0001a324 + 0x1a3c4);
              }
              if (param_1 != 0x15e) {
                return (code *)(DAT_00018914 + 0x18f88);
              }
              return (code *)(DAT_0001a328 + 0x1a3d0);
            }
            if (param_1 == 0x15a) {
              return (code *)(DAT_0001a31c + 0x1a3ac);
            }
            if (param_1 != 0x15b) {
              return (code *)(DAT_00018910 + 0x18f64);
            }
            return (code *)(DAT_0001a320 + 0x1a3b8);
          }
          if (param_1 == 0x153) {
            return (code *)(DAT_0001a2ec + 0x19fa8);
          }
          if (0x153 < param_1) {
            if (param_1 == 0x156) {
              return (code *)(DAT_0001a300 + 0x1a358);
            }
            if (0x156 < param_1) {
              if (param_1 == 0x157) {
                return (code *)(DAT_0001a30c + 0x1a37c);
              }
              if (param_1 != 0x158) {
                return (code *)(DAT_0001890c + 0x18f20);
              }
              return (code *)(DAT_0001a310 + 0x1a388);
            }
            if (param_1 == 0x154) {
              return (code *)(DAT_0001a304 + 0x1a364);
            }
            if (param_1 != 0x155) {
              return (code *)(DAT_00018908 + 0x18f00);
            }
            return (code *)(DAT_0001a308 + 0x1a370);
          }
          if (param_1 == 0x150) {
            return (code *)(DAT_0001a2f0 + 0x19fb4);
          }
          if (param_1 < 0x150) {
            return (code *)(DAT_0001a2f4 + 0x19fc0);
          }
          if (param_1 == 0x151) {
            return (code *)((int)&DAT_00019fcc + DAT_0001a2f8);
          }
          if (param_1 != 0x152) {
            return (code *)(DAT_00018904 + 0x18ed0);
          }
          return (code *)(DAT_0001a2fc + 0x1a34c);
        }
        if (param_1 == 0x143) {
          return (code *)(DAT_0001a294 + 0x19ea0);
        }
        if (0x143 < param_1) {
          if (param_1 == 0x148) {
            return (code *)(DAT_0001a2c0 + 0x19f24);
          }
          if (0x148 < param_1) {
            if (param_1 == 0x14b) {
              return (code *)(DAT_0001a2d4 + 0x19f60);
            }
            if (0x14b < param_1) {
              if (param_1 == 0x14c) {
                return (code *)(DAT_0001a2e0 + 0x19f84);
              }
              if (param_1 != 0x14d) {
                return (code *)(DAT_00018900 + 0x18e7c);
              }
              return (code *)(DAT_0001a2e4 + 0x19f90);
            }
            if (param_1 == 0x149) {
              return (code *)(DAT_0001a2d8 + 0x19f6c);
            }
            if (param_1 != 0x14a) {
              return (code *)(DAT_000188fc + 0x18e60);
            }
            return (code *)(DAT_0001a2dc + 0x19f78);
          }
          if (param_1 == 0x145) {
            return (code *)(DAT_0001a2c4 + 0x19f30);
          }
          if (param_1 < 0x145) {
            return (code *)(DAT_0001a2c8 + 0x19f3c);
          }
          if (param_1 == 0x146) {
            return (code *)(DAT_0001a2cc + 0x19f48);
          }
          if (param_1 != 0x147) {
            return (code *)(DAT_000188f8 + 0x18e28);
          }
          return (code *)(DAT_0001a2d0 + 0x19f54);
        }
        if (param_1 == 0x13d) {
          return (code *)(DAT_0001a298 + 0x19eac);
        }
        if (0x13d < param_1) {
          if (param_1 == 0x140) {
            return (code *)(DAT_0001a2ac + 0x19ee8);
          }
          if (0x140 < param_1) {
            if (param_1 == 0x141) {
              return (code *)(DAT_0001a2b8 + 0x19f0c);
            }
            if (param_1 != 0x142) {
              return (code *)(DAT_000188f4 + 0x18de4);
            }
            return (code *)(DAT_0001a2bc + 0x19f18);
          }
          if (param_1 == 0x13e) {
            return (code *)(DAT_0001a2b0 + 0x19ef4);
          }
          if (param_1 != 0x13f) {
            return (code *)(DAT_000188f0 + 0x18dc0);
          }
          return (code *)(DAT_0001a2b4 + 0x19f00);
        }
        if (param_1 == 0x13a) {
          return (code *)(DAT_0001a29c + 0x19eb8);
        }
        if (param_1 < 0x13a) {
          return (code *)(DAT_0001a2a0 + 0x19ec4);
        }
        if (param_1 == 0x13b) {
          return (code *)(DAT_0001a2a4 + 0x19ed0);
        }
        if (param_1 != 0x13c) {
          return (code *)(DAT_000188ec + 0x18d90);
        }
        return (code *)(DAT_0001a2a8 + 0x19edc);
      }
      if (param_1 == 0x121) {
        return (code *)(DAT_0001a1e0 + 0x19c84);
      }
      if (0x121 < param_1) {
        if (param_1 == 300) {
          return (code *)(DAT_0001a238 + 0x19d8c);
        }
        if (300 < param_1) {
          if (param_1 == 0x132) {
            return (code *)(DAT_0001a264 + 0x19e10);
          }
          if (0x132 < param_1) {
            if (param_1 == 0x135) {
              return (code *)(DAT_0001a27c + 0x19e58);
            }
            if (0x135 < param_1) {
              if (param_1 == 0x136) {
                return (code *)(DAT_0001a288 + 0x19e7c);
              }
              if (param_1 != 0x137) {
                return (code *)(DAT_000188e8 + 0x18d2c);
              }
              return (code *)(DAT_0001a28c + 0x19e88);
            }
            if (param_1 == 0x133) {
              return (code *)(DAT_0001a280 + 0x19e64);
            }
            if (param_1 != 0x134) {
              return (code *)(DAT_000188e4 + 0x18d08);
            }
            return (code *)(DAT_0001a284 + 0x19e70);
          }
          if (param_1 == 0x12f) {
            return (code *)(DAT_0001a268 + 0x19e1c);
          }
          if (0x12f < param_1) {
            if (param_1 == 0x130) {
              return (code *)(DAT_0001a274 + 0x19e40);
            }
            if (param_1 != 0x131) {
              return (code *)(DAT_000188e0 + 0x18cd8);
            }
            return (code *)(DAT_0001a278 + 0x19e4c);
          }
          if (param_1 == 0x12d) {
            return (code *)(DAT_0001a26c + 0x19e28);
          }
          if (param_1 != 0x12e) {
            return (code *)(DAT_000188dc + 0x18cbc);
          }
          return (code *)(DAT_0001a270 + 0x19e34);
        }
        if (param_1 == 0x126) {
          return (code *)(DAT_0001a23c + 0x19d98);
        }
        if (0x126 < param_1) {
          if (param_1 == 0x129) {
            return (code *)(DAT_0001a250 + 0x19dd4);
          }
          if (0x129 < param_1) {
            if (param_1 == 0x12a) {
              return (code *)(DAT_0001a25c + 0x19df8);
            }
            if (param_1 != 299) {
              return (code *)(DAT_000188d8 + 0x18c74);
            }
            return (code *)(DAT_0001a260 + 0x19e04);
          }
          if (param_1 == 0x127) {
            return (code *)(DAT_0001a254 + 0x19de0);
          }
          if (param_1 != 0x128) {
            return (code *)(DAT_000188d4 + 0x18c50);
          }
          return (code *)(DAT_0001a258 + 0x19dec);
        }
        if (param_1 == 0x123) {
          return (code *)(DAT_0001a240 + 0x19da4);
        }
        if (param_1 < 0x123) {
          return (code *)(DAT_0001a244 + 0x19db0);
        }
        if (param_1 == 0x124) {
          return (code *)(DAT_0001a248 + 0x19dbc);
        }
        if (param_1 != 0x125) {
          return (code *)(DAT_000188d0 + 0x18c20);
        }
        return (code *)(DAT_0001a24c + 0x19dc8);
      }
      if (param_1 == 0x116) {
        return (code *)(DAT_0001a1e4 + 0x19c90);
      }
      if (0x116 < param_1) {
        if (param_1 == 0x11b) {
          return (code *)(DAT_0001a210 + 0x19d14);
        }
        if (0x11b < param_1) {
          if (param_1 == 0x11e) {
            return (code *)(DAT_0001a224 + 0x19d50);
          }
          if (0x11e < param_1) {
            if (param_1 == 0x11f) {
              return (code *)(DAT_0001a230 + 0x19d74);
            }
            if (param_1 != 0x120) {
              return (code *)(DAT_000188cc + 0x18bd4);
            }
            return (code *)(DAT_0001a234 + 0x19d80);
          }
          if (param_1 == 0x11c) {
            return (code *)(DAT_0001a228 + 0x19d5c);
          }
          if (param_1 != 0x11d) {
            return (code *)(DAT_000188c8 + 0x18bb4);
          }
          return (code *)(DAT_0001a22c + 0x19d68);
        }
        if (param_1 == 0x118) {
          return (code *)(DAT_0001a214 + 0x19d20);
        }
        if (param_1 < 0x118) {
          return (code *)(DAT_0001a218 + 0x19d2c);
        }
        if (param_1 == 0x119) {
          return (code *)(DAT_0001a21c + 0x19d38);
        }
        if (param_1 != 0x11a) {
          return (code *)(DAT_000188c4 + 0x18b84);
        }
        return (code *)(DAT_0001a220 + 0x19d44);
      }
      if (param_1 == 0x110) {
        return (code *)(DAT_0001a1e8 + 0x19c9c);
      }
      if (0x110 < param_1) {
        if (param_1 == 0x113) {
          return (code *)(DAT_0001a1fc + 0x19cd8);
        }
        if (0x113 < param_1) {
          if (param_1 == 0x114) {
            return (code *)(DAT_0001a208 + 0x19cfc);
          }
          if (param_1 != 0x115) {
            return (code *)((int)&DAT_00018784 + DAT_000188c0);
          }
          return (code *)(DAT_0001a20c + 0x19d08);
        }
        if (param_1 == 0x111) {
          return (code *)(DAT_0001a200 + 0x19ce4);
        }
        if (param_1 != 0x112) {
          return (code *)(DAT_000188bc + 0x18768);
        }
        return (code *)(DAT_0001a204 + 0x19cf0);
      }
      if (param_1 == 0x10d) {
        return (code *)(DAT_0001a1ec + 0x19ca8);
      }
      if (param_1 < 0x10d) {
        return (code *)(DAT_0001a1f0 + 0x19cb4);
      }
      if (param_1 == 0x10e) {
        return (code *)(DAT_0001a1f4 + 0x19cc0);
      }
      if (param_1 != 0x10f) {
        return (code *)(DAT_000188b8 + 0x18730);
      }
      return (code *)(DAT_0001a1f8 + 0x19ccc);
    }
    if (param_1 == 0xde) {
      return (code *)(DAT_0001a07c + 0x19858);
    }
    if (0xde < param_1) {
      if (param_1 == 0xf4) {
        return (code *)(DAT_0001a12c + 0x19a68);
      }
      if (0xf4 < param_1) {
        if (param_1 == 0xff) {
          return (code *)(DAT_0001a184 + 0x19b70);
        }
        if (0xff < param_1) {
          if (param_1 == 0x105) {
            return (code *)(DAT_0001a1b0 + 0x19bf4);
          }
          if (0x105 < param_1) {
            if (param_1 == 0x108) {
              return (code *)(DAT_0001a1c8 + 0x19c3c);
            }
            if (0x108 < param_1) {
              if (param_1 == 0x109) {
                return (code *)(DAT_0001a1d4 + 0x19c60);
              }
              if (param_1 != 0x10a) {
                return (code *)(DAT_000188b4 + 0x186c0);
              }
              return (code *)(DAT_0001a1d8 + 0x19c6c);
            }
            if (param_1 == 0x106) {
              return (code *)(DAT_0001a1cc + 0x19c48);
            }
            if (param_1 != 0x107) {
              return (code *)(DAT_000188b0 + 0x1869c);
            }
            return (code *)(DAT_0001a1d0 + 0x19c54);
          }
          if (param_1 == 0x102) {
            return (code *)(DAT_0001a1b4 + 0x19c00);
          }
          if (0x102 < param_1) {
            if (param_1 == 0x103) {
              return (code *)(DAT_0001a1c0 + 0x19c24);
            }
            if (param_1 != 0x104) {
              return (code *)(DAT_000188ac + 0x1866c);
            }
            return (code *)(DAT_0001a1c4 + 0x19c30);
          }
          if (param_1 == 0x100) {
            return (code *)(DAT_0001a1b8 + 0x19c0c);
          }
          if (param_1 != 0x101) {
            return (code *)(DAT_000188a8 + 0x1864c);
          }
          return (code *)(DAT_0001a1bc + 0x19c18);
        }
        if (param_1 == 0xf9) {
          return (code *)(DAT_0001a188 + 0x19b7c);
        }
        if (0xf9 < param_1) {
          if (param_1 == 0xfc) {
            return (code *)(DAT_0001a19c + 0x19bb8);
          }
          if (0xfc < param_1) {
            if (param_1 == 0xfd) {
              return (code *)(DAT_0001a1a8 + 0x19bdc);
            }
            if (param_1 != 0xfe) {
              return (code *)(DAT_000188a4 + 0x1860c);
            }
            return (code *)(DAT_0001a1ac + 0x19be8);
          }
          if (param_1 == 0xfa) {
            return (code *)(DAT_0001a1a0 + 0x19bc4);
          }
          if (param_1 != 0xfb) {
            return (code *)(DAT_000188a0 + 0x185f0);
          }
          return (code *)(DAT_0001a1a4 + 0x19bd0);
        }
        if (param_1 == 0xf6) {
          return (code *)(DAT_0001a18c + 0x19b88);
        }
        if (param_1 < 0xf6) {
          return (code *)(DAT_0001a190 + 0x19b94);
        }
        if (param_1 == 0xf7) {
          return (code *)(DAT_0001a194 + 0x19ba0);
        }
        if (param_1 != 0xf8) {
          return (code *)(DAT_0001889c + 0x185c8);
        }
        return (code *)(DAT_0001a198 + 0x19bac);
      }
      if (param_1 == 0xe9) {
        return (code *)(DAT_0001a130 + 0x19a74);
      }
      if (0xe9 < param_1) {
        if (param_1 == 0xee) {
          return (code *)(DAT_0001a15c + 0x19af8);
        }
        if (0xee < param_1) {
          if (param_1 == 0xf1) {
            return (code *)(DAT_0001a170 + 0x19b34);
          }
          if (0xf1 < param_1) {
            if (param_1 == 0xf2) {
              return (code *)(DAT_0001a17c + 0x19b58);
            }
            if (param_1 != 0xf3) {
              return (code *)(DAT_00018898 + 0x18588);
            }
            return (code *)(DAT_0001a180 + 0x19b64);
          }
          if (param_1 == 0xef) {
            return (code *)(DAT_0001a174 + 0x19b40);
          }
          if (param_1 != 0xf0) {
            return (code *)(DAT_00018894 + 0x1856c);
          }
          return (code *)(DAT_0001a178 + 0x19b4c);
        }
        if (param_1 == 0xeb) {
          return (code *)(DAT_0001a160 + 0x19b04);
        }
        if (param_1 < 0xeb) {
          return (code *)(DAT_0001a164 + 0x19b10);
        }
        if (param_1 == 0xec) {
          return (code *)(DAT_0001a168 + 0x19b1c);
        }
        if (param_1 != 0xed) {
          return (code *)(DAT_00018890 + 0x18544);
        }
        return (code *)(DAT_0001a16c + 0x19b28);
      }
      if (param_1 == 0xe3) {
        return (code *)(DAT_0001a134 + 0x19a80);
      }
      if (0xe3 < param_1) {
        if (param_1 == 0xe6) {
          return (code *)(DAT_0001a148 + 0x19abc);
        }
        if (0xe6 < param_1) {
          if (param_1 == 0xe7) {
            return (code *)(DAT_0001a154 + 0x19ae0);
          }
          if (param_1 != 0xe8) {
            return (code *)(DAT_0001888c + 0x18510);
          }
          return (code *)(DAT_0001a158 + 0x19aec);
        }
        if (param_1 == 0xe4) {
          return (code *)(DAT_0001a14c + 0x19ac8);
        }
        if (param_1 != 0xe5) {
          return (code *)(DAT_00018888 + 0x184f4);
        }
        return (code *)(DAT_0001a150 + 0x19ad4);
      }
      if (param_1 == 0xe0) {
        return (code *)(DAT_0001a138 + 0x19a8c);
      }
      if (param_1 < 0xe0) {
        return (code *)(DAT_0001a13c + 0x19a98);
      }
      if (param_1 == 0xe1) {
        return (code *)(DAT_0001a140 + 0x19aa4);
      }
      if (param_1 != 0xe2) {
        return (code *)(DAT_00018884 + 0x184cc);
      }
      return (code *)(DAT_0001a144 + 0x19ab0);
    }
    if (param_1 == 200) {
      return (code *)(DAT_0001a080 + 0x19864);
    }
    if (200 < param_1) {
      if (param_1 == 0xd3) {
        return (code *)(DAT_0001a0d8 + 0x1996c);
      }
      if (0xd3 < param_1) {
        if (param_1 == 0xd8) {
          return (code *)(DAT_0001a104 + 0x199f0);
        }
        if (0xd8 < param_1) {
          if (param_1 == 0xdb) {
            return (code *)(DAT_0001a118 + 0x19a2c);
          }
          if (0xdb < param_1) {
            if (param_1 == 0xdc) {
              return (code *)(DAT_0001a124 + 0x19a50);
            }
            if (param_1 != 0xdd) {
              return (code *)(DAT_00018880 + 0x18480);
            }
            return (code *)(DAT_0001a128 + 0x19a5c);
          }
          if (param_1 == 0xd9) {
            return (code *)(DAT_0001a11c + 0x19a38);
          }
          if (param_1 != 0xda) {
            return (code *)(DAT_0001887c + 0x18464);
          }
          return (code *)(DAT_0001a120 + 0x19a44);
        }
        if (param_1 == 0xd5) {
          return (code *)(DAT_0001a108 + 0x199fc);
        }
        if (param_1 < 0xd5) {
          return (code *)(DAT_0001a10c + 0x19a08);
        }
        if (param_1 == 0xd6) {
          return (code *)(DAT_0001a110 + 0x19a14);
        }
        if (param_1 != 0xd7) {
          return (code *)(DAT_00018878 + 0x1843c);
        }
        return (code *)(DAT_0001a114 + 0x19a20);
      }
      if (param_1 == 0xcd) {
        return (code *)(DAT_0001a0dc + 0x19978);
      }
      if (0xcd < param_1) {
        if (param_1 == 0xd0) {
          return (code *)(DAT_0001a0f0 + 0x199b4);
        }
        if (0xd0 < param_1) {
          if (param_1 == 0xd1) {
            return (code *)(DAT_0001a0fc + 0x199d8);
          }
          if (param_1 != 0xd2) {
            return (code *)(DAT_00018874 + 0x18408);
          }
          return (code *)(DAT_0001a100 + 0x199e4);
        }
        if (param_1 == 0xce) {
          return (code *)(DAT_0001a0f4 + 0x199c0);
        }
        if (param_1 != 0xcf) {
          return (code *)(DAT_00018870 + 0x183ec);
        }
        return (code *)(DAT_0001a0f8 + 0x199cc);
      }
      if (param_1 == 0xca) {
        return (code *)(DAT_0001a0e0 + 0x19984);
      }
      if (param_1 < 0xca) {
        return (code *)(DAT_0001a0e4 + 0x19990);
      }
      if (param_1 == 0xcb) {
        return (code *)(DAT_0001a0e8 + 0x1999c);
      }
      if (param_1 != 0xcc) {
        return (code *)(DAT_0001886c + 0x183c4);
      }
      return (code *)(DAT_0001a0ec + 0x199a8);
    }
    if (param_1 == 0xbd) {
      return (code *)(DAT_0001a084 + 0x19870);
    }
    if (0xbd < param_1) {
      if (param_1 == 0xc2) {
        return (code *)(DAT_0001a0b0 + 0x198f4);
      }
      if (0xc2 < param_1) {
        if (param_1 == 0xc5) {
          return (code *)(DAT_0001a0c4 + 0x19930);
        }
        if (0xc5 < param_1) {
          if (param_1 == 0xc6) {
            return (code *)(DAT_0001a0d0 + 0x19954);
          }
          if (param_1 != 199) {
            return (code *)(DAT_00018868 + 0x18384);
          }
          return (code *)(DAT_0001a0d4 + 0x19960);
        }
        if (param_1 == 0xc3) {
          return (code *)(DAT_0001a0c8 + 0x1993c);
        }
        if (param_1 != 0xc4) {
          return (code *)(DAT_00018864 + 0x18368);
        }
        return (code *)(DAT_0001a0cc + 0x19948);
      }
      if (param_1 == 0xbf) {
        return (code *)(DAT_0001a0b4 + 0x19900);
      }
      if (param_1 < 0xbf) {
        return (code *)(DAT_0001a0b8 + 0x1990c);
      }
      if (param_1 == 0xc0) {
        return (code *)(DAT_0001a0bc + 0x19918);
      }
      if (param_1 != 0xc1) {
        return (code *)(DAT_00018860 + 0x18340);
      }
      return (code *)(DAT_0001a0c0 + 0x19924);
    }
    if (param_1 == 0xb7) {
      return (code *)(DAT_0001a088 + 0x1987c);
    }
    if (0xb7 < param_1) {
      if (param_1 == 0xba) {
        return (code *)(DAT_0001a09c + 0x198b8);
      }
      if (0xba < param_1) {
        if (param_1 == 0xbb) {
          return (code *)(DAT_0001a0a8 + 0x198dc);
        }
        if (param_1 != 0xbc) {
          return (code *)(DAT_0001885c + 0x1830c);
        }
        return (code *)(DAT_0001a0ac + 0x198e8);
      }
      if (param_1 == 0xb8) {
        return (code *)(DAT_0001a0a0 + 0x198c4);
      }
      if (param_1 != 0xb9) {
        return (code *)(DAT_00018858 + 0x182f0);
      }
      return (code *)(DAT_0001a0a4 + 0x198d0);
    }
    if (param_1 == 0xb4) {
      return (code *)(DAT_0001a08c + 0x19888);
    }
    if (param_1 < 0xb4) {
      return (code *)(DAT_0001a090 + 0x19894);
    }
    if (param_1 == 0xb5) {
      return (code *)(DAT_0001a094 + 0x198a0);
    }
    if (param_1 != 0xb6) {
      return (code *)(DAT_00018854 + 0x182c8);
    }
    return (code *)(DAT_0001a098 + 0x198ac);
  }
  if (param_1 == 0x58) {
    return (code *)(DAT_00018924 + 0x18ff4);
  }
  if (0x58 < param_1) {
    if (param_1 == 0x85) {
      return (code *)(DAT_00018a88 + 0x19420);
    }
    if (0x85 < param_1) {
      if (param_1 == 0x9b) {
        return (code *)(DAT_00018b3c + 0x1963c);
      }
      if (0x9b < param_1) {
        if (param_1 == 0xa6) {
          return (code *)(DAT_0001a020 + 0x19744);
        }
        if (0xa6 < param_1) {
          if (param_1 == 0xac) {
            return (code *)(DAT_0001a04c + 0x197c8);
          }
          if (0xac < param_1) {
            if (param_1 == 0xaf) {
              return (code *)(DAT_0001a064 + 0x19810);
            }
            if (0xaf < param_1) {
              if (param_1 == 0xb0) {
                return (code *)(DAT_0001a070 + 0x19834);
              }
              if (param_1 != 0xb1) {
                return (code *)(DAT_00018850 + 0x1825c);
              }
              return (code *)(DAT_0001a074 + 0x19840);
            }
            if (param_1 == 0xad) {
              return (code *)(DAT_0001a068 + 0x1981c);
            }
            if (param_1 != 0xae) {
              return (code *)(DAT_0001884c + 0x18240);
            }
            return (code *)(DAT_0001a06c + 0x19828);
          }
          if (param_1 == 0xa9) {
            return (code *)(DAT_0001a050 + 0x197d4);
          }
          if (0xa9 < param_1) {
            if (param_1 == 0xaa) {
              return (code *)(DAT_0001a05c + 0x197f8);
            }
            if (param_1 != 0xab) {
              return (code *)(DAT_00018848 + 0x18218);
            }
            return (code *)(DAT_0001a060 + 0x19804);
          }
          if (param_1 == 0xa7) {
            return (code *)(DAT_0001a054 + 0x197e0);
          }
          if (param_1 != 0xa8) {
            return (code *)(DAT_00018844 + 0x181fc);
          }
          return (code *)(DAT_0001a058 + 0x197ec);
        }
        if (param_1 == 0xa0) {
          return (code *)(DAT_0001a024 + 0x19750);
        }
        if (0xa0 < param_1) {
          if (param_1 == 0xa3) {
            return (code *)(DAT_0001a038 + 0x1978c);
          }
          if (0xa3 < param_1) {
            if (param_1 == 0xa4) {
              return (code *)(DAT_0001a044 + 0x197b0);
            }
            if (param_1 != 0xa5) {
              return (code *)(DAT_00018840 + 0x181c8);
            }
            return (code *)(DAT_0001a048 + 0x197bc);
          }
          if (param_1 == 0xa1) {
            return (code *)(DAT_0001a03c + 0x19798);
          }
          if (param_1 != 0xa2) {
            return (code *)(DAT_0001883c + 0x181ac);
          }
          return (code *)(DAT_0001a040 + 0x197a4);
        }
        if (param_1 == 0x9d) {
          return (code *)(DAT_0001a028 + 0x1975c);
        }
        if (param_1 < 0x9d) {
          return (code *)(DAT_0001a02c + 0x19768);
        }
        if (param_1 == 0x9e) {
          return (code *)(DAT_0001a030 + 0x19774);
        }
        if (param_1 != 0x9f) {
          return (code *)(DAT_00018838 + 0x18184);
        }
        return (code *)(DAT_0001a034 + 0x19780);
      }
      if (param_1 == 0x90) {
        return (code *)(DAT_00019fcc + 0x19648);
      }
      if (0x90 < param_1) {
        if (param_1 == 0x95) {
          return (code *)(DAT_00019ff8 + 0x196cc);
        }
        if (0x95 < param_1) {
          if (param_1 == 0x98) {
            return (code *)(DAT_0001a00c + 0x19708);
          }
          if (0x98 < param_1) {
            if (param_1 == 0x99) {
              return (code *)(DAT_0001a018 + 0x1972c);
            }
            if (param_1 != 0x9a) {
              return (code *)(DAT_00018834 + 0x18144);
            }
            return (code *)(DAT_0001a01c + 0x19738);
          }
          if (param_1 == 0x96) {
            return (code *)(DAT_0001a010 + 0x19714);
          }
          if (param_1 != 0x97) {
            return (code *)(DAT_00018830 + 0x18128);
          }
          return (code *)(DAT_0001a014 + 0x19720);
        }
        if (param_1 == 0x92) {
          return (code *)(DAT_00019ffc + 0x196d8);
        }
        if (param_1 < 0x92) {
          return (code *)(DAT_0001a000 + 0x196e4);
        }
        if (param_1 == 0x93) {
          return (code *)(DAT_0001a004 + 0x196f0);
        }
        if (param_1 != 0x94) {
          return (code *)(DAT_0001882c + 0x18100);
        }
        return (code *)(DAT_0001a008 + 0x196fc);
      }
      if (param_1 == 0x8a) {
        return (code *)(DAT_00019fd0 + 0x19654);
      }
      if (0x8a < param_1) {
        if (param_1 == 0x8d) {
          return (code *)(DAT_00019fe4 + 0x19690);
        }
        if (0x8d < param_1) {
          if (param_1 == 0x8e) {
            return (code *)(DAT_00019ff0 + 0x196b4);
          }
          if (param_1 != 0x8f) {
            return (code *)(DAT_00018828 + 0x180cc);
          }
          return (code *)(DAT_00019ff4 + 0x196c0);
        }
        if (param_1 == 0x8b) {
          return (code *)(DAT_00019fe8 + 0x1969c);
        }
        if (param_1 != 0x8c) {
          return (code *)(DAT_00018824 + 0x180b0);
        }
        return (code *)(DAT_00019fec + 0x196a8);
      }
      if (param_1 == 0x87) {
        return (code *)(DAT_00019fd4 + 0x19660);
      }
      if (param_1 < 0x87) {
        return (code *)(DAT_00019fd8 + 0x1966c);
      }
      if (param_1 == 0x88) {
        return (code *)(DAT_00019fdc + 0x19678);
      }
      if (param_1 != 0x89) {
        return (code *)(DAT_00018820 + 0x18088);
      }
      return (code *)(DAT_00019fe0 + 0x19684);
    }
    if (param_1 == 0x6e) {
      return (code *)(DAT_00018a8c + 0x1942c);
    }
    if (0x6e < param_1) {
      if (param_1 == 0x79) {
        return (code *)(DAT_00018ae4 + 0x19534);
      }
      if (0x79 < param_1) {
        if (param_1 == 0x7f) {
          return (code *)(DAT_00018b10 + 0x195b8);
        }
        if (0x7f < param_1) {
          if (param_1 == 0x82) {
            return (code *)(DAT_00018b28 + 0x19600);
          }
          if (0x82 < param_1) {
            if (param_1 == 0x83) {
              return (code *)(DAT_00018b34 + 0x19624);
            }
            if (param_1 != 0x84) {
              return (code *)(DAT_0001881c + 0x1803c);
            }
            return (code *)(DAT_00018b38 + 0x19630);
          }
          if (param_1 == 0x80) {
            return (code *)(DAT_00018b2c + 0x1960c);
          }
          if (param_1 != 0x81) {
            return (code *)(DAT_00018818 + 0x18020);
          }
          return (code *)(DAT_00018b30 + 0x19618);
        }
        if (param_1 == 0x7c) {
          return (code *)(DAT_00018b14 + 0x195c4);
        }
        if (0x7c < param_1) {
          if (param_1 == 0x7d) {
            return (code *)(DAT_00018b20 + 0x195e8);
          }
          if (param_1 != 0x7e) {
            return (code *)(DAT_00018814 + 0x17ff8);
          }
          return (code *)(DAT_00018b24 + 0x195f4);
        }
        if (param_1 == 0x7a) {
          return (code *)(DAT_00018b18 + 0x195d0);
        }
        if (param_1 != 0x7b) {
          return (code *)(DAT_00018810 + 0x17fdc);
        }
        return (code *)(DAT_00018b1c + 0x195dc);
      }
      if (param_1 == 0x73) {
        return (code *)(DAT_00018ae8 + 0x19540);
      }
      if (0x73 < param_1) {
        if (param_1 == 0x76) {
          return (code *)(DAT_00018afc + 0x1957c);
        }
        if (0x76 < param_1) {
          if (param_1 == 0x77) {
            return (code *)(DAT_00018b08 + 0x195a0);
          }
          if (param_1 != 0x78) {
            return (code *)(DAT_0001880c + 0x17fa8);
          }
          return (code *)(DAT_00018b0c + 0x195ac);
        }
        if (param_1 == 0x74) {
          return (code *)(DAT_00018b00 + 0x19588);
        }
        if (param_1 != 0x75) {
          return (code *)(DAT_00018808 + 0x17f8c);
        }
        return (code *)(DAT_00018b04 + 0x19594);
      }
      if (param_1 == 0x70) {
        return (code *)(DAT_00018aec + 0x1954c);
      }
      if (param_1 < 0x70) {
        return (code *)(DAT_00018af0 + 0x19558);
      }
      if (param_1 == 0x71) {
        return (code *)(DAT_00018af4 + 0x19564);
      }
      if (param_1 != 0x72) {
        return (code *)(DAT_00018804 + 0x17f64);
      }
      return (code *)(DAT_00018af8 + 0x19570);
    }
    if (param_1 == 99) {
      return (code *)(DAT_00018a90 + 0x19438);
    }
    if (99 < param_1) {
      if (param_1 == 0x68) {
        return (code *)(DAT_00018abc + 0x194bc);
      }
      if (0x68 < param_1) {
        if (param_1 == 0x6b) {
          return (code *)(DAT_00018ad0 + 0x194f8);
        }
        if (0x6b < param_1) {
          if (param_1 == 0x6c) {
            return (code *)(DAT_00018adc + 0x1951c);
          }
          if (param_1 != 0x6d) {
            return (code *)(DAT_00018800 + 0x17f24);
          }
          return (code *)(DAT_00018ae0 + 0x19528);
        }
        if (param_1 == 0x69) {
          return (code *)(DAT_00018ad4 + 0x19504);
        }
        if (param_1 != 0x6a) {
          return (code *)(DAT_000187fc + 0x17f08);
        }
        return (code *)(DAT_00018ad8 + 0x19510);
      }
      if (param_1 == 0x65) {
        return (code *)(DAT_00018ac0 + 0x194c8);
      }
      if (param_1 < 0x65) {
        return (code *)(DAT_00018ac4 + 0x194d4);
      }
      if (param_1 == 0x66) {
        return (code *)(DAT_00018ac8 + 0x194e0);
      }
      if (param_1 != 0x67) {
        return (code *)(DAT_000187f8 + 0x17ee0);
      }
      return (code *)(DAT_00018acc + 0x194ec);
    }
    if (param_1 == 0x5d) {
      return (code *)(DAT_00018a94 + 0x19444);
    }
    if (0x5d < param_1) {
      if (param_1 == 0x60) {
        return (code *)(DAT_00018aa8 + 0x19480);
      }
      if (0x60 < param_1) {
        if (param_1 == 0x61) {
          return (code *)(DAT_00018ab4 + 0x194a4);
        }
        if (param_1 != 0x62) {
          return (code *)(DAT_000187f4 + 0x17eac);
        }
        return (code *)(DAT_00018ab8 + 0x194b0);
      }
      if (param_1 == 0x5e) {
        return (code *)(DAT_00018aac + 0x1948c);
      }
      if (param_1 != 0x5f) {
        return (code *)(DAT_000187f0 + 0x17e90);
      }
      return (code *)(DAT_00018ab0 + 0x19498);
    }
    if (param_1 == 0x5a) {
      return (code *)(DAT_00018a98 + 0x19450);
    }
    if (param_1 < 0x5a) {
      return (code *)(DAT_00018a9c + 0x1945c);
    }
    if (param_1 == 0x5b) {
      return (code *)(DAT_00018aa0 + 0x19468);
    }
    if (param_1 != 0x5c) {
      return (code *)(DAT_000187ec + 0x17e68);
    }
    return (code *)(DAT_00018aa4 + 0x19474);
  }
  if (param_1 == 0x2b) {
    return (code *)(DAT_00018928 + 0x19000);
  }
  if (0x2b < param_1) {
    if (param_1 == 0x41) {
      return (code *)(DAT_000189d8 + 0x19210);
    }
    if (0x41 < param_1) {
      if (param_1 == 0x4c) {
        return (code *)(DAT_00018a30 + 0x19318);
      }
      if (0x4c < param_1) {
        if (param_1 == 0x52) {
          return (code *)(DAT_00018a5c + 0x1939c);
        }
        if (0x52 < param_1) {
          if (param_1 == 0x55) {
            return (code *)(DAT_00018a74 + 0x193e4);
          }
          if (0x55 < param_1) {
            if (param_1 == 0x56) {
              return (code *)(DAT_00018a80 + 0x19408);
            }
            if (param_1 != 0x57) {
              return (code *)(DAT_000187e8 + 0x17e10);
            }
            return (code *)(DAT_00018a84 + 0x19414);
          }
          if (param_1 == 0x53) {
            return (code *)(DAT_00018a78 + 0x193f0);
          }
          if (param_1 != 0x54) {
            return (code *)(DAT_000187e4 + 0x17df4);
          }
          return (code *)(DAT_00018a7c + 0x193fc);
        }
        if (param_1 == 0x4f) {
          return (code *)(DAT_00018a60 + 0x193a8);
        }
        if (0x4f < param_1) {
          if (param_1 == 0x50) {
            return (code *)(DAT_00018a6c + 0x193cc);
          }
          if (param_1 != 0x51) {
            return (code *)(DAT_000187e0 + 0x17dcc);
          }
          return (code *)(DAT_00018a70 + 0x193d8);
        }
        if (param_1 == 0x4d) {
          return (code *)(DAT_00018a64 + 0x193b4);
        }
        if (param_1 != 0x4e) {
          return (code *)(DAT_000187dc + 0x17db0);
        }
        return (code *)(DAT_00018a68 + 0x193c0);
      }
      if (param_1 == 0x46) {
        return (code *)(DAT_00018a34 + 0x19324);
      }
      if (0x46 < param_1) {
        if (param_1 == 0x49) {
          return (code *)(DAT_00018a48 + 0x19360);
        }
        if (0x49 < param_1) {
          if (param_1 == 0x4a) {
            return (code *)(DAT_00018a54 + 0x19384);
          }
          if (param_1 != 0x4b) {
            return (code *)(DAT_000187d8 + 0x17d7c);
          }
          return (code *)(DAT_00018a58 + 0x19390);
        }
        if (param_1 == 0x47) {
          return (code *)(DAT_00018a4c + 0x1936c);
        }
        if (param_1 != 0x48) {
          return (code *)(DAT_000187d4 + 0x17d60);
        }
        return (code *)(DAT_00018a50 + 0x19378);
      }
      if (param_1 == 0x43) {
        return (code *)(DAT_00018a38 + 0x19330);
      }
      if (param_1 < 0x43) {
        return (code *)(DAT_00018a3c + 0x1933c);
      }
      if (param_1 == 0x44) {
        return (code *)(DAT_00018a40 + 0x19348);
      }
      if (param_1 != 0x45) {
        return (code *)(DAT_000187d0 + 0x17d38);
      }
      return (code *)(DAT_00018a44 + 0x19354);
    }
    if (param_1 == 0x36) {
      return (code *)(DAT_000189dc + 0x1921c);
    }
    if (0x36 < param_1) {
      if (param_1 == 0x3b) {
        return (code *)(DAT_00018a08 + 0x192a0);
      }
      if (0x3b < param_1) {
        if (param_1 == 0x3e) {
          return (code *)(DAT_00018a1c + 0x192dc);
        }
        if (0x3e < param_1) {
          if (param_1 == 0x3f) {
            return (code *)(DAT_00018a28 + 0x19300);
          }
          if (param_1 != 0x40) {
            return (code *)(DAT_000187cc + 0x17cf8);
          }
          return (code *)(DAT_00018a2c + 0x1930c);
        }
        if (param_1 == 0x3c) {
          return (code *)(DAT_00018a20 + 0x192e8);
        }
        if (param_1 != 0x3d) {
          return (code *)(DAT_000187c8 + 0x17cdc);
        }
        return (code *)(DAT_00018a24 + 0x192f4);
      }
      if (param_1 == 0x38) {
        return (code *)(DAT_00018a0c + 0x192ac);
      }
      if (param_1 < 0x38) {
        return (code *)(DAT_00018a10 + 0x192b8);
      }
      if (param_1 == 0x39) {
        return (code *)(DAT_00018a14 + 0x192c4);
      }
      if (param_1 != 0x3a) {
        return (code *)(DAT_000187c4 + 0x17cb4);
      }
      return (code *)(DAT_00018a18 + 0x192d0);
    }
    if (param_1 == 0x30) {
      return (code *)(DAT_000189e0 + 0x19228);
    }
    if (0x30 < param_1) {
      if (param_1 == 0x33) {
        return (code *)(DAT_000189f4 + 0x19264);
      }
      if (0x33 < param_1) {
        if (param_1 == 0x34) {
          return (code *)(DAT_00018a00 + 0x19288);
        }
        if (param_1 != 0x35) {
          return (code *)(DAT_000187c0 + 0x17c80);
        }
        return (code *)(DAT_00018a04 + 0x19294);
      }
      if (param_1 == 0x31) {
        return (code *)(DAT_000189f8 + 0x19270);
      }
      if (param_1 != 0x32) {
        return (code *)(DAT_000187bc + 0x17c64);
      }
      return (code *)(DAT_000189fc + 0x1927c);
    }
    if (param_1 == 0x2d) {
      return (code *)(DAT_000189e4 + 0x19234);
    }
    if (param_1 < 0x2d) {
      return (code *)(DAT_000189e8 + 0x19240);
    }
    if (param_1 == 0x2e) {
      return (code *)(DAT_000189ec + 0x1924c);
    }
    if (param_1 != 0x2f) {
      return (code *)(DAT_000187b8 + 0x17c3c);
    }
    return (code *)(DAT_000189f0 + 0x19258);
  }
  if (param_1 == 0x15) {
    return (code *)(DAT_0001892c + 0x1900c);
  }
  if (0x15 < param_1) {
    if (param_1 == 0x20) {
      return (code *)(DAT_00018984 + 0x19114);
    }
    if (0x20 < param_1) {
      if (param_1 == 0x25) {
        return (code *)(DAT_000189b0 + 0x19198);
      }
      if (0x25 < param_1) {
        if (param_1 == 0x28) {
          return (code *)(DAT_000189c4 + 0x191d4);
        }
        if (0x28 < param_1) {
          if (param_1 == 0x29) {
            return (code *)(DAT_000189d0 + 0x191f8);
          }
          if (param_1 != 0x2a) {
            return (code *)(DAT_000187b4 + 0x17bf0);
          }
          return (code *)(DAT_000189d4 + 0x19204);
        }
        if (param_1 == 0x26) {
          return (code *)(DAT_000189c8 + 0x191e0);
        }
        if (param_1 != 0x27) {
          return (code *)(DAT_000187b0 + 0x17bd4);
        }
        return (code *)(DAT_000189cc + 0x191ec);
      }
      if (param_1 == 0x22) {
        return (code *)(DAT_000189b4 + 0x191a4);
      }
      if (param_1 < 0x22) {
        return (code *)(DAT_000189b8 + 0x191b0);
      }
      if (param_1 == 0x23) {
        return (code *)(DAT_000189bc + 0x191bc);
      }
      if (param_1 != 0x24) {
        return (code *)(DAT_000187ac + 0x17bac);
      }
      return (code *)(DAT_000189c0 + 0x191c8);
    }
    if (param_1 == 0x1a) {
      return (code *)(DAT_00018988 + 0x19120);
    }
    if (0x1a < param_1) {
      if (param_1 == 0x1d) {
        return (code *)(DAT_0001899c + 0x1915c);
      }
      if (0x1d < param_1) {
        if (param_1 == 0x1e) {
          return (code *)(DAT_000189a8 + 0x19180);
        }
        if (param_1 != 0x1f) {
          return (code *)(DAT_000187a8 + 0x17b78);
        }
        return (code *)(DAT_000189ac + 0x1918c);
      }
      if (param_1 == 0x1b) {
        return (code *)(DAT_000189a0 + 0x19168);
      }
      if (param_1 != 0x1c) {
        return (code *)(DAT_000187a4 + 0x17b5c);
      }
      return (code *)(DAT_000189a4 + 0x19174);
    }
    if (param_1 == 0x17) {
      return (code *)(DAT_0001898c + 0x1912c);
    }
    if (param_1 < 0x17) {
      return (code *)(DAT_00018990 + 0x19138);
    }
    if (param_1 == 0x18) {
      return (code *)(DAT_00018994 + 0x19144);
    }
    if (param_1 != 0x19) {
      return (code *)(DAT_000187a0 + 0x17b34);
    }
    return (code *)(DAT_00018998 + 0x19150);
  }
  if (param_1 == 10) {
    return (code *)(DAT_00018930 + 0x19018);
  }
  if (10 < param_1) {
    if (param_1 == 0xf) {
      return (code *)(DAT_0001895c + 0x1909c);
    }
    if (0xf < param_1) {
      if (param_1 == 0x12) {
        return (code *)(DAT_00018970 + 0x190d8);
      }
      if (0x12 < param_1) {
        if (param_1 == 0x13) {
          return (code *)(DAT_0001897c + 0x190fc);
        }
        if (param_1 != 0x14) {
          return (code *)(DAT_0001879c + 0x17af4);
        }
        return (code *)(DAT_00018980 + 0x19108);
      }
      if (param_1 == 0x10) {
        return (code *)(DAT_00018974 + 0x190e4);
      }
      if (param_1 != 0x11) {
        return (code *)(DAT_00018798 + 0x17ad8);
      }
      return (code *)(DAT_00018978 + 0x190f0);
    }
    if (param_1 == 0xc) {
      return (code *)(DAT_00018960 + 0x190a8);
    }
    if (param_1 < 0xc) {
      return (code *)(DAT_00018964 + 0x190b4);
    }
    if (param_1 == 0xd) {
      return (code *)(DAT_00018968 + 0x190c0);
    }
    if (param_1 != 0xe) {
      return (code *)(DAT_00018794 + 0x17ab0);
    }
    return (code *)(DAT_0001896c + 0x190cc);
  }
  if (param_1 == 4) {
    return (code *)(DAT_00018934 + 0x19024);
  }
  if (4 < param_1) {
    if (param_1 == 7) {
      return (code *)(DAT_00018948 + 0x19060);
    }
    if (7 < param_1) {
      if (param_1 == 8) {
        return (code *)(DAT_00018954 + 0x19084);
      }
      if (param_1 != 9) {
        return (code *)(DAT_00018790 + 0x17a7c);
      }
      return (code *)(DAT_00018958 + 0x19090);
    }
    if (param_1 == 5) {
      return (code *)(DAT_0001894c + 0x1906c);
    }
    if (param_1 != 6) {
      return (code *)(DAT_0001878c + 0x17a60);
    }
    return (code *)(DAT_00018950 + 0x19078);
  }
  if (param_1 == 1) {
    return (code *)(DAT_00018938 + 0x19030);
  }
  if (param_1 < 2) {
    if (param_1 != 0) {
      return (code *)(DAT_00018784 + 0x17a1c);
    }
    return (code *)(DAT_0001893c + 0x1903c);
  }
  if (param_1 == 2) {
    return (code *)(DAT_00018940 + 0x19048);
  }
  if (param_1 != 3) {
    return (code *)(DAT_00018788 + 0x17a38);
  }
  return (code *)(DAT_00018944 + 0x19054);
}



/* ===== FUN_0001a40c @ 0001a40c size=108 ===== */

char * FUN_0001a40c(int *param_1,uint param_2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  char *__s;
  char *__format;
  
  pcVar2 = malloc(0x78);
  if (pcVar2 != (char *)0x0) {
    __format = (char *)(DAT_0001a478 + 0x1a440);
    *pcVar2 = '\0';
    __s = pcVar2;
    while (piVar4 = param_1 + 2, *param_1 != 0) {
      puVar1 = (uint *)(param_1 + 1);
      param_1 = piVar4;
      if ((param_2 & *puVar1) != 0) {
        iVar3 = sprintf(__s,__format);
        __s = __s + iVar3;
      }
    }
  }
  return pcVar2;
}



/* ===== FUN_0001a47c @ 0001a47c size=92 ===== */

char * FUN_0001a47c(undefined4 *param_1,int param_2)

{
  int *piVar1;
  char *__dest;
  char *pcVar2;
  
  __dest = malloc(0x32);
  pcVar2 = (char *)0x0;
  if (__dest != (char *)0x0) {
    *__dest = '\0';
    do {
      pcVar2 = (char *)*param_1;
      if (pcVar2 == (char *)0x0) {
        return __dest;
      }
      piVar1 = param_1 + 1;
      param_1 = param_1 + 2;
    } while (*piVar1 != param_2);
    pcVar2 = strcpy(__dest,pcVar2);
  }
  return pcVar2;
}



/* ===== FUN_0001a5b4 @ 0001a5b4 size=20 ===== */

void FUN_0001a5b4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return;
}



/* ===== FUN_0001a988 @ 0001a988 size=232 ===== */

void FUN_0001a988(char *param_1,uint *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *__ptr;
  char *__s2;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  char *local_30;
  int local_2c;
  uint *puStack_28;
  
  pcVar5 = (char *)((int)&DAT_0001a9ec + DAT_0001a9a0);
  uVar6 = 0;
  piVar7 = *(int **)(DAT_0001a5a8 + 0x1a4ec + DAT_0001a5ac);
  local_2c = *piVar7;
  local_30 = pcVar5;
  puStack_28 = param_2;
  if ((param_1 != (char *)0x0) &&
     (__ptr = strdup(param_1), iVar2 = DAT_0001a5b0, local_30 = __ptr, __ptr != (char *)0x0)) {
    *param_2 = 0;
    while (__s2 = strsep(&local_30,(char *)(iVar2 + 0x1a544)), pcVar3 = pcVar5, __s2 != (char *)0x0)
    {
      while( true ) {
        pcVar1 = pcVar3;
        if (*(char **)pcVar1 == (char *)0x0) break;
        iVar4 = strcasecmp(*(char **)pcVar1,__s2);
        pcVar3 = pcVar1 + 8;
        if (iVar4 == 0) {
          uVar6 = 1;
          *param_2 = *param_2 | *(uint *)(pcVar1 + 4);
        }
      }
    }
    free(__ptr);
  }
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}



/* ===== FUN_0001a9d8 @ 0001a9d8 size=20 ===== */

void FUN_0001a9d8(undefined4 param_1)

{
  FUN_0001a40c(&UNK_0001ab10 + DAT_0001a9ec,param_1);
  return;
}



/* ===== FUN_0001a9f0 @ 0001a9f0 size=24 ===== */

void FUN_0001a9f0(char *param_1,uint *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *__ptr;
  char *__s2;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcStack_30;
  int iStack_2c;
  uint *puStack_28;
  
  pcVar5 = &UNK_0001ab2c + DAT_0001aa08;
  uVar6 = 0;
  piVar7 = *(int **)(DAT_0001a5a8 + 0x1a4ec + DAT_0001a5ac);
  iStack_2c = *piVar7;
  pcStack_30 = pcVar5;
  puStack_28 = param_2;
  if ((param_1 != (char *)0x0) &&
     (__ptr = strdup(param_1), iVar2 = DAT_0001a5b0, pcStack_30 = __ptr, __ptr != (char *)0x0)) {
    *param_2 = 0;
    while (__s2 = strsep(&pcStack_30,(char *)(iVar2 + 0x1a544)), pcVar3 = pcVar5,
          __s2 != (char *)0x0) {
      while( true ) {
        pcVar1 = pcVar3;
        if (*(char **)pcVar1 == (char *)0x0) break;
        iVar4 = strcasecmp(*(char **)pcVar1,__s2);
        pcVar3 = pcVar1 + 8;
        if (iVar4 == 0) {
          uVar6 = 1;
          *param_2 = *param_2 | *(uint *)(pcVar1 + 4);
        }
      }
    }
    free(__ptr);
  }
  if (iStack_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}



/* ===== FUN_0001aa0c @ 0001aa0c size=124 ===== */

char * FUN_0001aa0c(uint param_1)

{
  char *__dest;
  char *__src;
  
  __dest = malloc(0x32);
  if (__dest != (char *)0x0) {
    *__dest = '\0';
    if ((param_1 & 1) == 0) {
      strcpy(__dest,(char *)(DAT_0001aa88 + 0x1aa40));
    }
    __src = (char *)FUN_0001a40c(&UNK_0001aba8 + DAT_0001aa8c,param_1);
    if (__src == (char *)0x0) {
      free(__dest);
      __dest = (char *)0x0;
    }
    else {
      strcat(__dest,__src);
      free(__src);
    }
  }
  return __dest;
}



/* ===== FUN_0001ac4c @ 0001ac4c size=24 ===== */

void FUN_0001ac4c(undefined4 param_1)

{
  FUN_0001a47c(DAT_0001ac64 + 0x1b544,param_1);
  return;
}



/* ===== thunk_FUN_0001ac4c @ 0001ac8c size=4 ===== */

void thunk_FUN_0001ac4c(undefined4 param_1)

{
  FUN_0001a47c(DAT_0001ac64 + 0x1b544,param_1);
  return;
}



/* ===== FUN_0001accc @ 0001accc size=436 ===== */

char * FUN_0001accc(byte *param_1,char *param_2,int param_3)

{
  char *__s;
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  char *__s_00;
  int iVar4;
  char *__s_01;
  size_t sVar5;
  int iVar6;
  char *__s_02;
  byte *pbVar7;
  char *__format;
  int iVar8;
  char *__format_00;
  
  iVar6 = DAT_0001ae80 + 0x1b634;
  iVar4 = DAT_0001ae80 + 0x1b874;
  sVar5 = 10;
  iVar8 = iVar6;
  iVar3 = iVar6;
  pbVar7 = param_1;
  do {
    for (; *(char **)(iVar8 + -8) != (char *)0x0; iVar8 = iVar8 + 8) {
      if (((uint)*pbVar7 & *(uint *)(iVar8 + -4)) != 0) {
        sVar1 = strlen(*(char **)(iVar8 + -8));
        sVar2 = 0;
        if (param_2 != (char *)0x0) {
          sVar2 = strlen(param_2);
        }
        sVar5 = sVar5 + 1 + sVar1 + sVar2;
      }
    }
    iVar8 = iVar3 + 0x48;
    pbVar7 = pbVar7 + 1;
    iVar3 = iVar8;
  } while (iVar8 != iVar4);
  __s = malloc(sVar5);
  if (__s != (char *)0x0) {
    *__s = '\0';
    __s_01 = __s;
    if (param_2 != (char *)0x0) {
      iVar8 = sprintf(__s,(char *)(DAT_0001ae84 + 0x1ad60),param_2);
      __s_01 = __s + iVar8;
    }
    pbVar7 = param_1 + 8;
    if (param_2 == (char *)0x0) {
      param_2 = (char *)(DAT_0001ae88 + 0x1ad7c);
    }
    __format = (char *)(DAT_0001ae8c + 0x1ad90);
    __format_00 = (char *)(DAT_0001ae90 + 0x1ad94);
    __s_02 = __s_01;
    iVar8 = iVar6;
    do {
      for (; __s_00 = *(char **)(iVar6 + -8), __s_00 != (char *)0x0; iVar6 = iVar6 + 8) {
        if (((uint)*param_1 & *(uint *)(iVar6 + -4)) != 0) {
          sVar5 = strlen(__s_02);
          sVar2 = strlen(__s_00);
          if (param_3 - 1U < sVar5 + sVar2) {
            iVar3 = sprintf(__s_01,__format_00,param_2);
            __s_01 = __s_01 + iVar3;
            __s_02 = __s_01;
          }
          iVar3 = sprintf(__s_01,__format,*(undefined4 *)(iVar6 + -8));
          __s_01 = __s_01 + iVar3;
        }
      }
      param_1 = param_1 + 1;
      iVar6 = iVar8 + 0x48;
      iVar8 = iVar6;
    } while (param_1 != pbVar7);
  }
  return __s;
}



/* ===== FUN_0001ae94 @ 0001ae94 size=296 ===== */

uint FUN_0001ae94(uint param_1,code *param_2,undefined4 param_3)

{
  ulong __request;
  int __fd;
  ushort *__ptr;
  int *piVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  
  uVar3 = param_1;
  pcVar6 = param_2;
  uVar7 = param_3;
  __fd = socket(0x1f,DAT_0001afbc,1);
  if (__fd < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    __ptr = malloc(0x84);
    piVar1 = __errno_location();
    if (__ptr == (ushort *)0x0) {
      uVar3 = 0xffffffff;
      iVar5 = *piVar1;
    }
    else {
      memset(__ptr + 1,0,0x82);
      __request = DAT_0001afc0;
      *__ptr = 0x10;
      iVar5 = ioctl(__fd,__request,__ptr,0x10,uVar3,pcVar6,uVar7);
      if (iVar5 < 0) {
        iVar5 = *piVar1;
      }
      else {
        puVar4 = __ptr + 2;
        uVar3 = 1 << (param_1 & 0x1f);
        for (iVar5 = 0; iVar5 < (int)(uint)*__ptr; iVar5 = iVar5 + 1) {
          if (((uVar3 & *(uint *)(puVar4 + (((int)param_1 >> 5) + 1) * 2)) != 0) &&
             ((param_2 == (code *)0x0 || (iVar2 = (*param_2)(__fd,*puVar4,param_3), iVar2 != 0)))) {
            uVar3 = (uint)*puVar4;
            iVar5 = 0;
            goto LAB_0001af74;
          }
          puVar4 = puVar4 + 4;
        }
        iVar5 = 0x13;
      }
      uVar3 = 0xffffffff;
LAB_0001af74:
      free(__ptr);
    }
    close(__fd);
    *piVar1 = iVar5;
  }
  return uVar3;
}



/* ===== FUN_0001afc4 @ 0001afc4 size=92 ===== */

void FUN_0001afc4(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_14;
  uint local_10;
  undefined4 *local_c;
  
  piVar3 = *(int **)(DAT_0001b020 + 0x1afd8 + DAT_0001b024);
  local_14 = param_2;
  if (param_1 == (undefined4 *)0x0) {
    local_14 = 0;
  }
  local_c = (undefined4 *)*piVar3;
  puVar2 = param_1;
  puVar1 = local_c;
  local_10 = param_3;
  if (param_1 == (undefined4 *)0x0) {
    local_10 = param_3 & 0xffff0000;
    puVar2 = &local_14;
    puVar1 = puVar2;
  }
  FUN_0001ae94(0,DAT_0001b028 + 0x1b000,puVar2,puVar1,param_1);
  if (local_c != (undefined4 *)*piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001b02c @ 0001b02c size=112 ===== */

int FUN_0001b02c(undefined2 param_1,undefined2 *param_2)

{
  int __fd;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  __fd = socket(0x1f,DAT_0001b09c,1);
  iVar1 = __fd;
  if (-1 < __fd) {
    memset(param_2 + 1,0,0x5a);
    *param_2 = param_1;
    iVar1 = ioctl(__fd,DAT_0001b0a0,param_2);
    piVar2 = __errno_location();
    iVar3 = *piVar2;
    close(__fd);
    *piVar2 = iVar3;
  }
  return iVar1;
}



/* ===== FUN_0001b0a4 @ 0001b0a4 size=156 ===== */

void FUN_0001b0a4(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  int *piVar5;
  undefined1 auStack_70 [10];
  undefined1 auStack_66 [6];
  uint local_60;
  int local_14;
  
  piVar5 = *(int **)(DAT_0001b140 + 0x1b0b4 + DAT_0001b144);
  local_14 = *piVar5;
  pvVar1 = memset(auStack_70,0,0x5c);
  iVar2 = FUN_0001b02c(param_1,pvVar1);
  if (iVar2 == 0) {
    if ((local_60 & 1) != 0) {
      FUN_0001a5b4(param_2,auStack_66);
      uVar4 = extraout_r2;
      goto LAB_0001b120;
    }
    piVar3 = __errno_location();
    *piVar3 = 100;
  }
  uVar4 = 0xffffffff;
LAB_0001b120:
  if (local_14 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



/* ===== FUN_0001b148 @ 0001b148 size=188 ===== */

void FUN_0001b148(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_14;
  
  piVar5 = *(int **)(DAT_0001b204 + 0x1b164 + DAT_0001b208);
  local_14 = *piVar5;
  uStack_1c = param_2;
  uStack_18 = param_3;
  iVar1 = strncmp(param_1,(char *)(DAT_0001b20c + 0x1b174),3);
  if ((iVar1 == 0) && (sVar2 = strlen(param_1), 3 < sVar2)) {
    iVar1 = atoi(param_1 + 3);
    iVar3 = FUN_0001b0a4(iVar1,&uStack_1c);
    if (iVar3 < 0) {
      iVar1 = -1;
    }
  }
  else {
    piVar4 = __errno_location();
    *piVar4 = 0x13;
    FUN_000176e0(param_1,&uStack_1c);
    iVar1 = FUN_0001ae94(0,DAT_0001b210 + 0x1b1f4,&uStack_1c);
  }
  if (local_14 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}



/* ===== FUN_0001b214 @ 0001b214 size=320 ===== */

uint FUN_0001b214(int param_1,undefined1 param_2,int param_3,undefined2 *param_4,int *param_5,
                 undefined2 param_6)

{
  byte bVar1;
  int *piVar2;
  uint __fd;
  undefined2 *__ptr;
  void *pvVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  
  if (param_3 < 1) {
    uVar7 = 0;
    param_3 = 0xff;
  }
  else {
    uVar7 = (undefined1)param_3;
  }
  if ((param_1 < 0) && (param_1 = FUN_0001afc4(0), param_1 < 0)) {
    piVar2 = __errno_location();
    *piVar2 = 0x13;
    uVar5 = 0xffffffff;
  }
  else {
    __fd = socket(0x1f,DAT_0001b354,1);
    uVar5 = __fd;
    if (-1 < (int)__fd) {
      __ptr = malloc(param_3 * 0xe + 10);
      if (__ptr == (undefined2 *)0x0) {
        uVar5 = 0xffffffff;
      }
      else {
        *__ptr = (short)param_1;
        __ptr[1] = param_6;
        if (param_4 == (undefined2 *)0x0) {
          __ptr[2] = (short)DAT_0001b358;
          uVar4 = 0x9e;
        }
        else {
          uVar4 = *(undefined1 *)(param_4 + 1);
          __ptr[2] = *param_4;
        }
        *(undefined1 *)(__ptr + 4) = uVar7;
        *(undefined1 *)((int)__ptr + 7) = param_2;
        *(undefined1 *)(__ptr + 3) = uVar4;
        uVar5 = ioctl(__fd,DAT_0001b35c,__ptr);
        if (-1 < (int)uVar5) {
          bVar1 = *(byte *)(__ptr + 4);
          if (*param_5 == 0) {
            pvVar3 = malloc((uint)bVar1 * 0xe);
            *param_5 = (int)pvVar3;
          }
          if ((void *)*param_5 == (void *)0x0) {
            uVar5 = 0xffffffff;
          }
          else {
            memcpy((void *)*param_5,__ptr + 5,(uint)bVar1 * 0xe);
            uVar5 = (uint)*(byte *)(__ptr + 4);
          }
        }
        free(__ptr);
      }
      piVar2 = __errno_location();
      iVar6 = *piVar2;
      close(__fd);
      *piVar2 = iVar6;
    }
  }
  return uVar5;
}



/* ===== FUN_0001b360 @ 0001b360 size=160 ===== */

void FUN_0001b360(undefined2 param_1)

{
  int __fd;
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  sockaddr local_24;
  
  piVar4 = *(int **)(DAT_0001b400 + 0x1b370 + DAT_0001b404);
  local_24.sa_data._6_4_ = *piVar4;
  __fd = socket(0x1f,DAT_0001b408,1);
  iVar3 = __fd;
  if (-1 < __fd) {
    local_24.sa_data[2] = '\0';
    local_24.sa_data[3] = '\0';
    local_24.sa_family = 0x1f;
    local_24.sa_data._0_2_ = param_1;
    iVar1 = bind(__fd,&local_24,6);
    if (iVar1 < 0) {
      piVar2 = __errno_location();
      iVar1 = *piVar2;
      iVar3 = -1;
      close(__fd);
      *piVar2 = iVar1;
    }
  }
  if (local_24.sa_data._6_4_ != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}



/* ===== <EXTERNAL>::close @ 0001b40c size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00033fbc)(__fd);
  return iVar1;
}



/* ===== FUN_0001b410 @ 0001b410 size=192 ===== */

void FUN_0001b410(int param_1,short param_2,int param_3,int param_4,undefined4 param_5)

{
  ssize_t sVar1;
  undefined4 uVar2;
  int *piVar3;
  int __count;
  int *piVar4;
  undefined1 local_39;
  ushort local_38;
  undefined1 local_36;
  iovec local_34;
  ushort *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  __count = 3;
  piVar4 = *(int **)(DAT_0001b4d0 + 0x1b430 + DAT_0001b4d4);
  local_38 = (ushort)((uint)(param_3 << 0x16) >> 0x16) | param_2 << 10;
  local_1c = *piVar4;
  local_34.iov_base = &local_39;
  local_2c = &local_38;
  local_39 = 1;
  local_36 = (undefined1)param_4;
  local_34.iov_len = 1;
  local_28 = 3;
  if (param_4 == 0) {
    __count = 2;
  }
  else {
    local_24 = param_5;
    local_20 = param_4;
  }
  do {
    sVar1 = writev(param_1,&local_34,__count);
    if (-1 < sVar1) {
      uVar2 = 0;
      goto LAB_0001b4b4;
    }
    piVar3 = __errno_location();
  } while (*piVar3 == 4 || *piVar3 == 0xb);
  uVar2 = 0xffffffff;
LAB_0001b4b4:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_0001b4d8 @ 0001b4d8 size=788 ===== */

void FUN_0001b4d8(int param_1,short *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  ssize_t sVar4;
  byte *__src;
  uint uVar5;
  size_t __n;
  int *piVar6;
  ushort uVar7;
  bool bVar8;
  int local_16c;
  socklen_t local_15c;
  pollfd local_158;
  undefined4 local_150;
  uint local_14c [3];
  undefined1 auStack_140 [16];
  undefined1 uStack_130;
  byte local_12f;
  byte local_12d;
  undefined1 auStack_12c [2];
  byte abStack_12a [254];
  int local_2c;
  
  piVar6 = *(int **)(DAT_0001b7ec + 0x1b4ec + DAT_0001b7f0);
  local_2c = *piVar6;
  local_15c = 0x10;
  uVar7 = param_2[1] & 0x3ffU | *param_2 << 10;
  iVar1 = getsockopt(param_1,0,2,auStack_140,&local_15c);
  if (-1 < iVar1) {
    local_150 = 0x10;
    local_14c[0] = 0xc000;
    local_14c[1] = 0x40000000;
    iVar1 = (int)(*(uint *)(param_2 + 2) << 0x1a) >> 0x1f;
    local_14c[-iVar1] = local_14c[-iVar1] | 1 << (*(uint *)(param_2 + 2) & 0x1f);
    local_14c[2] = (uint)uVar7;
    iVar1 = setsockopt(param_1,0,2,&local_150,0x10);
    if (-1 < iVar1) {
      iVar1 = FUN_0001b410(param_1,*param_2,param_2[1],(char)param_2[6],*(undefined4 *)(param_2 + 4)
                          );
      if (-1 < iVar1) {
        local_16c = 0xb;
LAB_0001b7b8:
        do {
          local_16c = local_16c + -1;
          if (local_16c == 0) {
LAB_0001b62c:
            piVar3 = __errno_location();
            iVar1 = 0x6e;
LAB_0001b700:
            *piVar3 = iVar1;
            goto LAB_0001b5cc;
          }
          if (param_3 != 0) {
            local_158.events = 1;
            local_158.fd = param_1;
            while( true ) {
              iVar1 = poll(&local_158,1,param_3);
              if (-1 < iVar1) break;
              piVar3 = __errno_location();
              if (*piVar3 != 4 && *piVar3 != 0xb) goto LAB_0001b5cc;
            }
            if (iVar1 == 0) goto LAB_0001b62c;
            param_3 = param_3 - 10 & ~((int)(param_3 - 10) >> 0x1f);
          }
          while (sVar4 = read(param_1,&uStack_130,0x104), sVar4 < 0) {
            piVar3 = __errno_location();
            if (*piVar3 != 4 && *piVar3 != 0xb) goto LAB_0001b5cc;
          }
          uVar5 = (uint)local_12f;
          if (uVar5 == 0xe) {
            if (auStack_12c == (undefined1  [2])uVar7) {
              __src = abStack_12a;
              __n = *(size_t *)(param_2 + 10);
              if ((int)(sVar4 - 6U) < (int)*(size_t *)(param_2 + 10)) {
                __n = sVar4 - 6U;
              }
              *(size_t *)(param_2 + 10) = __n;
              goto LAB_0001b72c;
            }
            goto LAB_0001b7b8;
          }
          if (uVar5 < 0xf) {
            if (uVar5 != 7) goto LAB_0001b68c;
            if (*(int *)(param_2 + 2) != 7) goto LAB_0001b7b8;
            iVar1 = memcmp(auStack_12c,*(void **)(param_2 + 4),6);
            bVar8 = iVar1 == 0;
          }
          else {
            if (uVar5 == 0xf) {
              if (stack0xfffffed5 == uVar7) {
                if (*(int *)(param_2 + 2) == 0xf) break;
                if (local_12d != 0) {
                  piVar3 = __errno_location();
                  iVar1 = 5;
                  goto LAB_0001b700;
                }
              }
              goto LAB_0001b7b8;
            }
            if (uVar5 == 0x3e) {
              if ((uint)local_12d == *(uint *)(param_2 + 2)) {
                __src = auStack_12c;
                __n = *(size_t *)(param_2 + 10);
                if ((int)(sVar4 - 4U) < (int)*(size_t *)(param_2 + 10)) {
                  __n = sVar4 - 4U;
                }
                *(size_t *)(param_2 + 10) = __n;
                goto LAB_0001b72c;
              }
              goto LAB_0001b7b8;
            }
LAB_0001b68c:
            bVar8 = uVar5 == *(uint *)(param_2 + 2);
          }
        } while (!bVar8);
        __src = &local_12d;
        __n = *(size_t *)(param_2 + 10);
        if ((int)(sVar4 - 3U) < (int)*(size_t *)(param_2 + 10)) {
          __n = sVar4 - 3U;
        }
        *(size_t *)(param_2 + 10) = __n;
LAB_0001b72c:
        memcpy(*(void **)(param_2 + 8),__src,__n);
        setsockopt(param_1,0,2,auStack_140,0x10);
        uVar2 = 0;
        goto LAB_0001b754;
      }
LAB_0001b5cc:
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      setsockopt(param_1,0,2,auStack_140,0x10);
      *piVar3 = iVar1;
    }
  }
  uVar2 = 0xffffffff;
LAB_0001b754:
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_0001b7f4 @ 0001b7f4 size=228 ===== */

void FUN_0001b7f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined1 param_5,undefined2 *param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined5 *local_48;
  undefined4 local_44;
  uint *local_40;
  undefined4 local_3c;
  uint local_38 [3];
  undefined5 local_2c;
  undefined1 uStack_27;
  undefined2 uStack_26;
  undefined1 local_24;
  undefined1 uStack_23;
  undefined2 local_22;
  undefined1 local_20;
  int local_1c;
  
  piVar4 = *(int **)(DAT_0001b8d8 + 0x1b814 + DAT_0001b8dc);
  local_1c = *piVar4;
  local_2c = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_23 = 0;
  local_22 = 0;
  local_20 = 0;
  FUN_0001a5b4(&local_2c);
  local_24 = 2;
  local_50 = DAT_0001b8e0;
  uStack_4c = 3;
  local_20 = param_5;
  local_44 = 0xd;
  local_40 = local_38;
  local_3c = 0xb;
  local_48 = &local_2c;
  local_22 = param_4;
  iVar1 = FUN_0001b4d8(param_1,&local_50,param_7);
  if (-1 < iVar1) {
    if ((local_38[0] & 0xff) == 0) {
      *param_6 = (short)(local_38[0] >> 8);
      uVar3 = 0;
      goto LAB_0001b8bc;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001b8bc:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_0001b8e4 @ 0001b8e4 size=160 ===== */

void FUN_0001b8e4(undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_34;
  undefined1 local_32;
  char local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_0001b984 + 0x1b8f8 + DAT_0001b988);
  local_14 = *piVar4;
  local_2c = DAT_0001b98c;
  local_24 = &local_34;
  local_20 = 3;
  local_1c = local_30;
  local_18 = 4;
  local_28 = 5;
  local_34 = param_2;
  local_32 = param_3;
  iVar1 = FUN_0001b4d8(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_30[0] == '\0') goto LAB_0001b968;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001b968:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001b990 @ 0001b990 size=188 ===== */

void FUN_0001b990(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined2 uStack_23;
  undefined4 uStack_21;
  int local_1c;
  
  piVar4 = *(int **)(DAT_0001ba4c + 0x1b9b0 + DAT_0001ba50);
  uStack_23 = 0;
  local_1c = *piVar4;
  uStack_21 = 0;
  local_24 = param_3;
  FUN_0001a5b4(&uStack_23);
  local_38 = 0;
  local_3c = DAT_0001ba54;
  local_30 = 7;
  local_2c = &local_3d;
  local_28 = 1;
  local_34 = &local_24;
  iVar1 = FUN_0001b4d8(param_1,&local_3c,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_3d == '\0') goto LAB_0001ba30;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001ba30:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001ba58 @ 0001ba58 size=188 ===== */

void FUN_0001ba58(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined2 uStack_23;
  undefined4 uStack_21;
  int local_1c;
  
  piVar4 = *(int **)(DAT_0001bb14 + 0x1ba78 + DAT_0001bb18);
  uStack_23 = 0;
  local_1c = *piVar4;
  uStack_21 = 0;
  local_24 = param_3;
  FUN_0001a5b4(&uStack_23);
  local_38 = 0;
  local_3c = DAT_0001bb1c;
  local_30 = 7;
  local_2c = &local_3d;
  local_28 = 1;
  local_34 = &local_24;
  iVar1 = FUN_0001b4d8(param_1,&local_3c,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_3d == '\0') goto LAB_0001baf8;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001baf8:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001bb20 @ 0001bb20 size=172 ===== */

void FUN_0001bb20(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = (undefined1 *)&local_30;
  piVar4 = *(int **)(DAT_0001bbcc + 0x1bb34 + DAT_0001bbd0);
  local_14 = *piVar4;
  local_28 = 0;
  local_30 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_0001bbd4;
  local_18 = 2;
  iVar1 = FUN_0001b4d8(param_1,&local_2c);
  if (-1 < iVar1) {
    if ((char)local_30 == '\0') {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = local_30._1_1_;
      }
      uVar3 = 0;
      goto LAB_0001bb9c;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001bb9c:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001bbd8 @ 0001bbd8 size=144 ===== */

void FUN_0001bbd8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_0001bc68 + 0x1bbe8 + DAT_0001bc6c);
  local_c = *piVar4;
  local_20 = 0;
  local_24 = DAT_0001bc70;
  local_14 = &local_25;
  uStack_1c = 0;
  uStack_18 = 0;
  local_10 = 1;
  iVar1 = FUN_0001b4d8(param_1,&local_24,param_2);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_25 == '\0') goto LAB_0001bc4c;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001bc4c:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001bdcc @ 0001bdcc size=228 ===== */

void FUN_0001bdcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 size_t param_5,char *param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined2 *local_138;
  undefined4 local_134;
  char *local_130;
  undefined4 local_12c;
  undefined2 local_128;
  undefined4 uStack_126;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined2 local_120;
  char local_11c [7];
  char acStack_115 [247];
  char local_1e;
  int local_1c;
  
  piVar4 = *(int **)(DAT_0001beb0 + 0x1bdec + DAT_0001beb4);
  local_1c = *piVar4;
  local_128 = 0;
  uStack_126 = 0;
  uStack_122 = 0;
  uStack_121 = 0;
  local_120 = 0;
  FUN_0001a5b4(&local_128);
  local_134 = 10;
  local_130 = local_11c;
  local_140 = DAT_0001beb8;
  uStack_13c = 7;
  local_12c = 0xff;
  local_138 = &local_128;
  local_120 = param_4;
  iVar1 = FUN_0001b4d8(param_1,&local_140,param_7);
  if (-1 < iVar1) {
    if (local_11c[0] == '\0') {
      local_1e = local_11c[0];
      strncpy(param_6,acStack_115,param_5);
      uVar3 = 0;
      goto LAB_0001be94;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001be94:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001bebc @ 0001bebc size=32 ===== */

void FUN_0001bebc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0001bdcc(param_1,param_2,2,0,param_3,param_4,param_5,param_4);
  return;
}



/* ===== FUN_0001bf74 @ 0001bf74 size=192 ===== */

void FUN_0001bf74(undefined4 param_1,undefined2 param_2,undefined2 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_38 [2];
  char local_34 [3];
  undefined1 local_31;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_24 = (undefined1 *)local_38;
  piVar4 = *(int **)(DAT_0001c034 + 0x1bf90 + DAT_0001c038);
  local_14 = *piVar4;
  local_2c = DAT_0001c03c;
  local_28 = 0xc;
  local_20 = 2;
  local_1c = local_34;
  local_18 = 8;
  local_38[0] = param_2;
  iVar1 = FUN_0001b4d8(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    if (local_34[0] == '\0') {
      *param_3 = local_30;
      *(undefined1 *)(param_3 + 3) = local_31;
      param_3[4] = local_2e;
      uVar3 = 0;
      goto LAB_0001c018;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001c018:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001c040 @ 0001c040 size=192 ===== */

void FUN_0001c040(undefined4 param_1,undefined2 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_3c [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined2 *local_30;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_24;
  char local_20 [3];
  undefined4 local_1d;
  undefined4 local_19;
  int local_14;
  
  piVar4 = *(int **)(DAT_0001c100 + 0x1c05c + DAT_0001c104);
  local_30 = local_3c;
  local_14 = *piVar4;
  local_2c = 2;
  local_28 = local_20;
  local_38 = DAT_0001c108;
  local_34 = 0xb;
  local_24 = 0xb;
  local_3c[0] = param_2;
  iVar1 = FUN_0001b4d8(param_1,&local_38,param_4);
  if (-1 < iVar1) {
    if (local_20[0] == '\0') {
      if (param_3 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        *param_3 = local_1d;
        param_3[1] = local_19;
        uVar3 = 0;
      }
      goto LAB_0001c0e4;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001c0e4:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_0001c10c @ 0001c10c size=216 ===== */

void FUN_0001c10c(undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined1 *param_4,
                 undefined4 *param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  char local_24 [4];
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  int local_14;
  
  local_34 = (undefined1 *)&local_40;
  piVar4 = *(int **)(DAT_0001c1e4 + 0x1c128 + DAT_0001c1e8);
  local_14 = *piVar4;
  local_3c = DAT_0001c1ec;
  uStack_38 = 0x23;
  local_30 = 3;
  local_2c = local_24;
  local_28 = 0xd;
  local_40 = param_2;
  local_3e = param_3;
  iVar1 = FUN_0001b4d8(param_1,&local_3c,param_6);
  if (-1 < iVar1) {
    if (local_24[0] == '\0') {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = local_20;
      }
      if (param_5 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        *param_5 = local_1f;
        param_5[1] = local_1b;
      }
      goto LAB_0001c1c8;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001c1c8:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_0001c1f0 @ 0001c1f0 size=180 ===== */

void FUN_0001c1f0(undefined4 param_1,undefined2 param_2,undefined2 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_38 [2];
  char local_34 [3];
  undefined2 local_31;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_24 = (undefined1 *)local_38;
  piVar4 = *(int **)(DAT_0001c2a4 + 0x1c210 + DAT_0001c2a8);
  local_14 = *piVar4;
  local_18 = 5;
  local_2c = DAT_0001c2ac;
  local_28 = 0x1c;
  local_20 = 2;
  local_1c = local_34;
  local_38[0] = param_2;
  iVar1 = FUN_0001b4d8(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    if (local_34[0] == '\0') {
      *param_3 = local_31;
      uVar3 = 0;
      goto LAB_0001c288;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001c288:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001cc80 @ 0001cc80 size=156 ===== */

void FUN_0001cc80(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_2c [2];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_0001cd1c + 0x1cc90 + DAT_0001cd20);
  local_c = *piVar4;
  local_24 = DAT_0001cd24;
  local_20 = 6;
  local_1c = local_2c;
  local_18 = 2;
  local_14 = local_28;
  local_10 = 3;
  local_2c[0] = param_2;
  iVar1 = FUN_0001b4d8(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_0001cd00;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001cd00:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001cd28 @ 0001cd28 size=164 ===== */

void FUN_0001cd28(undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_2c;
  undefined1 local_2a;
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_0001cdcc + 0x1cd3c + DAT_0001cdd0);
  local_c = *piVar4;
  local_24 = DAT_0001cdd4;
  local_20 = 8;
  local_1c = &local_2c;
  local_18 = 3;
  local_14 = local_28;
  local_10 = 4;
  local_2c = param_2;
  local_2a = param_3;
  iVar1 = FUN_0001b4d8(param_1,&local_24,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_0001cdb0;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001cdb0:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001cdd8 @ 0001cdd8 size=156 ===== */

void FUN_0001cdd8(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_2c [2];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_0001ce74 + 0x1cde8 + DAT_0001ce78);
  local_c = *piVar4;
  local_24 = DAT_0001ce7c;
  local_20 = 9;
  local_1c = local_2c;
  local_18 = 2;
  local_14 = local_28;
  local_10 = 3;
  local_2c[0] = param_2;
  iVar1 = FUN_0001b4d8(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_0001ce58;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001ce58:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001ce80 @ 0001ce80 size=176 ===== */

void FUN_0001ce80(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 *local_3c;
  undefined4 local_38;
  char *local_34;
  undefined4 local_30;
  undefined1 auStack_2c [6];
  undefined1 local_26;
  char local_24 [8];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0001cf30 + 0x1cea0 + DAT_0001cf34);
  local_1c = *piVar4;
  FUN_0001a5b4(auStack_2c,param_2,param_4);
  local_38 = 7;
  local_34 = local_24;
  local_44 = DAT_0001cf38;
  uStack_40 = 0x12;
  local_30 = 8;
  local_3c = auStack_2c;
  local_26 = param_3;
  iVar1 = FUN_0001b4d8(param_1,&local_44);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_24[0] == '\0') goto LAB_0001cf14;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001cf14:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001d964 @ 0001d964 size=172 ===== */

void FUN_0001d964(undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined1 *param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_34;
  undefined1 local_32;
  char local_30 [3];
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_0001da10 + 0x1d978 + DAT_0001da14);
  local_14 = *piVar4;
  local_2c = DAT_0001da18;
  uStack_28 = 0;
  local_24 = &local_34;
  local_20 = 3;
  local_1c = local_30;
  local_18 = 4;
  local_34 = param_2;
  local_32 = param_3;
  iVar1 = FUN_0001b4d8(param_1,&local_2c,param_5);
  if (-1 < iVar1) {
    if (local_30[0] == '\0') {
      *param_4 = local_2d;
      uVar3 = 0;
      goto LAB_0001d9f4;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001d9f4:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_0001da1c @ 0001da1c size=180 ===== */

void FUN_0001da1c(undefined4 param_1,undefined2 param_2,undefined2 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_3a [3];
  char local_34 [3];
  undefined2 local_31;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_0001dad0 + 0x1da3c + DAT_0001dad4);
  local_18 = 5;
  local_14 = *piVar4;
  local_28 = 0;
  local_2c = DAT_0001dad8;
  local_24 = local_3a;
  local_20 = 2;
  local_1c = local_34;
  local_3a[0] = param_2;
  iVar1 = FUN_0001b4d8(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    if (local_34[0] == '\0') {
      *param_3 = local_31;
      uVar3 = 0;
      goto LAB_0001dab4;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001dab4:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001dadc @ 0001dadc size=164 ===== */

void FUN_0001dadc(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_2c [4];
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_0001db80 + 0x1daf0 + DAT_0001db84);
  local_20 = 0;
  local_c = *piVar4;
  local_24 = DAT_0001db88;
  local_1c = &local_28;
  local_18 = 4;
  local_14 = local_2c;
  local_10 = 3;
  local_28 = param_2;
  local_26 = param_3;
  iVar1 = FUN_0001b4d8(param_1,&local_24,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_2c[0] == '\0') goto LAB_0001db64;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001db64:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001db8c @ 0001db8c size=180 ===== */

void FUN_0001db8c(undefined4 param_1,undefined2 param_2,undefined2 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_3a [3];
  char local_34 [3];
  undefined2 local_31;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_0001dc40 + 0x1dbac + DAT_0001dc44);
  local_18 = 5;
  local_14 = *piVar4;
  local_28 = 0;
  local_2c = DAT_0001dc48;
  local_24 = local_3a;
  local_20 = 2;
  local_1c = local_34;
  local_3a[0] = param_2;
  iVar1 = FUN_0001b4d8(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    if (local_34[0] == '\0') {
      *param_3 = local_31;
      uVar3 = 0;
      goto LAB_0001dc24;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001dc24:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001dc4c @ 0001dc4c size=164 ===== */

void FUN_0001dc4c(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_2c [4];
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_0001dcf0 + 0x1dc60 + DAT_0001dcf4);
  local_20 = 0;
  local_c = *piVar4;
  local_24 = DAT_0001dcf8;
  local_1c = &local_28;
  local_18 = 4;
  local_14 = local_2c;
  local_10 = 3;
  local_28 = param_2;
  local_26 = param_3;
  iVar1 = FUN_0001b4d8(param_1,&local_24,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_2c[0] == '\0') goto LAB_0001dcd4;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001dcd4:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001ddc0 @ 0001ddc0 size=172 ===== */

void FUN_0001ddc0(undefined4 param_1,undefined2 param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_32;
  char local_30 [3];
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_0001de6c + 0x1ddd8 + DAT_0001de70);
  local_14 = *piVar4;
  local_28 = 0;
  local_2c = DAT_0001de74;
  local_24 = &local_32;
  local_20 = 2;
  local_1c = local_30;
  local_18 = 4;
  local_32 = param_2;
  iVar1 = FUN_0001b4d8(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    if (local_30[0] == '\0') {
      *param_3 = local_2d;
      uVar3 = 0;
      goto LAB_0001de50;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001de50:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_0001de78 @ 0001de78 size=172 ===== */

void FUN_0001de78(undefined4 param_1,undefined2 param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_32;
  char local_30 [3];
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_0001df24 + 0x1de90 + DAT_0001df28);
  local_14 = *piVar4;
  local_28 = 0;
  local_2c = DAT_0001df2c;
  local_24 = &local_32;
  local_20 = 2;
  local_1c = local_30;
  local_18 = 4;
  local_32 = param_2;
  iVar1 = FUN_0001b4d8(param_1,&local_2c,param_4);
  if (-1 < iVar1) {
    if (local_30[0] == '\0') {
      *param_3 = local_2d;
      uVar3 = 0;
      goto LAB_0001df08;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001df08:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_0001df30 @ 0001df30 size=204 ===== */

void FUN_0001df30(undefined4 param_1,undefined2 param_2,undefined1 *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_42 [3];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined2 *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  char local_24 [3];
  undefined1 local_21;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined2 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_0001dffc + 0x1df4c + DAT_0001e000);
  local_14 = *piVar4;
  local_3c = DAT_0001e004;
  uStack_38 = 0;
  local_34 = local_42;
  local_30 = 2;
  local_2c = local_24;
  local_28 = 0xe;
  local_42[0] = param_2;
  iVar1 = FUN_0001b4d8(param_1,&local_3c,param_5);
  if (-1 < iVar1) {
    if (local_24[0] == '\0') {
      *param_3 = local_21;
      *param_4 = local_20;
      param_4[1] = uStack_1c;
      *(undefined2 *)(param_4 + 2) = local_18;
      uVar3 = 0;
      goto LAB_0001dfe0;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001dfe0:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001e008 @ 0001e008 size=196 ===== */

void FUN_0001e008(undefined4 param_1,undefined2 param_2,undefined1 param_3,undefined4 *param_4,
                 undefined2 *param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 local_3c;
  undefined1 local_3a;
  char local_38 [3];
  undefined4 local_35;
  undefined1 local_31;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_0001e0cc + 0x1e01c + DAT_0001e0d0);
  local_14 = *piVar4;
  local_2c = DAT_0001e0d4;
  uStack_28 = 0;
  local_24 = &local_3c;
  local_20 = 3;
  local_1c = local_38;
  local_18 = 9;
  local_3c = param_2;
  local_3a = param_3;
  iVar1 = FUN_0001b4d8(param_1,&local_2c,param_6);
  if (-1 < iVar1) {
    if (local_38[0] == '\0') {
      *param_4 = local_35;
      *param_5 = CONCAT11(local_30,local_31);
      uVar3 = 0;
      goto LAB_0001e0b0;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001e0b0:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001e0d8 @ 0001e0d8 size=164 ===== */

void FUN_0001e0d8(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_0001e17c + 0x1e0ec + DAT_0001e180);
  local_20 = 0;
  local_c = *piVar4;
  local_24 = DAT_0001e184;
  local_1c = &local_28;
  local_18 = 2;
  local_14 = &local_29;
  local_10 = 1;
  local_28 = param_2;
  local_27 = param_3;
  iVar1 = FUN_0001b4d8(param_1,&local_24,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_29 == '\0') goto LAB_0001e160;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001e160:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001e188 @ 0001e188 size=180 ===== */

void FUN_0001e188(undefined4 param_1,undefined1 param_2,undefined2 param_3,undefined2 param_4,
                 undefined1 param_5,undefined1 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_2d;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined2 local_29;
  undefined1 local_27;
  undefined1 local_26;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_0001e23c + 0x1e19c + DAT_0001e240);
  local_27 = param_5;
  local_26 = param_6;
  local_24 = DAT_0001e244;
  uStack_20 = 0;
  local_c = *piVar4;
  local_1c = &local_2c;
  local_18 = 7;
  local_14 = &local_2d;
  local_10 = 1;
  local_2c = param_2;
  local_2b = param_3;
  local_29 = param_4;
  iVar1 = FUN_0001b4d8(param_1,&local_24,param_7);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_2d == '\0') goto LAB_0001e220;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001e220:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001e2e8 @ 0001e2e8 size=280 ===== */

void FUN_0001e2e8(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4,
                 undefined1 param_5,undefined4 param_6,undefined2 param_7,undefined1 param_8,
                 undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,
                 undefined2 param_13,undefined2 param_14,undefined2 *param_15,undefined4 param_16)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined2 *local_54;
  undefined4 local_50;
  uint *local_4c;
  undefined4 local_48;
  uint local_44 [5];
  undefined2 local_30;
  undefined2 local_2e;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined4 local_2a;
  undefined2 local_26;
  undefined1 local_24;
  undefined2 local_23;
  undefined2 local_21;
  undefined2 local_1f;
  undefined2 local_1d;
  undefined2 local_1b;
  undefined2 local_19;
  int local_14;
  
  piVar4 = *(int **)(DAT_0001e400 + 0x1e300 + DAT_0001e404);
  local_14 = *piVar4;
  local_2b = param_5;
  local_26 = param_7;
  local_24 = param_8;
  local_2a = param_6;
  local_23 = param_9;
  local_21 = param_10;
  local_1f = param_11;
  local_5c = DAT_0001e408;
  uStack_58 = 1;
  local_1d = param_12;
  local_1b = param_13;
  local_19 = param_14;
  local_54 = &local_30;
  local_50 = 0x19;
  local_4c = local_44;
  local_48 = 0xb;
  local_30 = param_2;
  local_2e = param_3;
  local_2c = param_4;
  iVar1 = FUN_0001b4d8(param_1,&local_5c,param_16);
  if (-1 < iVar1) {
    if ((local_44[0] & 0xff) == 0) {
      if (param_15 != (undefined2 *)0x0) {
        *param_15 = (short)(local_44[0] >> 8);
      }
      uVar3 = 0;
      goto LAB_0001e3cc;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001e3cc:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0001e40c @ 0001e40c size=192 ===== */

void FUN_0001e40c(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_40 [12];
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined2 *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  int local_c;
  
  local_14 = local_40;
  piVar4 = *(int **)(DAT_0001e4cc + 0x1e420 + DAT_0001e4d0);
  local_2e = param_5;
  local_2c = param_6;
  local_2a = 1;
  local_28 = 1;
  local_1c = &local_34;
  local_18 = 0xe;
  local_24 = DAT_0001e4d4;
  uStack_20 = 3;
  local_c = *piVar4;
  local_10 = 9;
  local_34 = param_2;
  local_32 = param_3;
  local_30 = param_4;
  iVar1 = FUN_0001b4d8(param_1,&local_24,param_7);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_40[0] == '\0') goto LAB_0001e4b0;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0001e4b0:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== _DT_FINI @ 0001e4d8 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00036000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00036004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00036008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::writev @ 0003600c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00036010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00036018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0003601c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 00036028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003602c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00036030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00036034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00036038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0003603c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00036040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00036048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 0003604c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00036050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00036054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncasecmp @ 00036058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncasecmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0003605c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00036060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00036064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00036068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 0003606c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 00036070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vprintf @ 00036074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00036078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 0003607c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00036080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00036088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0003608c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00036090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 00036094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 00036098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncat @ 0003609c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 000360a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 000360a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 000360a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 000360ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000360b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 000360b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000360b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsep @ 000360c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockopt @ 000360c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000360c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000360cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000360d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000360d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 000360d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000360dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000360e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 000360e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000360e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


