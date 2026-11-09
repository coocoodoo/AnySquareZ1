// hcidump — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00012864 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00012888 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_00054ee8)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00012894 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00054eec)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 000128a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00054ef0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::printf @ 000128b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00054ef8)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 000128c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00054efc)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 000128d0 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00054f00)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 000128dc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00054f04)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 000128e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00054f08)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 000128f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00054f0c)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 00012900 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00054f10)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 0001290c size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00054f14)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 00012918 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00054f18)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 00012924 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00054f1c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::socket @ 00012930 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00054f20)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00012948 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00054f28)();
  return;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00012954 size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00054f2c)();
  return;
}



/* ===== <EXTERNAL>::getnameinfo @ 00012960 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getnameinfo(sockaddr *__sa,socklen_t __salen,char *__host,socklen_t __hostlen,char *__serv,
               socklen_t __servlen,uint __flags)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getnameinfo_00054f30)(__sa);
  return iVar1;
}



/* ===== <EXTERNAL>::strtol @ 0001296c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00054f34)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::write @ 00012978 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00054f38)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strcat @ 00012984 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00054f3c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::bind @ 00012990 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00054f40)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vprintf @ 0001299c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vprintf_00054f44)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000129a8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00054f48)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 000129b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_00054f4c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::memchr @ 000129c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_00054f50)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::read @ 000129cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00054f54)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000129d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00054f58)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::__cmsg_nxthdr @ 000129e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

cmsghdr * __cmsg_nxthdr(msghdr *__mhdr,cmsghdr *__cmsg)

{
  cmsghdr *pcVar1;
  
  pcVar1 = (cmsghdr *)(*(code *)PTR___cmsg_nxthdr_00054f5c)(__mhdr);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncpy @ 000129f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00054f60)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 000129fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_00054f64)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00012a08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00054f68)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strdup @ 00012a20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_00054f70)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memset @ 00012a2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00054f74)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::open64 @ 00012a38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open64_00054f78)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::poll @ 00012a44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_00054f7c)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00012a50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00054f80)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strsep @ 00012a5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strsep_00054f84)(__stringp);
  return pcVar1;
}



/* ===== <EXTERNAL>::localtime_r @ 00012a74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_r_00054f8c)(__timer);
  return ptVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00012a80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00054f90)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00012a8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00054f94)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00012a98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00054f98)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::fileno @ 00012aa4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fileno_00054f9c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00012ab0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00054fa0)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::lseek64 @ 00012abc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  undefined4 in_r1;
  __off64_t _Var1;
  
  _Var1 = (*(code *)PTR_lseek64_00054fa4)
                    (__fd,in_r1,(int)__offset,(int)((ulonglong)__offset >> 0x20));
  return _Var1;
}



/* ===== <EXTERNAL>::fputs @ 00012ac8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00054fa8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::recvmsg @ 00012ad4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvmsg(int __fd,msghdr *__message,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvmsg_00054fac)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012ae0 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00054fb0)();
  return;
}



/* ===== <EXTERNAL>::close @ 00012aec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00054fb4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00012af8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_00054fb8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::raise @ 00012b04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00054fbc)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00012b10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00054fc0)(__ptr);
  return;
}



/* ===== FUN_00012b20 @ 00012b20 size=2200 ===== */

void FUN_00012b20(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  uint extraout_r2;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint local_a4;
  ushort local_90;
  byte local_8e;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined1 local_78;
  undefined1 *local_74;
  uint local_70;
  undefined1 *local_6c;
  uint local_68;
  byte local_62;
  uint local_54;
  uint local_50;
  uint local_40;
  uint local_3c;
  uint local_34;
  uint local_30;
  int local_2c;
  
  iVar4 = DAT_000133d0;
  uVar18 = 0;
  iVar14 = DAT_000133c0 + 0x12b40;
  iVar17 = 0;
  uVar13 = 0;
  piVar8 = *(int **)(iVar14 + DAT_000133c4);
  local_2c = *piVar8;
  local_a4 = 0xffff;
  iVar9 = DAT_000133c8 + 0x12b6c;
  iVar10 = DAT_000133cc + 0x12b78;
LAB_00012b84:
  uVar16 = 0;
  iVar1 = getopt_long(param_1,param_2,iVar10,iVar9,0);
  if (iVar1 != -1) {
    switch(iVar1) {
    case 0x41:
      pcVar2 = strdup((char *)**(undefined4 **)(iVar14 + DAT_000133e4));
      *(char **)(iVar4 + 0x12b98) = pcVar2;
      goto LAB_00012b84;
    case 0x42:
      break;
    case 0x43:
      uVar5 = atoi((char *)**(undefined4 **)(iVar14 + DAT_000133e4));
      uVar12 = 0x1b;
      goto LAB_00012e04;
    case 0x44:
      pcVar2 = strdup((char *)**(undefined4 **)(iVar14 + DAT_000133e4));
      *(char **)(DAT_000133fc + 0x12ec0) = pcVar2;
      goto LAB_00012b84;
    case 0x45:
      break;
    case 0x46:
      break;
    case 0x47:
      break;
    case 0x48:
      uVar5 = atoi((char *)**(undefined4 **)(iVar14 + DAT_000133e4));
      uVar12 = 0x12;
LAB_00012e04:
      uVar5 = uVar5 & 0xffff;
LAB_00012e0c:
      uVar16 = 0;
LAB_00012e10:
      FUN_000140b8(0,uVar5,uVar16,uVar12);
      goto LAB_00012b84;
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
      uVar16 = atoi((char *)**(undefined4 **)(iVar14 + DAT_000133e4));
      uVar5 = uVar16 & 0xffff;
      uVar12 = 8;
      if (uVar5 < 0x20) goto LAB_00012e54;
      goto LAB_00012e0c;
    case 0x50:
      uVar16 = atoi((char *)**(undefined4 **)(iVar14 + DAT_000133e4));
      uVar12 = 0x1102;
      goto LAB_00012e54;
    case 0x51:
      break;
    case 0x52:
      uVar13 = uVar13 | 8;
      goto LAB_00012b84;
    case 0x53:
      uVar16 = atoi((char *)**(undefined4 **)(iVar14 + DAT_000133e4));
      uVar12 = 0x112d;
LAB_00012e54:
      uVar5 = 0;
      uVar16 = uVar16 & 0xff;
      goto LAB_00012e10;
    case 0x54:
      break;
    case 0x55:
      break;
    case 0x56:
      break;
    case 0x57:
      break;
    case 0x58:
      uVar13 = uVar13 | 4;
      goto LAB_00012b84;
    case 0x59:
      uVar13 = uVar13 | 0x4000;
      goto LAB_00012b84;
    case 0x5a:
      break;
    case 0x5b:
      break;
    case 0x5c:
      break;
    case 0x5d:
      break;
    case 0x5e:
      break;
    case 0x5f:
      break;
    case 0x60:
      break;
    case 0x61:
      uVar13 = uVar13 | 1;
      goto LAB_00012b84;
    case 0x62:
      break;
    case 99:
      break;
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
      pcVar2 = (char *)**(undefined4 **)(iVar14 + DAT_000133e4);
      iVar17 = strcasecmp(pcVar2,(char *)(DAT_000133e8 + 0x12d08));
      if ((iVar17 == 0) ||
         (iVar17 = strcasecmp(pcVar2,(char *)(DAT_000133ec + 0x12d28)), iVar17 == 0)) {
        iVar17 = 0xffff;
      }
      else {
        iVar17 = atoi(pcVar2 + 3);
      }
      goto LAB_00012b84;
    case 0x6a:
      break;
    case 0x6b:
      break;
    case 0x6c:
      iVar1 = atoi((char *)**(undefined4 **)(iVar14 + DAT_000133e4));
      *(int *)(DAT_000133f0 + 0x12d64) = iVar1;
      goto LAB_00012b84;
    case 0x6d:
      local_a4 = atoi((char *)**(undefined4 **)(iVar14 + DAT_000133e4));
      goto LAB_00012b84;
    case 0x6e:
      break;
    case 0x6f:
      break;
    case 0x70:
      uVar18 = atoi((char *)**(undefined4 **)(iVar14 + DAT_000133e4));
      goto LAB_00012b84;
    case 0x71:
      break;
    case 0x72:
      uVar12 = 1;
      iVar1 = DAT_000133f8 + 0x12dc8;
      goto LAB_00012d9c;
    case 0x73:
      break;
    case 0x74:
      uVar13 = uVar13 | 0x100;
      goto LAB_00012b84;
    case 0x75:
      break;
    case 0x76:
      pcVar2 = (char *)(DAT_00013400 + 0x12ee4);
      goto LAB_00012ee0;
    case 0x77:
      uVar12 = 2;
      iVar1 = DAT_000133f4 + 0x12da0;
LAB_00012d9c:
      *(undefined4 *)(iVar1 + 8) = uVar12;
      pcVar2 = strdup((char *)**(undefined4 **)(iVar14 + DAT_000133e4));
      *(char **)(iVar1 + 0xc) = pcVar2;
      goto LAB_00012b84;
    case 0x78:
      goto LAB_00012dd8;
    }
    pcVar2 = (char *)(DAT_00013404 + 0x12ef8);
LAB_00012ee0:
    puts(pcVar2);
    iVar4 = 0;
    goto LAB_00012ee8;
  }
  iVar9 = **(int **)(iVar14 + DAT_000133d4);
  iVar4 = DAT_000133d8 + 0x12bc8;
  pcVar2 = (char *)(DAT_000133dc + 0x12bd0);
  **(int **)(iVar14 + DAT_000133d4) = 0;
  printf(pcVar2,iVar4);
  if (param_1 - iVar9 < 1) {
    uVar16 = 0xffffffff;
  }
  else {
    puVar11 = (undefined4 *)(param_2 + iVar9 * 4);
    iVar4 = DAT_000133e0 + 0x12c00;
    do {
      for (iVar10 = 0; pcVar2 = *(char **)(iVar4 + iVar10 * 8), pcVar2 != (char *)0x0;
          iVar10 = iVar10 + 1) {
        iVar1 = strcasecmp(pcVar2,(char *)*puVar11);
        if (iVar1 == 0) {
          uVar16 = uVar16 | *(uint *)(iVar4 + iVar10 * 8 + 4);
          break;
        }
      }
      puVar11 = puVar11 + 1;
    } while ((undefined4 *)(param_2 + ((param_1 - iVar9) + iVar9) * 4) != puVar11);
    if (uVar16 == 0) {
      uVar16 = 0xffffffff;
    }
  }
  if (*(int *)(DAT_00013408 + 0x12f6c) == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = FUN_000136e0(*(int *)(DAT_00013408 + 0x12f6c),3,uVar13);
  }
  uVar3 = 0xffffffff;
  if (*(int *)(DAT_0001340c + 0x12f98) != 0) {
    uVar3 = FUN_000136e0(*(int *)(DAT_0001340c + 0x12f98),4,uVar13);
  }
  iVar4 = DAT_00013410;
  iVar9 = *(int *)(DAT_00013410 + 0x12fb8);
  if (iVar9 == 1) {
    FUN_00014068(uVar13 | 0x200,uVar16,uVar18 & 0xffff,local_a4 & 0xffff,uVar12,uVar3);
    iVar17 = FUN_000136e0(*(undefined4 *)(iVar4 + 0x12fbc),*(undefined4 *)(iVar4 + 0x12fb8),
                          uVar13 | 0x200);
    local_74 = malloc(0x5dc);
    iVar4 = DAT_000133bc;
    uVar18 = DAT_000133b8;
    if (local_74 == (undefined1 *)0x0) {
      perror((char *)(DAT_00013418 + 0x130cc));
    }
    else {
      puVar15 = *(uint **)(iVar14 + DAT_00013414);
LAB_00013058:
      while( true ) {
        iVar9 = FUN_00013618(iVar17);
        if (iVar9 < 0) break;
        if (iVar9 == 0) goto LAB_00013344;
        uVar13 = *puVar15;
        if ((uVar13 & 0x2000) == 0) {
          puVar6 = local_74;
          if ((uVar13 & 0x1000) == 0) {
            uVar13 = (uint)local_90;
            local_70 = uVar13;
            goto LAB_00013104;
          }
          iVar10 = *(int *)(DAT_0001341c + 0x131bc);
          if (iVar10 == 0x3ea) {
            uVar13 = local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 |
                     (local_40 >> 0x10 & 0xff) << 8 | local_40 >> 0x18;
            local_70 = uVar13;
            goto LAB_00013104;
          }
          if (iVar10 != 0x7d1) {
            if (iVar10 == 0x3e9) {
              if ((local_3c >> 0x18 & 2) == 0) goto LAB_00013280;
              if ((local_3c >> 0x18 & 1) == 0) {
                uVar7 = 1;
              }
              else {
                uVar7 = 4;
              }
              goto LAB_000131f4;
            }
            goto LAB_0001310c;
          }
          switch((local_3c >> 0x10 & 0xff) << 8 | local_3c >> 0x18) {
          case 2:
            local_62 = 0;
            uVar7 = 1;
            break;
          case 3:
            local_62 = 1;
            uVar7 = 4;
            break;
          case 4:
            local_62 = 0;
            goto LAB_00013280;
          case 5:
            local_62 = 1;
LAB_00013280:
            uVar7 = 2;
            break;
          case 6:
            local_62 = 0;
            goto LAB_00013294;
          case 7:
            local_62 = 1;
LAB_00013294:
            uVar7 = 3;
            break;
          default:
            uVar7 = 0xff;
          }
LAB_000131f4:
          *local_74 = uVar7;
          uVar13 = local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 |
                   (local_40 >> 0x10 & 0xff) << 8 | local_40 >> 0x18;
          local_70 = uVar13 + 1;
          goto LAB_000130fc;
        }
        switch(local_78) {
        case 0:
          uVar7 = 1;
          break;
        case 1:
          uVar7 = 4;
          goto LAB_00013158;
        case 2:
          uVar7 = 2;
          break;
        case 3:
          uVar7 = 2;
LAB_00013158:
          *local_74 = uVar7;
          local_62 = 1;
          goto LAB_000130e4;
        default:
          goto LAB_0001317c;
        }
        *local_74 = uVar7;
        local_62 = 0;
LAB_000130e4:
        uVar13 = local_84 << 0x18 | (local_84 >> 8 & 0xff) << 0x10 | (local_84 >> 0x10 & 0xff) << 8
                 | local_84 >> 0x18;
        local_70 = uVar13 - 8;
        uVar13 = uVar13 - 9;
LAB_000130fc:
        puVar6 = local_74 + 1;
LAB_00013104:
        iVar9 = FUN_00013618(iVar17,puVar6,uVar13);
LAB_0001310c:
        if (iVar9 < 0) break;
        if (iVar9 == 0) {
LAB_00013344:
          free(local_74);
          goto LAB_0001334c;
        }
        local_6c = local_74;
        local_68 = local_70;
        uVar13 = *puVar15;
        if ((uVar13 & 0x2000) == 0) {
          if ((uVar13 & 0x1000) == 0) {
            local_62 = local_8e;
            local_54 = local_8c;
            local_50 = local_88;
          }
          else {
            local_62 = (byte)(local_3c >> 0x18) & 1;
            uVar13 = local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                     (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18;
            iVar10 = uVar13 + uVar18;
            iVar14 = (local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 |
                      (local_34 >> 0x10 & 0xff) << 8 | local_34 >> 0x18) + iVar4 +
                     (uint)CARRY4(uVar13,uVar18);
            iVar9 = FUN_00037494(iVar10,iVar14,DAT_00013420,0);
            local_54 = iVar9 + DAT_00013424;
            FUN_00037494(iVar10,iVar14,DAT_00013420,0);
            local_50 = extraout_r2;
          }
        }
        else {
          local_50 = local_7c << 0x18 | (local_7c >> 8 & 0xff) << 0x10 |
                     (local_7c >> 0x10 & 0xff) << 8 | local_7c >> 0x18;
          local_54 = local_80 << 0x18 | (local_80 >> 8 & 0xff) << 0x10 |
                     (local_80 >> 0x10 & 0xff) << 8 | local_80 >> 0x18;
        }
        FUN_00013684(&local_74);
      }
      perror((char *)(DAT_00013428 + 0x13374));
      free(local_74);
    }
    iVar4 = 1;
LAB_00012ee8:
                    /* WARNING: Subroutine does not return */
    exit(iVar4);
  }
  if (iVar9 == 2) {
    uVar13 = uVar13 | 0x1000;
    uVar12 = FUN_00013d88(iVar17);
    uVar3 = FUN_000136e0(*(undefined4 *)(iVar4 + 0x12fbc),*(undefined4 *)(iVar4 + 0x12fb8),uVar13);
  }
  else {
    if (iVar9 != 0) goto LAB_0001334c;
    uVar13 = uVar13 | 0x200;
    FUN_00014068(uVar13,uVar16,uVar18 & 0xffff,local_a4 & 0xffff,uVar12,uVar3);
    uVar12 = FUN_00013d88(iVar17);
    uVar3 = 0xffffffff;
  }
  FUN_00013958(iVar17,uVar12,uVar3,uVar13);
LAB_0001334c:
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
LAB_00012dd8:
  uVar13 = uVar13 | 2;
  goto LAB_00012b84;
LAB_0001317c:
  lseek64(iVar17,(ulonglong)
                 ((local_84 << 0x18 | (local_84 >> 8 & 0xff) << 0x10 |
                   (local_84 >> 0x10 & 0xff) << 8 | local_84 >> 0x18) - 9),1);
  goto LAB_00013058;
}



/* ===== entry @ 0001342c size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00054f6c)
            (*(undefined4 *)((int)&DAT_00013474 + DAT_00013480 + DAT_00013474),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_00013474 + DAT_0001347c + DAT_00013474),
             *(undefined4 *)((int)&DAT_00013474 + DAT_00013478 + DAT_00013474),param_1);
  return;
}



/* ===== FUN_00013484 @ 00013484 size=72 ===== */

void FUN_00013484(void)

{
  code *pcVar1;
  
  if (DAT_000134d0 + 0x1349c == DAT_000134cc + 0x13494) {
    return;
  }
  pcVar1 = *(code **)(DAT_000134d4 + 0x134a4 + DAT_000134d8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00013540 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000135b4 + 0x1355c;
  if (*(char *)(DAT_000135b0 + 0x13550) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000135b8) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000135bc + 0x1357c));
  }
  FUN_00013484();
  if (*(int *)(iVar1 + DAT_000135c0) != 0) {
    __deregister_frame_info(DAT_000135c4 + 0x1359c);
  }
  *(undefined1 *)(DAT_000135c8 + 0x135ac) = 1;
  return;
}



/* ===== _INIT_0 @ 000135cc size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00013604 + 0x135dc + DAT_00013608) != 0) {
    __register_frame_info(DAT_00013610 + 0x135fc,DAT_0001360c + 0x135f8);
  }
  if (((DAT_00013534 + 0x134f4) - (DAT_00013530 + 0x134ec) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00013538 + 0x134fc + DAT_0001353c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00013618 @ 00013618 size=108 ===== */

int FUN_00013618(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    while( true ) {
      if ((int)param_3 < 1) {
        return iVar3;
      }
      sVar1 = read(param_1,param_2,param_3);
      if (-1 < sVar1) break;
      piVar2 = __errno_location();
      if (*piVar2 != 0xb && *piVar2 != 4) {
        return -1;
      }
    }
    if (sVar1 == 0) break;
    param_3 = param_3 - sVar1;
    param_2 = (void *)((int)param_2 + sVar1);
    iVar3 = iVar3 + sVar1;
  }
  return 0;
}



/* ===== FUN_00013684 @ 00013684 size=92 ===== */

void FUN_00013684(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_000136d4 + 0x136a0;
  puVar1 = *(uint **)(iVar2 + DAT_000136d8);
  puVar1[3] = 0;
  if ((*puVar1 & 8) == 0) {
    FUN_0001bd24(0,param_1);
  }
  else {
    FUN_000149a8();
  }
  (*(code *)PTR_fflush_00054f24)(**(undefined4 **)(iVar2 + DAT_000136dc));
  return;
}



/* ===== FUN_000136e0 @ 000136e0 size=564 ===== */

void FUN_000136e0(char *param_1,int param_2,uint param_3)

{
  int __fd;
  char *pcVar1;
  ssize_t sVar2;
  int iVar3;
  int iVar4;
  FILE *__stream;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  bool bVar11;
  undefined4 local_34;
  undefined4 uStack_30;
  uint local_2c;
  uint local_28;
  int local_24;
  
  iVar8 = DAT_00013914 + 0x13700;
  piVar10 = *(int **)(iVar8 + DAT_00013918);
  local_24 = *piVar10;
  iVar4 = 0x241;
  if (2 < param_2 - 2U) {
    iVar4 = 0;
  }
  __fd = open64(param_1,iVar4,0x1a4);
  iVar4 = DAT_00013944;
  if (__fd < 0) {
    pcVar1 = (char *)(DAT_0001391c + 0x13734);
  }
  else {
    if (param_2 == 1) {
      sVar2 = read(__fd,&local_34,0x10);
      if (sVar2 == 0x10) {
        iVar3 = memcmp(&local_34,(void *)(DAT_00013920 + 0x137a0),8);
        iVar4 = DAT_0001393c;
        puVar9 = *(uint **)(iVar8 + DAT_00013924);
        if (iVar3 == 0) {
          *puVar9 = *puVar9 | 0x1000;
          iVar4 = DAT_00013928;
          puVar9 = (uint *)(DAT_00013928 + 0x137d4);
          pcVar1 = (char *)(DAT_0001392c + 0x137e0);
          *puVar9 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 |
                    (local_2c >> 0x10 & 0xff) << 8 | local_2c >> 0x18;
          *(uint *)(iVar4 + 0x137d8) =
               local_28 << 0x18 | (local_28 >> 8 & 0xff) << 0x10 | (local_28 >> 0x10 & 0xff) << 8 |
               local_28 >> 0x18;
          printf(pcVar1);
          if (*puVar9 == 1) {
            uVar6 = *(uint *)(iVar4 + 0x137d8);
            bVar11 = 2000 < uVar6;
            if (uVar6 != 0x7d1) {
              bVar11 = uVar6 != 0x3e9;
            }
            if (!bVar11 || (uVar6 == 0x7d1 || uVar6 == 0x3ea)) goto LAB_00013774;
            pcVar1 = (char *)(DAT_00013938 + 0x13840);
            __stream = (FILE *)**(undefined4 **)(iVar8 + DAT_00013930);
          }
          else {
            pcVar1 = (char *)(DAT_00013934 + 0x13808);
            __stream = (FILE *)**(undefined4 **)(iVar8 + DAT_00013930);
          }
          goto LAB_00013808;
        }
        if ((char)local_34 == '\0' && local_34._1_1_ == '\0') {
          *puVar9 = *puVar9 | 0x2000;
          puts((char *)(iVar4 + 0x13868));
        }
        *puVar9 = *puVar9 & 0xffffefff;
      }
      lseek64(__fd,0,0);
LAB_00013774:
      if (local_24 == *piVar10) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(__fd);
    }
    if ((param_3 & 0x1000) == 0) goto LAB_00013774;
    puVar7 = (undefined4 *)(DAT_00013940 + 0x13898);
    puVar5 = (undefined4 *)(DAT_00013944 + 0x1389c);
    *(undefined4 *)(DAT_00013940 + 0x1389c) = 0x3ea;
    local_34 = *puVar5;
    *puVar7 = 1;
    uStack_30 = *(undefined4 *)(iVar4 + 0x138a0);
    local_2c = 0x1000000;
    local_28 = DAT_00013948;
    printf((char *)(DAT_0001394c + 0x138cc),1,0x3ea,&local_2c);
    sVar2 = write(__fd,&local_34,0x10);
    if (-1 < sVar2) {
      if (sVar2 == 0x10) goto LAB_00013774;
      pcVar1 = (char *)(DAT_00013954 + 0x13908);
      __stream = (FILE *)**(undefined4 **)(iVar8 + DAT_00013930);
LAB_00013808:
      fputs(pcVar1,__stream);
      goto LAB_00013734;
    }
    pcVar1 = (char *)(DAT_00013950 + 0x138ec);
  }
  perror(pcVar1);
LAB_00013734:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013958 @ 00013958 size=980 ===== */

void FUN_00013958(int param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *__ptr;
  char *pcVar5;
  undefined4 uVar6;
  cmsghdr *pcVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  cmsghdr *__cmsg;
  uint uVar11;
  ssize_t sVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  size_t __n;
  uint *__buf;
  int iVar17;
  bool bVar18;
  uint uVar19;
  uint local_b8;
  int local_b4;
  iovec local_98;
  msghdr local_90;
  char *local_74;
  uint local_70;
  char *local_6c;
  uint local_68;
  undefined2 local_64;
  byte local_62;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  pollfd local_44 [2];
  int local_34;
  
  iVar14 = DAT_00013d40 + 0x13974;
  piVar13 = *(int **)(iVar14 + DAT_00013d44);
  local_34 = *piVar13;
  if (-1 < param_2) {
    if (*(int *)(DAT_00013d48 + 0x139a8) < 0x5dc) {
      *(undefined4 *)(DAT_00013d48 + 0x139a8) = 0x5dc;
    }
    if ((param_4 & 0x1000) == 0) {
      iVar17 = 0xc;
    }
    else {
      iVar17 = 0x18;
    }
    __ptr = malloc(iVar17 + *(int *)(DAT_00013d4c + 0x139d0));
    if (__ptr == (uint *)0x0) {
      pcVar5 = (char *)(DAT_00013d50 + 0x139e4);
    }
    else {
      local_74 = (char *)((int)__ptr + iVar17);
      pcVar7 = malloc(100);
      if (pcVar7 == (cmsghdr *)0x0) {
        free(__ptr);
        pcVar5 = (char *)(DAT_00013d54 + 0x13a1c);
      }
      else {
        if (param_1 == 0xffff) {
          printf((char *)(DAT_00013d58 + 0x13a34));
        }
        else {
          printf((char *)(DAT_00013d70 + 0x13b30),param_1);
        }
        iVar15 = *(int *)(iVar14 + DAT_00013d5c);
        printf((char *)(DAT_00013d60 + 0x13a54),*(undefined4 *)(DAT_00013d64 + 0x13a58),
               *(undefined4 *)(iVar15 + 4));
        iVar14 = DAT_00013d68;
        uVar4 = DAT_00013d30;
        local_90.msg_namelen = *(socklen_t *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        local_90.msg_iov = *(iovec **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        local_90.msg_flags = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_90.msg_name = (void *)0x0;
        local_90.msg_iovlen = 0;
        local_44[0].events = 1;
        local_44[0].revents = 0;
        local_90.msg_control = (void *)local_90.msg_namelen;
        local_90.msg_controllen = (size_t)local_90.msg_iov;
        local_44[0].fd = param_2;
LAB_00013a88:
        do {
          do {
            iVar8 = poll(local_44,1,-1);
          } while (iVar8 < 1);
          bVar2 = SUB41(local_44[0]._4_4_,2) & 0x38;
          if ((local_44[0]._4_4_ & 0x380000) != 0) {
            if (local_44[0].fd == param_2) {
              pcVar5 = (char *)(DAT_00013d74 + 0x13b4c);
            }
            else {
              pcVar5 = (char *)(DAT_00013d78 + 0x13b74);
            }
            puts(pcVar5);
            uVar6 = 0;
            goto LAB_00013b50;
          }
          local_98.iov_base = local_74;
          local_98.iov_len = *(size_t *)(iVar14 + 0x13a90);
          local_90.msg_iov = &local_98;
          local_90.msg_iovlen = 1;
          local_90.msg_controllen = 100;
          local_90.msg_control = pcVar7;
          uVar9 = recvmsg(param_2,&local_90,0x40);
          if (-1 < (int)uVar9) {
            local_4c = *(undefined4 *)(iVar15 + 0x10);
            local_48 = *(undefined4 *)(iVar15 + 0x14);
            local_64 = (undefined2)param_1;
            __cmsg = local_90.msg_control;
            local_70 = uVar9;
            local_62 = bVar2;
            if ((iovec *)0xb < local_90.msg_controllen) {
              for (; __cmsg != (cmsghdr *)0x0; __cmsg = __cmsg_nxthdr(&local_90,__cmsg)) {
                if (__cmsg->cmsg_type == 1) {
                  local_62 = (byte)__cmsg[1].cmsg_len;
                }
                else if (__cmsg->cmsg_type == 2) {
                  local_54 = __cmsg[1].cmsg_len;
                  local_50 = __cmsg[1].cmsg_level;
                }
              }
            }
            uVar9 = DAT_00013d80;
            iVar8 = DAT_00013d3c;
            local_6c = local_74;
            local_68 = local_70;
            if (*(int *)(DAT_00013d7c + 0x13bb4) == 2) {
              if ((param_4 & 0x1000) == 0) {
                *(short *)__ptr = (short)local_70;
                *(byte *)((int)__ptr + 2) = local_62;
                __ptr[1] = local_54;
                __ptr[2] = local_50;
              }
              else {
                cVar1 = *local_74;
                uVar11 = local_70 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 |
                         (local_70 >> 0x10 & 0xff) << 8 | local_70 >> 0x18;
                bVar18 = CARRY4(DAT_00013d38,local_54);
                uVar16 = DAT_00013d38 + local_54;
                *__ptr = uVar11;
                __ptr[1] = uVar11;
                __ptr[3] = 0;
                lVar3 = (ulonglong)uVar9 * (ulonglong)uVar16;
                uVar11 = (local_62 & 1) << 0x18;
                local_b4 = (int)((ulonglong)lVar3 >> 0x20);
                __ptr[2] = uVar11;
                uVar19 = (uint)uVar4;
                local_b8 = (uint)lVar3;
                uVar16 = uVar19 + local_b8 + local_50;
                uVar9 = (int)((ulonglong)uVar4 >> 0x20) +
                        uVar9 * (iVar8 + ((int)local_54 >> 0x1f) + (uint)bVar18) + local_b4 +
                        ((int)local_50 >> 0x1f) + (uint)CARRY4(local_b8,local_50) +
                        (uint)CARRY4(uVar19,local_b8 + local_50);
                if (cVar1 == '\x04' || cVar1 == '\x01') {
                  uVar11 = uVar11 | 0x2000000;
                }
                __ptr[4] = uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 |
                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18;
                __ptr[5] = uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 |
                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18;
                if (cVar1 == '\x04' || cVar1 == '\x01') {
                  __ptr[2] = uVar11;
                }
              }
              __n = iVar17 + local_70;
              __buf = __ptr;
              while (0 < (int)__n) {
                sVar12 = write(param_3,__buf,__n);
                if (sVar12 < 0) {
                  piVar10 = __errno_location();
                  if (*piVar10 != 0xb && *piVar10 != 4) {
                    pcVar5 = (char *)(DAT_00013d84 + 0x13d00);
                    goto LAB_000139e0;
                  }
                }
                else {
                  if (sVar12 == 0) break;
                  __n = __n - sVar12;
                  __buf = (uint *)((int)__buf + sVar12);
                }
              }
            }
            else {
              FUN_00013684(&local_74);
            }
            goto LAB_00013a88;
          }
          piVar10 = __errno_location();
        } while (*piVar10 == 4 || *piVar10 == 0xb);
        pcVar5 = (char *)(DAT_00013d6c + 0x13b20);
      }
    }
LAB_000139e0:
    perror(pcVar5);
  }
  uVar6 = 0xffffffff;
LAB_00013b50:
  if (local_34 != *piVar13) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}



/* ===== FUN_00013d88 @ 00013d88 size=368 ===== */

void FUN_00013d88(undefined4 param_1)

{
  int __fd;
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_40;
  undefined1 local_3c [20];
  undefined4 local_28;
  int local_24;
  
  piVar4 = *(int **)(DAT_00013ef8 + 0x13d9c + DAT_00013efc);
  local_24 = *piVar4;
  __fd = socket(0x1f,3,1);
  if (__fd < 0) {
    pcVar1 = (char *)(DAT_00013f00 + 0x13dd0);
  }
  else {
    local_40 = 1;
    iVar2 = setsockopt(__fd,0,1,&local_40,4);
    if (-1 < iVar2) {
      local_40 = 1;
      iVar2 = setsockopt(__fd,0,3,&local_40,4);
      if (iVar2 < 0) {
        pcVar1 = (char *)(DAT_00013f08 + 0x13e54);
      }
      else {
        local_3c[8] = -1;
        local_3c[9] = -1;
        local_3c[10] = -1;
        local_3c[0xb] = -1;
        local_28 = 0;
        local_3c._12_8_ = 0xffffffffffffffff;
        iVar2 = setsockopt(__fd,0,2,local_3c + 8,0x10);
        if (-1 < iVar2) {
          local_3c[4] = '\0';
          local_3c[5] = '\0';
          local_3c._0_2_ = 0x1f;
          local_3c._2_2_ = (undefined2)param_1;
          iVar2 = bind(__fd,(sockaddr *)local_3c,6);
          if (iVar2 < 0) {
            piVar3 = __errno_location();
            pcVar1 = strerror(*piVar3);
            printf((char *)(DAT_00013f10 + 0x13eec),param_1,pcVar1,*piVar3);
            __fd = -1;
          }
          goto LAB_00013dd4;
        }
        pcVar1 = (char *)(DAT_00013f0c + 0x13e9c);
      }
      perror(pcVar1);
      __fd = -1;
      goto LAB_00013dd4;
    }
    pcVar1 = (char *)(DAT_00013f04 + 0x13e20);
  }
  perror(pcVar1);
  __fd = -1;
LAB_00013dd4:
  if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__fd);
  }
  return;
}



/* ===== FUN_00013f14 @ 00013f14 size=308 ===== */

void FUN_00013f14(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00014048 + 0x13f24 + DAT_0001404c);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_00014048 + 0x13f24 + DAT_00014050);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_00014060 + 0x1402c),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_00014054 + 0x13fc0),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_00014058 + 0x13fdc),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_00014064 + 0x1403c));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_0001405c + 0x14008),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00014068 @ 00014068 size=72 ===== */

void FUN_00014068(uint param_1,uint param_2,undefined2 param_3,undefined2 param_4,uint param_5,
                 uint param_6)

{
  uint *puVar1;
  
  if ((param_1 & 0xf) == 8) {
    param_1 = param_1 | 2;
  }
  puVar1 = *(uint **)(DAT_000140b0 + 0x1407c + DAT_000140b4);
  *(undefined2 *)((int)puVar1 + 10) = param_4;
  puVar1[3] = 0;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[4] = param_5;
  *(undefined2 *)(puVar1 + 2) = param_3;
  puVar1[5] = param_6;
  return;
}



/* ===== FUN_000140b8 @ 000140b8 size=224 ===== */

void FUN_000140b8(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  
  if ((param_2 - 1 & 0xffff) < 0xfff) {
    if (param_3 == 0) {
      return;
    }
  }
  else if (param_2 == 0 && param_3 != 0) {
    param_2 = 3;
  }
  iVar1 = -1;
  iVar3 = 0;
  puVar2 = (ushort *)(DAT_00014198 + 0x140ec);
  do {
    if (((*puVar2 == param_1) && (puVar2[1] == param_2)) && ((byte)puVar2[2] == param_3))
    goto LAB_00014150;
    if (((iVar1 == -1) && (*puVar2 == 0)) && ((puVar2[1] == 0 && ((char)puVar2[2] == '\0')))) {
      iVar1 = iVar3;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 6;
  } while (iVar3 != 0x14);
  iVar3 = iVar1;
  if (iVar1 == -1) {
    return;
  }
LAB_00014150:
  iVar1 = DAT_0001419c + 0x14164 + iVar3 * 0xc;
  *(short *)(DAT_0001419c + 0x14164 + iVar3 * 0xc) = (short)param_1;
  *(short *)(iVar1 + 2) = (short)param_2;
  *(char *)(iVar1 + 4) = (char)param_3;
  *(undefined4 *)(iVar1 + 8) = param_4;
  return;
}



/* ===== FUN_000141a0 @ 000141a0 size=200 ===== */

undefined4 FUN_000141a0(uint param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = 0;
  if (param_2 == 0 && param_3 != 0) {
    param_2 = 3;
  }
  iVar3 = -1;
  puVar1 = (ushort *)(DAT_00014268 + 0x141d0);
  do {
    if (*puVar1 == param_1) {
      if (puVar1[1] == param_2) {
        if ((byte)puVar1[2] == param_3) {
          return *(undefined4 *)(iVar2 * 0xc + DAT_0001426c + 0x14208);
        }
        bVar4 = param_1 == 0;
LAB_00014218:
        if ((bVar4) && ((byte)puVar1[2] == param_3)) {
          iVar3 = iVar2;
        }
      }
    }
    else if (*puVar1 == 0) {
      bVar4 = puVar1[1] == param_2;
      goto LAB_00014218;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 6;
    if (iVar2 == 0x14) {
      if (iVar3 != -1) {
        return *(undefined4 *)(iVar3 * 0xc + DAT_00014270 + 0x14258);
      }
      return 0;
    }
  } while( true );
}



/* ===== FUN_00014274 @ 00014274 size=156 ===== */

void FUN_00014274(uint param_1,uint param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar2 = (ushort *)(DAT_00014310 + 0x14378);
  while ((*puVar2 != param_1 || ((byte)puVar2[1] != param_2))) {
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 0x1c;
    if (iVar4 == 0x14) {
      return;
    }
  }
  iVar3 = iVar4 * 0x38 + DAT_00014314 + 0x142b0;
  *(undefined4 *)(iVar3 + 0xf0) = 0;
  *(undefined1 *)(iVar3 + 0xf4) = 0;
  if (*(void **)(iVar3 + 0xf8) != (void *)0x0) {
    free(*(void **)(iVar3 + 0xf8));
  }
  uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iVar4 = iVar4 * 0x38 + DAT_00014318;
  *(undefined4 *)(iVar4 + 0x143e8) = 0;
  *(undefined4 *)(iVar4 + 0x143ec) = uVar1;
  *(undefined4 *)(iVar4 + 0x143d8) = 0;
  *(undefined4 *)(iVar4 + 0x143dc) = uVar1;
  *(undefined4 *)(iVar4 + 0x143e0) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(iVar4 + 0x143e4) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(iVar4 + 0x143f0) = 0;
  *(undefined4 *)(iVar4 + 0x143f4) = uVar1;
  *(undefined4 *)(iVar4 + 0x143f8) = 0;
  *(undefined4 *)(iVar4 + 0x143fc) = uVar1;
  *(undefined4 *)(iVar4 + 0x14400) = 0;
  *(undefined4 *)(iVar4 + 0x14404) = uVar1;
  return;
}



/* ===== FUN_0001431c @ 0001431c size=440 ===== */

int FUN_0001431c(int param_1)

{
  undefined2 uVar1;
  void *__dest;
  void *__ptr;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  size_t __n;
  size_t __n_00;
  
  iVar3 = -1;
  iVar7 = 0;
  psVar5 = (short *)(DAT_000144d4 + 0x14424);
  do {
    if ((*psVar5 == *(short *)(param_1 + 0x14)) && ((char)psVar5[1] == *(char *)(param_1 + 0x1a)))
    goto LAB_00014390;
    if ((iVar3 == -1) && ((*psVar5 == 0 && ((char)psVar5[1] == '\0')))) {
      iVar3 = iVar7;
    }
    iVar7 = iVar7 + 1;
    psVar5 = psVar5 + 0x1c;
  } while (iVar7 != 0x14);
  iVar6 = param_1;
  iVar7 = iVar3;
  if (iVar3 != -1) {
LAB_00014390:
    iVar3 = DAT_000144d8 + 0x143a4 + iVar7 * 0x38;
    iVar6 = iVar3 + 0xf8;
    *(short *)(iVar3 + 0xf0) = *(short *)(param_1 + 0x14);
    __n = *(size_t *)(iVar3 + 0x104);
    *(undefined1 *)(iVar3 + 0xf2) = *(undefined1 *)(param_1 + 0x1a);
    __n_00 = *(size_t *)(param_1 + 0xc);
    __dest = malloc(__n + __n_00);
    if (__dest == (void *)0x0) {
      perror((char *)(DAT_000144dc + 0x143d8));
      FUN_00014274(*(undefined2 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x1a));
      iVar6 = param_1;
    }
    else {
      if (__n != 0) {
        memcpy(__dest,*(void **)(iVar3 + 0x100),__n);
      }
      if (__n_00 != 0) {
        memcpy((void *)((int)__dest + __n),*(void **)(param_1 + 8),__n_00);
      }
      __ptr = *(void **)(iVar7 * 0x38 + DAT_000144e0 + 0x14524);
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      iVar3 = *(int *)(param_1 + 0xc);
      iVar7 = iVar7 * 0x38 + DAT_000144e4 + 0x1444c;
      *(void **)(iVar7 + 0xf8) = __dest;
      iVar3 = *(int *)(iVar7 + 0x104) + iVar3;
      *(int *)(iVar7 + 0xfc) = iVar3;
      uVar1 = *(undefined2 *)(param_1 + 0x10);
      *(int *)(iVar7 + 0x104) = iVar3;
      *(void **)(iVar7 + 0x100) = __dest;
      *(undefined2 *)(iVar7 + 0x108) = uVar1;
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      uVar4 = *(undefined4 *)(param_1 + 0x24);
      *(undefined1 *)(iVar7 + 0x10a) = *(undefined1 *)(param_1 + 0x12);
      *(undefined4 *)(iVar7 + 0x118) = uVar2;
      *(undefined4 *)(iVar7 + 0x11c) = uVar4;
      *(undefined2 *)(iVar7 + 0x10c) = *(undefined2 *)(param_1 + 0x14);
      *(undefined2 *)(iVar7 + 0x10e) = *(undefined2 *)(param_1 + 0x16);
      *(undefined2 *)(iVar7 + 0x110) = *(undefined2 *)(param_1 + 0x18);
      *(undefined1 *)(iVar7 + 0x112) = *(undefined1 *)(param_1 + 0x1a);
      *(undefined1 *)(iVar7 + 0x113) = *(undefined1 *)(param_1 + 0x1b);
      *(undefined4 *)(iVar7 + 0x120) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(iVar7 + 0x124) = *(undefined4 *)(param_1 + 0x2c);
    }
  }
  return iVar6;
}



/* ===== FUN_000144e8 @ 000144e8 size=88 ===== */

undefined1 FUN_000144e8(uint param_1,uint param_2)

{
  ushort *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (ushort *)(DAT_00014540 + 0x145e8);
  while ((*puVar1 != param_1 || ((byte)puVar1[1] != param_2))) {
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x1c;
    if (iVar2 == 0x14) {
      return 0;
    }
  }
  return *(undefined1 *)(iVar2 * 0x38 + DAT_00014544 + 0x14613);
}



/* ===== FUN_00014548 @ 00014548 size=88 ===== */

void FUN_00014548(uint param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = 0;
  puVar2 = (ushort *)(DAT_000145a0 + 0x1464c);
  while ((*puVar2 != param_1 || ((byte)puVar2[1] != param_2))) {
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x1c;
    if (iVar1 == 0x14) {
      return;
    }
  }
  *(undefined1 *)(iVar1 * 0x38 + DAT_000145a4 + 0x14677) = param_3;
  return;
}



/* ===== FUN_000145a8 @ 000145a8 size=88 ===== */

undefined1 FUN_000145a8(uint param_1,uint param_2)

{
  ushort *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (ushort *)(DAT_00014600 + 0x146a8);
  while ((*puVar1 != param_1 || ((byte)puVar1[1] != param_2))) {
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x1c;
    if (iVar2 == 0x14) {
      return 0;
    }
  }
  return *(undefined1 *)(iVar2 * 0x38 + DAT_00014604 + 0x146d4);
}



/* ===== FUN_00014608 @ 00014608 size=88 ===== */

void FUN_00014608(uint param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = 0;
  puVar2 = (ushort *)(DAT_00014660 + 0x1470c);
  while ((*puVar2 != param_1 || ((byte)puVar2[1] != param_2))) {
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x1c;
    if (iVar1 == 0x14) {
      return;
    }
  }
  *(undefined1 *)(iVar1 * 0x38 + DAT_00014664 + 0x14738) = param_3;
  return;
}



/* ===== FUN_0001472c @ 0001472c size=148 ===== */

void FUN_0001472c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *__format;
  bool bVar5;
  
  iVar4 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  if ((-1 < param_3) && (param_3 <= iVar2)) {
    iVar2 = param_3;
  }
  iVar1 = 1;
  __format = (char *)(DAT_000147c0 + 0x14764);
  for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    if (iVar1 == 1) {
      FUN_00013f14(param_1,param_2);
    }
    printf(__format,(uint)*(byte *)(iVar4 + iVar3));
    if (iVar1 == 0x14) {
      iVar1 = 0;
      putchar(10);
    }
    iVar1 = iVar1 + 1;
  }
  bVar5 = iVar1 == 1;
  iVar4 = iVar1 + -1;
  if (!bVar5) {
    iVar4 = iVar2;
  }
  if ((bVar5 || iVar2 == 0) || iVar4 < 0 != (bVar5 && SBORROW4(iVar1,1))) {
    return;
  }
  putchar(10);
  return;
}



/* ===== FUN_00014958 @ 00014958 size=620 ===== */

void FUN_00014958(undefined4 param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  byte *pbVar15;
  bool bVar17;
  undefined4 uVar18;
  byte *pbVar16;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    return;
  }
  uVar7 = **(uint **)(DAT_000149a0 + 0x1496c + DAT_000149a4) & 7;
  if (uVar7 == 2) {
    FUN_0001472c();
    return;
  }
  if (uVar7 == 4) {
    iVar12 = DAT_00014930 + 0x147e4;
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((-1 < (int)param_3) && ((int)param_3 <= (int)uVar7)) {
      uVar7 = param_3;
    }
    iVar8 = 0;
    pcVar14 = (char *)(DAT_00014934 + 0x14804);
    iVar13 = DAT_00014938 + 0x14810;
    pbVar9 = *(byte **)(param_2 + 8);
    for (; iVar10 = DAT_0001493c, 0 < (int)uVar7; uVar7 = uVar7 - uVar2) {
      FUN_00013f14(param_1,param_2);
      printf(pcVar14,iVar8);
      uVar2 = uVar7;
      if (0xf < (int)uVar7) {
        uVar2 = 0x10;
      }
      iVar4 = DAT_00014940 + 0x14858;
      uVar11 = 0;
      do {
        pbVar16 = pbVar9 + uVar11;
        uVar11 = uVar11 + 1;
        iVar3 = iVar4;
        if ((uVar11 & 7) != 0) {
          iVar3 = iVar13;
        }
        printf((char *)(iVar10 + 0x14840),(uint)*pbVar16,iVar3);
      } while (uVar11 != uVar2);
      iVar4 = DAT_00014944 + 0x1489c;
      iVar10 = DAT_00014948 + 0x148a0;
      pcVar5 = (char *)(DAT_0001494c + 0x148a4);
      uVar11 = uVar2;
      while (uVar11 != 0x10) {
        uVar11 = uVar11 + 1;
        iVar3 = iVar10;
        if ((uVar11 & 7) != 0) {
          iVar3 = iVar4;
        }
        printf(pcVar5,iVar3);
      }
      piVar6 = *(int **)(iVar12 + DAT_00014950);
      pcVar5 = (char *)(DAT_00014954 + 0x148c4);
      pbVar16 = pbVar9;
      do {
        pbVar15 = pbVar16 + 1;
        uVar11 = (uint)*pbVar16;
        if ((*(ushort *)(*piVar6 + uVar11 * 2) & 0x40) == 0) {
          uVar11 = 0x2e;
        }
        printf(pcVar5,uVar11);
        pbVar16 = pbVar15;
      } while (pbVar9 + uVar2 != pbVar15);
      iVar8 = iVar8 + uVar2;
      putchar(10);
      pbVar9 = pbVar9 + uVar2;
    }
    return;
  }
  if (uVar7 != 1) {
    return;
  }
  iVar13 = *(int *)(param_2 + 8);
  iVar12 = DAT_00014720 + 0x14688;
  uVar7 = *(uint *)(param_2 + 0xc);
  if ((-1 < (int)param_3) && ((int)param_3 <= (int)uVar7)) {
    uVar7 = param_3;
  }
  iVar8 = 1;
  pcVar14 = (char *)(DAT_00014724 + 0x146a8);
  uVar18 = 1;
  for (iVar10 = 0; iVar10 < (int)uVar7; iVar10 = iVar10 + 1) {
    if (iVar8 == 1) {
      FUN_00013f14(param_1,param_2);
    }
    uVar2 = (uint)*(byte *)(iVar13 + iVar10);
    iVar4 = **(int **)(iVar12 + DAT_00014728);
    uVar1 = *(ushort *)(iVar4 + uVar2 * 2);
    if ((uVar1 & 0x40) == 0) {
      uVar2 = 0x2e;
    }
    printf(pcVar14,uVar2,iVar4,(uint)uVar1,uVar18);
    if (iVar8 == 0x14) {
      iVar8 = 0;
      putchar(10);
    }
    iVar8 = iVar8 + 1;
  }
  bVar17 = iVar8 == 1;
  uVar2 = iVar8 - 1;
  if (!bVar17) {
    uVar2 = uVar7;
  }
  if ((bVar17 || uVar7 == 0) || (int)uVar2 < 0 != (bVar17 && SBORROW4(iVar8,1))) {
    return;
  }
  putchar(10);
  return;
}



/* ===== FUN_000149a8 @ 000149a8 size=8 ===== */

void FUN_000149a8(undefined4 param_1,undefined4 param_2)

{
  FUN_00014958(param_1,param_2,0xffffffff);
  return;
}



/* ===== FUN_000149b0 @ 000149b0 size=32 ===== */

undefined1 FUN_000149b0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar1 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return *puVar1;
}



/* ===== FUN_000149d0 @ 000149d0 size=40 ===== */

ushort FUN_000149d0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 8);
  *(ushort **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -2;
  uVar1 = *puVar2;
  return uVar1 << 8 | uVar1 >> 8;
}



/* ===== FUN_000149f8 @ 000149f8 size=2104 ===== */

int FUN_000149f8(uint param_1)

{
  if (param_1 == 0x2a) {
    return DAT_0001528c + 0x14e4c;
  }
  if (0x2a < param_1) {
    if (param_1 == 0x3f) {
      return DAT_00015334 + 0x15044;
    }
    if (0x3f < param_1) {
      if (param_1 == 0x8ff) {
        return DAT_00015388 + 0x15140;
      }
      if (0x8ff < param_1) {
        if (param_1 == 0xcff) {
          return DAT_000153b4 + 0x151c4;
        }
        if (0xcff < param_1) {
          if (param_1 == 0xe7f) {
            return DAT_000153c8 + 0x15200;
          }
          if (0xe7f < param_1) {
            if (param_1 == 0xeff) {
              return DAT_000153d4 + 0x15224;
            }
            if (param_1 != 0xf7f) {
              return DAT_00015288 + 0x14e40;
            }
            return (int)&DAT_00015230 + DAT_000153d8;
          }
          if (param_1 == 0xd7f) {
            return DAT_000153cc + 0x1520c;
          }
          if (param_1 != 0xdff) {
            return DAT_00015284 + 0x14e1c;
          }
          return DAT_000153d0 + 0x15218;
        }
        if (param_1 == 0xb7f) {
          return DAT_000153b8 + 0x151d0;
        }
        if (param_1 < 0xb80) {
          if (param_1 != 0xaff) {
            return DAT_0001527c + 0x14dc0;
          }
          return DAT_000153bc + 0x151dc;
        }
        if (param_1 == 0xbff) {
          return DAT_000153c0 + 0x151e8;
        }
        if (param_1 != 0xc7f) {
          return DAT_00015280 + 0x14de4;
        }
        return DAT_000153c4 + 0x151f4;
      }
      if (param_1 == 0x1ff) {
        return DAT_0001538c + 0x1514c;
      }
      if (0x1ff < param_1) {
        if (param_1 == 0x67f) {
          return DAT_000153a0 + 0x15188;
        }
        if (0x67f < param_1) {
          if (param_1 == 0x6ff) {
            return DAT_000153ac + 0x151ac;
          }
          if (param_1 != 0x87f) {
            return DAT_00015278 + 0x14d80;
          }
          return DAT_000153b0 + 0x151b8;
        }
        if (param_1 == 0x27f) {
          return DAT_000153a4 + 0x15194;
        }
        if (param_1 != 0x5ff) {
          return DAT_00015274 + 0x14d5c;
        }
        return DAT_000153a8 + 0x151a0;
      }
      if (param_1 == 0x41) {
        return DAT_00015390 + 0x15158;
      }
      if (param_1 < 0x41) {
        return DAT_00015394 + 0x15164;
      }
      if (param_1 == 0xff) {
        return DAT_00015398 + 0x15170;
      }
      if (param_1 != 0x17f) {
        return DAT_00015270 + 0x14d24;
      }
      return DAT_0001539c + 0x1517c;
    }
    if (param_1 == 0x34) {
      return DAT_00015338 + 0x15050;
    }
    if (0x34 < param_1) {
      if (param_1 == 0x39) {
        return DAT_00015360 + 0x150c8;
      }
      if (0x39 < param_1) {
        if (param_1 == 0x3c) {
          return DAT_00015374 + 0x15104;
        }
        if (0x3c < param_1) {
          if (param_1 == 0x3d) {
            return DAT_00015380 + 0x15128;
          }
          if (param_1 != 0x3e) {
            return DAT_0001526c + 0x14cd0;
          }
          return DAT_00015384 + 0x15134;
        }
        if (param_1 == 0x3a) {
          return DAT_00015378 + 0x15110;
        }
        if (param_1 != 0x3b) {
          return DAT_00015268 + 0x14cb4;
        }
        return DAT_0001537c + 0x1511c;
      }
      if (param_1 == 0x36) {
        return DAT_00015364 + 0x150d4;
      }
      if (param_1 < 0x36) {
        return DAT_00015368 + 0x150e0;
      }
      if (param_1 == 0x37) {
        return DAT_0001536c + 0x150ec;
      }
      if (param_1 != 0x38) {
        return DAT_00015264 + 0x14c8c;
      }
      return DAT_00015370 + 0x150f8;
    }
    if (param_1 == 0x2f) {
      return DAT_0001533c + 0x1505c;
    }
    if (0x2f < param_1) {
      if (param_1 == 0x31) {
        return DAT_00015350 + 0x15098;
      }
      if (param_1 < 0x31) {
        return DAT_00015354 + 0x150a4;
      }
      if (param_1 == 0x32) {
        return DAT_00015358 + 0x150b0;
      }
      if (param_1 != 0x33) {
        return DAT_00015260 + 0x14c58;
      }
      return DAT_0001535c + 0x150bc;
    }
    if (param_1 == 0x2c) {
      return DAT_00015340 + 0x15068;
    }
    if (param_1 < 0x2c) {
      return DAT_00015344 + 0x15074;
    }
    if (param_1 == 0x2d) {
      return DAT_00015348 + 0x15080;
    }
    if (param_1 != 0x2e) {
      return DAT_0001525c + 0x14c30;
    }
    return DAT_0001534c + 0x1508c;
  }
  if (param_1 == 0x15) {
    return DAT_00015290 + 0x14e58;
  }
  if (0x15 < param_1) {
    if (param_1 == 0x1f) {
      return DAT_000152e4 + 0x14f54;
    }
    if (0x1f < param_1) {
      if (param_1 == 0x24) {
        return DAT_0001530c + 0x14fcc;
      }
      if (0x24 < param_1) {
        if (param_1 == 0x27) {
          return DAT_00015320 + 0x15008;
        }
        if (0x27 < param_1) {
          if (param_1 == 0x28) {
            return DAT_0001532c + 0x1502c;
          }
          if (param_1 != 0x29) {
            return DAT_00015258 + 0x14be4;
          }
          return DAT_00015330 + 0x15038;
        }
        if (param_1 == 0x25) {
          return DAT_00015324 + 0x15014;
        }
        if (param_1 != 0x26) {
          return DAT_00015254 + 0x14bc8;
        }
        return DAT_00015328 + 0x15020;
      }
      if (param_1 == 0x21) {
        return DAT_00015310 + 0x14fd8;
      }
      if (param_1 < 0x21) {
        return DAT_00015314 + 0x14fe4;
      }
      if (param_1 == 0x22) {
        return DAT_00015318 + 86000;
      }
      if (param_1 != 0x23) {
        return DAT_00015250 + 0x14ba0;
      }
      return DAT_0001531c + 0x14ffc;
    }
    if (param_1 == 0x1a) {
      return DAT_000152e8 + 0x14f60;
    }
    if (0x1a < param_1) {
      if (param_1 == 0x1c) {
        return DAT_000152fc + 0x14f9c;
      }
      if (param_1 < 0x1c) {
        return DAT_00015300 + 0x14fa8;
      }
      if (param_1 == 0x1d) {
        return DAT_00015304 + 0x14fb4;
      }
      if (param_1 != 0x1e) {
        return DAT_0001524c + 0x14b6c;
      }
      return DAT_00015308 + 0x14fc0;
    }
    if (param_1 == 0x17) {
      return DAT_000152ec + 0x14f6c;
    }
    if (param_1 < 0x17) {
      return DAT_000152f0 + 0x14f78;
    }
    if (param_1 == 0x18) {
      return DAT_000152f4 + 0x14f84;
    }
    if (param_1 != 0x19) {
      return DAT_00015248 + 0x14b44;
    }
    return DAT_000152f8 + 0x14f90;
  }
  if (param_1 == 10) {
    return DAT_00015294 + 0x14e64;
  }
  if (10 < param_1) {
    if (param_1 == 0xf) {
      return DAT_000152bc + 0x14edc;
    }
    if (0xf < param_1) {
      if (param_1 == 0x12) {
        return DAT_000152d0 + 0x14f18;
      }
      if (0x12 < param_1) {
        if (param_1 == 0x13) {
          return DAT_000152dc + 0x14f3c;
        }
        if (param_1 != 0x14) {
          return DAT_00015244 + 0x14b04;
        }
        return DAT_000152e0 + 0x14f48;
      }
      if (param_1 == 0x10) {
        return DAT_000152d4 + 0x14f24;
      }
      if (param_1 != 0x11) {
        return DAT_00015240 + 0x14ae8;
      }
      return DAT_000152d8 + 0x14f30;
    }
    if (param_1 == 0xc) {
      return DAT_000152c0 + 0x14ee8;
    }
    if (param_1 < 0xc) {
      return DAT_000152c4 + 0x14ef4;
    }
    if (param_1 == 0xd) {
      return DAT_000152c8 + 0x14f00;
    }
    if (param_1 != 0xe) {
      return DAT_0001523c + 0x14ac0;
    }
    return DAT_000152cc + 0x14f0c;
  }
  if (param_1 == 5) {
    return DAT_00015298 + 0x14e70;
  }
  if (5 < param_1) {
    if (param_1 == 7) {
      return DAT_000152ac + 0x14eac;
    }
    if (param_1 < 7) {
      return DAT_000152b0 + 0x14eb8;
    }
    if (param_1 == 8) {
      return DAT_000152b4 + 0x14ec4;
    }
    if (param_1 != 9) {
      return DAT_00015238 + 0x14a8c;
    }
    return DAT_000152b8 + 0x14ed0;
  }
  if (param_1 == 2) {
    return DAT_0001529c + 0x14e7c;
  }
  if (param_1 < 3) {
    if (param_1 != 1) {
      return DAT_00015230 + 0x14a48;
    }
    return DAT_000152a0 + 0x14e88;
  }
  if (param_1 == 3) {
    return DAT_000152a4 + 0x14e94;
  }
  if (param_1 != 4) {
    return DAT_00015234 + 0x14a64;
  }
  return DAT_000152a8 + 0x14ea0;
}



/* ===== FUN_000153dc @ 000153dc size=36 ===== */

uint FUN_000153dc(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 8);
  *(uint **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -4;
  uVar1 = *puVar2;
  return uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
}



/* ===== FUN_00015400 @ 00015400 size=308 ===== */

void FUN_00015400(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00015534 + 0x15410 + DAT_00015538);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_00015534 + 0x15410 + DAT_0001553c);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_0001554c + 0x15518),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_00015540 + 0x154ac),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_00015544 + 0x154c8),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_00015550 + 0x15528));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_00015548 + 0x154f4),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00015554 @ 00015554 size=92 ===== */

void FUN_00015554(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar1 = DAT_000155b0;
  iVar2 = *(int *)(param_2 + 8);
  pbVar3 = (byte *)(iVar2 + -1);
  *(int *)(param_2 + 8) = iVar2 + 0x10;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0x10;
  FUN_00015400();
  printf((char *)(DAT_000155b4 + 0x15590));
  do {
    pbVar3 = pbVar3 + 1;
    printf((char *)(iVar1 + 0x1557c),(uint)*pbVar3);
  } while (pbVar3 != (byte *)(iVar2 + 0xf));
  putchar(10);
  return;
}



/* ===== FUN_000155b8 @ 000155b8 size=7560 ===== */

void FUN_000155b8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *__format;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  void *__ptr;
  undefined4 uVar23;
  undefined4 *puVar24;
  int *piVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  byte *pbVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  undefined8 uVar33;
  byte local_48;
  byte local_47;
  byte local_46;
  char acStack_40 [20];
  int local_2c;
  
  iVar30 = DAT_000165b8 + 0x155d8;
  piVar25 = *(int **)(iVar30 + DAT_000165bc);
  local_2c = *piVar25;
  FUN_00015400();
  uVar6 = FUN_000149b0(param_2);
  uVar7 = (uVar6 & 0x1ff) >> 1;
  if (0x7b < uVar7) {
    iVar8 = FUN_000149b0(param_2);
    uVar7 = uVar7 + iVar8 * 0x80 & 0xffff;
  }
  if (*(char *)(param_2 + 0x13) == '\0') {
    uVar23 = 0x72;
  }
  else {
    uVar23 = 0x73;
  }
  uVar33 = FUN_000149f8(uVar7,uVar23);
  if ((uVar6 & 1) == 0) {
    uVar23 = 0x6d;
  }
  else {
    uVar23 = 0x73;
  }
  printf((char *)(DAT_000165c0 + 0x15648),(int)((ulonglong)uVar33 >> 0x20),(int)uVar33,uVar23);
  if (uVar7 < 0x7c) {
    printf((char *)(DAT_000165d0 + 0x156b0),uVar7);
  }
  else {
    printf((char *)(DAT_000165c4 + 0x15664),uVar7 & 0x7f,uVar7 >> 7);
  }
  if (*(ushort *)(param_2 + 0x14) < 0x12) {
    putchar(10);
  }
  else {
    printf((char *)(DAT_000165c8 + 0x1567c));
  }
  iVar5 = DAT_0001681c;
  iVar4 = DAT_00016814;
  iVar3 = DAT_0001680c;
  iVar2 = DAT_000167a8;
  iVar1 = DAT_00016740;
  iVar31 = DAT_000166ec;
  iVar22 = DAT_0001668c;
  iVar8 = DAT_0001665c;
  if ((**(uint **)(iVar30 + DAT_000165cc) & 0x200) == 0) goto LAB_00015690;
  if (uVar7 < 0x2f) {
    if (uVar7 < 0x2d) {
      if (uVar7 == 0x13) {
        uVar6 = FUN_000153dc(param_2);
        pcVar9 = (char *)(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8
                         | uVar6 >> 0x18);
        FUN_00015400(param_1 + 1,param_2);
        __format = (char *)(DAT_00016750 + 0x16b70);
      }
      else if (uVar7 < 0x14) {
        if (uVar7 == 9) {
          puVar28 = *(undefined4 **)(param_2 + 8);
          if (*(int *)(DAT_000166d0 + 0x16500) == 1) {
            puVar24 = (undefined4 *)(DAT_000166d0 + 0x164b8);
            puVar26 = puVar28;
            do {
              puVar27 = puVar26 + 1;
              *puVar24 = *puVar26;
              puVar24 = puVar24 + 1;
              puVar26 = puVar27;
            } while (puVar27 != puVar28 + 4);
            uVar23 = 2;
            iVar30 = DAT_000166d8 + 0x164f0;
          }
          else if (*(int *)(DAT_000166d0 + 0x16500) == 2) {
            puVar24 = (undefined4 *)(DAT_000166d0 + 0x164c8);
            puVar26 = puVar28;
            do {
              puVar27 = puVar26 + 1;
              *puVar24 = *puVar26;
              puVar24 = puVar24 + 1;
              puVar26 = puVar27;
            } while (puVar27 != puVar28 + 4);
            uVar23 = 3;
            iVar30 = DAT_000166dc + 0x1651c;
          }
          else {
LAB_000164b8:
            uVar23 = 0;
            iVar30 = DAT_000166d4 + 0x164c8;
          }
LAB_000164ec:
          *(undefined4 *)(iVar30 + 0x58) = uVar23;
LAB_00015788:
          FUN_00015554(param_1 + 1,param_2);
          goto LAB_000157e0;
        }
        if (9 < uVar7) {
          if (uVar7 != 0xe) {
            if (0xe < uVar7) {
              if (uVar7 == 0x10) {
                pcVar9 = (char *)FUN_000149b0(param_2);
                FUN_00015400(param_1 + 1,param_2);
                __format = (char *)(DAT_0001674c + 93000);
              }
              else {
                if (0xf < uVar7) {
                  if (uVar7 != 0x11) {
                    bVar32 = uVar7 == 0x12;
                    goto LAB_000157dc;
                  }
                  goto LAB_00015788;
                }
                pcVar9 = (char *)FUN_000149b0(param_2);
                FUN_00015400(param_1 + 1,param_2);
                __format = (char *)(DAT_00016748 + 0x16b20);
              }
              goto LAB_0001572c;
            }
            if (uVar7 == 0xb) {
              puVar28 = *(undefined4 **)(param_2 + 8);
              if (*(int *)(DAT_000166e0 + 0x16584) == 3) {
                puVar24 = (undefined4 *)(DAT_000166e0 + 0x1655c);
                puVar26 = puVar28;
                do {
                  puVar27 = puVar26 + 1;
                  *puVar24 = *puVar26;
                  puVar24 = puVar24 + 1;
                  puVar26 = puVar27;
                } while (puVar27 != puVar28 + 4);
                uVar23 = 5;
                iVar30 = DAT_000166e8 + 0x1658c;
              }
              else {
                if (*(int *)(DAT_000166e0 + 0x16584) != 4) goto LAB_000164b8;
                puVar24 = (undefined4 *)(DAT_000166e0 + 0x1656c);
                puVar26 = puVar28;
                do {
                  puVar27 = puVar26 + 1;
                  *puVar24 = *puVar26;
                  puVar24 = puVar24 + 1;
                  puVar26 = puVar27;
                } while (puVar27 != puVar28 + 4);
                uVar23 = 6;
                iVar30 = DAT_000166e4 + 0x16564;
              }
              goto LAB_000164ec;
            }
            if (10 < uVar7) {
              if (uVar7 == 0xc) {
                pbVar29 = (byte *)(DAT_000166ec + 0x1659c);
                if (*(int *)((int)&DAT_000165f4 + DAT_000166ec) == 5) {
                  *(undefined4 *)((int)&DAT_000165ec + DAT_000166ec) =
                       **(undefined4 **)(param_2 + 8);
                  *(undefined4 *)((int)&DAT_000165f4 + iVar31) = 4;
                }
                else {
                  iVar30 = 0;
                  if (*(int *)((int)&DAT_000165f4 + DAT_000166ec) == 6) {
                    uVar23 = **(undefined4 **)(param_2 + 8);
                    *(undefined4 *)((int)&DAT_000165f4 + DAT_000166ec) = 0;
                    *(undefined4 *)((int)&DAT_000165f0 + iVar31) = uVar23;
                    iVar8 = DAT_000166f8;
                    FUN_00015400(6,0);
                    pcVar9 = (char *)(iVar8 + 0x168dc);
                    printf((char *)(DAT_000166fc + 0x168e0));
                    do {
                      iVar30 = iVar30 + 1;
                      printf(pcVar9,(uint)*pbVar29);
                      iVar8 = DAT_00016700;
                      pbVar29 = pbVar29 + 1;
                    } while (iVar30 != 0x10);
                    iVar30 = 0;
                    putchar(10);
                    FUN_00015400(6,0);
                    printf((char *)(DAT_00016704 + 0x1692c));
                    pbVar29 = (byte *)(iVar8 + 0x16920);
                    do {
                      iVar30 = iVar30 + 1;
                      printf(pcVar9,(uint)*pbVar29);
                      iVar8 = DAT_0001670c;
                      pbVar29 = pbVar29 + 1;
                    } while (iVar30 != 0x10);
                    iVar30 = 0;
                    puts((char *)(DAT_00016708 + 0x16958));
                    FUN_00015400(6,0);
                    printf((char *)(DAT_00016710 + 0x16978));
                    pbVar29 = (byte *)(iVar8 + 0x1697c);
                    do {
                      iVar30 = iVar30 + 1;
                      printf(pcVar9,(uint)*pbVar29);
                      iVar8 = DAT_00016718;
                      pbVar29 = pbVar29 + 1;
                    } while (iVar30 != 0x10);
                    iVar30 = 0;
                    puts((char *)(DAT_00016714 + 0x169a4));
                    FUN_00015400(6,0);
                    printf((char *)(DAT_0001671c + 0x169c4));
                    pbVar29 = (byte *)(iVar8 + 0x169d8);
                    do {
                      iVar30 = iVar30 + 1;
                      printf(pcVar9,(uint)*pbVar29);
                      pbVar29 = pbVar29 + 1;
                    } while (iVar30 != 0x10);
                    iVar30 = 0;
                    pbVar29 = (byte *)(DAT_00016720 + 0x16a40);
                    printf((char *)(DAT_00016724 + 0x169f4));
                    do {
                      iVar30 = iVar30 + 1;
                      printf(pcVar9,(uint)*pbVar29);
                      iVar8 = DAT_0001672c;
                      pbVar29 = pbVar29 + 1;
                    } while (iVar30 != 4);
                    iVar30 = 0;
                    puts((char *)(DAT_00016728 + 0x16a24));
                    FUN_00015400(6,0);
                    printf((char *)(DAT_00016730 + 0x16a44));
                    pbVar29 = (byte *)(iVar8 + 0x16a68);
                    do {
                      iVar30 = iVar30 + 1;
                      printf(pcVar9,(uint)*pbVar29);
                      pbVar29 = pbVar29 + 1;
                    } while (iVar30 != 0x10);
                    iVar30 = 0;
                    pbVar29 = (byte *)(DAT_00016734 + 0x16ac4);
                    printf((char *)(DAT_00016738 + 0x16a74));
                    do {
                      iVar30 = iVar30 + 1;
                      printf(pcVar9,(uint)*pbVar29);
                      pbVar29 = pbVar29 + 1;
                    } while (iVar30 != 4);
                    puts((char *)(DAT_0001673c + 0x16a9c));
                  }
                  else {
                    *(undefined4 *)((int)&DAT_000165f4 + DAT_000166ec) = 0;
                  }
                }
                iVar30 = DAT_000166f0;
                iVar8 = *(int *)(param_2 + 8);
                FUN_00015400(param_1 + 1,param_2);
                pbVar29 = (byte *)(iVar8 + -1);
                printf((char *)(DAT_000166f4 + 0x16898));
                do {
                  pbVar29 = pbVar29 + 1;
                  printf((char *)(iVar30 + 0x16890),(uint)*pbVar29);
                } while ((byte *)(iVar8 + 3) != pbVar29);
                goto LAB_000168ac;
              }
              if (uVar7 != 0xd) goto LAB_00015690;
              goto LAB_00015788;
            }
          }
          iVar30 = *(int *)(param_2 + 8);
          *(int *)(param_2 + 8) = iVar30 + 0x10;
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0x10;
          pbVar29 = (byte *)(iVar30 + -1);
          FUN_00015400(param_1 + 1,param_2);
          printf((char *)(DAT_00016744 + 0x16ae0));
          do {
            pbVar29 = pbVar29 + 1;
            printf((char *)(iVar1 + 0x16ac4),(uint)*pbVar29);
          } while ((byte *)(iVar30 + 0xf) != pbVar29);
LAB_000168ac:
          putchar(10);
          goto LAB_000157e0;
        }
        if (uVar7 == 4) {
          uVar6 = FUN_000149b0(param_2);
          pcVar9 = (char *)FUN_000149b0(param_2);
          FUN_00015400(param_1 + 1,param_2);
          uVar23 = FUN_000149f8(uVar6 & 0xffff);
          printf((char *)(DAT_000166c0 + 0x16428),uVar6,uVar23);
          FUN_00015400(param_1 + 1,param_2);
          __format = (char *)(DAT_000166c4 + 0x16444);
        }
        else if (uVar7 < 5) {
          if (uVar7 == 2) {
            param_1 = param_1 + 1;
            iVar8 = FUN_000149b0(param_2);
            iVar22 = FUN_000149b0(param_2);
            iVar31 = *(int *)(param_2 + 8);
            *(int *)(param_2 + 8) = iVar31 + 0xe;
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0xe;
            FUN_00015400(param_1,param_2);
            printf((char *)(DAT_000166a8 + 0x16324),iVar8);
            FUN_00015400(param_1,param_2);
            iVar8 = iVar22 - iVar8;
            printf((char *)(DAT_000166ac + 0x16344),iVar22);
            if (0xd < iVar8) {
              iVar8 = 0xe;
            }
            iVar22 = 0;
            FUN_00015400(param_1,param_2);
            printf((char *)(DAT_000166b0 + 0x16368));
            while (iVar22 < iVar8) {
              uVar6 = (uint)*(byte *)(iVar31 + iVar22);
              iVar22 = iVar22 + 1;
              if ((*(ushort *)(**(int **)(iVar30 + DAT_000166b8) + uVar6 * 2) & 0x40) == 0) {
                uVar6 = 0x2e;
              }
              putchar(uVar6);
            }
            pcVar9 = (char *)(DAT_000166b4 + 0x1637c);
            goto LAB_00016378;
          }
          if (2 < uVar7) {
            uVar6 = FUN_000149b0(param_2);
            FUN_00015400(param_1 + 1,param_2);
            uVar23 = FUN_000149f8(uVar6 & 0xffff);
            printf((char *)(DAT_000166bc + 0x163e0),uVar6,uVar23);
            goto LAB_000157e0;
          }
          if (uVar7 != 1) goto LAB_00015690;
          pcVar9 = (char *)FUN_000149b0(param_2);
          FUN_00015400(param_1 + 1,param_2);
          __format = (char *)(DAT_000165d4 + 0x15730);
        }
        else if (uVar7 == 6) {
          uVar6 = FUN_000149d0(param_2);
          FUN_00015400(param_1 + 1,param_2);
          pcVar9 = (char *)((uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff);
          __format = (char *)(DAT_000166c8 + 0x1646c);
        }
        else {
          if (uVar7 < 6) goto LAB_000157e0;
          if (uVar7 != 7) {
            if (uVar7 == 8) {
              puVar26 = *(undefined4 **)(param_2 + 8);
              puVar28 = (undefined4 *)(DAT_000165d8 + 0x15764);
              puVar24 = puVar26;
              do {
                puVar27 = puVar24 + 1;
                *puVar28 = *puVar24;
                puVar28 = puVar28 + 1;
                puVar24 = puVar27;
              } while (puVar27 != puVar26 + 4);
              *(undefined4 *)(DAT_000165dc + 0x157e0) = 1;
              goto LAB_00015788;
            }
            goto LAB_00015690;
          }
          pcVar9 = (char *)FUN_000149b0(param_2);
          FUN_00015400(param_1 + 1,param_2);
          __format = (char *)(DAT_000166cc + 0x16498);
        }
      }
      else if (uVar7 < 0x24) {
        if ((0x20 < uVar7) || (uVar7 == 0x18)) goto LAB_000157e0;
        if (uVar7 < 0x19) {
          if (uVar7 < 0x16) {
            uVar6 = FUN_000149d0(param_2);
            uVar7 = FUN_000153dc(param_2);
            pcVar9 = (char *)(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                              (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18);
            FUN_00015400(param_1 + 1,param_2);
            printf((char *)(DAT_00016754 + 0x16ba8),(uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff);
            FUN_00015400(param_1 + 1,param_2);
            __format = (char *)(DAT_00016758 + 0x16bc8);
          }
          else {
            if (uVar7 != 0x17) goto LAB_00015690;
            param_1 = param_1 + 1;
            uVar23 = FUN_000149b0(param_2);
            uVar6 = FUN_000149d0(param_2);
            uVar7 = FUN_000149d0(param_2);
            uVar10 = FUN_000149d0(param_2);
            uVar11 = FUN_000149d0(param_2);
            FUN_00015400(param_1,param_2);
            printf((char *)(DAT_000165e0 + 0x15880),uVar23);
            FUN_00015400(param_1,param_2);
            printf((char *)(DAT_000165e4 + 0x158a4),(uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff,
                   (uVar7 & 0xff) << 8 | uVar7 >> 8 & 0xff);
            FUN_00015400(param_1,param_2);
            printf((char *)(DAT_000165e8 + 0x158c4),(uVar10 & 0xff) << 8 | uVar10 >> 8 & 0xff);
            FUN_00015400(param_1,param_2);
            pcVar9 = (char *)((uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff);
            __format = (char *)(DAT_000165ec + 0x158e4);
          }
        }
        else if (uVar7 == 0x1c) {
          param_1 = param_1 + 1;
          uVar23 = FUN_000149b0(param_2);
          uVar6 = FUN_000149d0(param_2);
          uVar7 = FUN_000149d0(param_2);
          uVar12 = FUN_000149b0(param_2);
          uVar13 = FUN_000149b0(param_2);
          uVar14 = FUN_000149b0(param_2);
          uVar15 = FUN_000149b0(param_2);
          uVar16 = FUN_000149b0(param_2);
          uVar17 = FUN_000149b0(param_2);
          uVar10 = FUN_000149b0(param_2);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_0001675c + 0x16c64),uVar23);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_00016760 + 0x16c94),(uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff,
                 (uVar7 & 0xff) << 8 | uVar7 >> 8 & 0xff,uVar12,uVar13);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_00016764 + 0x16cb8),uVar14,uVar15);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_00016768 + 0x16cd8),uVar16,uVar17);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_0001676c + 0x16cf4),uVar10 & 0xf);
          FUN_00015400(param_1,param_2);
          pcVar9 = (char *)((uVar10 & 0xfff) >> 4);
          __format = (char *)(DAT_00016770 + 0x16d10);
        }
        else if (uVar7 < 0x1d) {
          if (uVar7 != 0x19) {
LAB_00015690:
            FUN_000149a8(param_1,param_2);
            goto LAB_000157e0;
          }
          param_1 = param_1 + 1;
          uVar23 = FUN_000149b0(param_2);
          uVar6 = FUN_000149d0(param_2);
          uVar7 = FUN_000149d0(param_2);
          uVar12 = FUN_000149b0(param_2);
          uVar13 = FUN_000149b0(param_2);
          uVar14 = FUN_000149b0(param_2);
          uVar15 = FUN_000149b0(param_2);
          uVar16 = FUN_000149b0(param_2);
          uVar17 = FUN_000149b0(param_2);
          uVar18 = FUN_000149b0(param_2);
          uVar19 = FUN_000149b0(param_2);
          uVar20 = FUN_000149b0(param_2);
          uVar21 = FUN_000149b0(param_2);
          uVar10 = FUN_000149b0(param_2);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_000165f0 + 0x159c8),uVar23);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_000165f4 + 0x159f8),(uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff,
                 (uVar7 & 0xff) << 8 | uVar7 >> 8 & 0xff,uVar12,uVar13);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_000165f8 + 0x15a1c),uVar14,uVar15);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_000165fc + 0x15a3c),uVar16,uVar17);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_00016600 + 0x15a5c),uVar18,uVar19);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_00016604 + 0x15a7c),uVar20,uVar21);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_00016608 + 0x15a98),uVar10 & 0xf);
          FUN_00015400(param_1,param_2);
          pcVar9 = (char *)((uVar10 & 0xfff) >> 4);
          __format = (char *)(DAT_0001660c + 0x15ab4);
        }
        else {
          if (uVar7 < 0x1f) goto LAB_00015690;
          pcVar9 = (char *)FUN_000149b0(param_2);
          FUN_00015400(param_1 + 1,param_2);
          __format = (char *)(DAT_00016610 + 0x15ae4);
        }
      }
      else {
        param_1 = param_1 + 1;
        if (uVar7 < 0x29) {
          if (0x26 < uVar7) {
            iVar30 = *(int *)(param_2 + 8);
            *(int *)(param_2 + 8) = iVar30 + 8;
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -8;
            pbVar29 = (byte *)(iVar30 + -1);
            FUN_00015400(param_1,param_2);
            printf((char *)(DAT_000167ac + 0x16e74));
            do {
              pbVar29 = pbVar29 + 1;
              printf((char *)(iVar2 + 0x16e58),(uint)*pbVar29);
            } while (pbVar29 != (byte *)(iVar30 + 7));
            goto LAB_000168ac;
          }
          if (uVar7 != 0x24) {
            uVar23 = FUN_000149b0(param_2);
            uVar6 = FUN_000149d0(param_2);
            uVar7 = (uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff;
            uVar6 = FUN_000149d0(param_2);
            FUN_00015400(param_1,param_2);
            __ptr = (void *)thunk_FUN_00033c08(uVar23);
            printf((char *)(DAT_0001679c + 0x16de4),uVar23,__ptr);
            free(__ptr);
            FUN_00015400(param_1,param_2);
            uVar23 = FUN_00030970(uVar7);
            printf((char *)(DAT_000167a0 + 0x16e14),uVar7,uVar23);
            FUN_00015400(param_1,param_2);
            pcVar9 = (char *)((uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff);
            __format = (char *)(DAT_000167a4 + 0x16e30);
            goto LAB_0001572c;
          }
          uVar6 = FUN_000149b0(param_2);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_00016614 + 0x15b28),uVar6);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_00016618 + 0x15b40));
          if ((uVar6 & 1) == 0) {
            iVar30 = DAT_0001661c + 0x15b54;
          }
          else {
            iVar30 = DAT_00016774 + 0x16d1c;
          }
          printf((char *)(DAT_00016620 + 0x15b5c),iVar30);
          uVar7 = (uVar6 & 7) >> 1;
          if (uVar7 == 2) {
            pcVar9 = (char *)(DAT_0001677c + 0x16d34);
          }
          else if (uVar7 == 3) {
            pcVar9 = (char *)(DAT_00016780 + 0x16d40);
          }
          else if (uVar7 == 1) {
            pcVar9 = (char *)(DAT_00016778 + 0x16d28);
          }
          else {
            pcVar9 = (char *)(DAT_00016624 + 0x15b84);
          }
          puts(pcVar9);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_00016628 + 0x15b9c));
          uVar7 = (uVar6 & 0x1f) >> 3;
          if (uVar7 == 2) {
            pcVar9 = (char *)(DAT_00016788 + 0x16d58);
LAB_00015bc0:
            printf(pcVar9);
          }
          else {
            if (uVar7 != 3) {
              if (uVar7 == 1) {
                pcVar9 = (char *)(DAT_00016784 + 0x16d4c);
              }
              else {
                pcVar9 = (char *)(DAT_0001662c + 0x15bc4);
              }
              goto LAB_00015bc0;
            }
            puts((char *)(DAT_0001678c + 0x16d64));
          }
          uVar6 = (uVar6 & 0x7f) >> 5;
          if (uVar6 == 2) {
            pcVar9 = (char *)(DAT_00016794 + 0x16d80);
          }
          else if (uVar6 == 3) {
            pcVar9 = (char *)(DAT_00016798 + 0x16d8c);
          }
          else if (uVar6 == 1) {
            pcVar9 = (char *)(DAT_00016790 + 0x16d74);
          }
          else {
            pcVar9 = (char *)(DAT_00016630 + 0x15bec);
          }
LAB_00016378:
          puts(pcVar9);
          goto LAB_000157e0;
        }
        if (uVar7 == 0x2b) {
          uVar23 = FUN_000149b0(param_2);
          uVar12 = FUN_000149b0(param_2);
          uVar13 = FUN_000149b0(param_2);
          uVar14 = FUN_000149b0(param_2);
          uVar15 = FUN_000149b0(param_2);
          pcVar9 = (char *)FUN_000149b0(param_2);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_000167b8 + 0x16f44),uVar23);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_000167bc + 0x16f60),uVar12);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_000167c0 + 0x16f80),uVar13,uVar14);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_000167c4 + 0x16f9c),uVar15);
          FUN_00015400(param_1,param_2);
          __format = (char *)(DAT_000167c8 + 0x16fb8);
        }
        else if (uVar7 < 0x2c) {
          uVar6 = FUN_000149d0(param_2);
          pcVar9 = (char *)FUN_000149b0(param_2);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_000167b0 + 0x16ec0),(uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff);
          FUN_00015400(param_1,param_2);
          __format = (char *)(DAT_000167b4 + 0x16ee0);
        }
        else {
          uVar23 = FUN_000149b0(param_2);
          pcVar9 = (char *)FUN_000149b0(param_2);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_00016634 + 0x15c2c),uVar23);
          FUN_00015400(param_1,param_2);
          __format = (char *)(DAT_00016638 + 0x15c48);
        }
      }
    }
    else {
      pcVar9 = (char *)FUN_000149b0(param_2);
      FUN_00015400(param_1 + 1,param_2);
      __format = (char *)(DAT_000167cc + 0x16fe0);
    }
  }
  else {
    if (uVar7 == 0xff) {
      iVar30 = FUN_000149b0(param_2);
      iVar8 = FUN_000149b0(param_2);
      uVar7 = iVar30 + iVar8 * 0x80;
      uVar6 = uVar7 & 0xffff;
      FUN_00015400(param_1 + 1,param_2);
      uVar23 = FUN_000149f8(uVar6);
      uVar7 = uVar7 & 0x7f;
      uVar6 = uVar6 >> 7;
      pcVar9 = (char *)(DAT_00016824 + 0x173f8);
LAB_000173f4:
      printf(pcVar9,uVar7,uVar6,uVar23);
      goto LAB_000157e0;
    }
    if (0xff < uVar7) {
      if (uVar7 == 0xaff) {
LAB_00016194:
        param_1 = param_1 + 1;
        uVar23 = FUN_000149b0(param_2);
        uVar6 = FUN_000149d0(param_2);
        uVar7 = FUN_000153dc(param_2);
        pcVar9 = (char *)(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                         | uVar7 >> 0x18);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_00016694 + 0x161d8),uVar23);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_00016698 + 0x161f4),(uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff);
        FUN_00015400(param_1,param_2);
        __format = (char *)(DAT_0001669c + 0x16214);
        goto LAB_0001572c;
      }
      if (0xaff < uVar7) {
        if (uVar7 != 0xd7f) {
          if (uVar7 < 0xd80) {
            if (uVar7 == 0xbff) goto LAB_000157e0;
            if (uVar7 < 0xc00) {
              if (uVar7 == 0xb7f) goto LAB_00016194;
            }
            else {
              if (uVar7 == 0xc7f) goto LAB_000157e0;
              if (uVar7 == 0xcff) goto LAB_0001622c;
            }
          }
          else {
            if (uVar7 == 0xe7f) goto LAB_000157e0;
            if (uVar7 < 0xe80) {
              bVar32 = uVar7 == 0xdff;
LAB_000157dc:
              if (bVar32) goto LAB_000157e0;
            }
            else {
              if (uVar7 == 0xeff) goto LAB_000157e0;
              if (uVar7 == 0xf7f) {
                pcVar9 = (char *)FUN_000149b0(param_2);
                FUN_00015400(param_1 + 1,param_2);
                __format = (char *)(DAT_000166a4 + 0x162d4);
                goto LAB_0001572c;
              }
            }
          }
          goto LAB_00015690;
        }
LAB_0001622c:
        uVar7 = FUN_000149b0(param_2);
        uVar6 = FUN_000149b0(param_2);
        uVar23 = FUN_000149b0(param_2);
        FUN_00015400(param_1 + 1,param_2);
        pcVar9 = (char *)(DAT_000166a0 + 0x16274);
        goto LAB_000173f4;
      }
      if (uVar7 == 0x5ff) {
        iVar30 = FUN_000149b0(param_2);
        FUN_00015400(param_1 + 1,param_2);
        printf((char *)(DAT_00016838 + 0x174d0),iVar30);
        if (iVar30 == 0) {
          pcVar9 = (char *)(DAT_00016840 + 0x174f8);
        }
        else if (iVar30 == 1) {
          pcVar9 = (char *)(DAT_00016844 + 0x17504);
        }
        else {
          pcVar9 = (char *)(DAT_0001683c + 0x174ec);
        }
        goto LAB_00016378;
      }
      if (uVar7 < 0x600) {
        if ((uVar7 == 0x1ff) || (uVar7 == 0x27f)) {
          param_1 = param_1 + 1;
          uVar23 = FUN_000149b0(param_2);
          uVar12 = FUN_000149b0(param_2);
          iVar8 = *(int *)(param_2 + 8);
          *(int *)(param_2 + 8) = iVar8 + 8;
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -8;
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_00016828 + 0x1744c),uVar23);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_0001682c + 0x17468),uVar12);
          iVar30 = DAT_00016830;
          FUN_00015400(param_1,param_2);
          pbVar29 = (byte *)(iVar8 + -1);
          printf((char *)(DAT_00016834 + 0x17490));
          do {
            pbVar29 = pbVar29 + 1;
            printf((char *)(iVar30 + 0x17488),(uint)*pbVar29);
          } while (pbVar29 != (byte *)(iVar8 + 7));
          goto LAB_000168ac;
        }
        if (uVar7 != 0x17f) goto LAB_00015690;
        iVar30 = FUN_000149b0(param_2);
        iVar8 = FUN_000149b0(param_2);
        uVar6 = iVar30 + iVar8 * 0x80;
        uVar7 = uVar6 & 0xffff;
        pcVar9 = (char *)FUN_000149b0(param_2);
        FUN_00015400(param_1 + 1,param_2);
        uVar23 = FUN_000149f8(uVar7);
        printf((char *)(DAT_00016664 + 0x15f24),uVar6 & 0x7f,uVar7 >> 7,uVar23);
        FUN_00015400(param_1 + 1,param_2);
        __format = (char *)(DAT_00016668 + 0x15f40);
      }
      else if (uVar7 == 0x6ff) {
        uVar23 = FUN_000149b0(param_2);
        pcVar9 = (char *)FUN_000149b0(param_2);
        FUN_00015400(param_1 + 1,param_2);
        printf((char *)(DAT_00016848 + 0x1753c),uVar23);
        FUN_00015400(param_1 + 1,param_2);
        __format = (char *)(DAT_0001684c + 0x17558);
      }
      else if (uVar7 < 0x700) {
        if (uVar7 != 0x67f) goto LAB_00015690;
        param_1 = param_1 + 1;
        uVar23 = FUN_000149b0(param_2);
        uVar12 = FUN_000149b0(param_2);
        uVar13 = FUN_000149b0(param_2);
        uVar14 = FUN_000149b0(param_2);
        uVar15 = FUN_000149b0(param_2);
        uVar16 = FUN_000149b0(param_2);
        uVar17 = FUN_000149b0(param_2);
        uVar18 = FUN_000149b0(param_2);
        uVar6 = FUN_000149d0(param_2);
        uVar7 = FUN_000149d0(param_2);
        uVar19 = FUN_000149b0(param_2);
        pcVar9 = (char *)FUN_000149b0(param_2);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_0001666c + 0x16010),uVar23);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_00016670 + 0x16030),uVar12);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_00016674 + 0x1604c),uVar13);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_00016678 + 0x16070),uVar14,uVar15,uVar16);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_0001667c + 0x16094),uVar17,(uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_00016680 + 0x160b8),uVar18,(uVar7 & 0xff) << 8 | uVar7 >> 8 & 0xff);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_00016684 + 0x160d4),uVar19);
        FUN_00015400(param_1,param_2);
        __format = (char *)(DAT_00016688 + 0x160f0);
      }
      else {
        if (uVar7 != 0x87f) {
          if (uVar7 == 0x8ff) {
            iVar30 = *(int *)(param_2 + 8);
            *(int *)(param_2 + 8) = iVar30 + 10;
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -10;
            pbVar29 = (byte *)(iVar30 + -1);
            FUN_00015400(param_1 + 1,param_2);
            printf((char *)(DAT_00016690 + 0x16148));
            do {
              pbVar29 = pbVar29 + 1;
              printf((char *)(iVar22 + 0x1612c),(uint)*pbVar29);
            } while (pbVar29 != (byte *)(iVar30 + 9));
            goto LAB_000168ac;
          }
          goto LAB_00015690;
        }
        param_1 = param_1 + 1;
        uVar23 = FUN_000149b0(param_2);
        uVar6 = FUN_000149d0(param_2);
        uVar7 = FUN_000149d0(param_2);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_00016850 + 0x1759c),uVar23);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_00016854 + 0x175b8),(uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff);
        FUN_00015400(param_1,param_2);
        pcVar9 = (char *)((uVar7 & 0xff) << 8 | uVar7 >> 8 & 0xff);
        __format = (char *)(DAT_00016858 + 0x175d8);
      }
      goto LAB_0001572c;
    }
    if (uVar7 == 0x38) goto LAB_000157e0;
    if (uVar7 < 0x39) {
      if (uVar7 < 0x34) {
        if ((0x30 < uVar7) || (uVar7 == 0x2f)) goto LAB_000157e0;
        if (uVar7 != 0x30) goto LAB_00015690;
        uVar23 = FUN_000149b0(param_2);
        pcVar9 = (char *)FUN_000149b0(param_2);
        FUN_00015400(param_1 + 1,param_2);
        printf((char *)(DAT_0001663c + 0x15cb8),uVar23);
        FUN_00015400(param_1 + 1,param_2);
        __format = (char *)(DAT_00016640 + 0x15cd4);
      }
      else {
        param_1 = param_1 + 1;
        if (uVar7 < 0x37) {
          if (uVar7 < 0x35) {
            pcVar9 = acStack_40;
            uVar33 = FUN_000149d0(param_2);
            if ((*(uint *)((ulonglong)uVar33 >> 0x20) & 0x4000) == 0) {
              FUN_00030588(*(undefined4 *)(param_2 + 8),pcVar9);
            }
            else {
              FUN_0003056c(&local_48,*(undefined4 *)(param_2 + 8));
              sprintf(pcVar9,(char *)(DAT_000167d0 + 0x17030),(uint)local_48,(uint)local_47,
                      (uint)local_46);
            }
            FUN_00015400(param_1,param_2);
            printf((char *)(DAT_000167d4 + 0x1704c),
                   ((uint)uVar33 & 0xff) << 8 | (uint)uVar33 >> 8 & 0xff);
            FUN_00015400(param_1,param_2);
            __format = (char *)(DAT_000167d8 + 0x17068);
          }
          else {
            uVar23 = FUN_000149b0(param_2);
            pcVar9 = (char *)FUN_000149b0(param_2);
            FUN_00015400(param_1,param_2);
            printf((char *)(DAT_00016644 + 0x15d1c),uVar23);
            FUN_00015400(param_1,param_2);
            __format = (char *)(DAT_00016648 + 0x15d38);
          }
        }
        else {
          uVar6 = FUN_000149d0(param_2);
          FUN_00015400(param_1,param_2);
          pcVar9 = (char *)((uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff);
          __format = (char *)(DAT_000167dc + 0x1709c);
        }
      }
    }
    else {
      if (uVar7 == 0x3d) {
        iVar30 = FUN_000149b0(param_2);
        iVar8 = FUN_000149b0(param_2);
        uVar23 = FUN_000149b0(param_2);
        FUN_00015400(param_1 + 1,param_2);
        printf((char *)(DAT_00016804 + 0x17284),iVar30,iVar8,uVar23);
        if (iVar30 != 1 || iVar8 != 1) goto LAB_000157e0;
        FUN_00015400(param_1 + 1,param_2);
        pcVar9 = (char *)(DAT_00016808 + 0x172a8);
        goto LAB_00016378;
      }
      if (0x3d < uVar7) {
        if (uVar7 == 0x3f) {
          iVar30 = *(int *)(param_2 + 8);
          *(int *)(param_2 + 8) = iVar30 + 0x10;
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0x10;
          pbVar29 = (byte *)(iVar30 + -1);
          FUN_00015400(param_1 + 1,param_2);
          printf((char *)(DAT_00016818 + 0x17340));
          do {
            pbVar29 = pbVar29 + 1;
            printf((char *)(iVar4 + 0x17324),(uint)*pbVar29);
          } while (pbVar29 != (byte *)(iVar30 + 0xf));
        }
        else if (uVar7 < 0x3f) {
          iVar30 = *(int *)(param_2 + 8);
          *(int *)(param_2 + 8) = iVar30 + 0x10;
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0x10;
          pbVar29 = (byte *)(iVar30 + -1);
          FUN_00015400(param_1 + 1,param_2);
          printf((char *)(DAT_00016810 + 0x172e8));
          do {
            pbVar29 = pbVar29 + 1;
            printf((char *)(iVar3 + 0x172cc),(uint)*pbVar29);
          } while (pbVar29 != (byte *)(iVar30 + 0xf));
        }
        else if (uVar7 == 0x40) {
          iVar30 = *(int *)(param_2 + 8);
          *(int *)(param_2 + 8) = iVar30 + 0x10;
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0x10;
          pbVar29 = (byte *)(iVar30 + -1);
          FUN_00015400(param_1 + 1,param_2);
          printf((char *)(DAT_00016820 + 0x17398));
          do {
            pbVar29 = pbVar29 + 1;
            printf((char *)(iVar5 + 0x1737c),(uint)*pbVar29);
          } while (pbVar29 != (byte *)(iVar30 + 0xf));
        }
        else {
          if (uVar7 != 0x41) goto LAB_00015690;
          iVar30 = *(int *)(param_2 + 8);
          *(int *)(param_2 + 8) = iVar30 + 0x10;
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0x10;
          pbVar29 = (byte *)(iVar30 + -1);
          FUN_00015400(param_1 + 1,param_2);
          printf((char *)(DAT_00016660 + 0x15e68));
          do {
            pbVar29 = pbVar29 + 1;
            printf((char *)(iVar8 + 0x15e4c),(uint)*pbVar29);
          } while (pbVar29 != (byte *)(iVar30 + 0xf));
        }
        goto LAB_000168ac;
      }
      if (uVar7 == 0x3a) goto LAB_000157e0;
      if (uVar7 < 0x3a) {
        param_1 = param_1 + 1;
        uVar23 = FUN_000149b0(param_2);
        uVar12 = FUN_000149b0(param_2);
        uVar13 = FUN_000149b0(param_2);
        uVar14 = FUN_000149b0(param_2);
        uVar15 = FUN_000149b0(param_2);
        uVar16 = FUN_000149b0(param_2);
        uVar17 = FUN_000149b0(param_2);
        uVar6 = FUN_000149d0(param_2);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_000167e0 + 0x17124),uVar23);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_000167e4 + 0x17144),uVar12);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_000167e8 + 0x17160),uVar13);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_000167ec + 0x1717c),uVar14);
        FUN_00015400(param_1,param_2);
        pcVar9 = (char *)(DAT_000167f4 + 0x171a0);
        printf((char *)(DAT_000167f0 + 0x1719c),uVar15);
        FUN_00015400(param_1,param_2);
        printf(pcVar9,uVar16);
        FUN_00015400(param_1,param_2);
        printf(pcVar9,uVar16);
        FUN_00015400(param_1,param_2);
        printf((char *)(DAT_000167f8 + 0x171ec),uVar17);
        FUN_00015400(param_1,param_2);
        pcVar9 = (char *)((uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff);
        __format = (char *)(DAT_000167fc + 0x17208);
      }
      else {
        if (uVar7 != 0x3b) {
          if (uVar7 != 0x3c) goto LAB_00015690;
          param_1 = param_1 + 1;
          uVar6 = FUN_000153dc(param_2);
          uVar23 = FUN_000149b0(param_2);
          iVar8 = *(int *)(param_2 + 8);
          *(int *)(param_2 + 8) = iVar8 + 10;
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -10;
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_0001664c + 0x15db0),
                 uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                 uVar6 >> 0x18);
          FUN_00015400(param_1,param_2);
          printf((char *)(DAT_00016650 + 0x15dcc),uVar23);
          iVar30 = DAT_00016654;
          FUN_00015400(param_1,param_2);
          pbVar29 = (byte *)(iVar8 + -1);
          printf((char *)(DAT_00016658 + 0x15df4));
          do {
            pbVar29 = pbVar29 + 1;
            printf((char *)(iVar30 + 0x15dec),(uint)*pbVar29);
          } while (pbVar29 != (byte *)(iVar8 + 9));
          goto LAB_000168ac;
        }
        uVar6 = FUN_000149d0(param_2);
        FUN_00015400(param_1 + 1,param_2);
        pcVar9 = (char *)((uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff);
        __format = (char *)(DAT_00016800 + 0x17234);
      }
    }
  }
LAB_0001572c:
  printf(__format,pcVar9);
LAB_000157e0:
  if (local_2c == *piVar25) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_000175e4 @ 000175e4 size=32 ===== */

undefined1 FUN_000175e4(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar1 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return *puVar1;
}



/* ===== FUN_00017604 @ 00017604 size=40 ===== */

ushort FUN_00017604(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 8);
  *(ushort **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -2;
  uVar1 = *puVar2;
  return uVar1 << 8 | uVar1 >> 8;
}



/* ===== FUN_0001762c @ 0001762c size=400 ===== */

int FUN_0001762c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 >> 10;
  uVar2 = param_1 & 0x3ff;
  if (uVar1 == 4) {
    if (uVar2 < 0xb) {
      return *(int *)(DAT_000177c8 + 0x176b0 + uVar2 * 4);
    }
    return DAT_000177e8 + 0x17774;
  }
  if (4 < uVar1) {
    if (uVar1 == 8) {
      if ((param_1 & 0x3e0) == 0) {
        return *(int *)(DAT_000177e0 + uVar2 * 4 + 0x17ab8);
      }
      return (int)&DAT_000177bc + DAT_00017800;
    }
    if (8 < uVar1) {
      if (uVar1 == 0x3e) {
        if (uVar2 < 5) {
          return *(int *)(DAT_000177dc + uVar2 * 4 + 0x17a88);
        }
        return DAT_000177fc + 0x177b0;
      }
      if (uVar1 != 0x3f) {
        return DAT_000177c4 + 0x1769c;
      }
      return DAT_000177e4 + 0x17768;
    }
    if (uVar1 != 5) {
      return DAT_000177c0 + 0x17680;
    }
    if (uVar2 < 0xc) {
      return *(int *)(DAT_000177d8 + uVar2 * 4 + 0x17a3c);
    }
    return DAT_000177f8 + 0x177a4;
  }
  if (uVar1 == 2) {
    if (uVar2 < 0x12) {
      return *(int *)(DAT_000177d4 + uVar2 * 4 + 0x179d8);
    }
    return DAT_000177f4 + 0x17798;
  }
  if (2 < uVar1) {
    if (uVar2 < 0x6e) {
      return *(int *)(DAT_000177cc + uVar2 * 4 + 0x176f4);
    }
    return DAT_000177ec + 0x17780;
  }
  if (uVar1 != 1) {
    return DAT_000177bc + 0x17660;
  }
  if (uVar2 < 0x3d) {
    return *(int *)(DAT_000177d0 + uVar2 * 4 + 0x178c8);
  }
  return DAT_000177f0 + 0x1778c;
}



/* ===== FUN_00017804 @ 00017804 size=72 ===== */

int FUN_00017804(int param_1)

{
  if (param_1 == 1) {
    return DAT_00017850 + 0x17834;
  }
  if (param_1 != 0) {
    if (param_1 != 2) {
      return DAT_0001784c + 0x17828;
    }
    return (int)&DAT_0001784c + DAT_00017858;
  }
  return DAT_00017854 + 0x17840;
}



/* ===== FUN_0001785c @ 0001785c size=52 ===== */

int FUN_0001785c(int param_1)

{
  if (param_1 == 0) {
    return DAT_00017894 + 0x17884;
  }
  if (param_1 != 1) {
    return DAT_00017890 + 0x17878;
  }
  return (int)&DAT_00017890 + DAT_00017898;
}



/* ===== FUN_0001789c @ 0001789c size=104 ===== */

int FUN_0001789c(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (int)&DAT_00017904 + DAT_00017918;
  case 1:
    return DAT_00017904 + 0x178c8;
  case 2:
    return DAT_00017908 + 0x178d4;
  case 3:
    return DAT_0001790c + 0x178e0;
  case 4:
    return DAT_00017910 + 0x178ec;
  default:
    return DAT_00017914 + 0x178f8;
  }
}



/* ===== FUN_0001791c @ 0001791c size=136 ===== */

void FUN_0001791c(undefined4 param_1,char *param_2)

{
  int *piVar1;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  int local_14;
  
  piVar1 = *(int **)(DAT_000179a4 + 0x1792c + DAT_000179a8);
  local_14 = *piVar1;
  if ((**(uint **)(DAT_000179a4 + 0x1792c + DAT_000179ac) & 0x4000) == 0) {
    FUN_00030588();
  }
  else {
    FUN_0003056c(&local_1c,param_1);
    sprintf(param_2,(char *)(DAT_000179b0 + 0x17980),(uint)local_1c,(uint)local_1b,(uint)local_1a);
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_000179b4 @ 000179b4 size=308 ===== */

void FUN_000179b4(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00017ae8 + 0x179c4 + DAT_00017aec);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_00017ae8 + 0x179c4 + DAT_00017af0);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_00017b00 + 0x17acc),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_00017af4 + 0x17a60),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_00017af8 + 0x17a7c),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_00017b04 + 0x17adc));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_00017afc + 0x17aa8),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00017b08 @ 00017b08 size=412 ===== */

void FUN_00017b08(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_30 [20];
  int local_1c;
  
  piVar5 = *(int **)(DAT_00017ca4 + 0x17b18 + DAT_00017ca8);
  iVar4 = *(int *)(param_2 + 8);
  local_1c = *piVar5;
  FUN_000179b4();
  FUN_0001791c(iVar4,auStack_30);
  uVar1 = (uint)*(byte *)(iVar4 + 8);
  printf((char *)(DAT_00017cac + 0x17b60),auStack_30,(uint)*(byte *)(iVar4 + 6),
         (uint)*(byte *)(iVar4 + 7),uVar1);
  FUN_000179b4(param_1,param_2);
  switch(*(undefined1 *)(iVar4 + 6)) {
  case 0:
    iVar2 = DAT_00017cc8 + 0x17c20;
    break;
  case 1:
    iVar2 = DAT_00017cb0 + 0x17ba0;
    break;
  case 2:
    iVar2 = DAT_00017cbc + 0x17bfc;
    break;
  case 3:
    iVar2 = DAT_00017cc0 + 0x17c08;
    break;
  default:
    iVar2 = DAT_00017cc4 + 0x17c14;
  }
  if (*(byte *)(iVar4 + 7) == 0) {
    iVar3 = DAT_00017ccc + 0x17c2c;
  }
  else {
    iVar3 = DAT_00017cb4 + 0x17bb4;
  }
  printf((char *)(DAT_00017cb8 + 0x17bbc),iVar2,iVar3,(uint)*(byte *)(iVar4 + 7),uVar1);
  FUN_000179b4(param_1,param_2);
  switch(*(undefined1 *)(iVar4 + 8)) {
  case 0:
    iVar4 = DAT_00017cec + 0x17c9c;
    break;
  case 1:
    iVar4 = DAT_00017cd0 + 0x17c38;
    break;
  case 2:
    iVar4 = DAT_00017cd8 + 0x17c60;
    break;
  case 3:
    iVar4 = DAT_00017cdc + 0x17c6c;
    break;
  case 4:
    iVar4 = DAT_00017ce0 + 0x17c78;
    break;
  case 5:
    iVar4 = DAT_00017ce4 + 0x17c84;
    break;
  default:
    iVar4 = DAT_00017ce8 + 0x17c90;
  }
  printf((char *)(DAT_00017cd4 + 0x17c40),iVar4);
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00017cf0 @ 00017cf0 size=332 ===== */

void FUN_00017cf0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *__format;
  uint *puVar6;
  int iVar7;
  int iVar8;
  char *__format_00;
  char *__format_01;
  int iVar9;
  byte *pbVar10;
  byte local_50 [4];
  undefined4 auStack_4c [3];
  undefined1 auStack_40 [20];
  int local_2c;
  
  iVar8 = DAT_00017e3c + 0x17d10;
  piVar5 = *(int **)(iVar8 + DAT_00017e40);
  __format_00 = (char *)(DAT_00017e44 + 0x17d24);
  local_2c = *piVar5;
  iVar1 = FUN_000175e4(param_2);
  __format = (char *)(DAT_00017e48 + 0x17d40);
  for (iVar7 = 0; iVar7 < iVar1; iVar7 = iVar7 + 1) {
    FUN_0001791c(*(undefined4 *)(param_2 + 8),auStack_40);
    iVar9 = *(int *)(param_2 + 8);
    puVar3 = (undefined4 *)(iVar9 + 6);
    pbVar10 = local_50;
    do {
      puVar4 = puVar3 + 2;
      uVar2 = puVar3[1];
      *(undefined4 *)pbVar10 = *puVar3;
      *(undefined4 *)(pbVar10 + 4) = uVar2;
      pbVar10 = pbVar10 + 8;
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(iVar9 + 0x16));
    __format_01 = (char *)(DAT_00017e4c + 0x17dbc);
    FUN_000179b4(param_1,param_2);
    iVar9 = 0;
    printf(__format,auStack_40);
    puVar6 = *(uint **)(iVar8 + DAT_00017e50);
    do {
      if ((*puVar6 & 0x4000) == 0) {
        printf(__format_00,(uint)local_50[iVar9]);
      }
      else {
        printf(__format_01);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x10);
    putchar(10);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 2;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -2;
  }
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00017e54 @ 00017e54 size=112 ===== */

void FUN_00017e54(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = DAT_00017ec4;
  iVar2 = FUN_000175e4(param_2);
  for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
    uVar3 = FUN_00017604(param_2);
    uVar4 = FUN_00017604(param_2);
    FUN_000179b4(param_1,param_2);
    printf((char *)(iVar1 + 0x17e74),(uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff,
           (uVar4 & 0xff) << 8 | uVar4 >> 8 & 0xff);
  }
  return;
}



/* ===== FUN_00017ec8 @ 00017ec8 size=68 ===== */

void FUN_00017ec8(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00017604(param_2);
  FUN_000179b4(param_1);
  printf((char *)(DAT_00017f0c + 0x17ef8),(uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff);
  FUN_000149a8(param_1,param_2);
  return;
}



/* ===== FUN_00017f10 @ 00017f10 size=136 ===== */

void FUN_00017f10(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_000175e4(param_2);
  uVar1 = (uint)uVar4;
  uVar2 = FUN_000175e4((int)((ulonglong)uVar4 >> 0x20));
  FUN_000179b4(param_1);
  printf((char *)(DAT_00017f98 + 0x17f50),uVar1,uVar2);
  if (uVar1 == 0) {
    return;
  }
  FUN_000179b4(param_1,param_2);
  if (uVar1 < 0x40) {
    iVar3 = *(int *)(DAT_00017f9c + uVar1 * 4 + 0x1835c);
  }
  else {
    iVar3 = (int)&DAT_00017f98 + DAT_00017fa4;
  }
  printf((char *)(DAT_00017fa0 + 0x17f8c),iVar3);
  return;
}



/* ===== FUN_00017fa8 @ 00017fa8 size=132 ===== */

void FUN_00017fa8(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_000175e4(param_2);
  FUN_000179b4(param_1);
  printf((char *)(DAT_0001802c + 0x17fd8),uVar1);
  if (uVar1 != 0) {
    FUN_000179b4(param_1,param_2);
    if (uVar1 < 0x40) {
      iVar2 = *(int *)(DAT_00018030 + uVar1 * 4 + 0x183e4);
    }
    else {
      iVar2 = (int)&DAT_0001802c + DAT_00018038;
    }
    printf((char *)(DAT_00018034 + 0x18010),iVar2);
  }
  FUN_000149a8(param_1,param_2);
  return;
}



/* ===== FUN_0001803c @ 0001803c size=288 ===== */

void FUN_0001803c(undefined4 param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_134 [20];
  byte abStack_120 [252];
  int local_24;
  byte *pbVar4;
  
  iVar7 = DAT_0001815c + 0x1805c;
  pbVar5 = *(byte **)(param_2 + 8);
  piVar6 = *(int **)(iVar7 + DAT_00018160);
  local_24 = *piVar6;
  FUN_0001791c(pbVar5 + 1,auStack_134);
  memset(abStack_120,0,0xf9);
  iVar7 = **(int **)(iVar7 + DAT_00018164);
  pbVar1 = abStack_120;
  pbVar4 = pbVar5 + 7;
  do {
    pbVar3 = pbVar4 + 1;
    bVar2 = *pbVar4;
    if (bVar2 == 0) break;
    if ((*(ushort *)(iVar7 + (short)(ushort)bVar2 * 2) & 0x40) == 0) {
      bVar2 = 0x2e;
    }
    *pbVar1 = bVar2;
    pbVar1 = pbVar1 + 1;
    pbVar4 = pbVar3;
  } while (pbVar3 != pbVar5 + 0xff);
  FUN_000179b4(param_1,param_2);
  printf((char *)(DAT_00018168 + 0x180f4),(uint)*pbVar5,auStack_134,abStack_120);
  if (*pbVar5 != 0) {
    FUN_000179b4(param_1,param_2);
    if (*pbVar5 < 0x40) {
      iVar7 = *(int *)((int)&DAT_00018508 + DAT_0001816c + (uint)*pbVar5 * 4);
    }
    else {
      iVar7 = DAT_00018174 + 0x18154;
    }
    printf((char *)(DAT_00018170 + 0x18134),iVar7);
  }
  if (local_24 != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00018178 @ 00018178 size=152 ===== */

void FUN_00018178(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_000175e4(param_2);
  uVar1 = (uint)uVar4;
  uVar2 = FUN_00017604((int)((ulonglong)uVar4 >> 0x20));
  FUN_000179b4(param_1);
  printf((char *)(DAT_00018210 + 0x181b8),uVar1,(uVar2 & 0xff) << 8 | uVar2 >> 8 & 0xff);
  if (uVar1 != 0) {
    FUN_000179b4(param_1,param_2);
    if (uVar1 < 0x40) {
      iVar3 = *(int *)(DAT_00018214 + uVar1 * 4 + 0x185c8);
    }
    else {
      iVar3 = (int)&DAT_00018210 + DAT_0001821c;
    }
    printf((char *)(DAT_00018218 + 0x181f4),iVar3);
  }
  FUN_000149a8(param_1,param_2);
  return;
}



/* ===== FUN_00018220 @ 00018220 size=228 ===== */

void FUN_00018220(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [20];
  int local_24;
  
  piVar3 = *(int **)(DAT_00018304 + 0x18230 + DAT_00018308);
  local_24 = *piVar3;
  uVar5 = FUN_000175e4(param_2);
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  uVar1 = (uint)uVar5;
  iVar4 = *(int *)(iVar2 + 8);
  *(int *)(iVar2 + 8) = iVar4 + 6;
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + -6;
  FUN_000179b4(param_1);
  FUN_0001791c(iVar4,auStack_38);
  printf((char *)(DAT_0001830c + 0x18298),uVar1,auStack_38);
  if (uVar1 != 0) {
    FUN_000179b4(param_1,param_2);
    if (uVar1 < 0x40) {
      iVar2 = *(int *)(DAT_00018310 + uVar1 * 4 + 0x186a4);
    }
    else {
      iVar2 = DAT_00018318 + 0x182fc;
    }
    printf((char *)(DAT_00018314 + 0x182d0),iVar2);
  }
  FUN_000149a8(param_1,param_2);
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001831c @ 0001831c size=484 ===== */

void FUN_0001831c(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  char *__s;
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = DAT_00018504;
  iVar7 = DAT_00018500 + 0x18334;
  if (*param_3 == '\0') {
    return;
  }
  uVar6 = (uint)(byte)param_3[1];
  bVar2 = *param_3 - 1;
  uVar3 = (uint)bVar2;
  switch(uVar6) {
  case 1:
    FUN_000179b4();
    pbVar4 = (byte *)(param_3 + 1);
    printf((char *)(DAT_00018508 + 0x183a4));
    while ((int)(pbVar4 + ~(uint)param_3) < (int)uVar3) {
      pbVar4 = pbVar4 + 1;
      printf((char *)(iVar1 + 0x183a0),(uint)*pbVar4);
    }
    goto LAB_000183b4;
  case 2:
    goto LAB_000183d0;
  case 3:
LAB_000183d0:
    FUN_000179b4();
    iVar1 = DAT_00018514;
    if (uVar6 == 2) {
      iVar7 = DAT_00018518 + 0x18428;
    }
    else {
      iVar7 = DAT_0001850c + 0x183e8;
    }
    printf((char *)(DAT_00018510 + 0x183f8),iVar7);
    puVar5 = (ushort *)(param_3 + 2);
    for (iVar7 = 0; iVar7 < (int)(uint)(bVar2 >> 1); iVar7 = iVar7 + 1) {
      printf((char *)(iVar1 + 0x18404),(uint)*puVar5);
      puVar5 = puVar5 + 1;
    }
LAB_000183b4:
    putchar(10);
    return;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    goto LAB_00018428;
  case 9:
LAB_00018428:
    __s = malloc(uVar3 + 1);
    if (__s != (char *)0x0) {
      snprintf(__s,uVar3 + 1,(char *)(DAT_0001851c + 0x18450),param_3 + 2);
      iVar1 = **(int **)(iVar7 + DAT_00018520);
      for (iVar7 = 0; iVar7 < (int)uVar3; iVar7 = iVar7 + 1) {
        if ((*(ushort *)(iVar1 + (uint)(byte)__s[iVar7] * 2) & 0x40) == 0) {
          __s[iVar7] = '.';
        }
      }
      FUN_000179b4(param_1,param_2);
      if (uVar6 == 8) {
        iVar1 = DAT_0001852c + 0x184cc;
      }
      else {
        iVar1 = DAT_00018524 + 0x1848c;
      }
      printf((char *)(DAT_00018528 + 0x18498),iVar1,__s);
      free(__s);
      return;
    }
    return;
  case 10:
    FUN_000179b4();
    printf((char *)(DAT_00018530 + 0x184e0),(uint)(byte)param_3[2]);
    return;
  }
  FUN_000179b4();
  printf((char *)(DAT_00018534 + 0x184fc),uVar6,uVar3,param_4);
  return;
}



/* ===== FUN_00018538 @ 00018538 size=120 ===== */

void FUN_00018538(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_2 + 8);
  iVar4 = *(int *)(param_2 + 0xc);
  uVar1 = FUN_000175e4(param_2);
  uVar5 = CONCAT44(iVar2,uVar1);
  while (iVar3 = (int)uVar5, iVar3 != 0) {
    FUN_0001831c(param_1,param_2,(int)((ulonglong)uVar5 >> 0x20));
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar3;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar3;
    uVar5 = FUN_000175e4(param_2);
  }
  *(int *)(param_2 + 8) = iVar2 + 0xf0;
  *(int *)(param_2 + 0xc) = iVar4 + 0xf0;
  return;
}



/* ===== FUN_000185b0 @ 000185b0 size=6468 ===== */

void FUN_000185b0(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  void *__ptr;
  char *__format;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  byte bVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint *puVar14;
  char *pcVar15;
  byte *pbVar16;
  char *pcVar17;
  bool bVar18;
  bool bVar19;
  byte abStack_128 [252];
  int local_2c;
  
  iVar12 = DAT_000195ac + 0x185d0;
  pbVar16 = *(byte **)(param_2 + 8);
  piVar7 = *(int **)(iVar12 + DAT_000195b0);
  uVar1 = *(ushort *)(pbVar16 + 1);
  local_2c = *piVar7;
  uVar3 = (uint)(uVar1 >> 10);
  uVar10 = uVar1 & 0x3ff;
  puVar14 = *(uint **)(iVar12 + DAT_000195b4);
  if ((uVar3 == 0x3f) && ((*puVar14 & 0x4000) != 0)) goto LAB_0001874c;
  FUN_000179b4(param_1,param_2);
  uVar2 = FUN_0001762c((uint)uVar1);
  uVar8 = (uint)*pbVar16;
  printf((char *)(DAT_000195b8 + 0x1863c),uVar2,uVar3,uVar10,uVar8);
  iVar9 = *(int *)(param_2 + 8);
  *(int *)(param_2 + 8) = iVar9 + 3;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -3;
  if ((*puVar14 & 0x200) == 0) goto switchD_0001890c_default;
  if (uVar3 == 4) {
    switch(uVar10) {
    case 1:
      uVar3 = (uint)*(ushort *)(iVar9 + 8);
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_00019720 + 0x1947c),(uint)*(byte *)(iVar9 + 3));
      if (*(char *)(iVar9 + 3) == '\0') {
        FUN_000179b4(param_1,param_2);
        uVar2 = FUN_00033c08(*(undefined1 *)(iVar9 + 4));
        printf((char *)(DAT_00019730 + 0x194ec),uVar2,(uint)*(byte *)(iVar9 + 4),
               (uint)*(ushort *)(iVar9 + 5));
        FUN_000179b4(param_1,param_2);
        uVar2 = thunk_FUN_00033c08(*(undefined1 *)(iVar9 + 7));
        printf((char *)(DAT_00019734 + 0x19518),uVar2,(uint)*(byte *)(iVar9 + 7),
               (uint)*(ushort *)(iVar9 + 10));
        FUN_000179b4(param_1,param_2);
        uVar2 = FUN_00030970(uVar3);
        pcVar4 = (char *)(DAT_00019738 + 0x19540);
LAB_0001953c:
        printf(pcVar4,uVar2,uVar3);
        goto LAB_0001874c;
      }
      FUN_000179b4(param_1,param_2);
      if (*(byte *)(iVar9 + 3) < 0x40) {
        iVar12 = *(int *)(DAT_00019724 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19890);
      }
      else {
        iVar12 = DAT_0001972c + 0x194c8;
      }
      pcVar4 = (char *)(DAT_00019728 + 0x194bc);
      break;
    case 2:
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001973c + 0x19560),(uint)*(byte *)(iVar9 + 3));
      if (*(char *)(iVar9 + 3) == '\0') {
        pbVar13 = (byte *)(iVar9 + 4);
        iVar12 = 0;
        iVar11 = 0;
        pbVar16 = pbVar13;
        do {
          iVar12 = iVar12 + 1;
          if (*pbVar16 != 0) {
            iVar11 = iVar12;
          }
          pbVar16 = pbVar16 + 1;
        } while (iVar12 != 0x40);
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_0001974c + 0x198c4));
        iVar12 = iVar11;
        if (0x1f < iVar11) {
          iVar12 = 0x20;
        }
        pcVar4 = (char *)(DAT_00019750 + 0x198dc);
        for (pbVar16 = pbVar13; (int)(pbVar16 + (-4 - iVar9)) < iVar12; pbVar16 = pbVar16 + 1) {
          printf(pcVar4,(uint)*pbVar16);
        }
        putchar(10);
        iVar12 = DAT_00019754;
        if (iVar11 < 0x21) goto LAB_0001874c;
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_00019758 + 0x1991c));
        pbVar16 = (byte *)(iVar9 + 0x24);
        do {
          pbVar5 = pbVar16 + 1;
          printf((char *)(iVar12 + 0x19918),(uint)*pbVar16);
          pbVar16 = pbVar5;
        } while (pbVar13 + iVar11 != pbVar5);
LAB_00019408:
        putchar(10);
        goto LAB_0001874c;
      }
      FUN_000179b4(param_1,param_2);
      if (*(byte *)(iVar9 + 3) < 0x40) {
        iVar12 = *(int *)(DAT_00019740 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19974);
      }
      else {
        iVar12 = (int)&DAT_000195ac + DAT_00019748;
      }
      pcVar4 = (char *)(DAT_00019744 + 0x195a0);
      break;
    case 3:
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001975c + 0x19968),(uint)*(byte *)(iVar9 + 3));
      iVar12 = DAT_0001976c;
      if (*(char *)(iVar9 + 3) == '\0') {
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_00019770 + 0x199d4));
        pbVar16 = (byte *)(iVar9 + 4);
        do {
          pbVar13 = pbVar16 + 1;
          printf((char *)(iVar12 + 0x199cc),(uint)*pbVar16);
          pbVar16 = pbVar13;
        } while ((byte *)(iVar9 + 0xc) != pbVar13);
        goto LAB_00019408;
      }
      FUN_000179b4(param_1,param_2);
      if (*(byte *)(iVar9 + 3) < 0x40) {
        iVar12 = *(int *)(DAT_00019760 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19d7c);
      }
      else {
        iVar12 = DAT_00019768 + 0x199b4;
      }
      pcVar4 = (char *)(DAT_00019764 + 0x199a8);
      break;
    case 4:
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_00019774 + 0x19a10),(uint)*(byte *)(iVar9 + 3),(uint)*(byte *)(iVar9 + 4),
             (uint)*(byte *)(iVar9 + 5),uVar8);
      iVar12 = DAT_00019784;
      if (*(char *)(iVar9 + 3) == '\0') {
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_00019788 + 0x19a7c));
        pbVar16 = (byte *)(iVar9 + 6);
        do {
          pbVar13 = pbVar16 + 1;
          printf((char *)(iVar12 + 0x19a74),(uint)*pbVar16);
          pbVar16 = pbVar13;
        } while ((byte *)(iVar9 + 0xe) != pbVar13);
        goto LAB_00019408;
      }
      FUN_000179b4(param_1,param_2);
      if (*(byte *)(iVar9 + 3) < 0x40) {
        iVar12 = *(int *)(DAT_00019778 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19e24);
      }
      else {
        iVar12 = DAT_00019780 + 0x19a5c;
      }
      pcVar4 = (char *)(DAT_0001977c + 0x19a50);
      break;
    case 5:
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001978c + 0x19ab0),(uint)*(byte *)(iVar9 + 3));
      if (*(char *)(iVar9 + 3) == '\0') {
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_0001979c + 0x19b20),(uint)*(ushort *)(iVar9 + 4),
               (uint)*(ushort *)(iVar9 + 7),(uint)*(byte *)(iVar9 + 6),(uint)*(ushort *)(iVar9 + 9))
        ;
        goto LAB_0001874c;
      }
      FUN_000179b4(param_1,param_2);
      if (*(byte *)(iVar9 + 3) < 0x40) {
        iVar12 = *(int *)(DAT_00019790 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19ec4);
      }
      else {
        iVar12 = DAT_00019798 + 0x19afc;
      }
      pcVar4 = (char *)(DAT_00019794 + 0x19af0);
      break;
    case 6:
      goto switchD_0001890c_default;
    case 7:
      goto switchD_0001890c_default;
    case 8:
      goto switchD_0001890c_default;
    case 9:
      goto LAB_00018718;
    case 10:
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_000197a0 + 0x19b40),(uint)*(byte *)(iVar9 + 3));
      if (*(char *)(iVar9 + 3) == '\0') {
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_000197b0 + 0x19ba8),(uint)*(ushort *)(iVar9 + 4),
               (uint)*(ushort *)(iVar9 + 6),(uint)*(ushort *)(iVar9 + 8),uVar8);
        goto LAB_0001874c;
      }
      FUN_000179b4(param_1,param_2);
      if (*(byte *)(iVar9 + 3) < 0x40) {
        iVar12 = *(int *)(DAT_000197a4 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19f54);
      }
      else {
        iVar12 = DAT_000197ac + 0x19b8c;
      }
      pcVar4 = (char *)(DAT_000197a8 + 0x19b80);
      break;
    default:
      goto switchD_0001890c_default;
    }
    goto LAB_000187fc;
  }
  if (4 < uVar3) {
    if (uVar3 != 8) {
      if (uVar3 == 0x3e) {
        if (uVar10 == 1) goto LAB_00019414;
        if ((uVar1 & 0x3ff) != 0) {
          bVar19 = 3 < uVar10;
          bVar18 = uVar10 == 4;
LAB_000186b0:
          if (!bVar19 || bVar18) goto LAB_00018740;
        }
        goto switchD_0001890c_default;
      }
      if (uVar3 != 5) goto switchD_0001890c_default;
      switch(uVar10) {
      case 1:
        goto LAB_00018740;
      case 2:
        goto LAB_00018740;
      case 3:
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_000197b4 + 0x19bd0),(uint)*(byte *)(iVar9 + 3),
               (uint)*(ushort *)(iVar9 + 4),(uint)*(byte *)(iVar9 + 6),uVar8);
        if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
        FUN_000179b4(param_1,param_2);
        if (*(byte *)(iVar9 + 3) < 0x40) {
          iVar12 = *(int *)(DAT_000197b8 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19fe4);
        }
        else {
          iVar12 = DAT_000197c0 + 0x19c1c;
        }
        pcVar4 = (char *)(DAT_000197bc + 0x19c10);
        break;
      case 4:
        goto switchD_0001890c_default;
      case 5:
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_000197c4 + 0x19c40),(uint)*(byte *)(iVar9 + 3),
               (uint)*(ushort *)(iVar9 + 4),(int)*(char *)(iVar9 + 6),uVar8);
        if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
        FUN_000179b4(param_1,param_2);
        if (*(byte *)(iVar9 + 3) < 0x40) {
          iVar12 = *(int *)(DAT_000197c8 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x1a054);
        }
        else {
          iVar12 = DAT_000197d0 + 0x19c8c;
        }
        pcVar4 = (char *)(DAT_000197cc + 0x19c80);
        break;
      case 6:
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_000197d4 + 0x19cb0),(uint)*(byte *)(iVar9 + 3),
               (uint)*(ushort *)(iVar9 + 4),(uint)*(byte *)(iVar9 + 6),uVar8);
        iVar12 = DAT_000197e4;
        if (*(char *)(iVar9 + 3) == '\0') {
          FUN_000179b4(param_1,param_2);
          printf((char *)(DAT_000197e8 + 0x19d1c));
          pbVar16 = (byte *)(iVar9 + 7);
          do {
            pbVar13 = pbVar16 + 1;
            printf((char *)(iVar12 + 0x19d14),(uint)*pbVar16);
            pbVar16 = pbVar13;
          } while (pbVar13 != (byte *)(iVar9 + 0x11));
          goto LAB_00019408;
        }
        FUN_000179b4(param_1,param_2);
        if (*(byte *)(iVar9 + 3) < 0x40) {
          iVar12 = *(int *)(DAT_000197d8 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x1a0c4);
        }
        else {
          iVar12 = DAT_000197e0 + 0x19cfc;
        }
        pcVar4 = (char *)(DAT_000197dc + 0x19cf0);
        break;
      case 7:
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_000197ec + 0x19d60),(uint)*(byte *)(iVar9 + 3),
               (uint)*(ushort *)(iVar9 + 4),*(undefined4 *)(iVar9 + 6),(uint)*(ushort *)(iVar9 + 10)
              );
        if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
        FUN_000179b4(param_1,param_2);
        if (*(byte *)(iVar9 + 3) < 0x40) {
          iVar12 = *(int *)(DAT_000197f0 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x1a174);
        }
        else {
          iVar12 = DAT_000197f8 + 0x19dac;
        }
        pcVar4 = (char *)(DAT_000197f4 + 0x19da0);
        break;
      case 8:
        goto switchD_0001890c_default;
      case 9:
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_000197fc + 0x19dcc),(uint)*(byte *)(iVar9 + 3),
               (uint)*(byte *)(iVar9 + 4));
        if (*(char *)(iVar9 + 3) == '\0') {
          FUN_000179b4(param_1,param_2);
          printf((char *)(DAT_0001980c + 0x19e30),*(undefined4 *)(iVar9 + 5),
                 *(undefined4 *)(iVar9 + 9));
          FUN_000179b4(param_1,param_2);
          printf((char *)(DAT_00019810 + 0x19e54),*(undefined4 *)(iVar9 + 0xd),
                 *(undefined4 *)(iVar9 + 0x11),(uint)*(byte *)(iVar9 + 0x15));
          FUN_000179b4(param_1,param_2);
          printf((char *)(DAT_00019814 + 0x19e74),(uint)*(ushort *)(iVar9 + 0x16),
                 (uint)*(ushort *)(iVar9 + 0x18));
          FUN_000179b4(param_1,param_2);
          uVar3 = *(uint *)(iVar9 + 0x1e);
          uVar2 = *(undefined4 *)(iVar9 + 0x1a);
          pcVar4 = (char *)(DAT_00019818 + 0x19e94);
          goto LAB_0001953c;
        }
        FUN_000179b4(param_1,param_2);
        if (*(byte *)(iVar9 + 3) < 0x40) {
          iVar12 = *(int *)(DAT_00019800 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x1a1e0);
        }
        else {
          iVar12 = DAT_00019808 + 0x19e18;
        }
        pcVar4 = (char *)(DAT_00019804 + 0x19e0c);
        break;
      case 10:
        uVar1 = *(ushort *)(iVar9 + 5);
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_0001981c + 0x19ebc),(uint)*(byte *)(iVar9 + 3),
               (uint)*(byte *)(iVar9 + 4),(uint)uVar1,uVar8);
        if (*(char *)(iVar9 + 3) == '\0') {
          FUN_000204b8(param_1 + 1,iVar9 + 7,(uint)uVar1);
          goto LAB_0001874c;
        }
        FUN_000179b4(param_1,param_2);
        if (*(byte *)(iVar9 + 3) < 0x40) {
          iVar12 = *(int *)(DAT_00019820 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x1a2d0);
        }
        else {
          iVar12 = DAT_00019828 + 0x19f08;
        }
        pcVar4 = (char *)(DAT_00019824 + 0x19efc);
        break;
      case 0xb:
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_0001982c + 0x19f3c),(uint)*(byte *)(iVar9 + 3),
               (uint)*(byte *)(iVar9 + 4));
        if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
        FUN_000179b4(param_1,param_2);
        if (*(byte *)(iVar9 + 3) < 0x40) {
          iVar12 = *(int *)(DAT_00019830 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x1a350);
        }
        else {
          iVar12 = DAT_00019838 + 0x19f88;
        }
        pcVar4 = (char *)(DAT_00019834 + 0x19f7c);
        break;
      default:
        goto switchD_0001890c_default;
      }
      goto LAB_000187fc;
    }
    switch(uVar10) {
    case 1:
      break;
    case 2:
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001983c + 0x1a04c),(uint)*(byte *)(iVar9 + 3),
             (uint)*(ushort *)(iVar9 + 4),(uint)*(byte *)(iVar9 + 6),uVar8);
      if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
      FUN_000179b4(param_1,param_2);
      if (*(byte *)(iVar9 + 3) < 0x40) {
        iVar12 = *(int *)(DAT_00019840 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x1a460);
      }
      else {
        iVar12 = DAT_00019848 + 0x1a098;
      }
      pcVar4 = (char *)(DAT_00019844 + 0x1a08c);
      goto LAB_000187fc;
    case 3:
      pcVar4 = (char *)(DAT_0001984c + 0x1a0b0);
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_00019850 + 0x1a0c4),(uint)*(byte *)(iVar9 + 3));
      pbVar16 = (byte *)(iVar9 + 4);
      do {
        pbVar13 = pbVar16 + 1;
        printf(pcVar4,(uint)*pbVar16);
        pbVar16 = pbVar13;
      } while ((byte *)(iVar9 + 0xc) != pbVar13);
      if ((*(byte *)(iVar9 + 4) & 1) == 0) {
        iVar12 = DAT_00019864 + 0x1a144;
      }
      else {
        iVar12 = DAT_00019854 + 0x1a0f0;
      }
      printf((char *)(DAT_00019858 + 0x1a0f8),iVar12);
      if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
      FUN_000179b4(param_1,param_2);
      if (*(byte *)(iVar9 + 3) < 0x40) {
        iVar12 = *(int *)(DAT_0001985c + (uint)*(byte *)(iVar9 + 3) * 4 + 0x1a50c);
      }
      else {
        iVar12 = DAT_00019868 + 0x1a150;
      }
      pcVar4 = (char *)(DAT_00019860 + 0x1a138);
      goto LAB_000187fc;
    case 4:
      goto switchD_0001890c_default;
    case 5:
      break;
    case 6:
      break;
    case 7:
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001986c + 0x1a170),(uint)*(byte *)(iVar9 + 3),(int)*(char *)(iVar9 + 4));
      if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
      FUN_000179b4(param_1,param_2);
      if (*(byte *)(iVar9 + 3) < 0x40) {
        iVar12 = *(int *)(DAT_00019870 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x1a584);
      }
      else {
        iVar12 = DAT_00019878 + 0x1a1bc;
      }
      pcVar4 = (char *)(DAT_00019874 + 0x1a1b0);
      goto LAB_000187fc;
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
      goto switchD_0001890c_default;
    case 0xf:
      goto switchD_0001890c_default;
    case 0x10:
      break;
    case 0x11:
      break;
    case 0x12:
      break;
    case 0x13:
      goto switchD_0001890c_default;
    case 0x14:
      break;
    case 0x15:
      goto switchD_0001890c_default;
    case 0x16:
      goto switchD_0001890c_default;
    case 0x17:
      goto switchD_0001890c_default;
    case 0x18:
      goto switchD_0001890c_default;
    case 0x19:
      goto switchD_0001890c_default;
    case 0x1a:
      goto switchD_0001890c_default;
    case 0x1b:
      goto switchD_0001890c_default;
    case 0x1c:
      goto switchD_0001890c_default;
    case 0x1d:
      break;
    case 0x1e:
      break;
    default:
      goto switchD_0001890c_default;
    }
    goto LAB_00018740;
  }
  if (uVar3 == 2) {
    switch(uVar10) {
    case 0xc:
      uVar1 = *(ushort *)(iVar9 + 6);
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_000195bc + 0x187c0),(uint)*(byte *)(iVar9 + 3),
             (uint)*(ushort *)(iVar9 + 4),(uint)uVar1,uVar8);
      if (*(char *)(iVar9 + 3) == '\0') {
        __ptr = (void *)FUN_00033994((uint)uVar1);
        if (__ptr == (void *)0x0) goto LAB_0001874c;
        FUN_000179b4(param_1,param_2);
        pcVar4 = (char *)(DAT_000195cc + 0x1883c);
LAB_00018838:
        printf(pcVar4,__ptr);
        free(__ptr);
        goto LAB_0001874c;
      }
      FUN_000179b4(param_1,param_2);
      if (*(byte *)(iVar9 + 3) < 0x40) {
        iVar12 = *(int *)(DAT_000195c0 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x18bd4);
      }
      else {
        iVar12 = DAT_000195c8 + 0x18810;
      }
      pcVar4 = (char *)(DAT_000195c4 + 0x18800);
      goto LAB_000187fc;
    case 0xd:
      goto LAB_00018848;
    case 0xe:
      uVar3 = FUN_000175e4(param_2);
      uVar10 = FUN_00017604(param_2);
      uVar10 = (uVar10 & 0xff) << 8 | uVar10 >> 8 & 0xff;
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_000195d0 + 0x18894),uVar3,uVar10);
      if (uVar3 == 0) {
        __ptr = (void *)FUN_00033994(uVar10);
        if (__ptr == (void *)0x0) goto LAB_0001874c;
        FUN_000179b4(param_1,param_2);
        pcVar4 = (char *)(DAT_000195e0 + 0x18904);
        goto LAB_00018838;
      }
      FUN_000179b4(param_1,param_2);
      if (uVar3 < 0x40) {
        iVar12 = *(int *)(DAT_000195d4 + uVar3 * 4 + 0x18ca0);
      }
      else {
        iVar12 = DAT_000195dc + 0x188d8;
      }
      pcVar4 = (char *)(DAT_000195d8 + 0x188cc);
      goto LAB_000187fc;
    case 0xf:
      goto LAB_00018740;
    case 0x10:
      break;
    case 0x11:
LAB_00018848:
      FUN_00018178(param_1,param_2);
      goto LAB_0001874c;
    }
    goto switchD_0001890c_default;
  }
  if (uVar3 < 3) {
    if (uVar3 == 1) {
      if (uVar10 != 0x1a) {
        if (uVar10 < 0x1b) {
          if (uVar10 != 8) {
            if (uVar10 < 9) {
              bVar19 = 1 < uVar10 - 2;
              bVar18 = uVar10 - 2 == 2;
              goto LAB_000186b0;
            }
            bVar19 = 2 < uVar10 - 0xb;
            bVar18 = uVar10 - 0xb == 3;
LAB_00018714:
            if (bVar19 && !bVar18) goto switchD_0001890c_default;
          }
        }
        else {
          if (0x30 < uVar10) {
            bVar19 = uVar10 != 0x33;
            bVar18 = uVar10 == 0x34;
            goto LAB_00018714;
          }
          if (uVar10 < 0x2b) {
            if (uVar10 == 0x1c) goto LAB_00018740;
            goto switchD_0001890c_default;
          }
        }
      }
LAB_00018718:
      FUN_00018220(param_1,param_2);
      goto LAB_0001874c;
    }
    goto switchD_0001890c_default;
  }
  switch(uVar10) {
  case 1:
    goto LAB_00018740;
  case 2:
    break;
  case 3:
    goto LAB_00018740;
  case 4:
    break;
  case 5:
    goto LAB_00018740;
  case 6:
    break;
  case 7:
    break;
  case 8:
    goto LAB_00018848;
  case 9:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_000195f0 + 0x18b68),(uint)*(byte *)(iVar9 + 3),(uint)*(byte *)(iVar9 + 4));
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)(DAT_000195f4 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x18f7c);
    }
    else {
      iVar12 = DAT_000195fc + 0x18bb4;
    }
    pcVar4 = (char *)(DAT_000195f8 + 0x18ba8);
    goto LAB_000187fc;
  case 10:
    goto LAB_00018740;
  case 0xb:
    goto LAB_00018740;
  case 0xc:
    break;
  case 0xd:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_00019600 + 0x18bd8),(uint)*(byte *)(iVar9 + 3),(uint)*(ushort *)(iVar9 + 4),
           (uint)*(ushort *)(iVar9 + 6),uVar8);
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)(DAT_00019604 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x18fec);
    }
    else {
      iVar12 = DAT_0001960c + 0x18c24;
    }
    pcVar4 = (char *)(DAT_00019608 + 0x18c18);
    goto LAB_000187fc;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_00019610 + 0x18c44),(uint)*(byte *)(iVar9 + 3),(uint)*(byte *)(iVar9 + 4));
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)(DAT_00019614 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19058);
    }
    else {
      iVar12 = DAT_0001961c + 0x18c90;
    }
    pcVar4 = (char *)(DAT_00019618 + 0x18c84);
    goto LAB_000187fc;
  case 0x12:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_00019620 + 0x18cb0),(uint)*(byte *)(iVar9 + 3),(uint)*(ushort *)(iVar9 + 4))
    ;
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)(DAT_00019624 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x190c4);
    }
    else {
      iVar12 = DAT_0001962c + 0x18cfc;
    }
    pcVar4 = (char *)(DAT_00019628 + 0x18cf0);
    goto LAB_000187fc;
  case 0x13:
    goto LAB_00018740;
  case 0x14:
    memset(abStack_128,0,0xf9);
    iVar12 = **(int **)(iVar12 + DAT_00019630);
    pbVar16 = abStack_128;
    pbVar13 = (byte *)(iVar9 + 4);
    do {
      pbVar5 = pbVar13 + 1;
      bVar6 = *pbVar13;
      if (bVar6 == 0) break;
      if ((*(ushort *)(iVar12 + (short)(ushort)bVar6 * 2) & 0x40) == 0) {
        bVar6 = 0x2e;
      }
      *pbVar16 = bVar6;
      pbVar16 = pbVar16 + 1;
      pbVar13 = pbVar5;
    } while (pbVar5 != (byte *)(iVar9 + 0xfc));
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_00019634 + 0x18d74),(uint)*(byte *)(iVar9 + 3),abStack_128);
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)(DAT_00019638 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19188);
    }
    else {
      iVar12 = DAT_00019640 + 0x18dc0;
    }
    pcVar4 = (char *)(DAT_0001963c + 0x18db4);
    goto LAB_000187fc;
  case 0x15:
    goto LAB_00018f34;
  case 0x16:
    goto LAB_00018740;
  case 0x17:
    goto LAB_00018f34;
  case 0x18:
    goto LAB_00018740;
  case 0x19:
    goto LAB_00018eb8;
  case 0x1a:
    goto LAB_00018740;
  case 0x1b:
    goto LAB_00018fa0;
  case 0x1c:
    goto LAB_00018740;
  case 0x1d:
LAB_00018fa0:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_00019684 + 0x18fc4),(uint)*(byte *)(iVar9 + 3),(uint)*(ushort *)(iVar9 + 4),
           (uint)*(ushort *)(iVar9 + 6),uVar8);
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)(DAT_00019688 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x193d8);
    }
    else {
      iVar12 = DAT_00019690 + 0x19010;
    }
    pcVar4 = (char *)(DAT_0001968c + 0x19004);
    goto LAB_000187fc;
  case 0x1e:
    goto LAB_00018740;
  case 0x1f:
LAB_00018eb8:
    uVar3 = FUN_000175e4(param_2);
    uVar2 = FUN_000175e4(param_2);
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_00019664 + 0x18ef0),uVar3,uVar2);
    if (uVar3 == 0) goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (uVar3 < 0x40) {
      iVar12 = *(int *)(DAT_00019668 + uVar3 * 4 + 0x192fc);
    }
    else {
      iVar12 = DAT_00019670 + 0x18f34;
    }
    pcVar4 = (char *)(DAT_0001966c + 0x18f28);
    goto LAB_000187fc;
  case 0x20:
    goto LAB_00018740;
  case 0x21:
    goto LAB_0001907c;
  case 0x22:
    goto LAB_00018740;
  case 0x23:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_00019644 + 0x18dec),(uint)*(byte *)(iVar9 + 3),(uint)*(byte *)(iVar9 + 6),
           (uint)*(byte *)(iVar9 + 5),(uint)*(byte *)(iVar9 + 4));
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)(DAT_00019648 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19200);
    }
    else {
      iVar12 = DAT_00019650 + 0x18e38;
    }
    pcVar4 = (char *)(DAT_0001964c + 0x18e2c);
    goto LAB_000187fc;
  case 0x24:
    goto LAB_00018740;
  case 0x25:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_00019654 + 0x18e58),(uint)*(byte *)(iVar9 + 3),(uint)*(ushort *)(iVar9 + 4))
    ;
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)(DAT_00019658 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x1926c);
    }
    else {
      iVar12 = DAT_00019660 + 0x18ea4;
    }
    pcVar4 = (char *)(DAT_0001965c + 0x18e98);
    goto LAB_000187fc;
  case 0x26:
    goto LAB_00018740;
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
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_000196c4 + 0x1917c),(uint)*(byte *)(iVar9 + 3),(uint)*(ushort *)(iVar9 + 4),
           (int)*(char *)(iVar9 + 6),uVar8);
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)(DAT_000196c8 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19590);
    }
    else {
      iVar12 = DAT_000196d0 + 0x191c8;
    }
    pcVar4 = (char *)(DAT_000196cc + 0x191bc);
    goto LAB_000187fc;
  case 0x2e:
    break;
  case 0x2f:
    break;
  case 0x30:
    break;
  case 0x31:
    goto LAB_00018740;
  case 0x32:
    break;
  case 0x33:
    goto LAB_00018740;
  case 0x34:
    break;
  case 0x35:
    break;
  case 0x36:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_000196b4 + 0x1910c),(uint)*(byte *)(iVar9 + 3),(uint)*(ushort *)(iVar9 + 4),
           (uint)*(ushort *)(iVar9 + 6),uVar8);
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)(DAT_000196b8 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19520);
    }
    else {
      iVar12 = DAT_000196c0 + 0x19158;
    }
    pcVar4 = (char *)(DAT_000196bc + 0x1914c);
    goto LAB_000187fc;
  case 0x37:
    goto LAB_00018848;
  case 0x38:
    break;
  case 0x39:
    pcVar4 = (char *)(DAT_000195e4 + 0x18ad8);
    pcVar15 = (char *)(DAT_000195e8 + 0x18adc);
    pcVar17 = (char *)(DAT_000195ec + 0x18ae0);
    iVar12 = iVar9;
    for (iVar11 = 0; iVar11 < (int)(uint)*(byte *)(iVar9 + 4); iVar11 = iVar11 + 1) {
      FUN_000179b4(param_1,param_2);
      printf(pcVar4,(uint)*(byte *)(iVar12 + 7),(uint)*(byte *)(iVar12 + 6),
             (uint)*(byte *)(iVar12 + 5),uVar8);
      if (((*(char *)(iVar12 + 7) == -0x62) && (*(char *)(iVar12 + 6) == -0x75)) &&
         ((__format = pcVar15, *(char *)(iVar12 + 5) == '\0' ||
          (__format = pcVar17, *(char *)(iVar12 + 5) == '3')))) {
        printf(__format);
      }
      iVar12 = iVar12 + 3;
      putchar(10);
    }
    goto LAB_0001874c;
  case 0x3a:
    goto LAB_00018740;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    break;
  case 0x3e:
    break;
  case 0x3f:
    goto LAB_00018740;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_00019694 + 0x19030),(uint)*(byte *)(iVar9 + 3),(uint)*(byte *)(iVar9 + 4));
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)(DAT_00019698 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19444);
    }
    else {
      iVar12 = DAT_000196a0 + 0x1907c;
    }
    pcVar4 = (char *)(DAT_0001969c + 0x19070);
    goto LAB_000187fc;
  case 0x43:
    goto LAB_00018740;
  case 0x44:
    goto LAB_0001907c;
  case 0x45:
    goto LAB_00018740;
  case 0x46:
    break;
  case 0x47:
    break;
  case 0x48:
LAB_0001907c:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_000196a4 + 0x1909c),(uint)*(byte *)(iVar9 + 3),(uint)*(byte *)(iVar9 + 4));
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)(DAT_000196a8 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x194b0);
    }
    else {
      iVar12 = DAT_000196b0 + 0x190e8;
    }
    pcVar4 = (char *)(DAT_000196ac + 0x190dc);
    goto LAB_000187fc;
  case 0x49:
    goto LAB_00018740;
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
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_000196d4 + 0x191e8),(uint)*(byte *)(iVar9 + 3),(uint)*(byte *)(iVar9 + 4));
    if (*(char *)(iVar9 + 3) == '\0') {
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 2;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -2;
      FUN_00018538(param_1,param_2);
      goto LAB_0001874c;
    }
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)((int)&DAT_000195fc + DAT_000196d8 + (uint)*(byte *)(iVar9 + 3) * 4);
    }
    else {
      iVar12 = DAT_000196e0 + 0x19234;
    }
    pcVar4 = (char *)(DAT_000196dc + 0x19228);
    goto LAB_000187fc;
  case 0x52:
    goto LAB_00018740;
  case 0x53:
    goto LAB_00018740;
  case 0x54:
    break;
  case 0x55:
    goto LAB_00019414;
  case 0x56:
    goto LAB_00018740;
  case 0x57:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_00019704 + 0x19350),(uint)*(byte *)(iVar9 + 3));
    iVar12 = DAT_00019714;
    if (*(char *)(iVar9 + 3) == '\0') {
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_00019718 + 0x193bc));
      pbVar16 = (byte *)(iVar9 + 4);
      do {
        pbVar13 = pbVar16 + 1;
        printf((char *)(iVar12 + 0x193b4),(uint)*pbVar16);
        pbVar16 = pbVar13;
      } while ((byte *)(iVar9 + 0x14) != pbVar13);
      putchar(10);
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001971c + 0x193f4));
      pbVar16 = (byte *)(iVar9 + 0x14);
      do {
        pbVar13 = pbVar16 + 1;
        printf((char *)(iVar12 + 0x193b4),(uint)*pbVar16);
        pbVar16 = pbVar13;
      } while ((byte *)(iVar9 + 0x24) != pbVar13);
      goto LAB_00019408;
    }
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)((int)&DAT_00019764 + DAT_00019708 + (uint)*(byte *)(iVar9 + 3) * 4);
    }
    else {
      iVar12 = DAT_00019710 + 0x1939c;
    }
    pcVar4 = (char *)(DAT_0001970c + 0x19390);
    goto LAB_000187fc;
  case 0x58:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_000196e4 + 0x1927c),(uint)*(byte *)(iVar9 + 3),(int)*(char *)(iVar9 + 4));
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)((int)&DAT_00019690 + DAT_000196e8 + (uint)*(byte *)(iVar9 + 3) * 4);
    }
    else {
      iVar12 = DAT_000196f0 + 0x192c8;
    }
    pcVar4 = (char *)(DAT_000196ec + 0x192bc);
    goto LAB_000187fc;
  case 0x59:
    goto LAB_00018740;
  case 0x5a:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_000196f4 + 0x192e8),(uint)*(byte *)(iVar9 + 3),(uint)*(byte *)(iVar9 + 4));
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)((int)&DAT_000196fc + DAT_000196f8 + (uint)*(byte *)(iVar9 + 3) * 4);
    }
    else {
      iVar12 = DAT_00019700 + 0x19334;
    }
    pcVar4 = (char *)(DAT_000196fc + 0x19328);
    goto LAB_000187fc;
  case 0x5b:
    goto LAB_00018740;
  case 0x5c:
    break;
  case 0x5d:
    break;
  case 0x5e:
    break;
  case 0x5f:
    break;
  case 0x60:
    goto LAB_00018740;
  case 0x61:
LAB_00018f34:
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_00019674 + 0x18f54),(uint)*(byte *)(iVar9 + 3),(uint)*(ushort *)(iVar9 + 4))
    ;
    if (*(char *)(iVar9 + 3) == '\0') goto LAB_0001874c;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar9 + 3) < 0x40) {
      iVar12 = *(int *)(DAT_00019678 + (uint)*(byte *)(iVar9 + 3) * 4 + 0x19368);
    }
    else {
      iVar12 = DAT_00019680 + 0x18fa0;
    }
    pcVar4 = (char *)(DAT_0001967c + 0x18f94);
LAB_000187fc:
    printf(pcVar4,iVar12);
    goto LAB_0001874c;
  case 0x62:
    goto LAB_00018740;
  case 99:
    goto LAB_00018740;
  case 100:
    break;
  case 0x65:
    goto LAB_00018740;
  case 0x66:
LAB_00019414:
    FUN_00017f10(param_1,param_2);
    goto LAB_0001874c;
  case 0x67:
    goto LAB_00018740;
  case 0x68:
    break;
  case 0x69:
    goto LAB_00018740;
  case 0x6a:
LAB_00018740:
    FUN_00017fa8(param_1,param_2);
    goto LAB_0001874c;
  }
switchD_0001890c_default:
  FUN_000149a8(param_1,param_2);
LAB_0001874c:
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001a1c4 @ 0001a1c4 size=188 ===== */

void FUN_0001a1c4(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_30 [20];
  int local_1c;
  
  piVar2 = *(int **)(DAT_0001a280 + 0x1a1d4 + DAT_0001a284);
  iVar1 = *(int *)(param_2 + 8);
  local_1c = *piVar2;
  FUN_000179b4();
  FUN_0001791c(iVar1,auStack_30);
  printf((char *)(DAT_0001a288 + 0x1a218),auStack_30,(uint)*(byte *)(iVar1 + 6));
  FUN_000179b4(param_1,param_2);
  if (*(char *)(iVar1 + 6) == '\0') {
    iVar1 = DAT_0001a294 + 0x1a26c;
  }
  else if (*(char *)(iVar1 + 6) == '\x01') {
    iVar1 = DAT_0001a298 + 0x1a278;
  }
  else {
    iVar1 = DAT_0001a28c + 0x1a244;
  }
  printf((char *)(DAT_0001a290 + 0x1a24c),iVar1);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001a29c @ 0001a29c size=6220 ===== */

void FUN_0001a29c(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint3 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [4];
  undefined4 uVar10;
  char *__format;
  byte *pbVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  byte *pbVar15;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  short sVar16;
  uint uVar17;
  byte bVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  void *pvVar22;
  int iVar23;
  ushort *puVar24;
  byte *pbVar25;
  byte *pbVar26;
  uint uVar27;
  int iVar28;
  uint *puVar29;
  char *pcVar30;
  int iVar31;
  char *pcVar32;
  uint in_fpscr;
  double dVar33;
  double dVar34;
  undefined8 uVar35;
  ulonglong uVar36;
  undefined8 in_stack_fffffea8;
  undefined1 local_13c [4];
  int iStack_138;
  uint uStack_134;
  int iStack_130;
  undefined1 uStack_12c;
  undefined2 local_128;
  byte local_126;
  int local_2c;
  
  uVar13 = (undefined4)((ulonglong)in_stack_fffffea8 >> 0x20);
  iVar31 = DAT_0001b278 + 0x1a2b4;
  piVar19 = *(int **)(iVar31 + DAT_0001b27c);
  local_2c = *piVar19;
  puVar29 = *(uint **)(iVar31 + DAT_0001b280);
  if ((puVar29[1] & 2) == 0) goto LAB_0001a384;
  puVar24 = *(ushort **)(param_2 + 8);
  uVar2 = *puVar24;
  uVar17 = (uint)(uVar2 >> 10);
  if ((uVar17 == 0x3f) && ((*puVar29 & 0x4000) != 0)) goto LAB_0001a384;
  uVar27 = uVar2 & 0x3ff;
  FUN_000179b4(param_1,param_2);
  uVar10 = FUN_0001762c((uint)uVar2);
  uVar20 = (uint)(byte)puVar24[1];
  dVar33 = (double)CONCAT44(uVar13,uVar20);
  printf((char *)(DAT_0001b284 + 0x1a334),uVar10,uVar17,uVar27,uVar20);
  iVar23 = *(int *)(param_2 + 8);
  iVar21 = *(int *)(param_2 + 0xc);
  pbVar25 = (byte *)(iVar23 + 3);
  *(byte **)(param_2 + 8) = pbVar25;
  *(int *)(param_2 + 0xc) = iVar21 + -3;
  iVar8 = DAT_0001b410;
  iVar7 = DAT_0001b3c8;
  iVar6 = DAT_0001b36c;
  iVar28 = DAT_0001b2d4;
  if (uVar17 == 0x3f && (uVar2 & 0x3ff) == 0) {
    sVar16 = *(short *)(DAT_0001b288 + 0x1a368);
    if (sVar16 == -1) {
      sVar16 = *(short *)((int)puVar29 + 10);
    }
    if (sVar16 == 10) {
      FUN_0002f200(param_1 + 1,param_2);
      goto LAB_0001a384;
    }
  }
  if ((*puVar29 & 0x200) == 0) goto switchD_0001a3e0_default;
  if (uVar17 == 4) {
    if (uVar27 == 4) {
      FUN_000179b4(param_1 + 1,param_2);
      pbVar11 = (byte *)(uint)*(byte *)(iVar23 + 3);
      pcVar12 = (char *)(DAT_0001b3f8 + 0x1b7bc);
      goto LAB_0001a694;
    }
    goto switchD_0001a3e0_default;
  }
  if (4 < uVar17) {
    if (uVar17 != 8) {
      if (uVar17 == 0x3e) {
        if ((uVar27 == 2) || (uVar27 == 4)) goto LAB_0001b848;
        goto switchD_0001a3e0_default;
      }
      if (uVar17 != 5) goto switchD_0001a3e0_default;
      switch(uVar27) {
      case 3:
        goto LAB_0001a9f4;
      case 4:
        break;
      case 5:
        goto LAB_0001a9f4;
      case 6:
        goto LAB_0001a9f4;
      case 7:
        FUN_000179b4(param_1 + 1,param_2);
        uVar36 = (ulonglong)CONCAT24(*(undefined2 *)(iVar23 + 3),(uint)*(byte *)(iVar23 + 5));
        if (*(byte *)(iVar23 + 5) == 0) {
          pvVar22 = (void *)(DAT_0001b3fc + 0x1b7e4);
        }
        else {
          pvVar22 = (void *)(DAT_0001b404 + 0x1b7f8);
        }
        pcVar12 = (char *)(DAT_0001b400 + 0x1b7ec);
        goto LAB_0001a824;
      case 8:
        break;
      case 9:
        break;
      case 10:
        break;
      case 0xb:
        FUN_000179b4(param_1 + 1,param_2);
        printf((char *)(DAT_0001b408 + 0x1b81c),(uint)*(byte *)(iVar23 + 3),
               (uint)*(ushort *)(iVar23 + 4),(uint)*(ushort *)(iVar23 + 6),dVar33);
        FUN_000204b8(param_1 + 2,iVar23 + 8,*(int *)(param_2 + 0xc) - 5U & 0xffff);
        goto LAB_0001a384;
      }
      goto switchD_0001a3e0_default;
    }
    switch(uVar27) {
    case 1:
      FUN_000179b4(param_1 + 1,param_2);
      printf((char *)(DAT_0001b414 + 0x1b8d8));
      do {
        pbVar11 = pbVar25 + 1;
        printf((char *)(iVar8 + 0x1b8d4),(uint)*pbVar25);
        pbVar25 = pbVar11;
      } while (pbVar11 != (byte *)(iVar23 + 0xb));
      pcVar12 = (char *)(iVar23 + 2);
      do {
        pcVar12 = pcVar12 + 1;
        if (*pcVar12 != '\0') {
          pbVar11 = (byte *)(DAT_0001b424 + 0x1b974);
          goto LAB_0001b938;
        }
      } while ((char *)(iVar23 + 9) != pcVar12);
      bVar18 = *(byte *)(iVar23 + 10);
      if (bVar18 == 4) {
        pbVar11 = (byte *)(DAT_0001b428 + 0x1b980);
      }
      else if (bVar18 < 5) {
        if (bVar18 == 1) {
          pbVar11 = (byte *)(DAT_0001b42c + 0x1b98c);
        }
        else if (bVar18 == 0) {
          pbVar11 = (byte *)(DAT_0001b430 + 0x1b998);
        }
        else if (bVar18 == 2) {
          pbVar11 = (byte *)(DAT_0001b434 + 0x1b9a4);
        }
        else {
          pbVar11 = (byte *)(DAT_0001b418 + 0x1b93c);
        }
      }
      else if (bVar18 == 0x10) {
        pbVar11 = (byte *)(DAT_0001b438 + 0x1b9b0);
      }
      else if (bVar18 == 0x1f) {
        pbVar11 = (byte *)(DAT_0001b43c + 0x1b9bc);
      }
      else if (bVar18 == 8) {
        pbVar11 = (byte *)(DAT_0001b440 + 0x1b9c8);
      }
      else {
        pbVar11 = (byte *)(DAT_0001b420 + 0x1b968);
      }
LAB_0001b938:
      pcVar12 = (char *)(DAT_0001b41c + 0x1b944);
      goto LAB_0001a694;
    case 2:
      goto LAB_0001a384;
    case 3:
      goto LAB_0001a384;
    case 4:
      break;
    case 5:
      pbVar11 = (byte *)&local_128;
      FUN_000179b4(param_1 + 1,param_2);
      FUN_0001791c(pbVar25,pbVar11);
      pcVar12 = (char *)(DAT_0001b444 + 0x1b9f4);
      goto LAB_0001a694;
    case 6:
      param_1 = param_1 + 1;
      FUN_000179b4(param_1,param_2);
      dVar34 = (double)VectorSignedToFloat((uint)*(ushort *)(iVar23 + 3),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar33 = (double)VectorSignedToFloat((uint)*(ushort *)(iVar23 + 5),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar33 = dVar33 * 0.625;
      printf((char *)(DAT_0001b448 + 0x1ba2c),extraout_r1,SUB84(dVar34 * 0.625,0),
             (int)((ulonglong)(dVar34 * 0.625) >> 0x20),dVar33);
      uVar10 = (undefined4)((ulonglong)dVar33 >> 0x20);
      FUN_000179b4(param_1,param_2);
      uVar35 = FUN_0001789c(*(undefined1 *)(iVar23 + 7));
      uVar13 = FUN_0001785c(*(undefined1 *)(iVar23 + 8),(int)((ulonglong)uVar35 >> 0x20),(int)uVar35
                           );
      dVar33 = (double)CONCAT44(uVar10,uVar13);
      printf((char *)(DAT_0001b44c + 0x1ba78));
      FUN_000179b4(param_1,param_2);
      FUN_0001791c(iVar23 + 10,&local_128);
      uVar35 = FUN_0001785c(*(undefined1 *)(iVar23 + 9));
      printf((char *)(DAT_0001b450 + 0x1bab0),(int)((ulonglong)uVar35 >> 0x20),(int)uVar35,
             &local_128);
      FUN_000179b4(param_1,param_2);
      uVar36 = (ulonglong)CONCAT14(*(undefined1 *)(iVar23 + 0x10),(uint)*(byte *)(iVar23 + 0x11));
      switch((uint)*(byte *)(iVar23 + 0x11)) {
      case 0:
        pvVar22 = (void *)(DAT_0001b468 + 0x1bb24);
        break;
      case 1:
        pvVar22 = (void *)(DAT_0001b454 + 0x1baec);
        break;
      case 2:
        pvVar22 = (void *)(DAT_0001b45c + 0x1bb00);
        break;
      case 3:
        pvVar22 = (void *)(DAT_0001b460 + 0x1bb0c);
        break;
      default:
        pvVar22 = (void *)(DAT_0001b464 + 0x1bb18);
      }
      pcVar12 = (char *)(DAT_0001b458 + 0x1baf4);
      goto LAB_0001a824;
    case 7:
      goto LAB_0001a384;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      param_1 = param_1 + 1;
      FUN_000179b4(param_1,param_2);
      if (*(byte *)(iVar23 + 3) == 0) {
        iVar31 = DAT_0001b480 + 0x1bbe8;
      }
      else {
        iVar31 = DAT_0001b46c + 0x1bb4c;
      }
      printf((char *)(DAT_0001b470 + 0x1bb54),(uint)*(byte *)(iVar23 + 3),iVar31);
      FUN_000179b4(param_1,param_2);
      dVar34 = (double)VectorSignedToFloat((uint)*(ushort *)(iVar23 + 4),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar33 = (double)VectorSignedToFloat((uint)*(ushort *)(iVar23 + 6),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar33 = dVar33 * 0.625;
      printf((char *)(DAT_0001b474 + 0x1bb84),extraout_r1_00,SUB84(dVar34 * 0.625,0),
             (int)((ulonglong)(dVar34 * 0.625) >> 0x20),dVar33);
      FUN_000179b4(param_1,param_2);
      uVar36 = FUN_0001785c(*(undefined1 *)(iVar23 + 8));
      if (*(char *)(iVar23 + 9) == '\0') {
        pvVar22 = (void *)(DAT_0001b484 + 0x1bbf4);
      }
      else if (*(char *)(iVar23 + 9) == '\x01') {
        pvVar22 = (void *)(DAT_0001b488 + 0x1bc00);
      }
      else {
        pvVar22 = (void *)(DAT_0001b478 + 0x1bbd4);
      }
      pcVar12 = (char *)(DAT_0001b47c + 0x1bbdc);
LAB_0001a824:
      printf(pcVar12,(int)(uVar36 >> 0x20),(int)uVar36,pvVar22,dVar33);
      goto LAB_0001a384;
    case 0xc:
      FUN_000179b4(param_1 + 1,param_2);
      if (*(byte *)(iVar23 + 3) == 0) {
        iVar31 = DAT_0001b49c + 0x1bc68;
      }
      else {
        iVar31 = DAT_0001b48c + 0x1bc28;
      }
      printf((char *)(DAT_0001b490 + 0x1bc30),(uint)*(byte *)(iVar23 + 3),iVar31);
      FUN_000179b4(param_1 + 1,param_2);
      puVar14 = (undefined2 *)(uint)*(byte *)(iVar23 + 4);
      if (puVar14 == (undefined2 *)0x0) {
        uVar17 = DAT_0001b4a0 + 0x1bc74;
      }
      else {
        uVar17 = DAT_0001b494 + 0x1bc54;
      }
      pcVar12 = (char *)(DAT_0001b498 + 0x1bc5c);
      goto LAB_0001a914;
    case 0xd:
      param_1 = param_1 + 1;
      FUN_000179b4(param_1,param_2);
      uVar13 = (undefined4)((ulonglong)dVar33 >> 0x20);
      FUN_0001791c(iVar23 + 9,&local_128);
      printf((char *)(DAT_0001b4a4 + 0x1bca8),&local_128,(uint)*(byte *)(iVar23 + 8));
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b4a8 + 0x1bccc),(uint)*(ushort *)(iVar23 + 3),
             (uint)*(ushort *)(iVar23 + 5),(uint)*(byte *)(iVar23 + 7));
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b4ac + 0x1bcf0),(uint)*(byte *)(iVar23 + 0xf),
             (uint)*(ushort *)(iVar23 + 0x10),(uint)*(ushort *)(iVar23 + 0x12));
      FUN_000179b4(param_1,param_2);
      uVar20 = (uint)*(ushort *)(iVar23 + 0x18);
      uVar17 = (uint)*(ushort *)(iVar23 + 0x16);
      puVar14 = (undefined2 *)(uint)*(ushort *)(iVar23 + 0x14);
      uVar35 = CONCAT44(uVar13,(uint)*(ushort *)(iVar23 + 0x1a));
      pcVar12 = (char *)(DAT_0001b4b0 + 0x1bd1c);
      goto LAB_0001aa8c;
    }
    goto switchD_0001a3e0_default;
  }
  if (uVar17 == 2) {
    switch(uVar27) {
    case 1:
      goto LAB_0001ac38;
    case 2:
      break;
    case 3:
      FUN_000179b4(param_1 + 1,param_2);
      uVar27 = (uint)*(ushort *)(iVar23 + 7);
      uVar20 = (uint)*(ushort *)(iVar23 + 5);
      uVar17 = (uint)*(ushort *)(iVar23 + 3);
      uVar36 = (ulonglong)CONCAT24(*(undefined2 *)(iVar23 + 0xb),(uint)*(ushort *)(iVar23 + 9));
      pcVar12 = (char *)(DAT_0001b334 + 0x1ac90);
LAB_0001a54c:
      printf(pcVar12,uVar17,uVar20,uVar27,uVar36);
      goto LAB_0001a384;
    case 4:
      goto LAB_0001a9f4;
    case 5:
LAB_0001ac38:
      FUN_000179b4(param_1 + 1,param_2);
      pvVar22 = (void *)(uint)*(ushort *)(iVar23 + 7);
      uVar36 = (ulonglong)CONCAT24(*(undefined2 *)(iVar23 + 3),(uint)*(ushort *)(iVar23 + 5));
      pcVar12 = (char *)(DAT_0001b330 + 0x1ac5c);
      goto LAB_0001a824;
    case 6:
      goto LAB_0001a9f4;
    case 7:
      param_1 = param_1 + 1;
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b338 + 0x1acb4),(uint)*(ushort *)(iVar23 + 3),
             (uint)*(byte *)(iVar23 + 5));
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b33c + 0x1acd0),(uint)*(byte *)(iVar23 + 6));
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b340 + 0x1acec),*(undefined4 *)(iVar23 + 7));
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b344 + 0x1ad08),*(undefined4 *)(iVar23 + 0xb));
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b348 + 0x1ad24),*(undefined4 *)(iVar23 + 0xf));
      FUN_000179b4(param_1,param_2);
      pbVar11 = *(byte **)(iVar23 + 0x13);
      pcVar12 = (char *)(DAT_0001b34c + 0x1ad40);
      goto LAB_0001a694;
    case 8:
      break;
    case 9:
      goto LAB_0001a9f4;
    case 10:
      break;
    case 0xb:
LAB_0001a740:
      FUN_0001a1c4(param_1 + 1,param_2);
      goto LAB_0001a384;
    case 0xc:
      goto LAB_0001a9f4;
    case 0xd:
      uVar2 = *(ushort *)(iVar23 + 5);
      FUN_000179b4(param_1 + 1,param_2);
      printf((char *)(DAT_0001b350 + 0x1ad68),(uint)*(ushort *)(iVar23 + 3),(uint)uVar2);
      pvVar22 = (void *)FUN_00033994((uint)uVar2);
      if (pvVar22 == (void *)0x0) goto LAB_0001a384;
      FUN_000179b4(param_1 + 1,param_2);
      pcVar12 = (char *)(DAT_0001b354 + 0x1ad94);
      goto LAB_0001a624;
    case 0xe:
      goto LAB_0001a384;
    case 0xf:
      uVar17 = FUN_00017604(param_2);
      uVar17 = (uVar17 & 0xff) << 8 | uVar17 >> 8 & 0xff;
      FUN_000179b4(param_1 + 1,param_2);
      printf((char *)(DAT_0001b358 + 0x1adc4),uVar17);
      pvVar22 = (void *)FUN_00033994(uVar17);
      if (pvVar22 == (void *)0x0) goto LAB_0001a384;
      FUN_000179b4(param_1 + 1,param_2);
      pcVar12 = (char *)(DAT_0001b35c + 0x1adf0);
LAB_0001a624:
      printf(pcVar12,pvVar22);
      free(pvVar22);
      goto LAB_0001a384;
    case 0x10:
      break;
    case 0x11:
      param_1 = param_1 + 1;
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b360 + 0x1ae10),(uint)*(ushort *)(iVar23 + 3));
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b364 + 0x1ae2c),(uint)*(ushort *)(iVar23 + 5));
      FUN_000179b4(param_1,param_2);
      uVar17 = (uint)*(ushort *)(iVar23 + 9);
      puVar14 = (undefined2 *)(uint)*(ushort *)(iVar23 + 7);
      pcVar12 = (char *)(DAT_0001b368 + 0x1ae4c);
      goto LAB_0001a914;
    }
    goto switchD_0001a3e0_default;
  }
  if (uVar17 < 3) {
    if (uVar17 != 1) goto switchD_0001a3e0_default;
    switch(uVar27) {
    case 1:
      FUN_000179b4(param_1 + 1,param_2);
      uVar27 = (uint)*(byte *)(iVar23 + 3);
      uVar20 = (uint)*(byte *)(iVar23 + 4);
      uVar17 = (uint)*(byte *)(iVar23 + 5);
      uVar36 = (ulonglong)CONCAT14(*(undefined1 *)(iVar23 + 7),(uint)*(byte *)(iVar23 + 6));
      pcVar12 = (char *)(DAT_0001b28c + 0x1a550);
      goto LAB_0001a54c;
    case 2:
      goto LAB_0001a384;
    case 3:
      FUN_000179b4(param_1 + 1,param_2);
      printf((char *)(DAT_0001b290 + 0x1a598),(uint)*(ushort *)(iVar23 + 3),
             (uint)*(ushort *)(iVar23 + 5),(uint)*(byte *)(iVar23 + 9),(uint)*(byte *)(iVar23 + 8),
             (uint)*(byte *)(iVar23 + 7),(uint)*(byte *)(iVar23 + 10),(uint)*(byte *)(iVar23 + 0xb))
      ;
      goto LAB_0001a384;
    case 4:
      goto LAB_0001a384;
    case 5:
      uVar2 = *(ushort *)(iVar23 + 0xd);
      uVar3 = *(ushort *)(iVar23 + 9);
      FUN_000179b4(param_1 + 1,param_2);
      FUN_0001791c(pbVar25,&local_128);
      if ((uVar2 & 0x8000) == 0) {
        iVar31 = DAT_0001b294 + 0x1a5e4;
      }
      else {
        iVar31 = DAT_0001b2a0 + 0x1a640;
      }
      printf((char *)(DAT_0001b298 + 0x1a5fc),&local_128,(uint)uVar3,(uint)*(byte *)(iVar23 + 0xf),
             uVar2 & 0x7fff,iVar31);
      pvVar22 = (void *)FUN_0003392c((uint)uVar3);
      if (pvVar22 == (void *)0x0) goto LAB_0001a384;
      FUN_000179b4(param_1 + 1,param_2);
      pcVar12 = (char *)(DAT_0001b29c + 0x1a628);
      goto LAB_0001a624;
    case 6:
      FUN_000179b4(param_1 + 1,param_2);
      printf((char *)(DAT_0001b2a4 + 0x1a664),(uint)*(ushort *)(iVar23 + 3),
             (uint)*(byte *)(iVar23 + 5));
      FUN_000179b4(param_1 + 1,param_2);
      if (*(byte *)(iVar23 + 5) < 0x40) {
        pbVar11 = *(byte **)(DAT_0001b2a8 + (uint)*(byte *)(iVar23 + 5) * 4 + 0x1aa6c);
      }
      else {
        pbVar11 = (byte *)(DAT_0001b2b0 + 0x1a6a8);
      }
      pcVar12 = (char *)(DAT_0001b2ac + 0x1a698);
      goto LAB_0001a694;
    case 7:
      goto LAB_0001a6ec;
    case 8:
      goto LAB_0001a6a8;
    case 9:
      goto LAB_0001a740;
    case 10:
      goto LAB_0001a750;
    case 0xb:
      FUN_000179b4(param_1 + 1,param_2);
      iVar31 = DAT_0001b2d8;
      FUN_0001791c(pbVar25,&local_128);
      pbVar25 = (byte *)(iVar23 + 9);
      printf((char *)(DAT_0001b2dc + 0x1a87c),&local_128);
      do {
        if ((*puVar29 & 0x4000) == 0) {
          printf((char *)(iVar28 + 0x1a858),(uint)*pbVar25);
        }
        else {
          printf((char *)(iVar31 + 0x1a874));
        }
        pbVar25 = pbVar25 + 1;
      } while ((byte *)(iVar23 + 0x19) != pbVar25);
      goto LAB_0001a8a0;
    case 0xc:
      goto LAB_0001a8bc;
    case 0xd:
      FUN_000179b4(param_1 + 1,param_2);
      FUN_0001791c(pbVar25,&local_128);
      iStack_138 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      local_13c = (undefined1  [4])0x0;
      uStack_134 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8) & 0xff;
      iStack_130 = iStack_138 << 8;
      uStack_12c = (undefined1)((uint)iStack_138 >> 0x18);
      if ((*puVar29 & 0x4000) == 0) {
        pvVar22 = memcpy(local_13c,(void *)(iVar23 + 10),(uint)*(byte *)(iVar23 + 9));
      }
      else {
        pvVar22 = memset(local_13c,0x2a,(uint)*(byte *)(iVar23 + 9));
      }
      uVar36 = CONCAT44(&local_128,(uint)*(byte *)(iVar23 + 9));
      pcVar12 = (char *)(DAT_0001b2d0 + 0x1a828);
      goto LAB_0001a824;
    case 0xe:
      goto LAB_0001a8bc;
    case 0xf:
LAB_0001a6ec:
      uVar2 = *(ushort *)(iVar23 + 5);
      FUN_000179b4(param_1 + 1,param_2);
      printf((char *)(DAT_0001b2b8 + 0x1a714),(uint)*(ushort *)(iVar23 + 3),(uint)uVar2);
      pvVar22 = (void *)FUN_0003392c((uint)uVar2);
      if (pvVar22 == (void *)0x0) goto LAB_0001a384;
      FUN_000179b4(param_1 + 1,param_2);
      pcVar12 = (char *)(DAT_0001b2bc + 0x1a740);
      goto LAB_0001a624;
    case 0x10:
      break;
    case 0x11:
      goto LAB_0001a9f4;
    case 0x12:
      break;
    case 0x13:
      FUN_000179b4(param_1 + 1,param_2);
      uVar17 = (uint)*(byte *)(iVar23 + 5);
      puVar14 = (undefined2 *)(uint)*(ushort *)(iVar23 + 3);
      pcVar12 = (char *)(DAT_0001b2f8 + 0x1a9f4);
      goto LAB_0001a914;
    case 0x14:
      break;
    case 0x15:
      goto LAB_0001a9f4;
    case 0x16:
      break;
    case 0x17:
      FUN_000179b4(param_1 + 1,param_2);
      pbVar11 = (byte *)(uint)*(byte *)(iVar23 + 3);
      pcVar12 = (char *)(DAT_0001b2fc + 0x1aa20);
      goto LAB_0001a694;
    case 0x18:
      break;
    case 0x19:
      uVar2 = *(ushort *)(iVar23 + 0xb);
      puVar14 = &local_128;
      FUN_000179b4(param_1 + 1,param_2);
      uVar13 = (undefined4)((ulonglong)dVar33 >> 0x20);
      FUN_0001791c(pbVar25,puVar14);
      uVar17 = (uint)*(byte *)(iVar23 + 9);
      uVar20 = uVar2 & 0x7fff;
      if ((uVar2 & 0x8000) == 0) {
        iVar31 = DAT_0001b304 + 0x1aa80;
      }
      else {
        iVar31 = DAT_0001b30c + 0x1aaa0;
      }
      uVar35 = CONCAT44(uVar13,iVar31);
      pcVar12 = (char *)(DAT_0001b308 + 0x1aa90);
      goto LAB_0001aa8c;
    case 0x1a:
      goto LAB_0001a6a8;
    case 0x1b:
      goto LAB_0001a9f4;
    case 0x1c:
      FUN_000179b4(param_1 + 1,param_2);
      uVar17 = (uint)*(byte *)(iVar23 + 5);
      puVar14 = (undefined2 *)(uint)*(ushort *)(iVar23 + 3);
      pcVar12 = (char *)(DAT_0001b300 + 0x1aa40);
      goto LAB_0001a914;
    case 0x1d:
      goto LAB_0001a9f4;
    case 0x1e:
      break;
    case 0x1f:
      goto LAB_0001a9f4;
    case 0x20:
      goto LAB_0001a9f4;
    case 0x21:
      break;
    case 0x22:
      break;
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
      FUN_000179b4(param_1 + 1,param_2);
      pvVar22 = (void *)(uint)*(ushort *)(iVar23 + 0x12);
      uVar36 = (ulonglong)CONCAT24(*(undefined2 *)(iVar23 + 3),(uint)*(ushort *)(iVar23 + 0xf));
      pcVar12 = (char *)(DAT_0001b310 + 0x1aac4);
      goto LAB_0001a824;
    case 0x29:
LAB_0001a6a8:
      param_1 = param_1 + 1;
      *(int *)(param_2 + 0xc) = iVar21 + -9;
      *(int *)(param_2 + 8) = iVar23 + 9;
      FUN_000179b4(param_1,param_2);
      FUN_0001791c(pbVar25,&local_128);
      printf((char *)(DAT_0001b2b4 + 0x1a6e8),&local_128);
      break;
    case 0x2a:
      goto LAB_0001a750;
    case 0x2b:
      FUN_00017b08(param_1 + 1,param_2);
      goto LAB_0001a384;
    case 0x2c:
      goto LAB_0001a8bc;
    case 0x2d:
      goto LAB_0001a8bc;
    case 0x2e:
      puVar14 = &local_128;
      FUN_000179b4(param_1 + 1,param_2);
      FUN_0001791c(pbVar25,puVar14);
      uVar17 = *(uint *)(iVar23 + 9);
      pcVar12 = (char *)(DAT_0001b2e4 + 0x1a918);
      goto LAB_0001a914;
    case 0x2f:
      goto LAB_0001a8bc;
    case 0x30:
      param_1 = param_1 + 1;
      FUN_000179b4(param_1,param_2);
      FUN_0001791c(pbVar25,&local_128);
      pcVar12 = (char *)(DAT_0001b2ec + 0x1a95c);
      printf((char *)(DAT_0001b2e8 + 0x1a958),&local_128);
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b2f0 + 0x1a974));
      pbVar25 = (byte *)(iVar23 + 9);
      do {
        pbVar11 = pbVar25 + 1;
        printf(pcVar12,(uint)*pbVar25);
        pbVar25 = pbVar11;
      } while (pbVar11 != (byte *)(iVar23 + 0x19));
      putchar(10);
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b2f4 + 0x1a9ac));
      do {
        pbVar25 = pbVar11 + 1;
        printf(pcVar12,(uint)*pbVar11);
        pbVar11 = pbVar25;
      } while (pbVar25 != (byte *)(iVar23 + 0x29));
      goto LAB_0001a8a0;
    case 0x31:
      break;
    case 0x32:
      break;
    case 0x33:
LAB_0001a8bc:
      pbVar11 = (byte *)&local_128;
      FUN_000179b4(param_1 + 1,param_2);
      FUN_0001791c(pbVar25,pbVar11);
      pcVar12 = (char *)(DAT_0001b2e0 + 0x1a8e8);
      goto LAB_0001a694;
    case 0x34:
LAB_0001a750:
      FUN_000179b4(param_1 + 1,param_2);
      FUN_0001791c(pbVar25,&local_128);
      printf((char *)(DAT_0001b2c0 + 0x1a784),&local_128,(uint)*(byte *)(iVar23 + 9));
      FUN_000179b4(param_1 + 1,param_2);
      if (*(byte *)(iVar23 + 9) < 0x40) {
        pbVar11 = *(byte **)(DAT_0001b2c4 + (uint)*(byte *)(iVar23 + 9) * 4 + 0x1ab8c);
      }
      else {
        pbVar11 = (byte *)(DAT_0001b2cc + 0x1a7c4);
      }
      pcVar12 = (char *)(DAT_0001b2c8 + 0x1a7b8);
      goto LAB_0001a694;
    case 0x35:
      goto LAB_0001aac4;
    case 0x36:
LAB_0001aac4:
      pcVar12 = (char *)(DAT_0001b314 + 0x1aadc);
      FUN_000179b4(param_1 + 1,param_2);
      printf((char *)(DAT_0001b318 + 0x1aaf4),(uint)*(byte *)(iVar23 + 3),
             (uint)*(byte *)(iVar23 + 4),(uint)*(byte *)(iVar23 + 5),dVar33);
      FUN_000179b4(param_1 + 1,param_2);
      printf((char *)(DAT_0001b31c + 0x1ab18));
      for (pbVar25 = (byte *)(iVar23 + 6);
          *(byte *)(iVar23 + 4) < 0x21 &&
          (int)(pbVar25 + (-6 - iVar23)) < (int)(uint)*(byte *)(iVar23 + 4); pbVar25 = pbVar25 + 1)
      {
        printf(pcVar12,(uint)*pbVar25);
      }
      goto LAB_0001a8a0;
    case 0x37:
      break;
    case 0x38:
      goto LAB_0001ab4c;
    case 0x39:
LAB_0001ab4c:
      param_1 = param_1 + 1;
      pcVar12 = (char *)(DAT_0001b320 + 0x1ab64);
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b324 + 0x1ab7c),(uint)*(byte *)(iVar23 + 3));
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b328 + 0x1ab94));
      pbVar25 = (byte *)(iVar23 + 4);
      do {
        pbVar11 = pbVar25 + 1;
        printf(pcVar12,(uint)*pbVar25);
        pbVar25 = pbVar11;
      } while (pbVar11 != (byte *)(iVar23 + 0x14));
      putchar(10);
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b32c + 0x1abcc));
      do {
        pbVar25 = pbVar11 + 1;
        printf(pcVar12,(uint)*pbVar11);
        pbVar11 = pbVar25;
      } while (pbVar25 != (byte *)(iVar23 + 0x24));
LAB_0001a8a0:
      putchar(10);
      goto LAB_0001a384;
    case 0x3a:
LAB_0001a9f4:
      FUN_00017ec8(param_1 + 1,param_2);
      goto LAB_0001a384;
    }
    goto switchD_0001a3e0_default;
  }
  switch(uVar27) {
  case 1:
    goto LAB_0001b000;
  case 2:
    break;
  case 3:
    goto LAB_0001a384;
  case 4:
    break;
  case 5:
    param_1 = param_1 + 1;
    FUN_000179b4(param_1,param_2);
    if (*(byte *)(iVar23 + 3) == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = (uint)*(byte *)(iVar23 + 4);
    }
    printf((char *)(DAT_0001b374 + 0x1b060),(uint)*(byte *)(iVar23 + 3),uVar17);
    cVar1 = *(char *)(iVar23 + 3);
    if (cVar1 == '\x01') {
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b380 + 0x1b0d4));
      cVar1 = *(char *)(iVar23 + 4);
      if (cVar1 == '\x01') {
        uVar5 = *(uint3 *)(iVar23 + 5);
        local_13c._0_3_ = uVar5;
        auVar9 = local_13c;
        uVar4 = *(undefined2 *)(iVar23 + 8);
        local_126 = *(byte *)(iVar23 + 10);
        local_128._0_1_ = (byte)uVar4;
        uVar20 = (uint)(byte)local_128;
        local_128._1_1_ = (byte)((ushort)uVar4 >> 8);
        uVar27 = (uint)local_128._1_1_;
        local_13c[1] = (byte)(uVar5 >> 8);
        uVar17 = (uint)local_13c[1];
        local_13c = auVar9;
        local_128 = uVar4;
        printf((char *)(DAT_0001b38c + 0x1b15c),(uint)*(byte *)(iVar23 + 7),uVar17,uVar5 & 0xff,
               (uint)local_126,uVar27,uVar20);
        goto LAB_0001a384;
      }
      if (cVar1 == '\0') {
        pcVar12 = (char *)(DAT_0001b388 + 0x1b11c);
        goto LAB_0001b0b4;
      }
      if (cVar1 == '\x02') {
        pbVar11 = (byte *)&local_128;
        FUN_0001791c(iVar23 + 5,pbVar11);
        pcVar12 = (char *)(DAT_0001b384 + 0x1b110);
        goto LAB_0001a694;
      }
    }
    else {
      if (cVar1 == '\0') {
        FUN_000179b4(param_1,param_2);
        pcVar12 = (char *)(DAT_0001b37c + 0x1b0b8);
LAB_0001b0b4:
        puts(pcVar12);
        goto LAB_0001a384;
      }
      if (cVar1 != '\x02') goto LAB_0001a384;
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001b378 + 0x1b09c));
    }
    goto LAB_0001a8a0;
  case 6:
    break;
  case 7:
    break;
  case 8:
    goto LAB_0001a9f4;
  case 9:
    break;
  case 10:
    FUN_000179b4(param_1 + 1,param_2);
    pbVar11 = (byte *)(uint)*(byte *)(iVar23 + 3);
    pcVar12 = (char *)(DAT_0001b390 + 0x1b184);
    goto LAB_0001a694;
  case 0xb:
    goto LAB_0001a384;
  case 0xc:
    break;
  case 0xd:
    goto LAB_0001b184;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    FUN_00017cf0(param_1 + 1,param_2);
    goto LAB_0001a384;
  case 0x12:
LAB_0001b184:
    puVar14 = &local_128;
    FUN_000179b4(param_1 + 1,param_2);
    FUN_0001791c(pbVar25,puVar14);
    uVar17 = (uint)*(byte *)(iVar23 + 9);
    pcVar12 = (char *)(DAT_0001b394 + 0x1b1b4);
    goto LAB_0001a914;
  case 0x13:
    pbVar11 = (byte *)&local_128;
    memset(pbVar11,0,0xf9);
    iVar31 = **(int **)(iVar31 + DAT_0001b398);
    pbVar15 = pbVar11;
    do {
      pbVar26 = pbVar25 + 1;
      bVar18 = *pbVar25;
      if (bVar18 == 0) break;
      if ((*(ushort *)(iVar31 + (short)(ushort)bVar18 * 2) & 0x40) == 0) {
        bVar18 = 0x2e;
      }
      *pbVar15 = bVar18;
      pbVar15 = pbVar15 + 1;
      pbVar25 = pbVar26;
    } while ((byte *)(iVar23 + 0xfb) != pbVar26);
    FUN_000179b4(param_1 + 1,param_2);
    pcVar12 = (char *)(DAT_0001b39c + 0x1b238);
    goto LAB_0001a694;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    goto LAB_0001b580;
  case 0x17:
    break;
  case 0x18:
    goto LAB_0001b580;
  case 0x19:
    break;
  case 0x1a:
    goto LAB_0001b558;
  case 0x1b:
    break;
  case 0x1c:
    goto LAB_0001b59c;
  case 0x1d:
    break;
  case 0x1e:
LAB_0001b59c:
    FUN_000179b4(param_1 + 1,param_2);
    uVar17 = (uint)*(ushort *)(iVar23 + 5);
    puVar14 = (undefined2 *)(uint)*(ushort *)(iVar23 + 3);
    pcVar12 = (char *)(DAT_0001b3bc + 0x1b5bc);
    goto LAB_0001a914;
  case 0x1f:
    break;
  case 0x20:
    goto LAB_0001b558;
  case 0x21:
    break;
  case 0x22:
    goto LAB_0001b5d8;
  case 0x23:
    break;
  case 0x24:
    FUN_000179b4(param_1 + 1,param_2);
    pvVar22 = (void *)(uint)*(byte *)(iVar23 + 3);
    uVar36 = (ulonglong)CONCAT14(*(undefined1 *)(iVar23 + 5),(uint)*(byte *)(iVar23 + 4));
    pcVar12 = (char *)(DAT_0001b3a0 + 0x1b25c);
    goto LAB_0001a824;
  case 0x25:
    break;
  case 0x26:
    FUN_000179b4(param_1 + 1,param_2);
    pbVar11 = (byte *)(uint)*(ushort *)(iVar23 + 3);
    pcVar12 = (char *)((int)&DAT_0001b278 + DAT_0001b3a4);
    goto LAB_0001a694;
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
    FUN_000179b4(param_1 + 1,param_2);
    uVar36 = (ulonglong)CONCAT24(*(undefined2 *)(iVar23 + 3),(uint)*(byte *)(iVar23 + 5));
    if (*(byte *)(iVar23 + 5) == 0) {
      pvVar22 = (void *)(DAT_0001b3d0 + 0x1b658);
    }
    else {
      pvVar22 = (void *)(DAT_0001b3d8 + 0x1b66c);
    }
    pcVar12 = (char *)(DAT_0001b3d4 + 0x1b660);
    goto LAB_0001a824;
  case 0x2e:
    break;
  case 0x2f:
    break;
  case 0x30:
    break;
  case 0x31:
LAB_0001b558:
    pbVar11 = (byte *)FUN_000175e4(param_2);
    FUN_000179b4(param_1 + 1,param_2);
    pcVar12 = (char *)(DAT_0001b3b4 + 0x1b580);
    goto LAB_0001a694;
  case 0x32:
    break;
  case 0x33:
    FUN_000179b4(param_1 + 1,param_2);
    uVar20 = (uint)*(byte *)(iVar23 + 5);
    uVar17 = (uint)*(ushort *)(iVar23 + 6);
    puVar14 = (undefined2 *)(uint)*(ushort *)(iVar23 + 3);
    uVar35 = CONCAT44((int)((ulonglong)dVar33 >> 0x20),(uint)*(ushort *)(iVar23 + 8));
    pcVar12 = (char *)(DAT_0001b3dc + 0x1b698);
LAB_0001aa8c:
    printf(pcVar12,puVar14,uVar17,uVar20,uVar35);
    goto LAB_0001a384;
  case 0x34:
    break;
  case 0x35:
    FUN_00017e54(param_1 + 1,param_2);
    goto LAB_0001a384;
  case 0x36:
    goto LAB_0001a9f4;
  case 0x37:
    FUN_000179b4(param_1 + 1,param_2);
    uVar17 = (uint)*(ushort *)(iVar23 + 5);
    puVar14 = (undefined2 *)(uint)*(ushort *)(iVar23 + 3);
    pcVar12 = (char *)(DAT_0001b3e0 + 0x1b6c8);
    goto LAB_0001a914;
  case 0x38:
    break;
  case 0x39:
    break;
  case 0x3a:
    pcVar12 = (char *)(DAT_0001b3a8 + 0x1b4d4);
    pcVar30 = (char *)(DAT_0001b3ac + 0x1b4d8);
    pcVar32 = (char *)(DAT_0001b3b0 + 0x1b4dc);
    iVar31 = iVar23;
    for (iVar28 = 0; iVar28 < (int)(uint)*(byte *)(iVar23 + 3); iVar28 = iVar28 + 1) {
      FUN_000179b4(param_1 + 1,param_2);
      printf(pcVar12,(uint)*(byte *)(iVar31 + 6),(uint)*(byte *)(iVar31 + 5),
             (uint)*(byte *)(iVar31 + 4),dVar33);
      if (((*(char *)(iVar31 + 6) == -0x62) && (*(char *)(iVar31 + 5) == -0x75)) &&
         ((__format = pcVar30, *(char *)(iVar31 + 4) == '\0' ||
          (__format = pcVar32, *(char *)(iVar31 + 4) == '3')))) {
        printf(__format);
      }
      iVar31 = iVar31 + 3;
      putchar(10);
    }
    goto LAB_0001a384;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    break;
  case 0x3e:
    break;
  case 0x3f:
    FUN_000179b4(param_1 + 1,param_2);
    printf((char *)(DAT_0001b3cc + 0x1b618));
    do {
      pbVar11 = pbVar25 + 1;
      printf((char *)(iVar7 + 0x1b614),(uint)*pbVar25);
      pbVar25 = pbVar11;
    } while (pbVar11 != (byte *)(iVar23 + 0xd));
    goto LAB_0001a8a0;
  case 0x40:
    break;
  case 0x41:
    break;
  case 0x42:
    break;
  case 0x43:
    FUN_000179b4(param_1 + 1,param_2);
    pbVar11 = (byte *)(uint)*(byte *)(iVar23 + 3);
    pcVar12 = (char *)(DAT_0001b3c0 + 0x1b5d8);
    goto LAB_0001a694;
  case 0x44:
    break;
  case 0x45:
    goto LAB_0001b5d8;
  case 0x46:
    break;
  case 0x47:
    break;
  case 0x48:
    break;
  case 0x49:
LAB_0001b5d8:
    FUN_000179b4(param_1 + 1,param_2);
    pbVar11 = (byte *)(uint)*(byte *)(iVar23 + 3);
    pcVar12 = (char *)(DAT_0001b3c4 + 0x1b5f4);
    goto LAB_0001a694;
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
    FUN_000179b4(param_1 + 1,param_2);
    printf((char *)(DAT_0001b3e4 + 0x1b6e8),(uint)*(byte *)(iVar23 + 3));
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
    FUN_00018538(param_1 + 1,param_2);
    goto LAB_0001a384;
  case 0x53:
    goto LAB_0001a9f4;
  case 0x54:
    break;
  case 0x55:
    break;
  case 0x56:
    goto LAB_0001b848;
  case 0x57:
    break;
  case 0x58:
    break;
  case 0x59:
    FUN_000179b4(param_1 + 1,param_2);
    pbVar11 = (byte *)(int)*(char *)(iVar23 + 3);
    pcVar12 = (char *)(DAT_0001b3e8 + 0x1b72c);
    goto LAB_0001a694;
  case 0x5a:
    break;
  case 0x5b:
    FUN_000179b4(param_1 + 1,param_2);
    pbVar11 = (byte *)(uint)*(byte *)(iVar23 + 3);
    pcVar12 = (char *)(DAT_0001b3ec + 0x1b748);
    goto LAB_0001a694;
  case 0x5c:
    break;
  case 0x5d:
    break;
  case 0x5e:
    break;
  case 0x5f:
    FUN_000179b4(param_1 + 1,param_2);
    uVar17 = (uint)*(byte *)(iVar23 + 5);
    puVar14 = (undefined2 *)(uint)*(ushort *)(iVar23 + 3);
    pcVar12 = (char *)(DAT_0001b3f0 + 0x1b768);
    goto LAB_0001a914;
  case 0x60:
    puVar14 = &local_128;
    FUN_000179b4(param_1 + 1,param_2);
    FUN_0001791c(pbVar25,puVar14);
    uVar17 = (uint)*(byte *)(iVar23 + 9);
    pcVar12 = (char *)(DAT_0001b3f4 + 0x1b798);
LAB_0001a914:
    printf(pcVar12,puVar14,uVar17);
    goto LAB_0001a384;
  case 0x61:
    break;
  case 0x62:
LAB_0001b580:
    FUN_000179b4(param_1 + 1,param_2);
    pbVar11 = (byte *)(uint)*(ushort *)(iVar23 + 3);
    pcVar12 = (char *)(DAT_0001b3b8 + 0x1b59c);
    goto LAB_0001a694;
  case 99:
LAB_0001b000:
    FUN_000179b4(param_1 + 1,param_2);
    printf((char *)(DAT_0001b370 + 0x1b024));
    do {
      pbVar11 = pbVar25 + 1;
      printf((char *)(iVar6 + 0x1b020),(uint)*pbVar25);
      pbVar25 = pbVar11;
    } while ((byte *)(iVar23 + 0xb) != pbVar11);
    goto LAB_0001a8a0;
  case 100:
    break;
  case 0x65:
    break;
  case 0x66:
    break;
  case 0x67:
LAB_0001b848:
    pbVar11 = (byte *)FUN_000175e4(param_2);
    FUN_000179b4(param_1 + 1,param_2);
    pcVar12 = (char *)(DAT_0001b40c + 0x1b870);
LAB_0001a694:
    printf(pcVar12,pbVar11);
    goto LAB_0001a384;
  case 0x68:
    break;
  case 0x69:
    goto LAB_0001a9f4;
  }
switchD_0001a3e0_default:
  FUN_000149a8(param_1,param_2);
LAB_0001a384:
  if (local_2c != *piVar19) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001bd24 @ 0001bd24 size=7828 ===== */

void FUN_0001bd24(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  char *pcVar6;
  void *__ptr;
  int iVar7;
  ssize_t sVar8;
  undefined4 extraout_r1;
  undefined1 *puVar9;
  int iVar10;
  ushort uVar11;
  short sVar12;
  int *piVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  ushort *puVar20;
  uint *puVar21;
  uint uVar22;
  char *__format;
  bool bVar23;
  uint in_fpscr;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auStack_40 [20];
  int local_2c;
  
  iVar19 = DAT_0001ccf8 + 0x1bd44;
  pbVar16 = *(byte **)(param_2 + 8);
  piVar13 = *(int **)(iVar19 + DAT_0001ccfc);
  local_2c = *piVar13;
  uVar22 = (uint)*pbVar16;
  *(byte **)(param_2 + 8) = pbVar16 + 1;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
  if (uVar22 == 3) {
    iVar10 = *(int *)(param_2 + 0x2c);
    uVar11 = *(ushort *)(pbVar16 + 1);
    iVar7 = fileno((FILE *)**(undefined4 **)(iVar19 + DAT_0001cff8));
    if (((iVar7 < iVar10) &&
        (sVar8 = write(*(int *)(param_2 + 0x2c),(void *)(*(int *)(param_2 + 8) + 3),(uint)pbVar16[3]
                      ), sVar8 < 0)) || ((*(uint *)(*(int *)(iVar19 + DAT_0001cffc) + 4) & 4) == 0))
    goto LAB_0001bfac;
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_0001d000 + 0x1de30),uVar11 & 0xfff,(uint)(uVar11 >> 0xc),(uint)pbVar16[3]);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 3;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -3;
    iVar7 = param_1 + 1;
    goto switchD_0001c020_default;
  }
  iVar7 = param_1;
  if (uVar22 < 4) {
    if (uVar22 != 1) {
      if (uVar22 != 2) goto LAB_0001bd88;
      uVar11 = *(ushort *)(pbVar16 + 1);
      iVar19 = *(int *)(iVar19 + DAT_0001cffc);
      if ((*(uint *)(iVar19 + 4) & 2) != 0) {
        uVar4 = *(ushort *)(pbVar16 + 3);
        FUN_000179b4();
        param_1 = param_1 + 1;
        printf((char *)(DAT_0001cff4 + 0x1dd98),uVar11 & 0xfff,(uint)(uVar11 >> 0xc),(uint)uVar4);
      }
      *(uint *)(param_2 + 0x1c) = (uint)(uVar11 >> 0xc);
      *(ushort *)(param_2 + 0x14) = (ushort)(((uint)uVar11 << 0x14) >> 0x14);
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -4;
      iVar7 = param_1;
      if ((*(uint *)(iVar19 + 4) & 0xfffffffd) != 0) {
        FUN_0002008c(param_1,param_2);
        goto LAB_0001bfac;
      }
      goto switchD_0001c020_default;
    }
LAB_0001c150:
    FUN_0001a29c(param_1,param_2);
    goto LAB_0001bfac;
  }
  puVar21 = *(uint **)(iVar19 + DAT_0001cd00);
  if (uVar22 != 4) {
    if (uVar22 == 0xff) {
      if ((puVar21[1] & 2) == 0) goto LAB_0001bfac;
      if (*(short *)(param_2 + 0x10) == -1) {
        uVar27 = FUN_00017604(param_2);
        uVar28 = FUN_00017604((int)((ulonglong)uVar27 >> 0x20));
        uVar29 = FUN_00017604((int)((ulonglong)uVar28 >> 0x20));
        uVar22 = FUN_00017604((int)((ulonglong)uVar29 >> 0x20));
        FUN_000179b4(param_1);
        if (*(char *)(param_2 + 0x12) == '\0') {
          iVar19 = DAT_0001cd08 + 0x1be54;
        }
        else {
          iVar19 = DAT_0001d004 + 0x1de80;
        }
        printf((char *)(DAT_0001cd0c + 0x1be64),iVar19,
               ((uint)uVar27 & 0xff) << 8 | (uint)uVar27 >> 8 & 0xff,
               ((uint)uVar28 & 0xff) << 8 | (uint)uVar28 >> 8 & 0xff,
               ((uint)uVar29 & 0xff) << 8 | (uint)uVar29 >> 8 & 0xff,
               (uVar22 & 0xff) << 8 | uVar22 >> 8 & 0xff);
      }
      else {
        if ((*puVar21 & 0x4000) != 0) goto LAB_0001bfac;
        sVar12 = *(short *)(DAT_0001d008 + 0x1de98);
        if (sVar12 == -1) {
          sVar12 = *(short *)((int)puVar21 + 10);
        }
        if (sVar12 == 0xc) {
          FUN_0003037c();
          goto LAB_0001bfac;
        }
        FUN_000179b4();
        printf((char *)(DAT_0001d00c + 0x1dec4),*(undefined4 *)(param_2 + 0xc));
      }
    }
    else {
LAB_0001bd88:
      if ((*(uint *)(*(int *)(iVar19 + DAT_0001cd00) + 4) & 2) == 0) goto LAB_0001bfac;
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001cd04 + 0x1bdbc),uVar22,*(undefined4 *)(param_2 + 0xc));
    }
    goto switchD_0001c020_default;
  }
  if ((puVar21[1] & 2) == 0) goto LAB_0001bfac;
  bVar1 = pbVar16[1];
  if (bVar1 < 0x4e) {
    FUN_000179b4();
    printf((char *)(DAT_0001cd14 + 0x1beac),
           *(undefined4 *)(DAT_0001cd10 + (uint)pbVar16[1] * 4 + 0x1c37c),(uint)pbVar16[1],
           (uint)pbVar16[2]);
  }
  else {
    if (bVar1 == 0xfe) {
      FUN_000179b4();
      bVar2 = pbVar16[2];
      bVar3 = pbVar16[1];
      pcVar6 = (char *)(DAT_0001cd1c + 0x1bf2c);
    }
    else {
      if (bVar1 == 0xff) {
        if ((*puVar21 & 0x4000) != 0) goto LAB_0001bfac;
        FUN_000179b4();
        printf((char *)(DAT_0001cd20 + 0x1bf5c),(uint)pbVar16[1],(uint)pbVar16[2]);
        iVar19 = *(int *)(param_2 + 8) + 2;
        uVar11 = *(ushort *)(DAT_0001cd24 + 0x1bf70);
        if (uVar11 == 0xffff) {
          uVar11 = *(ushort *)((int)puVar21 + 10);
        }
        iVar10 = *(int *)(param_2 + 0xc) + -2;
        if (uVar11 == 10) {
          *(int *)(param_2 + 8) = iVar19;
          *(int *)(param_2 + 0xc) = iVar10;
          FUN_0002f200(param_1 + 1,param_2);
          goto LAB_0001bfac;
        }
        if (uVar11 < 0xb) {
          bVar23 = uVar11 == 0;
LAB_0001bf94:
          if (!bVar23) goto LAB_0001beac;
        }
        else if (uVar11 != 0x25) {
          bVar23 = uVar11 == 0x30;
          goto LAB_0001bf94;
        }
        *(int *)(param_2 + 8) = iVar19;
        *(int *)(param_2 + 0xc) = iVar10;
        FUN_0002ec5c(param_1 + 1,param_2);
        goto LAB_0001bfac;
      }
      FUN_000179b4();
      bVar2 = pbVar16[2];
      bVar3 = pbVar16[1];
      pcVar6 = (char *)(DAT_0001cd28 + 0x1c004);
    }
    printf(pcVar6,(uint)bVar3,(uint)bVar2);
  }
LAB_0001beac:
  iVar19 = *(int *)(param_2 + 8);
  *(int *)(param_2 + 8) = iVar19 + 2;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -2;
  if (bVar1 == 0xe) {
    if (*(short *)(iVar19 + 3) == 0x1001) {
      *(undefined2 *)(DAT_0001cd18 + 0x1bef4) = *(undefined2 *)(iVar19 + 10);
    }
  }
  else if (bVar1 == 5) {
    FUN_0002027c(*(undefined2 *)(iVar19 + 3));
  }
  iVar18 = DAT_0001cfec;
  iVar10 = DAT_0001cf3c;
  iVar19 = DAT_0001cd40;
  if ((*puVar21 & 0x200) == 0) goto switchD_0001c020_default;
  switch(bVar1) {
  case 1:
    FUN_00017fa8(param_1 + 1,param_2);
    goto LAB_0001bfac;
  case 2:
    iVar7 = FUN_000175e4(param_2);
    for (iVar10 = 0; iVar10 < iVar7; iVar10 = iVar10 + 1) {
      iVar18 = *(int *)(param_2 + 8);
      FUN_0001791c(iVar18,auStack_40);
      FUN_000179b4(param_1 + 1,param_2);
      printf((char *)(iVar19 + 0x1c270),auStack_40,(uint)*(byte *)(iVar18 + 6),
             (uint)*(ushort *)(iVar18 + 0xc),(uint)*(byte *)(iVar18 + 0xb),
             (uint)*(byte *)(iVar18 + 10),(uint)*(byte *)(iVar18 + 9));
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xe;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0xe;
    }
    goto LAB_0001bfac;
  case 3:
    pbVar16 = *(byte **)(param_2 + 8);
    FUN_0001791c(pbVar16 + 3,auStack_40);
    FUN_000179b4(param_1 + 1,param_2);
    uVar17 = FUN_00017804(pbVar16[9]);
    printf((char *)(DAT_0001cd44 + 0x1c334),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1),auStack_40
           ,uVar17,(uint)pbVar16[10]);
    if (*pbVar16 == 0) goto LAB_0001bfac;
    FUN_000179b4(param_1 + 1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)(DAT_0001cd48 + (uint)*pbVar16 * 4 + 0x1c748);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001cd50 + 0x1c380);
    }
    pcVar6 = (char *)(DAT_0001cd4c + 0x1c374);
    break;
  case 4:
    iVar19 = *(int *)(param_2 + 8);
    FUN_0001791c(iVar19,auStack_40);
    FUN_000179b4(param_1 + 1,param_2);
    uVar17 = FUN_00017804(*(undefined1 *)(iVar19 + 9));
    printf((char *)(DAT_0001cd54 + 0x1c3c4),auStack_40,(uint)*(byte *)(iVar19 + 8),
           (uint)*(byte *)(iVar19 + 7),(uint)*(byte *)(iVar19 + 6),uVar17);
    goto LAB_0001bfac;
  case 5:
    goto LAB_0001c3d0;
  case 6:
    goto LAB_0001c494;
  case 7:
    FUN_0001803c(param_1 + 1,param_2);
    goto LAB_0001bfac;
  case 8:
    pbVar16 = *(byte **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    printf((char *)(DAT_0001cd84 + 0x1c558),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1),
           (uint)pbVar16[3]);
    if (*pbVar16 == 0) goto LAB_0001bfac;
    FUN_000179b4(param_1 + 1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)(DAT_0001cd88 + (uint)*pbVar16 * 4 + 0x1c96c);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001cd90 + 0x1c5a4);
    }
    pcVar6 = (char *)(DAT_0001cd8c + 0x1c598);
    break;
  case 9:
    goto LAB_0001c494;
  case 10:
    pbVar16 = *(byte **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    printf((char *)(DAT_0001cd74 + 0x1c4d0),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1),
           (uint)pbVar16[3]);
    if (*pbVar16 == 0) goto LAB_0001bfac;
    FUN_000179b4(param_1 + 1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)(DAT_0001cd78 + (uint)*pbVar16 * 4 + 0x1c8e4);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001cd80 + 0x1c51c);
    }
    pcVar6 = (char *)(DAT_0001cd7c + 0x1c510);
    break;
  case 0xb:
    pbVar16 = *(byte **)(param_2 + 8);
    param_1 = param_1 + 1;
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_0001cd94 + 0x1c5cc),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1));
    iVar19 = DAT_0001cda4;
    if (*pbVar16 == 0) {
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001cda8 + 0x1c638));
      pbVar15 = pbVar16 + 3;
      do {
        pbVar14 = pbVar15 + 1;
        printf((char *)(iVar19 + 0x1c630),(uint)*pbVar15);
        pbVar15 = pbVar14;
      } while (pbVar16 + 0xb != pbVar14);
      goto LAB_0001c64c;
    }
    FUN_000179b4(param_1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)(DAT_0001cd98 + (uint)*pbVar16 * 4 + 0x1c9e0);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001cda0 + 0x1c618);
    }
    pcVar6 = (char *)(DAT_0001cd9c + 0x1c60c);
    break;
  case 0xc:
    pbVar16 = *(byte **)(param_2 + 8);
    param_1 = param_1 + 1;
    uVar22 = (uint)*(ushort *)(pbVar16 + 4);
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_0001cdac + 0x1c684),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1));
    if (*pbVar16 == 0) {
      FUN_000179b4(param_1,param_2);
      uVar17 = thunk_FUN_00033c08(pbVar16[3]);
      printf((char *)(DAT_0001cdbc + 0x1c6f4),uVar17,(uint)pbVar16[3],(uint)*(ushort *)(pbVar16 + 6)
            );
      FUN_000179b4(param_1,param_2);
      puVar9 = (undefined1 *)FUN_00030970(uVar22);
      pcVar6 = (char *)(DAT_0001cdc0 + 0x1c71c);
      goto LAB_0001c718;
    }
    FUN_000179b4(param_1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)(DAT_0001cdb0 + (uint)*pbVar16 * 4 + 0x1ca98);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001cdb8 + 0x1c6d0);
    }
    pcVar6 = (char *)(DAT_0001cdb4 + 0x1c6c4);
    break;
  case 0xd:
    pbVar16 = *(byte **)(param_2 + 8);
    param_1 = param_1 + 1;
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_0001cdc4 + 0x1c74c),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1),
           (uint)pbVar16[3]);
    if (*pbVar16 == 0) {
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001cdd4 + 0x1c7ac),(uint)pbVar16[4]);
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001cdd8 + 0x1c7c8),*(undefined4 *)(pbVar16 + 5));
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001cddc + 0x1c7e4),*(undefined4 *)(pbVar16 + 9));
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001cde0 + 0x1c800),*(undefined4 *)(pbVar16 + 0xd));
      FUN_000179b4(param_1,param_2);
      puVar9 = *(undefined1 **)(pbVar16 + 0x11);
      pcVar6 = (char *)(DAT_0001cde4 + 0x1c81c);
    }
    else {
      FUN_000179b4(param_1,param_2);
      if (*pbVar16 < 0x40) {
        puVar9 = *(undefined1 **)(DAT_0001cdc8 + (uint)*pbVar16 * 4 + 0x1cb60);
      }
      else {
        puVar9 = (undefined1 *)(DAT_0001cdd0 + 0x1c798);
      }
      pcVar6 = (char *)(DAT_0001cdcc + 0x1c78c);
    }
    break;
  case 0xe:
    FUN_000185b0(param_1 + 1,param_2);
    goto LAB_0001bfac;
  case 0xf:
    pbVar16 = *(byte **)(param_2 + 8);
    uVar11 = *(ushort *)(pbVar16 + 2);
    if ((uVar11 >> 10 == 0x3f) && ((*puVar21 & 0x4000) != 0)) goto LAB_0001bfac;
    FUN_000179b4(param_1 + 1,param_2);
    uVar17 = FUN_0001762c((uint)uVar11);
    printf((char *)(DAT_0001cd2c + 0x1c1c0),uVar17,(uint)(uVar11 >> 10),uVar11 & 0x3ff,
           (uint)*pbVar16,(uint)pbVar16[1]);
    if (*pbVar16 == 0) goto LAB_0001bfac;
    FUN_000179b4(param_1 + 1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)(DAT_0001cd30 + (uint)*pbVar16 * 4 + 0x1c5dc);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001cd38 + 0x1c218);
    }
    pcVar6 = (char *)(DAT_0001cd34 + 0x1c208);
    break;
  case 0x10:
    pbVar16 = *(byte **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    puVar9 = (undefined1 *)(uint)*pbVar16;
    pcVar6 = (char *)(DAT_0001cd3c + 0x1c238);
    break;
  case 0x11:
    goto LAB_0001c238;
  case 0x12:
    pbVar16 = *(byte **)(param_2 + 8);
    param_1 = param_1 + 1;
    FUN_000179b4(param_1,param_2);
    FUN_0001791c(pbVar16 + 1,auStack_40);
    printf((char *)(DAT_0001cde8 + 0x1c858),(uint)*pbVar16,auStack_40,(uint)pbVar16[7]);
    if (*pbVar16 == 0) {
      FUN_000179b4(param_1,param_2);
      if (pbVar16[7] == 0) {
        puVar9 = (undefined1 *)(DAT_0001ce00 + 0x1c8dc);
      }
      else if (pbVar16[7] == 1) {
        puVar9 = (undefined1 *)(DAT_0001ce04 + 0x1c8e8);
      }
      else {
        puVar9 = (undefined1 *)(DAT_0001cdf8 + 0x1c8c8);
      }
      pcVar6 = (char *)(DAT_0001cdfc + 0x1c8d0);
    }
    else {
      FUN_000179b4(param_1,param_2);
      if (*pbVar16 < 0x40) {
        puVar9 = *(undefined1 **)(DAT_0001cdec + (uint)*pbVar16 * 4 + 0x1cc6c);
      }
      else {
        puVar9 = (undefined1 *)(DAT_0001cdf4 + 0x1c8a4);
      }
      pcVar6 = (char *)(DAT_0001cdf0 + 0x1c898);
    }
    break;
  case 0x13:
    FUN_00017e54(param_1 + 1,param_2);
    goto LAB_0001bfac;
  case 0x14:
    pbVar16 = *(byte **)(param_2 + 8);
    param_1 = param_1 + 1;
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_0001ce08 + 0x1c92c),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1),
           (uint)pbVar16[3],(uint)*(ushort *)(pbVar16 + 4));
    if (*pbVar16 == 0) {
      FUN_000179b4(param_1,param_2);
      switch(pbVar16[3]) {
      case 0:
        puVar9 = (undefined1 *)(DAT_0001ce2c + 0x1c9e0);
        break;
      case 1:
        puVar9 = (undefined1 *)(DAT_0001ce18 + 0x1c9a8);
        break;
      case 2:
        puVar9 = (undefined1 *)(DAT_0001ce20 + 0x1c9bc);
        break;
      case 3:
        puVar9 = (undefined1 *)(DAT_0001ce24 + 0x1c9c8);
        break;
      default:
        puVar9 = (undefined1 *)(DAT_0001ce28 + 0x1c9d4);
      }
      pcVar6 = (char *)(DAT_0001ce1c + 0x1c9b0);
    }
    else {
      FUN_000179b4(param_1,param_2);
      if (*pbVar16 < 0x40) {
        puVar9 = *(undefined1 **)((int)&DAT_0001cd40 + DAT_0001ce0c + (uint)*pbVar16 * 4);
      }
      else {
        puVar9 = (undefined1 *)(DAT_0001ce14 + 0x1c978);
      }
      pcVar6 = (char *)(DAT_0001ce10 + 0x1c96c);
    }
    break;
  case 0x15:
    FUN_00017cf0(param_1 + 1,param_2);
    goto LAB_0001bfac;
  case 0x16:
    goto LAB_0001c9f0;
  case 0x17:
    goto LAB_0001c9f0;
  case 0x18:
    iVar19 = *(int *)(param_2 + 8);
    pcVar6 = (char *)(DAT_0001ce34 + 0x1ca40);
    __format = (char *)(DAT_0001ce38 + 0x1ca48);
    FUN_000179b4(param_1 + 1,param_2);
    pbVar16 = (byte *)(iVar19 + 6);
    FUN_0001791c(iVar19,auStack_40);
    printf((char *)(DAT_0001ce3c + 0x1ca6c),auStack_40);
    do {
      if ((*puVar21 & 0x4000) == 0) {
        printf(pcVar6,(uint)*pbVar16);
      }
      else {
        printf(__format);
      }
      pbVar16 = pbVar16 + 1;
    } while ((byte *)(iVar19 + 0x16) != pbVar16);
    printf((char *)(DAT_0001ce40 + 0x1ca9c),(uint)*(byte *)(iVar19 + 0x16));
    FUN_000179b4(param_1 + 1,param_2);
    switch(*(undefined1 *)(iVar19 + 0x16)) {
    case 0:
      puVar9 = (undefined1 *)(DAT_0001ce64 + 0x1cb4c);
      break;
    case 1:
      puVar9 = (undefined1 *)(DAT_0001ce44 + 0x1caf0);
      break;
    case 2:
      puVar9 = (undefined1 *)(DAT_0001ce4c + 0x1cb04);
      break;
    case 3:
      puVar9 = (undefined1 *)(DAT_0001ce50 + 0x1cb10);
      break;
    case 4:
      puVar9 = (undefined1 *)(DAT_0001ce54 + 0x1cb1c);
      break;
    case 5:
      puVar9 = (undefined1 *)(DAT_0001ce58 + 0x1cb28);
      break;
    case 6:
      puVar9 = (undefined1 *)(DAT_0001ce5c + 0x1cb34);
      break;
    default:
      puVar9 = (undefined1 *)(DAT_0001ce60 + 0x1cb40);
    }
    pcVar6 = (char *)(DAT_0001ce48 + 0x1caf8);
    break;
  case 0x19:
    param_1 = param_1 + 1;
    goto LAB_0001c150;
  case 0x1a:
    puVar9 = *(undefined1 **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    puVar9 = (undefined1 *)FUN_00017804(*puVar9);
    pcVar6 = (char *)(DAT_0001ce68 + 0x1cb74);
    break;
  case 0x1b:
    puVar20 = *(ushort **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    uVar22 = (uint)(byte)puVar20[1];
    puVar9 = (undefined1 *)(uint)*puVar20;
    pcVar6 = (char *)(DAT_0001ce6c + 0x1cb98);
    goto LAB_0001c718;
  case 0x1c:
    pbVar16 = *(byte **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    printf((char *)(DAT_0001ce70 + 0x1cbc4),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1),
           (uint)*(ushort *)(pbVar16 + 3));
    if (*pbVar16 == 0) goto LAB_0001bfac;
    FUN_000179b4(param_1 + 1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)((int)&DAT_0001cfd8 + DAT_0001ce74 + (uint)*pbVar16 * 4);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001ce7c + 0x1cc10);
    }
    pcVar6 = (char *)(DAT_0001ce78 + 0x1cc04);
    break;
  case 0x1d:
    pbVar16 = *(byte **)(param_2 + 8);
    param_1 = param_1 + 1;
    uVar11 = *(ushort *)(pbVar16 + 3);
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_0001ce80 + 0x1cc40),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1),
           (uint)uVar11);
    if (*pbVar16 == 0) {
      __ptr = (void *)FUN_0003392c((uint)uVar11);
      if (__ptr != (void *)0x0) {
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_0001ce90 + 0x1ccb8),__ptr);
        free(__ptr);
      }
      goto LAB_0001bfac;
    }
    FUN_000179b4(param_1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)(DAT_0001ce84 + (uint)*pbVar16 * 4 + 0x1d054);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001ce8c + 0x1cc8c);
    }
    pcVar6 = (char *)(DAT_0001ce88 + 0x1cc80);
    break;
  case 0x1e:
LAB_0001c238:
    FUN_00017ec8(param_1 + 1,param_2);
    goto LAB_0001bfac;
  case 0x1f:
  default:
switchD_0001c020_default:
    FUN_000149a8(iVar7,param_2);
    goto LAB_0001bfac;
  case 0x20:
    iVar19 = *(int *)(param_2 + 8);
    puVar9 = auStack_40;
    FUN_000179b4(param_1 + 1,param_2);
    FUN_0001791c(iVar19,puVar9);
    uVar22 = (uint)*(byte *)(iVar19 + 6);
    pcVar6 = (char *)((int)&DAT_0001ccf8 + DAT_0001ce94);
    goto LAB_0001c718;
  case 0x21:
    pbVar16 = *(byte **)(param_2 + 8);
    param_1 = param_1 + 1;
    FUN_000179b4(param_1,param_2);
    if (pbVar16[4] == 0) {
      iVar19 = DAT_0001cea8 + 0x1d0a0;
    }
    else {
      iVar19 = DAT_0001ce98 + 0x1d048;
    }
    printf((char *)(DAT_0001ce9c + 0x1d054),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1),
           (uint)pbVar16[3],iVar19);
    if (*pbVar16 == 0) {
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001ceb0 + 0x1d0c0),(uint)pbVar16[5]);
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001ceb4 + 0x1d0dc),*(undefined4 *)(pbVar16 + 6));
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001ceb8 + 0x1d0f8),*(undefined4 *)(pbVar16 + 10));
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001cebc + 0x1d114),*(undefined4 *)(pbVar16 + 0xe));
      FUN_000179b4(param_1,param_2);
      puVar9 = *(undefined1 **)(pbVar16 + 0x12);
      pcVar6 = (char *)(DAT_0001cec0 + 0x1d130);
    }
    else {
      FUN_000179b4(param_1,param_2);
      if (*pbVar16 < 0x40) {
        puVar9 = *(undefined1 **)(DAT_0001cea0 + (uint)*pbVar16 * 4 + 0x1d468);
      }
      else {
        puVar9 = (undefined1 *)(DAT_0001ceac + 0x1d0ac);
      }
      pcVar6 = (char *)(DAT_0001cea4 + 0x1d094);
    }
    break;
  case 0x22:
    uVar22 = FUN_000175e4(param_2);
    if (uVar22 != 0) {
      iVar19 = 0;
      if (*(uint *)(param_2 + 0xc) / uVar22 == 0xf) {
        pcVar6 = (char *)(DAT_0001cec4 + 0x1d168);
        do {
          iVar7 = *(int *)(param_2 + 8);
          iVar19 = iVar19 + 1;
          FUN_000179b4(param_1 + 1,param_2);
          FUN_0001791c(iVar7,auStack_40);
          printf(pcVar6,auStack_40,(uint)*(byte *)(iVar7 + 6),(uint)*(ushort *)(iVar7 + 0xc),
                 (uint)*(byte *)(iVar7 + 0xb),(uint)*(byte *)(iVar7 + 10),(uint)*(byte *)(iVar7 + 9)
                 ,(int)*(char *)(iVar7 + 0xe));
          *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xf;
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0xf;
        } while (iVar19 < (int)uVar22);
      }
      else {
        pcVar6 = (char *)(DAT_0001cec8 + 0x1d1e8);
        do {
          iVar7 = *(int *)(param_2 + 8);
          iVar19 = iVar19 + 1;
          FUN_000179b4(param_1 + 1,param_2);
          FUN_0001791c(iVar7,auStack_40);
          printf(pcVar6,auStack_40,(uint)*(byte *)(iVar7 + 6),(uint)*(ushort *)(iVar7 + 0xb),
                 (uint)*(byte *)(iVar7 + 10),(uint)*(byte *)(iVar7 + 9),(uint)*(byte *)(iVar7 + 8),
                 (int)*(char *)(iVar7 + 0xd));
          *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xe;
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0xe;
        } while (iVar19 < (int)uVar22);
      }
    }
    goto LAB_0001bfac;
  case 0x23:
    pbVar16 = *(byte **)(param_2 + 8);
    param_1 = param_1 + 1;
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_0001cecc + 0x1d290),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1),
           (uint)pbVar16[3],(uint)pbVar16[4]);
    iVar19 = DAT_0001cedc;
    if (*pbVar16 == 0) {
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001cee0 + 0x1d2fc));
      pbVar15 = pbVar16 + 5;
      do {
        pbVar14 = pbVar15 + 1;
        printf((char *)(iVar19 + 0x1d2f4),(uint)*pbVar15);
        pbVar15 = pbVar14;
      } while (pbVar16 + 0xd != pbVar14);
      goto LAB_0001c64c;
    }
    FUN_000179b4(param_1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)(DAT_0001ced0 + (uint)*pbVar16 * 4 + 0x1d6a4);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001ced8 + 0x1d2dc);
    }
    pcVar6 = (char *)(DAT_0001ced4 + 0x1d2d0);
    break;
  case 0x24:
    goto switchD_0001c020_default;
  case 0x25:
    goto switchD_0001c020_default;
  case 0x26:
    goto switchD_0001c020_default;
  case 0x27:
    goto switchD_0001c020_default;
  case 0x28:
    goto switchD_0001c020_default;
  case 0x29:
    goto switchD_0001c020_default;
  case 0x2a:
    goto switchD_0001c020_default;
  case 0x2b:
    goto switchD_0001c020_default;
  case 0x2c:
    pbVar16 = *(byte **)(param_2 + 8);
    param_1 = param_1 + 1;
    FUN_0001791c(pbVar16 + 3,auStack_40);
    FUN_000179b4(param_1,param_2);
    if (pbVar16[9] == 0) {
      iVar19 = DAT_0001cef4 + 0x1d3b4;
    }
    else {
      iVar19 = DAT_0001cee4 + 0x1d358;
    }
    printf((char *)(DAT_0001cee8 + 0x1d368),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1),auStack_40
           ,iVar19);
    if (*pbVar16 == 0) {
      FUN_000179b4(param_1,param_2);
      switch(pbVar16[0x10]) {
      case 0:
        puVar9 = (undefined1 *)(DAT_0001cf10 + 0x1d42c);
        break;
      case 1:
        puVar9 = (undefined1 *)(DAT_0001cefc + 0x1d3f4);
        break;
      case 2:
        puVar9 = (undefined1 *)(DAT_0001cf04 + 0x1d408);
        break;
      case 3:
      default:
        puVar9 = (undefined1 *)(DAT_0001cf0c + 0x1d420);
        break;
      case 4:
        puVar9 = (undefined1 *)(DAT_0001cf08 + 0x1d414);
      }
      pcVar6 = (char *)(DAT_0001cf00 + 0x1d3fc);
    }
    else {
      FUN_000179b4(param_1,param_2);
      if (*pbVar16 < 0x40) {
        puVar9 = *(undefined1 **)(DAT_0001ceec + (uint)*pbVar16 * 4 + 0x1d77c);
      }
      else {
        puVar9 = (undefined1 *)(DAT_0001cef8 + 0x1d3c0);
      }
      pcVar6 = (char *)(DAT_0001cef0 + 0x1d3a8);
    }
    break;
  case 0x2d:
    pbVar16 = *(byte **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    printf((char *)(DAT_0001cf14 + 0x1d454),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1));
    if (*pbVar16 == 0) goto LAB_0001bfac;
    FUN_000179b4(param_1 + 1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)(DAT_0001cf18 + (uint)*pbVar16 * 4 + 0x1d868);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001cf20 + 0x1d4a0);
    }
    pcVar6 = (char *)(DAT_0001cf1c + 0x1d494);
    break;
  case 0x2e:
    pbVar16 = *(byte **)(param_2 + 8);
    param_1 = param_1 + 1;
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_0001cf24 + 0x1d4c8),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1));
    if (*pbVar16 == 0) {
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001cf34 + 0x1d52c),(uint)*(ushort *)(pbVar16 + 3),
             (uint)*(ushort *)(pbVar16 + 5));
      FUN_000179b4(param_1,param_2);
      uVar22 = (uint)*(ushort *)(pbVar16 + 9);
      puVar9 = (undefined1 *)(uint)*(ushort *)(pbVar16 + 7);
      pcVar6 = (char *)(DAT_0001cf38 + 0x1d54c);
      goto LAB_0001c718;
    }
    FUN_000179b4(param_1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)(DAT_0001cf28 + (uint)*pbVar16 * 4 + 0x1d8dc);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001cf30 + 0x1d514);
    }
    pcVar6 = (char *)(DAT_0001cf2c + 0x1d508);
    break;
  case 0x2f:
    iVar19 = FUN_000175e4(param_2);
    for (iVar7 = 0; iVar7 < iVar19; iVar7 = iVar7 + 1) {
      iVar18 = *(int *)(param_2 + 8);
      FUN_0001791c(iVar18,auStack_40);
      FUN_000179b4(param_1 + 1,param_2);
      printf((char *)(iVar10 + 0x1d564),auStack_40,(uint)*(byte *)(iVar18 + 6),
             (uint)*(ushort *)(iVar18 + 0xb),(uint)*(byte *)(iVar18 + 10),
             (uint)*(byte *)(iVar18 + 9),(uint)*(byte *)(iVar18 + 8),(int)*(char *)(iVar18 + 0xd));
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xe;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0xe;
      FUN_00018538(param_1 + 1,param_2);
    }
    goto LAB_0001bfac;
  case 0x30:
LAB_0001c494:
    FUN_00018178(param_1 + 1,param_2);
    goto LAB_0001bfac;
  case 0x31:
    goto LAB_0001c9f0;
  case 0x32:
    FUN_00017b08(param_1 + 1,param_2);
    goto LAB_0001bfac;
  case 0x33:
    goto LAB_0001d644;
  case 0x34:
    goto LAB_0001c9f0;
  case 0x35:
LAB_0001c9f0:
    uVar17 = *(undefined4 *)(param_2 + 8);
    puVar9 = auStack_40;
    FUN_000179b4(param_1 + 1,param_2);
    FUN_0001791c(uVar17,puVar9);
    pcVar6 = (char *)(DAT_0001ce30 + 0x1ca20);
    break;
  case 0x36:
    FUN_00018220(param_1 + 1,param_2);
    goto LAB_0001bfac;
  case 0x37:
    goto switchD_0001c020_default;
  case 0x38:
    puVar20 = *(ushort **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    uVar22 = (uint)puVar20[1];
    puVar9 = (undefined1 *)(uint)*puVar20;
    pcVar6 = (char *)(DAT_0001cf40 + 0x1d624);
    goto LAB_0001c718;
  case 0x39:
    FUN_00017ec8(param_1 + 1,param_2);
    goto LAB_0001bfac;
  case 0x3a:
    goto switchD_0001c020_default;
  case 0x3b:
LAB_0001d644:
    iVar19 = *(int *)(param_2 + 8);
    puVar9 = auStack_40;
    FUN_000179b4(param_1 + 1,param_2);
    FUN_0001791c(iVar19,puVar9);
    uVar22 = *(uint *)(iVar19 + 6);
    pcVar6 = (char *)(DAT_0001cf44 + 0x1d678);
    goto LAB_0001c718;
  case 0x3c:
    iVar19 = *(int *)(param_2 + 8);
    puVar9 = auStack_40;
    FUN_000179b4(param_1 + 1,param_2);
    FUN_0001791c(iVar19,puVar9);
    uVar22 = (uint)*(byte *)(iVar19 + 6);
    pcVar6 = (char *)(DAT_0001cf48 + 0x1d6ac);
    goto LAB_0001c718;
  case 0x3d:
    iVar7 = *(int *)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    FUN_0001791c(iVar7,auStack_40);
    printf((char *)(DAT_0001cf4c + 0x1d6e0),auStack_40);
    iVar19 = DAT_0001cf50;
    FUN_000179b4(param_1 + 1,param_2);
    printf((char *)(DAT_0001cf54 + 0x1d708));
    pbVar16 = (byte *)(iVar7 + 6);
    do {
      pbVar15 = pbVar16 + 1;
      printf((char *)(iVar19 + 0x1d700),(uint)*pbVar16);
      pbVar16 = pbVar15;
    } while ((byte *)(iVar7 + 0xe) != pbVar15);
LAB_0001c64c:
    putchar(10);
    goto LAB_0001bfac;
  case 0x3e:
    pbVar16 = *(byte **)(param_2 + 8);
    bVar1 = *pbVar16;
    *(byte **)(param_2 + 8) = pbVar16 + 1;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
    FUN_000179b4(param_1 + 1,param_2);
    puts(*(char **)(DAT_0001cf58 + (uint)bVar1 * 4 + 0x1dd74));
    iVar10 = DAT_0001cf70;
    iVar19 = DAT_0001cf6c;
    iVar7 = param_1 + 1;
    switch(*pbVar16) {
    case 1:
      pbVar16 = *(byte **)(param_2 + 8);
      FUN_000179b4(param_1 + 2,param_2);
      if (pbVar16[3] == 0) {
        iVar19 = DAT_0001cf5c + 0x1d7b8;
      }
      else {
        iVar19 = DAT_0001cf68 + 0x1d804;
      }
      printf((char *)(DAT_0001cf60 + 0x1d7c0),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1),iVar19);
      puVar9 = auStack_40;
      FUN_000179b4(param_1 + 2,param_2);
      FUN_0001791c(pbVar16 + 5,puVar9);
      uVar22 = FUN_0001785c(pbVar16[4]);
      pcVar6 = (char *)(DAT_0001cf64 + 0x1d7f8);
      goto LAB_0001c718;
    case 2:
      cVar5 = FUN_000175e4(param_2);
      param_1 = param_1 + 2;
      pcVar6 = (char *)(DAT_0001cf74 + 0x1d830);
      while( true ) {
        cVar5 = cVar5 + -1;
        if (cVar5 == -1) break;
        puVar9 = *(undefined1 **)(param_2 + 8);
        FUN_0001791c(puVar9 + 2,auStack_40);
        FUN_000179b4(param_1,param_2);
        uVar17 = FUN_0001789c(*puVar9);
        printf((char *)(iVar19 + 0x1d824),uVar17);
        FUN_000179b4(param_1,param_2);
        uVar17 = FUN_0001785c(puVar9[1]);
        printf((char *)(iVar10 + 0x1d82c),auStack_40,uVar17);
        for (iVar7 = 0; uVar22 = (uint)(byte)puVar9[8], iVar7 < (int)uVar22;
            iVar7 = iVar7 + bVar1 + 1) {
          bVar1 = puVar9[iVar7 + 9];
          FUN_0001831c(param_1,param_2,puVar9 + iVar7 + 9);
        }
        *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + uVar22 + 9;
        *(uint *)(param_2 + 0xc) = (*(int *)(param_2 + 0xc) + -9) - uVar22;
        FUN_000179b4(param_1,param_2);
        printf(pcVar6,(int)*(char *)(*(int *)(param_2 + 0xc) + *(int *)(param_2 + 8) + -1));
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
      }
      break;
    case 3:
      pbVar16 = *(byte **)(param_2 + 8);
      FUN_000179b4(param_1 + 2,param_2);
      printf((char *)(DAT_0001cf78 + 0x1d95c),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1));
      FUN_000179b4(param_1 + 2,param_2);
      dVar26 = (double)VectorSignedToFloat((uint)*(ushort *)(pbVar16 + 3),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar24 = (double)VectorSignedToFloat((uint)*(ushort *)(pbVar16 + 7),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar25 = (double)VectorSignedToFloat((uint)*(ushort *)(pbVar16 + 5),
                                           (byte)(in_fpscr >> 0x16) & 3);
      printf((char *)(DAT_0001cf7c + 0x1d990),extraout_r1,SUB84(dVar26 * 1.25,0),
             (int)((ulonglong)(dVar26 * 1.25) >> 0x20),dVar25 * 1.25,dVar24 * 10.0);
      break;
    case 4:
      pbVar16 = *(byte **)(param_2 + 8);
      param_1 = param_1 + 2;
      FUN_000179b4(param_1,param_2);
      printf((char *)(DAT_0001cf80 + 0x1d9e4),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1));
      iVar19 = DAT_0001cf90;
      if (*pbVar16 == 0) {
        FUN_000179b4(param_1,param_2);
        printf((char *)(DAT_0001cf94 + 0x1da50));
        pbVar15 = pbVar16 + 3;
        do {
          pbVar14 = pbVar15 + 1;
          printf((char *)(iVar19 + 0x1da48),(uint)*pbVar15);
          pbVar15 = pbVar14;
        } while (pbVar16 + 0xb != pbVar14);
        goto LAB_0001c64c;
      }
      FUN_000179b4(param_1,param_2);
      if (*pbVar16 < 0x40) {
        puVar9 = *(undefined1 **)(DAT_0001cf84 + (uint)*pbVar16 * 4 + 0x1ddf8);
      }
      else {
        puVar9 = (undefined1 *)(DAT_0001cf8c + 0x1da30);
      }
      pcVar6 = (char *)(DAT_0001cf88 + 0x1da24);
      goto LAB_0001c204;
    default:
      goto switchD_0001c020_default;
    }
    goto LAB_0001bfac;
  case 0x3f:
    goto switchD_0001c020_default;
  case 0x40:
    pbVar16 = *(byte **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    printf((char *)(DAT_0001cf98 + 0x1daa0),(uint)*pbVar16,(uint)pbVar16[1]);
    if (*pbVar16 == 0) goto LAB_0001bfac;
    FUN_000179b4(param_1 + 1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)(DAT_0001cf9c + (uint)*pbVar16 * 4 + 0x1deb4);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001cfa4 + 0x1daec);
    }
    pcVar6 = (char *)(DAT_0001cfa0 + 0x1dae0);
    break;
  case 0x41:
    goto LAB_0001dbd4;
  case 0x42:
    pbVar16 = *(byte **)(param_2 + 8);
    param_1 = param_1 + 1;
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_0001cfa8 + 0x1db18),(uint)*pbVar16,(uint)pbVar16[1],(uint)pbVar16[2]);
    if (*pbVar16 == 0) {
      if (pbVar16[2] == 0) goto LAB_0001bfac;
      FUN_000179b4(param_1,param_2);
      if (pbVar16[2] < 0x40) {
        puVar9 = *(undefined1 **)(DAT_0001cfb8 + (uint)pbVar16[2] * 4 + 0x1df78);
      }
      else {
        puVar9 = (undefined1 *)(DAT_0001cfc0 + 0x1dbb0);
      }
      pcVar6 = (char *)(DAT_0001cfbc + 0x1dba4);
    }
    else {
      FUN_000179b4(param_1,param_2);
      if (*pbVar16 < 0x40) {
        puVar9 = *(undefined1 **)(DAT_0001cfac + (uint)*pbVar16 * 4 + 0x1df2c);
      }
      else {
        puVar9 = (undefined1 *)(DAT_0001cfb4 + 0x1db64);
      }
      pcVar6 = (char *)(DAT_0001cfb0 + 0x1db58);
    }
    break;
  case 0x43:
    pbVar16 = *(byte **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    uVar22 = (uint)pbVar16[1];
    puVar9 = (undefined1 *)(uint)*pbVar16;
    pcVar6 = (char *)(DAT_0001cfc4 + 0x1dbd4);
LAB_0001c718:
    printf(pcVar6,puVar9,uVar22);
    goto LAB_0001bfac;
  case 0x44:
LAB_0001dbd4:
    pbVar16 = *(byte **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    puVar9 = (undefined1 *)(uint)*pbVar16;
    pcVar6 = (char *)(DAT_0001cfc8 + 0x1dbf4);
    break;
  case 0x45:
    pbVar16 = *(byte **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    printf((char *)(DAT_0001cfcc + 0x1dc28),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1),
           (uint)pbVar16[3],(uint)pbVar16[4]);
    if (*pbVar16 == 0) goto LAB_0001bfac;
    FUN_000179b4(param_1 + 1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)(DAT_0001cfd0 + (uint)*pbVar16 * 4 + 0x1e03c);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001cfd8 + 0x1dc74);
    }
    pcVar6 = (char *)(DAT_0001cfd4 + 0x1dc68);
    break;
  case 0x46:
LAB_0001c3d0:
    pbVar16 = *(byte **)(param_2 + 8);
    param_1 = param_1 + 1;
    FUN_000179b4(param_1,param_2);
    printf((char *)(DAT_0001cd58 + 0x1c3fc),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1),
           (uint)pbVar16[3]);
    if (*pbVar16 == 0) {
      if (pbVar16[3] == 0) goto LAB_0001bfac;
      FUN_000179b4(param_1,param_2);
      if (pbVar16[3] < 0x40) {
        puVar9 = *(undefined1 **)(DAT_0001cd68 + (uint)pbVar16[3] * 4 + 0x1c85c);
      }
      else {
        puVar9 = (undefined1 *)(DAT_0001cd70 + 0x1c494);
      }
      pcVar6 = (char *)(DAT_0001cd6c + 0x1c488);
    }
    else {
      FUN_000179b4(param_1,param_2);
      if (*pbVar16 < 0x40) {
        puVar9 = *(undefined1 **)(DAT_0001cd5c + (uint)*pbVar16 * 4 + 0x1c810);
      }
      else {
        puVar9 = (undefined1 *)(DAT_0001cd64 + 0x1c448);
      }
      pcVar6 = (char *)(DAT_0001cd60 + 0x1c43c);
    }
    break;
  case 0x47:
    pbVar16 = *(byte **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    printf((char *)(DAT_0001cfdc + 0x1dc9c),(uint)*pbVar16,(uint)*(ushort *)(pbVar16 + 1));
    if (*pbVar16 == 0) goto LAB_0001bfac;
    FUN_000179b4(param_1 + 1,param_2);
    if (*pbVar16 < 0x40) {
      puVar9 = *(undefined1 **)(DAT_0001cfe0 + (uint)*pbVar16 * 4 + 0x1e0b0);
    }
    else {
      puVar9 = (undefined1 *)(DAT_0001cfe8 + 0x1dce8);
    }
    pcVar6 = (char *)(DAT_0001cfe4 + 0x1dcdc);
    break;
  case 0x48:
    puVar20 = *(ushort **)(param_2 + 8);
    FUN_000179b4(param_1 + 1,param_2);
    printf((char *)(DAT_0001cff0 + 0x1dd1c),(uint)*puVar20,(uint)(byte)puVar20[1]);
    for (iVar19 = 0; iVar19 < (int)(uint)(byte)puVar20[1]; iVar19 = iVar19 + 1) {
      FUN_000179b4(param_1 + 2,param_2);
      printf((char *)(iVar18 + 0x1dd20),(uint)*(ushort *)((int)puVar20 + iVar19 * 6 + 3),
             (uint)*(ushort *)((int)puVar20 + iVar19 * 6 + 5),
             (uint)*(ushort *)((int)puVar20 + iVar19 * 6 + 7));
    }
    goto LAB_0001bfac;
  }
LAB_0001c204:
  printf(pcVar6,puVar9);
LAB_0001bfac:
  if (local_2c == *piVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0001ded0 @ 0001ded0 size=108 ===== */

ushort * FUN_0001ded0(uint param_1)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  iVar1 = 0;
  puVar3 = (ushort *)(DAT_0001df3c + 0x1dee4);
  puVar2 = puVar3;
  do {
    if (*puVar2 == param_1) {
      return puVar2 + 2;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x1a;
  } while (iVar1 != 10);
  iVar1 = 0;
  do {
    if (*puVar3 == 0) {
      *puVar3 = (ushort)param_1;
      return puVar3 + 2;
    }
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 0x1a;
  } while (iVar1 != 10);
  return (ushort *)0x0;
}



/* ===== FUN_0001df40 @ 0001df40 size=152 ===== */

void FUN_0001df40(int param_1,undefined2 param_2,uint param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  
  iVar3 = 0;
  iVar2 = param_1 * 200 + DAT_0001dfd8 + 0x1e160;
  sVar7 = 1;
  iVar4 = iVar2;
  iVar5 = -1;
  do {
    if (((iVar5 != -1) || (iVar6 = iVar3, *(ushort *)(iVar4 + 2) != 0)) &&
       (iVar6 = iVar5, param_3 == *(ushort *)(iVar4 + 2))) {
      iVar6 = iVar3;
    }
    puVar1 = (ushort *)(iVar4 + 4);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 10;
    if (*puVar1 == param_4) {
      sVar7 = sVar7 + 1;
    }
    iVar5 = iVar6;
  } while (iVar3 != 0x14);
  if (iVar6 == -1) {
    return;
  }
  iVar4 = iVar2 + iVar6 * 10;
  *(undefined2 *)(iVar2 + iVar6 * 10) = param_2;
  *(short *)(iVar4 + 4) = (short)param_4;
  *(short *)(iVar4 + 2) = (short)param_3;
  *(short *)(iVar4 + 6) = sVar7;
  *(undefined1 *)(iVar4 + 8) = 0;
  return;
}



/* ===== FUN_0001dfdc @ 0001dfdc size=284 ===== */

void FUN_0001dfdc(uint param_1,ushort param_2,undefined2 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  undefined4 local_10;
  
  iVar3 = DAT_0001e10c;
  bVar7 = param_1 == 0;
  iVar1 = 0;
  piVar6 = *(int **)(DAT_0001e0f8 + 0x1dff0 + DAT_0001e0fc);
  local_10 = param_1;
  if (bVar7) {
    local_10 = (uint)param_2;
  }
  iVar4 = *piVar6;
  if (bVar7) {
    local_10 = CONCAT22(param_3,(undefined2)local_10);
  }
  else {
    local_10 = CONCAT22(local_10._2_2_,param_3);
  }
  uVar2 = local_10 & 0xffff;
  iVar5 = DAT_0001e100 + 0x1e220;
  if (!bVar7) {
    local_10 = (uint)param_2 << 0x10;
  }
  do {
    if (*(ushort *)(iVar5 + 2) == uVar2) {
      iVar1 = iVar1 * 10;
      iVar5 = DAT_0001e10c + 0x1e2d4 + iVar1;
      *(undefined2 *)(DAT_0001e10c + 0x1e2d4 + iVar1) = 0;
      *(undefined2 *)(iVar5 + 2) = 0;
      *(undefined2 *)(iVar5 + 4) = 0;
      *(undefined2 *)(iVar5 + 6) = 0;
      *(undefined1 *)(iVar3 + iVar1 + 0x1e2dc) = 0;
      break;
    }
    iVar1 = iVar1 + 1;
    iVar5 = iVar5 + 10;
  } while (iVar1 != 0x14);
  iVar3 = 0;
  iVar1 = DAT_0001e104 + 0x1e320;
  do {
    if (*(short *)(iVar1 + 2) == local_10._2_2_) {
      iVar1 = iVar3 * 10 + DAT_0001e108;
      iVar3 = DAT_0001e108 + iVar3 * 10;
      *(undefined2 *)(FUN_0001e28c + iVar1 + 200) = 0;
      *(undefined2 *)(FUN_0001e28c + iVar1 + 0xca) = 0;
      *(undefined2 *)(FUN_0001e28c + iVar1 + 0xcc) = 0;
      *(undefined2 *)(FUN_0001e28c + iVar1 + 0xce) = 0;
      *(undefined1 *)(iVar3 + 0x1e35c) = 0;
      break;
    }
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 10;
  } while (iVar3 != 0x14);
  if (iVar4 == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0001e110 @ 0001e110 size=56 ===== */

uint FUN_0001e110(uint *param_1,int param_2)

{
  if (param_2 == 2) {
    return (uint)(ushort)*param_1;
  }
  if (param_2 != 4) {
    if (param_2 == 1) {
      return (uint)(byte)*param_1;
    }
    return 0;
  }
  return *param_1;
}



/* ===== FUN_0001e148 @ 0001e148 size=120 ===== */

int FUN_0001e148(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (int)&DAT_0001e1c0 + DAT_0001e1d8;
  case 1:
    return DAT_0001e1c0 + 0x1e178;
  case 2:
    return DAT_0001e1c4 + 0x1e184;
  case 3:
    return DAT_0001e1c8 + 0x1e190;
  case 4:
    return DAT_0001e1cc + 0x1e19c;
  case 5:
    return DAT_0001e1d0 + 0x1e1a8;
  default:
    return DAT_0001e1d4 + 0x1e1b4;
  }
}



/* ===== FUN_0001e1dc @ 0001e1dc size=72 ===== */

int FUN_0001e1dc(int param_1)

{
  if (param_1 == 2) {
    return DAT_0001e228 + 0x1e20c;
  }
  if (param_1 != 3) {
    if (param_1 != 1) {
      return DAT_0001e224 + 0x1e200;
    }
    return (int)&DAT_0001e224 + DAT_0001e230;
  }
  return DAT_0001e22c + 0x1e218;
}



/* ===== FUN_0001e234 @ 0001e234 size=72 ===== */

int FUN_0001e234(int param_1)

{
  if (param_1 == 2) {
    return DAT_0001e280 + 0x1e264;
  }
  if (param_1 != 3) {
    if (param_1 != 1) {
      return DAT_0001e27c + 0x1e258;
    }
    return (int)&DAT_0001e27c + DAT_0001e288;
  }
  return DAT_0001e284 + 0x1e270;
}



/* ===== FUN_0001e28c @ 0001e28c size=308 ===== */

void FUN_0001e28c(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0001e3c0 + 0x1e29c + DAT_0001e3c4);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_0001e3c0 + 0x1e29c + DAT_0001e3c8);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_0001e3d8 + 0x1e3a4),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_0001e3cc + 0x1e338),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_0001e3d0 + 0x1e354),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_0001e3dc + 0x1e3b4));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_0001e3d4 + 0x1e380),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0001e3e0 @ 0001e3e0 size=296 ===== */

void FUN_0001e3e0(int param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  FUN_0001e28c(param_1,0,param_3,param_4,param_1,param_2,param_3);
  puts((char *)(DAT_0001e514 + 0x1e41c));
  for (; 2 < param_3; param_3 = param_3 - 3 & 0xffff) {
    FUN_0001e28c(param_1 + 1,0);
    switch(param_2[2]) {
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
    printf((char *)(DAT_0001e51c + 0x1e4b0),(uint)*param_2);
    param_2 = param_2 + 3;
  }
  return;
}



/* ===== FUN_0001e53c @ 0001e53c size=1112 ===== */

void FUN_0001e53c(undefined4 param_1,byte *param_2,int param_3,int param_4,short param_5,
                 short param_6)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char *__format;
  char *__format_00;
  short *psVar11;
  short *psVar12;
  int iVar13;
  
  iVar8 = DAT_0001e994;
  FUN_0001e28c(param_1,0);
  iVar6 = 200;
  pcVar10 = (char *)(DAT_0001e998 + 0x1e584);
  psVar12 = (short *)(param_4 * 200 + iVar8 + 0x1e774);
  __format = (char *)(DAT_0001e99c + 0x1e594);
  if (param_4 != 0) {
    iVar6 = 0;
  }
  iVar13 = 0;
  psVar11 = (short *)(iVar8 + 0x1e774 + iVar6);
  __format_00 = (char *)(DAT_0001e9a0 + 0x1e5ac);
  do {
    if (param_3 < 1) {
      putchar(10);
      return;
    }
    bVar1 = param_2[1];
    param_3 = param_3 - (bVar1 + 2);
    if ((char)*param_2 < '\0') {
      putchar(0x5b);
    }
    if (iVar13 != 0) {
      putchar(10);
      FUN_0001e28c(param_1,0);
    }
    uVar5 = *param_2 & 0x7f;
    switch(uVar5) {
    case 1:
      psVar7 = psVar12;
      do {
        if ((*psVar7 == param_5) && (psVar7[1] == param_6)) {
          *(undefined1 *)(psVar7 + 4) = 0;
        }
        psVar7 = psVar7 + 5;
      } while (psVar12 + 100 != psVar7);
      printf((char *)(DAT_0001e9a4 + 0x1e674));
      if (param_2[1] != 0) {
        uVar4 = FUN_0001e110(param_2 + 2);
        pcVar3 = (char *)(DAT_0001e9a8 + 0x1e698);
LAB_0001e694:
        printf(pcVar3,uVar4);
      }
      break;
    case 2:
      printf((char *)(DAT_0001e9b0 + 0x1e6c8));
      if (param_2[1] != 0) {
        uVar4 = FUN_0001e110(param_2 + 2);
        pcVar3 = (char *)(DAT_0001e9b4 + 0x1e6ec);
        goto LAB_0001e694;
      }
      break;
    case 3:
      printf((char *)(DAT_0001e9b8 + 0x1e6f8));
      if (param_2[1] != 0) {
        uVar5 = (uint)param_2[3];
        if (uVar5 == 1) {
          uVar9 = DAT_0001e9c4 + 0x1e744;
        }
        else if (uVar5 == 0) {
          uVar9 = DAT_0001e9c8 + 0x1e750;
        }
        else if (uVar5 == 2) {
          uVar9 = DAT_0001e9cc + 0x1e75c;
        }
        else {
          uVar9 = DAT_0001e9bc + 0x1e72c;
        }
        pcVar3 = (char *)(DAT_0001e9c0 + 0x1e734);
        goto LAB_0001e730;
      }
      break;
    case 4:
      bVar2 = param_2[2];
      uVar5 = (uint)bVar2;
      psVar7 = psVar11;
      do {
        if ((*psVar7 == param_5) && (psVar7[1] == param_6)) {
          *(byte *)(psVar7 + 4) = bVar2;
        }
        psVar7 = psVar7 + 5;
      } while (psVar11 + 100 != psVar7);
      switch(uVar5) {
      case 0:
        iVar8 = DAT_0001e9ec + 0x1e848;
        break;
      case 1:
        iVar8 = DAT_0001e9d0 + 0x1e7b8;
        break;
      case 2:
        iVar8 = DAT_0001e9dc + 0x1e818;
        break;
      case 3:
        iVar8 = DAT_0001e9e0 + 0x1e824;
        break;
      case 4:
        iVar8 = DAT_0001e9e4 + 0x1e830;
        break;
      default:
        iVar8 = DAT_0001e9e8 + 0x1e83c;
      }
      printf((char *)(DAT_0001e9d4 + 0x1e7c8),uVar5,iVar8);
      if (uVar5 - 1 < 4) {
        printf((char *)(DAT_0001e9d8 + 0x1e800),(uint)param_2[3],(uint)param_2[4],
               (uint)*(ushort *)(param_2 + 5),(uint)*(ushort *)(param_2 + 7),
               (uint)*(ushort *)(param_2 + 9));
      }
      putchar(0x29);
      break;
    case 5:
      bVar2 = param_2[1];
      uVar5 = (uint)param_2[2];
      printf((char *)(DAT_0001e9f0 + 0x1e85c));
      if (bVar2 != 0) {
        if (uVar5 == 0) {
          uVar9 = DAT_0001e9fc + 0x1e8a4;
        }
        else if (uVar5 == 1) {
          uVar9 = DAT_0001ea00 + 0x1e8b0;
        }
        else {
          uVar9 = DAT_0001e9f4 + 0x1e890;
        }
        pcVar3 = (char *)(DAT_0001e9f8 + 0x1e898);
        goto LAB_0001e730;
      }
      break;
    case 6:
      bVar2 = param_2[3];
      if (bVar2 == 1) {
        iVar8 = DAT_0001ea0c + 0x1e908;
      }
      else if (bVar2 == 0) {
        iVar8 = DAT_0001ea10 + 0x1e914;
      }
      else if (bVar2 == 2) {
        iVar8 = DAT_0001ea14 + 0x1e920;
      }
      else {
        iVar8 = DAT_0001ea04 + 0x1e8ec;
      }
      printf((char *)(DAT_0001ea08 + 0x1e8f8),(uint)param_2[2],iVar8,(uint)*(ushort *)(param_2 + 4),
             *(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 10),
             *(undefined4 *)(param_2 + 0xe));
      break;
    case 7:
      printf(__format);
      if (param_2[1] != 0) {
        uVar4 = FUN_0001e110(param_2 + 2);
        printf(__format_00,uVar4);
      }
      psVar7 = psVar12;
      do {
        if ((*psVar7 == param_5) && (psVar7[1] == param_6)) {
          *(undefined1 *)((int)psVar7 + 9) = 1;
        }
        psVar7 = psVar7 + 5;
      } while (psVar7 != psVar12 + 100);
      break;
    default:
      uVar9 = (uint)param_2[1];
      pcVar3 = pcVar10;
LAB_0001e730:
      printf(pcVar3,uVar5,uVar9);
    }
    if ((char)*param_2 < '\0') {
      printf((char *)(DAT_0001e9ac + 0x1e6b0));
    }
    else {
      putchar(0x20);
    }
    iVar13 = iVar13 + 1;
    param_2 = param_2 + bVar1 + 2;
  } while( true );
}



/* ===== FUN_0001ea18 @ 0001ea18 size=20044 ===== */

/* WARNING: Type propagation algorithm not settling */

void FUN_0001ea18(char *param_1,int param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int *__s;
  char **ppcVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 extraout_r1;
  short *psVar12;
  int iVar13;
  short sVar14;
  short *psVar15;
  byte bVar16;
  char *pcVar17;
  ushort *puVar18;
  short *psVar19;
  undefined2 *puVar20;
  short *psVar21;
  undefined4 extraout_r3;
  byte bVar22;
  ushort uVar23;
  byte *pbVar24;
  uint uVar25;
  byte *pbVar26;
  ushort *puVar27;
  ushort *puVar28;
  int iVar29;
  int *piVar30;
  undefined4 uVar31;
  uint *puVar32;
  undefined4 *puVar33;
  char *pcVar34;
  undefined1 *puVar35;
  char cVar36;
  char *pcVar37;
  uint uVar38;
  byte *pbVar39;
  uint uVar40;
  int iVar41;
  bool bVar42;
  undefined8 uVar43;
  ulonglong uVar44;
  int iVar45;
  time_t local_e0;
  tm local_dc;
  sockaddr local_b0;
  char acStack_a0 [2];
  char acStack_9e [2];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  char acStack_94 [20];
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  int *local_70;
  int local_6c;
  time_t local_5c;
  undefined1 local_58 [8];
  tm local_50;
  
  pcVar17 = (char *)(DAT_0001f930 + 0x1ea2c);
  puVar18 = *(ushort **)(param_2 + 8);
  iVar41 = *(int *)(param_2 + 0xc);
  local_50.tm_wday = (int)*puVar18;
  uVar23 = puVar18[1];
  local_50.tm_yday = CONCAT22(local_50.tm_yday._2_2_,uVar23);
  uVar38 = (uint)uVar23;
  *(ushort **)(param_2 + 8) = puVar18 + 2;
  *(int *)(param_2 + 0xc) = iVar41 + -4;
  local_50.tm_year = (int)pcVar17;
  if (uVar38 == 1) {
    local_50.tm_isdst = DAT_0001f934 + 0x1ea74;
    local_50.tm_gmtoff = DAT_0001f938 + 0x1ea80;
    do {
      if (*(uint *)(param_2 + 0xc) < 4) {
        return;
      }
      pbVar39 = *(byte **)(param_2 + 8);
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) - 4;
      iVar41 = DAT_0001f93c;
      *(byte **)(param_2 + 8) = pbVar39 + 4;
      puVar32 = *(uint **)(local_50.tm_year + iVar41);
      if ((puVar32[1] & 8) != 0) {
        FUN_0001e28c(param_1,param_2);
        printf((char *)local_50.tm_isdst);
      }
      switch((uint)*pbVar39) {
      case 1:
        uVar23 = **(ushort **)(param_2 + 8);
        uVar38 = (uint)uVar23;
        printf((char *)(DAT_0001f940 + 0x1eb40),uVar38);
        if (uVar38 == 1) {
          printf((char *)(DAT_0001f944 + 0x1eb78),(uint)*(ushort *)(*(int *)(param_2 + 8) + 2));
        }
        else if (uVar38 == 2) {
          uVar40 = *(uint *)(*(int *)(param_2 + 8) + 2);
          printf((char *)(DAT_0001f94c + 0x1ebc4),uVar40 & 0xffff,uVar40 >> 0x10);
        }
        else {
          putchar(10);
        }
        FUN_0001e28c(param_1 + 1,param_2);
        if (uVar38 == 1) {
          pcVar17 = (char *)(DAT_0001f950 + 0x1ebdc);
        }
        else if (uVar23 == 0) {
          pcVar17 = (char *)(DAT_0001f954 + 0x1ebe8);
        }
        else if (uVar38 == 2) {
          pcVar17 = (char *)(DAT_0001f958 + 0x1ebf4);
        }
        else {
          pcVar17 = (char *)(DAT_0001f948 + 0x1ebac);
        }
LAB_0001eba8:
        puts(pcVar17);
        break;
      case 2:
        uVar38 = (uint)**(ushort **)(param_2 + 8);
        FUN_0001df40(*(undefined1 *)(param_2 + 0x12),*(undefined2 *)(param_2 + 0x14),
                     (*(ushort **)(param_2 + 8))[1],uVar38);
        if ((puVar32[1] & 8) != 0) {
          pcVar17 = (char *)(DAT_0001f95c + 0x1ec30);
LAB_0001ec2c:
          printf(pcVar17,uVar38);
        }
        break;
      case 3:
        puVar18 = *(ushort **)(param_2 + 8);
        uVar38 = (uint)puVar18[2];
        uVar11 = (uint)puVar18[1];
        uVar40 = (uint)*puVar18;
        pcVar17 = (char *)(uint)puVar18[3];
        local_50.tm_wday = CONCAT22(local_50.tm_wday._2_2_,puVar18[3]);
        if (uVar38 == 0) {
          if (*(char *)(param_2 + 0x12) == '\0') {
            iVar41 = 200;
          }
          else {
            iVar41 = 0;
          }
          psVar19 = (short *)(DAT_0001f960 + 0x1ee94 + iVar41);
          psVar21 = psVar19 + 100;
          do {
            if ((*psVar19 == *(short *)(param_2 + 0x14)) && ((ushort)psVar19[1] == uVar11)) {
              sVar14 = psVar19[2];
              goto LAB_0001ecb8;
            }
            psVar19 = psVar19 + 5;
          } while (psVar21 != psVar19);
          sVar14 = (short)puVar32[2];
LAB_0001ecb8:
          if (sVar14 != 0) {
            FUN_0001df40(*(char *)(param_2 + 0x12),*(short *)(param_2 + 0x14),uVar40);
          }
        }
        else if (uVar38 != 1) {
          FUN_0001dfdc(*(undefined1 *)(param_2 + 0x12),uVar40,uVar11);
        }
        if ((puVar32[1] & 8) != 0) {
          local_50.tm_hour = (int)pcVar17;
          printf((char *)(DAT_0001f964 + 0x1ecec),uVar40,uVar11,uVar38);
          FUN_0001e28c(param_1 + 1,param_2);
          switch(uVar38) {
          case 0:
            iVar41 = DAT_0001f988 + 0x1edbc;
            break;
          case 1:
            iVar41 = DAT_0001f968 + 0x1ed3c;
            break;
          case 2:
            iVar41 = DAT_0001f978 + 0x1ed8c;
            break;
          case 3:
            iVar41 = DAT_0001f97c + 0x1ed98;
            break;
          case 4:
            iVar41 = DAT_0001f980 + 0x1eda4;
            break;
          default:
            iVar41 = DAT_0001f984 + 0x1edb0;
          }
          printf((char *)(DAT_0001f96c + 0x1ed44),iVar41);
          if (uVar38 == 1) {
            if (pcVar17 == (char *)0x1) {
              uVar38 = DAT_0001f98c + 0x1edc8;
            }
            else if ((short)local_50.tm_wday == 0) {
              uVar38 = DAT_0001f990 + 0x1edd4;
            }
            else if (pcVar17 == (char *)0x2) {
              uVar38 = DAT_0001f994 + 0x1ede0;
            }
            else {
              uVar38 = DAT_0001f970 + 0x1ed74;
            }
            pcVar17 = (char *)(DAT_0001f974 + 0x1ed7c);
            goto LAB_0001ed78;
          }
LAB_0001ef28:
          putchar(10);
        }
        break;
      case 4:
        if ((puVar32[1] & 8) != 0) {
          puVar27 = *(ushort **)(param_2 + 8);
          uVar2 = *puVar27;
          pcVar17 = (char *)(*(ushort *)(pbVar39 + 2) - 4);
          printf((char *)(DAT_0001f998 + 0x1ee10),(uint)uVar2,(uint)puVar27[1],pcVar17);
          if (0 < (int)pcVar17) {
            uVar23 = *(ushort *)(param_2 + 0x14);
            puVar27 = puVar27 + 2;
            uVar1 = *(undefined1 *)(param_2 + 0x12);
            local_50.tm_mday = (uint)uVar2;
LAB_0001ee38:
            local_50.tm_hour = (int)uVar23;
            FUN_0001e53c(param_1 + 1,puVar27,pcVar17,uVar1);
          }
        }
        break;
      case 5:
        if ((puVar32[1] & 8) != 0) {
          puVar18 = *(ushort **)(param_2 + 8);
          pcVar34 = param_1 + 1;
          local_50.tm_wday = (int)*puVar18;
          local_50.tm_yday = (int)*(ushort *)(pbVar39 + 2);
          uVar38 = (uint)puVar18[2];
          pcVar17 = (char *)(local_50.tm_yday + -6);
          local_50.tm_hour = (int)pcVar17;
          printf((char *)(DAT_0001f99c + 0x1ee64),local_50.tm_wday,(uint)puVar18[1],uVar38);
          if (0 < (int)pcVar17) {
            puVar27 = puVar18 + 3;
            if (uVar38 != 0) {
              FUN_0001e28c(pcVar34,param_2);
              pcVar37 = (char *)FUN_0001e148(uVar38);
              puts(pcVar37);
              iVar41 = DAT_0001f9a4;
              if (uVar38 == 3) {
                pcVar17 = (char *)(DAT_0001f9a0 + 0x1eed4);
                FUN_0001e28c(pcVar34,0);
                puVar18 = (ushort *)((int)puVar18 + local_50.tm_yday);
                do {
                  puVar28 = (ushort *)((int)puVar27 + 1);
                  switch((byte)*puVar27 & 0x7f) {
                  case 1:
                    pcVar34 = (char *)(DAT_0001f9a8 + 0x1ef20);
                    break;
                  case 2:
                    pcVar34 = (char *)(DAT_0001f9ac + 0x1ef68);
                    break;
                  case 3:
                    pcVar34 = (char *)(DAT_0001f9b0 + 0x1ef74);
                    break;
                  case 4:
                    pcVar34 = (char *)(DAT_0001f9b4 + 0x1ef80);
                    break;
                  case 5:
                    pcVar34 = (char *)(DAT_0001f9b8 + 0x1ef8c);
                    break;
                  case 6:
                    pcVar34 = (char *)(iVar41 + 0x1eee0);
                    break;
                  case 7:
                    pcVar34 = pcVar17;
                    break;
                  default:
                    printf((char *)local_50.tm_gmtoff);
                    goto LAB_0001ef20;
                  }
                  printf(pcVar34);
LAB_0001ef20:
                  puVar27 = puVar28;
                } while (puVar18 != puVar28);
                goto LAB_0001ef28;
              }
            }
            uVar23 = *(ushort *)(param_2 + 0x14);
            uVar1 = *(undefined1 *)(param_2 + 0x12);
            local_50.tm_mday = local_50.tm_wday;
            goto LAB_0001ee38;
          }
          FUN_0001e28c(pcVar34,param_2);
          pcVar17 = (char *)FUN_0001e148(uVar38);
          goto LAB_0001eba8;
        }
        break;
      case 6:
        if ((puVar32[1] & 8) != 0) {
          uVar38 = (uint)**(ushort **)(param_2 + 8);
          pcVar17 = (char *)(DAT_0001f9bc + 0x1f008);
          goto LAB_0001ec2c;
        }
        break;
      case 7:
        puVar18 = *(ushort **)(param_2 + 8);
        FUN_0001dfdc(*(undefined1 *)(param_2 + 0x12),*puVar18,puVar18[1]);
        if ((puVar32[1] & 8) != 0) {
          uVar38 = (uint)*puVar18;
          pcVar17 = (char *)(DAT_0001f9c0 + 0x1f03c);
          goto LAB_0001ec2c;
        }
        break;
      case 8:
        if ((puVar32[1] & 8) != 0) {
          uVar23 = *(ushort *)(pbVar39 + 2);
          pcVar17 = (char *)(DAT_0001f9c4 + 0x1f058);
LAB_0001f054:
          printf(pcVar17,(uint)uVar23);
LAB_0001f058:
          FUN_000149a8(param_1,param_2);
        }
        break;
      case 9:
        if ((puVar32[1] & 8) != 0) {
          uVar23 = *(ushort *)(pbVar39 + 2);
          pcVar17 = (char *)(DAT_0001f9c8 + 0x1f084);
          goto LAB_0001f054;
        }
        break;
      case 10:
        if ((puVar32[1] & 8) != 0) {
          uVar38 = (uint)**(ushort **)(param_2 + 8);
          pcVar17 = (char *)(DAT_0001f9cc + 0x1f0a4);
LAB_0001ed78:
          printf(pcVar17,uVar38);
        }
        break;
      case 0xb:
        if ((puVar32[1] & 8) != 0) {
          puVar18 = *(ushort **)(param_2 + 8);
          uVar40 = (uint)*puVar18;
          uVar11 = (uint)puVar18[1];
          uVar38 = *(ushort *)(pbVar39 + 2) - 4;
          printf((char *)(DAT_0001f9d0 + 0x1f0d8),uVar40,uVar11);
          if ((int)uVar38 < 1) {
            FUN_0001e28c(param_1 + 1,param_2);
            if (uVar11 == 0) {
              pcVar17 = (char *)(DAT_0001f9f0 + 0x1f244);
            }
            else if (uVar11 == 1) {
              pcVar17 = (char *)(DAT_0001f9f4 + 0x1f250);
            }
            else {
              pcVar17 = (char *)(DAT_0001f9ec + 0x1f238);
            }
            goto LAB_0001eba8;
          }
          FUN_0001e28c(param_1 + 1,0);
          if (uVar40 == 2) {
            uVar38 = FUN_0001e110(puVar18 + 2,uVar38 & 0xff);
            printf((char *)(DAT_0001f9d8 + 0x1f144),uVar38);
            if ((*puVar32 & 0x200) != 0) {
              for (puVar33 = (undefined4 *)(DAT_0001f9dc + 0x1f160); pcVar17 = (char *)*puVar33,
                  pcVar17 != (char *)0x0; puVar33 = puVar33 + 2) {
                if ((uVar38 & puVar33[1]) != 0) {
                  FUN_0001e28c(param_1 + 2,0);
                  puts(pcVar17);
                }
              }
            }
          }
          else {
            if (uVar40 != 3) {
              if (uVar40 == 1) {
                uVar38 = FUN_0001e110(puVar18 + 2,uVar38 & 0xff);
                pcVar17 = (char *)(DAT_0001f9d4 + 0x1f124);
              }
              else {
                pcVar17 = (char *)(DAT_0001f9e8 + 0x1f214);
              }
              goto LAB_0001ed78;
            }
            uVar38 = *(uint *)(puVar18 + 2);
            uVar40 = *(uint *)(puVar18 + 4);
            printf((char *)(DAT_0001f9e0 + 0x1f1ac),extraout_r1,uVar38,uVar40);
            if ((*puVar32 & 0x200) != 0) {
              for (puVar33 = (undefined4 *)(DAT_0001f9e4 + 0x1f220); pcVar17 = (char *)*puVar33,
                  pcVar17 != (char *)0x0; puVar33 = puVar33 + 2) {
                if ((uVar38 & puVar33[1]) != 0 || (uVar40 & (int)puVar33[1] >> 0x1f) != 0) {
                  FUN_0001e28c(param_1 + 2,0);
                  puts(pcVar17);
                }
              }
            }
          }
        }
        break;
      case 0xc:
        if ((puVar32[1] & 8) != 0) {
          puVar18 = *(ushort **)(param_2 + 8);
          printf((char *)(DAT_0001f9f8 + 0x1f274),(uint)*puVar18,(uint)puVar18[1],
                 (uint)(byte)puVar18[2]);
        }
        break;
      case 0xd:
        if ((puVar32[1] & 8) != 0) {
          puVar18 = *(ushort **)(param_2 + 8);
          local_50.tm_hour = (int)puVar18[3];
          printf((char *)(DAT_0001f9fc + 0x1f2ac),(uint)*puVar18,(uint)puVar18[1],(uint)puVar18[2]);
        }
        break;
      case 0xe:
        if ((puVar32[1] & 8) != 0) {
          uVar38 = (uint)**(ushort **)(param_2 + 8);
          pcVar17 = (char *)(DAT_0001fa00 + 0x1f2d4);
          goto LAB_0001ec2c;
        }
        break;
      case 0xf:
        if ((puVar32[1] & 8) != 0) {
          uVar38 = (uint)**(ushort **)(param_2 + 8);
          pcVar17 = (char *)(DAT_0001fa04 + 0x1f2f8);
          goto LAB_0001ec2c;
        }
        break;
      case 0x10:
        if ((puVar32[1] & 8) != 0) {
          uVar38 = (uint)**(ushort **)(param_2 + 8);
          pcVar17 = (char *)(DAT_0001fa08 + 0x1f31c);
          goto LAB_0001ec2c;
        }
        break;
      case 0x11:
        if ((puVar32[1] & 8) != 0) {
          uVar38 = (uint)**(ushort **)(param_2 + 8);
          pcVar17 = (char *)(DAT_0001fa0c + 0x1f33c);
          goto LAB_0001ed78;
        }
        break;
      default:
        if ((puVar32[1] & 8) != 0) {
          printf((char *)(DAT_0001fa10 + 0x1f35c),(uint)*pbVar39,(uint)pbVar39[1],
                 (uint)*(ushort *)(pbVar39 + 2));
          goto LAB_0001f058;
        }
      }
      uVar38 = (uint)*(ushort *)(pbVar39 + 2);
      if (uVar38 < *(uint *)(param_2 + 0xc)) {
        *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) - uVar38;
        *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + uVar38;
      }
      else {
        *(undefined4 *)(param_2 + 0xc) = 0;
      }
    } while( true );
  }
  iVar29 = *(int *)(pcVar17 + DAT_0001f93c);
  uVar40 = *(uint *)(iVar29 + 4);
  if (uVar38 == 2) {
    if ((uVar40 & 8) == 0) {
      return;
    }
    uVar23 = puVar18[2];
    *(int *)(param_2 + 0xc) = iVar41 + -6;
    *(ushort **)(param_2 + 8) = puVar18 + 3;
    FUN_0001e28c();
    printf((char *)(DAT_0001fa14 + 0x1f3ac),local_50.tm_wday,(uint)uVar23);
    pcVar17 = param_1;
    goto LAB_00020010;
  }
  if (uVar38 == 3) {
    if ((uVar40 & 0x4000) == 0) {
      return;
    }
    pcVar17 = (char *)(DAT_0001fa18 + 0x1f3e4);
    pcVar34 = (char *)(DAT_0001fa1c + 0x1f3e8);
    pcVar37 = (char *)(DAT_0001fa20 + 0x1f3ec);
    *(ushort **)(param_2 + 8) = puVar18 + 3;
    *(int *)(param_2 + 0xc) = iVar41 + -6;
    do {
      if (*(uint *)(param_2 + 0xc) < 4) {
        return;
      }
      pbVar39 = *(byte **)(param_2 + 8);
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) - 4;
      *(byte **)(param_2 + 8) = pbVar39 + 4;
      FUN_0001e28c(param_1,param_2);
      printf(pcVar17);
      switch((uint)*pbVar39) {
      case 1:
        uVar23 = **(ushort **)(param_2 + 8);
        printf((char *)(DAT_0001fa24 + 0x1f480),(uint)uVar23);
        FUN_0001e28c(param_1 + 1,0);
        if (uVar23 == 0) {
          pcVar7 = (char *)(DAT_0001fa2c + 0x1f4b4);
        }
        else {
          pcVar7 = (char *)(DAT_0001fa28 + 0x1f4a4);
        }
        goto LAB_0001f4a0;
      case 2:
        puVar18 = *(ushort **)(param_2 + 8);
        sVar14 = *(short *)(pbVar39 + 2);
        printf((char *)(DAT_0001fa30 + 0x1f4c8),(uint)*puVar18);
        uVar23 = sVar14 - 2;
        printf((char *)(DAT_0001fa34 + 0x1f4dc));
        local_50.tm_year = DAT_0001fa38 + 0x1f4ec;
        do {
          uVar23 = uVar23 - 2;
          printf((char *)local_50.tm_year,(uint)puVar18[1]);
          pbVar24 = (byte *)((int)puVar18 + 3);
          puVar18 = puVar18 + 1;
        } while ((1 < uVar23 & *pbVar24 >> 7) != 0);
        putchar(10);
        break;
      case 3:
        puVar18 = *(ushort **)(param_2 + 8);
        sVar14 = *(short *)(pbVar39 + 2);
        printf((char *)(DAT_0001fa3c + 0x1f568),(uint)*puVar18);
        uVar23 = sVar14 - 2;
        printf((char *)(DAT_0001fa40 + 0x1f57c));
        local_50.tm_year = DAT_0001fa44 + 0x1f58c;
        puVar27 = puVar18 + 1;
        do {
          uVar23 = uVar23 - 2;
          puVar18 = puVar27 + 1;
          printf((char *)local_50.tm_year,(uint)*puVar27);
          pbVar24 = (byte *)((int)puVar27 + 1);
          puVar27 = puVar18;
        } while ((1 < uVar23 & *pbVar24 >> 7) != 0);
        putchar(10);
        goto LAB_0001f5c4;
      case 4:
        uVar23 = *(ushort *)(pbVar39 + 2);
        puVar18 = *(ushort **)(param_2 + 8);
        puts((char *)(DAT_0001fa48 + 0x1f5f0));
LAB_0001f5c4:
        if (2 < uVar23) {
          FUN_0001e3e0(param_1 + 1,puVar18,uVar23);
        }
        break;
      case 5:
        pcVar7 = (char *)(DAT_0001fa4c + 0x1f604);
        goto LAB_0001f4a0;
      case 6:
        uVar38 = (uint)**(byte **)(param_2 + 8);
        pcVar7 = (char *)(DAT_0001fa50 + 0x1f618);
        goto LAB_0001f614;
      case 7:
        pbVar24 = *(byte **)(param_2 + 8);
        uVar38 = (uint)pbVar24[1];
        if (uVar38 == 0) {
          iVar41 = DAT_0001fa70 + 0x1f6e8;
        }
        else if (uVar38 == 1) {
          iVar41 = DAT_0001fa74 + 0x1f6f4;
        }
        else {
          iVar41 = DAT_0001fa54 + 0x1f644;
        }
        pcVar7 = param_1 + 1;
        printf((char *)(DAT_0001fa58 + 0x1f650),(uint)*pbVar24,uVar38,iVar41);
        FUN_0001e28c(pcVar7,0);
        printf((char *)(DAT_0001fa5c + 0x1f66c),*(undefined4 *)(pbVar24 + 2));
        FUN_0001e28c(pcVar7,0);
        printf((char *)(DAT_0001fa60 + 0x1f688),*(undefined4 *)(pbVar24 + 6));
        FUN_0001e28c(pcVar7,0);
        printf((char *)(DAT_0001fa64 + 0x1f6a4),*(undefined4 *)(pbVar24 + 10));
        FUN_0001e28c(pcVar7,0);
        printf((char *)(DAT_0001fa68 + 0x1f6c0),(uint)*(ushort *)(pbVar24 + 0xe));
        FUN_0001e28c(pcVar7,0);
        uVar38 = (uint)*(ushort *)(pbVar24 + 0x10);
        pcVar7 = (char *)(DAT_0001fa6c + 0x1f6dc);
        goto LAB_0001f614;
      case 8:
        uVar38 = (uint)**(byte **)(param_2 + 8);
        pcVar7 = (char *)(DAT_0001fa78 + 0x1f708);
LAB_0001f614:
        printf(pcVar7,uVar38);
        break;
      case 9:
        pbVar24 = *(byte **)(param_2 + 8);
        sVar14 = *(short *)(pbVar39 + 2);
        uVar38 = (uint)pbVar24[1];
        if (uVar38 == 0) {
          iVar41 = DAT_0001fa84 + 0x1f760;
        }
        else if (uVar38 == 1) {
          iVar41 = DAT_0001fa88 + 0x1f76c;
        }
        else {
          iVar41 = DAT_0001fa7c + 0x1f734;
        }
        printf((char *)(DAT_0001fa80 + 0x1f73c),(uint)*pbVar24,uVar38,iVar41);
        goto LAB_0001f748;
      case 10:
        pbVar24 = *(byte **)(param_2 + 8);
        sVar14 = *(short *)(pbVar39 + 2);
        printf((char *)(DAT_0001fa8c + 0x1f784),(uint)*pbVar24,(uint)pbVar24[1]);
LAB_0001f748:
        FUN_000204b8(param_1 + 1,pbVar24 + 2,sVar14 + -2);
        break;
      case 0xb:
        pbVar24 = *(byte **)(param_2 + 8);
        printf((char *)(DAT_0001fa90 + 0x1f7b4),(uint)*pbVar24,(uint)pbVar24[1],(uint)pbVar24[2]);
        FUN_0001e28c(param_1 + 1,0);
        switch(pbVar24[2]) {
        case 0:
          pcVar7 = (char *)(DAT_0001fab0 + 0x1f84c);
          break;
        case 1:
          pcVar7 = (char *)(DAT_0001fa94 + 0x1f7f8);
          break;
        case 2:
          pcVar7 = (char *)(DAT_0001fa98 + 0x1f804);
          break;
        case 3:
          pcVar7 = (char *)(DAT_0001fa9c + 0x1f810);
          break;
        case 4:
          pcVar7 = (char *)(DAT_0001faa0 + 0x1f81c);
          break;
        case 5:
          pcVar7 = (char *)(DAT_0001faa4 + 0x1f828);
          break;
        case 6:
          pcVar7 = (char *)(DAT_0001faa8 + 0x1f834);
          break;
        default:
          pcVar7 = (char *)(DAT_0001faac + 0x1f840);
        }
        goto LAB_0001f4a0;
      case 0xc:
        printf((char *)(DAT_0001fab4 + 0x1f864),(uint)**(byte **)(param_2 + 8),
               (uint)(*(byte **)(param_2 + 8))[1]);
        break;
      case 0xd:
        pbVar24 = *(byte **)(param_2 + 8);
        printf(pcVar37,(uint)*pbVar24,(uint)pbVar24[1],(uint)pbVar24[2]);
        FUN_0001e28c(param_1 + 1,0);
        bVar6 = pbVar24[2];
        if (bVar6 == 1) {
          pcVar7 = (char *)(DAT_0001fabc + 0x1f8c0);
        }
        else if (bVar6 == 0) {
          pcVar7 = (char *)(DAT_0001fac0 + 0x1f8cc);
        }
        else if (bVar6 == 2) {
          pcVar7 = (char *)(DAT_0001fac4 + 0x1f8d8);
        }
        else {
          pcVar7 = (char *)(DAT_0001fab8 + 0x1f8b4);
        }
LAB_0001f4a0:
        puts(pcVar7);
        break;
      default:
        printf(pcVar34,(uint)*pbVar39,(uint)pbVar39[1],(uint)*(ushort *)(pbVar39 + 2));
        FUN_000149a8(param_1,param_2);
      }
      uVar38 = (uint)*(ushort *)(pbVar39 + 2);
      if (uVar38 < *(uint *)(param_2 + 0xc)) {
        *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) - uVar38;
        *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + uVar38;
      }
      else {
        *(undefined4 *)(param_2 + 0xc) = 0;
      }
    } while( true );
  }
  if (uVar38 == 4) {
    if ((uVar40 & 0x1000) == 0) {
LAB_0002000c:
      pcVar17 = param_1 + 1;
LAB_00020010:
      FUN_000149a8(pcVar17,param_2);
      return;
    }
LAB_0001f908:
    local_50.tm_zone = param_1;
    uVar38 = FUN_00021024(param_2);
    FUN_00021414(param_1);
    uVar8 = FUN_0002106c(uVar38);
    printf((char *)(DAT_00022268 + 0x215a4),uVar8,uVar38);
    iVar4 = DAT_000223a0;
    iVar45 = DAT_00022398;
    iVar13 = DAT_00022388;
    iVar9 = DAT_00022384;
    iVar29 = DAT_00022290;
    iVar41 = DAT_0002228c;
    if (uVar38 == 0xc) {
      uVar38 = FUN_00021044(param_2);
      uVar40 = FUN_00021044(param_2);
      FUN_00021414(param_1 + 1,param_2);
      uVar40 = (uVar40 & 0xff) << 8 | uVar40 >> 8 & 0xff;
      uVar38 = (uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff;
      pcVar17 = (char *)(DAT_00022394 + 0x22070);
LAB_00021c00:
      printf(pcVar17,uVar38,uVar40);
      return;
    }
    if (uVar38 < 0xd) {
      if (uVar38 == 6) {
        uVar38 = FUN_00021044(param_2);
        uVar40 = FUN_00021044(param_2);
        uVar11 = FUN_00021044(param_2);
        FUN_00021414(param_1 + 1,param_2);
        printf((char *)(DAT_0002236c + 0x21e78),(uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff,
               (uVar40 & 0xff) << 8 | uVar40 >> 8 & 0xff,(uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff);
        iVar41 = DAT_00022370;
        FUN_00021414(param_1 + 1,param_2);
        printf((char *)(DAT_00022374 + 0x21e9c));
        while (*(int *)(param_2 + 0xc) != 0) {
          uVar8 = FUN_00021024(param_2);
          printf((char *)(iVar41 + 0x21e98),uVar8);
        }
        goto LAB_00021ea8;
      }
      if (uVar38 < 7) {
        if (uVar38 != 3) {
          if (uVar38 < 4) {
            if (uVar38 == 1) {
              uVar8 = FUN_00021024(param_2);
              uVar38 = FUN_00021044(param_2);
              uVar40 = FUN_00021024(param_2);
              FUN_00021414(param_1 + 1,param_2);
              if (uVar40 == 9) {
                iVar41 = DAT_000222c8 + 0x21a98;
              }
              else if (uVar40 < 10) {
                if (uVar40 == 4) {
                  iVar41 = DAT_000222cc + 0x21aa4;
                }
                else if (uVar40 < 5) {
                  if (uVar40 == 2) {
                    iVar41 = DAT_000222d0 + 0x21ab0;
                  }
                  else if (uVar40 < 3) {
                    if (uVar40 == 1) {
                      iVar41 = DAT_000222d8 + 0x21ac8;
                    }
                    else {
                      iVar41 = DAT_000222b0 + 0x219c8;
                    }
                  }
                  else {
                    iVar41 = DAT_000222d4 + 0x21abc;
                  }
                }
                else if (uVar40 == 6) {
                  iVar41 = DAT_000222dc + 0x21ad4;
                }
                else if (uVar40 < 6) {
                  iVar41 = DAT_000222e0 + 0x21ae0;
                }
                else if (uVar40 == 7) {
                  iVar41 = DAT_000222e4 + 0x21aec;
                }
                else if (uVar40 == 8) {
                  iVar41 = DAT_000222e8 + 0x21af8;
                }
                else {
                  iVar41 = DAT_000222bc + 0x21a30;
                }
              }
              else if (uVar40 == 0xe) {
                iVar41 = DAT_000222ec + 0x21b04;
              }
              else if (uVar40 < 0xf) {
                if (uVar40 == 0xb) {
                  iVar41 = DAT_000222f0 + 0x21b10;
                }
                else if (uVar40 < 0xb) {
                  iVar41 = DAT_000222f4 + 0x21b1c;
                }
                else if (uVar40 == 0xc) {
                  iVar41 = DAT_000222f8 + 0x21b28;
                }
                else if (uVar40 == 0xd) {
                  iVar41 = DAT_000222fc + 0x21b34;
                }
                else {
                  iVar41 = DAT_000222c0 + 0x21a64;
                }
              }
              else if (uVar40 == 0x10) {
                iVar41 = DAT_00022300 + 0x21b40;
              }
              else if (uVar40 < 0x10) {
                iVar41 = DAT_00022304 + 0x21b4c;
              }
              else if (uVar40 == 0x11) {
                iVar41 = DAT_00022308 + 0x21b58;
              }
              else if (uVar40 == 0xff) {
                iVar41 = DAT_0002230c + 0x21b64;
              }
              else {
                iVar41 = DAT_000222c4 + 0x21a8c;
              }
              printf((char *)(DAT_000222b4 + 0x219d4),iVar41,uVar40);
              FUN_00021414(param_1 + 1,param_2);
              uVar10 = FUN_0002106c(uVar8);
              printf((char *)(DAT_000222b8 + 0x21a00),uVar10,uVar8,
                     (uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff);
              return;
            }
            if (uVar38 == 2) {
              uVar38 = FUN_00021044(param_2);
              FUN_00021414(param_1 + 1,param_2);
              uVar38 = (uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff;
              pcVar17 = (char *)(DAT_00022310 + 0x21b8c);
              goto LAB_00021b8c;
            }
          }
          else {
            if (uVar38 == 4) {
              uVar38 = FUN_00021044(param_2);
              uVar40 = FUN_00021044(param_2);
              FUN_00021414(param_1 + 1,param_2);
              uVar40 = (uVar40 & 0xff) << 8 | uVar40 >> 8 & 0xff;
              uVar38 = (uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff;
              pcVar17 = (char *)(DAT_00022318 + 0x21c00);
              goto LAB_00021c00;
            }
            if (uVar38 == 5) {
              iVar9 = FUN_00021024(param_2);
              FUN_00021414(param_1 + 1,param_2);
              iVar29 = DAT_00022278;
              iVar41 = DAT_00022274;
              if (iVar9 == 1) {
                iVar9 = DAT_00022270 + 0x21630;
                puts((char *)(DAT_0002226c + 0x2162c));
                while (*(int *)(param_2 + 0xc) != 0) {
                  uVar38 = FUN_00021044(param_2);
                  uVar40 = FUN_00021044(param_2);
                  uVar40 = (uVar40 & 0xff) << 8 | uVar40 >> 8 & 0xff;
                  FUN_00021414(param_1 + 2,param_2);
                  iVar13 = iVar9;
                  if (uVar40 != 0x2903) {
                    if (uVar40 < 0x2904) {
                      if (uVar40 == 0x2803) {
                        iVar13 = DAT_00022330 + 0x21d34;
                      }
                      else if (uVar40 < 0x2804) {
                        if (uVar40 == 0x2801) {
                          iVar13 = DAT_00022334 + 0x21d40;
                        }
                        else if (uVar40 < 0x2802) {
                          if (uVar40 == 0x2800) {
                            iVar13 = DAT_0002233c + 0x21d58;
                          }
                          else {
                            iVar13 = DAT_0002231c + 0x21c84;
                          }
                        }
                        else {
                          iVar13 = DAT_00022338 + 0x21d4c;
                        }
                      }
                      else if (uVar40 == 0x2901) {
                        iVar13 = DAT_00022340 + 0x21d64;
                      }
                      else if (uVar40 < 0x2902) {
                        if (uVar40 == 0x2900) {
                          iVar13 = DAT_00022348 + 0x21d7c;
                        }
                        else {
                          iVar13 = DAT_00022324 + 0x21cb8;
                        }
                      }
                      else {
                        iVar13 = DAT_00022344 + 0x21d70;
                      }
                    }
                    else {
                      iVar13 = iVar41 + 0x21638;
                      if (uVar40 != 0x2a01) {
                        if (uVar40 < 0x2a02) {
                          if (uVar40 == 0x2905) {
                            iVar13 = DAT_0002234c + 0x21d88;
                          }
                          else if (uVar40 < 0x2905) {
                            iVar13 = DAT_00022350 + 0x21d94;
                          }
                          else if (uVar40 == 0x2a00) {
                            iVar13 = DAT_00022354 + 0x21da0;
                          }
                          else {
                            iVar13 = DAT_00022328 + 0x21cf0;
                          }
                        }
                        else {
                          iVar13 = iVar29 + 0x2163c;
                          if (uVar40 != 0x2a03) {
                            if (uVar40 < 0x2a03) {
                              iVar13 = DAT_00022358 + 0x21dac;
                            }
                            else if (uVar40 == 0x2a04) {
                              iVar13 = DAT_0002235c + 0x21db8;
                            }
                            else if (uVar40 == 0x2a05) {
                              iVar13 = DAT_00022360 + 0x21dc4;
                            }
                            else {
                              iVar13 = DAT_0002232c + 0x21d28;
                            }
                          }
                        }
                      }
                    }
                  }
                  printf((char *)(DAT_00022320 + 0x21c90),(uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff,
                         uVar40,iVar13);
                }
                return;
              }
              pcVar17 = (char *)(DAT_00022368 + 0x21ddc);
              puts((char *)(DAT_00022364 + 0x21dd8));
              while (*(int *)(param_2 + 0xc) != 0) {
                uVar38 = FUN_00021044(param_2);
                FUN_00021414(param_1 + 2,param_2);
                printf(pcVar17,(uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff);
                FUN_00021368(param_2);
                putchar(10);
              }
              return;
            }
          }
          goto LAB_000216f8;
        }
        uVar38 = FUN_00021044(param_2);
        FUN_00021414(param_1 + 1,param_2);
        uVar38 = (uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff;
        pcVar17 = (char *)(DAT_00022314 + 0x21bc0);
        goto LAB_00021b8c;
      }
      if (uVar38 == 9) {
        iVar41 = FUN_00021024(param_2);
        FUN_00021414(param_1 + 1,param_2);
        printf((char *)(DAT_0002238c + 0x21f9c),iVar41);
        while (*(int *)(param_2 + 0xc) != 0) {
          uVar38 = FUN_00021044(param_2);
          FUN_00021414(param_1 + 2,param_2);
          printf((char *)(iVar9 + 0x21f7c),(uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff);
          for (iVar29 = 0; iVar29 < iVar41 + -2; iVar29 = iVar29 + 1) {
            uVar8 = FUN_00021024(param_2);
            printf((char *)(iVar13 + 0x21f84),uVar8);
          }
          putchar(10);
        }
        return;
      }
      if (9 < uVar38) {
        if (uVar38 == 10) {
          uVar38 = FUN_00021044(param_2);
          FUN_00021414(param_1 + 1,param_2);
          uVar38 = (uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff;
          pcVar17 = (char *)(DAT_00022390 + 0x22030);
          goto LAB_00021b8c;
        }
        if (uVar38 == 0xb) {
          param_1 = param_1 + 1;
        }
        goto LAB_000216f8;
      }
      if (uVar38 == 7) {
        pcVar17 = (char *)(DAT_00022378 + 0x21ee0);
        while (*(int *)(param_2 + 0xc) != 0) {
          uVar38 = FUN_00021044(param_2);
          uVar40 = FUN_00021044(param_2);
          FUN_00021414(param_1 + 1,param_2);
          printf(pcVar17,(uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff,
                 (uVar40 & 0xff) << 8 | uVar40 >> 8 & 0xff);
        }
        return;
      }
      if (uVar38 != 8) goto LAB_000216f8;
LAB_00021668:
      param_1 = param_1 + 1;
      uVar38 = FUN_00021044(param_2);
      uVar40 = FUN_00021044(param_2);
      FUN_00021414(param_1,param_2);
      printf((char *)(DAT_0002227c + 0x216a8),(uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff,
             (uVar40 & 0xff) << 8 | uVar40 >> 8 & 0xff);
      FUN_00021414(param_1,param_2);
      if (*(int *)(param_2 + 0xc) == 2) {
        uVar38 = FUN_00021044(param_2);
        uVar38 = (uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff;
        pcVar17 = (char *)(DAT_00022280 + 0x216e0);
LAB_00021b8c:
        printf(pcVar17,uVar38);
        return;
      }
      if (*(int *)(param_2 + 0xc) != 0x10) {
        puts((char *)(DAT_00022380 + 0x21f54));
        FUN_00021414(param_1,param_2);
LAB_000216f8:
        FUN_000149a8(param_1);
        return;
      }
      printf((char *)(DAT_0002237c + 0x21f3c));
      FUN_00021368(param_2);
    }
    else {
      if (uVar38 != 0x12) {
        if (uVar38 < 0x13) {
          if (uVar38 == 0xf) {
            FUN_00021414(param_1 + 1,param_2);
            printf((char *)(DAT_000223a4 + 0x220d8));
            while (*(int *)(param_2 + 0xc) != 0) {
              uVar8 = FUN_00021024(param_2);
              printf((char *)(iVar4 + 0x220d4),uVar8);
            }
            goto LAB_00021ea8;
          }
          if (uVar38 < 0x10) {
            if (uVar38 != 0xd) {
              if (uVar38 == 0xe) {
                pcVar17 = (char *)(DAT_00022284 + 0x21744);
                FUN_00021414(param_1 + 1,param_2);
                puts((char *)(DAT_00022288 + 0x21750));
                while (*(int *)(param_2 + 0xc) != 0) {
                  FUN_00021414(param_1 + 1,param_2);
                  uVar38 = FUN_00021044(param_2);
                  printf(pcVar17,(uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff);
                }
                return;
              }
              goto LAB_000216f8;
            }
            FUN_00021414(param_1 + 1,param_2);
            printf((char *)(DAT_0002239c + 0x22094));
            while (*(int *)(param_2 + 0xc) != 0) {
              uVar8 = FUN_00021024(param_2);
              printf((char *)(iVar45 + 0x22090),uVar8);
            }
            goto LAB_00021ea8;
          }
          if (uVar38 != 0x10) {
            if (uVar38 == 0x11) {
              cVar5 = FUN_00021024(param_2);
              while (*(int *)(param_2 + 0xc) != 0) {
                uVar38 = FUN_00021044(param_2);
                uVar40 = FUN_00021044(param_2);
                FUN_00021414(param_1 + 1,param_2);
                printf((char *)(iVar41 + 0x217ac),(uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff,
                       (uVar40 & 0xff) << 8 | uVar40 >> 8 & 0xff);
                FUN_00021414(param_1 + 1,param_2);
                printf((char *)(DAT_00022294 + 0x2181c));
                for (cVar36 = cVar5 + -4; cVar36 != '\0'; cVar36 = cVar36 + -1) {
                  uVar8 = FUN_00021024(param_2);
                  printf((char *)(iVar29 + 0x217b4),uVar8);
                }
                putchar(10);
              }
              return;
            }
            goto LAB_000216f8;
          }
          goto LAB_00021668;
        }
        if (uVar38 == 0x18) {
          uVar38 = FUN_00021024(param_2);
          FUN_00021414(param_1 + 1,param_2);
          if (uVar38 == 0) {
            pcVar17 = (char *)(DAT_000223c0 + 0x2224c);
          }
          else {
            pcVar17 = (char *)((int)&DAT_00022268 + DAT_000223c8);
          }
          printf(pcVar17);
          pcVar17 = (char *)(DAT_000223c4 + 0x2225c);
          goto LAB_00021b8c;
        }
        if (uVar38 < 0x19) {
          if (uVar38 < 0x16) goto LAB_000216f8;
          uVar38 = FUN_00021044(param_2);
          uVar40 = FUN_00021044(param_2);
          FUN_00021414(param_1 + 1,param_2);
          printf((char *)(DAT_00022298 + 0x21884),(uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff,
                 (uVar40 & 0xff) << 8 | uVar40 >> 8 & 0xff);
          iVar41 = DAT_0002229c;
          FUN_00021414(param_1 + 1,param_2);
          printf((char *)(DAT_000222a0 + 0x218a8));
          while (*(int *)(param_2 + 0xc) != 0) {
            uVar8 = FUN_00021024(param_2);
            printf((char *)(iVar41 + 0x218a4),uVar8);
          }
          goto LAB_00021ea8;
        }
        if (uVar38 != 0x52) {
          if (uVar38 == 0xd2) {
            uVar38 = FUN_00021044(param_2);
            iVar41 = *(int *)(param_2 + 0xc) + -0xc;
            FUN_00021414(param_1 + 1,param_2);
            pcVar17 = (char *)(DAT_000223b4 + 0x221b4);
            printf((char *)(DAT_000223b0 + 0x221b0),(uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff);
            while (bVar42 = iVar41 != 0, iVar41 = iVar41 + -1, bVar42) {
              uVar8 = FUN_00021024(param_2);
              printf(pcVar17,uVar8);
            }
            putchar(10);
            iVar41 = DAT_000223b8;
            FUN_00021414(param_1 + 1,param_2);
            printf((char *)(DAT_000223bc + 0x221e4));
            while (*(int *)(param_2 + 0xc) != 0) {
              uVar8 = FUN_00021024(param_2);
              printf((char *)(iVar41 + 0x221e0),uVar8);
            }
          }
          else {
            if (uVar38 != 0x1b) goto LAB_000216f8;
            uVar38 = FUN_00021044(param_2);
            FUN_00021414(param_1 + 1,param_2);
            printf((char *)(DAT_000222a4 + 0x21910),(uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff);
            iVar41 = DAT_000222a8;
            FUN_00021414(param_1 + 1,param_2);
            printf((char *)(DAT_000222ac + 0x21934));
            while (*(int *)(param_2 + 0xc) != 0) {
              uVar8 = FUN_00021024(param_2);
              printf((char *)(iVar41 + 0x21930),uVar8);
            }
          }
          goto LAB_00021ea8;
        }
      }
      uVar38 = FUN_00021044(param_2);
      iVar41 = DAT_000223a8;
      FUN_00021414(param_1 + 1,param_2);
      printf((char *)(DAT_000223ac + 0x22148),(uVar38 & 0xff) << 8 | uVar38 >> 8 & 0xff);
      while (*(int *)(param_2 + 0xc) != 0) {
        uVar8 = FUN_00021024(param_2);
        printf((char *)(iVar41 + 0x22150),uVar8);
      }
    }
LAB_00021ea8:
    putchar(10);
    return;
  }
  if (uVar38 == 6) {
    if ((uVar40 & 0x2000) == 0) goto LAB_0002000c;
    iVar9 = DAT_00020f6c + 0x20a88;
    piVar30 = *(int **)(iVar9 + DAT_00020f70);
    iVar29 = *piVar30;
    iVar41 = FUN_0002061c(param_2);
    FUN_0002063c(param_1);
    switch(iVar41 + -1) {
    case 0:
      iVar13 = DAT_00020fa4 + 0x20bb4;
      break;
    case 1:
      iVar13 = DAT_00020f74 + 0x20aec;
      break;
    case 2:
      iVar13 = DAT_00020f7c + 0x20b3c;
      break;
    case 3:
      iVar13 = DAT_00020f80 + 0x20b48;
      break;
    case 4:
      iVar13 = DAT_00020f84 + 0x20b54;
      break;
    case 5:
      iVar13 = DAT_00020f88 + 0x20b60;
      break;
    case 6:
      iVar13 = DAT_00020f8c + 0x20b6c;
      break;
    case 7:
      iVar13 = DAT_00020f90 + 0x20b78;
      break;
    case 8:
      iVar13 = DAT_00020f94 + 0x20b84;
      break;
    case 9:
      iVar13 = DAT_00020f98 + 0x20b90;
      break;
    case 10:
      iVar13 = DAT_00020f9c + 0x20b9c;
      break;
    default:
      iVar13 = DAT_00020fa0 + 0x20ba8;
    }
    printf((char *)(DAT_00020f78 + 0x20af8),iVar13,iVar41);
    switch(iVar41 + -1) {
    case 0:
      goto LAB_00020bb4;
    case 1:
LAB_00020bb4:
      FUN_00020790(param_1 + 1,param_2);
      goto LAB_00020bc0;
    case 2:
      iVar41 = 0x10;
      pcVar17 = (char *)(DAT_00020fa8 + 0x20bec);
      FUN_0002063c(param_1 + 1,param_2);
      printf((char *)(DAT_00020fac + 0x20bf8));
      do {
        uVar8 = FUN_0002061c(param_2);
        printf(pcVar17,uVar8);
        iVar41 = iVar41 + -1;
      } while (iVar41 != 0);
      break;
    case 3:
      iVar41 = 0x10;
      pcVar17 = (char *)(DAT_00020fb0 + 0x20c38);
      FUN_0002063c(param_1 + 1,param_2);
      printf((char *)(DAT_00020fb4 + 0x20c44));
      do {
        uVar8 = FUN_0002061c(param_2);
        printf(pcVar17,uVar8);
        iVar41 = iVar41 + -1;
      } while (iVar41 != 0);
      break;
    case 4:
      uVar8 = FUN_0002061c(param_2);
      FUN_0002063c(param_1 + 1,param_2);
      printf((char *)(DAT_00020fb8 + 0x20c94),uVar8);
      FUN_0002063c(param_1 + 1,param_2);
      switch(uVar8) {
      case 1:
        iVar41 = DAT_00020fe4 + 0x20d54;
        break;
      case 2:
        iVar41 = DAT_00020fbc + 0x20cdc;
        break;
      case 3:
        iVar41 = DAT_00020fc4 + 0x20cf4;
        break;
      case 4:
        iVar41 = DAT_00020fc8 + 0x20d00;
        break;
      case 5:
        iVar41 = DAT_00020fcc + 0x20d0c;
        break;
      case 6:
        iVar41 = DAT_00020fd0 + 0x20d18;
        break;
      case 7:
        iVar41 = DAT_00020fd4 + 0x20d24;
        break;
      case 8:
        iVar41 = DAT_00020fd8 + 0x20d30;
        break;
      case 9:
        iVar41 = DAT_00020fdc + 0x20d3c;
        break;
      default:
        iVar41 = DAT_00020fe0 + 0x20d48;
      }
      pcVar17 = (char *)(DAT_00020fc0 + 0x20ce4);
      goto LAB_00020ce0;
    case 5:
      iVar41 = 0x10;
      pcVar17 = (char *)(DAT_00020fe8 + 0x20d6c);
      FUN_0002063c(param_1 + 1,param_2);
      printf((char *)(DAT_00020fec + 0x20d78));
      do {
        uVar8 = FUN_0002061c(param_2);
        printf(pcVar17,uVar8);
        iVar41 = iVar41 + -1;
      } while (iVar41 != 0);
      break;
    case 6:
      iVar41 = 8;
      uVar23 = **(ushort **)(param_2 + 8);
      *(ushort **)(param_2 + 8) = *(ushort **)(param_2 + 8) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -2;
      FUN_0002063c(param_1 + 1,param_2);
      pcVar17 = (char *)(DAT_00020ff4 + 0x20ddc);
      printf((char *)(DAT_00020ff0 + 0x20dd8),(uint)uVar23);
      printf((char *)(DAT_00020ff8 + 0x20de8));
      do {
        uVar8 = FUN_0002061c(param_2);
        printf(pcVar17,uVar8);
        iVar41 = iVar41 + -1;
      } while (iVar41 != 0);
      break;
    case 7:
      iVar41 = 0x10;
      pcVar17 = (char *)(DAT_00020ffc + 0x20e20);
      FUN_0002063c(param_1 + 1,param_2);
      printf((char *)(DAT_00021000 + 0x20e2c));
      do {
        uVar8 = FUN_0002061c(param_2);
        printf(pcVar17,uVar8);
        iVar41 = iVar41 + -1;
      } while (iVar41 != 0);
      break;
    case 8:
      iVar41 = FUN_0002061c(param_2);
      __s = &local_50.tm_wday;
      FUN_0002063c(param_1 + 1,param_2);
      if ((**(uint **)(iVar9 + DAT_00021004) & 0x4000) == 0) {
        FUN_00030588(param_2,__s);
      }
      else {
        FUN_0003056c(&local_50.tm_mon,param_2);
        local_50.tm_hour = (uint)local_50.tm_mon >> 0x10 & 0xff;
        sprintf((char *)__s,(char *)(DAT_00021008 + 0x20ea8),local_50.tm_mon & 0xff,
                (uint)local_50.tm_mon >> 8 & 0xff);
      }
      if (iVar41 == 0) {
        iVar41 = DAT_00021014 + 0x20ee8;
      }
      else {
        iVar41 = DAT_0002100c + 0x20ebc;
      }
      printf((char *)(DAT_00021010 + 0x20ec8),__s,iVar41);
      goto LAB_00020bc0;
    case 9:
      iVar41 = 0x10;
      pcVar17 = (char *)(DAT_00021018 + 0x20f00);
      FUN_0002063c(param_1 + 1,param_2);
      printf((char *)(DAT_0002101c + 0x20f0c));
      do {
        uVar8 = FUN_0002061c(param_2);
        printf(pcVar17,uVar8);
        iVar41 = iVar41 + -1;
      } while (iVar41 != 0);
      break;
    case 10:
      iVar41 = FUN_0002061c(param_2);
      FUN_0002063c(param_1 + 1,param_2);
      pcVar17 = (char *)(DAT_00021020 + 0x20f54);
LAB_00020ce0:
      printf(pcVar17,iVar41);
      goto LAB_00020bc0;
    default:
      FUN_000149a8(param_1,param_2);
      goto LAB_00020bc0;
    }
    putchar(10);
LAB_00020bc0:
    if (iVar29 == *piVar30) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  sVar14 = *(short *)(param_2 + 0x14);
  if (*(char *)(param_2 + 0x12) == '\0') {
    iVar9 = 200;
  }
  else {
    iVar9 = 0;
  }
  psVar15 = (short *)(DAT_0001fac8 + 0x1fd44 + iVar9);
  psVar19 = psVar15 + 100;
  psVar21 = psVar15;
  do {
    psVar12 = psVar15;
    if ((*psVar21 == sVar14) && ((ushort)psVar21[1] == uVar38)) {
      cVar5 = (char)psVar21[4];
      goto LAB_0001fb74;
    }
    psVar21 = psVar21 + 5;
  } while (psVar19 != psVar21);
  cVar5 = '\0';
LAB_0001fb74:
  do {
    psVar21 = psVar15;
    if ((*psVar12 == sVar14) && ((ushort)psVar12[1] == uVar38)) {
      cVar36 = *(char *)((int)psVar12 + 9);
      goto LAB_0001fb94;
    }
    psVar12 = psVar12 + 5;
  } while (psVar19 != psVar12);
  cVar36 = '\0';
LAB_0001fb94:
  do {
    if ((*psVar21 == sVar14) && ((ushort)psVar21[1] == uVar38)) {
      uVar2 = psVar21[2];
      goto LAB_0001fbb0;
    }
    psVar21 = psVar21 + 5;
  } while (psVar19 != psVar21);
  uVar2 = *(ushort *)(iVar29 + 8);
LAB_0001fbb0:
  uVar11 = (uint)uVar2;
  *(ushort *)(param_2 + 0x16) = uVar23;
  do {
    if ((*psVar15 == sVar14) && ((ushort)psVar15[1] == uVar38)) {
      sVar14 = psVar15[3];
      goto LAB_0001fbd4;
    }
    psVar15 = psVar15 + 5;
  } while (psVar19 != psVar15);
  sVar14 = 0;
LAB_0001fbd4:
  *(short *)(param_2 + 0x18) = sVar14;
  if (cVar5 == '\0') {
    local_50.tm_year = 0;
    uVar25 = 0;
  }
  else {
    if (cVar36 == '\0') {
      iVar41 = iVar41 + -8;
      uVar25 = (uint)puVar18[2];
      *(ushort **)(param_2 + 8) = puVar18 + 3;
    }
    else {
      iVar41 = iVar41 + -10;
      uVar25 = *(uint *)(puVar18 + 2);
      *(ushort **)(param_2 + 8) = puVar18 + 4;
    }
    *(int *)(param_2 + 0xc) = iVar41;
    local_50.tm_year = (int)*(ushort *)(*(int *)(param_2 + 8) + *(int *)(param_2 + 0xc));
  }
  if ((uVar40 & 8) != 0) {
    FUN_0001e28c(param_1,param_2);
    printf((char *)(DAT_0001facc + 0x1fc44),uVar38,local_50.tm_wday);
    if (cVar5 != '\0') {
      if (cVar36 == '\0') {
        pcVar17 = (char *)(DAT_0001faf0 + 0x1fde4);
      }
      else {
        pcVar17 = (char *)(DAT_0001fad0 + 0x1fc6c);
      }
      printf(pcVar17,uVar25,local_50.tm_year);
    }
    param_1 = param_1 + 1;
    printf((char *)(DAT_0001fad4 + 0x1fc80),uVar11);
    pcVar17 = (char *)local_50.tm_year;
    if (cVar5 != '\0') {
      uVar38 = uVar25 & 1;
      if (cVar36 == '\0') {
        FUN_0001e28c(param_1,param_2);
        if (uVar38 == 0) {
          iVar41 = DAT_0001fb04 + 0x1fe5c;
        }
        else {
          iVar41 = DAT_0001fb18 + 0x1febc;
        }
        printf((char *)(DAT_0001fb08 + 0x1fe64),iVar41);
        if (uVar38 == 0) {
          uVar38 = (uVar25 & 0xffff) >> 0xe;
          uVar8 = FUN_0001e1dc(uVar38);
          printf((char *)(DAT_0001fb1c + 0x1fed8),uVar8);
          if (uVar38 == 1) {
            uVar23 = **(ushort **)(param_2 + 8);
            pcVar17 = (char *)(DAT_0001fb20 + 0x1fef4);
            *(ushort **)(param_2 + 8) = *(ushort **)(param_2 + 8) + 1;
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -2;
            printf(pcVar17,(uint)uVar23);
          }
          printf((char *)(DAT_0001fb24 + 0x1ff14),(uVar25 & 0x7f) >> 1);
        }
        else {
          uVar8 = FUN_0001e234((uVar25 & 0xf) >> 2);
          printf((char *)(DAT_0001fb0c + 0x1fe84),uVar8);
          if ((uVar25 & 0x10) != 0) {
            printf((char *)(DAT_0001fb10 + 0x1fe98));
          }
        }
        printf((char *)(DAT_0001fb14 + 0x1fea8),(uVar25 & 0x3fff) >> 8);
        uVar25 = uVar25 & 0x80;
      }
      else {
        FUN_0001e28c(param_1,param_2);
        if (uVar38 == 0) {
          iVar41 = DAT_0001fad8 + 0x1fcb4;
        }
        else {
          iVar41 = DAT_0001faf4 + 0x1fdf0;
        }
        uVar40 = (uVar25 & 0x3ffff) >> 0x10;
        printf((char *)(DAT_0001fadc + 0x1fcc0),iVar41);
        if (uVar38 == 0) {
          uVar8 = FUN_0001e1dc(uVar40);
          printf((char *)(DAT_0001faf8 + 0x1fe04),uVar8);
          if (uVar40 == 1) {
            uVar23 = **(ushort **)(param_2 + 8);
            pcVar17 = (char *)(DAT_0001fafc + 0x1fe20);
            *(ushort **)(param_2 + 8) = *(ushort **)(param_2 + 8) + 1;
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -2;
            printf(pcVar17,(uint)uVar23);
          }
          printf((char *)(DAT_0001fb00 + 0x1fe40),uVar25 >> 0x12);
        }
        else {
          uVar8 = FUN_0001e234();
          printf((char *)(DAT_0001fae0 + 0x1fce0),uVar8);
          if ((uVar25 & 0x40000) != 0) {
            printf((char *)(DAT_0001fae4 + 0x1fcf4));
          }
        }
        printf((char *)(DAT_0001fae8 + 0x1fd04),(uVar25 & 0xffff) >> 2);
        uVar25 = uVar25 & 2;
      }
      if (uVar25 != 0) {
        printf((char *)(DAT_0001faec + 0x1fd18));
      }
      putchar(10);
      pcVar17 = (char *)local_50.tm_year;
    }
  }
  local_50.tm_year = (int)pcVar17;
  if (uVar11 != 0x13) {
    if (uVar11 < 0x14) {
      if (uVar11 == 3) {
        if ((*(uint *)(iVar29 + 4) & 0x10) == 0) goto LAB_0002000c;
        iVar29 = DAT_000241f0 + 0x23ac0;
        piVar30 = *(int **)(iVar29 + DAT_000241f4);
        iVar41 = *piVar30;
        puVar32 = *(uint **)(param_2 + 8);
        if ((*(byte *)((int)puVar32 + 2) & 1) == 0) {
          iVar9 = 4;
          local_50.tm_zone = (char *)*puVar32;
        }
        else {
          iVar9 = 3;
          local_50.tm_zone =
               (char *)CONCAT22(local_50.tm_zone._2_2_ & 1 | *(byte *)((int)puVar32 + 2) & 0xfffe,
                                (short)*puVar32);
        }
        ppcVar3 = &local_50.tm_zone;
        puVar20 = (undefined2 *)((int)puVar32 + iVar9);
        bVar6 = local_50.tm_zone._1_1_ & 0xef;
        iVar9 = *(int *)(param_2 + 0xc) - iVar9;
        *(undefined2 **)(param_2 + 8) = puVar20;
        *(int *)(param_2 + 0xc) = iVar9;
        if (bVar6 == 0xef) {
          if (((uint)local_50.tm_zone & 0xf8) != 0) {
            FUN_0002394c(param_1,param_2);
            printf((char *)(DAT_00024264 + 0x24020));
            FUN_00023904(ppcVar3,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
            if (((uint)local_50.tm_zone & 0x1000) == 0) {
              putchar(10);
            }
            else {
              printf((char *)(DAT_00024268 + 0x24050),(uint)**(byte **)(param_2 + 8));
              *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
              *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
            }
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
            *(byte *)(param_2 + 0x1b) = (byte)local_50.tm_zone >> 3;
            *(byte *)(param_2 + 0x1a) =
                 (byte)(((uint)local_50.tm_zone & 7) >> 2) | ((byte)local_50.tm_zone >> 3) << 1;
            uVar38 = FUN_000141a0(*(undefined2 *)(param_2 + 0x14),3);
            if (*(int *)(param_2 + 0xc) == 0) goto LAB_00023dd0;
            uVar40 = *(uint *)(*(int *)(iVar29 + DAT_0002426c) + 4);
            if (uVar38 < 0x1104) {
              if (uVar38 < 0x1102) {
                if (uVar38 != 8) goto LAB_000240d4;
                if ((uVar40 & 0x10000) != 0) {
                  FUN_0002bf28(param_1 + 1,param_2);
                  goto LAB_00023dd0;
                }
              }
              else if ((uVar40 & 0x40000) != 0) {
                FUN_0002e108(param_1 + 1,param_2);
                goto LAB_00023dd0;
              }
            }
            else if (uVar38 == 0x112d) {
              if ((uVar40 & 0x80000) != 0) {
                FUN_0002b164(param_1 + 1,param_2);
                goto LAB_00023dd0;
              }
            }
            else {
LAB_000240d4:
              if ((uVar40 & 0x10) == 0) goto LAB_00023dd0;
            }
LAB_00023d84:
            FUN_000149a8(param_1,param_2);
            goto LAB_00023dd0;
          }
          if ((*(byte *)((int)puVar20 + 1) & 1) == 0) {
            iVar29 = 3;
            local_50.tm_gmtoff =
                 CONCAT22(CONCAT11(local_50.tm_gmtoff._3_1_,*(undefined1 *)(puVar20 + 1)),*puVar20);
          }
          else {
            bVar6 = local_50.tm_gmtoff._1_1_ & 1;
            local_50.tm_gmtoff._0_3_ =
                 (uint3)CONCAT11(bVar6 | *(byte *)((int)puVar20 + 1) & 0xfe,*(undefined1 *)puVar20);
            iVar29 = 2;
          }
          *(undefined1 **)(param_2 + 8) = (undefined1 *)((int)puVar20 + iVar29);
          *(int *)(param_2 + 0xc) = iVar9 - iVar29;
          FUN_0002394c(param_1,param_2);
          printf((char *)(DAT_000241f8 + 0x23b98));
          bVar6 = (byte)local_50.tm_gmtoff >> 2;
          if (bVar6 == 0x18) {
            uVar31 = *(undefined4 *)(param_2 + 8);
            uVar8 = *(undefined4 *)
                     (DAT_0002422c + 0x23df4 + ((local_50.tm_gmtoff << 0x1e) >> 0x1f) * -4);
            uVar10 = *(undefined4 *)(param_2 + 0xc);
            pcVar17 = (char *)(DAT_00024230 + 0x23e08);
LAB_00023db4:
            printf(pcVar17,uVar8);
            FUN_00023904(ppcVar3,uVar31,uVar10);
            FUN_000238ec(&local_50.tm_gmtoff);
            goto LAB_00023dd0;
          }
          if (bVar6 < 0x19) {
            if (bVar6 == 8) {
              uVar8 = *(undefined4 *)(param_2 + 8);
              uVar10 = *(undefined4 *)(param_2 + 0xc);
              printf((char *)(DAT_00024220 + 0x23d6c),
                     *(undefined4 *)
                      (DAT_0002421c + 0x23d5c + ((local_50.tm_gmtoff << 0x1e) >> 0x1f) * -4));
              FUN_00023904(ppcVar3,uVar8,uVar10);
              FUN_000238ec(&local_50.tm_gmtoff);
              goto LAB_00023d84;
            }
            if (bVar6 == 0x14) {
              pbVar39 = *(byte **)(param_2 + 8);
              uVar8 = *(undefined4 *)(param_2 + 0xc);
              printf((char *)(DAT_0002424c + 0x23f2c),
                     *(undefined4 *)
                      (DAT_00024248 + 0x23f18 + ((local_50.tm_gmtoff << 0x1e) >> 0x1f) * -4));
              FUN_00023904(ppcVar3,pbVar39,uVar8);
              FUN_000238ec(&local_50.tm_gmtoff);
              uVar38 = pbVar39[1] & 0xf;
              uVar40 = (uint)(*pbVar39 >> 2);
              pcVar17 = (char *)(DAT_00024250 + 0x23f60);
            }
            else {
              if (bVar6 != 4) goto LAB_00023c50;
              pbVar39 = *(byte **)(param_2 + 8);
              uVar8 = *(undefined4 *)(param_2 + 0xc);
              printf((char *)(DAT_00024200 + 0x23be8),
                     *(undefined4 *)
                      (DAT_000241fc + 0x23bd4 + ((local_50.tm_gmtoff << 0x1e) >> 0x1f) * -4));
              FUN_00023904(ppcVar3,pbVar39,uVar8);
              FUN_000238ec(&local_50.tm_gmtoff);
              FUN_0002394c(param_1,0);
              bVar6 = *pbVar39;
              uVar38 = (uint)(bVar6 >> 2);
              pcVar17 = (char *)(DAT_00024204 + 0x23c20);
              uVar40 = (bVar6 & 3) >> 1;
            }
            printf(pcVar17,uVar40,uVar38);
            goto LAB_00023dd0;
          }
          if (bVar6 != 0x24) {
            if (bVar6 < 0x25) {
              if (bVar6 == 0x20) {
                pbVar39 = *(byte **)(param_2 + 8);
                uVar8 = *(undefined4 *)(param_2 + 0xc);
                printf((char *)(DAT_00024258 + 0x23f88),
                       *(undefined4 *)
                        (DAT_00024254 + 0x23f74 + ((local_50.tm_gmtoff << 0x1e) >> 0x1f) * -4));
                FUN_00023904(ppcVar3,pbVar39,uVar8);
                FUN_000238ec(&local_50.tm_gmtoff);
                FUN_0002394c(param_1,0);
                local_50.tm_year = (int)pbVar39[3];
                local_50.tm_mon = pbVar39[2] & 0x3f;
                printf((char *)(DAT_0002425c + 0x23fd8),*pbVar39 & 0x3f,pbVar39[1] & 0xf,
                       (uint)(pbVar39[1] >> 4));
                FUN_0002394c(param_1,0);
                printf((char *)(DAT_00024260 + 0x24004),(uint)*(ushort *)(pbVar39 + 4),
                       (uint)pbVar39[6],(uint)pbVar39[7]);
                goto LAB_00023dd0;
              }
            }
            else {
              if (bVar6 == 0x28) {
                uVar31 = *(undefined4 *)(param_2 + 8);
                uVar8 = *(undefined4 *)
                         (DAT_00024224 + 0x23da4 + ((local_50.tm_gmtoff << 0x1e) >> 0x1f) * -4);
                uVar10 = *(undefined4 *)(param_2 + 0xc);
                pcVar17 = (char *)(DAT_00024228 + 0x23db8);
                goto LAB_00023db4;
              }
              if (bVar6 == 0x38) {
                pbVar39 = *(byte **)(param_2 + 8);
                iVar29 = *(int *)(param_2 + 0xc);
                printf((char *)(DAT_00024210 + 0x23cb8),
                       *(undefined4 *)
                        (DAT_0002420c + 0x23ca4 + ((local_50.tm_gmtoff << 0x1e) >> 0x1f) * -4));
                FUN_00023904(ppcVar3,pbVar39,iVar29);
                FUN_000238ec(&local_50.tm_gmtoff);
                FUN_0002394c(param_1,0);
                bVar6 = pbVar39[1];
                local_50.tm_wday = (int)(bVar6 >> 7);
                local_50.tm_year = (pbVar39[1] & 0x7f) >> 6;
                local_50.tm_mon = (pbVar39[1] & 0xf) >> 3;
                printf((char *)(DAT_00024214 + 0x23d14),(uint)(*pbVar39 >> 2),(bVar6 & 3) >> 1,
                       (bVar6 & 7) >> 2);
                if (iVar29 != 0) {
                  uVar38 = (uint)pbVar39[7];
                  local_50.tm_mon = (int)(pbVar39[7] >> 4);
                  printf((char *)(DAT_00024218 + 0x23d44),(uVar38 & 3) >> 1,(uVar38 & 7) >> 2,
                         (uVar38 & 0xf) >> 3);
                  goto LAB_00023dd0;
                }
                goto LAB_000241dc;
              }
            }
LAB_00023c50:
            printf((char *)(DAT_00024208 + 0x23c5c));
            FUN_00023904(ppcVar3,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
            putchar(10);
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
            goto LAB_00023d84;
          }
          pbVar39 = *(byte **)(param_2 + 8);
          uVar38 = *(uint *)(param_2 + 0xc);
          printf((char *)(DAT_00024238 + 0x23e2c),
                 *(undefined4 *)
                  (DAT_00024234 + 0x23e18 + ((local_50.tm_gmtoff << 0x1e) >> 0x1f) * -4));
          FUN_00023904(ppcVar3,pbVar39,uVar38);
          FUN_000238ec(&local_50.tm_gmtoff);
          FUN_0002394c(param_1,0);
          printf((char *)(DAT_0002423c + 0x23e64),(uint)(*pbVar39 >> 2));
          if (1 < uVar38) {
            local_50.tm_yday = (pbVar39[3] & 3) >> 1;
            local_50.tm_wday = pbVar39[3] & 1;
            local_50.tm_year = (pbVar39[2] & 0x3f) >> 4;
            local_50.tm_mon = (pbVar39[2] & 0xf) >> 3;
            printf((char *)(DAT_00024240 + 0x23e9c),(uint)pbVar39[1],pbVar39[2] & 3,
                   (pbVar39[2] & 7) >> 2);
            FUN_0002394c(param_1,0);
            local_50.tm_yday = (int)*(ushort *)(pbVar39 + 6);
            uVar38 = (uint)pbVar39[3];
            local_50.tm_wday = (int)pbVar39[5];
            local_50.tm_year = (int)pbVar39[4];
            local_50.tm_mon = (pbVar39[3] & 0x3f) >> 5;
            printf((char *)(DAT_00024244 + 0x23ef4),(uVar38 & 7) >> 2,(uVar38 & 0xf) >> 3,
                   (uVar38 & 0x1f) >> 4);
            goto LAB_00023dd0;
          }
        }
        else {
          FUN_0002394c(param_1,param_2);
          printf((char *)(DAT_00024270 + 0x24158));
          if (bVar6 == 0x2f) {
            pcVar17 = (char *)(DAT_0002427c + 0x241a0);
LAB_0002419c:
            printf(pcVar17);
          }
          else {
            if (bVar6 < 0x30) {
              if (bVar6 == 0xf) {
                pcVar17 = (char *)(DAT_00024280 + 0x241b0);
              }
              else {
LAB_0002416c:
                pcVar17 = (char *)(DAT_00024274 + 0x24178);
              }
              goto LAB_0002419c;
            }
            if (bVar6 != 0x43) {
              if (bVar6 != 99) goto LAB_0002416c;
              pcVar17 = (char *)(DAT_00024278 + 0x24194);
              goto LAB_0002419c;
            }
            printf((char *)(DAT_00024284 + 0x241bc));
            FUN_00014274(*(undefined2 *)(param_2 + 0x14),(byte)local_50.tm_zone >> 2);
          }
          FUN_00023904(ppcVar3,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
        }
LAB_000241dc:
        putchar(10);
LAB_00023dd0:
        if (iVar41 == *piVar30) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (3 < uVar11) {
        if (uVar11 != 0xf) {
          if (uVar11 == 0x11) goto LAB_0001ff28;
          goto LAB_0001fd40;
        }
        if ((*(uint *)(iVar29 + 4) & 0x40) == 0) goto LAB_0002000c;
        iVar41 = DAT_00024dbc + 0x2492c;
        bVar6 = FUN_00024288(param_2);
        FUN_00024370(param_1);
        switch(bVar6 & 0x7f) {
        case 0:
          if ((bVar6 & 0x80) == 0) {
            iVar29 = DAT_00024dfc + 0x24b30;
          }
          else {
            iVar29 = DAT_00024e10 + 0x24ba4;
          }
          printf((char *)(DAT_00024e00 + 0x24b40),0,iVar29);
          FUN_00024370(param_1 + 1,param_2);
          uVar8 = FUN_000242f4(param_2);
          printf((char *)(DAT_00024e04 + 0x24b64),uVar8);
          uVar8 = FUN_000242f4(param_2);
          printf((char *)(DAT_00024e08 + 0x24b7c),uVar8);
          uVar38 = FUN_000242a8(param_2);
          pcVar17 = (char *)(DAT_00024e0c + 0x24b98);
          break;
        case 1:
          if ((char)bVar6 < '\0') {
            iVar29 = DAT_00024dc8 + 0x249ac;
          }
          else {
            iVar29 = DAT_00024dc0 + 0x24974;
          }
          printf((char *)(DAT_00024dc4 + 0x24980),1,iVar29);
          FUN_000244c4(param_1,param_2,0xffffffff);
          if (-1 < (char)bVar6) {
            return;
          }
          uVar38 = 0;
          goto LAB_00024a00;
        case 2:
          if ((bVar6 & 0x80) == 0) {
            iVar29 = DAT_00024dcc + 0x249c0;
          }
          else {
            iVar29 = DAT_00024df8 + 0x24b1c;
          }
          printf((char *)(DAT_00024dd0 + 0x249d0),2,iVar29);
          FUN_00024370(param_1 + 1,param_2);
          uVar38 = FUN_000242a8(param_2);
          pcVar17 = (char *)(DAT_00024dd4 + 0x249f8);
          break;
        case 3:
          if ((bVar6 & 0x80) == 0) {
            iVar29 = DAT_00024e28 + 0x24c28;
          }
          else {
            iVar29 = DAT_00024e38 + 0x24c84;
          }
          printf((char *)(DAT_00024e2c + 0x24c38),3,iVar29);
          FUN_00024370(param_1 + 1,param_2);
          uVar8 = FUN_000242f4(param_2);
          printf((char *)(DAT_00024e30 + 0x24c5c),uVar8);
          uVar38 = FUN_000242a8(param_2);
          pcVar17 = (char *)(DAT_00024e34 + 0x24c78);
          break;
        case 4:
          if ((bVar6 & 0x80) == 0) {
            iVar29 = DAT_00024e14 + 0x24bb8;
          }
          else {
            iVar29 = DAT_00024e24 + 0x24c14;
          }
          printf((char *)(DAT_00024e18 + 0x24bc8),4,iVar29);
          FUN_00024370(param_1 + 1,param_2);
          uVar8 = FUN_000242f4(param_2);
          printf((char *)(DAT_00024e1c + 0x24bec),uVar8);
          uVar38 = FUN_000242a8(param_2);
          pcVar17 = (char *)(DAT_00024e20 + 0x24c08);
          break;
        default:
          puts((char *)(DAT_00024e3c + 0x24c90));
          return;
        }
        pcVar34 = param_1 + 1;
        printf(pcVar17,uVar38);
        param_1 = pcVar34;
        if ((bVar6 & 0x80) != 0) {
LAB_00024a00:
          pcVar34 = param_1 + 1;
          local_50.tm_yday = DAT_00024dd8 + 0x24a10;
          local_50.tm_isdst = DAT_00024ddc + 0x24a1c;
          local_50.tm_gmtoff = DAT_00024de0 + 0x24a28;
          do {
            uVar40 = FUN_00024288(param_2);
            iVar29 = FUN_00024288(param_2);
            FUN_00024370(pcVar34,param_2);
            cVar5 = (char)uVar40;
            if ((uVar40 & 0x7f) == 0) {
              if (cVar5 < '\0') {
                iVar9 = DAT_00024e40 + 0x24ca4;
              }
              else {
                iVar9 = DAT_00024de4 + 0x24a6c;
              }
              printf((char *)(DAT_00024de8 + 0x24a7c),0,iVar9,iVar29);
              FUN_000244c4(pcVar34,param_2,iVar29);
            }
            else {
              pcVar17 = (char *)local_50.tm_gmtoff;
              if (cVar5 < '\0') {
                pcVar17 = (char *)local_50.tm_isdst;
              }
              printf((char *)local_50.tm_yday,uVar40 & 0x7f,pcVar17,iVar29);
              FUN_00014958(param_1 + 2,param_2,iVar29);
              *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar29;
              *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar29;
            }
          } while (cVar5 < '\0');
          if ((bVar6 & 0x7f) == 1) {
            return;
          }
        }
        if (uVar38 == 0x8100) {
          FUN_00024370(pcVar34,param_2);
          uVar8 = FUN_000242a8(param_2);
          printf((char *)(DAT_00024dec + 0x24acc),uVar8);
          uVar38 = FUN_000242a8(param_2);
          printf((char *)(DAT_00024df0 + 0x24ae8),uVar38);
        }
        if ((**(uint **)(iVar41 + DAT_00024df4) & 0x200) == 0) {
LAB_00024afc:
          FUN_000149a8(pcVar34,param_2);
          return;
        }
        if (uVar38 == 0x806) {
          FUN_00024370(pcVar34 + 1,param_2);
          pcVar17 = (char *)(DAT_00024e4c + 0x24d84);
LAB_00024d80:
          printf(pcVar17);
          local_58._4_4_ = *(undefined4 *)(DAT_0002e8a0 + 0x2e734 + DAT_0002e8a4);
          iVar41 = *(int *)(param_2 + 8);
          local_50.tm_gmtoff = *(long *)local_58._4_4_;
          pcVar17 = (char *)(DAT_0002e8ac + 0x2e76c);
          printf((char *)(DAT_0002e8a8 + 0x2e768));
          pbVar39 = (byte *)(iVar41 + 8);
          do {
            pbVar24 = pbVar39 + 1;
            printf(pcVar17,(uint)*pbVar39);
            pbVar39 = pbVar24;
          } while (pbVar24 != (byte *)(iVar41 + 0xd));
          piVar30 = &local_50.tm_mon;
          printf((char *)(DAT_0002e8b0 + 0x2e79c),(uint)*(byte *)(iVar41 + 0xd));
          local_50.tm_sec = CONCAT22(local_50.tm_sec._2_2_,2);
          local_50.tm_min = *(int *)(iVar41 + 0xe);
          getnameinfo((sockaddr *)(local_58 + 8),0x10,(char *)piVar30,0x14,(char *)0x0,0,1);
          printf((char *)(DAT_0002e8b4 + 0x2e7ec),piVar30);
          printf((char *)(DAT_0002e8b8 + 0x2e7f8));
          pbVar39 = (byte *)(iVar41 + 0x12);
          do {
            pbVar24 = pbVar39 + 1;
            printf(pcVar17,(uint)*pbVar39);
            pbVar39 = pbVar24;
          } while ((byte *)(iVar41 + 0x17) != pbVar24);
          printf((char *)(DAT_0002e8bc + 0x2e81c),(uint)*(byte *)(iVar41 + 0x17));
          local_50.tm_min = *(int *)(iVar41 + 0x18);
          getnameinfo((sockaddr *)(local_58 + 8),0x10,(char *)piVar30,0x14,(char *)0x0,0,1);
          printf((char *)(DAT_0002e8c0 + 0x2e85c),piVar30);
          *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0x1c;
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0x1c;
          FUN_000149a8(pcVar34 + 1,param_2);
          if (local_50.tm_gmtoff == *(int *)local_58._4_4_) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        if (uVar38 < 0x807) {
          if (uVar38 != 0x800) goto LAB_00024afc;
          FUN_00024370(pcVar34 + 1,param_2);
          pcVar17 = (char *)(DAT_00024e44 + 0x24d20);
        }
        else {
          if (uVar38 == 0x8035) {
            FUN_00024370(pcVar34 + 1,param_2);
            pcVar17 = (char *)(DAT_00024e50 + 0x24db4);
            goto LAB_00024d80;
          }
          if (uVar38 != 0x86dd) goto LAB_00024afc;
          FUN_00024370(pcVar34 + 1,param_2);
          pcVar17 = (char *)(DAT_00024e48 + 0x24d68);
        }
        pcVar37 = pcVar34 + 1;
        printf(pcVar17);
        iVar41 = DAT_0002ec20 + 0x2e8e0;
        pbVar39 = *(byte **)(param_2 + 8);
        piVar30 = *(int **)(iVar41 + DAT_0002ec24);
        local_50.tm_gmtoff = *piVar30;
        uVar38 = *pbVar39 & 0xf0;
        if (uVar38 == 0x40) {
          bVar6 = pbVar39[9];
          local_b0.sa_data[0] = '\0';
          local_b0.sa_data[1] = '\0';
          local_b0.sa_data[6] = '\0';
          local_b0.sa_data[7] = '\0';
          local_b0.sa_data[8] = '\0';
          local_b0.sa_data[9] = '\0';
          local_b0.sa_data[10] = '\0';
          local_b0.sa_data[0xb] = '\0';
          local_b0.sa_data[0xc] = '\0';
          local_b0.sa_data[0xd] = '\0';
          local_b0.sa_family = 2;
          local_b0.sa_data._2_2_ = SUB42(*(undefined4 *)(pbVar39 + 0xc),0);
          local_b0.sa_data._4_2_ = SUB42((uint)*(undefined4 *)(pbVar39 + 0xc) >> 0x10,0);
          iVar29 = (*pbVar39 & 0xf) << 2;
          getnameinfo(&local_b0,0x10,acStack_94,0x32,(char *)0x0,0,1);
          iVar13 = 0;
          iVar45 = 1;
          local_b0.sa_data._2_2_ = SUB42(*(undefined4 *)(pbVar39 + 0x10),0);
          local_b0.sa_data._4_2_ = SUB42((uint)*(undefined4 *)(pbVar39 + 0x10) >> 0x10,0);
          iVar9 = 0;
          getnameinfo(&local_b0,0x10,&stack0xffffffa0,0x32,(char *)0x0,0,1);
        }
        else {
          if (uVar38 != 0x60) goto LAB_0002ebe4;
          uStack_9c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_98 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          bVar6 = pbVar39[6];
          pcVar37 = local_b0.sa_data + 6;
          local_b0.sa_data[0] = '\0';
          local_b0.sa_data[1] = '\0';
          local_b0.sa_data[2] = '\0';
          local_b0.sa_data[3] = '\0';
          local_b0.sa_data._4_2_ =
               SUB42(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4),0);
          local_b0.sa_data._6_2_ =
               SUB42((uint)*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4) >> 0x10,0)
          ;
          local_b0.sa_data._8_2_ = SUB42(uStack_9c,0);
          local_b0.sa_data[10] = '\0';
          local_b0.sa_data[0xb] = '\0';
          local_b0.sa_data[0xc] = '\0';
          local_b0.sa_data[0xd] = '\0';
          local_b0.sa_family = 10;
          pcVar17 = pcVar37;
          pbVar24 = pbVar39 + 8;
          acStack_a0 = (char  [2])local_b0.sa_data._4_2_;
          acStack_9e = (char  [2])local_b0.sa_data._6_2_;
          do {
            pbVar26 = pbVar24 + 8;
            uVar8 = *(undefined4 *)(pbVar24 + 4);
            *(undefined4 *)pcVar17 = *(undefined4 *)pbVar24;
            *(undefined4 *)(pcVar17 + 4) = uVar8;
            pcVar17 = pcVar17 + 8;
            pbVar24 = pbVar26;
          } while (pbVar26 != pbVar39 + 0x18);
          getnameinfo(&local_b0,0x1c,acStack_94,0x32,(char *)0x0,0,1);
          do {
            pbVar24 = pbVar26 + 8;
            uVar8 = *(undefined4 *)(pbVar26 + 4);
            *(undefined4 *)pcVar37 = *(undefined4 *)pbVar26;
            *(undefined4 *)(pcVar37 + 4) = uVar8;
            pcVar37 = pcVar37 + 8;
            pbVar26 = pbVar24;
          } while (pbVar24 != pbVar39 + 0x28);
          iVar45 = 1;
          iVar13 = 0;
          iVar9 = 0;
          iVar29 = 0x28;
          getnameinfo(&local_b0,0x1c,&stack0xffffffa0,0x32,(char *)0x0,0,1);
        }
        printf((char *)(DAT_0002ec28 + 0x2e994),acStack_94);
        printf((char *)(DAT_0002ec2c + 0x2e9a4),&stack0xffffffa0);
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar29;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar29;
        pcVar37 = pcVar34 + 2;
        puVar32 = *(uint **)(iVar41 + DAT_0002ec30);
        if ((int)pcVar37 < 0) {
          puVar32[3] = 0;
        }
        else {
          if (puVar32[3] == 0) {
            if ((*puVar32 & 0x100) != 0) {
              if ((*puVar32 & 0x200) == 0) {
                printf((char *)(DAT_0002ec44 + 0x2eba0),*(time_t *)(param_2 + 0x20),
                       *(undefined4 *)(param_2 + 0x24));
              }
              else {
                local_e0 = *(time_t *)(param_2 + 0x20);
                localtime_r(&local_e0,&local_dc);
                printf((char *)(DAT_0002ec34 + 0x2ea48),local_dc.tm_year + 0x76c,local_dc.tm_mon + 1
                       ,local_dc.tm_mday,local_dc.tm_hour,local_dc.tm_min,local_dc.tm_sec,
                       *(undefined4 *)(param_2 + 0x24));
                iVar9 = local_dc.tm_hour;
                iVar13 = local_dc.tm_min;
                iVar45 = local_dc.tm_sec;
              }
            }
            if (*(char *)(param_2 + 0x12) == '\0') {
              uVar8 = 0x3c;
            }
            else {
              uVar8 = 0x3e;
            }
            printf((char *)(DAT_0002ec38 + 0x2ea64),uVar8);
            uVar8 = 1;
            puVar32[3] = 1;
          }
          else {
            printf((char *)(DAT_0002ec48 + 0x2ebb0));
            uVar8 = extraout_r3;
          }
          if (pcVar37 != (char *)0x0) {
            printf((char *)(DAT_0002ec3c + 0x2ea90),(int)pcVar37 * 2,0x20,uVar8,iVar9,iVar13,iVar45)
            ;
          }
        }
        if (bVar6 == 6) {
          pcVar17 = (char *)(DAT_0002ec50 + 0x2ebdc);
        }
        else if (bVar6 < 7) {
          if (bVar6 != 1) {
LAB_0002eaa4:
            printf((char *)(DAT_0002ec40 + 0x2eab4),(uint)pbVar39[9]);
            goto LAB_0002ebe4;
          }
          pcVar17 = (char *)(DAT_0002ec58 + 0x2ec18);
        }
        else if (bVar6 == 0x11) {
          pcVar17 = (char *)(DAT_0002ec54 + 0x2ec0c);
        }
        else {
          if (bVar6 != 0x3a) goto LAB_0002eaa4;
          pcVar17 = (char *)(DAT_0002ec4c + 0x2ebd0);
        }
        puts(pcVar17);
LAB_0002ebe4:
        FUN_000149a8(pcVar37,param_2);
        if (local_50.tm_gmtoff == *piVar30) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (uVar11 != 1) {
LAB_0001fd40:
        iVar41 = FUN_000141a0(*(undefined2 *)(param_2 + 0x14),uVar11,0);
        if (iVar41 == 0x12) {
          if ((*(uint *)(iVar29 + 4) & 0x200) != 0) {
            uVar43 = FUN_000258f4(param_2);
            iVar41 = (int)uVar43;
            uVar43 = FUN_000258f4((int)((ulonglong)uVar43 >> 0x20));
            FUN_000258f4((int)((ulonglong)uVar43 >> 0x20));
            FUN_0002591c(param_1);
            switch(iVar41) {
            case 1:
              iVar29 = DAT_00025d18 + 0x25c44;
              break;
            case 2:
              iVar29 = DAT_00025cdc + 0x25aec;
              break;
            case 3:
              iVar29 = DAT_00025cf4 + 0x25bd8;
              break;
            case 4:
              iVar29 = DAT_00025cf8 + 0x25be4;
              break;
            case 5:
              iVar29 = DAT_00025cfc + 0x25bf0;
              break;
            case 6:
              iVar29 = DAT_00025d00 + 0x25bfc;
              break;
            case 7:
              iVar29 = DAT_00025d04 + 0x25c08;
              break;
            case 8:
              iVar29 = DAT_00025d08 + 0x25c14;
              break;
            case 9:
              iVar29 = DAT_00025d0c + 0x25c20;
              break;
            case 10:
              iVar29 = DAT_00025d10 + 0x25c2c;
              break;
            default:
              iVar29 = DAT_00025d14 + 0x25c38;
            }
            if (*(char *)(param_2 + 0x12) == '\0') {
              iVar9 = DAT_00025ce0 + 0x25b00;
            }
            else {
              iVar9 = DAT_00025d1c + 0x25c50;
            }
            printf((char *)(DAT_00025ce4 + 0x25b10),iVar29,iVar9,(int)uVar43);
            if (*(char *)(param_2 + 0x12) == '\0') {
              putchar(10);
            }
            else {
              iVar29 = FUN_000258f4(param_2);
              if (iVar29 == 1) {
                iVar9 = DAT_00025d20 + 0x25c5c;
              }
              else if ((short)iVar29 == 0) {
                iVar9 = DAT_00025d24 + 0x25c68;
              }
              else if (iVar29 == 2) {
                iVar9 = DAT_00025d28 + 0x25c74;
              }
              else if (iVar29 == 0xffff) {
                iVar9 = DAT_00025d2c + 0x25c80;
              }
              else {
                iVar9 = DAT_00025ce8 + 0x25b5c;
              }
              printf((char *)(DAT_00025cec + 0x25b64),iVar29,iVar9);
            }
            param_1 = param_1 + 1;
            if (iVar41 == 1) {
              if (*(char *)(param_2 + 0x12) != '\0') goto LAB_00025bb8;
              uVar38 = **(uint **)(param_2 + 8);
              *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
              uVar38 = uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8
                       | uVar38 >> 0x18;
              *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -4;
              FUN_0002591c(param_1,param_2);
              pcVar17 = (char *)(DAT_00025cf0 + 0x25bb8);
            }
            else {
              if ((iVar41 != 2) || (*(char *)(param_2 + 0x12) == '\0')) goto LAB_00025bb8;
              uVar38 = **(uint **)(param_2 + 8);
              *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
              uVar38 = uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8
                       | uVar38 >> 0x18;
              *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -4;
              FUN_0002591c(param_1,param_2);
              pcVar17 = (char *)((int)&DAT_00025cdc + DAT_00025d30);
            }
            printf(pcVar17,uVar38);
LAB_00025bb8:
            FUN_000149a8(param_1,param_2);
            return;
          }
        }
        else if (iVar41 == 0x1b) {
          if ((*(uint *)(iVar29 + 4) & 0x80) != 0) {
            iVar41 = DAT_0002538c + 0x250ac;
            local_70 = *(int **)(iVar41 + DAT_00025390);
            pcVar37 = (char *)(DAT_00025394 + 0x250b8);
            local_50.tm_gmtoff = *local_70;
            local_6c = (int)param_1 << 1;
            pcVar17 = (char *)(DAT_00025398 + 0x250d4);
            pcVar34 = (char *)(DAT_0002539c + 0x250e0);
            do {
              iVar29 = *(int *)(param_2 + 0xc);
              if (iVar29 == 0) {
                if (local_50.tm_gmtoff == *local_70) {
                  return;
                }
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              pbVar39 = *(byte **)(param_2 + 8);
              *(byte **)(param_2 + 8) = pbVar39 + 1;
              *(int *)(param_2 + 0xc) = iVar29 + -1;
              bVar6 = *pbVar39;
              uVar38 = (uint)bVar6;
              uVar40 = (uVar38 & 0x3f) >> 2;
              if (bVar6 >> 6 == 1) {
                *(byte **)(param_2 + 8) = pbVar39 + 2;
                *(int *)(param_2 + 0xc) = iVar29 + -2;
                uVar11 = (uint)pbVar39[1];
              }
              else if (bVar6 >> 6 == 2) {
                uVar11 = (uint)*(ushort *)(pbVar39 + 1);
                *(byte **)(param_2 + 8) = pbVar39 + 3;
                *(int *)(param_2 + 0xc) = iVar29 + -3;
              }
              else {
                uVar11 = 0;
              }
              puVar32 = *(uint **)(iVar41 + DAT_000253a0);
              if ((int)param_1 < 0) {
                puVar32[3] = 0;
              }
              else {
                if (puVar32[3] == 0) {
                  if ((*puVar32 & 0x100) != 0) {
                    if ((*puVar32 & 0x200) == 0) {
                      printf((char *)(DAT_000253b0 + 0x25294),*(time_t *)(param_2 + 0x20),
                             *(undefined4 *)(param_2 + 0x24));
                    }
                    else {
                      local_5c = *(time_t *)(param_2 + 0x20);
                      localtime_r(&local_5c,(tm *)local_58);
                      local_74 = *(undefined4 *)(param_2 + 0x24);
                      local_78 = local_58._0_4_;
                      local_7c = local_58._4_4_;
                      local_80 = local_50.tm_sec;
                      printf((char *)(DAT_000253a4 + 0x251ec),local_50.tm_mday + 0x76c,
                             (char *)(local_50.tm_hour + 1),local_50.tm_min);
                    }
                  }
                  if (*(char *)(param_2 + 0x12) == '\0') {
                    uVar8 = 0x3c;
                  }
                  else {
                    uVar8 = 0x3e;
                  }
                  printf(pcVar37,uVar8);
                  puVar32[3] = 1;
                }
                else {
                  printf(pcVar34);
                }
                if (param_1 != (char *)0x0) {
                  printf(pcVar17,local_6c,0x20);
                }
              }
              uVar25 = uVar38 & 3;
              if (uVar25 == 2) {
                iVar29 = DAT_000253b4 + 0x252b0;
              }
              else if (uVar25 == 3) {
                iVar29 = DAT_000253b8 + 0x252bc;
              }
              else if (uVar25 == 1) {
                iVar29 = DAT_000253bc + 0x252c8;
              }
              else {
                iVar29 = DAT_000253a8 + 0x25254;
              }
              printf((char *)(DAT_000253ac + 0x25264),iVar29,uVar40,uVar11);
              if ((bVar6 & 3) == 0) {
                FUN_00024e54(uVar40,param_2,uVar11);
                psVar21 = (short *)(DAT_000253c0 + 0x252ec);
                do {
                  if ((*psVar21 == *(short *)(param_2 + 0x14)) &&
                     (psVar21[1] == *(short *)(param_2 + 0x16))) {
                    if ((puVar32[1] & 0x20000) == 0) {
                      FUN_000149a8(param_1);
                    }
                    else {
                      FUN_0002cb20(param_1 + 1,
                                   uVar25 * 0x304 + (short)(ushort)((uVar38 << 0x1a) >> 0x1c) * 0x30
                                   + DAT_000253c4 + 0x2532c);
                    }
                    goto LAB_00025274;
                  }
                  uVar25 = uVar25 + 1;
                  psVar21 = psVar21 + 0x182;
                } while (uVar25 != 10);
              }
              else if (uVar25 == 1) {
                FUN_00024e54(uVar40,param_2,uVar11);
              }
              else {
LAB_00025274:
                FUN_00024fa0(uVar40,param_2);
              }
              *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + uVar11;
              *(uint *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - uVar11;
            } while( true );
          }
        }
        else {
          if (iVar41 != 8) {
            pcVar17 = param_1;
            if ((*(uint *)(iVar29 + 4) & 8) == 0) {
              return;
            }
            goto LAB_00020010;
          }
          if ((*(uint *)(iVar29 + 4) & 0x10000) != 0) {
            FUN_0002bf28(param_1,param_2);
            return;
          }
        }
        goto LAB_0002000c;
      }
      pcVar17 = param_1 + 1;
      if ((*(uint *)(iVar29 + 4) & 0x20) == 0) goto LAB_00020010;
      local_50.tm_wday = *(undefined4 *)(DAT_00023878 + 0x233a8 + DAT_0002387c);
      puVar35 = *(undefined1 **)(param_2 + 8);
      local_50.tm_gmtoff = *(long *)local_50.tm_wday;
      uVar23 = *(ushort *)(puVar35 + 1);
      uVar2 = *(ushort *)(puVar35 + 3);
      *(undefined1 **)(param_2 + 8) = puVar35 + 5;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -5;
      FUN_000225ec();
      switch(*puVar35) {
      case 1:
        iVar41 = DAT_000238a0 + 0x234cc;
        break;
      case 2:
        iVar41 = DAT_00023880 + 0x23434;
        break;
      case 3:
        iVar41 = DAT_00023888 + 0x23484;
        break;
      case 4:
        iVar41 = DAT_0002388c + 0x23490;
        break;
      case 5:
        iVar41 = DAT_00023890 + 0x2349c;
        break;
      case 6:
        iVar41 = DAT_00023894 + 0x234a8;
        break;
      case 7:
        iVar41 = DAT_00023898 + 0x234b4;
        break;
      default:
        iVar41 = DAT_0002389c + 0x234c0;
      }
      pcVar17 = param_1 + 2;
      printf((char *)(DAT_00023884 + 0x23448),iVar41,(uVar23 & 0xff) << 8 | (uint)(uVar23 >> 8),
             (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8));
      switch(*puVar35) {
      case 1:
        FUN_000225ec(pcVar17,param_2);
        uVar8 = FUN_000223cc(param_2);
        printf((char *)(DAT_000238a4 + 0x234f0),uVar8);
        if (*(int *)(param_2 + 0xc) == 0) {
          puts((char *)(DAT_000238a8 + 0x2352c));
        }
        else {
          FUN_0001472c(0,param_2);
        }
        goto LAB_00023508;
      case 2:
        FUN_00023270(pcVar17,param_2);
        FUN_000225ec(pcVar17,param_2);
        uVar8 = FUN_000223cc(param_2);
        printf((char *)(DAT_000238ac + 0x23560),uVar8);
        break;
      case 3:
        uVar38 = FUN_000223cc(param_2);
        uVar40 = FUN_000223cc(param_2);
        FUN_000225ec(pcVar17,param_2);
        if (uVar40 < uVar38) {
          printf((char *)(DAT_000238b0 + 0x235a8),uVar40,uVar38);
        }
        else {
          printf((char *)(DAT_000238c0 + 0x23620),uVar40);
        }
        if (uVar40 != 0) {
          FUN_000225ec(pcVar17,param_2);
          if (uVar40 < 2) {
            iVar41 = DAT_000238b4 + 0x235d0;
          }
          else {
            iVar41 = DAT_000238c4 + 0x23630;
          }
          iVar29 = 0;
          pcVar34 = (char *)(DAT_000238bc + 0x235e4);
          printf((char *)(DAT_000238b8 + 0x235e0),iVar41);
          do {
            iVar29 = iVar29 + 1;
            uVar8 = FUN_000223f4(param_2);
            printf(pcVar34,uVar8);
          } while (iVar29 < (int)uVar40);
          putchar(10);
        }
        break;
      case 4:
        FUN_000225ec(pcVar17,param_2);
        uVar8 = FUN_000223f4(param_2);
        printf((char *)(DAT_000238c8 + 0x23654),uVar8);
        FUN_000225ec(pcVar17,param_2);
        uVar8 = FUN_000223cc(param_2);
        pcVar34 = (char *)(DAT_000238cc + 0x23678);
        goto LAB_00023674;
      case 5:
        iVar41 = FUN_000223cc(param_2);
        FUN_000225ec(pcVar17,param_2);
        printf((char *)(DAT_000238d0 + 0x236b0),iVar41);
        if (*(char *)(*(int *)(param_2 + 8) + iVar41) == '\0') {
          iVar9 = FUN_0002245c(param_2,iVar41);
          iVar29 = param_2;
          if (-1 < iVar9) {
            iVar29 = iVar9 * 0x30 + DAT_000238d4 + 0x236e8;
            *(undefined2 *)(iVar29 + 0x14) = 0;
          }
          FUN_000230a8(pcVar17,iVar29);
        }
        else {
          FUN_0002245c(param_2,iVar41);
        }
        iVar41 = *(int *)(param_2 + 8) + iVar41;
        goto LAB_000236fc;
      case 6:
        FUN_00023270(pcVar17,param_2);
        FUN_000225ec(pcVar17,param_2);
        uVar8 = FUN_000223cc(param_2);
        pcVar34 = (char *)(DAT_000238d8 + 0x23740);
LAB_00023674:
        printf(pcVar34,uVar8);
        FUN_00022854(pcVar17,param_2);
        break;
      case 7:
        iVar41 = FUN_000223cc(param_2);
        FUN_000225ec(pcVar17,param_2);
        printf((char *)(DAT_000238dc + 0x23768),iVar41);
        if (*(char *)(*(int *)(param_2 + 8) + iVar41) == '\0') {
          iVar9 = FUN_0002245c(param_2,iVar41);
          iVar29 = param_2;
          if (-1 < iVar9) {
            iVar29 = iVar9 * 0x30 + DAT_000238e0 + 0x237a0;
            *(undefined2 *)(iVar29 + 0x14) = 0;
          }
          iVar13 = *(int *)(iVar29 + 0xc);
          local_50.tm_isdst = 0;
          iVar9 = FUN_00022798(iVar29,&local_50.tm_isdst);
          if (iVar9 == 6) {
            pcVar37 = (char *)(DAT_000238e8 + 0x23858);
            pcVar34 = (char *)0x0;
            while (0 < *(int *)(iVar29 + 0xc) && iVar13 - *(int *)(iVar29 + 0xc) < local_50.tm_isdst
                  ) {
              FUN_000225ec(pcVar17,0);
              local_50.tm_yday = (int)(pcVar34 + 1);
              printf(pcVar37,pcVar34);
              FUN_000230a8(param_1 + 4,iVar29);
              pcVar34 = (char *)local_50.tm_yday;
            }
          }
          else {
            puts((char *)(DAT_000238e4 + 0x237d0));
            FUN_000149a8(pcVar17,iVar29);
          }
        }
        else {
          FUN_0002245c(param_2,iVar41);
        }
        iVar41 = *(int *)(param_2 + 8) + iVar41;
        goto LAB_000236fc;
      default:
        FUN_000149a8(pcVar17,param_2);
        goto LAB_00023508;
      }
      iVar41 = *(int *)(param_2 + 8);
LAB_000236fc:
      FUN_00022740(pcVar17,iVar41);
LAB_00023508:
      if (local_50.tm_gmtoff == *(int *)local_50.tm_wday) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (uVar11 != 0x19) {
      if (uVar11 < 0x1a) {
        if (uVar11 == 0x17) {
LAB_0001ff5c:
          if ((*(uint *)(iVar29 + 4) & 0x800) != 0) {
            piVar30 = *(int **)(DAT_000274cc + 0x27274 + DAT_000274d0);
            iVar41 = *piVar30;
            puVar32 = *(uint **)(DAT_000274cc + 0x27274 + DAT_000274d4);
            if ((int)param_1 < 0) {
              puVar32[3] = 0;
            }
            else {
              if (puVar32[3] == 0) {
                if ((*puVar32 & 0x100) != 0) {
                  if ((*puVar32 & 0x200) == 0) {
                    printf((char *)(DAT_000274ec + 0x27404),*(int *)(param_2 + 0x20),
                           *(undefined4 *)(param_2 + 0x24));
                  }
                  else {
                    local_58._4_4_ = *(int *)(param_2 + 0x20);
                    localtime_r((time_t *)(local_58 + 4),(tm *)(local_58 + 8));
                    local_5c = *(time_t *)(param_2 + 0x24);
                    printf((char *)(DAT_000274d8 + 0x27310),(char *)(local_50.tm_year + 0x76c),
                           local_50.tm_mon + 1,local_50.tm_mday);
                  }
                }
                if (*(char *)(param_2 + 0x12) == '\0') {
                  uVar8 = 0x3c;
                }
                else {
                  uVar8 = 0x3e;
                }
                printf((char *)(DAT_000274dc + 0x2732c),uVar8);
                puVar32[3] = 1;
              }
              else {
                printf((char *)(DAT_000274f0 + 0x27414));
              }
              if (param_1 != (char *)0x0) {
                printf((char *)(DAT_000274e0 + 0x27358),(int)param_1 * 2,0x20);
              }
            }
            pbVar39 = *(byte **)(param_2 + 8);
            uVar23 = *(ushort *)(pbVar39 + 1);
            *(byte **)(param_2 + 8) = pbVar39 + 1;
            iVar29 = *(int *)(param_2 + 0xc);
            *(int *)(param_2 + 0xc) = iVar29 + -1;
            bVar6 = *pbVar39;
            *(int *)(param_2 + 0xc) = iVar29 + -3;
            *(byte **)(param_2 + 8) = pbVar39 + 3;
            if (uVar11 == 0x17) {
              iVar29 = DAT_000274f4 + 0x27424;
            }
            else {
              iVar29 = DAT_000274e4 + 0x273a4;
            }
            if ((bVar6 & 2) == 0) {
              iVar9 = DAT_000274e8 + 0x273b4;
            }
            else {
              iVar9 = DAT_000274f8 + 0x27430;
            }
            switch(bVar6 & 0xc) {
            case 0:
              iVar13 = DAT_00027510 + 0x274b8;
              break;
            case 4:
              iVar13 = DAT_000274fc + 0x2743c;
              break;
            case 8:
              iVar13 = DAT_00027504 + 0x27494;
              break;
            case 0xc:
              iVar13 = DAT_00027508 + 0x274a0;
              break;
            default:
              iVar13 = DAT_0002750c + 0x274ac;
            }
            printf((char *)(DAT_00027500 + 0x27450),iVar29,iVar9,iVar13);
            if ((ushort)(uVar23 << 8 | uVar23 >> 8 & 0xfffd) == 0x110c) {
              FUN_000284f0(param_1 + 1,param_2,bVar6,uVar11);
            }
            else {
              FUN_000149a8(param_1 + 1,param_2);
            }
            if (iVar41 == *piVar30) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          goto LAB_0002000c;
        }
      }
      else {
        if (uVar11 == 0x1b) goto LAB_0001ff5c;
        if (uVar11 == 0x1f) {
          if ((*(uint *)(iVar29 + 4) & 0x1000) != 0) goto LAB_0001f908;
          goto LAB_0002000c;
        }
      }
      goto LAB_0001fd40;
    }
    if ((*(uint *)(iVar29 + 4) & 0x400) == 0) goto LAB_0002000c;
    if (*(short *)(param_2 + 0x18) != 1) {
      if (*(short *)(param_2 + 0x18) == 2) {
        FUN_00025e3c();
        uVar38 = FUN_00025d34(param_2);
        uVar40 = FUN_00025d34(param_2);
        local_50.tm_gmtoff = FUN_00025d54(param_2);
        uVar11 = **(uint **)(param_2 + 8);
        local_50.tm_zone =
             (char *)(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                     uVar11 >> 0x18);
        *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 2;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -8;
        if ((uVar38 & 0x20) == 0) {
          iVar41 = DAT_00027238 + 0x270e0;
        }
        else {
          iVar41 = DAT_00027248 + 0x27134;
        }
        if ((uVar38 & 0x10) == 0) {
          iVar29 = DAT_0002723c + 0x270f0;
        }
        else {
          iVar29 = DAT_0002724c + 0x27140;
        }
        local_50.tm_wday = uVar38 & 0xf;
        if ((uVar40 & 0x80) == 0) {
          local_50.tm_yday = DAT_00027240 + 0x27104;
        }
        else {
          local_50.tm_yday = DAT_00027250 + 0x2714c;
        }
        local_50.tm_isdst = uVar40 & 0x7f;
        printf((char *)(DAT_00027244 + 0x27124),(uVar38 & 0x3fff) >> 6,iVar41,iVar29);
      }
      goto switchD_00026cb0_default;
    }
    FUN_00025e3c();
    uVar38 = FUN_00025d34(param_2);
    uVar40 = uVar38 & 0xc;
    if (uVar40 == 4) {
      uVar11 = FUN_00025d34(param_2);
    }
    else {
      uVar11 = 0;
    }
    if ((uVar38 & 8) == 0) {
      uVar40 = FUN_00025d34(param_2);
      switch(uVar40 & 0x7f) {
      case 1:
        iVar41 = DAT_000271f8 + 0x26d98;
        break;
      case 2:
        iVar41 = DAT_000271b8 + 0x26c70;
        break;
      case 3:
        iVar41 = DAT_000271c8 + 0x26d08;
        break;
      case 4:
        iVar41 = DAT_000271cc + 0x26d14;
        break;
      case 5:
        iVar41 = DAT_000271d0 + 0x26d20;
        break;
      case 6:
        iVar41 = DAT_000271d4 + 0x26d2c;
        break;
      case 7:
        iVar41 = DAT_000271d8 + 0x26d38;
        break;
      case 8:
        iVar41 = DAT_000271dc + 0x26d44;
        break;
      case 9:
        iVar41 = DAT_000271e0 + 0x26d50;
        break;
      case 10:
        iVar41 = DAT_000271e4 + 0x26d5c;
        break;
      case 0xb:
        iVar41 = DAT_000271e8 + 0x26d68;
        break;
      case 0xc:
        iVar41 = DAT_000271ec + 0x26d74;
        break;
      case 0xd:
        iVar41 = DAT_000271f0 + 0x26d80;
        break;
      default:
        iVar41 = DAT_000271f4 + 0x26d8c;
      }
    }
    else {
      switch(uVar40) {
      case 0:
        iVar41 = DAT_00027258 + 0x271a8;
        break;
      case 4:
        uVar40 = 0;
        iVar41 = (int)&DAT_000271b8 + DAT_0002725c;
        break;
      case 8:
        uVar40 = 0;
        iVar41 = DAT_00027254 + 0x2719c;
        break;
      case 0xc:
        uVar40 = 0;
        iVar41 = DAT_000271fc + 0x26da8;
        break;
      default:
        uVar40 = 0;
        iVar41 = DAT_000271c4 + 0x26cfc;
      }
    }
    uVar25 = uVar38 & 3;
    if (uVar25 == 2) {
      iVar29 = DAT_00027200 + 0x26db4;
    }
    else if (uVar25 == 3) {
      iVar29 = DAT_00027204 + 0x26dc0;
    }
    else if (uVar25 == 0) {
      iVar29 = DAT_00027208 + 0x26dcc;
    }
    else {
      iVar29 = DAT_000271bc + 0x26c94;
    }
    local_50.tm_wday = uVar11;
    printf((char *)(DAT_000271c0 + 0x26cac),iVar41,iVar29,(uVar38 & 0xfff) >> 4);
    switch(uVar40 & 0x7f) {
    case 1:
      if (uVar25 == 2) {
        while (1 < *(uint *)(param_2 + 0xc)) {
          FUN_00025e3c(param_1 + 1,param_2);
          uVar38 = FUN_00025d34(param_2);
          FUN_00025d34(param_2);
          if ((uVar38 & 2) == 0) {
            local_50.tm_wday = DAT_00027220 + 0x26e70;
          }
          else {
            local_50.tm_wday = DAT_0002722c + 0x26eb0;
          }
          printf((char *)(DAT_00027224 + 0x26e7c),(uVar38 & 0x3ff) >> 2);
        }
        goto switchD_00026cb0_default;
      }
      break;
    case 2:
      goto LAB_00026eb0;
    case 3:
      if (uVar25 == 0) {
        FUN_00025e3c(param_1 + 1,param_2);
        uVar8 = FUN_00025d34(param_2);
        uVar44 = FUN_00025d34(param_2,uVar8);
        printf((char *)(DAT_00027230 + 0x26f4c),(uint)((uVar44 & 0x3ff000003ff) >> 0x22),
               (uint)(uVar44 & 0x3ff000003ff) >> 2);
        goto LAB_00026edc;
      }
LAB_00026ef0:
      if (uVar25 != 3) goto switchD_00026cb0_default;
      FUN_00025e3c(param_1 + 1,param_2);
      FUN_00025d34(param_2);
      pcVar17 = (char *)FUN_00025d7c();
      puts(pcVar17);
      goto LAB_00026e90;
    case 4:
      if (uVar25 != 2) {
        if (uVar25 != 3) {
          if (uVar25 != 0) goto switchD_00026cb0_default;
          goto LAB_00026f74;
        }
        goto LAB_00026e90;
      }
      goto LAB_00026edc;
    case 5:
      if (uVar25 != 0) goto LAB_00026ef0;
LAB_00026f74:
      FUN_00025fbc(param_1 + 1,param_2);
LAB_00026edc:
      FUN_00026058(param_1 + 1,param_2);
      goto switchD_00026cb0_default;
    case 6:
      goto LAB_00026f94;
    case 7:
      goto LAB_00026fa8;
    case 8:
LAB_00026f94:
      FUN_00025fe8(param_1 + 1,uVar38,param_2);
      goto switchD_00026cb0_default;
    case 9:
LAB_00026fa8:
      FUN_00026008(param_1 + 1,uVar38,param_2);
      goto switchD_00026cb0_default;
    case 10:
      if (uVar25 != 0) goto switchD_00026cb0_default;
      goto LAB_00026ed0;
    case 0xb:
      if (uVar25 != 2) {
        if (uVar25 == 3) goto LAB_00026e90;
        if (uVar25 != 0) goto switchD_00026cb0_default;
        FUN_00025fbc(param_1 + 1,param_2);
      }
      FUN_0001472c(param_1 + 2,param_2,*(undefined4 *)(param_2 + 0xc));
      *(int *)(param_2 + 8) = *(int *)(param_2 + 0xc) + *(int *)(param_2 + 8);
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto switchD_00026cb0_default;
    case 0xc:
LAB_00026eb0:
      if (uVar25 == 2) goto LAB_00026edc;
      if (uVar25 != 3) {
        if (uVar25 == 0) {
LAB_00026ed0:
          FUN_00025fbc(param_1 + 1,param_2);
        }
        goto switchD_00026cb0_default;
      }
      goto LAB_00026e90;
    case 0xd:
      if (uVar25 == 0) {
        FUN_00025e3c(param_1 + 1,param_2);
        uVar8 = FUN_00025d34(param_2);
        uVar43 = FUN_00025d54(param_2,uVar8);
        printf((char *)(DAT_00027234 + 0x27078),((uint)((ulonglong)uVar43 >> 0x20) & 0x3ff) >> 2,
               (uint)uVar43 / 10 & 0xffff,(uint)uVar43 % 10);
        goto switchD_00026cb0_default;
      }
      break;
    default:
      goto switchD_00026cb0_default;
    }
    if (uVar25 == 3) {
LAB_00026e90:
      FUN_00025f90(param_1 + 1,param_2);
    }
switchD_00026cb0_default:
    FUN_000149a8(param_1,param_2);
    return;
  }
LAB_0001ff28:
  if ((*(uint *)(iVar29 + 4) & 0x100) == 0) goto LAB_0002000c;
  iVar41 = DAT_00025838 + 0x253d8;
  piVar30 = *(int **)(iVar41 + DAT_0002583c);
  pbVar39 = *(byte **)(param_2 + 8);
  iVar29 = *piVar30;
  *(byte **)(param_2 + 8) = pbVar39 + 1;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
  bVar6 = *pbVar39;
  bVar22 = bVar6 & 0xf0;
  if (bVar22 == 0x50) {
LAB_000256c4:
    bVar16 = bVar6 & 3;
    if (bVar16 == 2) {
      iVar9 = DAT_000258ac + 0x2571c;
    }
    else if (bVar16 == 3) {
      iVar9 = DAT_000258b0 + 0x25728;
    }
    else if (bVar16 == 1) {
      iVar9 = DAT_000258b4 + 0x25734;
    }
    else {
      iVar9 = DAT_0002589c + 0x256ec;
    }
    goto LAB_0002543c;
  }
  if (0x50 < bVar22) {
    if (bVar22 != 0x70) {
      if (0x70 < bVar22) {
        if ((bVar22 != 0xa0) && (bVar22 != 0xb0)) {
          iVar9 = DAT_00025860 + 0x255a0;
          goto LAB_0002543c;
        }
        goto LAB_000256c4;
      }
      if (bVar22 != 0x60) {
        iVar9 = DAT_0002585c + 0x25584;
        goto LAB_0002543c;
      }
    }
    if ((bVar6 & 1) == 0) {
      iVar9 = DAT_000258a8 + 0x25710;
    }
    else {
      iVar9 = DAT_00025898 + 0x256c4;
    }
    goto LAB_0002543c;
  }
  if (bVar22 == 0x10) {
    switch(bVar6 & 0xf) {
    case 0:
      iVar9 = DAT_000258a4 + 0x25704;
      break;
    case 1:
      iVar9 = DAT_00025880 + 0x25674;
      break;
    case 2:
      iVar9 = DAT_00025888 + 0x2568c;
      break;
    case 3:
      iVar9 = DAT_0002588c + 0x25698;
      break;
    case 4:
      iVar9 = DAT_00025890 + 0x256a4;
      break;
    case 5:
      iVar9 = DAT_00025894 + 0x256b0;
      break;
    default:
      iVar9 = DAT_00025884 + 0x25680;
    }
    goto LAB_0002543c;
  }
  if (bVar22 == 0x40) goto LAB_000256c4;
  if ((bVar6 & 0xf0) != 0) {
    iVar9 = DAT_00025840 + 0x25440;
    goto LAB_0002543c;
  }
  switch(bVar6) {
  case 0:
    iVar9 = DAT_000258a0 + 0x256f8;
    goto LAB_0002543c;
  case 1:
    iVar9 = DAT_00025864 + 0x255f8;
    goto LAB_0002543c;
  case 2:
    iVar9 = DAT_00025868 + 0x25604;
    goto LAB_0002543c;
  case 3:
    iVar9 = DAT_0002586c + 0x25610;
    goto LAB_0002543c;
  case 4:
    iVar9 = DAT_00025870 + 0x2561c;
    goto LAB_0002543c;
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
    iVar9 = DAT_00025874 + 0x25628;
    goto LAB_0002543c;
  case 0xf:
    iVar9 = DAT_00025878 + 0x25634;
    goto LAB_0002543c;
  }
  iVar9 = DAT_0002587c + 0x25640;
LAB_0002543c:
  puVar32 = *(uint **)(iVar41 + DAT_00025844);
  if ((int)param_1 < 0) {
    puVar32[3] = 0;
  }
  else {
    if (puVar32[3] == 0) {
      if ((*puVar32 & 0x100) != 0) {
        if ((*puVar32 & 0x200) == 0) {
          printf((char *)(DAT_000258b8 + 0x25744),*(int *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_58._4_4_ = *(int *)(param_2 + 0x20);
          localtime_r((time_t *)(local_58 + 4),(tm *)(local_58 + 8));
          local_5c = *(time_t *)(param_2 + 0x24);
          printf((char *)(DAT_00025848 + 0x254c4),(char *)(local_50.tm_year + 0x76c),
                 local_50.tm_mon + 1,local_50.tm_mday);
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar8 = 0x3c;
      }
      else {
        uVar8 = 0x3e;
      }
      printf((char *)(DAT_0002584c + 0x254e0),uVar8);
      puVar32[3] = 1;
    }
    else {
      printf((char *)(DAT_000258bc + 0x25754));
    }
    if (param_1 != (char *)0x0) {
      printf((char *)(DAT_00025850 + 0x2550c),(int)param_1 << 1,0x20);
    }
  }
  if (bVar22 == 0x60) {
    iVar41 = DAT_000258cc + 0x257c4;
  }
  else if (bVar22 < 0x61) {
    if (bVar22 == 0x10) {
      iVar41 = DAT_000258d0 + 0x257d0;
    }
    else if (bVar22 < 0x11) {
      if ((bVar6 & 0xf0) == 0) {
        iVar41 = DAT_000258d4 + 0x257dc;
      }
      else {
        iVar41 = DAT_00025854 + 0x25538;
      }
    }
    else if (bVar22 == 0x40) {
      iVar41 = DAT_000258d8 + 0x257e8;
    }
    else if (bVar22 == 0x50) {
      iVar41 = DAT_000258dc + 0x257f4;
    }
    else {
      iVar41 = DAT_000258c0 + 0x25774;
    }
  }
  else if (bVar22 == 0x90) {
    iVar41 = DAT_000258e0 + 0x25800;
  }
  else if (bVar22 < 0x91) {
    if (bVar22 == 0x70) {
      iVar41 = DAT_000258e4 + 0x2580c;
    }
    else if (bVar22 == 0x80) {
      iVar41 = DAT_000258e8 + 0x25818;
    }
    else {
      iVar41 = DAT_000258c4 + 0x2579c;
    }
  }
  else if (bVar22 == 0xa0) {
    iVar41 = DAT_000258ec + 0x25824;
  }
  else if (bVar22 == 0xb0) {
    iVar41 = DAT_000258f0 + 0x25830;
  }
  else {
    iVar41 = DAT_000258c8 + 0x257b8;
  }
  printf((char *)(DAT_00025858 + 0x25544),iVar41,iVar9);
  FUN_000149a8(param_1,param_2);
  if (iVar29 == *piVar30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0002008c @ 0002008c size=476 ===== */

void FUN_0002008c(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  char *__s;
  void *__dest;
  int *piVar3;
  FILE *__stream;
  undefined4 uVar4;
  uint uVar5;
  size_t __size;
  size_t __n;
  int iVar6;
  
  uVar5 = (*(uint *)(param_2 + 0x1c) & 3) >> 1;
  if (*(uint *)(param_2 + 0x1c) == 0) {
    uVar5 = 1;
  }
  iVar6 = DAT_00020268 + 0x200b8;
  if (uVar5 == 0) {
    piVar3 = (int *)FUN_0001ded0(*(undefined2 *)(param_2 + 0x14));
    if (piVar3 != (int *)0x0) {
      if (*piVar3 != 0) {
        if ((uint)(piVar3[1] - piVar3[3]) < *(size_t *)(param_2 + 0xc)) {
          FUN_000149a8(param_1,param_2);
        }
        else {
          memcpy((void *)(*piVar3 + piVar3[3]),*(void **)(param_2 + 8),*(size_t *)(param_2 + 0xc));
          iVar6 = piVar3[3] + *(int *)(param_2 + 0xc);
          piVar3[3] = iVar6;
          if (iVar6 != piVar3[1]) {
            return;
          }
          FUN_0001ea18(param_1,piVar3);
        }
        free((void *)*piVar3);
        *piVar3 = 0;
        return;
      }
      goto LAB_000200d0;
    }
    __s = (char *)(DAT_00020278 + 0x201ec);
    __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_0002026c);
  }
  else {
    __size = **(ushort **)(param_2 + 8) + 4;
    if ((int)__size < (int)*(size_t *)(param_2 + 0xc)) goto LAB_000200d0;
    if (__size == *(size_t *)(param_2 + 0xc)) {
      FUN_0001ea18();
      return;
    }
    puVar2 = (undefined4 *)FUN_0001ded0(*(undefined2 *)(param_2 + 0x14));
    if (puVar2 != (undefined4 *)0x0) {
      if ((void *)*puVar2 != (void *)0x0) {
        free((void *)*puVar2);
      }
      __dest = malloc(__size);
      *puVar2 = __dest;
      if (__dest == (void *)0x0) {
        perror((char *)(DAT_00020274 + 0x2014c));
        return;
      }
      __n = *(size_t *)(param_2 + 0xc);
      memcpy(__dest,*(void **)(param_2 + 8),__n);
      puVar2[1] = __size;
      puVar2[2] = *puVar2;
      uVar1 = *(undefined2 *)(param_2 + 0x10);
      puVar2[3] = __n;
      *(undefined2 *)(puVar2 + 4) = uVar1;
      *(undefined1 *)((int)puVar2 + 0x12) = *(undefined1 *)(param_2 + 0x12);
      uVar4 = *(undefined4 *)(param_2 + 0x24);
      puVar2[8] = *(undefined4 *)(param_2 + 0x20);
      puVar2[9] = uVar4;
      *(undefined2 *)(puVar2 + 5) = *(undefined2 *)(param_2 + 0x14);
      *(undefined2 *)((int)puVar2 + 0x16) = *(undefined2 *)(param_2 + 0x16);
      *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(param_2 + 0x18);
      *(undefined1 *)((int)puVar2 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
      *(undefined1 *)((int)puVar2 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
      puVar2[10] = *(undefined4 *)(param_2 + 0x28);
      puVar2[0xb] = *(undefined4 *)(param_2 + 0x2c);
      return;
    }
    __s = (char *)(DAT_00020270 + 0x20110);
    __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_0002026c);
  }
  fputs(__s,__stream);
LAB_000200d0:
  FUN_000149a8(param_1,param_2);
  return;
}



/* ===== FUN_0002027c @ 0002027c size=192 ===== */

void FUN_0002027c(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = DAT_0002033c + 0x2049c;
  do {
    iVar1 = iVar2 * 10;
    if (*(ushort *)(iVar1 + iVar4) == param_1) {
      iVar3 = iVar4 + iVar1;
      iVar2 = DAT_0002033c + iVar1;
      *(undefined2 *)(iVar4 + iVar1) = 0;
      *(undefined2 *)(iVar3 + 2) = 0;
      *(undefined2 *)(iVar3 + 4) = 0;
      *(undefined2 *)(iVar3 + 6) = 0;
      *(undefined1 *)((int)&DAT_000204a4 + iVar2) = 0;
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x14);
  iVar2 = 0;
  iVar4 = DAT_00020340 + 0x204c8;
  do {
    if (*(ushort *)(iVar4 + 200) == param_1) {
      iVar4 = DAT_00020344 + 0x20520 + iVar2 * 10;
      iVar2 = DAT_00020344 + iVar2 * 10;
      *(undefined2 *)(iVar4 + 200) = 0;
      *(undefined2 *)(iVar4 + 0xca) = 0;
      *(undefined2 *)(iVar4 + 0xcc) = 0;
      *(undefined2 *)(iVar4 + 0xce) = 0;
      *(undefined1 *)(iVar2 + 0x205f0) = 0;
      return;
    }
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 10;
  } while (iVar2 != 0x14);
  return;
}



/* ===== FUN_00020348 @ 00020348 size=128 ===== */

void FUN_00020348(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000203c8 + 0x2035c + DAT_000203cc);
  if (param_1 < 0) {
    *(undefined4 *)(iVar2 + 0xc) = 0;
    return;
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x20398);
    (*pcVar1)();
  }
  printf((char *)(DAT_000203d0 + 0x203a8));
  if (param_1 == 0) {
    return;
  }
  printf((char *)(DAT_000203d4 + 0x203c4),param_1 * 2,0x20);
  return;
}



/* ===== FUN_000203d8 @ 000203d8 size=204 ===== */

void FUN_000203d8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *__format;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  iVar2 = DAT_000204b0;
  iVar1 = DAT_000204ac;
  uVar5 = (*(ushort *)(param_2 + 1) - 3) / 3;
  pcVar7 = (char *)(DAT_000204a4 + 0x2041c);
  printf((char *)(DAT_000204a8 + 0x20408),param_3,uVar5);
  FUN_00020348(param_1 + 2);
  iVar6 = 0;
  printf((char *)(DAT_000204b4 + 0x20448),(uint)*(byte *)(param_2 + 3),(uint)*(byte *)(param_2 + 4),
         (uint)*(byte *)(param_2 + 5));
  do {
    if ((int)uVar5 <= iVar6) {
      return;
    }
    FUN_00020348(param_1 + 2);
    uVar3 = (uint)*(byte *)(param_2 + 6);
    uVar4 = (uint)*(byte *)(param_2 + 7);
    __format = (char *)(iVar2 + 0x2042c);
    if (uVar3 < 0xc9) {
      if (uVar4 != 1) {
        uVar4 = uVar4 + uVar3;
        __format = pcVar7;
        goto LAB_0002049c;
      }
      printf((char *)(iVar1 + 0x20424),uVar3,(int)*(char *)(param_2 + 8));
    }
    else {
LAB_0002049c:
      printf(__format,uVar3,uVar4);
    }
    iVar6 = iVar6 + 1;
    param_2 = param_2 + 3;
  } while( true );
}



/* ===== FUN_000204b8 @ 000204b8 size=328 ===== */

void FUN_000204b8(uint param_1,undefined1 *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  
  iVar3 = DAT_00020608;
  iVar2 = DAT_00020604;
  iVar1 = DAT_00020600;
  uVar7 = param_1;
  puVar6 = param_2;
  uVar5 = param_3;
  FUN_00020348();
  printf((char *)(DAT_0002060c + 0x204ec),param_3);
  do {
    if (param_3 < 4) {
      return;
    }
    uVar8 = (uint)*(ushort *)(param_2 + 1);
    FUN_00020348(param_1 + 1);
    switch(*param_2) {
    case 1:
      if (uVar8 == 6) {
        uVar5 = (uint)(byte)param_2[8];
        puVar6 = (undefined1 *)(uint)(byte)param_2[7];
        uVar7 = (uint)(byte)param_2[6];
        printf((char *)(DAT_00020610 + 0x2056c),(uint)(byte)param_2[3],(uint)(byte)param_2[4],
               (uint)(byte)param_2[5],uVar7,puVar6,uVar5,param_4);
      }
      break;
    case 2:
      iVar4 = DAT_00020614 + 0x20594;
      goto LAB_00020590;
    case 3:
      iVar4 = DAT_00020618 + 0x205ac;
LAB_00020590:
      FUN_000203d8(param_1,param_2,iVar4);
      break;
    case 4:
      if (uVar8 == 4) {
        uVar7 = (uint)(byte)param_2[6];
        printf((char *)(iVar3 + 0x204f8),(uint)(byte)param_2[3],(uint)(byte)param_2[4],
               (uint)(byte)param_2[5],uVar7,puVar6,uVar5,param_4);
      }
      break;
    case 5:
      if (uVar8 == 5) {
        printf((char *)(iVar2 + 0x204f0),(uint)(byte)param_2[3],(uint)*(ushort *)(param_2 + 4),
               (uint)*(ushort *)(param_2 + 6),uVar7,puVar6,uVar5,param_4);
      }
      break;
    default:
      printf((char *)(iVar1 + 0x204e8));
    }
    param_2 = param_2 + uVar8 + 3;
    param_3 = (param_3 - uVar8) - 3 & 0xffff;
  } while( true );
}



/* ===== FUN_0002061c @ 0002061c size=32 ===== */

undefined1 FUN_0002061c(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar1 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return *puVar1;
}



/* ===== FUN_0002063c @ 0002063c size=308 ===== */

void FUN_0002063c(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00020770 + 0x2064c + DAT_00020774);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_00020770 + 0x2064c + DAT_00020778);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_00020788 + 0x20754),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_0002077c + 0x206e8),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_00020780 + 0x20704),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_0002078c + 0x20764));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_00020784 + 0x20730),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00020790 @ 00020790 size=608 ===== */

void FUN_00020790(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  uVar5 = FUN_0002061c(param_2);
  uVar6 = FUN_0002061c((int)((ulonglong)uVar5 >> 0x20));
  uVar7 = FUN_0002061c((int)((ulonglong)uVar6 >> 0x20));
  uVar8 = FUN_0002061c((int)(uVar7 >> 0x20));
  uVar9 = FUN_0002061c((int)((ulonglong)uVar8 >> 0x20));
  uVar1 = FUN_0002061c((int)(uVar9 >> 0x20));
  FUN_0002063c(param_1);
  printf((char *)(DAT_000209f0 + 0x20804),(int)uVar5,(int)uVar6,(int)uVar7);
  FUN_0002063c(param_1,param_2);
  printf((char *)(DAT_000209f4 + 0x20828),(int)uVar8,(int)uVar9,uVar1);
  FUN_0002063c(param_1,param_2);
  switch((int)uVar5) {
  case 0:
    iVar2 = DAT_00020a40 + 0x20984;
    break;
  case 1:
    iVar2 = DAT_000209f8 + 0x20860;
    break;
  case 2:
    iVar2 = DAT_00020a30 + 0x20954;
    break;
  case 3:
    iVar2 = DAT_00020a34 + 0x20960;
    break;
  case 4:
    iVar2 = DAT_00020a38 + 0x2096c;
    break;
  default:
    iVar2 = DAT_00020a3c + 0x20978;
  }
  if ((int)uVar6 == 0) {
    iVar3 = DAT_00020a44 + 0x20990;
  }
  else {
    iVar3 = DAT_000209fc + 0x20870;
  }
  printf((char *)(DAT_00020a00 + 0x20878),iVar2,iVar3);
  FUN_0002063c(param_1,param_2);
  if ((uVar7 & 1) == 0) {
    iVar2 = DAT_00020a04 + 0x20898;
  }
  else {
    iVar2 = DAT_00020a48 + 0x2099c;
  }
  if ((uVar7 & 4) == 0) {
    iVar3 = DAT_00020a08 + 0x208a8;
  }
  else {
    iVar3 = DAT_00020a4c + 0x209a8;
  }
  printf((char *)(DAT_00020a0c + 0x208b0),iVar2,iVar3);
  FUN_0002063c(param_1,param_2);
  if ((uVar9 & 1) == 0) {
    iVar2 = DAT_00020a10 + 0x208d0;
  }
  else {
    iVar2 = DAT_00020a50 + 0x209b4;
  }
  if ((uVar9 & 2) == 0) {
    iVar3 = DAT_00020a14 + 0x208e0;
  }
  else {
    iVar3 = DAT_00020a54 + 0x209c0;
  }
  if ((uVar9 & 4) == 0) {
    iVar4 = DAT_00020a18 + 0x208f0;
  }
  else {
    iVar4 = DAT_00020a58 + 0x209cc;
  }
  printf((char *)(DAT_00020a1c + 0x208f8),iVar2,iVar3,iVar4);
  FUN_0002063c(param_1,param_2);
  if ((uVar1 & 1) == 0) {
    iVar2 = DAT_00020a20 + 0x20918;
  }
  else {
    iVar2 = DAT_00020a5c + 0x209d8;
  }
  if ((uVar1 & 2) == 0) {
    iVar3 = DAT_00020a24 + 0x20928;
  }
  else {
    iVar3 = DAT_00020a60 + 0x209e4;
  }
  if ((uVar1 & 4) == 0) {
    iVar4 = DAT_00020a28 + 0x20938;
  }
  else {
    iVar4 = (int)&DAT_000209f0 + DAT_00020a64;
  }
  printf((char *)(DAT_00020a2c + 0x20940),iVar2,iVar3,iVar4);
  return;
}



/* ===== FUN_00021024 @ 00021024 size=32 ===== */

undefined1 FUN_00021024(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar1 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return *puVar1;
}



/* ===== FUN_00021044 @ 00021044 size=40 ===== */

ushort FUN_00021044(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 8);
  *(ushort **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -2;
  uVar1 = *puVar2;
  return uVar1 << 8 | uVar1 >> 8;
}



/* ===== FUN_0002106c @ 0002106c size=628 ===== */

int FUN_0002106c(uint param_1)

{
  if (param_1 == 0xe) {
    return DAT_00021300 + 0x211b4;
  }
  if (0xe < param_1) {
    if (param_1 == 0x17) {
      return DAT_00021330 + 0x21244;
    }
    if (0x17 < param_1) {
      if (param_1 == 0x1d) {
        return DAT_0002134c + 0x21298;
      }
      if (0x1d < param_1) {
        if (param_1 == 0x52) {
          return DAT_0002135c + 0x212c8;
        }
        if (param_1 != 0xd2) {
          if (param_1 != 0x1e) {
            return DAT_000212fc + 0x211a8;
          }
          return (int)&DAT_000212e0 + DAT_00021364;
        }
        return DAT_00021360 + 0x212d4;
      }
      if (param_1 == 0x19) {
        return DAT_00021350 + 0x212a4;
      }
      if (0x18 < param_1) {
        if (param_1 != 0x1b) {
          return DAT_000212f8 + 0x21184;
        }
        return DAT_00021358 + 0x212bc;
      }
      return DAT_00021354 + 0x212b0;
    }
    if (param_1 == 0x11) {
      return DAT_00021334 + 0x21250;
    }
    if (0x11 < param_1) {
      if (param_1 == 0x13) {
        return DAT_00021340 + 0x21274;
      }
      if (0x12 < param_1) {
        if (param_1 != 0x16) {
          return DAT_000212f4 + 0x21158;
        }
        return DAT_00021348 + 0x2128c;
      }
      return DAT_00021344 + 0x21280;
    }
    if (param_1 == 0xf) {
      return DAT_00021338 + 0x2125c;
    }
    if (param_1 != 0x10) {
      return DAT_000212f0 + 0x21138;
    }
    return DAT_0002133c + 0x21268;
  }
  if (param_1 == 7) {
    return DAT_00021304 + 0x211c0;
  }
  if (7 < param_1) {
    if (param_1 == 10) {
      return DAT_0002131c + 0x21208;
    }
    if (10 < param_1) {
      if (param_1 == 0xc) {
        return DAT_00021328 + 0x2122c;
      }
      if (param_1 < 0xd) {
        return DAT_000212ec + 0x21104;
      }
      return DAT_0002132c + 0x21238;
    }
    if (param_1 == 8) {
      return DAT_00021320 + 0x21214;
    }
    if (param_1 != 9) {
      return DAT_000212e8 + 0x210ec;
    }
    return DAT_00021324 + 0x21220;
  }
  if (param_1 == 3) {
    return DAT_00021308 + 0x211cc;
  }
  if (3 < param_1) {
    if (param_1 == 5) {
      return DAT_00021314 + 0x211f0;
    }
    if (param_1 < 6) {
      return DAT_000212e4 + 0x210c4;
    }
    return DAT_00021318 + 0x211fc;
  }
  if (param_1 == 1) {
    return DAT_0002130c + 0x211d8;
  }
  if (param_1 != 2) {
    return DAT_000212e0 + 0x210ac;
  }
  return DAT_00021310 + 0x211e4;
}



/* ===== FUN_00021368 @ 00021368 size=160 ===== */

void FUN_00021368(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int extraout_r1;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  char *__format;
  byte abStack_2c [16];
  int local_1c;
  
  iVar2 = 0xf;
  piVar5 = *(int **)(DAT_00021408 + 0x2137c + DAT_0002140c);
  local_1c = *piVar5;
  do {
    bVar1 = FUN_00021024(param_1,iVar2);
    abStack_2c[extraout_r1] = bVar1;
    iVar2 = extraout_r1 + -1;
  } while (extraout_r1 != 0);
  uVar3 = 0;
  __format = (char *)(DAT_00021410 + 0x213b8);
  pbVar4 = abStack_2c;
  do {
    printf(__format,(uint)*pbVar4);
    if ((uVar3 - 5 & 0xfffffffb) == 0 || (uVar3 & 0xfffffffb) == 3) {
      putchar(0x2d);
    }
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (uVar3 != 0x10);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00021414 @ 00021414 size=308 ===== */

void FUN_00021414(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00021548 + 0x21424 + DAT_0002154c);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_00021548 + 0x21424 + DAT_00021550);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_00021560 + 0x2152c),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_00021554 + 0x214c0),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_00021558 + 0x214dc),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_00021564 + 0x2153c));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_0002155c + 0x21508),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_000223cc @ 000223cc size=40 ===== */

ushort FUN_000223cc(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 8);
  *(ushort **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -2;
  uVar1 = *puVar2;
  return uVar1 << 8 | uVar1 >> 8;
}



/* ===== FUN_000223f4 @ 000223f4 size=36 ===== */

uint FUN_000223f4(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 8);
  *(uint **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -4;
  uVar1 = *puVar2;
  return uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
}



/* ===== FUN_00022418 @ 00022418 size=68 ===== */

undefined8 FUN_00022418(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_1 + 8);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  *(uint **)(param_1 + 8) = puVar3 + 2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
  return CONCAT44(uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
                  uVar1 >> 0x18,
                  uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                  uVar2 >> 0x18);
}



/* ===== FUN_0002245c @ 0002245c size=384 ===== */

int FUN_0002245c(int param_1,size_t param_2)

{
  undefined2 uVar1;
  void *__dest;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t __n;
  size_t __size;
  void *__src;
  void *__src_00;
  
  iVar6 = -1;
  iVar5 = 0;
  iVar4 = DAT_000225dc + 0x22478;
  do {
    if ((*(short *)(iVar4 + 0x14) == *(short *)(param_1 + 0x14)) &&
       (*(short *)(iVar4 + 0x16) == *(short *)(param_1 + 0x16))) {
      __n = *(size_t *)(iVar5 * 0x30 + DAT_000225e0 + 0x224a8);
      iVar6 = iVar5;
      goto LAB_000224a8;
    }
    if ((iVar6 == -1) && (*(short *)(iVar4 + 0x14) == 0)) {
      iVar6 = iVar5;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x30;
  } while (iVar5 != 10);
  __n = 0;
LAB_000224a8:
  if ((int)param_2 < 1 || iVar6 < 0) {
    return -5;
  }
  __size = __n + param_2;
  __dest = malloc(__size);
  if (__dest == (void *)0x0) {
    return -0xc;
  }
  __src_00 = *(void **)(param_1 + 8);
  __src = *(void **)(DAT_000225e4 + 0x224f4 + iVar6 * 0x30);
  if ((int)__n < 1) {
    memcpy(__dest,__src_00,param_2);
    if (__src == (void *)0x0) goto LAB_00022564;
  }
  else {
    memcpy(__dest,__src,__n);
    memcpy((void *)((int)__dest + __n),__src_00,param_2);
  }
  free(__src);
LAB_00022564:
  iVar4 = DAT_000225e8 + 0x22578 + iVar6 * 0x30;
  *(void **)(DAT_000225e8 + 0x22578 + iVar6 * 0x30) = __dest;
  uVar1 = *(undefined2 *)(param_1 + 0x10);
  *(size_t *)(iVar4 + 4) = __size;
  *(void **)(iVar4 + 8) = __dest;
  *(size_t *)(iVar4 + 0xc) = __size;
  *(undefined2 *)(iVar4 + 0x10) = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined1 *)(iVar4 + 0x12) = *(undefined1 *)(param_1 + 0x12);
  *(undefined4 *)(iVar4 + 0x20) = uVar2;
  *(undefined4 *)(iVar4 + 0x24) = uVar3;
  *(undefined2 *)(iVar4 + 0x14) = *(undefined2 *)(param_1 + 0x14);
  *(undefined2 *)(iVar4 + 0x16) = *(undefined2 *)(param_1 + 0x16);
  *(undefined2 *)(iVar4 + 0x18) = *(undefined2 *)(param_1 + 0x18);
  *(undefined1 *)(iVar4 + 0x1b) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return iVar6;
}



/* ===== FUN_000225ec @ 000225ec size=308 ===== */

void FUN_000225ec(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00022720 + 0x225fc + DAT_00022724);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_00022720 + 0x225fc + DAT_00022728);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_00022738 + 0x22704),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_0002272c + 0x22698),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_00022730 + 0x226b4),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_0002273c + 0x22714));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_00022734 + 0x226e0),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00022740 @ 00022740 size=80 ===== */

void FUN_00022740(undefined4 param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00022790;
  bVar2 = *param_2;
  FUN_000225ec(param_1,0);
  iVar4 = 0;
  printf((char *)(DAT_00022794 + 0x2276c));
  do {
    pbVar1 = param_2 + iVar4;
    iVar4 = iVar4 + 1;
    printf((char *)(iVar3 + 0x22768),(uint)*pbVar1);
  } while (iVar4 <= (int)(uint)bVar2);
  putchar(10);
  return;
}



/* ===== FUN_00022798 @ 00022798 size=184 ===== */

byte FUN_00022798(int param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  pbVar5 = *(byte **)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xc);
  *(byte **)(param_1 + 8) = pbVar5 + 1;
  iVar2 = DAT_00022850;
  *(int *)(param_1 + 0xc) = iVar6 + -1;
  bVar1 = *pbVar5 >> 3;
  uVar3 = *pbVar5 & 7;
  uVar4 = *(uint *)(iVar2 + 0x227c4 + uVar3 * 8 + 4);
  if (*(int *)(iVar2 + 0x227c4 + uVar3 * 8) == 0) {
    *param_2 = uVar4;
    return bVar1;
  }
  switch(uVar4) {
  case 1:
    *(byte **)(param_1 + 8) = pbVar5 + 2;
    *(int *)(param_1 + 0xc) = iVar6 + -2;
    *param_2 = (uint)pbVar5[1];
    break;
  case 2:
    uVar3 = FUN_000223cc();
    goto LAB_00022838;
  case 3:
    break;
  case 4:
    uVar3 = FUN_000223f4();
    goto LAB_00022838;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    uVar3 = FUN_00022418();
LAB_00022838:
    *param_2 = uVar3;
  }
  return bVar1;
}



/* ===== FUN_00022854 @ 00022854 size=392 ===== */

void FUN_00022854(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  char *__s;
  char *pcVar9;
  undefined4 uVar10;
  int local_2c;
  int local_28;
  int local_24;
  
  piVar7 = *(int **)(DAT_000229dc + 0x22870 + DAT_000229e0);
  local_24 = *piVar7;
  local_2c = 0;
  local_28 = 0;
  uVar10 = param_1;
  FUN_000225ec();
  printf((char *)(DAT_000229e4 + 0x22894));
  iVar2 = FUN_00022798(param_2,&local_2c);
  if (iVar2 == 6) {
    iVar8 = *(int *)(param_2 + 0xc);
    __s = (char *)(DAT_000229e8 + 0x228c0);
    iVar2 = DAT_000229ec + 0x228c4;
    pcVar9 = (char *)(DAT_000229f0 + 0x228c8);
LAB_000228c4:
    while( true ) {
      iVar6 = *(int *)(param_2 + 0xc);
      bVar1 = iVar8 - iVar6 < local_2c;
      if (0 >= iVar6 || !bVar1) break;
      iVar6 = FUN_00022798(param_2,&local_28,iVar6,0 < iVar6 && bVar1,uVar10);
      if (iVar6 == 1) {
        if (local_28 != 2) goto code_r0x00022928;
        uVar4 = FUN_000223cc(param_2);
        iVar6 = 0;
        do {
          pcVar5 = pcVar9;
          if (uVar4 == *(uint *)(iVar2 + iVar6 * 8)) {
            uVar3 = *(uint *)(iVar2 + iVar6 * 8 + 4);
            if (uVar3 == 0) {
              uVar3 = DAT_000229f8 + 0x22980;
            }
            goto LAB_00022980;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x21);
        uVar3 = DAT_000229fc + 0x229a0;
        goto LAB_00022980;
      }
      puts(__s);
      FUN_000149a8(param_1,param_2);
    }
    putchar(10);
  }
  else {
    puts((char *)(DAT_00022a00 + 0x229c4));
    FUN_000149a8(param_1,param_2);
  }
  if (local_24 == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00022928:
  if (local_28 == 4) {
    uVar3 = FUN_000223f4(param_2);
    uVar4 = uVar3 >> 0x10;
    uVar3 = uVar3 & 0xffff;
    pcVar5 = (char *)(DAT_000229f4 + 0x2294c);
LAB_00022980:
    printf(pcVar5,uVar4,uVar3);
  }
  goto LAB_000228c4;
}



/* ===== FUN_00022a04 @ 00022a04 size=60 ===== */

undefined4 FUN_00022a04(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(DAT_00022a40 + 0x22b1c + iVar1 * 8) == param_1) {
      return *(undefined4 *)(DAT_00022a40 + iVar1 * 8 + 0x22b20);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x50);
  return 0;
}



/* ===== FUN_00022a44 @ 00022a44 size=400 ===== */

void FUN_00022a44(int param_1,int param_2,short *param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *__format;
  int iVar4;
  
  iVar1 = DAT_00022be0;
  iVar4 = DAT_00022bd4;
  if (param_1 == 4) {
    uVar2 = FUN_000223f4(param_2);
    iVar4 = iVar1 + 0x22b38;
  }
  else {
    if (param_1 == 0x10) {
      uVar3 = 0;
      __format = (char *)(DAT_00022be8 + 0x22b54);
      printf((char *)(DAT_00022be4 + 0x22b50));
      do {
        printf(__format,(uint)*(byte *)(*(int *)(param_2 + 8) + uVar3));
        if ((uVar3 - 5 & 0xfffffffb) == 0 || (uVar3 & 0xfffffffb) == 3) {
          putchar(0x2d);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != 0x10);
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0x10;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0x10;
      return;
    }
    if (param_1 != 2) {
      printf((char *)(DAT_00022bec + 0x22bb8));
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + param_1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - param_1;
      return;
    }
    uVar2 = FUN_000223cc(param_2);
    iVar4 = iVar4 + 0x22a84;
  }
  if ((param_3 != (short *)0x0) && ((ushort)(*param_3 - 1U) < 0xfffe)) {
    FUN_000140b8(*(undefined2 *)(param_2 + 0x14),*param_3,0,uVar2);
    *param_3 = -1;
  }
  if ((param_4 != (char *)0x0) && ((byte)(*param_4 - 1U) < 0xfe)) {
    FUN_000140b8(*(undefined2 *)(param_2 + 0x14),*param_3,*param_4,uVar2);
    *param_4 = -1;
  }
  printf((char *)(DAT_00022bd8 + 0x22b04),iVar4,uVar2);
  iVar4 = FUN_00022a04(uVar2);
  if (iVar4 == 0) {
    return;
  }
  printf((char *)(DAT_00022bdc + 0x22b24));
  return;
}



/* ===== FUN_00022bf0 @ 00022bf0 size=1128 ===== */

void FUN_00022bf0(undefined4 param_1,int param_2,int *param_3,short *param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  longlong lVar14;
  int local_30;
  int local_2c;
  
  iVar11 = DAT_00023058 + 0x22c10;
  piVar10 = *(int **)(iVar11 + DAT_0002305c);
  local_2c = *piVar10;
  local_30 = 0;
  iVar4 = FUN_00022798(param_2,&local_30);
  iVar2 = local_30;
  switch(iVar4) {
  case 0:
    pcVar9 = (char *)(DAT_00023060 + 0x22c78);
    goto LAB_00022c74;
  case 1:
    goto LAB_00022c7c;
  case 2:
    goto LAB_00022c7c;
  case 3:
    if (param_3 != (int *)0x0) {
      if (*param_3 != 0) {
        putchar(10);
        FUN_000225ec(param_1,0);
      }
      *param_3 = *param_3 + 1;
    }
    FUN_00022a44(local_30,param_2,param_4,param_5);
    goto switchD_00022c40_default;
  case 4:
    goto LAB_00022eb4;
  case 5:
LAB_00022c7c:
    if (iVar4 == 2) {
      pcVar9 = (char *)(DAT_00023068 + 0x22d00);
LAB_00022ca0:
      printf(pcVar9);
    }
    else {
      if (iVar4 == 5) {
        pcVar9 = (char *)(DAT_0002306c + 0x22d0c);
        goto LAB_00022ca0;
      }
      if (iVar4 == 1) {
        pcVar9 = (char *)(DAT_00023064 + 0x22ca4);
        goto LAB_00022ca0;
      }
    }
    break;
  case 6:
    printf((char *)(DAT_00023098 + 0x22fc4));
    iVar2 = local_30;
    iVar4 = *(int *)(param_2 + 0xc);
    while( true ) {
      iVar7 = *(int *)(param_2 + 0xc);
      iVar6 = iVar4 - iVar7;
      bVar12 = iVar2 == iVar6;
      iVar11 = iVar2 - iVar6;
      if (iVar2 > iVar6) {
        bVar12 = iVar7 == 0;
        iVar11 = iVar7;
      }
      if (bVar12 || iVar11 < 0 != (iVar2 <= iVar6 && SBORROW4(iVar2,iVar6))) break;
      FUN_00022bf0(param_1,param_2,param_3,param_4,param_5);
    }
    pcVar9 = (char *)(DAT_0002309c + 0x22fe8);
    goto LAB_00022c74;
  case 7:
    printf((char *)(DAT_000230a0 + 0x23010));
    iVar2 = local_30;
    iVar4 = *(int *)(param_2 + 0xc);
    while( true ) {
      iVar7 = *(int *)(param_2 + 0xc);
      iVar6 = iVar4 - iVar7;
      bVar12 = iVar2 == iVar6;
      iVar11 = iVar2 - iVar6;
      if (iVar2 > iVar6) {
        bVar12 = iVar7 == 0;
        iVar11 = iVar7;
      }
      if (bVar12 || iVar11 < 0 != (iVar2 <= iVar6 && SBORROW4(iVar2,iVar6))) break;
      FUN_00022bf0(param_1,param_2,param_3,param_4,param_5);
    }
    pcVar9 = (char *)(DAT_000230a4 + 0x23034);
LAB_00022c74:
    printf(pcVar9);
    goto switchD_00022c40_default;
  case 8:
LAB_00022eb4:
    if (iVar4 == 8) {
      iVar4 = DAT_00023090 + 0x22f28;
    }
    else {
      iVar4 = DAT_00023080 + 0x22ecc;
    }
    for (iVar6 = 0; iVar6 < local_30; iVar6 = iVar6 + 1) {
      uVar8 = (uint)*(byte *)(*(int *)(param_2 + 8) + iVar6);
      if ((local_30 + -1 == iVar6) && (bVar12 = false, uVar8 == 0)) goto LAB_00022ee8;
      if ((*(ushort *)(**(int **)(iVar11 + DAT_00023084) + uVar8 * 2) & 0x40) == 0) {
        bVar12 = true;
        goto LAB_00022ee8;
      }
    }
    bVar12 = false;
LAB_00022ee8:
    printf((char *)(DAT_00023088 + 0x22ef4),iVar4);
    if (bVar12) {
      pcVar9 = (char *)(DAT_00023094 + 0x22fa4);
      for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
        printf(pcVar9,(uint)*(byte *)(*(int *)(param_2 + 8) + iVar4));
      }
    }
    else {
      printf((char *)(DAT_0002308c + 0x22f08));
      for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
        putchar((uint)*(byte *)(*(int *)(param_2 + 8) + iVar4));
      }
      putchar(0x22);
    }
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar2;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar2;
  default:
    goto switchD_00022c40_default;
  }
  switch(iVar2) {
  case 1:
    pcVar9 = *(char **)(param_2 + 8);
    *(char **)(param_2 + 8) = pcVar9 + 1;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
    cVar1 = *pcVar9;
    uVar5 = CONCAT22(CONCAT11(cVar1,cVar1),CONCAT11(cVar1,cVar1));
    VectorShiftRight(CONCAT44(uVar5,uVar5),0x38);
    if ((param_5 != (char *)0x0 && iVar4 == 1) && (*param_5 == '\0')) {
      *param_5 = cVar1;
    }
    goto LAB_00022d58;
  case 2:
    sVar3 = FUN_000223cc(param_2);
    VectorShiftRight(CONCAT44(CONCAT22(sVar3,sVar3),CONCAT22(sVar3,sVar3)),0x30);
    if ((param_4 != (short *)0x0 && iVar4 == 1) && (*param_4 == 0)) {
      *param_4 = sVar3;
    }
    goto LAB_00022d58;
  case 3:
    break;
  case 4:
    uVar5 = FUN_000223f4(param_2);
    VectorShiftRight(CONCAT44(uVar5,uVar5),0x20);
    goto LAB_00022d58;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    FUN_00022418(param_2);
LAB_00022d58:
    pcVar9 = (char *)(DAT_00023070 + 0x22d68);
LAB_00022e28:
    printf(pcVar9);
    goto switchD_00022c40_default;
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
    uVar13 = FUN_00022418(param_2);
    lVar14 = FUN_00022418(param_2);
    uVar8 = (uint)((ulonglong)lVar14 >> 0x20);
    printf((char *)(DAT_00023074 + 0x22dfc),uVar8,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
    bVar12 = 0xffffffe < uVar8;
    if (uVar8 == 0xfffffff) {
      bVar12 = 0xfffffffe < (uint)lVar14;
    }
    if (!bVar12 || lVar14 == 0xfffffffffffffff) {
      putchar(0x30);
    }
    pcVar9 = (char *)(DAT_00023078 + 0x22e2c);
    goto LAB_00022e28;
  }
  printf((char *)(DAT_0002307c + 0x22e3c));
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar2;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar2;
switchD_00022c40_default:
  if (local_2c == *piVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_000230a8 @ 000230a8 size=428 ===== */

void FUN_000230a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 local_3b;
  undefined2 local_3a;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  piVar6 = *(int **)(DAT_00023254 + 0x230b8 + DAT_00023258);
  local_2c = *piVar6;
  local_34 = 0;
  local_30 = 0;
  iVar1 = FUN_00022798(param_2,&local_34);
  if (iVar1 == 6) {
    iVar9 = *(int *)(param_2 + 0xc);
    iVar1 = DAT_0002325c + 0x2310c;
    iVar10 = DAT_00023260 + 0x23110;
    iVar11 = DAT_00023264 + 0x23114;
    while (0 < *(int *)(param_2 + 0xc) && iVar9 - *(int *)(param_2 + 0xc) < local_34) {
      iVar2 = FUN_00022798(param_2,&local_30);
      if ((iVar2 != 1) || (local_30 != 2)) goto LAB_0002321c;
      iVar2 = FUN_000223cc(param_2);
      FUN_000225ec(param_1,0);
      iVar7 = 0;
      do {
        if (iVar2 == *(int *)(iVar1 + iVar7 * 8)) {
          iVar4 = *(int *)(iVar1 + iVar7 * 8 + 4);
          if (iVar4 == 0) {
            iVar4 = iVar11;
          }
          break;
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar10;
      } while (iVar7 != 0x21);
      printf((char *)(DAT_00023268 + 0x231a4),iVar2,iVar4);
      local_3a = 0;
      local_3b = 0;
      local_38 = (uint)(iVar2 != 4);
      FUN_000225ec(param_1 + 1,0);
      if (local_38 == 0) {
        puVar5 = &local_38;
      }
      else {
        puVar5 = (uint *)0x0;
      }
      if (iVar2 == 4) {
        puVar3 = (undefined2 *)&local_3b;
        puVar8 = &local_3a;
      }
      else {
        puVar8 = (undefined2 *)0x0;
        puVar3 = puVar8;
      }
      FUN_00022bf0(param_1 + 1,param_2,puVar5,puVar8,puVar3);
      putchar(10);
    }
  }
  else {
LAB_0002321c:
    puts((char *)(DAT_0002326c + 0x23228));
    FUN_000149a8(param_1,param_2);
  }
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00023270 @ 00023270 size=276 ===== */

void FUN_00023270(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *__s;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  piVar3 = *(int **)(DAT_00023384 + 0x23280 + DAT_00023388);
  local_24 = *piVar3;
  local_2c = 0;
  local_28 = 0;
  FUN_000225ec();
  printf((char *)(DAT_0002338c + 0x232b4));
  iVar1 = FUN_00022798(param_2,&local_2c);
  if (iVar1 == 6) {
    iVar1 = *(int *)(param_2 + 0xc);
    __s = (char *)(DAT_00023390 + 0x232dc);
    while (0 < *(int *)(param_2 + 0xc) && iVar1 - *(int *)(param_2 + 0xc) < local_2c) {
      iVar2 = FUN_00022798(param_2,&local_28);
      if (iVar2 == 3) {
        FUN_00022a44(local_28,param_2,0);
      }
      else {
        puts(__s);
        FUN_000149a8(param_1,param_2);
      }
    }
    putchar(10);
  }
  else {
    puts((char *)(DAT_00023394 + 0x2336c));
    FUN_000149a8(param_1,param_2);
  }
  if (local_24 == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_000238ec @ 000238ec size=20 ===== */

void FUN_000238ec(uint *param_1)

{
  printf((char *)((int)&DAT_00023900 + DAT_00023900),(*param_1 & 0xffffff) >> 9);
  return;
}



/* ===== FUN_00023904 @ 00023904 size=68 ===== */

void FUN_00023904(byte *param_1,int param_2,int param_3)

{
  printf((char *)(DAT_00023948 + 0x23940),(*param_1 & 3) >> 1,(uint)(*param_1 >> 2),
         (param_1[1] & 0x1f) >> 4,(uint)(*(ushort *)(param_1 + 2) >> 1),
         (uint)*(byte *)(param_2 + param_3 + -1),param_3);
  return;
}



/* ===== FUN_0002394c @ 0002394c size=308 ===== */

void FUN_0002394c(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00023a80 + 0x2395c + DAT_00023a84);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_00023a80 + 0x2395c + DAT_00023a88);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_00023a98 + 0x23a64),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_00023a8c + 0x239f8),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_00023a90 + 0x23a14),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_00023a9c + 0x23a74));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_00023a94 + 0x23a40),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00024288 @ 00024288 size=32 ===== */

undefined1 FUN_00024288(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar1 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return *puVar1;
}



/* ===== FUN_000242a8 @ 000242a8 size=40 ===== */

ushort FUN_000242a8(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 8);
  *(ushort **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -2;
  uVar1 = *puVar2;
  return uVar1 << 8 | uVar1 >> 8;
}



/* ===== FUN_000242d0 @ 000242d0 size=36 ===== */

uint FUN_000242d0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 8);
  *(uint **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -4;
  uVar1 = *puVar2;
  return uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
}



/* ===== FUN_000242f4 @ 000242f4 size=116 ===== */

char * FUN_000242f4(int param_1)

{
  byte *pbVar1;
  char *__s;
  
  pbVar1 = *(byte **)(param_1 + 8);
  __s = (char *)(DAT_00024368 + 0x2432c);
  sprintf(__s,(char *)(DAT_0002436c + 0x24344),(uint)*pbVar1,(uint)pbVar1[1],(uint)pbVar1[2],
          (uint)pbVar1[3],(uint)pbVar1[4],(uint)pbVar1[5]);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 6;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -6;
  return __s;
}



/* ===== FUN_00024370 @ 00024370 size=308 ===== */

void FUN_00024370(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_000244a4 + 0x24380 + DAT_000244a8);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_000244a4 + 0x24380 + DAT_000244ac);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_000244bc + 0x24488),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_000244b0 + 0x2441c),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_000244b4 + 0x24438),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_000244c0 + 0x24498));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_000244b8 + 0x24464),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_000244c4 @ 000244c4 size=1004 ===== */

void FUN_000244c4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = FUN_00024288(param_2);
  FUN_00024370(param_1 + 1);
  iVar4 = DAT_000248fc;
  iVar1 = DAT_000248f0;
  iVar3 = DAT_000248ec;
  switch(uVar2) {
  case 0:
    uVar2 = FUN_00024288(param_2);
    uVar7 = 0;
    pcVar6 = (char *)(DAT_000248b0 + 0x2452c);
    break;
  case 1:
    iVar3 = FUN_00024288(param_2);
    printf((char *)(DAT_000248b4 + 0x24550),1,iVar3);
    if (iVar3 == 4) {
      uVar2 = FUN_000242d0(param_2);
      printf((char *)(DAT_000248c8 + 0x24600),uVar2);
      iVar3 = FUN_00022a04(uVar2);
      if (iVar3 != 0) {
        printf((char *)(DAT_000248cc + 0x2461c));
      }
      uVar2 = FUN_000242d0(param_2);
      printf((char *)(DAT_000248d0 + 0x24638),uVar2);
      iVar3 = FUN_00022a04(uVar2);
      if (iVar3 == 0) goto LAB_000245d8;
      pcVar6 = (char *)(DAT_000248d4 + 0x24654);
    }
    else {
      if (iVar3 == 0x10) {
        uVar2 = FUN_000242d0(param_2);
        printf((char *)(DAT_000248d8 + 0x24670),uVar2);
        iVar3 = FUN_00022a04(uVar2);
        if (iVar3 != 0) {
          printf((char *)(DAT_000248dc + 0x2468c));
        }
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xc;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0xc;
        uVar2 = FUN_000242d0(param_2);
        printf((char *)(DAT_000248e0 + 0x246c0),uVar2);
        iVar3 = FUN_00022a04(uVar2);
        if (iVar3 != 0) {
          printf((char *)(DAT_000248e4 + 0x246dc));
        }
        putchar(10);
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xc;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0xc;
        return;
      }
      if (iVar3 != 2) {
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + (short)iVar3 * 2;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + (short)iVar3 * -2;
        return;
      }
      uVar2 = FUN_000242a8(param_2);
      printf((char *)(DAT_000248b8 + 0x24584),uVar2);
      iVar3 = FUN_00022a04(uVar2);
      if (iVar3 != 0) {
        printf((char *)(DAT_000248bc + 0x245a0));
      }
      uVar2 = FUN_000242a8(param_2);
      printf((char *)(DAT_000248c0 + 0x245bc),uVar2);
      iVar3 = FUN_00022a04(uVar2);
      if (iVar3 == 0) goto LAB_000245d8;
      pcVar6 = (char *)(DAT_000248c4 + 0x245d8);
    }
    printf(pcVar6);
LAB_000245d8:
    putchar(10);
    return;
  case 2:
    uVar2 = FUN_000242a8(param_2);
    uVar7 = 2;
    pcVar6 = (char *)(DAT_000248e8 + 0x24740);
    break;
  case 3:
    iVar4 = FUN_000242a8(param_2);
    printf((char *)(DAT_000248f4 + 0x24778),3,iVar4);
    for (iVar8 = 0; iVar4 >> 2 != iVar8; iVar8 = iVar8 + 1) {
      FUN_00024370(param_1 + 2,param_2);
      uVar2 = FUN_000242a8(param_2);
      printf((char *)(iVar3 + 0x24758),uVar2);
      uVar2 = FUN_000242a8(param_2);
      printf((char *)(iVar1 + 0x24760),uVar2);
    }
    return;
  case 4:
    uVar2 = FUN_000242a8(param_2);
    uVar7 = 4;
    pcVar6 = (char *)(DAT_000248f8 + 0x247dc);
    break;
  case 5:
    uVar5 = FUN_000242a8(param_2);
    printf((char *)(DAT_00024900 + 0x2480c),5,uVar5);
    for (uVar9 = 0; uVar5 / 0xc != uVar9; uVar9 = uVar9 + 1) {
      FUN_00024370(param_1 + 2,param_2);
      uVar2 = FUN_000242f4(param_2);
      printf((char *)(iVar4 + 0x247f4),uVar2);
      pcVar6 = (char *)FUN_000242f4(param_2);
      puts(pcVar6);
    }
    return;
  case 6:
    uVar2 = FUN_000242a8(param_2);
    uVar7 = 6;
    pcVar6 = (char *)(DAT_00024904 + 0x2486c);
    break;
  default:
    printf((char *)(DAT_00024908 + 0x24884),uVar2);
    FUN_00014958(param_1 + 2,param_2,param_3 + -1);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + param_3 + -1;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + (1 - param_3);
    return;
  }
  printf(pcVar6,uVar7,uVar2);
  return;
}



/* ===== FUN_00024e54 @ 00024e54 size=320 ===== */

void FUN_00024e54(int param_1,int param_2,size_t param_3)

{
  short sVar1;
  short sVar2;
  void *__dest;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t __n;
  int iVar7;
  int iVar8;
  short *psVar9;
  
  iVar5 = -1;
  iVar8 = 0;
  sVar1 = *(short *)(param_2 + 0x14);
  sVar2 = *(short *)(param_2 + 0x16);
  psVar9 = (short *)(DAT_00024f94 + 0x24e74);
  do {
    if ((*psVar9 == sVar1) && (psVar9[1] == sVar2)) goto LAB_00024ec0;
    if ((iVar5 == -1) && ((*psVar9 == 0 && (psVar9[1] == 0)))) {
      iVar5 = iVar8;
    }
    iVar8 = iVar8 + 1;
    psVar9 = psVar9 + 0x182;
  } while (iVar8 != 10);
  iVar8 = iVar5;
  if (iVar5 != -1) {
LAB_00024ec0:
    iVar5 = iVar8 * 0x304;
    iVar6 = DAT_00024f98 + 0x24edc;
    *(short *)(iVar6 + iVar5) = sVar1;
    iVar7 = iVar6 + param_1 * 0x30 + iVar5;
    __n = *(size_t *)(iVar7 + 8);
    *(short *)(iVar6 + iVar5 + 2) = sVar2;
    __dest = malloc(__n + param_3);
    if (__dest != (void *)0x0) {
      if (__n != 0) {
        memcpy(__dest,*(void **)(iVar7 + 4),__n);
      }
      memcpy((void *)((int)__dest + __n),*(void **)(param_2 + 8),param_3);
      iVar5 = DAT_00024f9c + 0x24f50 + param_1 * 0x30 + iVar8 * 0x304;
      free(*(void **)(iVar5 + 4));
      *(void **)(iVar5 + 4) = __dest;
      iVar8 = param_3 + *(int *)(iVar5 + 8);
      *(int *)(iVar5 + 8) = iVar8;
      *(void **)(iVar5 + 0xc) = __dest;
      *(int *)(iVar5 + 0x10) = iVar8;
      uVar3 = *(undefined4 *)(param_2 + 0x20);
      uVar4 = *(undefined4 *)(param_2 + 0x24);
      *(undefined1 *)(iVar5 + 0x16) = *(undefined1 *)(param_2 + 0x12);
      *(short *)(iVar5 + 0x18) = sVar1;
      *(undefined4 *)(iVar5 + 0x24) = uVar3;
      *(undefined4 *)(iVar5 + 0x28) = uVar4;
      *(short *)(iVar5 + 0x1a) = sVar2;
    }
  }
  return;
}



/* ===== FUN_00024fa0 @ 00024fa0 size=220 ===== */

void FUN_00024fa0(int param_1,int param_2)

{
  int *piVar1;
  void *__ptr;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  psVar4 = (short *)(DAT_0002507c + 0x24fb8);
  while ((*psVar4 != *(short *)(param_2 + 0x14) || (psVar4[1] != *(short *)(param_2 + 0x16)))) {
    iVar7 = iVar7 + 1;
    psVar4 = psVar4 + 0x182;
    if (iVar7 == 10) {
      return;
    }
  }
  __ptr = *(void **)(DAT_00025080 + param_1 * 0x30 + iVar7 * 0x304 + 0x25008);
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  iVar6 = 0;
  iVar2 = DAT_00025084 + 0x25030 + param_1 * 0x30 + iVar7 * 0x304;
  iVar5 = iVar7 * 0x304 + DAT_00025084 + 0x25030;
  iVar3 = 0;
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  do {
    piVar1 = (int *)(iVar5 + 8);
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 0x30;
    iVar6 = iVar6 + *piVar1;
  } while (iVar3 != 0x10);
  if (iVar6 != 0) {
    return;
  }
  *(undefined4 *)(iVar7 * 0x304 + DAT_00025088 + 0x25078) = 0;
  return;
}



/* ===== FUN_000258f4 @ 000258f4 size=40 ===== */

ushort FUN_000258f4(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 8);
  *(ushort **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -2;
  uVar1 = *puVar2;
  return uVar1 << 8 | uVar1 >> 8;
}



/* ===== FUN_0002591c @ 0002591c size=308 ===== */

void FUN_0002591c(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00025a50 + 0x2592c + DAT_00025a54);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_00025a50 + 0x2592c + DAT_00025a58);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_00025a68 + 0x25a34),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_00025a5c + 0x259c8),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_00025a60 + 0x259e4),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_00025a6c + 0x25a44));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_00025a64 + 0x25a10),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00025d34 @ 00025d34 size=32 ===== */

undefined1 FUN_00025d34(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar1 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return *puVar1;
}



/* ===== FUN_00025d54 @ 00025d54 size=40 ===== */

ushort FUN_00025d54(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 8);
  *(ushort **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -2;
  uVar1 = *puVar2;
  return uVar1 << 8 | uVar1 >> 8;
}



/* ===== FUN_00025d7c @ 00025d7c size=156 ===== */

int FUN_00025d7c(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return (int)&DAT_00025e18 + DAT_00025e38;
  case 2:
    return DAT_00025e18 + 0x25db8;
  case 3:
    return DAT_00025e1c + 0x25dc4;
  case 4:
    return DAT_00025e20 + 0x25dd0;
  case 5:
    return DAT_00025e24 + 0x25ddc;
  case 6:
    return DAT_00025e28 + 0x25de8;
  case 7:
    return DAT_00025e2c + 0x25df4;
  case 8:
    return DAT_00025e30 + 0x25e00;
  default:
    return DAT_00025e34 + 0x25e0c;
  }
}



/* ===== FUN_00025e3c @ 00025e3c size=308 ===== */

void FUN_00025e3c(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00025f70 + 0x25e4c + DAT_00025f74);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_00025f70 + 0x25e4c + DAT_00025f78);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_00025f88 + 0x25f54),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_00025f7c + 0x25ee8),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_00025f80 + 0x25f04),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_00025f8c + 0x25f64));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_00025f84 + 0x25f30),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00025f90 @ 00025f90 size=40 ===== */

void FUN_00025f90(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_00025e3c();
  uVar1 = FUN_00025d34(param_2);
  printf((char *)((int)&DAT_00025fb8 + DAT_00025fb8),uVar1);
  return;
}



/* ===== FUN_00025fbc @ 00025fbc size=40 ===== */

void FUN_00025fbc(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_00025e3c();
  uVar1 = FUN_00025d34(param_2);
  printf((char *)((int)&DAT_00025fe4 + DAT_00025fe4),(uVar1 & 0x3ff) >> 2);
  return;
}



/* ===== FUN_00025fe8 @ 00025fe8 size=32 ===== */

void FUN_00025fe8(undefined4 param_1,uint param_2,undefined4 param_3)

{
  if ((param_2 & 3) == 0) {
    FUN_00025fbc(param_1,param_3);
    return;
  }
  if ((param_2 & 3) != 3) {
    return;
  }
  FUN_00025f90(param_1,param_3);
  return;
}



/* ===== FUN_00026008 @ 00026008 size=80 ===== */

void FUN_00026008(undefined4 param_1,uint param_2,int param_3)

{
  if ((param_2 & 3) == 0) {
    while (*(int *)(param_3 + 0xc) != 0) {
      FUN_00025fbc(param_1,param_3);
    }
    return;
  }
  if ((param_2 & 3) != 3) {
    return;
  }
  FUN_00025fbc(param_1,param_3);
  FUN_00025f90(param_1,param_3);
  return;
}



/* ===== FUN_00026058 @ 00026058 size=2520 ===== */

void FUN_00026058(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  char *__format;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  
  iVar10 = DAT_00026a30 + 0x26074;
  __format = (char *)(DAT_00026a34 + 0x26078);
  do {
    while( true ) {
      if (*(uint *)(param_2 + 0xc) < 2) {
        return;
      }
      iVar8 = param_1 + 1;
      FUN_00025e3c(param_1,param_2);
      uVar1 = FUN_00025d34(param_2);
      uVar12 = FUN_00025d34(param_2,uVar1);
      iVar6 = (int)((ulonglong)uVar12 >> 0x20);
      iVar5 = (int)uVar12;
      if (iVar6 == 7) break;
      pcVar4 = (char *)FUN_00025d7c(iVar6);
      puts(pcVar4);
      FUN_0001472c(iVar8,param_2,iVar5);
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar5;
      iVar6 = *(int *)(param_2 + 0xc);
LAB_00026170:
      *(int *)(param_2 + 0xc) = iVar6 - iVar5;
    }
    uVar1 = FUN_00025d34(param_2);
    uVar13 = FUN_00025d34(param_2,uVar1);
    iVar11 = (int)(uVar13 >> 0x20);
    iVar6 = (int)uVar13;
    if (iVar6 == 0xff) {
      iVar11 = **(int **)(param_2 + 8);
      *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -4;
      uVar12 = FUN_00025d54(param_2);
      iVar6 = (int)((ulonglong)uVar12 >> 0x20);
      uVar2 = ((uint)uVar12 & 0xff) << 8 | (uint)uVar12 >> 8 & 0xff;
      if (iVar6 == 0) {
        iVar6 = DAT_00026a48 + 0x26188;
      }
      else if (iVar6 == 1) {
        iVar6 = DAT_00026a4c + 0x26194;
      }
      else {
        iVar6 = DAT_00026a38 + 0x26118;
      }
      if (iVar11 == 0x4f && uVar2 == 1) {
        iVar7 = DAT_00026a50 + 0x261a0;
      }
      else {
        iVar7 = DAT_00026a3c + 0x2612c;
      }
      printf((char *)(DAT_00026a44 + 0x2613c),DAT_00026a40 + 0x26138,iVar6,iVar7);
      if (iVar11 == 0x4f && uVar2 == 1) {
        uVar2 = FUN_00025d34(param_2);
        FUN_00025e3c(iVar8,param_2);
        if ((uVar2 & 0x80) != 0) {
          printf((char *)(DAT_00026b8c + 0x26988));
        }
        if ((uVar2 & 0x40) != 0) {
          printf((char *)(DAT_00026b90 + 0x2699c));
        }
        if ((uVar2 & 0x20) != 0) {
          printf((char *)(DAT_00026b94 + 0x269b0));
        }
        if ((uVar2 & 0x10) != 0) {
          printf((char *)(DAT_00026b98 + 0x269c4));
        }
        putchar(10);
        FUN_00025e3c(iVar8,param_2);
        if ((uVar2 & 2) != 0) {
          printf((char *)(DAT_00026b9c + 0x269ec));
        }
        if ((uVar2 & 1) != 0) {
          pcVar4 = (char *)(DAT_00026ba0 + 0x26a00);
          goto LAB_000266d8;
        }
        goto LAB_00026728;
      }
      FUN_0001472c(iVar8,param_2,iVar5 + -8);
      iVar6 = *(int *)(param_2 + 0xc) + 8;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar5 + -8;
      goto LAB_00026170;
    }
    if (iVar11 == 0) {
      switch(iVar6) {
      case 0:
        iVar11 = DAT_00026a7c + 0x262b8;
        break;
      case 1:
        iVar11 = DAT_00026a5c + 0x26238;
        break;
      case 2:
        iVar11 = DAT_00026a60 + 0x26244;
        break;
      case 3:
      default:
        iVar11 = DAT_00026a68 + 0x2625c;
        break;
      case 4:
        iVar11 = DAT_00026a64 + 0x26250;
      }
    }
    else if (iVar11 == 1) {
      switch(iVar6) {
      case 1:
        iVar11 = DAT_00026a80 + 0x262c4;
        break;
      case 2:
        iVar11 = DAT_00026a6c + 0x26288;
        break;
      case 3:
        iVar11 = DAT_00026a74 + 0x262a0;
        break;
      case 4:
        iVar11 = DAT_00026a78 + 0x262ac;
        break;
      default:
        iVar11 = DAT_00026a70 + 0x26294;
      }
    }
    else {
      iVar11 = DAT_00026a54 + 0x261bc;
    }
    printf((char *)(DAT_00026a58 + 0x261c8),iVar10,iVar11);
    if (iVar6 == 1) {
      uVar2 = FUN_00025d34(param_2);
      FUN_00025e3c(iVar8,param_2);
      printf((char *)(DAT_00026ad0 + 0x264e4));
      if ((uVar2 & 0x80) != 0) {
        printf((char *)(DAT_00026ad4 + 0x264f8));
      }
      if ((uVar2 & 0x40) != 0) {
        printf((char *)(DAT_00026ad8 + 0x2650c));
      }
      if ((uVar2 & 0x20) != 0) {
        printf((char *)(DAT_00026adc + 0x26520));
      }
      putchar(10);
      FUN_00025e3c(iVar8,param_2);
      if ((uVar2 & 0x10) == 0) {
        iVar5 = DAT_00026ae0 + 0x26548;
      }
      else {
        iVar5 = DAT_00026b28 + 0x266ec;
      }
      printf((char *)(DAT_00026ae4 + 0x26550),iVar5);
      FUN_00025e3c(iVar8,param_2);
      if ((uVar2 & 8) != 0) {
        printf((char *)(DAT_00026ae8 + 0x26570));
      }
      if ((uVar2 & 4) != 0) {
        printf((char *)(DAT_00026aec + 0x26584));
      }
      if ((uVar2 & 2) != 0) {
        printf((char *)(DAT_00026af0 + 0x26598));
      }
      if ((uVar2 & 1) != 0) {
        printf((char *)(DAT_00026af4 + 0x265ac));
      }
      putchar(10);
      uVar2 = FUN_00025d34(param_2);
      FUN_00025e3c(iVar8,param_2);
      if ((uVar2 & 0x40) == 0) {
        iVar5 = DAT_00026af8 + 0x265e0;
      }
      else {
        iVar5 = DAT_00026b2c + 0x266f8;
      }
      printf((char *)(DAT_00026afc + 0x265e8),iVar5);
      FUN_00025e3c(iVar8,param_2);
      if ((uVar2 & 0x20) != 0) {
        printf((char *)(DAT_00026b00 + 0x26608));
      }
      if ((uVar2 & 0x10) != 0) {
        printf((char *)(DAT_00026b04 + 0x2661c));
      }
      if ((uVar2 & 8) != 0) {
        printf((char *)(DAT_00026b08 + 0x26630));
      }
      if ((uVar2 & 4) != 0) {
        printf((char *)(DAT_00026b0c + 0x26644));
      }
      if ((uVar2 & 2) != 0) {
        printf((char *)(DAT_00026b10 + 0x26658));
      }
      if ((uVar2 & 1) != 0) {
        printf((char *)(DAT_00026b14 + 0x2666c));
      }
      putchar(10);
      uVar2 = FUN_00025d54(param_2);
      FUN_00025e3c(iVar8,param_2);
      if ((short)uVar2 < 0) {
        iVar5 = DAT_00026b30 + 0x26704;
      }
      else {
        iVar5 = DAT_00026b18 + 0x266a4;
      }
      printf((char *)(DAT_00026b1c + 0x266ac),iVar5);
      FUN_00025e3c(iVar8,param_2);
      printf((char *)(DAT_00026b20 + 0x266c4));
      if ((short)uVar2 < 0) {
        pcVar4 = (char *)(DAT_00026b24 + 0x266dc);
LAB_000266d8:
        printf(pcVar4);
      }
      else {
        iVar5 = 0;
        do {
          if ((uVar2 & 1) != 0) {
            printf(__format,iVar5);
          }
          uVar2 = (uVar2 & 0x1ffff) >> 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0xf);
      }
LAB_00026728:
      putchar(10);
    }
    else if ((uVar13 & 0xff) == 0) {
      uVar2 = FUN_00025d34(param_2);
      FUN_00025e3c(iVar8,param_2);
      if ((uVar2 & 0x80) != 0) {
        printf((char *)(DAT_00026a84 + 0x262f0));
      }
      if ((uVar2 & 0x40) != 0) {
        printf((char *)(DAT_00026a88 + 0x26304));
      }
      if ((uVar2 & 0x20) != 0) {
        printf((char *)(DAT_00026a8c + 0x26318));
      }
      if ((uVar2 & 0x10) != 0) {
        printf((char *)(DAT_00026a90 + 0x2632c));
      }
      putchar(10);
      FUN_00025e3c(iVar8,param_2);
      if ((uVar2 & 8) != 0) {
        printf((char *)(DAT_00026a94 + 0x26354));
      }
      if ((uVar2 & 4) != 0) {
        printf((char *)(DAT_00026a98 + 0x26368));
      }
      if ((uVar2 & 2) != 0) {
        printf((char *)(DAT_00026a9c + 0x2637c));
      }
      if ((uVar2 & 1) != 0) {
        printf((char *)(DAT_00026aa0 + 0x26390));
      }
      putchar(10);
      uVar2 = FUN_00025d34(param_2);
      FUN_00025e3c(iVar8,param_2);
      if ((uVar2 & 0x80) != 0) {
        printf((char *)(DAT_00026aa4 + 0x263c4));
      }
      if ((uVar2 & 0x40) != 0) {
        printf((char *)(DAT_00026aa8 + 0x263d8));
      }
      if ((uVar2 & 0x20) != 0) {
        printf((char *)(DAT_00026aac + 0x263ec));
      }
      if ((uVar2 & 0x10) != 0) {
        printf((char *)(DAT_00026ab0 + 0x26400));
      }
      puts((char *)(DAT_00026ab4 + 0x2640c));
      FUN_00025e3c(iVar8,param_2);
      if ((uVar2 & 8) != 0) {
        printf((char *)(DAT_00026ab8 + 0x2642c));
      }
      if ((uVar2 & 4) != 0) {
        printf((char *)(DAT_00026abc + 0x26440));
      }
      puts((char *)(DAT_00026ac0 + 0x2644c));
      FUN_00025e3c(iVar8,param_2);
      if ((uVar2 & 2) != 0) {
        printf((char *)(DAT_00026ac4 + 0x2646c));
      }
      if ((uVar2 & 1) != 0) {
        printf((char *)(DAT_00026ac8 + 0x26480));
      }
      putchar(10);
      uVar1 = FUN_00025d34(param_2);
      FUN_00025e3c(iVar8,param_2);
      uVar3 = FUN_00025d34(param_2);
      printf((char *)(DAT_00026acc + 0x264bc),uVar1,uVar3);
    }
    else {
      if (iVar6 != 2) {
        FUN_0001472c(iVar8,param_2,iVar5 + -2);
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar5 + -2;
        iVar6 = *(int *)(param_2 + 0xc) + 2;
        goto LAB_00026170;
      }
      uVar2 = FUN_00025d34(param_2);
      FUN_00025e3c(iVar8,param_2);
      if ((uVar2 & 0x80) != 0) {
        printf((char *)(DAT_00026b34 + 0x26760));
      }
      if ((uVar2 & 0x40) != 0) {
        printf((char *)(DAT_00026b38 + 0x26774));
      }
      if ((uVar2 & 0x20) != 0) {
        printf((char *)(DAT_00026b3c + 0x26788));
      }
      if ((uVar2 & 0x10) != 0) {
        printf((char *)(DAT_00026b40 + 0x2679c));
      }
      putchar(10);
      uVar2 = FUN_00025d54(param_2);
      uVar9 = (uVar2 & 0xfffff) >> 4;
      FUN_00025e3c(iVar8,param_2);
      if ((uVar9 & 0x800) != 0) {
        printf((char *)(DAT_00026b44 + 0x267d4));
      }
      if ((uVar9 & 0x400) != 0) {
        printf((char *)(DAT_00026b48 + 0x267e8));
      }
      if ((uVar9 & 0x200) != 0) {
        printf((char *)(DAT_00026b4c + 0x267fc));
      }
      if ((uVar9 & 0x100) != 0) {
        printf((char *)(DAT_00026b50 + 0x26810));
      }
      if ((uVar9 & 0x80) != 0) {
        printf((char *)(DAT_00026b54 + 0x26824));
      }
      if ((uVar9 & 0x40) != 0) {
        printf((char *)(DAT_00026b58 + 0x26838));
      }
      if ((uVar9 & 0x20) != 0) {
        printf((char *)(DAT_00026b5c + 0x2684c));
      }
      if ((uVar9 & 0x10) != 0) {
        printf((char *)(DAT_00026b60 + 0x26860));
      }
      if ((uVar9 & 8) != 0) {
        printf((char *)(DAT_00026b64 + 0x26874));
      }
      if ((uVar9 & 4) != 0) {
        printf((char *)(DAT_00026b68 + 0x26888));
      }
      if ((uVar9 & 2) != 0) {
        printf((char *)(DAT_00026b6c + 0x2689c));
      }
      if ((uVar9 & 1) != 0) {
        printf((char *)(DAT_00026b70 + 0x268b0));
      }
      uVar2 = (uVar2 & 0x3ffff) >> 2;
      putchar(10);
      FUN_00025e3c(iVar8,param_2);
      if ((uVar2 & 2) != 0) {
        printf((char *)(DAT_00026b74 + 0x268dc));
      }
      if ((uVar2 & 1) != 0) {
        printf((char *)(DAT_00026b78 + 0x268f0));
      }
      puts((char *)(DAT_00026b7c + 0x268fc));
      uVar2 = FUN_00025d34(param_2);
      uVar9 = FUN_00025d54(param_2);
      FUN_00025e3c(iVar8,param_2);
      printf((char *)(DAT_00026b80 + 0x26938),(uVar2 & 0x7f) << 0x10 | uVar9);
      if ((uVar2 & 0x80) == 0) {
        pcVar4 = (char *)(DAT_00026b84 + 0x2694c);
      }
      else {
        pcVar4 = (char *)(DAT_00026b88 + 0x2695c);
      }
      puts(pcVar4);
    }
  } while( true );
}



/* ===== FUN_00027518 @ 00027518 size=32 ===== */

undefined1 FUN_00027518(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar1 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return *puVar1;
}



/* ===== FUN_00027538 @ 00027538 size=40 ===== */

ushort FUN_00027538(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 8);
  *(ushort **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -2;
  uVar1 = *puVar2;
  return uVar1 << 8 | uVar1 >> 8;
}



/* ===== FUN_00027560 @ 00027560 size=604 ===== */

int FUN_00027560(uint param_1)

{
  if (param_1 == 0x31) {
    return DAT_000277dc + 0x276a8;
  }
  if (0x31 < param_1) {
    if (param_1 == 0x71) {
      return DAT_0002780c + 0x27738;
    }
    if (0x71 < param_1) {
      if (param_1 == 0x74) {
        return DAT_00027824 + 0x27780;
      }
      if (0x74 < param_1) {
        if (param_1 == 0x90) {
          return DAT_00027830 + 0x277a4;
        }
        if (param_1 != 0xa0) {
          if (param_1 != 0x80) {
            return DAT_000277d8 + 0x2769c;
          }
          return (int)&DAT_000277bc + DAT_00027838;
        }
        return DAT_00027834 + 0x277b0;
      }
      if (param_1 == 0x72) {
        return DAT_00027828 + 0x2778c;
      }
      if (param_1 != 0x73) {
        return DAT_000277d4 + 0x27678;
      }
      return DAT_0002782c + 0x27798;
    }
    if (param_1 == 0x50) {
      return DAT_00027810 + 0x27744;
    }
    if (0x50 < param_1) {
      if (param_1 == 0x60) {
        return DAT_0002781c + 0x27768;
      }
      if (param_1 != 0x70) {
        return DAT_000277d0 + 0x27650;
      }
      return DAT_00027820 + 0x27774;
    }
    if (param_1 == 0x40) {
      return DAT_00027814 + 0x27750;
    }
    if (param_1 != 0x41) {
      return DAT_000277cc + 0x27634;
    }
    return DAT_00027818 + 0x2775c;
  }
  if (param_1 == 0x15) {
    return DAT_000277e0 + 0x276b4;
  }
  if (0x15 < param_1) {
    if (param_1 == 0x18) {
      return DAT_000277f8 + 0x276fc;
    }
    if (0x18 < param_1) {
      if (param_1 == 0x20) {
        return DAT_00027804 + 0x27720;
      }
      if (param_1 != 0x30) {
        return DAT_000277c8 + 0x27600;
      }
      return DAT_00027808 + 0x2772c;
    }
    if (param_1 == 0x16) {
      return DAT_000277fc + 0x27708;
    }
    if (param_1 != 0x17) {
      return DAT_000277c4 + 0x275e4;
    }
    return DAT_00027800 + 0x27714;
  }
  if (param_1 == 0x12) {
    return DAT_000277e4 + 0x276c0;
  }
  if (0x12 < param_1) {
    if (param_1 == 0x13) {
      return DAT_000277f0 + 0x276e4;
    }
    if (param_1 != 0x14) {
      return DAT_000277c0 + 0x275bc;
    }
    return DAT_000277f4 + 0x276f0;
  }
  if (param_1 == 0x10) {
    return DAT_000277e8 + 0x276cc;
  }
  if (param_1 != 0x11) {
    return DAT_000277bc + 0x275a0;
  }
  return DAT_000277ec + 0x276d8;
}



/* ===== FUN_0002783c @ 0002783c size=236 ===== */

int FUN_0002783c(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return (int)&DAT_00027928 + DAT_0002795c;
  case 2:
    return DAT_00027928 + 0x2788c;
  case 3:
    return DAT_0002792c + 0x27898;
  case 4:
    return DAT_00027930 + 0x278a4;
  case 5:
    return DAT_00027934 + 0x278b0;
  case 6:
    return DAT_00027938 + 0x278bc;
  case 7:
    return DAT_0002793c + 0x278c8;
  case 8:
    return DAT_00027940 + 0x278d4;
  case 9:
    return DAT_00027944 + 0x278e0;
  case 10:
    return DAT_00027948 + 0x278ec;
  case 0xb:
    return DAT_0002794c + 0x278f8;
  case 0xc:
    return DAT_00027950 + 0x27904;
  case 0xd:
    return DAT_00027954 + 0x27910;
  default:
    return DAT_00027958 + 0x2791c;
  }
}



/* ===== FUN_00027960 @ 00027960 size=380 ===== */

int FUN_00027960(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (int)&DAT_00027adc + DAT_00027b34;
  case 1:
    return DAT_00027adc + 0x279d4;
  case 2:
    return DAT_00027ae0 + 0x279e0;
  case 3:
    return DAT_00027ae4 + 0x279ec;
  case 4:
    return DAT_00027ae8 + 0x279f8;
  case 5:
    return DAT_00027aec + 0x27a04;
  case 6:
    break;
  case 7:
    return DAT_00027af0 + 0x27a10;
  case 8:
    return DAT_00027af4 + 0x27a1c;
  case 9:
    return DAT_00027af8 + 0x27a28;
  case 10:
    return DAT_00027afc + 0x27a34;
  case 0xb:
    return DAT_00027b00 + 0x27a40;
  case 0xc:
    return DAT_00027b08 + 0x27a58;
  case 0xd:
    return DAT_00027b04 + 0x27a4c;
  case 0xe:
    return DAT_00027b0c + 0x27a64;
  case 0xf:
    return DAT_00027b10 + 0x27a70;
  case 0x10:
    return DAT_00027b14 + 0x27a7c;
  case 0x11:
    return DAT_00027b18 + 0x27a88;
  case 0x12:
    return DAT_00027b1c + 0x27a94;
  case 0x13:
    return DAT_00027b20 + 0x27aa0;
  case 0x14:
    return DAT_00027b24 + 0x27aac;
  case 0x15:
    return DAT_00027b28 + 0x27ab8;
  case 0x16:
    return DAT_00027b2c + 0x27ac4;
  }
  return DAT_00027b30 + 0x27ad0;
}



/* ===== FUN_00027b38 @ 00027b38 size=104 ===== */

int FUN_00027b38(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (int)&DAT_00027ba0 + DAT_00027bb4;
  case 1:
    return DAT_00027ba0 + 0x27b64;
  case 2:
    return DAT_00027ba4 + 0x27b70;
  case 3:
    return DAT_00027ba8 + 0x27b7c;
  case 4:
    return DAT_00027bac + 0x27b88;
  default:
    return DAT_00027bb0 + 0x27b94;
  }
}



/* ===== FUN_00027bb8 @ 00027bb8 size=272 ===== */

int FUN_00027bb8(uint param_1)

{
  if (param_1 == 7) {
    return DAT_00027cd8 + 0x27c50;
  }
  if (7 < param_1) {
    if (param_1 == 10) {
      return DAT_00027cec + 0x27c8c;
    }
    if (10 < param_1) {
      if (param_1 == 0xc) {
        return DAT_00027cf8 + 0x27cb0;
      }
      if (0xb < param_1) {
        if (param_1 != 0x6a) {
          return DAT_00027cd4 + 0x27c44;
        }
        return (int)&DAT_00027cc8 + DAT_00027d00;
      }
      return DAT_00027cfc + 0x27cbc;
    }
    if (param_1 == 8) {
      return DAT_00027cf0 + 0x27c98;
    }
    if (param_1 != 9) {
      return DAT_00027cd0 + 0x27c24;
    }
    return DAT_00027cf4 + 0x27ca4;
  }
  if (param_1 == 3) {
    return DAT_00027cdc + 0x27c5c;
  }
  if (param_1 < 4) {
    if (param_1 != 0) {
      return DAT_00027cc8 + 0x27be4;
    }
    return DAT_00027ce0 + 0x27c68;
  }
  if (param_1 == 5) {
    return DAT_00027ce4 + 0x27c74;
  }
  if (param_1 < 6) {
    return DAT_00027ccc + 0x27bfc;
  }
  return DAT_00027ce8 + 0x27c80;
}



/* ===== FUN_00027d04 @ 00027d04 size=104 ===== */

int FUN_00027d04(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (int)&DAT_00027d6c + DAT_00027d80;
  case 1:
    return DAT_00027d6c + 0x27d30;
  case 2:
    return DAT_00027d70 + 0x27d3c;
  case 3:
    return DAT_00027d74 + 0x27d48;
  case 4:
    return DAT_00027d78 + 0x27d54;
  default:
    return DAT_00027d7c + 0x27d60;
  }
}



/* ===== FUN_00027d84 @ 00027d84 size=152 ===== */

int FUN_00027d84(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (int)&DAT_00027e1c + DAT_00027e3c;
  case 1:
    return DAT_00027e1c + 0x27dbc;
  case 2:
    return DAT_00027e20 + 0x27dc8;
  case 3:
    return DAT_00027e24 + 0x27dd4;
  case 4:
    return DAT_00027e28 + 0x27de0;
  case 5:
    return DAT_00027e2c + 0x27dec;
  case 6:
    return DAT_00027e30 + 0x27df8;
  case 7:
    return DAT_00027e34 + 0x27e04;
  default:
    return DAT_00027e38 + 0x27e10;
  }
}



/* ===== FUN_00027e40 @ 00027e40 size=144 ===== */

int FUN_00027e40(uint param_1)

{
  if (param_1 == 2) {
    return DAT_00027ed8 + 0x27e94;
  }
  if (2 < param_1) {
    if (param_1 == 4) {
      return DAT_00027ee4 + 0x27eb8;
    }
    if (3 < param_1) {
      if (param_1 != 0xff) {
        return DAT_00027ed4 + 0x27e88;
      }
      return (int)&DAT_00027ed0 + DAT_00027eec;
    }
    return DAT_00027ee8 + 0x27ec4;
  }
  if (param_1 == 0) {
    return DAT_00027edc + 0x27ea0;
  }
  if (param_1 != 1) {
    return DAT_00027ed0 + 0x27e68;
  }
  return DAT_00027ee0 + 0x27eac;
}



/* ===== FUN_00027ef0 @ 00027ef0 size=88 ===== */

int FUN_00027ef0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (int)&DAT_00027f48 + DAT_00027f58;
  case 1:
    return DAT_00027f48 + 0x27f18;
  case 2:
    return DAT_00027f4c + 0x27f24;
  case 3:
    return DAT_00027f50 + 0x27f30;
  default:
    return DAT_00027f54 + 0x27f3c;
  }
}



/* ===== FUN_00027f5c @ 00027f5c size=68 ===== */

undefined8 FUN_00027f5c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_1 + 8);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  *(uint **)(param_1 + 8) = puVar3 + 2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
  return CONCAT44(uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
                  uVar1 >> 0x18,
                  uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                  uVar2 >> 0x18);
}



/* ===== FUN_00027fa0 @ 00027fa0 size=36 ===== */

uint FUN_00027fa0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 8);
  *(uint **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -4;
  uVar1 = *puVar2;
  return uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
}



/* ===== FUN_00027fc4 @ 00027fc4 size=344 ===== */

int FUN_00027fc4(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 0:
    return DAT_0002813c + 0x280b0;
  case 1:
    break;
  case 2:
    switch(param_2) {
    case 1:
      return DAT_00028148 + 0x280d4;
    case 2:
      return DAT_00028124 + 0x28038;
    case 3:
      return DAT_0002812c + 0x28050;
    case 4:
      return DAT_00028130 + 0x2805c;
    default:
      return DAT_00028128 + 0x28044;
    }
  case 3:
    if (param_2 == 2) {
      return DAT_0002814c + 0x280e0;
    }
    if (param_2 == 3) {
      return DAT_00028150 + 0x280ec;
    }
    if (param_2 == 1) {
      return DAT_00028154 + 0x280f8;
    }
    return DAT_00028134 + 0x28080;
  case 4:
    if (param_2 == 2) {
      return DAT_00028158 + 0x28104;
    }
    if (param_2 == 3) {
      return DAT_0002815c + 0x28110;
    }
    if (param_2 == 1) {
      return (int)&DAT_0002811c + DAT_00028160;
    }
    return DAT_00028138 + 0x280a4;
  default:
    return DAT_0002811c + 0x27ff0;
  }
  if (param_2 == 1) {
    return DAT_00028140 + 0x280bc;
  }
  if (param_2 == 2) {
    return DAT_00028144 + 0x280c8;
  }
  return DAT_00028120 + 0x2800c;
}



/* ===== FUN_00028164 @ 00028164 size=308 ===== */

void FUN_00028164(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_00028298 + 0x28174 + DAT_0002829c);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_00028298 + 0x28174 + DAT_000282a0);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_000282b0 + 0x2827c),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_000282a4 + 0x28210),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_000282a8 + 0x2822c),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_000282b4 + 0x2828c));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_000282ac + 0x28258),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_000283b0 @ 000283b0 size=292 ===== */

void FUN_000283b0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *__format;
  char *__format_00;
  undefined8 uVar4;
  
  __format = (char *)(DAT_000284d4 + 0x283d4);
  __format_00 = (char *)(DAT_000284d8 + 0x283d8);
  iVar3 = DAT_000284dc + 0x283dc;
  for (; param_3 != 0; param_3 = param_3 - 1 & 0xff) {
    FUN_00028164(param_1,param_2);
    uVar1 = FUN_00027fa0(param_2);
    uVar4 = FUN_00027d84(uVar1,uVar1);
    printf(__format,(int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
    FUN_00028164(param_1,param_2);
    uVar1 = FUN_00027538(param_2);
    uVar4 = FUN_00027bb8(uVar1,uVar1);
    printf((char *)(DAT_000284e0 + 0x28434),(int)((ulonglong)uVar4 >> 0x20),(int)uVar4);
    FUN_00028164(param_1,param_2);
    uVar2 = FUN_00027538(param_2);
    uVar2 = uVar2 & 0xff;
    printf((char *)(DAT_000284e4 + 0x28460),uVar2,uVar2);
    FUN_00028164(param_1,param_2);
    printf((char *)(DAT_000284e8 + 0x28478));
    while (uVar2 != 0) {
      uVar2 = uVar2 - 1 & 0xff;
      uVar1 = FUN_00027518(param_2);
      if ((*(ushort *)(**(int **)(iVar3 + DAT_000284ec) + (short)uVar1 * 2) & 0x40) == 0) {
        uVar1 = 0x2e;
      }
      printf(__format_00,uVar1);
    }
    putchar(10);
  }
  return;
}



/* ===== FUN_000284f0 @ 000284f0 size=10088 ===== */

void FUN_000284f0(int param_1,int param_2,uint param_3,int param_4)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  code *__s;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  uint in_fpscr;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  iVar12 = DAT_000294d8 + 0x28510;
  FUN_00028164();
  iVar11 = param_1;
  if (param_4 != 0x17) {
    if (param_4 != 0x1b) goto LAB_000288f8;
    uVar3 = FUN_00027518(param_2);
    uVar4 = FUN_00027538(param_2);
    uVar5 = FUN_00027560(uVar3);
    printf((char *)(DAT_0002a154 + 0x29ecc),uVar5,uVar4);
    if (uVar4 != *(uint *)(param_2 + 0xc)) {
      FUN_00028164(param_1,param_2);
      __s = (code *)(DAT_0002a158 + 0x29ef0);
      goto LAB_00028ad8;
    }
    if (uVar3 != 0x72) {
      if (uVar3 < 0x73) {
        if (uVar3 == 0x70) {
          iVar11 = param_1 + 1;
          FUN_00028164(iVar11,param_2);
          if ((param_3 & 2) == 0) {
            if (1 < uVar4) {
              uVar5 = FUN_00027538(param_2);
              uVar16 = CONCAT44(uVar5,uVar5);
              pcVar14 = (char *)(DAT_0002a18c + 0x2a358);
              goto LAB_00028afc;
            }
            pcVar14 = (char *)(DAT_0002a188 + 0x2a330);
          }
          else {
            if (9 < uVar4 || uVar4 == 1) {
              uVar5 = FUN_00027518(param_2);
              uVar16 = FUN_00027960(uVar5,uVar5);
              printf((char *)(DAT_0002a190 + 0x2a378),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
              iVar10 = DAT_0002a198;
              if (uVar4 == 1) {
                return;
              }
              pcVar14 = (char *)(DAT_0002a194 + 0x2a398);
              FUN_00028164(iVar11,param_2);
              uVar5 = FUN_00027538(param_2);
              printf((char *)(DAT_0002a19c + 0x2a3b8),uVar5,uVar5);
              FUN_00028164(iVar11,param_2);
              uVar5 = FUN_00027fa0(param_2);
              printf((char *)(DAT_0002a1a0 + 0x2a3e0),uVar5,uVar5);
              FUN_00028164(iVar11,param_2);
              uVar5 = FUN_00027538(param_2);
              uVar16 = FUN_00027bb8(uVar5,uVar5);
              printf((char *)(DAT_0002a1a4 + 0x2a40c),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
              FUN_00028164(iVar11,param_2);
              uVar3 = FUN_00027518(param_2);
              printf((char *)(DAT_0002a1a8 + 0x2a438),uVar3,uVar3);
              for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
                FUN_00028164(iVar11,param_2);
                sVar1 = FUN_00027518(param_2);
                printf(pcVar14);
                while (sVar1 != 0) {
                  sVar1 = sVar1 + -1;
                  uVar5 = FUN_00027518(param_2);
                  if ((*(ushort *)(**(int **)(iVar12 + DAT_0002a310) + (short)uVar5 * 2) & 0x40) ==
                      0) {
                    uVar5 = 0x2e;
                  }
                  printf((char *)(iVar10 + 0x2a3a0),uVar5);
                }
                putchar(10);
              }
              return;
            }
            pcVar14 = &UNK_0002a124 + DAT_0002a184;
          }
        }
        else {
          if (uVar3 != 0x71) goto LAB_000288f8;
          iVar10 = param_1 + 1;
          FUN_00028164(iVar10,param_2);
          iVar11 = DAT_0002a1b0;
          if ((param_3 & 2) != 0) {
            uVar5 = FUN_00027518(param_2);
            uVar16 = FUN_00027960(uVar5,uVar5);
            printf((char *)(DAT_0002a15c + 0x29f44),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
            iVar11 = DAT_0002a164;
            if (uVar4 == 1) {
              return;
            }
            pcVar14 = (char *)(DAT_0002a160 + 0x29f64);
            FUN_00028164(iVar10,param_2);
            uVar5 = FUN_00027538(param_2);
            printf((char *)(DAT_0002a168 + 0x29f84),uVar5,uVar5);
            FUN_00028164(iVar10,param_2);
            uVar3 = FUN_00027538(param_2);
            printf((char *)(DAT_0002a16c + 0x29fb0),uVar3,uVar3);
            do {
              if (uVar3 == 0) {
                return;
              }
              FUN_00028164(iVar10,param_2);
              uVar5 = FUN_00027518(param_2);
              uVar16 = FUN_00027538(param_2,uVar5);
              iVar7 = (int)((ulonglong)uVar16 >> 0x20);
              uVar4 = (uint)uVar16;
              if (iVar7 == 2) {
                printf(pcVar14);
                printf((char *)(DAT_0002a238 + 0x2a8b4),uVar4,uVar4);
                FUN_00028164(iVar10,param_2);
                if (uVar4 < 0xe) {
                  pcVar6 = (char *)(DAT_0002a23c + 0x2a8d0);
                  goto LAB_0002a030;
                }
                FUN_00027f5c(param_2);
                printf((char *)(DAT_0002a240 + 0x2a8f0));
                FUN_00028164(iVar10,param_2);
                uVar5 = FUN_00027518(param_2);
                switch(uVar5) {
                case 0:
                  iVar7 = DAT_0002a278 + 0x2aa84;
                  break;
                case 1:
                  iVar7 = DAT_0002a244 + 0x2a93c;
                  break;
                case 2:
                  iVar7 = DAT_0002a260 + 0x2aa3c;
                  break;
                case 3:
                  iVar7 = DAT_0002a264 + 0x2aa48;
                  break;
                case 4:
                  iVar7 = DAT_0002a268 + 0x2aa54;
                  break;
                case 5:
                  iVar7 = DAT_0002a26c + 0x2aa60;
                  break;
                case 6:
                  iVar7 = DAT_0002a270 + 0x2aa6c;
                  break;
                default:
                  iVar7 = DAT_0002a274 + 0x2aa78;
                }
                printf((char *)(DAT_0002a248 + 0x2a944),uVar5,iVar7);
                FUN_00028164(iVar10,param_2);
                uVar4 = FUN_00027518(param_2);
                if ((uVar4 & 1) == 0) {
                  iVar7 = DAT_0002a24c + 0x2a970;
                }
                else {
                  iVar7 = DAT_0002a27c + 0x2aa90;
                }
                printf((char *)(DAT_0002a250 + 0x2a978),uVar4,iVar7);
                FUN_00028164(iVar10,param_2);
                uVar5 = FUN_00027538(param_2);
                uVar16 = FUN_00027bb8(uVar5,uVar5);
                printf((char *)(DAT_0002a254 + 0x2a9a4),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16
                      );
                FUN_00028164(iVar10,param_2);
                uVar4 = FUN_00027538(param_2);
                printf((char *)(DAT_0002a258 + 0x2a9d0),uVar4,uVar4);
                FUN_00028164(iVar10,param_2);
                printf((char *)(DAT_0002a25c + 0x2a9e8));
                while (uVar4 != 0) {
                  uVar4 = uVar4 - 1 & 0xffff;
                  uVar5 = FUN_00027518(param_2);
                  if ((*(ushort *)(**(int **)(iVar12 + DAT_0002a310) + (short)uVar5 * 2) & 0x40) ==
                      0) {
                    uVar5 = 0x2e;
                  }
                  printf((char *)(iVar11 + 0x29f6c),uVar5);
                }
LAB_0002a774:
                putchar(10);
              }
              else if (iVar7 == 3) {
                printf((char *)(DAT_0002a280 + 0x2aa9c));
                printf((char *)(DAT_0002a284 + 0x2aab0),uVar4,uVar4);
                FUN_00028164(iVar10,param_2);
                if (uVar4 < 0xe) {
                  pcVar6 = (char *)(DAT_0002a288 + 0x2aacc);
                  goto LAB_0002a030;
                }
                FUN_00027f5c(param_2);
                printf((char *)(DAT_0002a28c + 0x2aaec));
                FUN_00028164(iVar10,param_2);
                iVar7 = FUN_00027518(param_2);
                if (iVar7 == 0) {
                  iVar8 = DAT_0002a2ac + 0x2abf8;
                }
                else if (iVar7 == 1) {
                  iVar8 = DAT_0002a2b0 + 0x2ac04;
                }
                else {
                  iVar8 = DAT_0002a290 + 0x2ab1c;
                }
                pcVar6 = (char *)(DAT_0002a298 + 0x2ab2c);
                printf((char *)(DAT_0002a294 + 0x2ab28),iVar7,iVar8);
                FUN_00028164(iVar10,param_2);
                uVar5 = FUN_00027538(param_2);
                uVar16 = FUN_00027bb8(uVar5,uVar5);
                printf((char *)(DAT_0002a29c + 0x2ab58),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16
                      );
                FUN_00028164(iVar10,param_2);
                uVar4 = FUN_00027538(param_2);
                printf((char *)(DAT_0002a2a0 + 0x2ab84),uVar4,uVar4);
                FUN_00028164(iVar10,param_2);
                printf((char *)(DAT_0002a2a4 + 0x2ab9c));
                while (uVar4 != 0) {
                  uVar4 = uVar4 - 1 & 0xffff;
                  uVar5 = FUN_00027518(param_2);
                  if ((*(ushort *)(**(int **)(iVar12 + DAT_0002a310) + (short)uVar5 * 2) & 0x40) ==
                      0) {
                    uVar5 = 0x2e;
                  }
                  printf(pcVar6,uVar5);
                }
                putchar(10);
                FUN_00028164(iVar10,param_2);
                uVar5 = FUN_00027518(param_2);
                printf((char *)(DAT_0002a2a8 + 0x2abd8),uVar5,uVar5);
                FUN_000283b0(iVar10,param_2,uVar5);
              }
              else if (iVar7 == 1) {
                printf((char *)(DAT_0002a170 + 0x2a000));
                printf((char *)(DAT_0002a174 + 0x2a014),uVar4,uVar4);
                FUN_00028164(iVar10,param_2);
                if (0x1b < uVar4) {
                  uVar5 = FUN_00027538(param_2);
                  printf((char *)(DAT_0002a1c4 + 0x2a5c8),uVar5,uVar5);
                  FUN_00028164(iVar10,param_2);
                  uVar4 = FUN_00027518(param_2);
                  switch(uVar4 & 0xf) {
                  case 1:
                    iVar7 = DAT_0002a228 + 0x2a834;
                    break;
                  case 2:
                    iVar7 = DAT_0002a1c8 + 0x2a63c;
                    break;
                  case 3:
                    iVar7 = DAT_0002a1f0 + 0x2a78c;
                    break;
                  case 4:
                    iVar7 = DAT_0002a1f4 + 0x2a798;
                    break;
                  case 5:
                    iVar7 = DAT_0002a1f8 + 0x2a7a4;
                    break;
                  case 6:
                    iVar7 = DAT_0002a1fc + 0x2a7b0;
                    break;
                  case 7:
                    iVar7 = DAT_0002a200 + 0x2a7bc;
                    break;
                  case 8:
                    iVar7 = DAT_0002a204 + 0x2a7c8;
                    break;
                  case 9:
                    iVar7 = DAT_0002a208 + 0x2a7d4;
                    break;
                  case 10:
                    iVar7 = DAT_0002a20c + 0x2a7e0;
                    break;
                  case 0xb:
                    iVar7 = DAT_0002a210 + 0x2a7ec;
                    break;
                  case 0xc:
                    iVar7 = DAT_0002a214 + 0x2a7f8;
                    break;
                  case 0xd:
                    iVar7 = DAT_0002a218 + 0x2a804;
                    break;
                  case 0xe:
                    iVar7 = DAT_0002a21c + 0x2a810;
                    break;
                  case 0xf:
                    iVar7 = DAT_0002a220 + 0x2a81c;
                    break;
                  default:
                    iVar7 = DAT_0002a224 + 0x2a828;
                  }
                  printf((char *)(DAT_0002a1cc + 0x2a644),uVar4,iVar7);
                  FUN_00028164(iVar10,param_2);
                  uVar4 = FUN_00027fa0(param_2);
                  uVar9 = uVar4 & 3;
                  if (uVar9 == 2) {
                    iVar7 = DAT_0002a22c + 0x2a840;
                  }
                  else if (uVar9 == 3) {
                    iVar7 = DAT_0002a230 + 0x2a84c;
                  }
                  else if (uVar9 == 1) {
                    iVar7 = DAT_0002a234 + 0x2a858;
                  }
                  else {
                    iVar7 = DAT_0002a1d0 + 0x2a684;
                  }
                  pcVar6 = (char *)(DAT_0002a1d8 + 0x2a694);
                  printf((char *)(DAT_0002a1d4 + 0x2a690),uVar4,iVar7);
                  FUN_00028164(iVar10,param_2);
                  uVar5 = FUN_00027518(param_2);
                  uVar16 = FUN_00027e40(uVar5,uVar5);
                  printf((char *)(DAT_0002a1dc + 0x2a6c0),(int)((ulonglong)uVar16 >> 0x20),
                         (int)uVar16);
                  FUN_00028164(iVar10,param_2);
                  uVar16 = FUN_00027f5c(param_2);
                  uVar17 = FUN_00027f5c(param_2);
                  uVar5 = (undefined4)((ulonglong)uVar17 >> 0x20);
                  printf((char *)(DAT_0002a1e0 + 0x2a6fc),uVar5,(int)uVar16,
                         (int)((ulonglong)uVar16 >> 0x20),(int)uVar17,uVar5);
                  FUN_00028164(iVar10,param_2);
                  uVar5 = FUN_00027538(param_2);
                  uVar16 = FUN_00027bb8(uVar5,uVar5);
                  printf((char *)(DAT_0002a1e4 + 0x2a728),(int)((ulonglong)uVar16 >> 0x20),
                         (int)uVar16);
                  FUN_00028164(iVar10,param_2);
                  uVar4 = FUN_00027538(param_2);
                  printf((char *)(DAT_0002a1e8 + 0x2a754),uVar4,uVar4);
                  FUN_00028164(iVar10,param_2);
                  printf((char *)(DAT_0002a1ec + 0x2a76c));
                  while (uVar4 != 0) {
                    uVar4 = uVar4 - 1 & 0xffff;
                    uVar5 = FUN_00027518(param_2);
                    if ((*(ushort *)(**(int **)(iVar12 + DAT_0002a310) + (short)uVar5 * 2) & 0x40)
                        == 0) {
                      uVar5 = 0x2e;
                    }
                    printf(pcVar6,uVar5);
                  }
                  goto LAB_0002a774;
                }
                pcVar6 = (char *)(DAT_0002a178 + 0x2a034);
LAB_0002a030:
                puts(pcVar6);
                FUN_000149a8(iVar10,param_2);
              }
              uVar3 = uVar3 - 1 & 0xffff;
            } while( true );
          }
          if (9 < uVar4) {
            uVar5 = FUN_00027518(param_2);
            uVar16 = FUN_00027ef0(uVar5,uVar5);
            printf((char *)(DAT_0002a1b4 + 0x2a4f4),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
            FUN_00028164(iVar10,param_2);
            uVar5 = FUN_00027fa0(param_2);
            printf((char *)(DAT_0002a1b8 + 0x2a51c),uVar5,uVar5);
            FUN_00028164(iVar10,param_2);
            uVar5 = FUN_00027fa0(param_2);
            printf((char *)(DAT_0002a1bc + 0x2a544),uVar5,uVar5);
            FUN_00028164(iVar10,param_2);
            uVar3 = FUN_00027518(param_2);
            printf((char *)(DAT_0002a1c0 + 0x2a570),uVar3,uVar3);
            for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
              FUN_00028164(iVar10,param_2);
              uVar5 = FUN_00027fa0(param_2);
              uVar16 = FUN_00027d84(uVar5,uVar5);
              printf((char *)(iVar11 + 0x2a4e0),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
            }
            return;
          }
          pcVar14 = (char *)(DAT_0002a1ac + 0x2a4cc);
        }
LAB_0002a32c:
        puts(pcVar14);
        iVar11 = param_1 + 1;
        goto LAB_000288f8;
      }
      if (uVar3 == 0x80) {
        iVar11 = param_1 + 1;
        FUN_00028164(iVar11,param_2);
        iVar10 = DAT_0002a300;
        if ((param_3 & 2) != 0) {
          uVar5 = FUN_00027518(param_2);
          uVar16 = FUN_00027960(uVar5,uVar5);
          printf((char *)(DAT_0002a2f0 + 0x2ae80),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
          if (uVar4 == 1) {
            return;
          }
          FUN_00028164(iVar11,param_2);
          uVar5 = FUN_00027538(param_2);
          printf((char *)(DAT_0002a2f4 + 0x2aeb0),uVar5,uVar5);
          FUN_00028164(iVar11,param_2);
          uVar5 = FUN_00027fa0(param_2);
          uVar16 = CONCAT44(uVar5,uVar5);
          pcVar14 = (char *)(DAT_0002a2f8 + 0x2aed8);
          goto LAB_00028afc;
        }
        if (3 < uVar4) {
          uVar5 = FUN_00027538(param_2);
          uVar16 = FUN_00027bb8(uVar5,uVar5);
          printf((char *)(DAT_0002a304 + 0x2af10),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
          FUN_00028164(iVar11,param_2);
          uVar3 = FUN_00027538(param_2);
          printf((char *)(DAT_0002a308 + 0x2af3c),uVar3,uVar3);
          FUN_00028164(iVar11,param_2);
          printf((char *)(DAT_0002a30c + 0x2af54));
          while (uVar3 != 0) {
            uVar3 = uVar3 - 1 & 0xffff;
            uVar5 = FUN_00027518(param_2);
            if ((*(ushort *)(**(int **)(iVar12 + DAT_0002a310) + (short)uVar5 * 2) & 0x40) == 0) {
              uVar5 = 0x2e;
            }
            printf((char *)(iVar10 + 0x2aefc),uVar5);
          }
          putchar(10);
          return;
        }
        __s = (code *)(DAT_0002a2fc + 0x2aee8);
      }
      else {
        if (uVar3 != 0xa0) {
          if (uVar3 != 0x73) goto LAB_000288f8;
          iVar12 = param_1 + 1;
          FUN_00028164(iVar12,param_2);
          iVar11 = DAT_0002a2dc;
          if ((param_3 & 2) != 0) {
            uVar5 = FUN_00027518(param_2);
            uVar16 = FUN_00027960(uVar5,uVar5);
            printf((char *)(DAT_0002a17c + 0x2a09c),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
            if (uVar4 == 1) {
              return;
            }
            FUN_00028164(iVar12,param_2);
            uVar5 = FUN_00027518(param_2);
            printf((char *)(DAT_0002a180 + 0x2a0d0),uVar5,uVar5);
            FUN_000283b0(iVar12,param_2,uVar5);
            return;
          }
          if (0xb < uVar4) {
            uVar5 = FUN_00027518(param_2);
            uVar16 = FUN_00027ef0(uVar5,uVar5);
            printf((char *)(DAT_0002a2e0 + 0x2ad8c),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
            FUN_00028164(iVar12,param_2);
            FUN_00027f5c(param_2);
            printf((char *)(DAT_0002a2e4 + 0x2adb8));
            FUN_00028164(iVar12,param_2);
            uVar5 = FUN_00027538(param_2);
            printf((char *)(DAT_0002a2e8 + 0x2ade0),uVar5,uVar5);
            FUN_00028164(iVar12,param_2);
            uVar3 = FUN_00027518(param_2);
            printf((char *)(DAT_0002a2ec + 0x2ae0c),uVar3,uVar3);
            for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
              FUN_00028164(iVar12,param_2);
              uVar5 = FUN_00027fa0(param_2);
              uVar16 = FUN_00027d84(uVar5,uVar5);
              printf((char *)(iVar11 + 0x2ad78),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
            }
            return;
          }
          pcVar14 = (char *)(DAT_0002a2d8 + 0x2ad64);
          goto LAB_0002a32c;
        }
        iVar11 = param_1 + 1;
        FUN_00028164(iVar11,param_2);
        if ((param_3 & 2) != 0) {
          uVar5 = FUN_00027518(param_2);
          uVar16 = FUN_00027960(uVar5,uVar5);
          pcVar14 = (char *)(DAT_0002a314 + 0x2afe4);
          goto LAB_00028afc;
        }
        __s = FUN_0002aff0 + DAT_0002a318;
      }
      goto LAB_00028ad8;
    }
    iVar11 = param_1 + 1;
    FUN_00028164(iVar11,param_2);
    if ((param_3 & 2) != 0) {
      uVar5 = FUN_00027518(param_2);
      uVar16 = FUN_00027960(uVar5,uVar5);
      printf((char *)(DAT_0002a2b4 + 0x2ac7c),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
      if (uVar4 == 1) {
        return;
      }
      FUN_00028164(iVar11,param_2);
      uVar5 = FUN_00027fa0(param_2);
      uVar16 = CONCAT44(uVar5,uVar5);
      pcVar14 = (char *)(DAT_0002a2b8 + 0x2acac);
      goto LAB_00028afc;
    }
    if (uVar4 < 0xb) {
      __s = (code *)(DAT_0002a2bc + 0x2acbc);
      goto LAB_00028ad8;
    }
    uVar5 = FUN_00027538(param_2);
    printf((char *)(DAT_0002a2c0 + 0x2acd8),uVar5,uVar5);
    FUN_00028164(iVar11,param_2);
    iVar12 = FUN_00027518(param_2);
    if (iVar12 == 0) {
      iVar10 = DAT_0002a2d0 + 0x2ad48;
    }
    else if (iVar12 == 1) {
      iVar10 = DAT_0002a2d4 + 0x2ad54;
    }
    else {
      iVar10 = DAT_0002a2c4 + 0x2ad08;
    }
    printf((char *)(DAT_0002a2c8 + 0x2ad10),iVar12,iVar10);
    FUN_00028164(iVar11,param_2);
    FUN_00027f5c(param_2);
    pcVar14 = (char *)(DAT_0002a2cc + 0x2ad3c);
    goto LAB_00029bf0;
  }
  uVar3 = FUN_00027518(param_2);
  uVar4 = FUN_00027518(param_2);
  uVar9 = FUN_00027518(param_2);
  switch(uVar3 & 0xf) {
  case 0:
    iVar10 = DAT_00029510 + 0x286f0;
    break;
  case 1:
    iVar10 = DAT_000294dc + 0x285b0;
    break;
  case 2:
    iVar10 = DAT_000294e4 + 0x2866c;
    break;
  case 3:
    iVar10 = DAT_000294e8 + 0x28678;
    break;
  case 4:
    iVar10 = DAT_000294ec + 0x28684;
    break;
  case 5:
  default:
switchD_0002855c_default:
    iVar10 = DAT_0002950c + 0x286e4;
    break;
  case 6:
    goto switchD_0002855c_default;
  case 7:
    goto switchD_0002855c_default;
  case 8:
    iVar10 = DAT_000294f0 + 0x28690;
    break;
  case 9:
    iVar10 = DAT_000294f4 + 0x2869c;
    break;
  case 10:
    iVar10 = DAT_000294f8 + 0x286a8;
    break;
  case 0xb:
    iVar10 = DAT_000294fc + 0x286b4;
    break;
  case 0xc:
    iVar10 = DAT_00029500 + 0x286c0;
    break;
  case 0xd:
    iVar10 = DAT_00029504 + 0x286cc;
    break;
  case 0xe:
    goto switchD_0002855c_default;
  case 0xf:
    iVar10 = DAT_00029508 + 0x286d8;
  }
  uVar13 = (uVar4 & 0x7ff) >> 3;
  iVar7 = param_1 + 1;
  printf((char *)(DAT_000294e0 + 0x285c4),iVar10,uVar4,uVar9);
  FUN_00028164(iVar7,param_2);
  switch(uVar13) {
  case 0:
    iVar10 = DAT_00029558 + 0x2885c;
    goto LAB_000286f8;
  case 1:
    iVar10 = DAT_00029514 + 0x286fc;
    goto LAB_000286f8;
  case 2:
    iVar10 = DAT_00029524 + 0x287c0;
    goto LAB_000286f8;
  case 3:
    iVar10 = DAT_00029528 + 0x287cc;
    goto LAB_000286f8;
  case 4:
    iVar10 = DAT_0002952c + 0x287d8;
    goto LAB_000286f8;
  case 5:
    iVar10 = DAT_00029530 + 0x287e4;
    goto LAB_000286f8;
  case 6:
    iVar10 = DAT_00029534 + 0x287f0;
    goto LAB_000286f8;
  case 7:
    iVar10 = DAT_00029538 + 0x287fc;
    goto LAB_000286f8;
  case 8:
    break;
  case 9:
    iVar10 = DAT_0002953c + 0x28808;
    goto LAB_000286f8;
  case 10:
    iVar10 = DAT_00029540 + 0x28814;
    goto LAB_000286f8;
  case 0xb:
    iVar10 = DAT_00029544 + 0x28820;
    goto LAB_000286f8;
  case 0xc:
    iVar10 = DAT_00029548 + 0x2882c;
    goto LAB_000286f8;
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
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
    iVar10 = DAT_0002954c + 0x28838;
    goto LAB_000286f8;
  case 0x1f:
    iVar10 = DAT_00029550 + 0x28844;
    goto LAB_000286f8;
  }
  iVar10 = DAT_00029554 + 0x28850;
LAB_000286f8:
  printf((char *)(DAT_00029518 + 0x28704),iVar10);
  FUN_00028164(iVar7,param_2);
  if (uVar9 == 0x30) {
    iVar10 = DAT_00029560 + 0x28884;
  }
  else if (uVar9 < 0x31) {
    if (uVar9 == 0) {
      iVar10 = DAT_00029564 + 0x28890;
    }
    else {
      iVar10 = DAT_0002951c + 0x28730;
    }
  }
  else if (uVar9 == 0x31) {
    iVar10 = DAT_00029568 + 0x2889c;
  }
  else if (uVar9 == 0x7c) {
    iVar10 = DAT_0002956c + 0x288a8;
  }
  else {
    iVar10 = DAT_0002955c + 0x28878;
  }
  printf((char *)(DAT_00029520 + 0x28738),iVar10);
  if ((uVar13 != 9) || (uVar3 == 8)) goto LAB_000288f8;
  iVar11 = iVar7;
  if (uVar9 != 0) {
    iVar11 = param_1;
    if (uVar9 == 0x7c) {
      FUN_00028164(iVar7,param_2);
      uVar3 = FUN_00027518(param_2);
      switch(uVar3 & 0x7f) {
      case 0x41:
        iVar11 = DAT_000295ac + 0x28994;
        break;
      case 0x42:
        iVar11 = DAT_00029570 + 0x288b4;
        break;
      case 0x43:
        iVar11 = DAT_00029580 + 0x28910;
        break;
      case 0x44:
        iVar11 = DAT_00029584 + 0x2891c;
        break;
      case 0x45:
        iVar11 = DAT_00029588 + 0x28928;
        break;
      case 0x46:
        iVar11 = DAT_0002958c + 0x28934;
        break;
      case 0x47:
        iVar11 = DAT_00029590 + 0x28940;
        break;
      case 0x48:
        iVar11 = DAT_00029594 + 0x2894c;
        break;
      case 0x49:
        iVar11 = DAT_00029598 + 0x28958;
        break;
      case 0x4a:
        iVar11 = DAT_0002959c + 0x28964;
        break;
      case 0x4b:
        iVar11 = DAT_000295a0 + 0x28970;
        break;
      case 0x4c:
        iVar11 = DAT_000295a4 + 0x2897c;
        break;
      default:
        iVar11 = DAT_000295a8 + 0x28988;
      }
      if ((uVar3 & 0x80) == 0) {
        iVar12 = DAT_00029574 + 0x288c4;
      }
      else {
        iVar12 = DAT_000295b0 + 0x289a0;
      }
      printf((char *)(DAT_00029578 + 0x288cc),uVar3,iVar11,iVar12);
      FUN_00028164(iVar7,param_2);
      uVar5 = FUN_00027518(param_2);
      printf((char *)(DAT_0002957c + 0x288f0),uVar5);
      iVar11 = iVar7;
    }
    goto LAB_000288f8;
  }
  iVar10 = 3;
  pcVar14 = (char *)(DAT_000295b4 + 0x289b8);
  FUN_00028164(iVar7,param_2);
  printf((char *)(DAT_000295b8 + 0x289c4));
  do {
    uVar5 = FUN_00027518(param_2);
    printf(pcVar14,uVar5);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  putchar(10);
  FUN_00028164(iVar7,param_2);
  uVar9 = FUN_00027518(param_2);
  uVar13 = FUN_00027518(param_2);
  uVar4 = FUN_00027538(param_2);
  uVar5 = FUN_00027560(uVar9);
  switch(uVar13) {
  case 0:
    iVar10 = DAT_000295d4 + 0x28ab0;
    break;
  case 1:
    iVar10 = DAT_000295bc + 0x28a4c;
    break;
  case 2:
    iVar10 = DAT_000295c8 + 0x28a8c;
    break;
  case 3:
    iVar10 = DAT_000295cc + 0x28a98;
    break;
  default:
    iVar10 = DAT_000295d0 + 0x28aa4;
  }
  printf((char *)(DAT_000295c0 + 0x28a58),uVar5,iVar10,uVar4);
  iVar10 = DAT_00029610;
  if (uVar4 != *(uint *)(param_2 + 0xc)) {
    FUN_00028164(iVar7,param_2);
    puts((char *)(DAT_000295c4 + 0x28a7c));
    goto LAB_000288f8;
  }
  if (uVar3 == 10) {
    iVar11 = param_1 + 2;
    FUN_00028164(iVar11,param_2);
    if (uVar4 != 0) {
      uVar5 = FUN_00027518(param_2);
      uVar16 = FUN_00027960(uVar5,uVar5);
      pcVar14 = (char *)(DAT_000295dc + 0x28b00);
      goto LAB_00028afc;
    }
    __s = (code *)(DAT_000295d8 + 0x28adc);
LAB_00028ad8:
    puts((char *)__s);
LAB_000288f8:
    FUN_000149a8(iVar11,param_2);
    return;
  }
  if (uVar9 == 0x17) {
    if (4 < uVar3) {
      return;
    }
    iVar11 = param_1 + 2;
    FUN_00028164(iVar11,param_2);
    iVar12 = DAT_000296ac;
    if (1 < uVar4) {
      uVar3 = FUN_00027518(param_2);
      printf((char *)(DAT_000296b0 + 0x29468),uVar3);
      for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
        FUN_00028164(iVar11,param_2);
        uVar5 = FUN_00027538(param_2);
        uVar16 = FUN_00027bb8(uVar5,uVar5);
        printf((char *)(iVar12 + 0x29458),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
      }
      return;
    }
    __s = (code *)(DAT_000296a8 + 0x29444);
    goto LAB_00028ad8;
  }
  if (uVar9 < 0x18) {
    if (uVar9 == 0x13) {
      iVar11 = param_1 + 2;
      FUN_00028164(iVar11,param_2);
      iVar10 = DAT_00029640;
      iVar12 = DAT_00029634;
      if (uVar4 != 0) {
        if (4 < uVar3) {
          uVar3 = FUN_00027518(param_2);
          pcVar14 = (char *)(DAT_00029638 + 0x28f14);
          printf((char *)(DAT_0002963c + 0x28f18),uVar3);
          for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
            FUN_00028164(iVar11,param_2);
            uVar5 = FUN_00027518(param_2);
            uVar2 = FUN_00027b38();
            printf((char *)(iVar12 + 0x28f08),uVar5,uVar2);
            FUN_00028164(iVar11,param_2);
            uVar2 = FUN_00027518(param_2);
            uVar5 = FUN_00027fc4(uVar5,uVar2);
            printf(pcVar14,extraout_r3_00,uVar5);
          }
          return;
        }
        uVar3 = FUN_00027518(param_2);
        printf((char *)(DAT_00029644 + 0x28fac),uVar3);
        for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
          FUN_00028164(iVar11,param_2);
          uVar5 = FUN_00027518(param_2);
          uVar16 = FUN_00027b38(uVar5,uVar5);
          printf((char *)(iVar10 + 0x28fa8),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
        }
        return;
      }
      __s = (code *)(DAT_00029630 + 0x28ee4);
    }
    else if (uVar9 < 0x14) {
      if (uVar9 == 0x11) {
        if (uVar4 == 0) {
          return;
        }
        FUN_00028164(param_1 + 2,param_2);
        uVar3 = FUN_00027518(param_2);
        printf((char *)(DAT_00029614 + 0x28dc4),uVar3);
        for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
          FUN_00028164(param_1 + 2,param_2);
          uVar5 = FUN_00027518(param_2);
          uVar16 = FUN_00027b38(uVar5,uVar5);
          printf((char *)(iVar10 + 0x28dac),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
        }
        return;
      }
      if (uVar9 < 0x12) {
        if (uVar9 != 0x10) goto LAB_000288f8;
        iVar11 = param_1 + 2;
        FUN_00028164(iVar11,param_2);
        if (uVar4 != 0) {
          iVar12 = FUN_00027518(param_2);
          if (iVar12 == 2) {
            iVar10 = DAT_00029604 + 0x28ce0;
          }
          else if (iVar12 == 3) {
            iVar10 = DAT_00029608 + 0x28cec;
          }
          else {
            iVar10 = DAT_000295f0 + 0x28c6c;
          }
          printf((char *)(DAT_000295f4 + 0x28c7c),iVar12,iVar10);
          if (uVar4 == 1) {
            return;
          }
          FUN_00028164(iVar11,param_2);
          uVar3 = FUN_00027518(param_2);
          printf((char *)(DAT_000295f8 + 0x28cac),uVar3);
          if (iVar12 == 2) {
            pcVar14 = (char *)(DAT_000295fc + 0x28cc4);
            pcVar6 = (char *)(DAT_00029600 + 0x28cc8);
            for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
              iVar12 = 3;
              FUN_00028164(iVar11,param_2);
              printf(pcVar14,iVar10);
              do {
                uVar5 = FUN_00027518(param_2);
                printf(pcVar6,uVar5);
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
              putchar(10);
            }
            return;
          }
          if (iVar12 == 3) {
            pcVar14 = (char *)(DAT_0002960c + 0x28d00);
            for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
              FUN_00028164(iVar11,param_2);
              uVar16 = FUN_00027518(param_2);
              FUN_0002783c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
              printf(pcVar14,iVar10);
            }
            return;
          }
          goto LAB_000288f8;
        }
        __s = (code *)(DAT_000295e0 + 0x28b58);
      }
      else {
        iVar11 = param_1 + 2;
        FUN_00028164(iVar11,param_2);
        iVar12 = DAT_0002961c;
        if (uVar4 != 0) {
          if (4 < uVar3) {
            uVar3 = FUN_00027518(param_2);
            pcVar14 = (char *)(DAT_00029620 + 0x28e50);
            printf((char *)(DAT_00029624 + 0x28e54),uVar3);
            for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
              FUN_00028164(iVar11,param_2);
              uVar5 = FUN_00027518(param_2);
              uVar5 = FUN_00027fc4(*(undefined1 *)(iVar12 + 0x28e44),uVar5);
              printf(pcVar14,extraout_r3,uVar5);
            }
            return;
          }
          uVar5 = FUN_00027518(param_2);
          *(char *)(DAT_00029628 + 0x28eb0) = (char)uVar5;
          uVar16 = FUN_00027b38(uVar5,uVar5);
          pcVar14 = (char *)(DAT_0002962c + 0x28ec4);
          goto LAB_00028afc;
        }
        __s = (code *)(DAT_00029618 + 0x28e20);
      }
    }
    else {
      iVar11 = param_1 + 2;
      if (uVar9 == 0x15) {
        FUN_00028164(iVar11,param_2);
        if (uVar4 != 0) {
          uVar4 = FUN_00027518(param_2);
          printf((char *)(DAT_0002965c + 0x290e4),uVar4);
          if (4 < uVar3) {
            pcVar14 = (char *)(DAT_00029660 + 0x290fc);
            pcVar6 = (char *)(DAT_00029664 + 0x29100);
            for (; uVar4 != 0; uVar4 = uVar4 - 1 & 0xff) {
              FUN_00028164(iVar11,param_2);
              uVar5 = FUN_00027518(param_2);
              uVar16 = FUN_00027b38(uVar5,uVar5);
              printf(pcVar14,(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
              FUN_00028164(iVar11,param_2);
              uVar5 = FUN_00027538(param_2);
              uVar16 = FUN_00027bb8(uVar5,uVar5);
              printf((char *)(DAT_00029668 + 0x29158),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
              FUN_00028164(iVar11,param_2);
              uVar3 = FUN_00027518(param_2);
              printf((char *)(DAT_0002966c + 0x29180),uVar3);
              FUN_00028164(iVar11,param_2);
              printf((char *)(DAT_00029670 + 0x29198));
              while (uVar3 != 0) {
                uVar3 = uVar3 - 1 & 0xff;
                uVar5 = FUN_00027518(param_2);
                if ((*(ushort *)(**(int **)(iVar12 + DAT_00029704) + (short)uVar5 * 2) & 0x40) == 0)
                {
                  uVar5 = 0x2e;
                }
                printf(pcVar6,uVar5);
              }
              putchar(10);
            }
            return;
          }
          pcVar14 = (char *)(DAT_00029674 + 0x291c0);
          for (; uVar4 != 0; uVar4 = uVar4 - 1 & 0xff) {
            FUN_00028164(iVar11,param_2);
            uVar5 = FUN_00027518(param_2);
            uVar16 = FUN_00027b38(uVar5,uVar5);
            printf(pcVar14,(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
          }
          return;
        }
        __s = (code *)(DAT_00029658 + 0x290c8);
      }
      else if (uVar9 < 0x16) {
        FUN_00028164(iVar11,param_2);
        iVar10 = DAT_00029650;
        iVar12 = DAT_0002964c;
        if (4 < uVar3) {
          return;
        }
        if (uVar4 != 0) {
          uVar3 = FUN_00027518(param_2);
          printf((char *)(DAT_00029654 + 0x29038),uVar3);
          for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
            FUN_00028164(iVar11,param_2);
            uVar5 = FUN_00027518(param_2);
            uVar2 = FUN_00027b38();
            printf((char *)(iVar12 + 0x29024),uVar5,uVar2);
            FUN_00028164(iVar11,param_2);
            uVar2 = FUN_00027518(param_2);
            uVar5 = FUN_00027fc4(uVar5,uVar2);
            printf((char *)(iVar10 + 0x2902c),extraout_r3_01,uVar5);
          }
          return;
        }
        __s = (code *)(DAT_00029648 + 0x2900c);
      }
      else {
        FUN_00028164(iVar11,param_2);
        iVar7 = DAT_00029694;
        iVar10 = DAT_00029678;
        if (uVar4 != 0) {
          if (4 < uVar3) {
            uVar3 = FUN_00027518(param_2);
            pcVar14 = (char *)(DAT_0002967c + 0x29268);
            printf((char *)(DAT_00029680 + 0x2926c),uVar3);
            for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
              FUN_00028164(iVar11,param_2);
              uVar5 = FUN_00027518(param_2);
              uVar5 = FUN_00027fc4(*(undefined1 *)(iVar10 + 0x2925d),uVar5);
              printf((char *)(DAT_00029684 + 0x292ac),extraout_r3_02,uVar5);
              FUN_00028164(iVar11,param_2);
              uVar5 = FUN_00027538(param_2);
              uVar16 = FUN_00027bb8(uVar5,uVar5);
              printf((char *)(DAT_00029688 + 0x292d8),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
              FUN_00028164(iVar11,param_2);
              uVar4 = FUN_00027518(param_2);
              printf((char *)(DAT_0002968c + 0x29300),uVar4);
              FUN_00028164(iVar11,param_2);
              printf((char *)(DAT_00029690 + 0x29318));
              while (uVar4 != 0) {
                uVar4 = uVar4 - 1 & 0xff;
                uVar5 = FUN_00027518(param_2);
                if ((*(ushort *)(**(int **)(iVar12 + DAT_00029704) + (short)uVar5 * 2) & 0x40) == 0)
                {
                  uVar5 = 0x2e;
                }
                printf(pcVar14,uVar5);
              }
              putchar(10);
            }
            return;
          }
          uVar5 = FUN_00027518(param_2);
          iVar12 = DAT_0002969c;
          *(char *)(DAT_00029698 + 0x29351) = (char)uVar5;
          uVar16 = FUN_00027b38(uVar5,uVar5);
          printf((char *)(DAT_000296a0 + 0x2936c),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
          FUN_00028164(iVar11,param_2);
          uVar3 = FUN_00027518(param_2);
          printf((char *)(DAT_000296a4 + 0x29394),uVar3);
          for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
            FUN_00028164(iVar11,param_2);
            uVar5 = FUN_00027518(param_2);
            uVar5 = FUN_00027fc4(*(undefined1 *)(iVar7 + 0x29355),uVar5);
            printf((char *)(iVar12 + 0x29360),extraout_r3_03,uVar5);
          }
          return;
        }
        __s = (code *)(DAT_000295e4 + 0x28b88);
      }
    }
    goto LAB_00028ad8;
  }
  if (uVar9 != 0x31) {
    if (uVar9 < 0x32) {
      if (uVar9 == 0x20) {
        iVar11 = param_1 + 2;
        FUN_00028164(iVar11,param_2);
        if (uVar3 < 5) {
          if (8 < uVar4) {
            FUN_00027f5c(param_2);
            iVar12 = DAT_000296c4;
            printf((char *)(DAT_000296c0 + 0x2979c));
            FUN_00028164(iVar11,param_2);
            uVar3 = FUN_00027518(param_2);
            printf((char *)(DAT_000296c8 + 0x297cc),uVar3);
            for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
              FUN_00028164(iVar11,param_2);
              uVar5 = FUN_00027fa0(param_2);
              uVar16 = FUN_00027d84(uVar5,uVar5);
              printf((char *)(iVar12 + 0x297b0),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
            }
            return;
          }
          __s = (code *)(DAT_000296b8 + 0x2976c);
        }
        else {
          if (1 < uVar13) {
            uVar3 = (uint)*(ushort *)(DAT_000296e4 + 0x29880);
            uVar9 = (uint)*(byte *)(DAT_000296e4 + 0x2987e);
            if (uVar3 != 0) {
              if (uVar4 < uVar3) {
                sVar1 = *(ushort *)(DAT_000296e4 + 0x29880) - (short)uVar4;
                uVar3 = uVar4;
              }
              else {
                sVar1 = 0;
              }
              pcVar14 = (char *)(DAT_000296ec + 0x298b0);
              pcVar6 = (char *)(DAT_000296f0 + 0x298b8);
              *(short *)(DAT_000296e8 + 0x298ac) = sVar1;
              printf(pcVar14);
              while (uVar3 != 0) {
                uVar3 = uVar3 - 1 & 0xffff;
                uVar5 = FUN_00027518(param_2);
                if ((*(ushort *)(**(int **)(iVar12 + DAT_00029704) + (short)uVar5 * 2) & 0x40) == 0)
                {
                  uVar5 = 0x2e;
                }
                printf(pcVar6,uVar5);
              }
              putchar(10);
            }
LAB_00029844:
            pcVar14 = (char *)(DAT_000296d8 + 0x29854);
            pcVar6 = (char *)(DAT_000296dc + 0x29858);
            while (uVar9 != 0 && uVar4 != 0) {
              uVar4 = uVar4 - 8;
              FUN_00028164(iVar11,param_2);
              uVar5 = FUN_00027fa0(param_2);
              uVar16 = FUN_00027d84(uVar5,uVar5);
              uVar9 = uVar9 - 1 & 0xff;
              printf(pcVar14,(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
              FUN_00028164(iVar11,param_2);
              uVar5 = FUN_00027538(param_2);
              uVar16 = FUN_00027bb8(uVar5,uVar5);
              printf((char *)(DAT_000296f4 + 0x29974),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
              FUN_00028164(iVar11,param_2);
              uVar3 = FUN_00027538(param_2);
              printf((char *)(DAT_000296f8 + 0x2999c),uVar3);
              FUN_00028164(iVar11,param_2);
              printf((char *)(DAT_000296fc + 0x299b4));
              while (uVar4 = uVar4 & 0xffff, uVar3 != 0 && uVar4 != 0) {
                uVar4 = uVar4 - 1;
                uVar5 = FUN_00027518(param_2);
                uVar3 = uVar3 - 1 & 0xffff;
                if ((*(ushort *)(**(int **)(iVar12 + DAT_00029704) + (short)uVar5 * 2) & 0x40) == 0)
                {
                  uVar5 = 0x2e;
                }
                printf(pcVar6,uVar5);
              }
              putchar(10);
              if (uVar3 != 0) {
                *(short *)(DAT_00029700 + 0x299dc) = (short)uVar3;
              }
            }
            *(short *)(DAT_000296e0 + 0x2986e) = (short)uVar9;
            return;
          }
          if (uVar4 != 0) {
            uVar4 = uVar4 - 1 & 0xffff;
            uVar9 = FUN_00027518(param_2);
            *(short *)(DAT_000296d0 + 0x2983a) = (short)uVar9;
            printf((char *)(DAT_000296d4 + 0x29844),uVar9);
            goto LAB_00029844;
          }
          __s = (code *)((int)&DAT_000294d8 + DAT_000296b4);
        }
      }
      else {
        if (uVar9 != 0x30) {
          if (uVar9 != 0x18) goto LAB_000288f8;
          if (4 < uVar3) {
            return;
          }
          FUN_00028164(param_1 + 2,param_2);
          uVar5 = FUN_00027518(param_2);
          uVar16 = FUN_00027d04(uVar5,uVar5);
          pcVar14 = (char *)(DAT_000295e8 + 0x28be0);
          goto LAB_00028afc;
        }
        if (uVar3 < 5) {
          return;
        }
        iVar11 = param_1 + 2;
        FUN_00028164(iVar11,param_2);
        if (8 < uVar4) {
          uVar5 = FUN_00027fa0(param_2);
          printf((char *)(DAT_0002970c + 0x29a68),uVar5,uVar5);
          FUN_00028164(iVar11,param_2);
          uVar5 = FUN_00027fa0(param_2);
          printf((char *)(DAT_00029710 + 0x29a90),uVar5,uVar5);
          FUN_00028164(iVar11,param_2);
          uVar5 = FUN_00027518(param_2);
          uVar16 = FUN_00027e40(uVar5,uVar5);
          pcVar14 = (char *)(DAT_00029714 + 0x29abc);
          goto LAB_00028afc;
        }
        __s = (code *)(DAT_00029708 + 0x29a4c);
      }
    }
    else if (uVar9 == 0x60) {
      iVar11 = param_1 + 2;
      FUN_00028164(iVar11,param_2);
      if (uVar3 < 5) {
        if (1 < uVar4) {
          uVar5 = FUN_00027538(param_2);
          uVar16 = CONCAT44(uVar5,uVar5);
          pcVar14 = (char *)(DAT_0002a14c + 0x29e5c);
          goto LAB_00028afc;
        }
        __s = (code *)(DAT_0002a148 + 0x29e40);
      }
      else {
        if (uVar4 != 0) {
          uVar5 = FUN_00027518(param_2);
          uVar16 = FUN_00027960(uVar5,uVar5);
          pcVar14 = (char *)(DAT_0002a150 + 0x29e7c);
          goto LAB_00028afc;
        }
        __s = (code *)(DAT_0002a144 + 0x29e30);
      }
    }
    else {
      if (0x60 < uVar9) {
        if ((uVar9 == 0x74) || (uVar9 == 0x90)) {
          param_1 = param_1 + 2;
          FUN_00028164();
          if (uVar3 < 5) {
            if (uVar4 < 0xb) {
              puts((char *)(DAT_000283a0 + 0x28314));
              FUN_000149a8(param_1,param_2);
              return;
            }
            uVar5 = FUN_00027518(param_2);
            uVar16 = FUN_00027ef0(uVar5,uVar5);
            printf((char *)(DAT_000283a4 + 0x28348),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
            FUN_00028164(param_1,param_2);
            FUN_00027f5c(param_2);
            printf((char *)(DAT_000283a8 + 0x28374));
            FUN_00028164(param_1,param_2);
            uVar5 = FUN_00027538(param_2);
            uVar16 = CONCAT44(uVar5,uVar5);
            pcVar14 = (char *)((int)&DAT_0002839c + DAT_000283ac);
          }
          else {
            uVar5 = FUN_00027518(param_2);
            uVar16 = FUN_00027960(uVar5,uVar5);
            pcVar14 = (char *)(DAT_0002839c + 0x282f8);
          }
          printf(pcVar14,(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
          return;
        }
        goto LAB_000288f8;
      }
      if (uVar9 != 0x50) goto LAB_000288f8;
      iVar11 = param_1 + 2;
      FUN_00028164(iVar11,param_2);
      if (uVar4 != 0) {
        uVar16 = FUN_00027518(param_2);
        uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
        uVar3 = (uint)uVar16 & 0x7f;
        dVar15 = (double)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
        pcVar14 = (char *)(DAT_0002a140 + 0x29dfc);
        dVar15 = dVar15 / DAT_0002a128;
        goto LAB_00029d6c;
      }
      __s = (code *)(DAT_000295ec + 0x28c18);
    }
    goto LAB_00028ad8;
  }
  iVar11 = param_1 + 2;
  FUN_00028164(iVar11,param_2);
  if (uVar3 < 5) {
    if (4 < uVar4) {
      uVar5 = FUN_00027518(param_2);
      uVar16 = FUN_0002783c(uVar5,uVar5);
      printf((char *)(DAT_00029720 + 0x29b18),(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
      FUN_00028164(iVar11,param_2);
      uVar5 = FUN_00027fa0(param_2);
      uVar16 = CONCAT44(uVar5,uVar5);
      pcVar14 = (char *)(DAT_00029724 + 0x29b40);
      goto LAB_00028afc;
    }
    __s = (code *)(DAT_0002971c + 0x29af8);
    goto LAB_00028ad8;
  }
  if (uVar4 == 0) {
    __s = (code *)(DAT_00029718 + 0x29ae8);
    goto LAB_00028ad8;
  }
  uVar5 = FUN_00027518(param_2);
  uVar2 = FUN_0002783c();
  printf((char *)(DAT_00029728 + 0x29b68),uVar5,uVar2);
  FUN_00028164(iVar11,param_2);
  iVar10 = DAT_00029754;
  iVar12 = DAT_00029750;
  switch(uVar5) {
  case 1:
    uVar5 = FUN_00027518(param_2);
    uVar16 = FUN_00027e40(uVar5,uVar5);
    pcVar14 = (char *)(DAT_0002972c + 0x29bd4);
    goto LAB_00028afc;
  case 2:
    FUN_00027f5c(param_2);
    pcVar14 = (char *)(DAT_00029730 + 0x29bf4);
LAB_00029bf0:
    printf(pcVar14);
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    uVar5 = FUN_00027fa0(param_2);
    uVar16 = CONCAT44(uVar5,uVar5);
    pcVar14 = (char *)(DAT_00029734 + 0x29c14);
    goto LAB_00028afc;
  case 6:
    uVar5 = FUN_00027518(param_2);
    uVar16 = FUN_00027d04(uVar5,uVar5);
    pcVar14 = (char *)(DAT_00029738 + 0x29c34);
    goto LAB_00028afc;
  case 7:
    uVar3 = FUN_00027518(param_2);
    printf((char *)(DAT_0002973c + 0x29c50),uVar3);
    if (uVar3 == 1) {
      pcVar14 = (char *)(DAT_00029748 + 0x29c94);
    }
    else if ((uVar3 & 0xff) == 0) {
      pcVar14 = (char *)(DAT_00029744 + 0x29c80);
    }
    else if (uVar3 == 2) {
      pcVar14 = (char *)(DAT_0002974c + 0x29ca0);
    }
    else {
      pcVar14 = (char *)(DAT_00029740 + 0x29c74);
    }
    puts(pcVar14);
    return;
  case 8:
    uVar3 = FUN_00027518(param_2);
    printf((char *)(DAT_00029758 + 0x29ccc),uVar3);
    for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
      FUN_00028164(iVar11,param_2);
      uVar5 = FUN_00027518(param_2);
      uVar2 = FUN_00027b38();
      printf((char *)(iVar12 + 0x29cb8),uVar5,uVar2);
      FUN_00028164(iVar11,param_2);
      uVar2 = FUN_00027518(param_2);
      uVar5 = FUN_00027fc4(uVar5,uVar2);
      printf((char *)(iVar10 + 0x29cc0),extraout_r3_04,uVar5);
    }
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    uVar5 = FUN_00027538(param_2);
    printf((char *)(DAT_0002a134 + 0x29d90),uVar5,uVar5);
    FUN_00028164(iVar11,param_2);
    uVar5 = FUN_00027538(param_2);
    uVar16 = CONCAT44(uVar5,uVar5);
    pcVar14 = (char *)(DAT_0002a138 + 0x29db8);
    goto LAB_00028afc;
  case 0xc:
    uVar5 = FUN_00027538(param_2);
    uVar16 = CONCAT44(uVar5,uVar5);
    pcVar14 = (char *)(DAT_0002a13c + 0x29dd4);
LAB_00028afc:
    printf(pcVar14,(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
    return;
  case 0xd:
    uVar16 = FUN_00027518(param_2);
    uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar3 = (uint)uVar16 & 0x7f;
    dVar15 = (double)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    pcVar14 = (char *)(DAT_0002a130 + 0x29d68);
    dVar15 = dVar15 / DAT_0002a128;
LAB_00029d6c:
    printf(pcVar14,uVar5,SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),uVar3);
  }
  return;
}



/* ===== FUN_0002aff0 @ 0002aff0 size=32 ===== */

undefined1 FUN_0002aff0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar1 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return *puVar1;
}



/* ===== FUN_0002b010 @ 0002b010 size=308 ===== */

void FUN_0002b010(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0002b144 + 0x2b020 + DAT_0002b148);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_0002b144 + 0x2b020 + DAT_0002b14c);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_0002b15c + 0x2b128),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_0002b150 + 0x2b0bc),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_0002b154 + 0x2b0d8),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_0002b160 + 0x2b138));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_0002b158 + 0x2b104),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0002b164 @ 0002b164 size=1536 ===== */

void FUN_0002b164(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  char *__format;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar9 = FUN_0002aff0(param_2);
  uVar10 = FUN_0002aff0((int)((ulonglong)uVar9 >> 0x20));
  iVar8 = (int)((ulonglong)uVar10 >> 0x20);
  *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 2;
  *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + -2;
  FUN_0002b010(param_1);
  iVar2 = DAT_0002b774;
  iVar8 = DAT_0002b76c;
  switch((int)uVar9) {
  case 0:
    iVar4 = DAT_0002b7c8 + 0x2b3d4;
    break;
  case 1:
    iVar4 = DAT_0002b764 + 0x2b214;
    break;
  case 2:
    iVar4 = DAT_0002b778 + 0x2b2e4;
    break;
  case 3:
    iVar4 = DAT_0002b77c + 0x2b2f0;
    break;
  case 4:
    iVar4 = DAT_0002b780 + 0x2b2fc;
    break;
  case 5:
    iVar4 = DAT_0002b784 + 0x2b308;
    break;
  case 6:
    iVar4 = DAT_0002b788 + 0x2b314;
    break;
  case 7:
    iVar4 = DAT_0002b78c + 0x2b320;
    break;
  case 8:
    iVar4 = DAT_0002b790 + 0x2b32c;
    break;
  case 9:
    iVar4 = DAT_0002b794 + 0x2b338;
    break;
  case 10:
    iVar4 = DAT_0002b798 + 0x2b344;
    break;
  case 0xb:
    iVar4 = DAT_0002b79c + 0x2b350;
    break;
  case 0xc:
    iVar4 = DAT_0002b7a0 + 0x2b35c;
    break;
  case 0xd:
    iVar4 = DAT_0002b7a4 + 0x2b368;
    break;
  case 0xe:
    iVar4 = DAT_0002b7a8 + 0x2b374;
    break;
  case 0xf:
    iVar4 = DAT_0002b7ac + 0x2b380;
    break;
  case 0x10:
    iVar4 = DAT_0002b7b0 + 0x2b38c;
    break;
  case 0x11:
    iVar4 = DAT_0002b7b4 + 0x2b398;
    break;
  case 0x12:
    iVar4 = DAT_0002b7b8 + 0x2b3a4;
    break;
  case 0x13:
    iVar4 = DAT_0002b7bc + 0x2b3b0;
    break;
  case 0x14:
    iVar4 = DAT_0002b7c0 + 0x2b3bc;
    break;
  default:
    iVar4 = DAT_0002b7c4 + 0x2b3c8;
  }
  iVar7 = DAT_0002b770 + 0x2b230;
  printf((char *)(DAT_0002b768 + 0x2b22c),iVar4,(int)uVar10);
  iVar8 = iVar8 + 0x2b238;
  do {
    if (*(uint *)(param_2 + 0xc) < 4) {
      return;
    }
    FUN_0002b010(param_1,param_2);
    uVar3 = FUN_0002aff0(param_2);
    FUN_0002aff0(param_2);
    uVar1 = **(ushort **)(param_2 + 8);
    *(ushort **)(param_2 + 8) = *(ushort **)(param_2 + 8) + 1;
    uVar6 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -2;
    iVar4 = iVar8;
    switch(uVar3) {
    case 0:
      iVar4 = iVar7;
      break;
    case 1:
      iVar4 = DAT_0002b7cc + 0x2b3e0;
      break;
    case 2:
      iVar4 = DAT_0002b7d4 + 0x2b430;
      break;
    case 3:
      iVar4 = DAT_0002b7d8 + 0x2b43c;
      break;
    case 4:
      iVar4 = DAT_0002b7dc + 0x2b448;
      break;
    case 5:
      iVar4 = DAT_0002b7e4 + 0x2b460;
      break;
    case 6:
      iVar4 = DAT_0002b7e8 + 0x2b46c;
      break;
    case 7:
      iVar4 = DAT_0002b7ec + 0x2b478;
      break;
    case 8:
      iVar4 = DAT_0002b7f0 + 0x2b484;
      break;
    case 9:
      iVar4 = iVar2 + 0x2b23c;
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
      iVar4 = DAT_0002b7e0 + 0x2b454;
    }
    printf((char *)(DAT_0002b7d0 + 0x2b3f0),iVar4,uVar3,uVar6);
    iVar4 = DAT_0002b7f4;
    switch(uVar3) {
    case 0:
      uVar1 = **(ushort **)(param_2 + 8);
      *(ushort **)(param_2 + 8) = *(ushort **)(param_2 + 8) + 1;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -2;
      printf((char *)(iVar4 + 0x2b4c0),(uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8));
      goto LAB_0002b4cc;
    case 1:
      iVar4 = FUN_0002aff0(param_2);
      switch(iVar4) {
      case 0:
        iVar5 = DAT_0002b810 + 0x2b570;
        break;
      case 1:
        iVar5 = DAT_0002b7f8 + 0x2b528;
        break;
      case 2:
        iVar5 = DAT_0002b800 + 0x2b540;
        break;
      case 3:
        iVar5 = DAT_0002b804 + 0x2b54c;
        break;
      case 4:
        iVar5 = DAT_0002b808 + 0x2b558;
        break;
      default:
        iVar5 = DAT_0002b80c + 0x2b564;
      }
      __format = (char *)(DAT_0002b7fc + 0x2b530);
      break;
    case 2:
      goto LAB_0002b570;
    case 3:
      iVar4 = FUN_0002aff0(param_2);
      if (iVar4 == 0) {
        iVar5 = DAT_0002b844 + 0x2b654;
      }
      else if (iVar4 == 1) {
        iVar5 = DAT_0002b848 + 0x2b660;
      }
      else {
        iVar5 = DAT_0002b83c + 0x2b640;
      }
      __format = (char *)(DAT_0002b840 + 0x2b648);
      break;
    case 4:
    default:
switchD_0002b3f4_default:
      putchar(10);
      FUN_00014958(param_1 + 1,param_2,uVar6);
      *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + uVar6;
      *(uint *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - uVar6;
      goto LAB_0002b4cc;
    case 5:
      goto switchD_0002b3f4_default;
    case 6:
      goto switchD_0002b3f4_default;
    case 7:
LAB_0002b570:
      iVar4 = FUN_0002aff0(param_2);
      switch(iVar4) {
      case 0:
        iVar5 = DAT_0002b838 + 0x2b61c;
        break;
      case 1:
        iVar5 = DAT_0002b814 + 0x2b5b4;
        break;
      case 2:
        iVar5 = DAT_0002b81c + 0x2b5c8;
        break;
      case 3:
        iVar5 = DAT_0002b820 + 0x2b5d4;
        break;
      case 4:
        iVar5 = DAT_0002b824 + 0x2b5e0;
        break;
      case 5:
        iVar5 = DAT_0002b828 + 0x2b5ec;
        break;
      case 6:
        iVar5 = DAT_0002b82c + 0x2b5f8;
        break;
      case 7:
        iVar5 = DAT_0002b830 + 0x2b604;
        break;
      default:
        iVar5 = DAT_0002b834 + 0x2b610;
      }
      __format = (char *)(DAT_0002b818 + 0x2b5bc);
      break;
    case 8:
      iVar4 = FUN_0002aff0(param_2);
      switch(iVar4) {
      case 0:
        iVar5 = DAT_0002b868 + 0x2b6ec;
        break;
      case 1:
        iVar5 = DAT_0002b84c + 0x2b69c;
        break;
      case 2:
        iVar5 = DAT_0002b854 + 0x2b6b0;
        break;
      case 3:
        iVar5 = DAT_0002b858 + 0x2b6bc;
        break;
      case 4:
        iVar5 = DAT_0002b85c + 0x2b6c8;
        break;
      case 5:
        iVar5 = DAT_0002b860 + 0x2b6d4;
        break;
      default:
        iVar5 = DAT_0002b864 + 0x2b6e0;
      }
      __format = (char *)(DAT_0002b850 + 0x2b6a4);
      break;
    case 9:
      iVar4 = FUN_0002aff0(param_2);
      if (iVar4 == 0) {
        iVar5 = DAT_0002b874 + 0x2b724;
      }
      else if (iVar4 == 1) {
        iVar5 = DAT_0002b878 + 0x2b730;
      }
      else {
        iVar5 = DAT_0002b86c + 0x2b710;
      }
      __format = (char *)(DAT_0002b870 + 0x2b718);
    }
    printf(__format,iVar4,iVar5);
LAB_0002b4cc:
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + (-uVar6 & 3);
    *(uint *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - (-uVar6 & 3);
  } while( true );
}



/* ===== FUN_0002b87c @ 0002b87c size=32 ===== */

undefined1 FUN_0002b87c(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar1 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return *puVar1;
}



/* ===== FUN_0002b89c @ 0002b89c size=40 ===== */

ushort FUN_0002b89c(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 8);
  *(ushort **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -2;
  uVar1 = *puVar2;
  return uVar1 << 8 | uVar1 >> 8;
}



/* ===== FUN_0002b8c4 @ 0002b8c4 size=1104 ===== */

int FUN_0002b8c4(uint param_1)

{
  switch(param_1 & 0x7f) {
  case 0:
    return (int)&DAT_0002bd14 + DAT_0002bdd0;
  case 1:
    return DAT_0002bd14 + 0x2bae0;
  case 2:
    return DAT_0002bd18 + 0x2baec;
  case 3:
    return DAT_0002bd1c + 0x2baf8;
  case 4:
    return DAT_0002bd20 + 0x2bb04;
  case 5:
    return DAT_0002bd24 + 0x2bb10;
  case 6:
    return DAT_0002bd28 + 0x2bb1c;
  case 7:
    return DAT_0002bd2c + 0x2bb28;
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
    return DAT_0002bd34 + 0x2bb40;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    return DAT_0002bd38 + 0x2bb4c;
  case 0x21:
    return DAT_0002bd3c + 0x2bb58;
  case 0x22:
    return DAT_0002bd40 + 0x2bb64;
  case 0x23:
    return DAT_0002bd44 + 0x2bb70;
  case 0x24:
    return DAT_0002bd48 + 0x2bb7c;
  case 0x25:
    return DAT_0002bd4c + 0x2bb88;
  case 0x26:
    return DAT_0002bd50 + 0x2bb94;
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
    break;
  case 0x30:
    return DAT_0002bd54 + 0x2bba0;
  case 0x31:
    return DAT_0002bd58 + 0x2bbac;
  case 0x32:
    return DAT_0002bd5c + 0x2bbb8;
  case 0x33:
    return DAT_0002bd60 + 0x2bbc4;
  case 0x34:
    return DAT_0002bd64 + 0x2bbd0;
  case 0x35:
    return DAT_0002bd68 + 0x2bbdc;
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
    return DAT_0002bd6c + 0x2bbe8;
  case 0x41:
    return DAT_0002bd70 + 0x2bbf4;
  case 0x42:
    return DAT_0002bd74 + 0x2bc00;
  case 0x43:
    return DAT_0002bd78 + 0x2bc0c;
  case 0x44:
    return DAT_0002bd7c + 0x2bc18;
  case 0x45:
    return DAT_0002bd80 + 0x2bc24;
  case 0x46:
    return DAT_0002bd84 + 0x2bc30;
  case 0x47:
    return DAT_0002bd88 + 0x2bc3c;
  case 0x48:
    return DAT_0002bd8c + 0x2bc48;
  case 0x49:
    return DAT_0002bd90 + 0x2bc54;
  case 0x4a:
    return DAT_0002bd94 + 0x2bc60;
  case 0x4b:
    return DAT_0002bd98 + 0x2bc6c;
  case 0x4c:
    return DAT_0002bd9c + 0x2bc78;
  case 0x4d:
    return DAT_0002bda0 + 0x2bc84;
  case 0x4e:
    return DAT_0002bda4 + 0x2bc90;
  case 0x4f:
    return DAT_0002bda8 + 0x2bc9c;
  case 0x50:
    return DAT_0002bdac + 0x2bca8;
  case 0x51:
    return DAT_0002bdb0 + 0x2bcb4;
  case 0x52:
    return DAT_0002bdb4 + 0x2bcc0;
  case 0x53:
    return DAT_0002bdb8 + 0x2bccc;
  case 0x54:
    return DAT_0002bdbc + 0x2bcd8;
  case 0x55:
    return DAT_0002bdc0 + 0x2bce4;
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
    break;
  case 0x5d:
    break;
  case 0x5e:
    break;
  case 0x5f:
    break;
  case 0x60:
    return DAT_0002bdc4 + 0x2bcf0;
  case 0x61:
    return DAT_0002bdc8 + 0x2bcfc;
  case 0x62:
    break;
  case 99:
    break;
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
    break;
  case 0x73:
    break;
  case 0x74:
    break;
  case 0x75:
    break;
  case 0x76:
    break;
  case 0x77:
    break;
  case 0x78:
    break;
  case 0x79:
    break;
  case 0x7a:
    break;
  case 0x7b:
    break;
  case 0x7c:
    break;
  case 0x7d:
    break;
  case 0x7e:
    break;
  case 0x7f:
    return DAT_0002bd30 + 0x2bb34;
  }
  return DAT_0002bdcc + 0x2bd08;
}



/* ===== FUN_0002bdd4 @ 0002bdd4 size=308 ===== */

void FUN_0002bdd4(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0002bf08 + 0x2bde4 + DAT_0002bf0c);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_0002bf08 + 0x2bde4 + DAT_0002bf10);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_0002bf20 + 0x2beec),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_0002bf14 + 0x2be80),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_0002bf18 + 0x2be9c),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_0002bf24 + 0x2befc));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_0002bf1c + 0x2bec8),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0002bf28 @ 0002bf28 size=1328 ===== */

void FUN_0002bf28(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  int extraout_r3;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  
  iVar14 = DAT_0002c458 + 0x2bf44;
  iVar1 = FUN_0001431c(param_2);
  iVar10 = DAT_0002c45c + 0x2bf54;
LAB_0002bf54:
  if (2 < *(uint *)(iVar1 + 0xc)) {
    uVar2 = FUN_0002b87c(iVar1);
    uVar13 = uVar2 & 0x7f;
    iVar3 = FUN_0002b89c(iVar1);
    if (iVar3 + -3 <= *(int *)(iVar1 + 0xc)) {
      FUN_0002bdd4(param_1,iVar1);
      uVar4 = FUN_000144e8(*(undefined2 *)(iVar1 + 0x14),*(undefined1 *)(iVar1 + 0x1a));
      if ((uVar2 & 0x70) == 0) {
        uVar5 = FUN_0002b8c4(uVar2);
        if (extraout_r3 < 0) {
          uVar8 = 0x66;
        }
        else {
          uVar8 = 99;
        }
        printf((char *)(DAT_0002c460 + 0x2bffc),uVar5,uVar8,iVar3);
        FUN_00014548(*(undefined2 *)(iVar1 + 0x14),*(undefined1 *)(iVar1 + 0x1a),uVar2);
        uVar4 = uVar2;
      }
      else {
        uVar5 = FUN_0002b8c4();
        printf((char *)(DAT_0002c468 + 0x2c088),uVar5);
      }
      iVar3 = FUN_000145a8(*(undefined2 *)(iVar1 + 0x14),*(undefined1 *)(iVar1 + 0x1a));
      if (iVar3 == 0x10) {
        printf((char *)(DAT_0002c464 + 0x2c02c));
      }
      FUN_00014608(*(undefined2 *)(iVar1 + 0x14),*(undefined1 *)(iVar1 + 0x1a),uVar13);
      uVar11 = *(uint *)(iVar1 + 0xc);
      if (uVar11 != 0) {
        if ((uVar4 & 0x7f) == 0) {
          if (uVar11 < 4) goto LAB_0002c048;
          uVar5 = FUN_0002b87c(iVar1);
          uVar5 = FUN_0002b87c(iVar1,uVar5);
          uVar15 = FUN_0002b89c(iVar1);
          uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
          printf((char *)(DAT_0002c46c + 0x2c0ec),(uVar4 & 0xfff) >> 4,uVar4 & 0xf,uVar5,(int)uVar15
                );
        }
        else if ((uVar4 & 0x7f) == 5) {
          if (uVar11 < 2) goto LAB_0002c048;
          uVar5 = FUN_0002b87c(iVar1);
          uVar15 = FUN_0002b87c(iVar1,uVar5);
          printf((char *)(DAT_0002c480 + 0x2c208),(int)((ulonglong)uVar15 >> 0x20),(int)uVar15);
        }
        else {
          putchar(10);
        }
        if (((uVar2 & 0x70) != 0) && ((**(uint **)(iVar14 + DAT_0002c470) & 0x200) != 0)) {
          FUN_0002bdd4(param_1,iVar1);
          uVar5 = FUN_0002b8c4(uVar13);
          printf((char *)(DAT_0002c474 + 0x2c134),uVar13 >> 4,uVar2 & 0xf,uVar5);
        }
        iVar3 = DAT_0002c478 + 0x2c144;
        iVar12 = DAT_0002c47c + 0x2c148;
LAB_0002c144:
        while (*(int *)(iVar1 + 0xc) != 0) {
          uVar2 = FUN_0002b87c(iVar1);
          FUN_0002bdd4(param_1,iVar1);
          iVar6 = iVar3;
          switch(uVar2 & 0x3f) {
          case 0:
            iVar6 = iVar10;
            break;
          case 1:
            iVar6 = DAT_0002c484 + 0x2c218;
            break;
          case 2:
            iVar6 = DAT_0002c48c + 0x2c260;
            break;
          case 3:
            iVar6 = DAT_0002c490 + 0x2c26c;
            break;
          case 4:
            iVar6 = DAT_0002c494 + 0x2c278;
            break;
          case 5:
            iVar6 = DAT_0002c498 + 0x2c284;
            break;
          case 6:
            iVar6 = DAT_0002c49c + 0x2c290;
            break;
          case 7:
            iVar6 = DAT_0002c4a0 + 0x2c29c;
            break;
          case 8:
            iVar6 = DAT_0002c4a4 + 0x2c2a8;
            break;
          case 9:
            iVar6 = DAT_0002c4a8 + 0x2c2b4;
            break;
          case 10:
            iVar6 = DAT_0002c4ac + 0x2c2c0;
            break;
          case 0xb:
            iVar6 = DAT_0002c4b0 + 0x2c2cc;
            break;
          case 0xc:
            iVar6 = DAT_0002c4b4 + 0x2c2d8;
            break;
          case 0xd:
            iVar6 = DAT_0002c4b8 + 0x2c2e4;
            break;
          case 0xe:
            iVar6 = DAT_0002c4bc + 0x2c2f0;
            break;
          case 0xf:
            iVar6 = DAT_0002c4c0 + 0x2c2fc;
            break;
          case 0x10:
            iVar6 = DAT_0002c4c4 + 0x2c308;
            break;
          case 0x11:
            iVar6 = DAT_0002c4c8 + 0x2c314;
            break;
          case 0x12:
            iVar6 = DAT_0002c4cc + 0x2c320;
            break;
          case 0x13:
            iVar6 = DAT_0002c4d0 + 0x2c32c;
            break;
          case 0x14:
            iVar6 = DAT_0002c4d4 + 0x2c338;
            break;
          case 0x15:
            iVar6 = DAT_0002c4d8 + 0x2c344;
            break;
          case 0x16:
            iVar6 = DAT_0002c4dc + 0x2c350;
            break;
          case 0x17:
            iVar6 = DAT_0002c4e0 + 0x2c35c;
            break;
          case 0x18:
            iVar6 = iVar12;
          }
          printf((char *)(DAT_0002c488 + 0x2c224),iVar6,uVar2);
          iVar6 = DAT_0002c4e4;
          uVar13 = *(uint *)(iVar1 + 0xc);
          uVar2 = uVar2 & 0xc0;
          if (uVar2 == 0x40) {
            if (uVar13 < 2) goto LAB_0002c248;
            iVar6 = FUN_0002b89c(iVar1);
            pcVar7 = (char *)(DAT_0002c4ec + 0x2c434);
LAB_0002c3d0:
            uVar2 = iVar6 - 3U & 0xffff;
            printf(pcVar7,uVar2);
            if (*(uint *)(iVar1 + 0xc) < uVar2) break;
            FUN_00014958(param_1,iVar1,uVar2);
            *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 8) + uVar2;
            *(uint *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) - uVar2;
          }
          else {
            if (0x40 < uVar2) {
              if (uVar2 != 0x80) goto code_r0x0002c37c;
              if (uVar13 == 0) goto LAB_0002c248;
              uVar2 = FUN_0002b87c(iVar1);
              pcVar7 = (char *)(DAT_0002c4f0 + 0x2c454);
              goto LAB_0002c450;
            }
            if (uVar2 == 0) {
              if (1 < uVar13) {
                iVar6 = FUN_0002b89c(iVar1);
                pcVar7 = (char *)(DAT_0002c4e8 + 0x2c3d4);
                goto LAB_0002c3d0;
              }
              goto LAB_0002c248;
            }
          }
        }
        goto LAB_0002bf54;
      }
LAB_0002c048:
      putchar(10);
      return;
    }
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 3;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -3;
  }
  return;
code_r0x0002c37c:
  if (uVar2 == 0xc0) {
    if (uVar13 < 4) {
LAB_0002c248:
      putchar(10);
      goto LAB_0002bf54;
    }
    puVar9 = *(uint **)(iVar1 + 8);
    *(uint *)(iVar1 + 0xc) = uVar13 - 4;
    *(uint **)(iVar1 + 8) = puVar9 + 1;
    uVar2 = *puVar9;
    pcVar7 = (char *)(iVar6 + 0x2c3b0);
    uVar2 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
            uVar2 >> 0x18;
LAB_0002c450:
    printf(pcVar7,uVar2);
  }
  goto LAB_0002c144;
}



/* ===== FUN_0002c4f4 @ 0002c4f4 size=32 ===== */

undefined1 FUN_0002c4f4(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar1 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return *puVar1;
}



/* ===== FUN_0002c514 @ 0002c514 size=40 ===== */

ushort FUN_0002c514(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 8);
  *(ushort **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -2;
  uVar1 = *puVar2;
  return uVar1 << 8 | uVar1 >> 8;
}



/* ===== FUN_0002c53c @ 0002c53c size=732 ===== */

int FUN_0002c53c(uint param_1)

{
  if (param_1 == 0x3006) {
    return DAT_0002c838 + 0x2c6d4;
  }
  if (0x3006 < param_1) {
    if (param_1 == 0x300f) {
      return DAT_0002c870 + 0x2c77c;
    }
    if (0x300f < param_1) {
      if (param_1 == 0x3303) {
        return DAT_0002c88c + 0x2c7d0;
      }
      if (0x3303 < param_1) {
        if (param_1 == 0x3305) {
          return DAT_0002c89c + 0x2c800;
        }
        if (0x3304 < param_1) {
          if (param_1 != 0x3400) {
            return DAT_0002c834 + 0x2c6c8;
          }
          return (int)&DAT_0002c818 + DAT_0002c8a4;
        }
        return DAT_0002c8a0 + 0x2c80c;
      }
      if (param_1 == 0x3301) {
        return DAT_0002c890 + 0x2c7dc;
      }
      if (param_1 < 0x3302) {
        if (param_1 != 0x3011) {
          return DAT_0002c830 + 0x2c6a4;
        }
        return DAT_0002c898 + 0x2c7f4;
      }
      return DAT_0002c894 + 0x2c7e8;
    }
    if (param_1 == 0x300a) {
      return DAT_0002c874 + 0x2c788;
    }
    if (0x300a < param_1) {
      if (param_1 == 0x300c) {
        return DAT_0002c880 + 0x2c7ac;
      }
      if (0x300b < param_1) {
        if (param_1 != 0x300d) {
          return DAT_0002c82c + 0x2c66c;
        }
        return DAT_0002c888 + 0x2c7c4;
      }
      return DAT_0002c884 + 0x2c7b8;
    }
    if (param_1 == 0x3008) {
      return DAT_0002c878 + 0x2c794;
    }
    if (param_1 < 0x3009) {
      return DAT_0002c828 + 0x2c644;
    }
    return DAT_0002c87c + 0x2c7a0;
  }
  if (param_1 == 0x2005) {
    return DAT_0002c83c + 0x2c6e0;
  }
  if (0x2005 < param_1) {
    if (param_1 == 0x3002) {
      return DAT_0002c858 + 0x2c734;
    }
    if (0x3002 < param_1) {
      if (param_1 == 0x3004) {
        return DAT_0002c868 + 0x2c764;
      }
      if (param_1 < 0x3005) {
        return DAT_0002c824 + 0x2c608;
      }
      return DAT_0002c86c + 0x2c770;
    }
    if (param_1 == 0x2008) {
      return DAT_0002c85c + 0x2c740;
    }
    if (param_1 != 0x3001) {
      if (param_1 != 0x2007) {
        return DAT_0002c820 + 0x2c5ec;
      }
      return DAT_0002c864 + 0x2c758;
    }
    return DAT_0002c860 + 0x2c74c;
  }
  if (param_1 == 0x2001) {
    return DAT_0002c840 + 0x2c6ec;
  }
  if (0x2001 < param_1) {
    if (param_1 == 0x2003) {
      return DAT_0002c850 + 0x2c71c;
    }
    if (param_1 < 0x2004) {
      return DAT_0002c81c + 0x2c5ac;
    }
    return DAT_0002c854 + 0x2c728;
  }
  if (param_1 == 1) {
    return DAT_0002c844 + 0x2c6f8;
  }
  if (param_1 != 0) {
    if (param_1 != 2) {
      return DAT_0002c818 + 0x2c590;
    }
    return DAT_0002c84c + 0x2c710;
  }
  return DAT_0002c848 + 0x2c704;
}



/* ===== FUN_0002c8a8 @ 0002c8a8 size=36 ===== */

uint FUN_0002c8a8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 8);
  *(uint **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -4;
  uVar1 = *puVar2;
  return uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
}



/* ===== FUN_0002c8cc @ 0002c8cc size=308 ===== */

void FUN_0002c8cc(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0002ca00 + 0x2c8dc + DAT_0002ca04);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_0002ca00 + 0x2c8dc + DAT_0002ca08);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_0002ca18 + 0x2c9e4),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_0002ca0c + 0x2c978),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_0002ca10 + 0x2c994),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_0002ca1c + 0x2c9f4));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_0002ca14 + 0x2c9c0),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0002ca20 @ 0002ca20 size=232 ===== */

void FUN_0002ca20(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar2 = FUN_0002c8a8(param_3);
  uVar1 = uVar2 >> 0x10 & 0xff;
  uVar3 = (uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10) >> 0x10;
  FUN_0002c8cc(param_1,param_3);
  if ((uVar2 >> 0x18 & 0x80) == 0) {
    iVar5 = DAT_0002cb08 + 0x2ca68;
  }
  else {
    iVar5 = (int)&DAT_0002cb08 + DAT_0002cb1c;
  }
  printf((char *)(DAT_0002cb0c + 0x2ca70),uVar2 >> 0x18 & 0x7f,iVar5);
  if (uVar1 != 0) {
    FUN_0002c8cc(param_1,param_3);
    printf((char *)(DAT_0002cb10 + 0x2ca94),uVar1);
  }
  if (uVar3 != 0) {
    FUN_0002c8cc(param_1,param_3);
    printf((char *)(DAT_0002cb14 + 0x2cab8),uVar3);
  }
  if (param_2 != 0x81) {
    return;
  }
  uVar3 = FUN_0002c514(param_3);
  uVar3 = (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff;
  FUN_0002c8cc(param_1,param_3);
  uVar4 = FUN_0002c53c(uVar3);
  printf((char *)(DAT_0002cb18 + 0x2cafc),uVar3,uVar4);
  return;
}



/* ===== FUN_0002cb20 @ 0002cb20 size=4832 ===== */

void FUN_0002cb20(int param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *__s1;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  iVar9 = DAT_0002db24 + 0x2cb40;
  uVar10 = FUN_0002c514(param_2);
  uVar11 = FUN_0002c514((int)((ulonglong)uVar10 >> 0x20));
  uVar8 = (((uint)uVar10 & 0xff) << 8 | (uint)uVar10 >> 8 & 0xff) - 8 & 0xffff;
  uVar10 = FUN_0002c4f4((int)((ulonglong)uVar11 >> 0x20));
  uVar3 = (uint)uVar10;
  uVar10 = FUN_0002c4f4((int)((ulonglong)uVar10 >> 0x20));
  uVar7 = (uint)uVar10;
  uVar1 = FUN_0002c514((int)((ulonglong)uVar10 >> 0x20));
  FUN_0002c8cc(param_1);
  if (uVar3 == 0x41) {
    iVar5 = DAT_0002db3c + 0x2cc78;
  }
  else if (uVar3 < 0x42) {
    if (uVar3 == 4) {
      iVar5 = DAT_0002db40 + 0x2cc84;
    }
    else if (uVar3 < 5) {
      if (uVar3 == 2) {
        iVar5 = DAT_0002db44 + 0x2cc90;
      }
      else if (uVar3 < 3) {
        if (uVar3 == 1) {
          iVar5 = DAT_0002db4c + 0x2cca8;
        }
        else {
          iVar5 = DAT_0002db28 + 0x2cbc4;
        }
      }
      else {
        iVar5 = DAT_0002db48 + 0x2cc9c;
      }
    }
    else if (uVar3 == 8) {
      iVar5 = DAT_0002db50 + 0x2ccb4;
    }
    else if (uVar3 == 0x20) {
      iVar5 = DAT_0002db54 + 0x2ccc0;
    }
    else if (uVar3 == 5) {
      iVar5 = DAT_0002db58 + 0x2cccc;
    }
    else {
      iVar5 = DAT_0002db2c + 0x2cc04;
    }
  }
  else if (uVar3 == 0x84) {
    iVar5 = DAT_0002db5c + 0x2ccd8;
  }
  else if (uVar3 < 0x85) {
    if (uVar3 == 0x82) {
      iVar5 = DAT_0002db60 + 0x2cce4;
    }
    else if (uVar3 < 0x83) {
      if (uVar3 == 0x80) {
        iVar5 = DAT_0002db68 + 0x2ccfc;
      }
      else {
        iVar5 = DAT_0002db30 + 0x2cc30;
      }
    }
    else {
      iVar5 = DAT_0002db64 + 0x2ccf0;
    }
  }
  else if (uVar3 == 0x87) {
    iVar5 = DAT_0002db6c + 0x2cd08;
  }
  else if (uVar3 < 0x88) {
    if (uVar3 == 0x86) {
      iVar5 = DAT_0002db70 + 0x2cd14;
    }
    else {
      iVar5 = DAT_0002db34 + 0x2cc50;
    }
  }
  else if (uVar3 == 0x88) {
    iVar5 = DAT_0002db74 + 0x2cd20;
  }
  else if (uVar3 == 0xff) {
    iVar5 = DAT_0002db78 + 0x2cd2c;
  }
  else {
    iVar5 = DAT_0002db38 + 0x2cc6c;
  }
  switch(uVar7) {
  case 0x80:
    iVar6 = DAT_0002db90 + 0x2cdd0;
    break;
  case 0x81:
    iVar6 = DAT_0002db7c + 0x2cd38;
    break;
  case 0x82:
    iVar6 = DAT_0002db84 + 0x2cdac;
    break;
  case 0x83:
    iVar6 = DAT_0002db88 + 0x2cdb8;
    break;
  default:
    iVar6 = DAT_0002db8c + 0x2cdc4;
  }
  printf((char *)(DAT_0002db80 + 0x2cd4c),iVar5,iVar6,
         ((uint)uVar11 & 0xff) << 8 | (uint)uVar11 >> 8 & 0xff,
         (uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff,uVar8);
  if (uVar3 != 0x80) {
    if (0x80 < uVar3) {
      if (uVar3 == 0x86) {
        iVar5 = param_1 + 1;
        FUN_0002ca20(iVar5,0,param_2);
        if ((uVar7 & 0xfd) == 0x81) {
          uVar3 = FUN_0002c514();
          FUN_0002c8cc(iVar5,param_2);
          printf((char *)(DAT_0002dcbc + 0x2de58),(uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff);
          if (uVar7 != 0x81) {
            return;
          }
          uVar3 = FUN_0002c514(param_2);
          uVar3 = (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff;
          FUN_0002c8cc(iVar5,param_2);
          uVar4 = FUN_0002c53c(uVar3);
          pcVar2 = (char *)(DAT_0002dcc0 + 0x2de9c);
          goto LAB_0002d368;
        }
        uVar3 = FUN_0002c8a8(param_2);
        uVar7 = FUN_0002c514(param_2);
        FUN_0002c8cc(iVar5,param_2);
        printf((char *)(DAT_0002dcc4 + 0x2ded4),(uVar7 & 0xff) << 8 | uVar7 >> 8 & 0xff);
        uVar7 = FUN_0002c514(param_2);
        FUN_0002c8cc(iVar5,param_2);
        printf((char *)(DAT_0002dcc8 + 0x2defc),(uVar7 & 0xff) << 8 | uVar7 >> 8 & 0xff);
        uVar7 = FUN_0002c514(param_2);
        FUN_0002c8cc(iVar5,param_2);
        printf((char *)(DAT_0002dccc + 0x2df28),(uVar7 & 0xff) << 8 | uVar7 >> 8 & 0xff);
        if ((((uVar3 & 0xff) != 0 || (uVar3 >> 8 & 0xff) != 0) || (uVar3 >> 0x10 & 0xff) != 0) ||
            uVar3 >> 0x18 != 0) goto switchD_0002d6c8_default;
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 8;
        iVar9 = *(int *)(param_2 + 0xc) + -8;
LAB_0002d224:
        iVar5 = param_1 + 1;
        *(int *)(param_2 + 0xc) = iVar9;
        goto switchD_0002d6c8_default;
      }
      if (uVar3 < 0x87) {
        if (uVar3 == 0x83) {
LAB_0002dd44:
          FUN_0002ca20(param_1 + 1,uVar7,param_2);
          if ((uVar7 != 0x82) || (iVar9 = FUN_0002c4f4(param_2), iVar9 == 0)) {
            return;
          }
          FUN_0002c8cc(param_1 + 1,param_2);
          pcVar2 = (char *)(DAT_0002dcb0 + 0x2dd88);
        }
        else if (uVar3 == 0x84) {
          iVar5 = param_1 + 1;
          FUN_0002ca20(iVar5,uVar7,param_2);
          if (uVar7 == 0x82) {
            uVar3 = FUN_0002c514(param_2);
            uVar3 = (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff;
            FUN_0002c8cc(iVar5,param_2);
            uVar4 = FUN_0002c53c(uVar3);
            printf((char *)(DAT_0002dcb4 + 0x2dddc),uVar3,uVar4);
          }
          else if (uVar7 != 0x80) {
            return;
          }
          iVar9 = FUN_0002c4f4(param_2);
          if (iVar9 == 0) {
            return;
          }
          FUN_0002c8cc(iVar5,param_2);
          pcVar2 = (char *)(DAT_0002dcb8 + 0x2de04);
        }
        else {
          if (uVar3 != 0x82) goto LAB_0002cd78;
          iVar5 = param_1 + 1;
          FUN_0002ca20(iVar5,uVar7,param_2);
          if (uVar7 == 0x81) {
            return;
          }
          if (uVar7 == 0x83) {
            uVar3 = FUN_0002c514(param_2);
            uVar3 = (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff;
            FUN_0002c8cc(iVar5,param_2);
            uVar4 = FUN_0002c53c(uVar3);
            printf((char *)(DAT_0002dba8 + 0x2cf9c),uVar3,uVar4);
          }
          iVar9 = FUN_0002c4f4(param_2);
          if (iVar9 == 0) {
            return;
          }
          FUN_0002c8cc(iVar5,param_2);
          pcVar2 = (char *)(DAT_0002dbac + 0x2cfc4);
        }
      }
      else {
        if (uVar3 == 0x88) goto LAB_0002dd44;
        if (0x87 < uVar3) {
          if (uVar3 != 0xff) goto LAB_0002cd78;
          iVar5 = param_1 + 1;
          uVar3 = FUN_0002c8a8(param_2);
          FUN_0002c8cc(iVar5,param_2);
          printf((char *)(DAT_0002dbb0 + 0x2d004),
                 uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                 uVar3 >> 0x18);
          __s1 = *(byte **)(param_2 + 8);
          FUN_0002c8cc(iVar5,param_2);
          iVar9 = **(int **)(iVar9 + DAT_0002dbb4);
          if (((((*(ushort *)(iVar9 + (uint)*__s1 * 2) & 0x40) == 0) ||
               ((*(ushort *)(iVar9 + (uint)__s1[1] * 2) & 0x40) == 0)) ||
              ((*(ushort *)(iVar9 + (uint)__s1[2] * 2) & 0x40) == 0)) ||
             ((*(ushort *)(iVar9 + (uint)__s1[3] * 2) & 0x40) == 0)) {
            printf((char *)(DAT_0002dcd4 + 0x2dfa4));
          }
          else {
            printf((char *)(DAT_0002dbb8 + 0x2d080),__s1);
          }
          iVar9 = DAT_0002dbbc;
          *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -4;
          iVar9 = strncmp((char *)__s1,(char *)(iVar9 + 0x2d0a4),4);
          if (iVar9 == 0) {
            uVar3 = FUN_0002c8a8(param_2);
            uVar3 = FUN_0002c8a8(param_2,uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                         (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18);
            uVar10 = FUN_0002c4f4(param_2);
            uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
            uVar7 = (uint)uVar10 & 0xffff;
            if (uVar7 == 0xff) {
              uVar10 = FUN_0002c514(param_2);
              uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
              uVar7 = ((uint)uVar10 & 0xff) << 8 | (uint)uVar10 >> 8 & 0xff;
            }
            printf((char *)(DAT_0002dbc0 + 0x2d100),uVar4,
                   uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                   uVar3 >> 0x18,uVar7);
          }
          else {
            putchar(10);
          }
          goto switchD_0002d6c8_default;
        }
        FUN_0002ca20(param_1 + 1,uVar7,param_2);
        if ((uVar7 & 0xfd) != 0x80) {
          return;
        }
        iVar9 = FUN_0002c4f4(param_2);
        if (iVar9 == 0) {
          return;
        }
        FUN_0002c8cc(param_1 + 1,param_2);
        pcVar2 = (char *)(DAT_0002dcd0 + 0x2df94);
      }
LAB_0002d144:
      iVar5 = param_1 + 1;
      puts(pcVar2);
LAB_0002d14c:
      FUN_0001472c(iVar5,param_2,iVar9);
      return;
    }
    if (uVar3 == 4) {
      iVar5 = param_1 + 1;
      FUN_0002ca20(iVar5,uVar7,param_2);
      if (uVar7 != 0x80) {
        if (uVar7 != 0x82) {
          return;
        }
        uVar3 = FUN_0002c514(param_2);
        uVar3 = (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff;
        FUN_0002c8cc(iVar5,param_2);
        uVar4 = FUN_0002c53c(uVar3);
        pcVar2 = (char *)(DAT_0002dbdc + 0x2d36c);
        goto LAB_0002d368;
      }
      iVar9 = FUN_0002c4f4(param_2);
      if (iVar9 == 0) {
        return;
      }
      FUN_0002c8cc(iVar5,param_2);
      pcVar2 = (char *)(DAT_0002dbd8 + 0x2d32c);
      goto LAB_0002d144;
    }
    if (uVar3 < 5) {
      if (uVar3 == 2) {
        FUN_0002ca20(param_1 + 1,uVar7,param_2);
        if (uVar7 == 0x81) {
          return;
        }
        uVar3 = FUN_0002c514(param_2);
        FUN_0002c8cc(param_1 + 1,param_2);
        printf((char *)(DAT_0002dbc8 + 0x2d1a4),(uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff);
        iVar9 = FUN_0002c4f4(param_2);
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar9;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar9;
        iVar9 = FUN_0002c4f4(param_2);
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar9;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar9;
        iVar9 = FUN_0002c4f4(param_2);
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar9;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar9;
        iVar5 = FUN_0002c4f4(param_2);
        iVar9 = *(int *)(param_2 + 0xc) - iVar5;
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar5;
        goto LAB_0002d224;
      }
      if (uVar3 < 3) {
        if (uVar3 != 1) goto LAB_0002cd78;
        FUN_0002ca20(param_1 + 1,uVar7,param_2);
        if (uVar7 != 0x80) {
          return;
        }
        iVar9 = FUN_0002c4f4(param_2);
        if (iVar9 == 0) {
          return;
        }
        FUN_0002c8cc(param_1 + 1,param_2);
        pcVar2 = (char *)(DAT_0002dbc4 + 0x2d148);
      }
      else {
        iVar5 = param_1 + 1;
        FUN_0002ca20(iVar5,uVar7,param_2);
        if (uVar7 != 0x82) {
          return;
        }
        iVar9 = FUN_0002c4f4(param_2);
        if (iVar9 != 0) {
          FUN_0002c8cc(iVar5,param_2);
          puts((char *)(DAT_0002dbcc + 0x2d278));
          FUN_0001472c(iVar5,param_2,iVar9);
        }
        iVar9 = FUN_0002c4f4(param_2);
        if (iVar9 != 0) {
          FUN_0002c8cc(iVar5,param_2);
          puts((char *)(DAT_0002dbd0 + 0x2d2b0));
          FUN_0001472c(iVar5,param_2,iVar9);
        }
        iVar9 = FUN_0002c4f4(param_2);
        if (iVar9 == 0) {
          return;
        }
        FUN_0002c8cc(iVar5,param_2);
        pcVar2 = (char *)(DAT_0002dbd4 + 0x2d2e8);
      }
      goto LAB_0002d144;
    }
    if (uVar3 == 8) {
      iVar5 = param_1 + 1;
      FUN_0002ca20(iVar5,uVar7,param_2);
      if (uVar7 == 0x80) {
        iVar9 = FUN_0002c4f4(param_2);
        if (iVar9 != 0) {
          FUN_0002c8cc(iVar5,param_2);
          puts((char *)(DAT_0002dbe8 + 0x2d420));
          FUN_0001472c(iVar5,param_2,iVar9);
        }
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar9;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar9;
        iVar9 = FUN_0002c4f4(param_2);
        if (iVar9 == 0) {
          return;
        }
        FUN_0002c8cc(iVar5,param_2);
        pcVar2 = (char *)(DAT_0002dbec + 0x2d470);
      }
      else {
        if (uVar7 != 0x82) {
          return;
        }
        uVar3 = FUN_0002c514(param_2);
        FUN_0002c8cc(iVar5,param_2);
        printf((char *)(DAT_0002dbe0 + 0x2d3cc),(uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff);
        iVar9 = FUN_0002c4f4(param_2);
        if (iVar9 == 0) {
          return;
        }
        FUN_0002c8cc(iVar5,param_2);
        pcVar2 = (char *)(DAT_0002dbe4 + 0x2d3f8);
      }
      goto LAB_0002d144;
    }
    if (uVar3 != 0x20) {
      if (uVar3 == 5) {
        param_1 = param_1 + 1;
        FUN_0002ca20(param_1,uVar7,param_2);
        if (uVar7 != 0x80) {
          return;
        }
        uVar3 = FUN_0002c8a8(param_2);
        FUN_0002c8cc(param_1,param_2);
        printf((char *)(DAT_0002db94 + 0x2ce2c),
               uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
               uVar3 >> 0x18);
        uVar3 = FUN_0002c8a8(param_2);
        FUN_0002c8cc(param_1,param_2);
        printf((char *)(DAT_0002db98 + 0x2ce54),
               uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
               uVar3 >> 0x18);
        uVar3 = FUN_0002c8a8(param_2);
        if ((((uVar3 & 0xff) == 0 && (uVar3 >> 8 & 0xff) == 0) && (uVar3 >> 0x10 & 0xff) == 0) &&
            uVar3 >> 0x18 == 0) {
          putchar(10);
        }
        else {
          printf((char *)(DAT_0002db9c + 0x2ce74));
        }
        iVar9 = FUN_0002c4f4(param_2);
        if (iVar9 != 0) {
          FUN_0002c8cc(param_1,param_2);
          puts((char *)(DAT_0002dba0 + 0x2ce9c));
          FUN_0001472c(param_1,param_2,iVar9);
        }
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar9;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar9;
        iVar9 = FUN_0002c4f4(param_2);
        if (iVar9 != 0) {
          FUN_0002c8cc(param_1,param_2);
          puts((char *)(DAT_0002dba4 + 0x2ceec));
          FUN_0001472c(param_1,param_2,iVar9);
        }
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar9;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar9;
        return;
      }
LAB_0002cd78:
      FUN_000149a8(param_1,param_2);
      *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + uVar8;
      *(uint *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - uVar8;
      return;
    }
    iVar5 = param_1 + 1;
    if (uVar7 == 0x81) {
      uVar3 = FUN_0002c514(param_2);
      uVar3 = (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff;
    }
    else {
      uVar3 = 0;
    }
    uVar1 = FUN_0002c514(param_2);
    uVar1 = (uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff;
    FUN_0002c4f4(param_2);
    if (uVar7 == 0x83) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_0002c514(param_2);
      uVar8 = (uVar8 & 0xff) << 8 | uVar8 >> 8 & 0xff;
      FUN_0002c4f4(param_2);
    }
    FUN_0002c8cc(iVar5,param_2);
    if (uVar1 == 0) {
      iVar9 = DAT_0002dbf8 + 0x2d54c;
    }
    else if (uVar1 == 1) {
      iVar9 = DAT_0002dbfc + 0x2d558;
    }
    else {
      iVar9 = DAT_0002dbf0 + 0x2d4f4;
    }
    printf((char *)(DAT_0002dbf4 + 0x2d500),uVar1,iVar9);
    if (uVar1 != 1) {
      FUN_0002c8cc(iVar5,param_2);
      printf((char *)(DAT_0002dc88 + 0x2da88),uVar8);
      if (uVar7 == 0x81) {
        FUN_0002c8cc(iVar5,param_2);
        uVar4 = FUN_0002c53c(uVar3);
        printf((char *)(DAT_0002dc8c + 0x2dab8),uVar3,uVar4);
      }
      iVar5 = param_1 + 2;
      goto switchD_0002d6c8_default;
    }
    FUN_0002c8cc(iVar5,param_2);
    switch(uVar8) {
    case 0:
      iVar9 = DAT_0002dc24 + 0x2d5f4;
      break;
    case 1:
      iVar9 = DAT_0002dc00 + 0x2d564;
      break;
    case 2:
      iVar9 = DAT_0002dc08 + 0x2d5a0;
      break;
    case 3:
      iVar9 = DAT_0002dc0c + 0x2d5ac;
      break;
    case 4:
      iVar9 = DAT_0002dc10 + 0x2d5b8;
      break;
    case 5:
      iVar9 = DAT_0002dc14 + 0x2d5c4;
      break;
    case 6:
      iVar9 = DAT_0002dc18 + 0x2d5d0;
      break;
    case 7:
      iVar9 = DAT_0002dc1c + 0x2d5dc;
      break;
    default:
      iVar9 = DAT_0002dc20 + 0x2d5e8;
    }
    printf((char *)(DAT_0002dc04 + 0x2d570),uVar8,iVar9);
    if (uVar7 == 0x80) {
      iVar5 = param_1 + 2;
      if (uVar8 == 0) {
        uVar3 = FUN_0002c514(param_2);
        FUN_0002c8cc(iVar5,param_2);
        printf((char *)(DAT_0002dc2c + 0x2d65c),(uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff);
        uVar3 = FUN_0002c514(param_2);
        FUN_0002c8cc(iVar5,param_2);
        printf((char *)(DAT_0002dc30 + 0x2d688),(uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff);
        uVar3 = FUN_0002c514(param_2);
        FUN_0002c8cc(iVar5,param_2);
        uVar3 = (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff;
        pcVar2 = (char *)(DAT_0002dc34 + 0x2d6b4);
      }
      else {
        if (3 < uVar8 - 2) goto switchD_0002d6c8_default;
        uVar3 = FUN_0002c8a8(param_2);
        uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                uVar3 >> 0x18;
        FUN_0002c8cc(iVar5,param_2);
        pcVar2 = (char *)(DAT_0002dc28 + 0x2d634);
      }
      goto LAB_0002d6b4;
    }
    if (uVar7 != 0x81) goto switchD_0002d6c8_default;
    iVar5 = param_1 + 2;
    switch(uVar8) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      uVar3 = FUN_0002c514(param_2);
      uVar3 = (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff;
      FUN_0002c8cc(iVar5,param_2);
      uVar4 = FUN_0002c53c(uVar3);
      printf((char *)(DAT_0002dc3c + 0x2d758),uVar3,uVar4);
      FUN_0002c4f4(param_2);
      uVar3 = FUN_0002c514(param_2);
      uVar3 = (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff;
      uVar7 = FUN_0002c514(param_2);
      uVar7 = (uVar7 & 0xff) << 8 | uVar7 >> 8 & 0xff;
      if (uVar7 == 0) {
        FUN_0002c8cc(iVar5,param_2);
        pcVar2 = (char *)(DAT_0002dc5c + 0x2d8ac);
        goto LAB_0002d6b4;
      }
      FUN_0002c8cc(iVar5,param_2);
      printf((char *)(DAT_0002dc40 + 0x2d7a4),uVar3);
      FUN_0002c8cc(iVar5,param_2);
      printf((char *)(DAT_0002dc44 + 0x2d7c0),uVar7);
      uVar3 = FUN_0002c8a8(param_2);
      FUN_0002c8cc(iVar5,param_2);
      printf((char *)(DAT_0002dc48 + 0x2d7e8),
             uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18);
      uVar3 = FUN_0002c8a8(param_2);
      FUN_0002c8cc(iVar5,param_2);
      printf((char *)(DAT_0002dc4c + 0x2d810),
             uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18);
      uVar3 = FUN_0002c8a8(param_2);
      FUN_0002c8cc(iVar5,param_2);
      printf((char *)(DAT_0002dc50 + 0x2d838),
             uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18);
      uVar3 = FUN_0002c8a8(param_2);
      FUN_0002c8cc(iVar5,param_2);
      printf((char *)(DAT_0002dc54 + 0x2d860),
             uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18);
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0x18;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -0x18;
      FUN_0002c8cc(iVar5,param_2);
      puts((char *)(DAT_0002dc58 + 0x2d890));
      iVar9 = 0x14;
      goto LAB_0002d14c;
    case 3:
      uVar3 = FUN_0002c514(param_2);
      uVar3 = (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff;
      FUN_0002c8cc(iVar5,param_2);
      uVar4 = FUN_0002c53c(uVar3);
      printf((char *)(DAT_0002dc60 + 0x2d8e4),uVar3,uVar4);
      uVar3 = FUN_0002c8a8(param_2);
      FUN_0002c8cc(iVar5,param_2);
      printf((char *)(DAT_0002dc64 + 0x2d90c),
             uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18);
      FUN_0002c4f4(param_2);
      FUN_0002c8cc(iVar5,param_2);
      uVar3 = *(uint *)(param_2 + 8);
      pcVar2 = (char *)(DAT_0002dc68 + 0x2d930);
      goto LAB_0002d6b4;
    case 4:
      uVar3 = FUN_0002c8a8(param_2);
      FUN_0002c8cc(iVar5,param_2);
      printf((char *)(DAT_0002dc6c + 0x2d958),
             uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18);
      uVar3 = FUN_0002c8a8(param_2);
      FUN_0002c8cc(iVar5,param_2);
      printf((char *)(DAT_0002dc70 + 0x2d980),
             uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18);
      FUN_0002c8cc(iVar5,param_2);
      uVar3 = FUN_0002c8a8(param_2);
      uVar10 = FUN_0002c8a8(param_2,uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                    (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18);
      uVar3 = (uint)uVar10;
      printf((char *)(DAT_0002dc74 + 0x2d9b0),(int)((ulonglong)uVar10 >> 0x20),
             uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18);
      uVar3 = FUN_0002c8a8(param_2);
      uVar7 = FUN_0002c8a8(param_2);
      FUN_0002c8cc(iVar5,param_2);
      printf((char *)(DAT_0002dc78 + 0x2d9fc),uVar3 >> 0x1c,(uVar3 >> 0x18 & 0xf) << 4,uVar7 >> 0x1c
             ,uVar7 >> 0x18 & 0xf,
             uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18,
             uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
             uVar7 >> 0x18);
      return;
    case 5:
      uVar3 = FUN_0002c8a8(param_2);
      FUN_0002c8cc(iVar5,param_2);
      printf((char *)(DAT_0002dc7c + 0x2da28),
             uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18);
      uVar3 = FUN_0002c8a8(param_2);
      FUN_0002c8cc(iVar5,param_2);
      printf((char *)(DAT_0002dc80 + 0x2da50),
             uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18);
      FUN_0002c4f4(param_2);
      FUN_0002c8cc(iVar5,param_2);
      uVar3 = *(uint *)(param_2 + 8);
      pcVar2 = (char *)(DAT_0002dc84 + 0x2da74);
LAB_0002d6b4:
      printf(pcVar2,uVar3);
      return;
    default:
      goto switchD_0002d6c8_default;
    }
    uVar3 = FUN_0002c514(param_2);
    uVar3 = (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff;
    FUN_0002c8cc(iVar5,param_2);
    uVar4 = FUN_0002c53c(uVar3);
    pcVar2 = (char *)(DAT_0002dc38 + 0x2d720);
LAB_0002d368:
    printf(pcVar2,uVar3,uVar4);
    return;
  }
  iVar5 = param_1 + 1;
  FUN_0002ca20(iVar5,uVar7,param_2);
  uVar3 = FUN_0002c514(param_2);
  uVar3 = (uVar3 & 0xff) << 8 | uVar3 >> 8 & 0xff;
  FUN_0002c4f4(param_2);
  FUN_0002c8cc(iVar5,param_2);
  switch(uVar3) {
  case 0:
    iVar9 = DAT_0002dcac + 0x2dd44;
    break;
  case 1:
    goto LAB_0002dcd8;
  case 2:
    iVar9 = DAT_0002dc98 + 0x2dd08;
    break;
  case 3:
    iVar9 = DAT_0002dc9c + 0x2dd14;
    break;
  case 4:
    iVar9 = DAT_0002dca0 + 0x2dd20;
    break;
  case 5:
    iVar9 = DAT_0002dca4 + 0x2dd2c;
    break;
  case 6:
LAB_0002dcd8:
    iVar9 = DAT_0002dc90 + 0x2dce4;
    break;
  default:
    iVar9 = DAT_0002dca8 + 0x2dd38;
  }
  printf((char *)(DAT_0002dc94 + 0x2dcf0),uVar3,iVar9);
switchD_0002d6c8_default:
  FUN_000149a8(iVar5,param_2);
  return;
}



/* ===== FUN_0002dfb4 @ 0002dfb4 size=308 ===== */

void FUN_0002dfb4(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0002e0e8 + 0x2dfc4 + DAT_0002e0ec);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_0002e0e8 + 0x2dfc4 + DAT_0002e0f0);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_0002e100 + 0x2e0cc),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_0002e0f4 + 0x2e060),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_0002e0f8 + 0x2e07c),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_0002e104 + 0x2e0dc));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_0002e0fc + 0x2e0a8),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0002e108 @ 0002e108 size=1452 ===== */

void FUN_0002e108(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ssize_t sVar5;
  char *__ptr;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  char *__format;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  size_t sVar14;
  void *__s;
  void *pvVar15;
  int iVar16;
  undefined1 local_5f;
  ushort local_5e;
  char *local_5c;
  size_t local_58;
  ushort *local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_2c;
  
  piVar7 = *(int **)(DAT_0002e6b4 + 0x2e118 + DAT_0002e6b8);
  iVar11 = *(int *)(param_2 + 0x28);
  local_2c = *piVar7;
  iVar4 = fileno((FILE *)**(undefined4 **)(DAT_0002e6b4 + 0x2e118 + DAT_0002e6bc));
  if (iVar4 < iVar11) {
    local_5e = (ushort)((*(uint *)(param_2 + 0xc) & 0xff) << 8) |
               (ushort)(*(uint *)(param_2 + 0xc) >> 8) & 0xff;
    uVar9 = *(uint *)(param_2 + 0x20);
    local_5c = (char *)(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                       uVar9 >> 0x18);
    local_5f = 7;
    sVar5 = write(*(int *)(param_2 + 0x28),&local_5f,1);
    if ((sVar5 < 0) || (sVar5 = write(*(int *)(param_2 + 0x28),&local_5c,4), sVar5 < 0))
    goto LAB_0002e270;
    if (*(char *)(param_2 + 0x12) == '\0') {
      local_5f = 1;
    }
    else {
      local_5f = 2;
    }
    sVar5 = write(*(int *)(param_2 + 0x28),&local_5f,1);
    if (((sVar5 < 0) || (sVar5 = write(*(int *)(param_2 + 0x28),&local_5e,2), sVar5 < 0)) ||
       (sVar5 = write(*(int *)(param_2 + 0x28),*(void **)(param_2 + 8),*(size_t *)(param_2 + 0xc)),
       sVar5 < 0)) goto LAB_0002e270;
  }
  if (*(int *)(DAT_0002e6c0 + 0x2e20c) == 0) {
    iVar4 = *(int *)(param_2 + 0xc);
    iVar11 = *(int *)(param_2 + 8);
    pvVar15 = (void *)(DAT_0002e6c4 + 0x2e228);
    for (uVar9 = 0; uVar9 < iVar4 - 5U; uVar9 = uVar9 + 1) {
      iVar6 = memcmp((void *)(iVar11 + uVar9),pvVar15,5);
      if (iVar6 == 0) {
        puVar10 = (undefined4 *)(DAT_0002e6d0 + 0x2e2ac);
        goto LAB_0002e2a8;
      }
    }
    pvVar15 = (void *)(DAT_0002e6c8 + 0x2e245);
    for (uVar9 = 0; uVar9 < iVar4 - 6U; uVar9 = uVar9 + 1) {
      iVar6 = memcmp((void *)(iVar11 + uVar9),pvVar15,6);
      if (iVar6 == 0) {
        puVar10 = (undefined4 *)(DAT_0002e6e0 + 0x2e3e8);
        goto LAB_0002e2a8;
      }
    }
    uVar9 = 0;
    pvVar15 = (void *)(DAT_0002e6cc + 0x2e267);
LAB_0002e25c:
    if (uVar9 < iVar4 - 7U) {
      iVar6 = memcmp((void *)(iVar11 + uVar9),pvVar15,7);
      if (iVar6 != 0) goto code_r0x0002e410;
      puVar10 = (undefined4 *)(DAT_0002e6e4 + 0x2e410);
LAB_0002e2a8:
      *puVar10 = 1;
      if (-1 < (int)uVar9) {
        if (uVar9 != 0) {
          FUN_00014958(param_1,param_2,uVar9);
          *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + uVar9;
          *(uint *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - uVar9;
        }
        goto LAB_0002e2e4;
      }
    }
    FUN_000149a8(param_1,param_2);
    goto LAB_0002e270;
  }
LAB_0002e2e4:
  iVar11 = DAT_0002e6d8;
  iVar4 = DAT_0002e6d4;
  iVar6 = FUN_0001431c(param_2);
  __format = (char *)(DAT_0002e6dc + 0x2e30c);
  while (sVar14 = *(size_t *)(iVar6 + 0xc), sVar14 != 0) {
    pvVar13 = *(void **)(iVar6 + 8);
    pvVar15 = memchr(pvVar13,0x7e,sVar14);
    if (pvVar15 == (void *)0x0) break;
    if (pvVar13 != pvVar15) {
      *(size_t *)(iVar6 + 0xc) = sVar14 - ((int)pvVar15 - (int)pvVar13);
      *(void **)(iVar6 + 8) = pvVar15;
    }
    sVar14 = *(int *)(iVar6 + 0xc) - 1;
    __s = (void *)(*(int *)(iVar6 + 8) + 1);
    pvVar13 = memchr(__s,0x7e,sVar14);
    if (pvVar13 == (void *)0x0) break;
    *(void **)(iVar6 + 8) = __s;
    iVar12 = (int)pvVar13 + (-1 - (int)pvVar15);
    *(size_t *)(iVar6 + 0xc) = sVar14;
    if (0 < iVar12) {
      __ptr = malloc(iVar12 * 2);
      if (__ptr != (char *)0x0) {
        iVar16 = 0;
        iVar8 = iVar16;
        do {
          local_50 = iVar8;
          cVar1 = *(char *)((int)__s + iVar16);
          if (cVar1 == '}') {
            iVar8 = (int)__s + iVar16;
            iVar16 = iVar16 + 1;
          }
          else {
            __ptr[local_50] = cVar1;
            iVar8 = iVar16;
          }
          iVar16 = iVar16 + 1;
          if (cVar1 == '}') {
            __ptr[local_50] = *(byte *)(iVar8 + 1) ^ 0x20;
          }
          iVar8 = local_50 + 1;
        } while (iVar16 < iVar12);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        local_50 = local_50 + -3;
        local_34 = 0;
        local_4c = (uint)*(byte *)(iVar6 + 0x12) << 0x10;
        local_3c = *(undefined4 *)(iVar6 + 0x20);
        uStack_38 = *(undefined4 *)(iVar6 + 0x24);
        uStack_48 = *(undefined4 *)(iVar6 + 0x14);
        local_54 = (ushort *)(__ptr + 2);
        cVar1 = *__ptr;
        cVar2 = __ptr[1];
        uVar3 = *(ushort *)((int)local_54 + local_50);
        local_5c = __ptr;
        local_58 = iVar12 * 2;
        FUN_0002dfb4(param_1,&local_5c);
        if (cVar2 == '\x03' && cVar1 == -1) {
          if (local_4c._2_1_ == '\0') {
            iVar16 = DAT_0002e6f8 + 0x2e5d8;
          }
          else {
            iVar16 = DAT_0002e700 + 0x2e5fc;
          }
          printf((char *)(DAT_0002e6fc + 0x2e5e8),iVar16,0xff,3,local_50,(uint)uVar3);
        }
        else {
          local_50 = local_50 + 2;
          local_54 = local_54 + -1;
          if (local_4c._2_1_ == '\0') {
            iVar16 = DAT_0002e6e8 + 0x2e50c;
          }
          else {
            iVar16 = DAT_0002e6f4 + 0x2e5c4;
          }
          printf((char *)(DAT_0002e6ec + 0x2e518),iVar16,local_50,(uint)uVar3);
        }
        if ((char)(byte)*local_54 < '\0') {
          local_50 = local_50 + -2;
          uVar9 = (*local_54 & 0xff) << 8 | (uint)(*local_54 >> 8);
          local_54 = local_54 + 1;
        }
        else {
          local_50 = local_50 + -1;
          uVar9 = (uint)(byte)*local_54;
          local_54 = (ushort *)((int)local_54 + 1);
        }
        FUN_0002dfb4(param_1 + 1,&local_5c);
        iVar16 = iVar4 + 0x2e304;
        if (uVar9 != 0x80fd) {
          if (uVar9 < 0x80fe) {
            if (uVar9 == 0x21) {
              iVar16 = DAT_0002e70c + 0x2e670;
            }
            else if (uVar9 == 0x8021) {
              iVar16 = DAT_0002e710 + 0x2e67c;
            }
            else if (uVar9 == 1) {
              iVar16 = DAT_0002e714 + 0x2e688;
            }
            else {
              iVar16 = DAT_0002e6f0 + 0x2e598;
            }
          }
          else {
            iVar16 = iVar11 + 0x2e308;
            if (uVar9 != 0xc023) {
              if (uVar9 < 0xc024) {
                if (uVar9 == 0xc021) {
                  iVar16 = DAT_0002e718 + 0x2e694;
                }
                else {
                  iVar16 = DAT_0002e704 + 0x2e640;
                }
              }
              else if (uVar9 == 0xc025) {
                iVar16 = DAT_0002e71c + 0x2e6a0;
              }
              else if (uVar9 == 0xc223) {
                iVar16 = DAT_0002e720 + 0x2e6ac;
              }
              else {
                iVar16 = DAT_0002e708 + 0x2e664;
              }
            }
          }
        }
        printf(__format,iVar16,uVar9,local_50);
        FUN_000149a8(param_1 + 1,&local_5c);
        free(__ptr);
      }
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + iVar12;
      *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) - iVar12;
    }
  }
LAB_0002e270:
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0002e410:
  uVar9 = uVar9 + 1;
  goto LAB_0002e25c;
}



/* ===== FUN_0002ec5c @ 0002ec5c size=464 ===== */

void FUN_0002ec5c(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  uint *puVar6;
  time_t local_54;
  tm local_50;
  int local_24;
  
  iVar3 = DAT_0002ee2c + 0x2ec6c;
  piVar5 = *(int **)(iVar3 + DAT_0002ee30);
  pbVar4 = *(byte **)(param_2 + 8);
  local_24 = *piVar5;
  *(byte **)(param_2 + 8) = pbVar4 + 1;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
  bVar1 = *pbVar4;
  if (bVar1 != 0x10) {
    puVar6 = *(uint **)(iVar3 + DAT_0002ee34);
    if (param_1 < 0) {
      puVar6[3] = 0;
    }
    else {
      if (puVar6[3] == 0) {
        if ((*puVar6 & 0x100) != 0) {
          if ((*puVar6 & 0x200) == 0) {
            printf((char *)(DAT_0002ee48 + 0x2ee10),*(time_t *)(param_2 + 0x20),
                   *(undefined4 *)(param_2 + 0x24));
          }
          else {
            local_54 = *(time_t *)(param_2 + 0x20);
            localtime_r(&local_54,&local_50);
            printf((char *)(DAT_0002ee38 + 0x2ed30),local_50.tm_year + 0x76c,local_50.tm_mon + 1,
                   local_50.tm_mday,local_50.tm_hour,local_50.tm_min,local_50.tm_sec,
                   *(undefined4 *)(param_2 + 0x24));
          }
        }
        if (*(char *)(param_2 + 0x12) == '\0') {
          uVar2 = 0x3c;
        }
        else {
          uVar2 = 0x3e;
        }
        printf((char *)(DAT_0002ee3c + 0x2ed4c),uVar2);
        puVar6[3] = 1;
      }
      else {
        printf((char *)(DAT_0002ee4c + 0x2ee20));
      }
      if (param_1 != 0) {
        printf((char *)(DAT_0002ee40 + 0x2ed78),param_1 << 1,0x20);
      }
    }
    printf((char *)(DAT_0002ee44 + 0x2ed88),(uint)bVar1);
    FUN_000149a8(param_1,param_2);
  }
  *(byte *)(param_2 + 0x13) = ~pbVar4[1] & 1;
  *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)(pbVar4 + 2);
  pbVar4[6] = pbVar4[4] & 1 | pbVar4[6] << 1;
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 5;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -5;
  FUN_000155b8(param_1,param_2);
  if (local_24 == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0002ee50 @ 0002ee50 size=40 ===== */

ushort FUN_0002ee50(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 8);
  *(ushort **)(param_1 + 8) = puVar2 + 1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -2;
  uVar1 = *puVar2;
  return uVar1 << 8 | uVar1 >> 8;
}



/* ===== FUN_0002ee78 @ 0002ee78 size=136 ===== */

void FUN_0002ee78(undefined4 param_1,char *param_2)

{
  int *piVar1;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  int local_14;
  
  piVar1 = *(int **)(DAT_0002ef00 + 0x2ee88 + DAT_0002ef04);
  local_14 = *piVar1;
  if ((**(uint **)(DAT_0002ef00 + 0x2ee88 + DAT_0002ef08) & 0x4000) == 0) {
    FUN_00030588();
  }
  else {
    FUN_0003056c(&local_1c,param_1);
    sprintf(param_2,(char *)(DAT_0002ef0c + 0x2eedc),(uint)local_1c,(uint)local_1b,(uint)local_1a);
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0002ef10 @ 0002ef10 size=308 ===== */

void FUN_0002ef10(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int *piVar3;
  time_t local_4c;
  tm local_48;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0002f044 + 0x2ef20 + DAT_0002f048);
  local_1c = *piVar3;
  puVar2 = *(uint **)(DAT_0002f044 + 0x2ef20 + DAT_0002f04c);
  if (param_1 < 0) {
    puVar2[3] = 0;
  }
  else {
    if (puVar2[3] == 0) {
      if ((*puVar2 & 0x100) != 0) {
        if ((*puVar2 & 0x200) == 0) {
          printf((char *)(DAT_0002f05c + 0x2f028),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_4c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_4c,&local_48);
          printf((char *)(DAT_0002f050 + 0x2efbc),local_48.tm_year + 0x76c,local_48.tm_mon + 1,
                 local_48.tm_mday,local_48.tm_hour,local_48.tm_min,local_48.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar1 = 0x3c;
      }
      else {
        uVar1 = 0x3e;
      }
      printf((char *)(DAT_0002f054 + 0x2efd8),uVar1);
      puVar2[3] = 1;
    }
    else {
      printf((char *)(DAT_0002f060 + 0x2f038));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_0002f058 + 0x2f004),param_1 * 2,0x20);
    }
  }
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0002f064 @ 0002f064 size=88 ===== */

void FUN_0002f064(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0002ee50(param_3,param_3);
  uVar1 = FUN_0002ee50((int)((ulonglong)uVar3 >> 0x20));
  iVar2 = ((uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff) +
          (((uint)uVar3 & 0xff) << 8 | (uint)uVar3 >> 8 & 0xff) * 0x10000;
  FUN_0002ef10(param_1);
  printf((char *)(DAT_0002f0bc + 0x2f0b8),param_2,iVar2,iVar2);
  return;
}



/* ===== FUN_0002f0c0 @ 0002f0c0 size=48 ===== */

void FUN_0002f0c0(undefined4 param_1,char *param_2,undefined4 param_3)

{
  FUN_0002ef10(param_1,param_3);
  puts(param_2);
  FUN_000149a8(param_1,param_3);
  return;
}



/* ===== FUN_0002f0f0 @ 0002f0f0 size=28 ===== */

void FUN_0002f0f0(undefined4 param_1,char *param_2,undefined4 param_3)

{
  FUN_0002ef10(param_1,param_3);
  puts(param_2);
  return;
}



/* ===== FUN_0002f10c @ 0002f10c size=68 ===== */

void FUN_0002f10c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_0002ee50(param_3,param_3);
  FUN_0002ef10(param_1);
  printf((char *)(DAT_0002f150 + 0x2f14c),param_2,(uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff);
  return;
}



/* ===== FUN_0002f154 @ 0002f154 size=64 ===== */

void FUN_0002f154(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0002ee50(param_3,param_3);
  FUN_0002ef10(param_1);
  printf((char *)(DAT_0002f194 + 0x2f18c),param_2,
         (int)CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8)));
  return;
}



/* ===== FUN_0002f198 @ 0002f198 size=92 ===== */

void FUN_0002f198(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0002ee50(param_3,param_3);
  uVar1 = (uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff;
  FUN_0002ef10(param_1);
  if (uVar1 == 0) {
    iVar2 = DAT_0002f1f4 + 0x2f1d4;
  }
  else {
    iVar2 = (int)&DAT_0002f1f4 + DAT_0002f1fc;
  }
  printf((char *)(DAT_0002f1f8 + 0x2f1e4),param_2,iVar2,uVar1);
  return;
}



/* ===== FUN_0002f200 @ 0002f200 size=3980 ===== */

void FUN_0002f200(int param_1,int param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined4 local_6c [2];
  undefined1 auStack_64 [56];
  int local_2c;
  
  iVar12 = DAT_0003018c + 0x2f220;
  pbVar5 = *(byte **)(param_2 + 8);
  piVar6 = *(int **)(iVar12 + DAT_00030190);
  local_2c = *piVar6;
  *(byte **)(param_2 + 8) = pbVar5 + 1;
  iVar7 = *(int *)(param_2 + 0xc);
  *(int *)(param_2 + 0xc) = iVar7 + -1;
  bVar1 = *pbVar5;
  uVar11 = bVar1 & 0x3f;
  if (uVar11 == 2) {
    uVar15 = FUN_0002ee50(param_2);
    uVar8 = ((uint)uVar15 & 0xff) << 8 | (uint)uVar15 >> 8 & 0xff;
    uVar15 = FUN_0002ee50((int)((ulonglong)uVar15 >> 0x20));
    uVar13 = FUN_0002ee50((int)((ulonglong)uVar15 >> 0x20));
    uVar14 = FUN_0002ee50((int)((ulonglong)uVar13 >> 0x20));
    uVar11 = ((uint)uVar14 & 0xff) << 8 | (uint)uVar14 >> 8 & 0xff;
    uVar9 = FUN_0002ee50((int)((ulonglong)uVar14 >> 0x20));
    FUN_0002ef10(param_1);
    if (uVar8 == 1) {
      iVar7 = DAT_000301a0 + 0x2f37c;
    }
    else if ((short)uVar8 == 0) {
      iVar7 = DAT_000301a4 + 0x2f388;
    }
    else if (uVar8 == 2) {
      iVar7 = DAT_000301a8 + 0x2f394;
    }
    else {
      iVar7 = DAT_00030194 + 0x2f334;
    }
    iVar10 = param_1 + 1;
    printf((char *)(DAT_00030198 + 0x2f344),iVar7,
           ((uint)uVar15 & 0xff) << 8 | (uint)uVar15 >> 8 & 0xff,
           ((uint)uVar13 & 0xff) << 8 | (uint)uVar13 >> 8 & 0xff,uVar11,
           (uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff);
    if ((**(uint **)(iVar12 + DAT_0003019c) & 0x200) != 0) {
      if (uVar11 == 0x4001) {
        iVar7 = DAT_0003024c + 0x2fa00;
      }
      else {
        if (uVar11 < 0x4002) {
          if (uVar11 == 0x2836) {
            iVar7 = DAT_00030210 + 0x2f838;
          }
          else {
            if (0x2836 < uVar11) {
              if (uVar11 == 0x3009) {
                uVar11 = FUN_0002ee50(param_2);
                uVar9 = FUN_0002ee50(param_2);
                uVar8 = FUN_0002ee50(param_2);
                FUN_0002ef10(iVar10,param_2);
                uVar11 = (uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff;
                uVar9 = ((uVar8 & 0xff) << 8 | uVar8 >> 8 & 0xff) +
                        ((uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff) * 0x10000;
                iVar7 = DAT_00030230 + 0x2f96c;
                pcVar2 = (char *)(DAT_00030234 + 0x2f970);
LAB_0002f524:
                printf(pcVar2,iVar7,uVar11,uVar9);
                goto LAB_0002f7a8;
              }
              if (0x3009 < uVar11) {
                if (uVar11 == 0x300e) {
                  iVar7 = DAT_0003023c + 0x2f998;
                }
                else if (uVar11 < 0x300f) {
                  if (uVar11 == 0x300a) {
                    iVar7 = DAT_00030238 + 0x2f980;
                  }
                  else {
                    if (uVar11 != 0x300b) goto LAB_0002f368;
                    iVar7 = DAT_000301c8 + 0x2f564;
                  }
                }
                else {
                  if (uVar11 == 0x3012) {
                    uVar11 = FUN_0002ee50(param_2);
                    uVar9 = FUN_0002ee50(param_2);
                    FUN_0002ef10(iVar10,param_2);
                    uVar9 = (uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff;
                    uVar11 = (uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff;
                    iVar7 = DAT_00030240 + 0x2f9d8;
                    pcVar2 = (char *)(DAT_00030244 + 0x2f9e0);
                    goto LAB_0002f524;
                  }
                  if (uVar11 == 0x301c) {
                    iVar7 = DAT_00030248 + 0x2f9f0;
                  }
                  else {
                    if (uVar11 != 0x300f) goto LAB_0002f368;
                    iVar7 = DAT_000301cc + 0x2f598;
                  }
                }
                FUN_0002f0c0(iVar10,iVar7,param_2);
                goto LAB_0002f7a8;
              }
              if (uVar11 == 0x3005) {
                uVar9 = FUN_0002ee50(param_2);
                uVar8 = FUN_0002ee50(param_2);
                uVar11 = FUN_0002ee50(param_2);
                uVar11 = (uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff;
                FUN_0002ef10(iVar10,param_2);
                uVar8 = (uVar8 & 0xff) << 8 | uVar8 >> 8 & 0xff;
                uVar9 = (uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff;
                puVar3 = (undefined4 *)(DAT_00030218 + 0x2f89c);
                pcVar2 = (char *)(DAT_0003021c + 0x2f8a4);
LAB_0002f8a4:
                printf(pcVar2,puVar3,uVar9,uVar8,uVar11);
                goto LAB_0002f7a8;
              }
              if (uVar11 < 0x3006) {
                if (uVar11 == 0x2838) {
                  iVar7 = DAT_00030214 + 0x2f848;
                  goto LAB_0002f7d0;
                }
                if (uVar11 == 0x2c00) {
                  iVar7 = DAT_000301bc + 0x2f4c4;
                  param_1 = iVar10;
LAB_0002f4c0:
                  FUN_0002f064(param_1,iVar7,param_2);
                  goto LAB_0002f7a8;
                }
              }
              else {
                if (uVar11 == 0x3006) {
                  uVar9 = FUN_0002ee50(param_2);
                  uVar11 = FUN_0002ee50(param_2);
                  uVar11 = (uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff;
                  FUN_0002ef10(iVar10,param_2);
                  uVar9 = (uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff;
                  if (*(char *)(param_2 + 0x12) == '\0') {
                    uVar8 = DAT_00030220 + 0x2f8f4;
                  }
                  else {
                    uVar8 = DAT_0003022c + 0x2f914;
                  }
                  puVar3 = (undefined4 *)(DAT_00030224 + 0x2f904);
                  pcVar2 = (char *)(DAT_00030228 + 0x2f908);
                  goto LAB_0002f8a4;
                }
                if (uVar11 == 0x3008) {
                  uVar11 = FUN_0002ee50(param_2);
                  uVar9 = FUN_0002ee50(param_2);
                  FUN_0002ef10(iVar10,param_2);
                  uVar9 = (uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff;
                  uVar11 = (uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff;
                  iVar7 = DAT_000301c0 + 0x2f520;
                  pcVar2 = (char *)(DAT_000301c4 + 0x2f528);
                  goto LAB_0002f524;
                }
              }
              goto LAB_0002f368;
            }
            if (uVar11 == 0x281a) {
              iVar7 = DAT_00030200 + 0x2f7f8;
            }
            else if (uVar11 < 0x281b) {
              if (uVar11 == 0x82d) {
                iVar7 = DAT_000301f8 + 0x2f7d0;
              }
              else {
                if (uVar11 < 0x82e) {
                  if (uVar11 == 0xb) {
                    iVar7 = DAT_000301f4 + 0x2f7a4;
                  }
                  else {
                    if (uVar11 != 0xc) goto LAB_0002f368;
                    iVar7 = DAT_000301ac + 0x2f3f4;
                  }
                  goto LAB_0002f7a0;
                }
                if (uVar11 == 0x2801) {
                  iVar7 = DAT_000301fc + 0x2f7e8;
                }
                else {
                  if (uVar11 != 0x2819) goto LAB_0002f368;
                  iVar7 = DAT_000301b0 + 0x2f41c;
                }
              }
            }
            else if (uVar11 == 0x282a) {
              iVar7 = DAT_00030208 + 0x2f818;
            }
            else if (uVar11 < 0x282b) {
              if (uVar11 == 0x281b) {
                iVar7 = DAT_00030204 + 0x2f808;
              }
              else {
                if (uVar11 != 0x2825) goto LAB_0002f368;
                iVar7 = DAT_000301b4 + 0x2f454;
              }
            }
            else if (uVar11 == 0x282c) {
              iVar7 = DAT_0003020c + 0x2f828;
            }
            else {
              if (uVar11 != 0x2833) goto LAB_0002f368;
              iVar7 = DAT_000301b8 + 0x2f47c;
            }
          }
LAB_0002f7d0:
          FUN_0002f10c(iVar10,iVar7,param_2);
          goto LAB_0002f7a8;
        }
        if (uVar11 == 0x4012) {
          iVar7 = DAT_00030270 + 0x2fa90;
        }
        else if (uVar11 < 0x4013) {
          if (uVar11 == 0x4007) {
            iVar7 = DAT_0003025c + 0x2fa40;
          }
          else if (uVar11 < 0x4008) {
            if (uVar11 == 0x4004) {
              iVar7 = DAT_00030254 + 0x2fa20;
            }
            else if (uVar11 < 0x4005) {
              if (uVar11 == 0x4002) {
                iVar7 = DAT_00030250 + 0x2fa10;
              }
              else {
                if (uVar11 != 0x4003) goto LAB_0002f368;
                iVar7 = DAT_000301d0 + 0x2f5f0;
              }
            }
            else if (uVar11 == 0x4005) {
              iVar7 = DAT_00030258 + 0x2fa30;
            }
            else {
              if (uVar11 != 0x4006) goto LAB_0002f368;
              iVar7 = DAT_000301d4 + 0x2f618;
            }
          }
          else if (uVar11 == 0x400d) {
            iVar7 = DAT_00030264 + 0x2fa60;
          }
          else if (uVar11 < 0x400e) {
            if (uVar11 == 0x4008) {
              iVar7 = DAT_00030260 + 0x2fa50;
            }
            else {
              if (uVar11 != 0x4009) goto LAB_0002f368;
              iVar7 = DAT_000301d8 + 0x2f650;
            }
          }
          else if (uVar11 == 0x400f) {
            iVar7 = DAT_0003026c + 0x2fa80;
          }
          else if (uVar11 < 0x400f) {
            iVar7 = DAT_00030268 + 0x2fa70;
          }
          else {
            if (uVar11 != 0x4011) goto LAB_0002f368;
            iVar7 = DAT_000301dc + 0x2f67c;
          }
        }
        else {
          if (uVar11 != 0x6000) {
            if (uVar11 < 0x6001) {
              if (uVar11 == 0x482e) {
                iVar7 = DAT_00030278 + 0x2fab0;
              }
              else {
                if (0x482e < uVar11) {
                  if (uVar11 == 0x5004) {
                    uVar11 = FUN_0002ee50(param_2);
                    FUN_0002ef10(iVar10,param_2);
                    printf((char *)(DAT_00030280 + 0x2fae4),DAT_0003027c + 0x2fadc,
                           (uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff);
                  }
                  else if (uVar11 == 0x500c) {
                    uVar11 = FUN_0002ee50(param_2);
                    uVar9 = FUN_0002ee50(param_2);
                    FUN_0002ef10(iVar10,param_2);
                    uVar9 = (uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff;
                    uVar11 = (uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff;
                    iVar7 = DAT_000301e4 + 0x2f718;
                    pcVar2 = (char *)(DAT_000301e8 + 0x2f720);
                    goto LAB_0002f524;
                  }
                  goto LAB_0002f368;
                }
                if (uVar11 == 0x4818) {
                  iVar7 = DAT_00030274 + 0x2faa0;
                }
                else {
                  if (uVar11 != 0x481c) goto LAB_0002f368;
                  iVar7 = DAT_000301e0 + 0x2f6c0;
                }
              }
            }
            else if (uVar11 == 0x6806) {
              iVar7 = DAT_0003028c + 0x2fb18;
            }
            else {
              if (0x6806 < uVar11) {
                if (uVar11 == 0x682b) {
                  iVar7 = DAT_00030290 + 0x2fb28;
                }
                else {
                  if (uVar11 == 0x7003) {
                    param_1 = param_1 + 2;
                    uVar11 = FUN_0002ee50(param_2);
                    uVar11 = (uVar11 & 0xff) << 8 | uVar11 >> 8 & 0xff;
                    uVar9 = FUN_0002ee50(param_2);
                    uVar8 = FUN_0002ee50(param_2);
                    FUN_0002ef10(iVar10,param_2);
                    printf((char *)(DAT_00030294 + 0x2fb7c),uVar11,
                           (uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff,
                           (uVar8 & 0xff) << 8 | uVar8 >> 8 & 0xff);
                    if (uVar11 == 0x106) {
                      memcpy(local_6c,*(void **)(param_2 + 8),*(size_t *)(param_2 + 0xc));
                      iVar7 = DAT_000302e0;
                      FUN_0002ef10(param_1,param_2);
                      printf((char *)(DAT_000302e8 + 0x2fe50),DAT_000302e4 + 0x2fe4c);
                      for (uVar11 = 0; uVar11 < *(uint *)(param_2 + 0xc); uVar11 = uVar11 + 1) {
                        printf((char *)(iVar7 + 0x2fe54),(uint)*(byte *)((int)local_6c + uVar11));
                      }
LAB_0002fc7c:
                      putchar(10);
                      goto LAB_0002f7a8;
                    }
                    iVar10 = param_1;
                    if (uVar11 < 0x107) {
                      if (uVar11 == 0xd) {
                        iVar7 = DAT_000302d0 + 0x2fde4;
                      }
                      else if (uVar11 < 0xe) {
                        if (uVar11 == 3) {
                          iVar7 = DAT_000302c8 + 0x2fdc4;
                          goto LAB_0002f4c0;
                        }
                        if (uVar11 < 4) {
                          if (uVar11 == 1) {
                            FUN_0002ee78(*(undefined4 *)(param_2 + 8),local_6c);
                            FUN_0002ef10(param_1,param_2);
                            printf((char *)(DAT_000302c0 + 0x2fd98),DAT_000302bc + 0x2fd94,local_6c)
                            ;
                            goto LAB_0002f7a8;
                          }
                          if (uVar11 != 2) goto LAB_0002f368;
                          iVar7 = DAT_000302c4 + 0x2fdac;
                        }
                        else if (uVar11 == 4) {
                          iVar7 = DAT_000302cc + 0x2fdd4;
                        }
                        else {
                          if (uVar11 != 5) goto LAB_0002f368;
                          iVar7 = DAT_00030298 + 0x2fbe4;
                        }
                      }
                      else if (uVar11 == 0xda) {
                        iVar7 = DAT_000302d8 + 0x2fe04;
                      }
                      else if (uVar11 < 0xdb) {
                        if (uVar11 == 0xe) {
                          iVar7 = DAT_000302d4 + 0x2fdf4;
                        }
                        else {
                          if (uVar11 != 0xf) goto LAB_0002f368;
                          iVar7 = DAT_0003029c + 0x2fc10;
                        }
                      }
                      else {
                        if (uVar11 != 0xdb) {
                          if (uVar11 == 0xef) {
                            puVar3 = *(undefined4 **)(param_2 + 8);
                            local_6c[0] = *puVar3;
                            local_6c[1] = puVar3[1];
                            pcVar2 = (char *)(DAT_000302a0 + 0x2fc40);
                            iVar7 = 0;
                            FUN_0002ef10(param_1,param_2,puVar3,auStack_64);
                            printf((char *)(DAT_000302a8 + 0x2fc64),DAT_000302a4 + 0x2fc60);
                            pbVar5 = (byte *)local_6c;
                            do {
                              iVar7 = iVar7 + 1;
                              printf(pcVar2,(uint)*pbVar5);
                              pbVar5 = pbVar5 + 1;
                            } while (iVar7 != 8);
                            goto LAB_0002fc7c;
                          }
                          goto LAB_0002f368;
                        }
                        iVar7 = DAT_000302dc + 0x2fe14;
                      }
                    }
                    else if (uVar11 == 0x1f6) {
                      iVar7 = DAT_000302f8 + 0x2febc;
                    }
                    else if (uVar11 < 0x1f7) {
                      if (uVar11 == 0x1a5) {
                        iVar7 = DAT_000302f0 + 0x2fe94;
LAB_0002fe90:
                        FUN_0002f198(param_1,iVar7,param_2);
                        goto LAB_0002f7a8;
                      }
                      if (uVar11 < 0x1a6) {
                        if (uVar11 == 0x10d) {
                          iVar7 = DAT_000302ec + 0x2fe84;
                        }
                        else {
                          if (uVar11 != 0x10e) goto LAB_0002f368;
                          iVar7 = DAT_000302ac + 0x2fcd0;
                        }
                      }
                      else {
                        if (uVar11 == 0x1ab) {
                          iVar7 = DAT_000302f4 + 0x2feac;
                          goto LAB_0002fe90;
                        }
                        if (uVar11 != 0x1be) goto LAB_0002f368;
                        iVar7 = DAT_000302b0 + 0x2fcf8;
                      }
                    }
                    else if (uVar11 == 0x2be) {
                      iVar7 = DAT_00030300 + 0x2fedc;
                    }
                    else if (uVar11 < 0x2bf) {
                      if (uVar11 == 0x1f9) {
                        iVar7 = DAT_000302fc + 0x2fecc;
                      }
                      else {
                        if (uVar11 != 0x1fe) goto LAB_0002f368;
                        iVar7 = DAT_000302b4 + 0x2fd30;
                      }
                    }
                    else if (uVar11 == 0x2cb) {
                      iVar7 = DAT_00030304 + 0x2feec;
                    }
                    else {
                      if (uVar11 == 0x3cd) {
                        FUN_0002f154(param_1,DAT_00030308 + 0x2ff00,param_2);
                        goto LAB_0002f7a8;
                      }
                      if (uVar11 != 0x2bf) goto LAB_0002f368;
                      iVar7 = DAT_000302b8 + 0x2fd64;
                    }
                    goto LAB_0002f7d0;
                  }
                  if (uVar11 != 0x6827) goto LAB_0002f368;
                  iVar7 = DAT_000301f0 + 0x2f78c;
                }
                FUN_0002f154(iVar10,iVar7,param_2);
                goto LAB_0002f7a8;
              }
              if (uVar11 == 0x6802) {
                iVar7 = DAT_00030288 + 0x2fb08;
              }
              else {
                if (uVar11 != 0x6805) goto LAB_0002f368;
                iVar7 = DAT_000301ec + 0x2f758;
              }
            }
            goto LAB_0002f7d0;
          }
          iVar7 = DAT_00030284 + 0x2faf8;
        }
      }
LAB_0002f7a0:
      FUN_0002f0f0(iVar10,iVar7,param_2);
      goto LAB_0002f7a8;
    }
  }
  else {
    iVar10 = param_1;
    if (uVar11 == 0x14) {
      *(byte **)(param_2 + 8) = pbVar5 + 2;
      *(int *)(param_2 + 0xc) = iVar7 + -2;
      uVar11 = (uint)pbVar5[1];
      if ((*(uint *)(*(int *)(iVar12 + DAT_0003019c) + 4) & 1) != 0) {
        if (uVar11 == 0x10) {
          *(ushort *)(param_2 + 0x14) = (ushort)pbVar5[0x13];
          uVar4 = 1;
LAB_0002ff9c:
          *(undefined1 *)(param_2 + 0x13) = uVar4;
          *(int *)(param_2 + 0xc) = iVar7 + -3;
          FUN_000155b8();
          goto LAB_0002f7a8;
        }
        if (uVar11 < 0x11) {
          if (uVar11 == 0xf) {
            *(ushort *)(param_2 + 0x14) = (ushort)pbVar5[0x13];
            uVar4 = 0;
            goto LAB_0002ff9c;
          }
        }
        else {
          if (uVar11 == 0x12) {
            uVar15 = FUN_0002ee50(param_2);
            uVar16 = FUN_0002ee50((int)((ulonglong)uVar15 >> 0x20));
            uVar11 = (uint)uVar16 >> 8 & 0xff;
            uVar9 = FUN_0002ee50((int)(uVar16 >> 0x20));
            FUN_0002ef10(param_1);
            if ((uVar16 & 0xff) == 0 && uVar11 == 0) {
              iVar7 = DAT_00030314 + 0x30004;
            }
            else {
              iVar7 = DAT_00030320 + 0x30060;
            }
            printf((char *)(DAT_00030318 + 0x3000c),
                   ((uint)uVar15 & 0xff) << 8 | (uint)uVar15 >> 8 & 0xff,
                   (uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff,iVar7);
            if ((uVar16 & 0xff) != 0 || uVar11 != 0) goto LAB_0002f7a8;
            puVar3 = local_6c;
            FUN_0002ee78(*(undefined4 *)(param_2 + 8),puVar3);
            FUN_0002ef10(param_1 + 1,param_2);
            iVar7 = *(int *)(param_2 + 8);
            uVar8 = (uint)*(byte *)(iVar7 + 7);
            uVar9 = (uint)*(byte *)(iVar7 + 8);
            uVar11 = (uint)*(byte *)(iVar7 + 6);
            pcVar2 = (char *)(DAT_0003031c + 0x3004c);
            goto LAB_0002f8a4;
          }
          if (uVar11 == 0x7b) {
            FUN_0002ef10();
            puts((char *)(DAT_00030310 + 0x2ff8c));
            goto LAB_0002f7a8;
          }
        }
      }
      FUN_0002ef10(param_1,param_2);
      printf((char *)(DAT_0003030c + 0x2ff68),uVar11);
    }
    else {
      FUN_0002ef10();
      switch(uVar11) {
      case 0:
        iVar7 = DAT_0003036c + 0x30160;
        break;
      case 1:
        iVar7 = DAT_00030324 + 0x3006c;
        break;
      case 2:
        iVar7 = DAT_00030330 + 0x300ac;
        break;
      case 3:
        iVar7 = DAT_00030334 + 0x300b8;
        break;
      case 4:
        iVar7 = DAT_00030338 + 0x300c4;
        break;
      case 5:
        iVar7 = DAT_0003033c + 0x300d0;
        break;
      case 6:
        iVar7 = DAT_00030340 + 0x300dc;
        break;
      case 7:
        iVar7 = DAT_00030344 + 0x300e8;
        break;
      case 8:
        iVar7 = DAT_00030348 + 0x300f4;
        break;
      case 9:
        iVar7 = DAT_0003034c + 0x30100;
        break;
      case 10:
        iVar7 = DAT_00030350 + 0x3010c;
        break;
      case 0xb:
        iVar7 = DAT_00030354 + 0x30118;
        break;
      case 0xc:
        iVar7 = DAT_00030358 + 0x30124;
        break;
      case 0xd:
        iVar7 = DAT_0003035c + 0x30130;
        break;
      case 0xe:
        iVar7 = DAT_00030360 + 0x3013c;
        break;
      case 0xf:
        iVar7 = DAT_00030364 + 0x30148;
        break;
      default:
        iVar7 = DAT_00030368 + 0x30154;
      }
      uVar9 = bVar1 & 0xc0;
      if (uVar9 == 0x40) {
        iVar12 = DAT_00030370 + 0x3016c;
      }
      else if (uVar9 == 0x80) {
        iVar12 = DAT_00030374 + 0x30178;
      }
      else if ((bVar1 & 0xc0) == 0) {
        iVar12 = DAT_00030378 + 0x30184;
      }
      else {
        iVar12 = DAT_00030328 + 0x30090;
      }
      printf((char *)(DAT_0003032c + 0x3009c),iVar7,uVar11,iVar12);
    }
  }
LAB_0002f368:
  FUN_000149a8(iVar10,param_2);
LAB_0002f7a8:
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0003037c @ 0003037c size=460 ===== */

void FUN_0003037c(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  time_t local_5c;
  tm local_58;
  int local_2c;
  
  iVar6 = DAT_00030548 + 0x3039c;
  piVar9 = *(int **)(iVar6 + DAT_0003054c);
  local_2c = *piVar9;
  pbVar10 = *(byte **)(param_2 + 8);
  uVar4 = *(ushort *)(pbVar10 + 1);
  *(byte **)(param_2 + 8) = pbVar10 + 1;
  iVar8 = *(int *)(param_2 + 0xc);
  uVar5 = *(ushort *)(pbVar10 + 3);
  uVar13 = *(uint *)(pbVar10 + 6);
  *(int *)(param_2 + 0xc) = iVar8 + -1;
  bVar1 = *pbVar10;
  *(byte **)(param_2 + 8) = pbVar10 + 6;
  *(int *)(param_2 + 0xc) = iVar8 + -6;
  bVar2 = pbVar10[5];
  *(int *)(param_2 + 0xc) = iVar8 + -0xb;
  *(byte **)(param_2 + 8) = pbVar10 + 0xb;
  bVar3 = pbVar10[10];
  puVar12 = *(uint **)(iVar6 + DAT_00030550);
  uVar11 = DAT_00030550;
  if (param_1 < 0) {
    uVar11 = 0;
  }
  if (param_1 < 0) {
    puVar12[3] = uVar11;
  }
  else {
    if (puVar12[3] == 0) {
      if ((*puVar12 & 0x100) != 0) {
        if ((*puVar12 & 0x200) == 0) {
          printf((char *)(DAT_00030564 + 0x3052c),*(time_t *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x24));
        }
        else {
          local_5c = *(time_t *)(param_2 + 0x20);
          localtime_r(&local_5c,&local_58);
          printf((char *)(DAT_00030554 + 0x3048c),local_58.tm_year + 0x76c,local_58.tm_mon + 1,
                 local_58.tm_mday,local_58.tm_hour,local_58.tm_min,local_58.tm_sec,
                 *(undefined4 *)(param_2 + 0x24));
        }
      }
      if (*(char *)(param_2 + 0x12) == '\0') {
        uVar7 = 0x3c;
      }
      else {
        uVar7 = 0x3e;
      }
      printf((char *)(DAT_00030558 + 0x304a8),uVar7);
      puVar12[3] = 1;
    }
    else {
      printf((char *)(DAT_00030568 + 0x3053c));
    }
    if (param_1 != 0) {
      printf((char *)(DAT_0003055c + 0x304d4),param_1 * 2,0x20);
    }
  }
  printf((char *)(DAT_00030560 + 0x304f8),(uint)bVar1,(uVar4 & 0xff) << 8 | (uint)(uVar4 >> 8),
         (uint)uVar5,(uint)bVar2,
         uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
         uVar13 >> 0x18,(uint)bVar3);
  FUN_000149a8(param_1,param_2);
  if (local_2c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_0003056c @ 0003056c size=28 ===== */

void FUN_0003056c(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = param_2 + 6;
  puVar1 = (undefined1 *)(param_1 + -1);
  do {
    puVar2 = puVar2 + -1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
  } while (puVar2 != param_2);
  return;
}



/* ===== FUN_00030588 @ 00030588 size=76 ===== */

undefined4 FUN_00030588(byte *param_1,char *param_2)

{
  sprintf(param_2,(char *)(DAT_000305d4 + 0x305ac),(uint)param_1[5],(uint)param_1[4],
          (uint)param_1[3],(uint)param_1[2],(uint)param_1[1],(uint)*param_1);
  return 0x11;
}



/* ===== FUN_000305d8 @ 000305d8 size=52 ===== */

undefined4 FUN_000305d8(int param_1,char *param_2,undefined4 param_3)

{
  sprintf(param_2,(char *)(DAT_0003060c + 0x305f8),(uint)*(byte *)(param_1 + 5),
          (uint)*(byte *)(param_1 + 4),(uint)*(byte *)(param_1 + 3),param_2,param_3);
  return 8;
}



/* ===== <EXTERNAL>::malloc @ 0003086c size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00054f18)(__size);
  return pvVar1;
}



/* ===== FUN_00030870 @ 00030870 size=92 ===== */

char * FUN_00030870(byte *param_1)

{
  char *__s;
  
  __s = malloc(0x12);
  if (__s != (char *)0x0) {
    sprintf(__s,(char *)(DAT_000308cc + 0x308b0),(uint)*param_1,(uint)param_1[1],(uint)param_1[2],
            (uint)param_1[3],(uint)param_1[4],(uint)param_1[5]);
  }
  return __s;
}



/* ===== <EXTERNAL>::free @ 00030948 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00054fc0)(__ptr);
  return;
}



/* ===== FUN_00030970 @ 00030970 size=9000 ===== */

int FUN_00030970(int param_1)

{
  if (param_1 == 0xb2) {
    return DAT_000318dc + 0x31fa4;
  }
  if (0xb2 < param_1) {
    if (param_1 == 0x10b) {
      return DAT_00033034 + 0x32808;
    }
    if (0x10b < param_1) {
      if (param_1 == 0x138) {
        return DAT_00033198 + 0x32c34;
      }
      if (0x138 < param_1) {
        if (param_1 == 0x14e) {
          return DAT_0003324c + 0x32e50;
        }
        if (0x14e < param_1) {
          if (param_1 == 0x159) {
            return DAT_000332a4 + 0x32f58;
          }
          if (0x159 < param_1) {
            if (param_1 == 0x15f) {
              return DAT_000332d0 + 0x33350;
            }
            if (0x15f < param_1) {
              if (param_1 == 0x162) {
                return DAT_000332e8 + 0x33398;
              }
              if (0x162 < param_1) {
                if (param_1 == 0x163) {
                  return DAT_000332f4 + 0x333bc;
                }
                if (param_1 != 0xffff) {
                  return DAT_000318d8 + 0x31f98;
                }
                return DAT_000332f8 + 0x333c8;
              }
              if (param_1 == 0x160) {
                return DAT_000332ec + 0x333a4;
              }
              if (param_1 != 0x161) {
                return DAT_000318d4 + 0x31f74;
              }
              return DAT_000332f0 + 0x333b0;
            }
            if (param_1 == 0x15c) {
              return DAT_000332d4 + 0x3335c;
            }
            if (0x15c < param_1) {
              if (param_1 == 0x15d) {
                return DAT_000332e0 + 0x33380;
              }
              if (param_1 != 0x15e) {
                return DAT_000318d0 + 0x31f44;
              }
              return DAT_000332e4 + 0x3338c;
            }
            if (param_1 == 0x15a) {
              return DAT_000332d8 + 0x33368;
            }
            if (param_1 != 0x15b) {
              return DAT_000318cc + 0x31f20;
            }
            return DAT_000332dc + 0x33374;
          }
          if (param_1 == 0x153) {
            return DAT_000332a8 + 0x32f64;
          }
          if (0x153 < param_1) {
            if (param_1 == 0x156) {
              return DAT_000332bc + 0x33314;
            }
            if (0x156 < param_1) {
              if (param_1 == 0x157) {
                return DAT_000332c8 + 0x33338;
              }
              if (param_1 != 0x158) {
                return DAT_000318c8 + 0x31edc;
              }
              return DAT_000332cc + 0x33344;
            }
            if (param_1 == 0x154) {
              return DAT_000332c0 + 0x33320;
            }
            if (param_1 != 0x155) {
              return DAT_000318c4 + 0x31ebc;
            }
            return DAT_000332c4 + 0x3332c;
          }
          if (param_1 == 0x150) {
            return DAT_000332ac + 0x32f70;
          }
          if (param_1 < 0x150) {
            return DAT_000332b0 + 0x32f7c;
          }
          if (param_1 == 0x151) {
            return (int)&DAT_00032f88 + DAT_000332b4;
          }
          if (param_1 != 0x152) {
            return DAT_000318c0 + 0x31e8c;
          }
          return DAT_000332b8 + 0x33308;
        }
        if (param_1 == 0x143) {
          return DAT_00033250 + 0x32e5c;
        }
        if (0x143 < param_1) {
          if (param_1 == 0x148) {
            return DAT_0003327c + 0x32ee0;
          }
          if (0x148 < param_1) {
            if (param_1 == 0x14b) {
              return DAT_00033290 + 0x32f1c;
            }
            if (0x14b < param_1) {
              if (param_1 == 0x14c) {
                return DAT_0003329c + 0x32f40;
              }
              if (param_1 != 0x14d) {
                return DAT_000318bc + 0x31e38;
              }
              return DAT_000332a0 + 0x32f4c;
            }
            if (param_1 == 0x149) {
              return DAT_00033294 + 0x32f28;
            }
            if (param_1 != 0x14a) {
              return DAT_000318b8 + 0x31e1c;
            }
            return DAT_00033298 + 0x32f34;
          }
          if (param_1 == 0x145) {
            return DAT_00033280 + 0x32eec;
          }
          if (param_1 < 0x145) {
            return DAT_00033284 + 0x32ef8;
          }
          if (param_1 == 0x146) {
            return DAT_00033288 + 0x32f04;
          }
          if (param_1 != 0x147) {
            return DAT_000318b4 + 0x31de4;
          }
          return DAT_0003328c + 0x32f10;
        }
        if (param_1 == 0x13d) {
          return DAT_00033254 + 0x32e68;
        }
        if (0x13d < param_1) {
          if (param_1 == 0x140) {
            return DAT_00033268 + 0x32ea4;
          }
          if (0x140 < param_1) {
            if (param_1 == 0x141) {
              return DAT_00033274 + 0x32ec8;
            }
            if (param_1 != 0x142) {
              return DAT_000318b0 + 0x31da0;
            }
            return DAT_00033278 + 0x32ed4;
          }
          if (param_1 == 0x13e) {
            return DAT_0003326c + 0x32eb0;
          }
          if (param_1 != 0x13f) {
            return DAT_000318ac + 0x31d7c;
          }
          return DAT_00033270 + 0x32ebc;
        }
        if (param_1 == 0x13a) {
          return DAT_00033258 + 0x32e74;
        }
        if (param_1 < 0x13a) {
          return DAT_0003325c + 0x32e80;
        }
        if (param_1 == 0x13b) {
          return DAT_00033260 + 0x32e8c;
        }
        if (param_1 != 0x13c) {
          return DAT_000318a8 + 0x31d4c;
        }
        return DAT_00033264 + 0x32e98;
      }
      if (param_1 == 0x121) {
        return DAT_0003319c + 0x32c40;
      }
      if (0x121 < param_1) {
        if (param_1 == 300) {
          return DAT_000331f4 + 0x32d48;
        }
        if (300 < param_1) {
          if (param_1 == 0x132) {
            return DAT_00033220 + 0x32dcc;
          }
          if (0x132 < param_1) {
            if (param_1 == 0x135) {
              return DAT_00033238 + 0x32e14;
            }
            if (0x135 < param_1) {
              if (param_1 == 0x136) {
                return DAT_00033244 + 0x32e38;
              }
              if (param_1 != 0x137) {
                return DAT_000318a4 + 0x31ce8;
              }
              return DAT_00033248 + 0x32e44;
            }
            if (param_1 == 0x133) {
              return DAT_0003323c + 0x32e20;
            }
            if (param_1 != 0x134) {
              return DAT_000318a0 + 0x31cc4;
            }
            return DAT_00033240 + 0x32e2c;
          }
          if (param_1 == 0x12f) {
            return DAT_00033224 + 0x32dd8;
          }
          if (0x12f < param_1) {
            if (param_1 == 0x130) {
              return DAT_00033230 + 0x32dfc;
            }
            if (param_1 != 0x131) {
              return DAT_0003189c + 0x31c94;
            }
            return DAT_00033234 + 0x32e08;
          }
          if (param_1 == 0x12d) {
            return DAT_00033228 + 0x32de4;
          }
          if (param_1 != 0x12e) {
            return DAT_00031898 + 0x31c78;
          }
          return DAT_0003322c + 0x32df0;
        }
        if (param_1 == 0x126) {
          return DAT_000331f8 + 0x32d54;
        }
        if (0x126 < param_1) {
          if (param_1 == 0x129) {
            return DAT_0003320c + 0x32d90;
          }
          if (0x129 < param_1) {
            if (param_1 == 0x12a) {
              return DAT_00033218 + 0x32db4;
            }
            if (param_1 != 299) {
              return DAT_00031894 + 0x31c30;
            }
            return DAT_0003321c + 0x32dc0;
          }
          if (param_1 == 0x127) {
            return DAT_00033210 + 0x32d9c;
          }
          if (param_1 != 0x128) {
            return DAT_00031890 + 0x31c0c;
          }
          return DAT_00033214 + 0x32da8;
        }
        if (param_1 == 0x123) {
          return DAT_000331fc + 0x32d60;
        }
        if (param_1 < 0x123) {
          return DAT_00033200 + 0x32d6c;
        }
        if (param_1 == 0x124) {
          return DAT_00033204 + 0x32d78;
        }
        if (param_1 != 0x125) {
          return DAT_0003188c + 0x31bdc;
        }
        return DAT_00033208 + 0x32d84;
      }
      if (param_1 == 0x116) {
        return DAT_000331a0 + 0x32c4c;
      }
      if (0x116 < param_1) {
        if (param_1 == 0x11b) {
          return DAT_000331cc + 0x32cd0;
        }
        if (0x11b < param_1) {
          if (param_1 == 0x11e) {
            return DAT_000331e0 + 0x32d0c;
          }
          if (0x11e < param_1) {
            if (param_1 == 0x11f) {
              return DAT_000331ec + 0x32d30;
            }
            if (param_1 != 0x120) {
              return DAT_00031888 + 0x31b90;
            }
            return DAT_000331f0 + 0x32d3c;
          }
          if (param_1 == 0x11c) {
            return DAT_000331e4 + 0x32d18;
          }
          if (param_1 != 0x11d) {
            return DAT_00031884 + 0x31b70;
          }
          return DAT_000331e8 + 0x32d24;
        }
        if (param_1 == 0x118) {
          return DAT_000331d0 + 0x32cdc;
        }
        if (param_1 < 0x118) {
          return DAT_000331d4 + 0x32ce8;
        }
        if (param_1 == 0x119) {
          return DAT_000331d8 + 0x32cf4;
        }
        if (param_1 != 0x11a) {
          return DAT_00031880 + 0x31b40;
        }
        return DAT_000331dc + 0x32d00;
      }
      if (param_1 == 0x110) {
        return DAT_000331a4 + 0x32c58;
      }
      if (0x110 < param_1) {
        if (param_1 == 0x113) {
          return DAT_000331b8 + 0x32c94;
        }
        if (0x113 < param_1) {
          if (param_1 == 0x114) {
            return DAT_000331c4 + 0x32cb8;
          }
          if (param_1 != 0x115) {
            return (int)&DAT_00031740 + DAT_0003187c;
          }
          return DAT_000331c8 + 0x32cc4;
        }
        if (param_1 == 0x111) {
          return DAT_000331bc + 0x32ca0;
        }
        if (param_1 != 0x112) {
          return DAT_00031878 + 0x31724;
        }
        return DAT_000331c0 + 0x32cac;
      }
      if (param_1 == 0x10d) {
        return DAT_000331a8 + 0x32c64;
      }
      if (param_1 < 0x10d) {
        return DAT_000331ac + 0x32c70;
      }
      if (param_1 == 0x10e) {
        return DAT_000331b0 + 0x32c7c;
      }
      if (param_1 != 0x10f) {
        return DAT_00031874 + 0x316ec;
      }
      return DAT_000331b4 + 0x32c88;
    }
    if (param_1 == 0xde) {
      return DAT_00033038 + 0x32814;
    }
    if (0xde < param_1) {
      if (param_1 == 0xf4) {
        return DAT_000330e8 + 0x32a24;
      }
      if (0xf4 < param_1) {
        if (param_1 == 0xff) {
          return DAT_00033140 + 0x32b2c;
        }
        if (0xff < param_1) {
          if (param_1 == 0x105) {
            return DAT_0003316c + 0x32bb0;
          }
          if (0x105 < param_1) {
            if (param_1 == 0x108) {
              return DAT_00033184 + 0x32bf8;
            }
            if (0x108 < param_1) {
              if (param_1 == 0x109) {
                return DAT_00033190 + 0x32c1c;
              }
              if (param_1 != 0x10a) {
                return DAT_00031870 + 0x3167c;
              }
              return DAT_00033194 + 0x32c28;
            }
            if (param_1 == 0x106) {
              return DAT_00033188 + 0x32c04;
            }
            if (param_1 != 0x107) {
              return DAT_0003186c + 0x31658;
            }
            return DAT_0003318c + 0x32c10;
          }
          if (param_1 == 0x102) {
            return DAT_00033170 + 0x32bbc;
          }
          if (0x102 < param_1) {
            if (param_1 == 0x103) {
              return DAT_0003317c + 0x32be0;
            }
            if (param_1 != 0x104) {
              return DAT_00031868 + 0x31628;
            }
            return DAT_00033180 + 0x32bec;
          }
          if (param_1 == 0x100) {
            return DAT_00033174 + 0x32bc8;
          }
          if (param_1 != 0x101) {
            return DAT_00031864 + 0x31608;
          }
          return DAT_00033178 + 0x32bd4;
        }
        if (param_1 == 0xf9) {
          return DAT_00033144 + 0x32b38;
        }
        if (0xf9 < param_1) {
          if (param_1 == 0xfc) {
            return DAT_00033158 + 0x32b74;
          }
          if (0xfc < param_1) {
            if (param_1 == 0xfd) {
              return DAT_00033164 + 0x32b98;
            }
            if (param_1 != 0xfe) {
              return DAT_00031860 + 0x315c8;
            }
            return DAT_00033168 + 0x32ba4;
          }
          if (param_1 == 0xfa) {
            return DAT_0003315c + 0x32b80;
          }
          if (param_1 != 0xfb) {
            return DAT_0003185c + 0x315ac;
          }
          return DAT_00033160 + 0x32b8c;
        }
        if (param_1 == 0xf6) {
          return DAT_00033148 + 0x32b44;
        }
        if (param_1 < 0xf6) {
          return DAT_0003314c + 0x32b50;
        }
        if (param_1 == 0xf7) {
          return DAT_00033150 + 0x32b5c;
        }
        if (param_1 != 0xf8) {
          return DAT_00031858 + 0x31584;
        }
        return DAT_00033154 + 0x32b68;
      }
      if (param_1 == 0xe9) {
        return DAT_000330ec + 0x32a30;
      }
      if (0xe9 < param_1) {
        if (param_1 == 0xee) {
          return DAT_00033118 + 0x32ab4;
        }
        if (0xee < param_1) {
          if (param_1 == 0xf1) {
            return DAT_0003312c + 0x32af0;
          }
          if (0xf1 < param_1) {
            if (param_1 == 0xf2) {
              return DAT_00033138 + 0x32b14;
            }
            if (param_1 != 0xf3) {
              return DAT_00031854 + 0x31544;
            }
            return DAT_0003313c + 0x32b20;
          }
          if (param_1 == 0xef) {
            return DAT_00033130 + 0x32afc;
          }
          if (param_1 != 0xf0) {
            return DAT_00031850 + 0x31528;
          }
          return DAT_00033134 + 0x32b08;
        }
        if (param_1 == 0xeb) {
          return DAT_0003311c + 0x32ac0;
        }
        if (param_1 < 0xeb) {
          return DAT_00033120 + 0x32acc;
        }
        if (param_1 == 0xec) {
          return DAT_00033124 + 0x32ad8;
        }
        if (param_1 != 0xed) {
          return DAT_0003184c + 0x31500;
        }
        return DAT_00033128 + 0x32ae4;
      }
      if (param_1 == 0xe3) {
        return DAT_000330f0 + 0x32a3c;
      }
      if (0xe3 < param_1) {
        if (param_1 == 0xe6) {
          return DAT_00033104 + 0x32a78;
        }
        if (0xe6 < param_1) {
          if (param_1 == 0xe7) {
            return DAT_00033110 + 0x32a9c;
          }
          if (param_1 != 0xe8) {
            return DAT_00031848 + 0x314cc;
          }
          return DAT_00033114 + 0x32aa8;
        }
        if (param_1 == 0xe4) {
          return DAT_00033108 + 0x32a84;
        }
        if (param_1 != 0xe5) {
          return DAT_00031844 + 0x314b0;
        }
        return DAT_0003310c + 0x32a90;
      }
      if (param_1 == 0xe0) {
        return DAT_000330f4 + 0x32a48;
      }
      if (param_1 < 0xe0) {
        return DAT_000330f8 + 0x32a54;
      }
      if (param_1 == 0xe1) {
        return DAT_000330fc + 0x32a60;
      }
      if (param_1 != 0xe2) {
        return DAT_00031840 + 0x31488;
      }
      return DAT_00033100 + 0x32a6c;
    }
    if (param_1 == 200) {
      return DAT_0003303c + 0x32820;
    }
    if (200 < param_1) {
      if (param_1 == 0xd3) {
        return DAT_00033094 + 0x32928;
      }
      if (0xd3 < param_1) {
        if (param_1 == 0xd8) {
          return DAT_000330c0 + 0x329ac;
        }
        if (0xd8 < param_1) {
          if (param_1 == 0xdb) {
            return DAT_000330d4 + 0x329e8;
          }
          if (0xdb < param_1) {
            if (param_1 == 0xdc) {
              return DAT_000330e0 + 0x32a0c;
            }
            if (param_1 != 0xdd) {
              return DAT_0003183c + 0x3143c;
            }
            return DAT_000330e4 + 0x32a18;
          }
          if (param_1 == 0xd9) {
            return DAT_000330d8 + 0x329f4;
          }
          if (param_1 != 0xda) {
            return DAT_00031838 + 0x31420;
          }
          return DAT_000330dc + 0x32a00;
        }
        if (param_1 == 0xd5) {
          return DAT_000330c4 + 0x329b8;
        }
        if (param_1 < 0xd5) {
          return DAT_000330c8 + 0x329c4;
        }
        if (param_1 == 0xd6) {
          return DAT_000330cc + 0x329d0;
        }
        if (param_1 != 0xd7) {
          return DAT_00031834 + 0x313f8;
        }
        return DAT_000330d0 + 0x329dc;
      }
      if (param_1 == 0xcd) {
        return DAT_00033098 + 0x32934;
      }
      if (0xcd < param_1) {
        if (param_1 == 0xd0) {
          return DAT_000330ac + 0x32970;
        }
        if (0xd0 < param_1) {
          if (param_1 == 0xd1) {
            return DAT_000330b8 + 0x32994;
          }
          if (param_1 != 0xd2) {
            return DAT_00031830 + 0x313c4;
          }
          return DAT_000330bc + 0x329a0;
        }
        if (param_1 == 0xce) {
          return DAT_000330b0 + 0x3297c;
        }
        if (param_1 != 0xcf) {
          return DAT_0003182c + 0x313a8;
        }
        return DAT_000330b4 + 0x32988;
      }
      if (param_1 == 0xca) {
        return DAT_0003309c + 0x32940;
      }
      if (param_1 < 0xca) {
        return DAT_000330a0 + 0x3294c;
      }
      if (param_1 == 0xcb) {
        return DAT_000330a4 + 0x32958;
      }
      if (param_1 != 0xcc) {
        return DAT_00031828 + 0x31380;
      }
      return DAT_000330a8 + 0x32964;
    }
    if (param_1 == 0xbd) {
      return DAT_00033040 + 0x3282c;
    }
    if (0xbd < param_1) {
      if (param_1 == 0xc2) {
        return DAT_0003306c + 0x328b0;
      }
      if (0xc2 < param_1) {
        if (param_1 == 0xc5) {
          return DAT_00033080 + 0x328ec;
        }
        if (0xc5 < param_1) {
          if (param_1 == 0xc6) {
            return DAT_0003308c + 0x32910;
          }
          if (param_1 != 199) {
            return DAT_00031824 + 0x31340;
          }
          return DAT_00033090 + 0x3291c;
        }
        if (param_1 == 0xc3) {
          return DAT_00033084 + 0x328f8;
        }
        if (param_1 != 0xc4) {
          return DAT_00031820 + 0x31324;
        }
        return DAT_00033088 + 0x32904;
      }
      if (param_1 == 0xbf) {
        return DAT_00033070 + 0x328bc;
      }
      if (param_1 < 0xbf) {
        return DAT_00033074 + 0x328c8;
      }
      if (param_1 == 0xc0) {
        return DAT_00033078 + 0x328d4;
      }
      if (param_1 != 0xc1) {
        return DAT_0003181c + 0x312fc;
      }
      return DAT_0003307c + 0x328e0;
    }
    if (param_1 == 0xb7) {
      return DAT_00033044 + 0x32838;
    }
    if (0xb7 < param_1) {
      if (param_1 == 0xba) {
        return DAT_00033058 + 0x32874;
      }
      if (0xba < param_1) {
        if (param_1 == 0xbb) {
          return DAT_00033064 + 0x32898;
        }
        if (param_1 != 0xbc) {
          return DAT_00031818 + 0x312c8;
        }
        return DAT_00033068 + 0x328a4;
      }
      if (param_1 == 0xb8) {
        return DAT_0003305c + 0x32880;
      }
      if (param_1 != 0xb9) {
        return DAT_00031814 + 0x312ac;
      }
      return DAT_00033060 + 0x3288c;
    }
    if (param_1 == 0xb4) {
      return DAT_00033048 + 0x32844;
    }
    if (param_1 < 0xb4) {
      return DAT_0003304c + 0x32850;
    }
    if (param_1 == 0xb5) {
      return DAT_00033050 + 0x3285c;
    }
    if (param_1 != 0xb6) {
      return DAT_00031810 + 0x31284;
    }
    return DAT_00033054 + 0x32868;
  }
  if (param_1 == 0x58) {
    return DAT_000318e0 + 0x31fb0;
  }
  if (0x58 < param_1) {
    if (param_1 == 0x85) {
      return DAT_00031a44 + 0x323dc;
    }
    if (0x85 < param_1) {
      if (param_1 == 0x9b) {
        return DAT_00031af8 + 0x325f8;
      }
      if (0x9b < param_1) {
        if (param_1 == 0xa6) {
          return DAT_00032fdc + 0x32700;
        }
        if (0xa6 < param_1) {
          if (param_1 == 0xac) {
            return DAT_00033008 + 0x32784;
          }
          if (0xac < param_1) {
            if (param_1 == 0xaf) {
              return DAT_00033020 + 0x327cc;
            }
            if (0xaf < param_1) {
              if (param_1 == 0xb0) {
                return DAT_0003302c + 0x327f0;
              }
              if (param_1 != 0xb1) {
                return DAT_0003180c + 0x31218;
              }
              return DAT_00033030 + 0x327fc;
            }
            if (param_1 == 0xad) {
              return DAT_00033024 + 0x327d8;
            }
            if (param_1 != 0xae) {
              return DAT_00031808 + 0x311fc;
            }
            return DAT_00033028 + 0x327e4;
          }
          if (param_1 == 0xa9) {
            return DAT_0003300c + 0x32790;
          }
          if (0xa9 < param_1) {
            if (param_1 == 0xaa) {
              return DAT_00033018 + 0x327b4;
            }
            if (param_1 != 0xab) {
              return DAT_00031804 + 0x311d4;
            }
            return DAT_0003301c + 0x327c0;
          }
          if (param_1 == 0xa7) {
            return DAT_00033010 + 0x3279c;
          }
          if (param_1 != 0xa8) {
            return DAT_00031800 + 0x311b8;
          }
          return DAT_00033014 + 0x327a8;
        }
        if (param_1 == 0xa0) {
          return DAT_00032fe0 + 0x3270c;
        }
        if (0xa0 < param_1) {
          if (param_1 == 0xa3) {
            return DAT_00032ff4 + 0x32748;
          }
          if (0xa3 < param_1) {
            if (param_1 == 0xa4) {
              return DAT_00033000 + 0x3276c;
            }
            if (param_1 != 0xa5) {
              return DAT_000317fc + 0x31184;
            }
            return DAT_00033004 + 0x32778;
          }
          if (param_1 == 0xa1) {
            return DAT_00032ff8 + 0x32754;
          }
          if (param_1 != 0xa2) {
            return DAT_000317f8 + 0x31168;
          }
          return DAT_00032ffc + 0x32760;
        }
        if (param_1 == 0x9d) {
          return DAT_00032fe4 + 0x32718;
        }
        if (param_1 < 0x9d) {
          return DAT_00032fe8 + 0x32724;
        }
        if (param_1 == 0x9e) {
          return DAT_00032fec + 0x32730;
        }
        if (param_1 != 0x9f) {
          return DAT_000317f4 + 0x31140;
        }
        return DAT_00032ff0 + 0x3273c;
      }
      if (param_1 == 0x90) {
        return DAT_00032f88 + 0x32604;
      }
      if (0x90 < param_1) {
        if (param_1 == 0x95) {
          return DAT_00032fb4 + 0x32688;
        }
        if (0x95 < param_1) {
          if (param_1 == 0x98) {
            return DAT_00032fc8 + 0x326c4;
          }
          if (0x98 < param_1) {
            if (param_1 == 0x99) {
              return DAT_00032fd4 + 0x326e8;
            }
            if (param_1 != 0x9a) {
              return DAT_000317f0 + 0x31100;
            }
            return DAT_00032fd8 + 0x326f4;
          }
          if (param_1 == 0x96) {
            return DAT_00032fcc + 0x326d0;
          }
          if (param_1 != 0x97) {
            return DAT_000317ec + 0x310e4;
          }
          return DAT_00032fd0 + 0x326dc;
        }
        if (param_1 == 0x92) {
          return DAT_00032fb8 + 0x32694;
        }
        if (param_1 < 0x92) {
          return DAT_00032fbc + 0x326a0;
        }
        if (param_1 == 0x93) {
          return DAT_00032fc0 + 0x326ac;
        }
        if (param_1 != 0x94) {
          return DAT_000317e8 + 0x310bc;
        }
        return DAT_00032fc4 + 0x326b8;
      }
      if (param_1 == 0x8a) {
        return DAT_00032f8c + 0x32610;
      }
      if (0x8a < param_1) {
        if (param_1 == 0x8d) {
          return DAT_00032fa0 + 0x3264c;
        }
        if (0x8d < param_1) {
          if (param_1 == 0x8e) {
            return DAT_00032fac + 0x32670;
          }
          if (param_1 != 0x8f) {
            return DAT_000317e4 + 0x31088;
          }
          return DAT_00032fb0 + 0x3267c;
        }
        if (param_1 == 0x8b) {
          return DAT_00032fa4 + 0x32658;
        }
        if (param_1 != 0x8c) {
          return DAT_000317e0 + 0x3106c;
        }
        return DAT_00032fa8 + 0x32664;
      }
      if (param_1 == 0x87) {
        return DAT_00032f90 + 0x3261c;
      }
      if (param_1 < 0x87) {
        return DAT_00032f94 + 0x32628;
      }
      if (param_1 == 0x88) {
        return DAT_00032f98 + 0x32634;
      }
      if (param_1 != 0x89) {
        return DAT_000317dc + 0x31044;
      }
      return DAT_00032f9c + 0x32640;
    }
    if (param_1 == 0x6e) {
      return DAT_00031a48 + 0x323e8;
    }
    if (0x6e < param_1) {
      if (param_1 == 0x79) {
        return DAT_00031aa0 + 0x324f0;
      }
      if (0x79 < param_1) {
        if (param_1 == 0x7f) {
          return DAT_00031acc + 0x32574;
        }
        if (0x7f < param_1) {
          if (param_1 == 0x82) {
            return DAT_00031ae4 + 0x325bc;
          }
          if (0x82 < param_1) {
            if (param_1 == 0x83) {
              return DAT_00031af0 + 0x325e0;
            }
            if (param_1 != 0x84) {
              return DAT_000317d8 + 0x30ff8;
            }
            return DAT_00031af4 + 0x325ec;
          }
          if (param_1 == 0x80) {
            return DAT_00031ae8 + 0x325c8;
          }
          if (param_1 != 0x81) {
            return DAT_000317d4 + 0x30fdc;
          }
          return DAT_00031aec + 0x325d4;
        }
        if (param_1 == 0x7c) {
          return DAT_00031ad0 + 0x32580;
        }
        if (0x7c < param_1) {
          if (param_1 == 0x7d) {
            return DAT_00031adc + 0x325a4;
          }
          if (param_1 != 0x7e) {
            return DAT_000317d0 + 0x30fb4;
          }
          return DAT_00031ae0 + 0x325b0;
        }
        if (param_1 == 0x7a) {
          return DAT_00031ad4 + 0x3258c;
        }
        if (param_1 != 0x7b) {
          return DAT_000317cc + 0x30f98;
        }
        return DAT_00031ad8 + 0x32598;
      }
      if (param_1 == 0x73) {
        return DAT_00031aa4 + 0x324fc;
      }
      if (0x73 < param_1) {
        if (param_1 == 0x76) {
          return DAT_00031ab8 + 0x32538;
        }
        if (0x76 < param_1) {
          if (param_1 == 0x77) {
            return DAT_00031ac4 + 0x3255c;
          }
          if (param_1 != 0x78) {
            return DAT_000317c8 + 0x30f64;
          }
          return DAT_00031ac8 + 0x32568;
        }
        if (param_1 == 0x74) {
          return DAT_00031abc + 0x32544;
        }
        if (param_1 != 0x75) {
          return DAT_000317c4 + 0x30f48;
        }
        return DAT_00031ac0 + 0x32550;
      }
      if (param_1 == 0x70) {
        return DAT_00031aa8 + 0x32508;
      }
      if (param_1 < 0x70) {
        return DAT_00031aac + 0x32514;
      }
      if (param_1 == 0x71) {
        return DAT_00031ab0 + 0x32520;
      }
      if (param_1 != 0x72) {
        return DAT_000317c0 + 0x30f20;
      }
      return DAT_00031ab4 + 0x3252c;
    }
    if (param_1 == 99) {
      return DAT_00031a4c + 0x323f4;
    }
    if (99 < param_1) {
      if (param_1 == 0x68) {
        return DAT_00031a78 + 0x32478;
      }
      if (0x68 < param_1) {
        if (param_1 == 0x6b) {
          return DAT_00031a8c + 0x324b4;
        }
        if (0x6b < param_1) {
          if (param_1 == 0x6c) {
            return DAT_00031a98 + 0x324d8;
          }
          if (param_1 != 0x6d) {
            return DAT_000317bc + 0x30ee0;
          }
          return DAT_00031a9c + 0x324e4;
        }
        if (param_1 == 0x69) {
          return DAT_00031a90 + 0x324c0;
        }
        if (param_1 != 0x6a) {
          return DAT_000317b8 + 0x30ec4;
        }
        return DAT_00031a94 + 0x324cc;
      }
      if (param_1 == 0x65) {
        return DAT_00031a7c + 0x32484;
      }
      if (param_1 < 0x65) {
        return DAT_00031a80 + 0x32490;
      }
      if (param_1 == 0x66) {
        return DAT_00031a84 + 0x3249c;
      }
      if (param_1 != 0x67) {
        return DAT_000317b4 + 0x30e9c;
      }
      return DAT_00031a88 + 0x324a8;
    }
    if (param_1 == 0x5d) {
      return DAT_00031a50 + 0x32400;
    }
    if (0x5d < param_1) {
      if (param_1 == 0x60) {
        return DAT_00031a64 + 0x3243c;
      }
      if (0x60 < param_1) {
        if (param_1 == 0x61) {
          return DAT_00031a70 + 0x32460;
        }
        if (param_1 != 0x62) {
          return DAT_000317b0 + 0x30e68;
        }
        return DAT_00031a74 + 0x3246c;
      }
      if (param_1 == 0x5e) {
        return DAT_00031a68 + 0x32448;
      }
      if (param_1 != 0x5f) {
        return DAT_000317ac + 0x30e4c;
      }
      return DAT_00031a6c + 0x32454;
    }
    if (param_1 == 0x5a) {
      return DAT_00031a54 + 0x3240c;
    }
    if (param_1 < 0x5a) {
      return DAT_00031a58 + 0x32418;
    }
    if (param_1 == 0x5b) {
      return DAT_00031a5c + 0x32424;
    }
    if (param_1 != 0x5c) {
      return DAT_000317a8 + 0x30e24;
    }
    return DAT_00031a60 + 0x32430;
  }
  if (param_1 == 0x2b) {
    return DAT_000318e4 + 0x31fbc;
  }
  if (0x2b < param_1) {
    if (param_1 == 0x41) {
      return DAT_00031994 + 0x321cc;
    }
    if (0x41 < param_1) {
      if (param_1 == 0x4c) {
        return DAT_000319ec + 0x322d4;
      }
      if (0x4c < param_1) {
        if (param_1 == 0x52) {
          return DAT_00031a18 + 0x32358;
        }
        if (0x52 < param_1) {
          if (param_1 == 0x55) {
            return DAT_00031a30 + 0x323a0;
          }
          if (0x55 < param_1) {
            if (param_1 == 0x56) {
              return DAT_00031a3c + 0x323c4;
            }
            if (param_1 != 0x57) {
              return DAT_000317a4 + 0x30dcc;
            }
            return DAT_00031a40 + 0x323d0;
          }
          if (param_1 == 0x53) {
            return DAT_00031a34 + 0x323ac;
          }
          if (param_1 != 0x54) {
            return DAT_000317a0 + 0x30db0;
          }
          return DAT_00031a38 + 0x323b8;
        }
        if (param_1 == 0x4f) {
          return DAT_00031a1c + 0x32364;
        }
        if (0x4f < param_1) {
          if (param_1 == 0x50) {
            return DAT_00031a28 + 0x32388;
          }
          if (param_1 != 0x51) {
            return DAT_0003179c + 0x30d88;
          }
          return DAT_00031a2c + 0x32394;
        }
        if (param_1 == 0x4d) {
          return DAT_00031a20 + 0x32370;
        }
        if (param_1 != 0x4e) {
          return DAT_00031798 + 0x30d6c;
        }
        return DAT_00031a24 + 0x3237c;
      }
      if (param_1 == 0x46) {
        return DAT_000319f0 + 0x322e0;
      }
      if (0x46 < param_1) {
        if (param_1 == 0x49) {
          return DAT_00031a04 + 0x3231c;
        }
        if (0x49 < param_1) {
          if (param_1 == 0x4a) {
            return DAT_00031a10 + 0x32340;
          }
          if (param_1 != 0x4b) {
            return DAT_00031794 + 0x30d38;
          }
          return DAT_00031a14 + 0x3234c;
        }
        if (param_1 == 0x47) {
          return DAT_00031a08 + 0x32328;
        }
        if (param_1 != 0x48) {
          return DAT_00031790 + 0x30d1c;
        }
        return DAT_00031a0c + 0x32334;
      }
      if (param_1 == 0x43) {
        return DAT_000319f4 + 0x322ec;
      }
      if (param_1 < 0x43) {
        return DAT_000319f8 + 0x322f8;
      }
      if (param_1 == 0x44) {
        return DAT_000319fc + 0x32304;
      }
      if (param_1 != 0x45) {
        return DAT_0003178c + 0x30cf4;
      }
      return DAT_00031a00 + 0x32310;
    }
    if (param_1 == 0x36) {
      return DAT_00031998 + 0x321d8;
    }
    if (0x36 < param_1) {
      if (param_1 == 0x3b) {
        return DAT_000319c4 + 0x3225c;
      }
      if (0x3b < param_1) {
        if (param_1 == 0x3e) {
          return DAT_000319d8 + 0x32298;
        }
        if (0x3e < param_1) {
          if (param_1 == 0x3f) {
            return DAT_000319e4 + 0x322bc;
          }
          if (param_1 != 0x40) {
            return DAT_00031788 + 0x30cb4;
          }
          return DAT_000319e8 + 0x322c8;
        }
        if (param_1 == 0x3c) {
          return DAT_000319dc + 0x322a4;
        }
        if (param_1 != 0x3d) {
          return DAT_00031784 + 0x30c98;
        }
        return DAT_000319e0 + 0x322b0;
      }
      if (param_1 == 0x38) {
        return DAT_000319c8 + 0x32268;
      }
      if (param_1 < 0x38) {
        return DAT_000319cc + 0x32274;
      }
      if (param_1 == 0x39) {
        return DAT_000319d0 + 0x32280;
      }
      if (param_1 != 0x3a) {
        return DAT_00031780 + 0x30c70;
      }
      return DAT_000319d4 + 0x3228c;
    }
    if (param_1 == 0x30) {
      return DAT_0003199c + 0x321e4;
    }
    if (0x30 < param_1) {
      if (param_1 == 0x33) {
        return DAT_000319b0 + 0x32220;
      }
      if (0x33 < param_1) {
        if (param_1 == 0x34) {
          return DAT_000319bc + 0x32244;
        }
        if (param_1 != 0x35) {
          return DAT_0003177c + 0x30c3c;
        }
        return DAT_000319c0 + 0x32250;
      }
      if (param_1 == 0x31) {
        return DAT_000319b4 + 0x3222c;
      }
      if (param_1 != 0x32) {
        return DAT_00031778 + 0x30c20;
      }
      return DAT_000319b8 + 0x32238;
    }
    if (param_1 == 0x2d) {
      return DAT_000319a0 + 0x321f0;
    }
    if (param_1 < 0x2d) {
      return DAT_000319a4 + 0x321fc;
    }
    if (param_1 == 0x2e) {
      return DAT_000319a8 + 0x32208;
    }
    if (param_1 != 0x2f) {
      return DAT_00031774 + 0x30bf8;
    }
    return DAT_000319ac + 0x32214;
  }
  if (param_1 == 0x15) {
    return DAT_000318e8 + 0x31fc8;
  }
  if (0x15 < param_1) {
    if (param_1 == 0x20) {
      return DAT_00031940 + 0x320d0;
    }
    if (0x20 < param_1) {
      if (param_1 == 0x25) {
        return DAT_0003196c + 0x32154;
      }
      if (0x25 < param_1) {
        if (param_1 == 0x28) {
          return DAT_00031980 + 0x32190;
        }
        if (0x28 < param_1) {
          if (param_1 == 0x29) {
            return DAT_0003198c + 0x321b4;
          }
          if (param_1 != 0x2a) {
            return DAT_00031770 + 0x30bac;
          }
          return DAT_00031990 + 0x321c0;
        }
        if (param_1 == 0x26) {
          return DAT_00031984 + 0x3219c;
        }
        if (param_1 != 0x27) {
          return DAT_0003176c + 0x30b90;
        }
        return DAT_00031988 + 0x321a8;
      }
      if (param_1 == 0x22) {
        return DAT_00031970 + 0x32160;
      }
      if (param_1 < 0x22) {
        return DAT_00031974 + 0x3216c;
      }
      if (param_1 == 0x23) {
        return DAT_00031978 + 0x32178;
      }
      if (param_1 != 0x24) {
        return DAT_00031768 + 0x30b68;
      }
      return DAT_0003197c + 0x32184;
    }
    if (param_1 == 0x1a) {
      return DAT_00031944 + 0x320dc;
    }
    if (0x1a < param_1) {
      if (param_1 == 0x1d) {
        return DAT_00031958 + 0x32118;
      }
      if (0x1d < param_1) {
        if (param_1 == 0x1e) {
          return DAT_00031964 + 0x3213c;
        }
        if (param_1 != 0x1f) {
          return DAT_00031764 + 0x30b34;
        }
        return DAT_00031968 + 0x32148;
      }
      if (param_1 == 0x1b) {
        return DAT_0003195c + 0x32124;
      }
      if (param_1 != 0x1c) {
        return DAT_00031760 + 0x30b18;
      }
      return DAT_00031960 + 0x32130;
    }
    if (param_1 == 0x17) {
      return DAT_00031948 + 0x320e8;
    }
    if (param_1 < 0x17) {
      return DAT_0003194c + 0x320f4;
    }
    if (param_1 == 0x18) {
      return DAT_00031950 + 0x32100;
    }
    if (param_1 != 0x19) {
      return DAT_0003175c + 0x30af0;
    }
    return DAT_00031954 + 0x3210c;
  }
  if (param_1 == 10) {
    return DAT_000318ec + 0x31fd4;
  }
  if (10 < param_1) {
    if (param_1 == 0xf) {
      return DAT_00031918 + 0x32058;
    }
    if (0xf < param_1) {
      if (param_1 == 0x12) {
        return DAT_0003192c + 0x32094;
      }
      if (0x12 < param_1) {
        if (param_1 == 0x13) {
          return DAT_00031938 + 0x320b8;
        }
        if (param_1 != 0x14) {
          return DAT_00031758 + 0x30ab0;
        }
        return DAT_0003193c + 0x320c4;
      }
      if (param_1 == 0x10) {
        return DAT_00031930 + 0x320a0;
      }
      if (param_1 != 0x11) {
        return DAT_00031754 + 0x30a94;
      }
      return DAT_00031934 + 0x320ac;
    }
    if (param_1 == 0xc) {
      return DAT_0003191c + 0x32064;
    }
    if (param_1 < 0xc) {
      return DAT_00031920 + 0x32070;
    }
    if (param_1 == 0xd) {
      return DAT_00031924 + 0x3207c;
    }
    if (param_1 != 0xe) {
      return DAT_00031750 + 0x30a6c;
    }
    return DAT_00031928 + 0x32088;
  }
  if (param_1 == 4) {
    return DAT_000318f0 + 0x31fe0;
  }
  if (4 < param_1) {
    if (param_1 == 7) {
      return DAT_00031904 + 0x3201c;
    }
    if (7 < param_1) {
      if (param_1 == 8) {
        return DAT_00031910 + 0x32040;
      }
      if (param_1 != 9) {
        return DAT_0003174c + 0x30a38;
      }
      return DAT_00031914 + 0x3204c;
    }
    if (param_1 == 5) {
      return DAT_00031908 + 0x32028;
    }
    if (param_1 != 6) {
      return DAT_00031748 + 0x30a1c;
    }
    return DAT_0003190c + 0x32034;
  }
  if (param_1 == 1) {
    return DAT_000318f4 + 0x31fec;
  }
  if (param_1 < 2) {
    if (param_1 != 0) {
      return DAT_00031740 + 0x309d8;
    }
    return DAT_000318f8 + 0x31ff8;
  }
  if (param_1 == 2) {
    return DAT_000318fc + 0x32004;
  }
  if (param_1 != 3) {
    return DAT_00031744 + 0x309f4;
  }
  return DAT_00031900 + 0x32010;
}



/* ===== FUN_0003392c @ 0003392c size=128 ===== */

char * FUN_0003392c(uint param_1)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *__s;
  char *__format;
  
  piVar4 = (int *)(&UNK_0003398c + DAT_00033940);
  pcVar2 = malloc(0x78);
  if (pcVar2 != (char *)0x0) {
    __format = (char *)(DAT_00033434 + 0x333fc);
    *pcVar2 = '\0';
    __s = pcVar2;
    while (piVar5 = piVar4 + 2, *piVar4 != 0) {
      puVar1 = (uint *)(piVar4 + 1);
      piVar4 = piVar5;
      if ((param_1 & *puVar1) != 0) {
        iVar3 = sprintf(__s,__format);
        __s = __s + iVar3;
      }
    }
  }
  return pcVar2;
}



/* ===== FUN_00033994 @ 00033994 size=20 ===== */

char * FUN_00033994(uint param_1)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *__s;
  char *__format;
  
  piVar4 = (int *)(&UNK_00033acc + DAT_000339a8);
  pcVar2 = malloc(0x78);
  if (pcVar2 != (char *)0x0) {
    __format = (char *)(DAT_00033434 + 0x333fc);
    *pcVar2 = '\0';
    __s = pcVar2;
    while (piVar5 = piVar4 + 2, *piVar4 != 0) {
      puVar1 = (uint *)(piVar4 + 1);
      piVar4 = piVar5;
      if ((param_1 & *puVar1) != 0) {
        iVar3 = sprintf(__s,__format);
        __s = __s + iVar3;
      }
    }
  }
  return pcVar2;
}



/* ===== FUN_00033c08 @ 00033c08 size=116 ===== */

char * FUN_00033c08(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char *__dest;
  undefined *puVar4;
  char *pcVar5;
  
  iVar3 = DAT_00033c20;
  __dest = malloc(0x32);
  pcVar5 = (char *)0x0;
  if (__dest != (char *)0x0) {
    puVar4 = &UNK_00034508 + iVar3;
    *__dest = '\0';
    do {
      puVar1 = (undefined4 *)(puVar4 + -8);
      if ((char *)*puVar1 == (char *)0x0) {
        return __dest;
      }
      piVar2 = (int *)(puVar4 + -4);
      puVar4 = puVar4 + 8;
    } while (*piVar2 != param_1);
    pcVar5 = strcpy(__dest,(char *)*puVar1);
  }
  return pcVar5;
}



/* ===== thunk_FUN_00033c08 @ 00033c48 size=4 ===== */

char * thunk_FUN_00033c08(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char *__dest;
  undefined *puVar4;
  char *pcVar5;
  
  iVar3 = DAT_00033c20;
  __dest = malloc(0x32);
  pcVar5 = (char *)0x0;
  if (__dest != (char *)0x0) {
    puVar4 = &UNK_00034508 + iVar3;
    *__dest = '\0';
    do {
      puVar1 = (undefined4 *)(puVar4 + -8);
      if ((char *)*puVar1 == (char *)0x0) {
        return __dest;
      }
      piVar2 = (int *)(puVar4 + -4);
      puVar4 = puVar4 + 8;
    } while (*piVar2 != param_1);
    pcVar5 = strcpy(__dest,(char *)*puVar1);
  }
  return pcVar5;
}



/* ===== FUN_00037494 @ 00037494 size=76 ===== */

void FUN_00037494(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_4 != 0 || param_3 != 0) {
    FUN_000374e0();
    return;
  }
  raise(8);
  return;
}



/* ===== FUN_000374e0 @ 000374e0 size=328 ===== */

undefined8 FUN_000374e0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

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



/* ===== _DT_FINI @ 00037628 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00059000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00059004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00059008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::writev @ 0005900c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00059010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00059018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 0005901c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00059020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0005902c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00059030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00059034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00059038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0005903c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00059044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00059048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 0005904c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00059050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00059054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getnameinfo @ 00059058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getnameinfo(sockaddr *__sa,socklen_t __salen,char *__host,socklen_t __hostlen,char *__serv,
               socklen_t __servlen,uint __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0005905c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00059060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00059064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 00059068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vprintf @ 0005906c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00059070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 00059074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00059078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memchr @ 00059080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00059084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00059088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cmsg_nxthdr @ 0005908c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

cmsghdr * __cmsg_nxthdr(msghdr *__mhdr,cmsghdr *__cmsg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00059090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 00059094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 00059098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 0005909c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 000590a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 000590a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000590a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 000590ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 000590b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000590b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsep @ 000590bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockopt @ 000590c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::localtime_r @ 000590c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000590c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000590cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000590d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fileno @ 000590d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fileno(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000590d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::lseek64 @ 000590dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 000590e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recvmsg @ 000590e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvmsg(int __fd,msghdr *__message,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000590e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000590ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 000590f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::raise @ 000590f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000590f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


