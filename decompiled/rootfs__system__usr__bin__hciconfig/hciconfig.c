// hciconfig — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 000128f4 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00012918 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_00042ef8)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00012924 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00042efc)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::ioctl @ 00012930 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00042f00)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::writev @ 0001293c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_writev_00042f04)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::printf @ 00012948 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00042f08)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00012954 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00042f0c)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 00012960 size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_00042f10)();
  return;
}



/* ===== <EXTERNAL>::snprintf @ 0001296c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00042f14)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00012984 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00042f1c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::perror @ 00012990 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00042f20)(__s);
  return;
}



/* ===== <EXTERNAL>::puts @ 0001299c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00042f24)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000129a8 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00042f28)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 000129b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00042f2c)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::vsnprintf @ 000129c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00042f30)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strtoul @ 000129cc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = (*(code *)PTR_strtoul_00042f34)(__nptr);
  return uVar1;
}



/* ===== <EXTERNAL>::socket @ 000129d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00042f38)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 000129e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00042f3c)();
  return;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000129f0 size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00042f40)();
  return;
}



/* ===== <EXTERNAL>::fstat64 @ 000129fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat64_00042f44)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strtol @ 00012a08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00042f48)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00012a14 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00042f4c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 00012a20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00042f50)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::bind @ 00012a2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00042f54)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vprintf @ 00012a38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vprintf_00042f58)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00012a44 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00042f5c)();
  return;
}



/* ===== <EXTERNAL>::setsockopt @ 00012a50 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_00042f60)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 00012a5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00042f64)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00012a68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00042f68)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00012a74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00042f6c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcasecmp @ 00012a80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcasecmp_00042f70)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memcmp @ 00012a8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00042f74)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sscanf @ 00012a98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00042f78)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strncat @ 00012aa4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncat_00042f7c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::strdup @ 00012abc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_00042f84)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::memset @ 00012ac8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00042f88)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::poll @ 00012ae0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_00042f90)(__fds);
  return iVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00012aec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00042f94)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00012af8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00042f98)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::mmap64 @ 00012b04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap64_00042f9c)(__addr);
  return pvVar1;
}



/* ===== <EXTERNAL>::strsep @ 00012b10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strsep_00042fa0)(__stringp);
  return pcVar1;
}



/* ===== <EXTERNAL>::getsockopt @ 00012b1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockopt_00042fa4)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00012b28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00042fa8)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 00012b34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00042fac)(__status);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00012b40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00042fb0)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strlen @ 00012b4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00042fb4)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strchr @ 00012b58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00042fb8)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012b64 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00042fbc)();
  return;
}



/* ===== <EXTERNAL>::close @ 00012b70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00042fc0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::vfprintf @ 00012b7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_00042fc4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00012b94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00042fcc)(__ptr);
  return;
}



/* ===== FUN_00012ba0 @ 00012ba0 size=760 ===== */

undefined4 FUN_00012ba0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  ushort *puVar8;
  size_t __n;
  int *piVar9;
  char *__s;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  int iVar18;
  char *__s2;
  bool bVar19;
  
  iVar6 = DAT_00012ea0;
  iVar15 = DAT_00012e98 + 0x12bc8;
  iVar12 = DAT_00012e9c + 0x12bcc;
  iVar18 = DAT_00012ea4 + 0x12bd4;
LAB_00012bd0:
  iVar10 = 0;
  iVar5 = getopt_long(param_1,param_2,iVar12,iVar15,0);
  iVar17 = DAT_00012eb8;
  iVar11 = DAT_00012eb4;
  if (iVar5 != -1) {
    if (iVar5 == 0x61) goto code_r0x00012c3c;
    puts((char *)(DAT_00012eb0 + 0x12c54));
    iVar6 = DAT_00012ec0;
    puts((char *)(DAT_00012ebc + 0x12c68));
    piVar9 = (int *)(iVar11 + 0x12ce4);
    puts((char *)(DAT_00012ec4 + 0x12c80));
    while (iVar12 = *piVar9, iVar12 != 0) {
      piVar1 = piVar9 + 2;
      piVar2 = piVar9 + 3;
      piVar9 = piVar9 + 4;
      iVar15 = *piVar1;
      if (*piVar1 == 0) {
        iVar15 = iVar17 + 0x12c7c;
      }
      printf((char *)(iVar6 + 0x12c84),iVar12,iVar15,*piVar2);
    }
    goto LAB_00012c90;
  }
  piVar9 = *(int **)(iVar18 + DAT_00012ea8);
  iVar12 = *piVar9;
  *piVar9 = 0;
  iVar6 = socket(0x1f,3,1);
  if (iVar6 < 0) {
    pcVar7 = (char *)(DAT_00012eac + 0x12c2c);
  }
  else if (param_1 - iVar12 < 1) {
    puVar8 = malloc(0x82);
    uVar4 = DAT_00012ecc;
    if (puVar8 == (ushort *)0x0) {
      pcVar7 = (char *)(DAT_00012ec8 + 0x12cd8);
    }
    else {
      *puVar8 = 0x10;
      iVar12 = ioctl(iVar6,uVar4,puVar8);
      uVar4 = DAT_00012ed8;
      if (-1 < iVar12) {
        puVar16 = (ushort *)(DAT_00012ed4 + 0x12d58);
        for (; iVar10 < (int)(uint)*puVar8; iVar10 = iVar10 + 1) {
          *puVar16 = puVar8[iVar10 * 4 + 2];
          iVar12 = ioctl(iVar6,uVar4,puVar16);
          if (-1 < iVar12) {
            FUN_00017604(iVar6);
          }
        }
LAB_00012c90:
        iVar6 = 0;
        goto LAB_00012c94;
      }
      pcVar7 = (char *)(DAT_00012ed0 + 0x12d04);
    }
  }
  else {
    iVar15 = atoi((char *)(*(int *)(param_2 + iVar12 * 4) + 3));
    uVar4 = DAT_00012ed8;
    *(short *)(DAT_00012edc + 0x12d80) = (short)iVar15;
    iVar11 = ioctl(iVar6,uVar4);
    iVar15 = DAT_00012ef0;
    if (iVar11 == 0) {
      pcVar7 = (char *)(DAT_00012ef4 + 0x12e70);
      bVar3 = false;
      puVar14 = (undefined4 *)(param_2 + iVar12 * 4);
      iVar12 = param_1 - iVar12;
LAB_00012e40:
      do {
        iVar11 = iVar12 + -1;
        puVar13 = puVar14 + 1;
        if (iVar11 < 1) {
          if (!bVar3) {
            FUN_00017604(iVar6);
          }
          close(iVar6);
          return 0;
        }
        __s2 = (char *)*puVar13;
        iVar17 = 0;
        while (__s = *(char **)((int)&DAT_00012ed8 + iVar17 * 0x10 + iVar15), __s != (char *)0x0) {
          __n = strlen(__s);
          iVar5 = strncmp(__s,__s2,__n);
          if (iVar5 == 0) {
            bVar3 = true;
            bVar19 = *(int *)((int)&DAT_00012ee0 + iVar15 + iVar17 * 0x10) != 0;
            if (bVar19) {
              puVar13 = puVar14 + 2;
            }
            if (bVar19) {
              iVar11 = iVar12 + -2;
            }
            (**(code **)((int)&DAT_00012ea8 + DAT_00012eec + iVar17 * 0x10))
                      (iVar6,*(undefined2 *)(DAT_00012ee8 + 0x12e14),*puVar13);
            puVar14 = puVar13;
            iVar12 = iVar11;
            goto LAB_00012e40;
          }
          iVar17 = iVar17 + 1;
        }
        fprintf((FILE *)**(undefined4 **)(iVar18 + DAT_00012ee4),pcVar7,__s2);
        puVar14 = puVar13;
        iVar12 = iVar11;
      } while( true );
    }
    pcVar7 = (char *)(DAT_00012ee0 + 0x12d9c);
  }
  perror(pcVar7);
  iVar6 = 1;
LAB_00012c94:
                    /* WARNING: Subroutine does not return */
  exit(iVar6);
code_r0x00012c3c:
  *(undefined4 *)(iVar6 + 0x12c5c) = 1;
  goto LAB_00012bd0;
}



/* ===== entry @ 00012ef8 size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00042f80)
            (*(undefined4 *)((int)&DAT_00012f40 + DAT_00012f4c + DAT_00012f40),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_00012f40 + DAT_00012f48 + DAT_00012f40),
             *(undefined4 *)((int)&DAT_00012f40 + DAT_00012f44 + DAT_00012f40),param_1);
  return;
}



/* ===== FUN_00012f50 @ 00012f50 size=72 ===== */

void FUN_00012f50(void)

{
  code *pcVar1;
  
  if (DAT_00012f9c + 0x12f68 == DAT_00012f98 + 0x12f60) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012fa0 + 0x12f70 + DAT_00012fa4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 0001300c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00013080 + 0x13028;
  if (*(char *)(DAT_0001307c + 0x1301c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00013084) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00013088 + 0x13048));
  }
  FUN_00012f50();
  if (*(int *)(iVar1 + DAT_0001308c) != 0) {
    __deregister_frame_info(DAT_00013090 + 0x13068);
  }
  *(undefined1 *)(DAT_00013094 + 0x13078) = 1;
  return;
}



/* ===== _INIT_0 @ 00013098 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000130d0 + 0x130a8 + DAT_000130d4) != 0) {
    __register_frame_info(DAT_000130dc + 0x130c8,DAT_000130d8 + 0x130c4);
  }
  if (((DAT_00013000 + 0x12fc0) - (DAT_00012ffc + 0x12fb8) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00013004 + 0x12fc8 + DAT_00013008);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_000130e0 @ 000130e0 size=304 ===== */

void FUN_000130e0(undefined4 param_1,int param_2)

{
  int __fd;
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  FILE *__stream;
  undefined1 local_40 [3];
  char local_3d;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  int local_24;
  
  iVar3 = DAT_00013210 + 0x130fc;
  piVar4 = *(int **)(iVar3 + DAT_00013214);
  local_24 = *piVar4;
  if (param_2 < 0) {
    param_2 = FUN_00022d78(0);
  }
  __fd = FUN_00023114(param_2);
  if (__fd < 0) {
    perror((char *)(DAT_00013218 + 0x13130));
  }
  else {
    local_40[0] = 0;
    local_38 = 0;
    local_30 = 1;
    local_3c = DAT_0001321c;
    local_34 = local_40;
    local_2c = &local_3d;
    local_28 = 1;
    iVar1 = FUN_0002328c(__fd,&local_3c,1000);
    close(__fd);
    if (iVar1 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00013220);
      piVar4 = __errno_location();
      pcVar2 = strerror(*piVar4);
      fprintf(__stream,(char *)(DAT_00013224 + 0x131c0),param_2,pcVar2,*piVar4);
    }
    else {
      if (local_3d == '\0') {
        if (local_24 != *piVar4) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      fprintf((FILE *)**(undefined4 **)(iVar3 + DAT_00013220),(char *)(DAT_00013228 + 0x131ec),
              param_2);
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001322c @ 0001322c size=436 ===== */

void FUN_0001322c(undefined4 param_1,int param_2,char *param_3)

{
  int __fd;
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  FILE *__stream;
  undefined1 local_58 [3];
  char local_55;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  char *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined2 uStack_37;
  undefined5 uStack_35;
  undefined1 uStack_30;
  undefined1 local_2f;
  undefined1 uStack_2e;
  int local_2c;
  
  iVar4 = DAT_000133e0 + 0x1324c;
  piVar3 = *(int **)(iVar4 + DAT_000133e4);
  local_2c = *piVar3;
  if (param_2 < 0) {
    param_2 = FUN_00022d78(0);
  }
  __fd = FUN_00023114(param_2);
  if (__fd < 0) {
    perror((char *)(DAT_000133e8 + 0x13284));
  }
  else {
    local_38 = 0;
    uStack_37 = 0;
    uStack_35 = 0;
    uStack_30 = 0;
    local_2f = 0;
    uStack_2e = 0;
    local_3c = DAT_000133ec;
    if (param_3 != (char *)0x0) {
      iVar1 = atoi(param_3);
      local_38 = (undefined1)iVar1;
    }
    local_54 = DAT_000133f0;
    local_4c = &local_3c;
    local_48 = 0xf;
    local_2f = 7;
    local_50 = 0;
    local_40 = 1;
    local_44 = &local_55;
    iVar1 = FUN_0002328c(__fd,&local_54,1000);
    if (-1 < iVar1) {
      local_58[0] = 1;
      local_54 = DAT_000133f4;
      local_50 = 0;
      local_4c = (undefined4 *)local_58;
      local_48 = 1;
      local_40 = 1;
      local_44 = &local_55;
      iVar1 = FUN_0002328c(__fd,&local_54,1000);
    }
    close(__fd);
    if (iVar1 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_000133f8);
      piVar3 = __errno_location();
      pcVar2 = strerror(*piVar3);
      fprintf(__stream,(char *)(DAT_000133fc + 0x1338c),param_2,pcVar2,*piVar3);
    }
    else {
      if (local_55 == '\0') {
        if (local_2c != *piVar3) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      fprintf((FILE *)**(undefined4 **)(iVar4 + DAT_000133f8),(char *)(DAT_00013400 + 0x133b8),
              param_2);
    }
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013404 @ 00013404 size=472 ===== */

void FUN_00013404(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *__format;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  FILE *__stream;
  int *piVar11;
  byte local_c8;
  uint uStack_c7;
  uint uStack_c3;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  byte *local_ac;
  undefined4 local_a8;
  int aiStack_a4 [30];
  int local_2c;
  
  iVar10 = DAT_000135dc + 0x13420;
  piVar11 = *(int **)(iVar10 + DAT_000135e0);
  local_2c = *piVar11;
  if (param_2 < 0) {
    param_2 = FUN_00022d78(0);
  }
  iVar4 = FUN_00023114(param_2);
  if (iVar4 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar10 + DAT_000135e4);
    piVar11 = __errno_location();
    pcVar5 = strerror(*piVar11);
    iVar10 = *piVar11;
    __format = (char *)(DAT_000135e8 + 0x13480);
  }
  else {
    local_c8 = 0;
    uStack_c7 = 0;
    uStack_c3 = 0;
    local_b8 = 0;
    local_bc = DAT_000135ec;
    local_ac = &local_c8;
    uStack_b4 = 0;
    uStack_b0 = 0;
    local_a8 = 9;
    iVar6 = FUN_0002328c(iVar4,&local_bc,1000);
    close(iVar4);
    uVar3 = uStack_c3;
    uVar2 = uStack_c7;
    if (-1 < iVar6) {
      if (local_c8 == 0) {
        memcpy(aiStack_a4,(void *)(DAT_000135f8 + 0x1355c),0x78);
        iVar4 = DAT_00013608;
        iVar10 = DAT_00013604;
        iVar6 = DAT_000135fc + 0x13580;
        puts((char *)(DAT_00013600 + 0x1357c));
        uVar9 = 0;
        piVar8 = aiStack_a4;
        while (*piVar8 != 0) {
          uVar1 = 1 << (uVar9 & 0xff);
          uVar9 = uVar9 + 1;
          iVar7 = iVar6;
          if ((uVar2 & uVar1) == 0 && (uVar3 & (int)uVar1 >> 0x1f) == 0) {
            iVar7 = iVar10 + 0x13588;
          }
          printf((char *)(iVar4 + 0x1358c),iVar7);
          piVar8 = piVar8 + 1;
        }
        if (local_2c != *piVar11) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      fprintf((FILE *)**(undefined4 **)(iVar10 + DAT_000135e4),(char *)(DAT_000135f4 + 0x1353c),
              param_2,(uint)local_c8);
      goto LAB_00013484;
    }
    __stream = (FILE *)**(undefined4 **)(iVar10 + DAT_000135e4);
    piVar11 = __errno_location();
    pcVar5 = strerror(*piVar11);
    iVar10 = *piVar11;
    __format = (char *)(DAT_000135f0 + 0x13514);
  }
  fprintf(__stream,__format,param_2,pcVar5,iVar10);
LAB_00013484:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001360c @ 0001360c size=340 ===== */

void FUN_0001360c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int *piVar4;
  int __errnum;
  FILE *pFVar5;
  int iVar6;
  int *piVar7;
  char local_45;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  char *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  int local_24;
  
  iVar6 = DAT_00013760 + 0x13628;
  piVar7 = *(int **)(iVar6 + DAT_00013764);
  local_24 = *piVar7;
  if (param_3 != 0) {
    if (param_2 < 0) {
      param_2 = FUN_00022d78(0);
    }
    iVar1 = FUN_00023114(param_2);
    if (iVar1 < 0) {
      piVar7 = __errno_location();
      iVar1 = *piVar7;
      pFVar5 = (FILE *)**(undefined4 **)(iVar6 + DAT_00013768);
      pcVar2 = strerror(iVar1);
      fprintf(pFVar5,(char *)(DAT_0001376c + 0x13690),pcVar2,iVar1);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_2c = 0;
    local_28 = 0;
    FUN_0001f494(param_3,&local_2c);
    local_40 = 0;
    local_44 = DAT_00013770;
    local_38 = 6;
    local_34 = &local_45;
    local_30 = 1;
    local_3c = &local_2c;
    uVar3 = FUN_0002328c(iVar1,&local_44,1000);
    if (local_45 == '\0') {
      uVar3 = uVar3 >> 0x1f;
    }
    else {
      uVar3 = 1;
    }
    if (uVar3 != 0) {
      piVar4 = __errno_location();
      __errnum = *piVar4;
      pFVar5 = (FILE *)**(undefined4 **)(iVar6 + DAT_00013768);
      pcVar2 = strerror(__errnum);
      fprintf(pFVar5,(char *)(DAT_00013774 + 0x13738),param_2,pcVar2,__errnum);
    }
    close(iVar1);
  }
  if (local_24 == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== FUN_00013778 @ 00013778 size=112 ===== */

void FUN_00013778(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  FILE *__stream;
  
  iVar4 = DAT_000137e8 + 0x13794;
  iVar1 = ioctl(param_1,DAT_000137ec,param_2,param_4,param_1,param_2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_000137f0);
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(__stream,(char *)(DAT_000137f4 + 0x137d4),param_2,pcVar3,*piVar2);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}



/* ===== FUN_000137f8 @ 000137f8 size=112 ===== */

void FUN_000137f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  FILE *__stream;
  
  iVar4 = DAT_00013868 + 0x13814;
  iVar1 = ioctl(param_1,DAT_0001386c,param_2,param_4,param_1,param_2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00013870);
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(__stream,(char *)(DAT_00013874 + 0x13854),param_2,pcVar3,*piVar2);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  return;
}



/* ===== FUN_00013878 @ 00013878 size=120 ===== */

void FUN_00013878(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  FILE *__stream;
  
  iVar4 = DAT_000138f0 + 0x13894;
  iVar1 = ioctl(param_1,DAT_000138f4,param_2,param_4,param_1,param_2);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    if (*piVar2 != 0x72) {
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_000138f8);
      pcVar3 = strerror(*piVar2);
      fprintf(__stream,(char *)(DAT_000138fc + 0x138dc),param_2,pcVar3,*piVar2);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  return;
}



/* ===== FUN_00013938 @ 00013938 size=220 ===== */

void FUN_00013938(undefined4 param_1,undefined4 param_2,int param_3)

{
  int __fd;
  char *pcVar1;
  int iVar2;
  int *piVar3;
  FILE *__stream;
  undefined1 auStack_24 [8];
  int local_1c;
  
  iVar2 = DAT_00013a14 + 0x13954;
  piVar3 = *(int **)(iVar2 + DAT_00013a18);
  local_1c = *piVar3;
  if (param_3 == 0) {
LAB_000139f8:
    if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  __fd = FUN_00023114(param_2);
  if (__fd < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_00013a1c);
    piVar3 = __errno_location();
    pcVar1 = strerror(*piVar3);
    fprintf(__stream,(char *)(DAT_00013a20 + 0x139ac),param_2,pcVar1,*piVar3);
  }
  else {
    FUN_0001f494(param_3,auStack_24);
    iVar2 = ioctl(__fd,DAT_00013a24,auStack_24);
    if (-1 < iVar2) {
      close(__fd);
      goto LAB_000139f8;
    }
    perror((char *)(DAT_00013a28 + 0x139ec));
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013a2c @ 00013a2c size=300 ===== */

void FUN_00013a2c(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int __fd;
  char *pcVar1;
  int iVar2;
  char *__format;
  int iVar3;
  FILE *__stream;
  int *piVar4;
  undefined4 local_2c;
  undefined2 local_28;
  int local_24;
  
  iVar3 = DAT_00013b58 + 0x13a48;
  piVar4 = *(int **)(iVar3 + DAT_00013b5c);
  local_24 = *piVar4;
  if (param_3 == (char *)0x0) {
LAB_00013b3c:
    if (local_24 == *piVar4) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  __fd = FUN_00023114(param_2);
  if (__fd < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00013b60);
    piVar4 = __errno_location();
    pcVar1 = strerror(*piVar4);
    iVar3 = *piVar4;
    __format = (char *)(DAT_00013b64 + 0x13aa0);
  }
  else {
    iVar2 = strcasecmp(param_3,(char *)(DAT_00013b68 + 0x13ac0));
    if (iVar2 == 0) {
      local_28 = 0;
      local_2c = 0;
    }
    else {
      FUN_0001f494(param_3,&local_2c);
    }
    iVar2 = FUN_00024994(__fd,&local_2c,iVar2 == 0,1000);
    if (-1 < iVar2) {
      close(__fd);
      goto LAB_00013b3c;
    }
    __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00013b60);
    piVar4 = __errno_location();
    pcVar1 = strerror(*piVar4);
    iVar3 = *piVar4;
    __format = (char *)(DAT_00013b6c + 0x13b34);
  }
  fprintf(__stream,__format,param_2,pcVar1,iVar3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013b70 @ 00013b70 size=228 ===== */

void FUN_00013b70(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  FILE *__stream;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 uStack_20;
  undefined2 local_1e;
  int local_1c;
  
  iVar3 = DAT_00013c54 + 0x13b90;
  piVar4 = *(int **)(iVar3 + DAT_00013c58);
  local_24 = (undefined2)param_2;
  local_1c = *piVar4;
  local_22 = 0;
  uStack_20 = 0;
  local_1e = 0;
  if ((param_3 != (char *)0x0) &&
     (iVar1 = sscanf(param_3,(char *)(DAT_00013c5c + 0x13bc4),&local_28,&local_26), iVar1 == 2)) {
    uStack_20 = local_26;
    local_1e = local_28;
    iVar1 = ioctl(param_1,DAT_00013c60,&local_24);
    if (iVar1 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00013c64);
      piVar4 = __errno_location();
      pcVar2 = strerror(*piVar4);
      fprintf(__stream,(char *)(DAT_00013c68 + 0x13c2c),param_2,pcVar2,*piVar4);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00013c6c @ 00013c6c size=228 ===== */

void FUN_00013c6c(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  FILE *__stream;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 uStack_20;
  undefined2 local_1e;
  int local_1c;
  
  iVar3 = DAT_00013d50 + 0x13c8c;
  piVar4 = *(int **)(iVar3 + DAT_00013d54);
  local_24 = (undefined2)param_2;
  local_1c = *piVar4;
  local_22 = 0;
  uStack_20 = 0;
  local_1e = 0;
  if ((param_3 != (char *)0x0) &&
     (iVar1 = sscanf(param_3,(char *)(DAT_00013d58 + 0x13cc0),&local_28,&local_26), iVar1 == 2)) {
    uStack_20 = local_26;
    local_1e = local_28;
    iVar1 = ioctl(param_1,DAT_00013d5c,&local_24);
    if (iVar1 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00013d60);
      piVar4 = __errno_location();
      pcVar2 = strerror(*piVar4);
      fprintf(__stream,(char *)(DAT_00013d64 + 0x13d28),param_2,pcVar2,*piVar4);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00013d68 @ 00013d68 size=40 ===== */

void FUN_00013d68(void)

{
  void *__ptr;
  
  __ptr = (void *)FUN_000227c0();
  printf((char *)(DAT_00013d90 + 0x13d84),__ptr);
  free(__ptr);
  return;
}



/* ===== FUN_00013d94 @ 00013d94 size=40 ===== */

void FUN_00013d94(void)

{
  void *__ptr;
  
  __ptr = (void *)FUN_00022724();
  printf((char *)(DAT_00013dbc + 0x13db0),__ptr);
  free(__ptr);
  return;
}



/* ===== FUN_00013dc0 @ 00013dc0 size=264 ===== */

void FUN_00013dc0(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  FILE *__stream;
  int *piVar4;
  undefined2 local_24 [2];
  undefined4 local_20;
  int local_1c;
  
  iVar3 = DAT_00013ec8 + 0x13de0;
  piVar4 = *(int **)(iVar3 + DAT_00013ecc);
  local_24[0] = (undefined2)param_2;
  local_1c = *piVar4;
  local_20 = 0;
  iVar1 = strcmp(param_3,(char *)(DAT_00013ed0 + 0x13e04));
  if (iVar1 == 0) {
    local_20 = 1;
  }
  else {
    iVar1 = strcmp(param_3,(char *)(DAT_00013ed4 + 0x13e24));
    if (iVar1 == 0) {
      local_20 = 2;
    }
    else {
      iVar1 = strcmp(param_3,(char *)(DAT_00013ed8 + 0x13e40));
      if (iVar1 == 0) {
        local_20 = 3;
      }
    }
  }
  iVar1 = ioctl(param_1,DAT_00013edc,local_24);
  if (-1 < iVar1) {
    if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00013ee0);
  piVar4 = __errno_location();
  pcVar2 = strerror(*piVar4);
  fprintf(__stream,(char *)(DAT_00013ee4 + 0x13ea0),param_2,pcVar2,*piVar4);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00013ee8 @ 00013ee8 size=192 ===== */

void FUN_00013ee8(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  FILE *__stream;
  undefined2 local_24 [2];
  uint local_20;
  int local_1c;
  
  iVar3 = DAT_00013fa8 + 0x13f08;
  piVar4 = *(int **)(iVar3 + DAT_00013fac);
  local_24[0] = (undefined2)param_2;
  local_1c = *piVar4;
  iVar1 = strcmp(param_3,(char *)(DAT_00013fb0 + 0x13f20));
  local_20 = (uint)(iVar1 == 0);
  iVar1 = ioctl(param_1,DAT_00013fb4,local_24);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00013fb8);
    piVar4 = __errno_location();
    pcVar2 = strerror(*piVar4);
    fprintf(__stream,(char *)(DAT_00013fbc + 0x13f80),param_2,pcVar2,*piVar4);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00013fc0 @ 00013fc0 size=192 ===== */

void FUN_00013fc0(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  FILE *__stream;
  undefined2 local_24 [2];
  uint local_20;
  int local_1c;
  
  iVar3 = DAT_00014080 + 0x13fe0;
  piVar4 = *(int **)(iVar3 + DAT_00014084);
  local_24[0] = (undefined2)param_2;
  local_1c = *piVar4;
  iVar1 = strcmp(param_3,(char *)(DAT_00014088 + 0x13ff8));
  local_20 = (uint)(iVar1 == 0);
  iVar1 = ioctl(param_1,DAT_0001408c,local_24);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00014090);
    piVar4 = __errno_location();
    pcVar2 = strerror(*piVar4);
    fprintf(__stream,(char *)(DAT_00014094 + 0x14058),param_2,pcVar2,*piVar4);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00014098 @ 00014098 size=204 ===== */

void FUN_00014098(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_30 [20];
  int local_1c;
  
  iVar1 = DAT_0001416c;
  piVar4 = *(int **)(DAT_00014164 + 0x140a8 + DAT_00014168);
  local_1c = *piVar4;
  if ((uint)*(ushort *)(DAT_0001416c + 0x140c0) != *(uint *)(DAT_00014170 + 0x14148)) {
    *(uint *)(DAT_00014170 + 0x14148) = (uint)*(ushort *)(DAT_0001416c + 0x140c0);
    FUN_0001f380(iVar1 + 0x140ca,auStack_30);
    uVar2 = FUN_00022634((*(byte *)(iVar1 + 0x140d4) & 0x3f) >> 4);
    uVar3 = FUN_00022584(*(byte *)(iVar1 + 0x140d4) & 0xf);
    printf((char *)(DAT_00014174 + 0x14120),iVar1 + 0x140c2,uVar2,uVar3);
    printf((char *)(DAT_00014178 + 0x14140),auStack_30,(uint)*(ushort *)(iVar1 + 0x140ec),
           (uint)*(ushort *)(iVar1 + 0x140ee),(uint)*(ushort *)(iVar1 + 0x140f0),
           (uint)*(ushort *)(iVar1 + 0x140f2));
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001417c @ 0001417c size=204 ===== */

void FUN_0001417c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  FILE *__stream;
  undefined2 local_24 [2];
  undefined1 auStack_20 [4];
  int local_1c;
  
  iVar3 = DAT_00014248 + 0x1419c;
  piVar4 = *(int **)(iVar3 + DAT_0001424c);
  local_24[0] = (undefined2)param_2;
  local_1c = *piVar4;
  iVar1 = FUN_0002273c(param_3,auStack_20);
  if (iVar1 == 0) {
    FUN_00014098();
    FUN_00013d94(*(undefined4 *)((int)&DAT_00014248 + DAT_0001425c));
  }
  else {
    iVar1 = ioctl(param_1,DAT_00014250,local_24);
    if (iVar1 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00014254);
      piVar4 = __errno_location();
      pcVar2 = strerror(*piVar4);
      fprintf(__stream,(char *)(DAT_00014258 + 0x1420c),param_2,pcVar2,*piVar4);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00014260 @ 00014260 size=204 ===== */

void FUN_00014260(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  FILE *__stream;
  undefined2 local_24 [2];
  undefined1 auStack_20 [4];
  int local_1c;
  
  iVar3 = DAT_0001432c + 0x14280;
  piVar4 = *(int **)(iVar3 + DAT_00014330);
  local_24[0] = (undefined2)param_2;
  local_1c = *piVar4;
  iVar1 = FUN_00022844(param_3,auStack_20);
  if (iVar1 == 0) {
    FUN_00014098();
    FUN_00013d68(*(undefined4 *)((int)&DAT_00014334 + DAT_00014340));
  }
  else {
    iVar1 = ioctl(param_1,DAT_00014334,local_24);
    if (iVar1 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar3 + DAT_00014338);
      piVar4 = __errno_location();
      pcVar2 = strerror(*piVar4);
      fprintf(__stream,(char *)(DAT_0001433c + 0x142f0),param_2,pcVar2,*piVar4);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00014344 @ 00014344 size=400 ===== */

void FUN_00014344(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *__format;
  byte *pbVar5;
  int iVar6;
  FILE *__stream;
  int *piVar7;
  bool bVar8;
  byte local_120 [248];
  undefined1 local_28;
  int local_24;
  
  iVar6 = DAT_000144d4 + 0x14364;
  piVar7 = *(int **)(iVar6 + DAT_000144d8);
  local_24 = *piVar7;
  iVar2 = FUN_00023114(param_2);
  if (iVar2 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_000144dc);
    piVar7 = __errno_location();
    pcVar3 = strerror(*piVar7);
    iVar2 = *piVar7;
    __format = (char *)(DAT_000144e0 + 0x143b4);
  }
  else if (param_3 == 0) {
    iVar4 = FUN_00023a28(iVar2,0xf9,local_120,1000);
    if (-1 < iVar4) {
      iVar6 = 0;
      pbVar5 = local_120;
      do {
        bVar1 = *pbVar5;
        if (bVar1 == 0) break;
        bVar8 = 0x7e < bVar1;
        if (bVar1 != 0x7f) {
          bVar8 = 0x1e < bVar1;
        }
        iVar6 = iVar6 + 1;
        if (!bVar8 || (bVar1 == 0x7f || bVar1 == 0x1f)) {
          *pbVar5 = 0x2e;
        }
        pbVar5 = pbVar5 + 1;
      } while (iVar6 != 0xf8);
      local_28 = 0;
      FUN_00014098();
      printf((char *)(DAT_000144ec + 0x144b0),local_120);
      goto LAB_000144b0;
    }
    __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_000144dc);
    piVar7 = __errno_location();
    pcVar3 = strerror(*piVar7);
    iVar2 = *piVar7;
    __format = (char *)(DAT_000144e8 + 0x14470);
  }
  else {
    iVar4 = FUN_00023ae8(iVar2,param_3,2000);
    if (-1 < iVar4) {
LAB_000144b0:
      close(iVar2);
      if (local_24 == *piVar7) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_000144dc);
    piVar7 = __errno_location();
    pcVar3 = strerror(*piVar7);
    iVar2 = *piVar7;
    __format = (char *)(DAT_000144e4 + 0x14414);
  }
  fprintf(__stream,__format,param_2,pcVar3,iVar2);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000144f0 @ 000144f0 size=2168 ===== */

void FUN_000144f0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  size_t sVar5;
  char *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  FILE *__stream;
  int iVar11;
  undefined4 uVar12;
  undefined4 local_20;
  int local_1c;
  
  iVar11 = DAT_00014d68 + 0x14510;
  piVar10 = *(int **)(iVar11 + DAT_00014d6c);
  local_1c = *piVar10;
  uVar12 = param_2;
  local_20 = param_3;
  iVar2 = FUN_00023114(param_2);
  if (iVar2 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar11 + DAT_00014d70);
    piVar10 = __errno_location();
    pcVar3 = strerror(*piVar10);
    iVar2 = *piVar10;
    pcVar6 = (char *)(DAT_00014d74 + 0x1455c);
LAB_00014558:
    fprintf(__stream,pcVar6,param_2,pcVar3,iVar2);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (param_3 != (char *)0x0) {
    uVar4 = strtoul(param_3,(char **)0x0,0x10);
    iVar2 = FUN_0002450c(iVar2,uVar4,2000);
    if (iVar2 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar11 + DAT_00014d70);
      piVar10 = __errno_location();
      pcVar3 = strerror(*piVar10);
      iVar2 = *piVar10;
      pcVar6 = (char *)(DAT_00014d78 + 0x145d0);
      goto LAB_00014558;
    }
    goto LAB_000146cc;
  }
  iVar2 = FUN_0002445c(iVar2,&local_20,1000);
  if (iVar2 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar11 + DAT_00014d70);
    piVar10 = __errno_location();
    pcVar3 = strerror(*piVar10);
    iVar2 = *piVar10;
    pcVar6 = (char *)(DAT_00014d7c + 0x1461c);
    goto LAB_00014558;
  }
  FUN_00014098();
  printf((char *)(DAT_00014d80 + 0x14638),(uint)local_20 >> 0x10 & 0xff,(uint)local_20 >> 8 & 0xff,
         (uint)local_20 & 0xff,param_1,uVar12);
  printf((char *)(DAT_00014d84 + 0x14644));
  if (local_20._2_1_ == '\0') {
    printf((char *)(DAT_00014d9c + 0x146ec));
  }
  else {
    bVar7 = true;
    iVar2 = DAT_00014d88 + 0x14668;
    pcVar3 = (char *)(DAT_00014d8c + 0x1466c);
    pcVar6 = (char *)(DAT_00014d90 + 0x14670);
    uVar9 = 0;
    do {
      if (((int)((uint)local_20 >> 0x10 & 0xff) >> (uVar9 & 0xff) & 1U) != 0) {
        if (!bVar7) {
          printf(pcVar6);
        }
        printf(pcVar3,*(undefined4 *)(iVar2 + uVar9 * 4));
        bVar7 = false;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 8);
  }
  printf((char *)(DAT_00014d94 + 0x146b4));
  if (((uint)local_20 & 0x1800) != 0) {
    puts((char *)(DAT_00014d98 + 0x146cc));
    goto LAB_000146cc;
  }
  uVar8 = (uint)local_20 >> 8 & 0x1f;
  bVar1 = (byte)local_20 >> 2;
  uVar9 = (uint)bVar1;
  uVar12 = *(undefined4 *)(DAT_00014da0 + uVar8 * 4 + 0x14724);
  switch(uVar8) {
  case 0:
    iVar2 = DAT_00014ed4 + 0x14ce8;
    break;
  case 1:
    switch(uVar9) {
    case 0:
      iVar2 = DAT_00014ed8 + 0x14cf4;
      break;
    case 1:
      iVar2 = DAT_00014dac + 0x1478c;
      break;
    case 2:
      iVar2 = DAT_00014db4 + 0x147a4;
      break;
    case 3:
      iVar2 = DAT_00014db8 + 0x147b0;
      break;
    case 4:
      iVar2 = DAT_00014dbc + 0x147bc;
      break;
    case 5:
      iVar2 = DAT_00014dc0 + 0x147c8;
      break;
    case 6:
      iVar2 = DAT_00014dc4 + 0x147d4;
      break;
    default:
      iVar2 = DAT_00014db0 + 0x14798;
    }
    break;
  case 2:
    switch(uVar9) {
    case 0:
      iVar2 = DAT_00014edc + 0x14d00;
      break;
    case 1:
      iVar2 = DAT_00014dc8 + 0x14808;
      break;
    case 2:
      iVar2 = DAT_00014dd0 + 84000;
      break;
    case 3:
      iVar2 = DAT_00014dd4 + 0x1482c;
      break;
    case 4:
      iVar2 = DAT_00014dd8 + 0x14838;
      break;
    case 5:
      iVar2 = DAT_00014ddc + 0x14844;
      break;
    case 6:
      iVar2 = DAT_00014de0 + 0x14850;
      break;
    default:
      iVar2 = DAT_00014dcc + 0x14814;
    }
    break;
  case 3:
    if (uVar9 == 0) {
      iVar2 = DAT_00014ee0 + 0x14d0c;
    }
    else {
      switch((int)uVar9 >> 3) {
      case 1:
        iVar2 = DAT_00014de4 + 0x14894;
        break;
      case 2:
        iVar2 = DAT_00014de8 + 0x148a0;
        break;
      case 3:
        iVar2 = DAT_00014dec + 0x148ac;
        break;
      case 4:
        iVar2 = DAT_00014df0 + 0x148b8;
        break;
      case 5:
        iVar2 = DAT_00014df4 + 0x148c4;
        break;
      case 6:
        iVar2 = DAT_00014df8 + 0x148d0;
        break;
      case 7:
        iVar2 = DAT_00014dfc + 0x148dc;
        break;
      default:
        iVar2 = DAT_00014ee4 + 0x14d18;
      }
    }
    break;
  case 4:
    switch(uVar9) {
    case 0:
      iVar2 = DAT_00014ee8 + 0x14d24;
      break;
    case 1:
      iVar2 = DAT_00014e00 + 0x14940;
      break;
    case 2:
      iVar2 = DAT_00014e08 + 0x14958;
      break;
    case 3:
    default:
switchD_000148e0_default:
      iVar2 = DAT_00014e04 + 0x1494c;
      break;
    case 4:
      iVar2 = DAT_00014e0c + 0x14964;
      break;
    case 5:
      iVar2 = DAT_00014e10 + 0x14970;
      break;
    case 6:
      iVar2 = DAT_00014e14 + 0x1497c;
      break;
    case 7:
      iVar2 = DAT_00014e18 + 0x14988;
      break;
    case 8:
      iVar2 = DAT_00014e1c + 0x14994;
      break;
    case 9:
      iVar2 = DAT_00014e20 + 0x149a0;
      break;
    case 10:
      iVar2 = DAT_00014e24 + 0x149ac;
      break;
    case 0xb:
      iVar2 = DAT_00014e28 + 0x149b8;
      break;
    case 0xc:
      iVar2 = DAT_00014e2c + 0x149c4;
      break;
    case 0xd:
      iVar2 = DAT_00014e30 + 0x149d0;
      break;
    case 0xe:
      iVar2 = DAT_00014e34 + 0x149dc;
      break;
    case 0xf:
      iVar2 = DAT_00014e38 + 0x149e8;
      break;
    case 0x10:
      iVar2 = DAT_00014e3c + 0x149f4;
      break;
    case 0x11:
      goto switchD_000148e0_default;
    case 0x12:
      iVar2 = DAT_00014e40 + 0x14a00;
    }
    break;
  case 5:
    uVar8 = uVar9 & 0x30;
    if (uVar8 == 0x20) {
      pcVar3 = (char *)(DAT_00014e58 + 0x14ab4);
      iVar2 = DAT_00014e5c + 0x14ab8;
LAB_00014a94:
      strncpy((char *)(iVar2 + 0x5c),pcVar3,0x30);
    }
    else {
      if (uVar8 == 0x30) {
        pcVar3 = (char *)(DAT_00014e60 + 0x14ac8);
        iVar2 = DAT_00014e64 + 0x14acc;
        goto LAB_00014a94;
      }
      if (uVar8 == 0x10) {
        pcVar3 = (char *)(DAT_00014e50 + 0x14a94);
        iVar2 = DAT_00014e54 + 0x14a98;
        goto LAB_00014a94;
      }
      *(undefined1 *)(DAT_00014e44 + 0x14a88) = 0;
    }
    if ((bVar1 & 0xf) != 0) {
      if (*(char *)(DAT_00014e48 + 0x14a9c) != '\0') {
        strcat((char *)(DAT_00014e48 + 0x14a9c),(char *)(DAT_00014e4c + 0x14a58));
      }
      switch(uVar9 & 0xf) {
      case 1:
        pcVar6 = (char *)(DAT_00014e68 + 0x14b34);
        sVar5 = strlen(pcVar6);
        sVar5 = 0x2f - sVar5;
        pcVar3 = (char *)(DAT_00014e6c + 0x14af0);
        break;
      case 2:
        pcVar6 = (char *)(DAT_00014e78 + 0x14b80);
        sVar5 = strlen(pcVar6);
        sVar5 = 0x2f - sVar5;
        pcVar3 = (char *)(DAT_00014e7c + 0x14b3c);
        break;
      case 3:
        pcVar6 = (char *)(DAT_00014e80 + 0x14ba4);
        sVar5 = strlen(pcVar6);
        sVar5 = 0x2f - sVar5;
        pcVar3 = (char *)(DAT_00014e84 + 0x14b60);
        break;
      case 4:
        pcVar6 = (char *)(DAT_00014e88 + 0x14bc8);
        sVar5 = strlen(pcVar6);
        sVar5 = 0x2f - sVar5;
        pcVar3 = (char *)(DAT_00014e8c + 0x14b84);
        break;
      case 5:
        pcVar6 = (char *)(DAT_00014e90 + 0x14bec);
        sVar5 = strlen(pcVar6);
        sVar5 = 0x2f - sVar5;
        pcVar3 = (char *)(DAT_00014e94 + 0x14ba8);
        break;
      case 6:
        pcVar6 = (char *)(DAT_00014e98 + 0x14c10);
        sVar5 = strlen(pcVar6);
        sVar5 = 0x2f - sVar5;
        pcVar3 = (char *)(DAT_00014e9c + 0x14bcc);
        break;
      default:
        pcVar6 = (char *)(DAT_00014ea0 + 0x14c34);
        sVar5 = strlen(pcVar6);
        sVar5 = 0x2f - sVar5;
        pcVar3 = (char *)(DAT_00014ea4 + 0x14bf0);
      }
      strncat(pcVar6,pcVar3,sVar5);
    }
    if (*(char *)(DAT_00014e70 + 0x14b5c) == '\0') {
LAB_00014b0c:
      iVar2 = DAT_00014e74 + 0x14b18;
    }
    else {
      iVar2 = DAT_00014e70 + 0x14b5c;
    }
    break;
  case 6:
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 8) == 0) {
        if ((bVar1 & 0x10) != 0) {
          iVar2 = DAT_00014ef4 + 0x14d48;
          break;
        }
        if ((bVar1 & 0x20) != 0) {
          iVar2 = DAT_00014ea8 + 0x14c1c;
          break;
        }
        goto LAB_00014b0c;
      }
      iVar2 = DAT_00014ef0 + 0x14d3c;
    }
    else {
      iVar2 = DAT_00014eec + 0x14d30;
    }
    break;
  case 7:
    switch(uVar9) {
    case 1:
      iVar2 = DAT_00014ef8 + 0x14d54;
      break;
    case 2:
      iVar2 = DAT_00014eac + 0x14c4c;
      break;
    case 3:
      iVar2 = DAT_00014eb4 + 0x14c64;
      break;
    case 4:
      iVar2 = DAT_00014eb8 + 0x14c70;
      break;
    case 5:
      iVar2 = DAT_00014ebc + 0x14c7c;
      break;
    default:
      iVar2 = DAT_00014eb0 + 0x14c58;
    }
    break;
  case 8:
    switch(uVar9) {
    case 1:
      iVar2 = DAT_00014efc + 0x14d60;
      break;
    case 2:
      iVar2 = DAT_00014ec0 + 0x14cac;
      break;
    case 3:
      iVar2 = DAT_00014ec8 + 0x14cc4;
      break;
    case 4:
      iVar2 = DAT_00014ecc + 0x14cd0;
      break;
    case 5:
      iVar2 = DAT_00014ed0 + 0x14cdc;
      break;
    default:
      iVar2 = DAT_00014ec4 + 0x14cb8;
    }
    break;
  default:
    iVar2 = DAT_00014da4 + 0x14748;
  }
  printf((char *)(DAT_00014da8 + 0x14754),uVar12,iVar2);
LAB_000146cc:
  if (local_1c != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00014f00 @ 00014f00 size=536 ===== */

void FUN_00014f00(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  char *__format;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  FILE *__stream;
  undefined4 uVar8;
  undefined4 uStack_20;
  int local_1c;
  
  iVar5 = DAT_00015118 + 0x14f20;
  piVar7 = *(int **)(iVar5 + DAT_0001511c);
  local_1c = *piVar7;
  uVar8 = param_2;
  uStack_20 = param_3;
  iVar1 = FUN_00023114(param_2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_00015120);
    piVar7 = __errno_location();
    pcVar2 = strerror(*piVar7);
    iVar1 = *piVar7;
    __format = (char *)(DAT_00015124 + 0x14f6c);
  }
  else if (param_3 == (char *)0x0) {
    iVar1 = FUN_00024590(iVar1,(int)&uStack_20 + 2,1000);
    if (-1 < iVar1) {
      uVar4 = (uint)uStack_20 >> 0x10;
      FUN_00014098();
      uVar6 = (uVar4 & 0x3ff) >> 8;
      uVar4 = (uint)uStack_20 >> 0x10 & 0x3fc;
      if (uVar4 == 0x60) {
        iVar1 = DAT_00015154 + 0x15110;
      }
      else {
        iVar1 = DAT_00015130 + 0x15054;
      }
      iVar5 = DAT_00015138 + 0x15064;
      printf((char *)(DAT_00015134 + 0x15060),(uint)uStack_20 >> 0x10,iVar1,uVar4,param_1,uVar8);
      printf((char *)(DAT_0001513c + 0x15078),*(undefined4 *)(iVar5 + uVar6 * 4 + 0x40));
      printf((char *)(DAT_00015140 + 0x1508c),
             *(undefined4 *)(iVar5 + (((uint)uStack_20 >> 0x10 & 0xff) >> 6) * 4 + 0x50));
      if (uVar6 == 0) {
        printf((char *)(DAT_00015144 + 0x150b0),
               *(undefined4 *)
                (iVar5 + ((int)(((uint)uStack_20 >> 0x10) << 0x1a) >> 0x1f) * -4 + 0x60));
        printf((char *)(DAT_00015148 + 0x150cc),((uint)uStack_20 >> 0x10 & 0x1f) >> 2);
      }
      printf((char *)(DAT_0001514c + 0x150e4),
             *(undefined4 *)((int)&DAT_00015150 + DAT_00015150 + ((uint)uStack_20 >> 0x10 & 3) * 4))
      ;
      goto LAB_000150f0;
    }
    __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_00015120);
    piVar7 = __errno_location();
    pcVar2 = strerror(*piVar7);
    iVar1 = *piVar7;
    __format = (char *)(DAT_0001512c + 0x1502c);
  }
  else {
    uVar3 = strtoul(param_3,(char **)0x0,0x10);
    iVar1 = FUN_00024638(iVar1,uVar3 & 0xffff,2000);
    if (-1 < iVar1) {
LAB_000150f0:
      if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_00015120);
    piVar7 = __errno_location();
    pcVar2 = strerror(*piVar7);
    iVar1 = *piVar7;
    __format = (char *)(DAT_00015128 + 0x14fe0);
  }
  fprintf(__stream,__format,param_2,pcVar2,iVar1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00015158 @ 00015158 size=556 ===== */

void FUN_00015158(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int __fd;
  char *pcVar3;
  ulong uVar4;
  char *__format;
  int iVar5;
  ulong uVar6;
  int iVar7;
  FILE *__stream;
  undefined2 *puVar8;
  int iVar9;
  int *piVar10;
  byte local_ed;
  undefined2 local_ec;
  undefined1 local_ea;
  int local_2c;
  
  iVar7 = DAT_00015384 + 0x15178;
  piVar10 = *(int **)(iVar7 + DAT_00015388);
  local_2c = *piVar10;
  __fd = FUN_00023114(param_2);
  if (__fd < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar7 + DAT_0001538c);
    piVar10 = __errno_location();
    pcVar3 = strerror(*piVar10);
    fprintf(__stream,(char *)(DAT_00015390 + 0x151c8),param_2,pcVar3,*piVar10);
  }
  else {
    puVar8 = &local_ec;
    if (param_3 == (char *)0x0) {
      iVar5 = FUN_000246b4(__fd,&local_ed,puVar8,1000);
      iVar7 = DAT_000153b0;
      if (-1 < iVar5) {
        FUN_00014098();
        iVar2 = DAT_000153bc;
        iVar1 = DAT_000153b4;
        printf((char *)(DAT_000153b8 + 0x152f8));
        for (iVar5 = 0; iVar5 < (int)(uint)local_ed; iVar5 = iVar5 + 1) {
          iVar9 = 3;
          printf((char *)(iVar7 + 0x152fc));
          do {
            iVar9 = iVar9 + -1;
            printf((char *)(iVar1 + 0x15304),(uint)*(byte *)((int)puVar8 + iVar9));
          } while (iVar9 != 0);
          if (iVar5 < (int)(local_ed - 1)) {
            printf((char *)(iVar2 + 0x15308));
          }
          puVar8 = (undefined2 *)((int)puVar8 + 3);
        }
        putchar(10);
LAB_00015318:
        close(__fd);
        if (local_2c == *piVar10) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      piVar10 = __errno_location();
      pcVar3 = strerror(*piVar10);
      __format = (char *)(DAT_000153ac + 0x152dc);
    }
    else {
      uVar4 = strtoul(param_3,(char **)0x0,0x10);
      iVar7 = strcasecmp(param_3,(char *)(DAT_00015394 + 0x15204));
      uVar6 = DAT_000153a0;
      if (((iVar7 != 0) &&
          (iVar7 = strcasecmp(param_3,(char *)(DAT_00015398 + 0x1521c)), uVar6 = DAT_000153a8,
          iVar7 != 0)) && (uVar6 = uVar4, 0x3f < uVar4 - 0x9e8b00)) {
        printf((char *)(DAT_0001539c + 0x15248),uVar4);
        goto LAB_000151cc;
      }
      local_ec = (undefined2)uVar6;
      local_ea = (undefined1)(uVar6 >> 0x10);
      iVar7 = FUN_00024778(__fd,1,puVar8,1000);
      if (-1 < iVar7) goto LAB_00015318;
      piVar10 = __errno_location();
      pcVar3 = strerror(*piVar10);
      __format = (char *)(DAT_000153a4 + 0x15298);
    }
    printf(__format,param_2,pcVar3);
  }
LAB_000151cc:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000153c0 @ 000153c0 size=348 ===== */

void FUN_000153c0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *__format;
  int iVar4;
  int *piVar5;
  FILE *__stream;
  undefined4 uVar6;
  undefined4 uStack_20;
  int local_1c;
  
  iVar4 = DAT_0001551c + 0x153e0;
  piVar5 = *(int **)(iVar4 + DAT_00015520);
  local_1c = *piVar5;
  uVar6 = param_2;
  uStack_20 = param_3;
  iVar1 = FUN_00023114(param_2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00015524);
    piVar5 = __errno_location();
    pcVar2 = strerror(*piVar5);
    iVar1 = *piVar5;
    __format = (char *)(DAT_00015528 + 0x1542c);
  }
  else if (param_3 == (char *)0x0) {
    iVar3 = FUN_000255cc(iVar1,(int)&uStack_20 + 3,1000);
    if (-1 < iVar3) {
      FUN_00014098();
      printf((char *)(DAT_00015534 + 0x154f8),(int)uStack_20._3_1_);
      goto LAB_000154f8;
    }
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00015524);
    piVar5 = __errno_location();
    pcVar2 = strerror(*piVar5);
    iVar1 = *piVar5;
    __format = (char *)(DAT_00015530 + 0x154e4);
  }
  else {
    iVar3 = atoi(param_3);
    iVar3 = FUN_00025674(iVar1,(int)(char)iVar3,2000);
    if (-1 < iVar3) {
LAB_000154f8:
      close(iVar1);
      if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00015524);
    piVar5 = __errno_location();
    pcVar2 = strerror(*piVar5);
    iVar1 = *piVar5;
    __format = (char *)(DAT_0001552c + 0x15498);
  }
  fprintf(__stream,__format,param_2,pcVar2,iVar1,uVar6);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00015538 @ 00015538 size=424 ===== */

void FUN_00015538(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *__format;
  int iVar5;
  int *piVar6;
  FILE *__stream;
  undefined4 uVar7;
  undefined4 uStack_20;
  int local_1c;
  
  iVar5 = DAT_000156e0 + 0x15558;
  piVar6 = *(int **)(iVar5 + DAT_000156e4);
  local_1c = *piVar6;
  uVar7 = param_2;
  uStack_20 = param_3;
  iVar1 = FUN_00023114(param_2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_000156e8);
    piVar6 = __errno_location();
    pcVar2 = strerror(*piVar6);
    iVar1 = *piVar6;
    __format = (char *)(DAT_000156ec + 0x155a4);
  }
  else if (param_3 == (char *)0x0) {
    iVar4 = FUN_00024f88(iVar1,(int)&uStack_20 + 3,1000);
    if (-1 < iVar4) {
      FUN_00014098();
      printf((char *)(DAT_000156f8 + 0x1566c));
      if (uStack_20._3_1_ == '\x01') {
        pcVar2 = (char *)(DAT_00015704 + 0x156cc);
      }
      else if (uStack_20._3_1_ == '\0') {
        pcVar2 = (char *)(DAT_00015700 + 0x156a4);
      }
      else {
        if (uStack_20._3_1_ != '\x02') {
          printf((char *)(DAT_000156fc + 0x15694));
          goto LAB_000156a4;
        }
        pcVar2 = (char *)(DAT_00015708 + 0x156d8);
      }
      puts(pcVar2);
      goto LAB_000156a4;
    }
    __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_000156e8);
    piVar6 = __errno_location();
    pcVar2 = strerror(*piVar6);
    iVar1 = *piVar6;
    __format = (char *)(DAT_000156f4 + 0x1565c);
  }
  else {
    uVar3 = atoi(param_3);
    iVar4 = FUN_0002502c(iVar1,uVar3 & 0xff,2000);
    if (-1 < iVar4) {
LAB_000156a4:
      close(iVar1);
      if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_000156e8);
    piVar6 = __errno_location();
    pcVar2 = strerror(*piVar6);
    iVar1 = *piVar6;
    __format = (char *)(DAT_000156f0 + 0x15610);
  }
  fprintf(__stream,__format,param_2,pcVar2,iVar1,uVar7);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001570c @ 0001570c size=1076 ===== */

void FUN_0001570c(undefined4 param_1,undefined4 param_2,char *param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  ushort *__s;
  FILE *__stream;
  int iVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  byte *pbVar15;
  ushort *puVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  char local_121;
  undefined2 local_120;
  undefined1 local_11e;
  ushort local_11c [120];
  int local_2c;
  
  iVar13 = DAT_00015b40 + 0x1572c;
  piVar9 = *(int **)(iVar13 + DAT_00015b44);
  local_2c = *piVar9;
  iVar2 = FUN_00023114(param_2);
  if (iVar2 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar13 + DAT_00015b48);
    piVar9 = __errno_location();
    pcVar3 = strerror(*piVar9);
    iVar2 = *piVar9;
    pcVar7 = (char *)(DAT_00015b4c + 0x15780);
  }
  else {
    __s = local_11c;
    if (param_3 == (char *)0x0) {
      iVar11 = FUN_00025218(iVar2,&local_121,__s,1000);
      if (-1 < iVar11) {
        FUN_00014098();
        iVar11 = DAT_00015b68;
        iVar13 = DAT_00015b64;
        if (local_121 == '\0') {
          iVar8 = DAT_00015b58 + 0x158c0;
        }
        else {
          iVar8 = DAT_00015b7c + 0x15980;
        }
        iVar18 = DAT_00015b60 + 0x158dc;
        printf((char *)(DAT_00015b5c + 0x158d8),iVar8);
        uVar17 = 0;
        puVar14 = __s;
        do {
          uVar12 = uVar17 + 1;
          iVar8 = iVar13 + 0x158e4;
          if ((uVar12 & 7) != 0) {
            iVar8 = iVar18;
          }
          iVar10 = iVar11 + 0x158ec;
          if ((uVar12 & 0xf) == 0) {
            if (uVar17 == 0xef) {
              iVar10 = DAT_00015b6c + 0x1591c;
            }
            else {
              iVar10 = DAT_00015b80 + 0x1598c;
            }
          }
          printf((char *)(DAT_00015b70 + 0x15924),(uint)(byte)*puVar14,iVar8,iVar10);
          uVar17 = uVar12;
          puVar14 = (ushort *)((int)puVar14 + 1);
        } while (uVar12 != 0xf0);
        pcVar3 = (char *)(DAT_00015b74 + 0x15940);
        pcVar7 = (char *)(DAT_00015b78 + 0x15944);
        while (iVar13 = DAT_00015b88, uVar17 = (uint)(byte)*__s, uVar17 != 0) {
          uVar12 = (uint)*(byte *)((int)__s + 1);
          puVar14 = __s + 1;
          switch(uVar12) {
          case 1:
            pbVar15 = (byte *)((int)__s + 1);
            printf((char *)(DAT_00015b84 + 0x159f8));
            while ((byte *)((int)__s + uVar17) != pbVar15) {
              pbVar15 = pbVar15 + 1;
              printf((char *)(iVar13 + 0x15a04),(uint)*pbVar15);
            }
            goto LAB_00015a08;
          case 2:
            goto LAB_00015a2c;
          case 3:
LAB_00015a2c:
            if (uVar12 == 2) {
              iVar13 = DAT_00015b94 + 0x15a78;
            }
            else {
              iVar13 = DAT_00015b8c + 0x15a40;
            }
            puVar16 = (ushort *)((int)__s + (uVar17 - 1 & 0xfffffffe));
            printf((char *)(DAT_00015b90 + 0x15a50),iVar13);
            while (__s != puVar16) {
              __s = __s + 1;
              printf(pcVar7,(uint)*__s);
            }
LAB_00015a08:
            putchar(10);
            goto LAB_00015a10;
          case 4:
            break;
          case 5:
            break;
          case 6:
            break;
          case 7:
            break;
          case 8:
            goto LAB_00015a78;
          case 9:
LAB_00015a78:
            pcVar6 = malloc(uVar17);
            if (pcVar6 != (char *)0x0) {
              snprintf(pcVar6,uVar17,(char *)(DAT_00015b98 + 0x15a9c),puVar14);
              for (iVar13 = 0; iVar13 < (int)(uVar17 - 1); iVar13 = iVar13 + 1) {
                bVar1 = pcVar6[iVar13];
                bVar19 = 0x7e < bVar1;
                if (bVar1 != 0x7f) {
                  bVar19 = 0x1e < bVar1;
                }
                if (!bVar19 || (bVar1 == 0x7f || bVar1 == 0x1f)) {
                  pcVar6[iVar13] = '.';
                }
              }
              if (uVar12 == 8) {
                iVar13 = DAT_00015ba4 + 0x15b00;
              }
              else {
                iVar13 = DAT_00015b9c + 0x15ac4;
              }
              printf((char *)(DAT_00015ba0 + 0x15ad0),iVar13,pcVar6);
              free(pcVar6);
            }
            goto LAB_00015a10;
          case 10:
            iVar13 = (int)(char)(byte)__s[1];
            pcVar6 = (char *)(DAT_00015ba8 + 0x15b10);
            goto LAB_00015b0c;
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
            iVar13 = uVar17 - 1;
            pcVar6 = (char *)(DAT_00015bac + 0x15b24);
LAB_00015b0c:
            printf(pcVar6,iVar13);
            goto LAB_00015a10;
          }
          printf(pcVar3,uVar12,uVar17 - 1);
LAB_00015a10:
          __s = (ushort *)((int)puVar14 + (uVar17 - 1));
        }
        putchar(10);
        goto LAB_00015954;
      }
      __stream = (FILE *)**(undefined4 **)(iVar13 + DAT_00015b48);
      piVar9 = __errno_location();
      pcVar3 = strerror(*piVar9);
      iVar2 = *piVar9;
      pcVar7 = (char *)(DAT_00015b54 + 0x158a4);
    }
    else {
      iVar11 = 0;
      memset(__s,0,0xf0);
      local_120 = 0;
      local_11e = 0;
      sVar4 = strlen(param_3);
      uVar17 = sVar4 + 1 >> 1;
      if (0xef < uVar17) {
        uVar17 = 0xf0;
      }
      for (; iVar11 < (int)uVar17; iVar11 = iVar11 + 1) {
        local_120 = *(undefined2 *)(param_3 + iVar11 * 2);
        lVar5 = strtol((char *)&local_120,(char **)0x0,0x10);
        *(byte *)((int)__s + iVar11) = (byte)lVar5;
      }
      iVar11 = FUN_000252dc(iVar2,0,__s,2000);
      if (-1 < iVar11) {
LAB_00015954:
        close(iVar2);
        if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      __stream = (FILE *)**(undefined4 **)(iVar13 + DAT_00015b48);
      piVar9 = __errno_location();
      pcVar3 = strerror(*piVar9);
      iVar2 = *piVar9;
      pcVar7 = (char *)(DAT_00015b50 + 0x1582c);
    }
  }
  fprintf(__stream,pcVar7,param_2,pcVar3,iVar2);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00015bb0 @ 00015bb0 size=376 ===== */

void FUN_00015bb0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *__format;
  int iVar5;
  int *piVar6;
  FILE *__stream;
  undefined4 uVar7;
  undefined4 uStack_20;
  int local_1c;
  
  iVar5 = DAT_00015d28 + 0x15bd0;
  piVar6 = *(int **)(iVar5 + DAT_00015d2c);
  local_1c = *piVar6;
  uVar7 = param_2;
  uStack_20 = param_3;
  iVar1 = FUN_00023114(param_2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_00015d30);
    piVar6 = __errno_location();
    pcVar2 = strerror(*piVar6);
    iVar1 = *piVar6;
    __format = (char *)(DAT_00015d34 + 0x15c1c);
  }
  else if (param_3 == (char *)0x0) {
    iVar4 = FUN_00024e40(iVar1,(int)&uStack_20 + 3,1000);
    if (-1 < iVar4) {
      FUN_00014098();
      if (uStack_20._3_1_ == '\x01') {
        iVar5 = DAT_00015d48 + 0x15d20;
      }
      else {
        iVar5 = DAT_00015d40 + 0x15cf0;
      }
      printf((char *)(DAT_00015d44 + 0x15cf8),iVar5);
      goto LAB_00015cf8;
    }
    __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_00015d30);
    piVar6 = __errno_location();
    pcVar2 = strerror(*piVar6);
    iVar1 = *piVar6;
    __format = (char *)(DAT_00015d3c + 0x15cd4);
  }
  else {
    uVar3 = atoi(param_3);
    iVar4 = FUN_00024ee4(iVar1,uVar3 & 0xff,2000);
    if (-1 < iVar4) {
LAB_00015cf8:
      close(iVar1);
      if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_00015d30);
    piVar6 = __errno_location();
    pcVar2 = strerror(*piVar6);
    iVar1 = *piVar6;
    __format = (char *)(DAT_00015d38 + 0x15c88);
  }
  fprintf(__stream,__format,param_2,pcVar2,iVar1,uVar7);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00015d4c @ 00015d4c size=368 ===== */

void FUN_00015d4c(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  char *__format;
  int iVar4;
  int *piVar5;
  FILE *__stream;
  undefined4 uVar6;
  undefined4 uStack_20;
  int local_1c;
  
  iVar4 = DAT_00015ebc + 0x15d6c;
  piVar5 = *(int **)(iVar4 + DAT_00015ec0);
  local_1c = *piVar5;
  uVar6 = param_2;
  uStack_20 = param_3;
  iVar1 = FUN_00023114(param_2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00015ec4);
    piVar5 = __errno_location();
    pcVar2 = strerror(*piVar5);
    iVar1 = *piVar5;
    __format = (char *)(DAT_00015ec8 + 0x15db8);
  }
  else if (param_3 == (char *)0x0) {
    iVar1 = FUN_000250d0(iVar1,(int)&uStack_20 + 3,1000);
    if (-1 < iVar1) {
      FUN_00014098();
      if (uStack_20._3_1_ == '\x01') {
        iVar1 = DAT_00015edc + 0x15eb4;
      }
      else {
        iVar1 = DAT_00015ed4 + 0x15e8c;
      }
      printf((char *)(DAT_00015ed8 + 0x15e94),iVar1);
      goto LAB_00015e94;
    }
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00015ec4);
    piVar5 = __errno_location();
    pcVar2 = strerror(*piVar5);
    iVar1 = *piVar5;
    __format = (char *)(DAT_00015ed0 + 0x15e70);
  }
  else {
    uVar3 = atoi(param_3);
    iVar1 = FUN_00025174(iVar1,uVar3 & 0xff,2000);
    if (-1 < iVar1) {
LAB_00015e94:
      if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00015ec4);
    piVar5 = __errno_location();
    pcVar2 = strerror(*piVar5);
    iVar1 = *piVar5;
    __format = (char *)(DAT_00015ecc + 0x15e24);
  }
  fprintf(__stream,__format,param_2,pcVar2,iVar1,uVar6);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00015ee0 @ 00015ee0 size=368 ===== */

void FUN_00015ee0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  char *__format;
  int iVar4;
  int *piVar5;
  FILE *__stream;
  undefined4 uVar6;
  undefined4 uStack_20;
  int local_1c;
  
  iVar4 = DAT_00016050 + 0x15f00;
  piVar5 = *(int **)(iVar4 + DAT_00016054);
  local_1c = *piVar5;
  uVar6 = param_2;
  uStack_20 = param_3;
  iVar1 = FUN_00023114(param_2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00016058);
    piVar5 = __errno_location();
    pcVar2 = strerror(*piVar5);
    iVar1 = *piVar5;
    __format = (char *)(DAT_0001605c + 0x15f4c);
  }
  else if (param_3 == (char *)0x0) {
    iVar1 = FUN_000253a4(iVar1,(int)&uStack_20 + 3,1000);
    if (-1 < iVar1) {
      FUN_00014098();
      if (uStack_20._3_1_ == '\x01') {
        iVar1 = DAT_00016070 + 0x16048;
      }
      else {
        iVar1 = DAT_00016068 + 0x16020;
      }
      printf((char *)(DAT_0001606c + 0x16028),iVar1);
      goto LAB_00016028;
    }
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00016058);
    piVar5 = __errno_location();
    pcVar2 = strerror(*piVar5);
    iVar1 = *piVar5;
    __format = (char *)(DAT_00016064 + 0x16004);
  }
  else {
    uVar3 = atoi(param_3);
    iVar1 = FUN_00025448(iVar1,uVar3 & 0xff,2000);
    if (-1 < iVar1) {
LAB_00016028:
      if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_00016058);
    piVar5 = __errno_location();
    pcVar2 = strerror(*piVar5);
    iVar1 = *piVar5;
    __format = (char *)(DAT_00016060 + 0x15fb8);
  }
  fprintf(__stream,__format,param_2,pcVar2,iVar1,uVar6);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00016074 @ 00016074 size=596 ===== */

void FUN_00016074(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *__format;
  int iVar4;
  FILE *__stream;
  int *piVar5;
  uint in_fpscr;
  double dVar6;
  int local_4c;
  int local_48;
  char local_44;
  undefined1 uStack_43;
  undefined1 local_42;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  char *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 uStack_28;
  int local_24;
  
  iVar4 = DAT_000162c8 + 0x16094;
  piVar5 = *(int **)(iVar4 + DAT_000162cc);
  local_24 = *piVar5;
  iVar1 = FUN_00023114(param_2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_000162d0);
    piVar5 = __errno_location();
    pcVar2 = strerror(*piVar5);
    iVar1 = *piVar5;
    __format = (char *)(DAT_000162d4 + 0x160e4);
  }
  else {
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_34 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_3c = 0;
    local_2c = (char *)0x0;
    if (param_3 == (char *)0x0) {
      local_3c = DAT_000162f0;
      uStack_28 = 5;
      local_2c = &local_44;
      iVar1 = FUN_0002328c(iVar1,&local_3c,1000);
      if (-1 < iVar1) {
        if (local_44 == '\0') {
          FUN_00014098();
          dVar6 = (double)VectorUnsignedToFloat
                                    ((uint)CONCAT11(local_42,uStack_43),(byte)(in_fpscr >> 0x16) & 3
                                    );
          VectorUnsignedToFloat((uint)CONCAT11(uStack_40,uStack_41),(byte)(in_fpscr >> 0x16) & 3);
          printf((char *)(DAT_000162fc + 0x16298),(uint)CONCAT11(local_42,uStack_43),
                 SUB84(dVar6 * 0.625,0),(int)((ulonglong)(dVar6 * 0.625) >> 0x20),
                 (uint)CONCAT11(uStack_40,uStack_41));
          goto LAB_000162ac;
        }
        printf((char *)(DAT_000162f8 + 0x16268),param_2);
        goto LAB_00016134;
      }
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_000162d0);
      piVar5 = __errno_location();
      pcVar2 = strerror(*piVar5);
      iVar1 = *piVar5;
      __format = (char *)(DAT_000162f4 + 0x1624c);
    }
    else {
      uStack_28 = uStack_38;
      iVar3 = sscanf(param_3,(char *)(DAT_000162d8 + 0x16120),&local_4c,&local_48);
      if (iVar3 != 2) {
        puts((char *)(DAT_000162dc + 0x16134));
        goto LAB_00016134;
      }
      local_3c = DAT_000162e0;
      local_30 = 4;
      local_44 = (char)local_48;
      uStack_43 = (undefined1)((uint)local_48 >> 8);
      local_42 = (undefined1)local_4c;
      uStack_41 = (undefined1)((uint)local_4c >> 8);
      local_34 = &local_44;
      if (0xfee < local_4c - 0x12U) {
        puts((char *)(DAT_000162e4 + 0x1617c));
      }
      if (0xfee < local_48 - 0x12U) {
        puts((char *)(DAT_000162e8 + 0x1619c));
      }
      iVar1 = FUN_0002328c(iVar1,&local_3c,2000);
      if (-1 < iVar1) {
LAB_000162ac:
        if (local_24 != *piVar5) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_000162d0);
      piVar5 = __errno_location();
      pcVar2 = strerror(*piVar5);
      iVar1 = *piVar5;
      __format = (char *)(DAT_000162ec + 0x161ec);
    }
  }
  fprintf(__stream,__format,param_2,pcVar2,iVar1);
LAB_00016134:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00016300 @ 00016300 size=596 ===== */

void FUN_00016300(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *__format;
  int iVar4;
  FILE *__stream;
  int *piVar5;
  uint in_fpscr;
  double dVar6;
  int local_4c;
  int local_48;
  char local_44;
  undefined1 uStack_43;
  undefined1 local_42;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  char *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 uStack_28;
  int local_24;
  
  iVar4 = DAT_00016554 + 0x16320;
  piVar5 = *(int **)(iVar4 + DAT_00016558);
  local_24 = *piVar5;
  iVar1 = FUN_00023114(param_2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_0001655c);
    piVar5 = __errno_location();
    pcVar2 = strerror(*piVar5);
    iVar1 = *piVar5;
    __format = (char *)(DAT_00016560 + 0x16370);
  }
  else {
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_34 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_3c = 0;
    local_2c = (char *)0x0;
    if (param_3 == (char *)0x0) {
      local_3c = DAT_0001657c;
      uStack_28 = 5;
      local_2c = &local_44;
      iVar1 = FUN_0002328c(iVar1,&local_3c,1000);
      if (-1 < iVar1) {
        if (local_44 == '\0') {
          FUN_00014098();
          dVar6 = (double)VectorUnsignedToFloat
                                    ((uint)CONCAT11(local_42,uStack_43),(byte)(in_fpscr >> 0x16) & 3
                                    );
          VectorUnsignedToFloat((uint)CONCAT11(uStack_40,uStack_41),(byte)(in_fpscr >> 0x16) & 3);
          printf((char *)(DAT_00016588 + 0x16524),(uint)CONCAT11(local_42,uStack_43),
                 SUB84(dVar6 * 0.625,0),(int)((ulonglong)(dVar6 * 0.625) >> 0x20),
                 (uint)CONCAT11(uStack_40,uStack_41));
          goto LAB_00016538;
        }
        printf((char *)(DAT_00016584 + 0x164f4),param_2);
        goto LAB_000163c0;
      }
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_0001655c);
      piVar5 = __errno_location();
      pcVar2 = strerror(*piVar5);
      iVar1 = *piVar5;
      __format = (char *)(DAT_00016580 + 0x164d8);
    }
    else {
      uStack_28 = uStack_38;
      iVar3 = sscanf(param_3,(char *)(DAT_00016564 + 0x163ac),&local_4c,&local_48);
      if (iVar3 != 2) {
        puts((char *)(DAT_00016568 + 0x163c0));
        goto LAB_000163c0;
      }
      local_3c = DAT_0001656c;
      local_30 = 4;
      local_44 = (char)local_48;
      uStack_43 = (undefined1)((uint)local_48 >> 8);
      local_42 = (undefined1)local_4c;
      uStack_41 = (undefined1)((uint)local_4c >> 8);
      local_34 = &local_44;
      if (0xfee < local_4c - 0x12U) {
        puts((char *)(DAT_00016570 + 0x16408));
      }
      if (0xfee < local_48 - 0x12U) {
        puts((char *)(DAT_00016574 + 0x16428));
      }
      iVar1 = FUN_0002328c(iVar1,&local_3c,2000);
      if (-1 < iVar1) {
LAB_00016538:
        if (local_24 != *piVar5) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_0001655c);
      piVar5 = __errno_location();
      pcVar2 = strerror(*piVar5);
      iVar1 = *piVar5;
      __format = (char *)(DAT_00016578 + 0x16478);
    }
  }
  fprintf(__stream,__format,param_2,pcVar2,iVar1);
LAB_000163c0:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001658c @ 0001658c size=528 ===== */

void FUN_0001658c(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *__format;
  uint uVar4;
  int iVar5;
  FILE *__stream;
  int *piVar6;
  uint in_fpscr;
  double dVar7;
  undefined2 local_44 [2];
  uint local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined2 *local_34;
  undefined4 local_30;
  uint *local_2c;
  undefined4 uStack_28;
  int local_24;
  
  iVar5 = DAT_0001679c + 0x165ac;
  piVar6 = *(int **)(iVar5 + DAT_000167a0);
  local_24 = *piVar6;
  iVar1 = FUN_00023114(param_2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_000167a4);
    piVar6 = __errno_location();
    pcVar2 = strerror(*piVar6);
    iVar1 = *piVar6;
    __format = (char *)(DAT_000167a8 + 0x165fc);
  }
  else {
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    local_34 = *(undefined2 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    local_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    local_3c = 0;
    local_2c = (uint *)0x0;
    if (param_3 == (char *)0x0) {
      local_3c = DAT_000167c0;
      uStack_28 = 3;
      local_2c = &local_40;
      iVar1 = FUN_0002328c(iVar1,&local_3c,1000);
      if (-1 < iVar1) {
        if ((local_40 & 0xff) == 0) {
          FUN_00014098();
          uVar4 = local_40 >> 8 & 0xffff;
          dVar7 = (double)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
          printf((char *)(DAT_000167cc + 0x16774),uVar4,SUB84(dVar7 * 0.625,0),
                 (int)((ulonglong)(dVar7 * 0.625) >> 0x20));
          goto LAB_00016780;
        }
        printf((char *)(DAT_000167c8 + 0x16754),param_2);
        goto LAB_00016644;
      }
      __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_000167a4);
      piVar6 = __errno_location();
      pcVar2 = strerror(*piVar6);
      iVar1 = *piVar6;
      __format = (char *)(DAT_000167c4 + 0x16738);
    }
    else {
      uStack_28 = uStack_38;
      iVar3 = sscanf(param_3,(char *)(DAT_000167ac + 0x16630));
      if (iVar3 != 1) {
        puts((char *)(DAT_000167b0 + 0x16644));
        goto LAB_00016644;
      }
      local_3c = DAT_000167b4;
      local_34 = local_44;
      local_30 = 2;
      local_44[0] = (undefined2)local_40;
      if (0xfffe < local_40 - 1) {
        puts((char *)(DAT_000167b8 + 0x16688));
      }
      iVar1 = FUN_0002328c(iVar1,&local_3c,2000);
      if (-1 < iVar1) {
LAB_00016780:
        if (local_24 != *piVar6) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_000167a4);
      piVar6 = __errno_location();
      pcVar2 = strerror(*piVar6);
      iVar1 = *piVar6;
      __format = (char *)(DAT_000167bc + 0x166d8);
    }
  }
  fprintf(__stream,__format,param_2,pcVar2,iVar1);
LAB_00016644:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000167d0 @ 000167d0 size=344 ===== */

void FUN_000167d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *__format;
  byte *pbVar5;
  FILE *__stream;
  int iVar6;
  int *piVar7;
  byte abStack_44 [16];
  byte abStack_34 [16];
  int local_24;
  
  iVar6 = DAT_00016928 + 0x167f0;
  piVar7 = *(int **)(iVar6 + DAT_0001692c);
  local_24 = *piVar7;
  iVar2 = FUN_00023114(param_2);
  if (iVar2 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_00016930);
    piVar7 = __errno_location();
    pcVar3 = strerror(*piVar7);
    iVar2 = *piVar7;
    __format = (char *)(DAT_00016934 + 0x1683c);
  }
  else {
    iVar4 = FUN_000254ec(iVar2,abStack_44,abStack_34,1000);
    iVar1 = DAT_0001693c;
    if (-1 < iVar4) {
      FUN_00014098();
      iVar6 = 0;
      printf((char *)(DAT_00016940 + 0x168bc));
      pbVar5 = abStack_44;
      do {
        iVar6 = iVar6 + 1;
        printf((char *)(iVar1 + 0x168b8),(uint)*pbVar5);
        pbVar5 = pbVar5 + 1;
      } while (iVar6 != 0x10);
      iVar6 = 0;
      printf((char *)(DAT_00016944 + 0x168e4));
      pbVar5 = abStack_34;
      do {
        iVar6 = iVar6 + 1;
        printf((char *)(iVar1 + 0x168b8),(uint)*pbVar5);
        pbVar5 = pbVar5 + 1;
      } while (iVar6 != 0x10);
      putchar(10);
      close(iVar2);
      if (local_24 != *piVar7) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_00016930);
    piVar7 = __errno_location();
    pcVar3 = strerror(*piVar7);
    iVar2 = *piVar7;
    __format = (char *)(DAT_00016938 + 0x168a0);
  }
  fprintf(__stream,__format,param_2,pcVar3,iVar2);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00016948 @ 00016948 size=420 ===== */

void FUN_00016948(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *__format;
  int iVar5;
  uint uVar6;
  FILE *__stream;
  byte *pbVar7;
  int *piVar8;
  byte local_6c [64];
  int local_2c;
  
  iVar5 = DAT_00016aec + 0x16968;
  piVar8 = *(int **)(iVar5 + DAT_00016af0);
  local_2c = *piVar8;
  iVar2 = FUN_00023114(param_2);
  if (iVar2 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_00016af4);
    piVar8 = __errno_location();
    pcVar3 = strerror(*piVar8);
    iVar2 = *piVar8;
    __format = (char *)(DAT_00016af8 + 0x169b4);
  }
  else {
    iVar4 = FUN_00024138(iVar2,local_6c,1000);
    iVar1 = DAT_00016b04;
    if (-1 < iVar4) {
      iVar5 = 0;
      pcVar3 = (char *)(DAT_00016b00 + 0x16a28);
      FUN_00014098();
      pbVar7 = local_6c;
      do {
        if (*pbVar7 != 0) {
          if (iVar5 == 0) {
            iVar4 = DAT_00016b08 + 0x16a4c;
          }
          else {
            iVar4 = DAT_00016b14 + 0x16ae4;
          }
          uVar6 = 0;
          printf(pcVar3,iVar4,iVar5);
          do {
            if (((int)(uint)*pbVar7 >> (uVar6 & 0xff) & 1U) != 0) {
              printf((char *)(iVar1 + 0x16a30),uVar6);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != 8);
          puts((char *)(DAT_00016b0c + 0x16a8c));
        }
        iVar5 = iVar5 + 1;
        pbVar7 = pbVar7 + 1;
      } while (iVar5 != 0x40);
      pcVar3 = (char *)FUN_00022878(local_6c,DAT_00016b10 + 0x16aac,0x47);
      puts(pcVar3);
      free(pcVar3);
      close(iVar2);
      if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_00016af4);
    piVar8 = __errno_location();
    pcVar3 = strerror(*piVar8);
    iVar2 = *piVar8;
    __format = (char *)(DAT_00016afc + 0x16a10);
  }
  fprintf(__stream,__format,param_2,pcVar3,iVar2);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00016b18 @ 00016b18 size=488 ===== */

void FUN_00016b18(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  void *__ptr;
  void *__ptr_00;
  undefined4 uVar4;
  char *__format;
  int *piVar5;
  int iVar6;
  FILE *__stream;
  void *pvVar7;
  void *pvVar8;
  ushort local_38;
  byte local_36;
  ushort local_34;
  byte local_32;
  ushort local_30;
  int local_2c;
  
  iVar6 = DAT_00016d00 + 0x16b38;
  piVar5 = *(int **)(iVar6 + DAT_00016d04);
  local_2c = *piVar5;
  iVar1 = FUN_00023114(param_2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_00016d08);
    piVar5 = __errno_location();
    pcVar2 = strerror(*piVar5);
    iVar1 = *piVar5;
    __format = (char *)(DAT_00016d0c + 0x16b88);
  }
  else {
    iVar3 = FUN_00024064(iVar1,&local_38,1000);
    if (-1 < iVar3) {
      __ptr = (void *)FUN_00022a00(local_36);
      if ((*(byte *)(DAT_00016d14 + 0x16c10) & 0x30) == 0) {
        __ptr_00 = (void *)thunk_FUN_00022a00();
      }
      else {
        __ptr_00 = (void *)FUN_00022a48(local_32);
      }
      FUN_00014098();
      pvVar7 = __ptr;
      if (__ptr == (void *)0x0) {
        pvVar7 = (void *)(DAT_00016d18 + 0x16c24);
      }
      if ((*(byte *)(DAT_00016d1c + 0x16c44) & 0x30) == 0) {
        iVar6 = DAT_00016d2c + 0x16cf8;
      }
      else {
        iVar6 = DAT_00016d20 + 0x16c48;
      }
      pvVar8 = __ptr_00;
      if (__ptr_00 == (void *)0x0) {
        pvVar8 = (void *)(DAT_00016d24 + 0x16c58);
      }
      uVar4 = FUN_0001f768(local_38);
      printf((char *)(DAT_00016d28 + 0x16ca4),pvVar7,(uint)local_36,(uint)local_34,iVar6,pvVar8,
             (uint)local_32,(uint)local_30,uVar4,(uint)local_38);
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      if (__ptr_00 != (void *)0x0) {
        free(__ptr_00);
      }
      close(iVar1);
      if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_00016d08);
    piVar5 = __errno_location();
    pcVar2 = strerror(*piVar5);
    iVar1 = *piVar5;
    __format = (char *)(DAT_00016d10 + 0x16be0);
  }
  fprintf(__stream,__format,param_2,pcVar2,iVar1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_00016d30 @ 00016d30 size=920 ===== */

void FUN_00016d30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  FILE *__stream;
  int *piVar11;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  ushort local_ae;
  ushort local_ac [2];
  ushort local_a8;
  ushort local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *puStack_98;
  undefined4 local_94;
  undefined1 *local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  undefined1 uStack_84;
  undefined1 auStack_83 [103];
  int local_1c;
  
  iVar10 = DAT_000170c8 + 0x16d50;
  piVar11 = *(int **)(iVar10 + DAT_000170cc);
  local_1c = *piVar11;
  iVar1 = FUN_00023114(param_2);
  if (iVar1 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar10 + DAT_000170d0);
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    iVar1 = *piVar2;
    pcVar8 = (char *)(DAT_000170d4 + 0x16d9c);
  }
  else {
    iVar4 = FUN_00024064(iVar1,local_ac,1000);
    if (-1 < iVar4) {
      FUN_00014098();
      if (local_ac[0] == 0xf) {
        printf((char *)(DAT_00017114 + 0x17084),(uint)(byte)local_a8,(uint)(local_a4 >> 8),
               local_a4 & 0xff);
        goto LAB_00016da0;
      }
      if (local_ac[0] < 0x10) {
        if (local_ac[0] == 10) {
          iVar10 = FUN_0001e71c(iVar1,0,0x2819,&local_b4);
          if (iVar10 < 0) {
            puVar6 = (undefined1 *)FUN_00017b90(local_a8);
            pcVar3 = (char *)(DAT_000170ec + 0x16f00);
          }
          else {
            uVar7 = FUN_00017b90(local_b4);
            printf((char *)(DAT_000170f0 + 0x16f18),uVar7);
            iVar10 = FUN_0001e71c(iVar1,1,0x281a,&local_b2);
            if (iVar10 == 0) {
              iVar10 = FUN_0001e71c(iVar1,2,0x281b,&local_b0);
              if (iVar10 < 0) {
                local_b0 = 0;
              }
              uVar7 = FUN_00017c00(local_b2,local_b0);
              printf((char *)(DAT_000170f4 + 0x16f6c),uVar7);
            }
            iVar10 = FUN_0001e71c(iVar1,3,0x282c,&local_ae);
            if (iVar10 == 0) {
              printf((char *)(DAT_000170f8 + 0x16f9c),(uint)local_ae << 3);
            }
            iVar1 = FUN_0001ed24(iVar1,4,0x1ab,0,&local_a0);
            if (iVar1 != 0) goto LAB_00016da0;
            if ((short)local_a0 == 0) {
              puVar6 = (undefined1 *)(DAT_000170fc + 0x16fd8);
            }
            else {
              puVar6 = (undefined1 *)(DAT_00017104 + 0x16fec);
            }
            pcVar3 = (char *)(DAT_00017100 + 0x16fe0);
          }
          goto LAB_00016ec0;
        }
        if (local_ac[0] != 0xc) {
          if (local_ac[0] != 0) goto LAB_00016ea8;
          goto LAB_00016e2c;
        }
        local_88[0] = 7;
        puStack_98 = local_88;
        local_94 = 1;
        local_90 = &uStack_84;
        local_a0 = DAT_00017108;
        local_9c = 0;
        local_8c = 0x66;
        iVar1 = FUN_0002328c(iVar1,&local_a0,1000);
        if (-1 < iVar1) {
          puVar6 = auStack_83;
          pcVar3 = (char *)(DAT_00017110 + 0x1706c);
          goto LAB_00016ec0;
        }
        puVar5 = (uint *)__errno_location();
        pcVar3 = strerror(*puVar5);
        uVar9 = *puVar5;
        pcVar8 = (char *)(DAT_0001710c + 0x1705c);
      }
      else {
        if ((local_ac[0] != 0x25) && (local_ac[0] != 0x30)) {
          if (local_ac[0] == 0x1f) {
            if (local_a4 == 1) {
              uVar9 = local_a8 & 0xff;
              pcVar8 = (char *)(DAT_00017118 + 0x170ac);
              pcVar3 = (char *)(uint)(local_a8 >> 8);
              goto LAB_00016e88;
            }
            pcVar3 = (char *)(DAT_0001711c + 0x170bc);
          }
          else {
LAB_00016ea8:
            pcVar3 = (char *)(DAT_000170e4 + 0x16eb4);
          }
          puts(pcVar3);
          goto LAB_00016da0;
        }
LAB_00016e2c:
        local_a0 = DAT_000170dc;
        local_90 = &uStack_84;
        local_9c = 0;
        local_8c = 0x66;
        puStack_98 = (undefined1 *)0x0;
        local_94 = 0;
        iVar1 = FUN_0002328c(iVar1,&local_a0,1000);
        if (-1 < iVar1) {
          puVar6 = auStack_83;
          pcVar3 = (char *)(DAT_000170e8 + 0x16ec4);
LAB_00016ec0:
          printf(pcVar3,puVar6);
          goto LAB_00016da0;
        }
        puVar5 = (uint *)__errno_location();
        pcVar3 = strerror(*puVar5);
        uVar9 = *puVar5;
        pcVar8 = (char *)(DAT_000170e0 + 0x16e8c);
      }
LAB_00016e88:
      printf(pcVar8,pcVar3,uVar9);
      goto LAB_00016da0;
    }
    __stream = (FILE *)**(undefined4 **)(iVar10 + DAT_000170d0);
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    iVar1 = *piVar2;
    pcVar8 = (char *)(DAT_000170d8 + 0x16e00);
  }
  fprintf(__stream,pcVar8,param_2,pcVar3,iVar1);
LAB_00016da0:
  if (local_1c != *piVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00017120 @ 00017120 size=668 ===== */

void FUN_00017120(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  FILE *__stream;
  int *piVar7;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  int local_24;
  
  iVar2 = DAT_000173c4;
  iVar6 = DAT_000173bc + 0x1713c;
  piVar7 = *(int **)(iVar6 + DAT_000173c0);
  local_24 = *piVar7;
  local_2d = 0;
  if (-1 < *(char *)(DAT_000173c4 + 0x17164)) {
    FUN_00014098();
    printf((char *)(DAT_000173c8 + 0x171a0),(uint)*(byte *)(iVar2 + 0x1715d),
           (uint)*(byte *)(iVar2 + 0x1715e),(uint)*(byte *)(iVar2 + 0x1715f),
           (uint)*(byte *)(iVar2 + 0x17160),(uint)*(byte *)(iVar2 + 0x17161),
           (uint)*(byte *)(iVar2 + 0x17162),(uint)*(byte *)(iVar2 + 0x17163),
           (uint)*(byte *)(iVar2 + 0x17164));
    pcVar1 = (char *)FUN_00022a80(iVar2 + 0x1715d,DAT_000173cc + 0x171b4,0x3f);
    puts(pcVar1);
    free(pcVar1);
LAB_000171c4:
    if (local_24 != *piVar7) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  iVar2 = FUN_00023114(param_2);
  if (iVar2 < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_000173d0);
    piVar7 = __errno_location();
    pcVar1 = strerror(*piVar7);
    iVar2 = *piVar7;
    pcVar4 = (char *)(DAT_000173d4 + 0x17224);
  }
  else {
    iVar3 = FUN_000242c0(iVar2,0,&local_2d,&local_2c,1000);
    if (-1 < iVar3) {
      FUN_00014098();
      if (local_2d == 0) {
        iVar6 = DAT_000173dc + 0x172a8;
      }
      else {
        iVar6 = DAT_000173f0 + 0x17348;
      }
      pcVar4 = (char *)(DAT_000173e4 + 0x172e4);
      printf((char *)(DAT_000173e0 + 0x172cc),iVar6,(uint)local_2c,(uint)local_2b,(uint)local_2a,
             (uint)local_29,(uint)local_28,(uint)local_27,(uint)local_26,(uint)local_25);
      pcVar1 = (char *)FUN_00022a80(DAT_000173e8 + 0x1731d,DAT_000173ec + 0x1730c,0x3f);
      puts(pcVar1);
      free(pcVar1);
      for (uVar5 = 1; (int)uVar5 <= (int)(uint)local_2d; uVar5 = uVar5 + 1) {
        iVar6 = FUN_000242c0(iVar2,uVar5 & 0xff,0,&local_2c,1000);
        if (-1 < iVar6) {
          printf(pcVar4,uVar5,(uint)local_2c,(uint)local_2b,(uint)local_2a,(uint)local_29,
                 (uint)local_28,(uint)local_27,(uint)local_26,(uint)local_25);
        }
      }
      close(iVar2);
      goto LAB_000171c4;
    }
    __stream = (FILE *)**(undefined4 **)(iVar6 + DAT_000173d0);
    piVar7 = __errno_location();
    pcVar1 = strerror(*piVar7);
    iVar2 = *piVar7;
    pcVar4 = (char *)(DAT_000173d8 + 0x1728c);
  }
  fprintf(__stream,pcVar4,param_2,pcVar1,iVar2);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_000173f4 @ 000173f4 size=252 ===== */

void FUN_000173f4(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int __fd;
  char *pcVar1;
  int iVar2;
  int *piVar3;
  FILE *__stream;
  undefined4 local_24;
  undefined2 local_20;
  int local_1c;
  
  iVar2 = DAT_000174f0 + 0x17410;
  piVar3 = *(int **)(iVar2 + DAT_000174f4);
  local_1c = *piVar3;
  if (param_3 == (char *)0x0) {
LAB_000174d4:
    if (local_1c == *piVar3) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  __fd = FUN_00023114(param_2);
  if (__fd < 0) {
    __stream = (FILE *)**(undefined4 **)(iVar2 + DAT_000174f8);
    piVar3 = __errno_location();
    pcVar1 = strerror(*piVar3);
    fprintf(__stream,(char *)(DAT_000174fc + 0x17468),param_2,pcVar1,*piVar3);
  }
  else {
    iVar2 = strcasecmp(param_3,(char *)(DAT_00017500 + 0x17488));
    if (iVar2 == 0) {
      local_20 = 0;
      local_24 = 0;
    }
    else {
      FUN_0001f494(param_3,&local_24);
    }
    iVar2 = ioctl(__fd,DAT_00017504,&local_24);
    if (-1 < iVar2) {
      close(__fd);
      goto LAB_000174d4;
    }
    perror((char *)(DAT_00017508 + 0x174c8));
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001750c @ 0001750c size=220 ===== */

void FUN_0001750c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  FILE *__stream;
  undefined2 local_24 [2];
  undefined1 auStack_20 [4];
  int local_1c;
  
  iVar4 = DAT_000175e8 + 0x1752c;
  piVar5 = *(int **)(iVar4 + DAT_000175ec);
  local_24[0] = (undefined2)param_2;
  local_1c = *piVar5;
  iVar1 = FUN_000227a4(param_3,auStack_20);
  if (iVar1 == 0) {
    FUN_00014098();
    uVar3 = FUN_0002278c(*(undefined4 *)(DAT_000175fc + 0x175dc));
    printf((char *)(DAT_00017600 + 0x175cc),uVar3);
  }
  else {
    iVar1 = ioctl(param_1,DAT_000175f0,local_24);
    if (iVar1 < 0) {
      __stream = (FILE *)**(undefined4 **)(iVar4 + DAT_000175f4);
      piVar5 = __errno_location();
      pcVar2 = strerror(*piVar5);
      fprintf(__stream,(char *)(DAT_000175f8 + 0x1759c),param_2,pcVar2,*piVar5);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00017604 @ 00017604 size=380 ===== */

void FUN_00017604(undefined4 param_1)

{
  int iVar1;
  void *__ptr;
  undefined4 uVar2;
  
  iVar1 = DAT_00017780;
  FUN_00014098();
  __ptr = (void *)FUN_00022674(*(undefined4 *)(iVar1 + 0x17630));
  printf((char *)(DAT_00017784 + 0x17638),__ptr);
  free(__ptr);
  printf((char *)(DAT_00017788 + 0x17658),*(undefined4 *)(iVar1 + 0x17674),
         *(undefined4 *)(iVar1 + 0x17668),*(undefined4 *)(iVar1 + 0x17670),
         *(undefined4 *)(iVar1 + 0x17660),*(undefined4 *)(iVar1 + 0x17654));
  printf((char *)(DAT_0001778c + 0x17680),*(undefined4 *)(iVar1 + 0x17678),
         *(undefined4 *)(iVar1 + 0x17664),*(undefined4 *)(iVar1 + 0x1766c),
         *(undefined4 *)(iVar1 + 0x1765c),*(undefined4 *)(iVar1 + 0x17658));
  if ((*(int *)(iVar1 + 0x176ac) != 0) && ((*(uint *)(iVar1 + 0x17630) & 0x100) == 0)) {
    printf((char *)(DAT_00017790 + 0x176e8),(uint)*(byte *)(iVar1 + 0x17635),
           (uint)*(byte *)(iVar1 + 0x17636),(uint)*(byte *)(iVar1 + 0x17637),
           (uint)*(byte *)(iVar1 + 0x17638),(uint)*(byte *)(iVar1 + 0x17639),
           (uint)*(byte *)(iVar1 + 0x1763a),(uint)*(byte *)(iVar1 + 0x1763b),
           (uint)*(byte *)(iVar1 + 0x1763c));
    if ((*(byte *)(iVar1 + 0x17634) & 0x3f) >> 4 == 0) {
      FUN_00013d94(*(undefined4 *)(iVar1 + 0x17640));
      uVar2 = FUN_0002278c(*(undefined4 *)(iVar1 + 0x17644));
      printf((char *)(DAT_00017794 + 0x17718),uVar2);
      FUN_00013d68(*(undefined4 *)(iVar1 + 0x17648));
      if ((*(uint *)(iVar1 + 0x17630) & 1) == 0) goto LAB_00017770;
      FUN_00014344(param_1,*(undefined2 *)(iVar1 + 0x17620),0);
      FUN_000144f0(param_1,*(undefined2 *)(iVar1 + 0x17620),0);
    }
    if ((*(uint *)(DAT_00017798 + 0x17768) & 1) != 0) {
      FUN_00016b18(param_1,*(undefined2 *)(DAT_00017798 + 0x17758),0);
    }
  }
LAB_00017770:
  putchar(10);
  return;
}



/* ===== FUN_00017b90 @ 00017b90 size=100 ===== */

char * FUN_00017b90(uint param_1)

{
  uint uVar1;
  int iVar2;
  char *__s;
  
  iVar2 = 0;
  while( true ) {
    uVar1 = (uint)*(ushort *)(iVar2 * 8 + DAT_00017bf4 + 0x17ba0);
    if (uVar1 == 0) {
      __s = (char *)(DAT_00017bf8 + 0x17bc8);
      snprintf(__s,0xb,(char *)(DAT_00017bfc + 0x17bcc),param_1);
      return __s;
    }
    if (uVar1 == param_1) break;
    iVar2 = iVar2 + 1;
  }
  return *(char **)(DAT_00017bf4 + 0x17ba0 + iVar2 * 8 + 4);
}



/* ===== FUN_00017c00 @ 00017c00 size=284 ===== */

int FUN_00017c00(undefined4 param_1,uint param_2)

{
  switch(param_1) {
  case 0:
    return DAT_00017d30 + 0x17cb0;
  case 1:
    if (param_2 == 100) {
      return DAT_00017d34 + 0x17cbc;
    }
    return DAT_00017d20 + 0x17c3c;
  case 2:
    if (param_2 == 0x89) {
      return DAT_00017d38 + 0x17cc8;
    }
    if (param_2 == 0x8a) {
      return DAT_00017d3c + 0x17cd4;
    }
    if (param_2 == 0x28) {
      return DAT_00017d40 + 0x17ce0;
    }
    return DAT_00017d24 + 0x17c60;
  case 3:
    break;
  default:
    return DAT_00017d1c + 0x17c28;
  }
  if (param_2 == 0x30) {
    return DAT_00017d44 + 0x17cec;
  }
  if (0x30 < param_2) {
    if (param_2 == 0x43) {
      return DAT_00017d50 + 0x17d10;
    }
    if (param_2 == 0xe2) {
      return (int)&DAT_00017d1c + DAT_00017d54;
    }
    return DAT_00017d2c + 0x17ca4;
  }
  if (param_2 == 0x15) {
    return DAT_00017d48 + 0x17cf8;
  }
  if (param_2 == 0x26) {
    return DAT_00017d4c + 0x17d04;
  }
  return DAT_00017d28 + 0x17c88;
}



/* ===== FUN_0001e71c @ 0001e71c size=336 ===== */

void FUN_0001e71c(undefined4 param_1,undefined2 param_2,undefined2 param_3,short *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined2 local_250;
  undefined2 local_24e;
  undefined4 uStack_24c;
  undefined1 *puStack_248;
  undefined4 local_244;
  char *local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined2 local_234;
  undefined2 local_232;
  undefined4 local_230;
  undefined4 local_22c;
  undefined2 local_228 [2];
  undefined1 local_224;
  undefined4 local_223 [2];
  undefined2 local_21b [4];
  undefined1 auStack_212 [238];
  char local_124 [9];
  byte local_11b;
  byte local_11a;
  byte local_119;
  byte local_118;
  int local_24;
  
  piVar8 = *(int **)(DAT_0001e86c + 0x1e73c + DAT_0001e870);
  local_24 = *piVar8;
  memset(auStack_212,0,0xec);
  local_234 = param_2;
  local_224 = 0xc2;
  local_230 = 0;
  local_238 = 0x90000;
  local_22c = 0;
  puVar7 = &local_238;
  local_228[0] = 0;
  local_232 = param_3;
  puVar5 = local_223;
  do {
    puVar6 = puVar5 + 2;
    uVar1 = *puVar7;
    uVar4 = puVar7[1];
    puVar7 = puVar7 + 2;
    *puVar5 = uVar1;
    puVar5[1] = uVar4;
    puVar5 = puVar6;
  } while (puVar7 != (undefined4 *)local_228);
  *(undefined2 *)puVar6 = *(undefined2 *)puVar7;
  local_24e = 0;
  local_250 = 0x3f;
  uStack_24c = 0xff;
  local_244 = 0x13;
  local_240 = local_124;
  local_23c = 0xfe;
  puStack_248 = &local_224;
  iVar2 = FUN_0002328c(param_1,&local_250,2000);
  if (-1 < iVar2) {
    if (local_124[0] == -0x3e) {
      if ((uint)local_11b + (uint)local_11a * 0x100 == 0) {
        *param_4 = (ushort)local_119 + (ushort)local_118 * 0x100;
        uVar1 = 0;
        goto LAB_0001e850;
      }
      piVar3 = __errno_location();
      iVar2 = 6;
    }
    else {
      piVar3 = __errno_location();
      iVar2 = 5;
    }
    *piVar3 = iVar2;
  }
  uVar1 = 0xffffffff;
LAB_0001e850:
  if (local_24 != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}



/* ===== FUN_0001e9dc @ 0001e9dc size=416 ===== */

void FUN_0001e9dc(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 void *param_5,ushort param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined2 local_258;
  undefined2 local_256;
  undefined4 local_254;
  undefined1 *local_250;
  int local_24c;
  char *local_248;
  undefined4 local_244;
  undefined2 local_240;
  char cStack_23e;
  undefined1 uStack_23d;
  undefined2 local_23c;
  undefined2 local_23a;
  undefined2 local_238;
  undefined2 local_236;
  char local_234;
  byte local_233;
  undefined2 local_232;
  undefined2 local_230 [2];
  undefined1 local_22c;
  undefined4 local_22b [2];
  undefined2 local_223 [4];
  undefined1 auStack_21a [238];
  char local_12c [9];
  byte local_123;
  byte local_122;
  undefined1 auStack_11b [239];
  int local_2c;
  
  piVar7 = *(int **)(DAT_0001eb7c + 0x1ea04 + DAT_0001eb80);
  local_2c = *piVar7;
  cVar1 = (char)(param_6 >> 1);
  memset(auStack_21a,0,0xec);
  local_22c = 0xc2;
  cStack_23e = cVar1 + '\b';
  puVar6 = (undefined4 *)&local_240;
  local_232 = param_4;
  local_23a = 0x7003;
  local_23c = param_2;
  local_236 = param_3;
  local_240 = 0;
  uStack_23d = (char)((param_6 >> 1) + 8 >> 8);
  local_238 = 0;
  local_234 = cVar1;
  local_233 = (byte)(param_6 >> 9);
  local_230[0] = 0;
  puVar8 = local_22b;
  do {
    puVar9 = puVar8 + 2;
    uVar2 = *puVar6;
    uVar5 = puVar6[1];
    puVar6 = puVar6 + 2;
    *puVar8 = uVar2;
    puVar8[1] = uVar5;
    puVar8 = puVar9;
  } while (puVar6 != (undefined4 *)local_230);
  *(undefined2 *)puVar9 = *(undefined2 *)puVar6;
  local_256 = 0;
  local_258 = 0x3f;
  local_254 = 0xff;
  local_24c = param_6 + 0x11;
  local_248 = local_12c;
  local_244 = 0xfe;
  local_250 = &local_22c;
  iVar3 = FUN_0002328c(param_1,&local_258,2000);
  if (-1 < iVar3) {
    if (local_12c[0] == -0x3e) {
      if ((uint)local_123 + (uint)local_122 * 0x100 == 0) {
        memcpy(param_5,auStack_11b,(uint)param_6);
        uVar2 = 0;
        goto LAB_0001eb58;
      }
      piVar4 = __errno_location();
      iVar3 = 6;
    }
    else {
      piVar4 = __errno_location();
      iVar3 = 5;
    }
    *piVar4 = iVar3;
  }
  uVar2 = 0xffffffff;
LAB_0001eb58:
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== FUN_0001ed24 @ 0001ed24 size=108 ===== */

void FUN_0001ed24(void)

{
  int *piVar1;
  int iVar2;
  undefined2 *in_stack_00000000;
  
  piVar1 = *(int **)(DAT_0001ed90 + 0x1ed38 + DAT_0001ed94);
  iVar2 = *piVar1;
  FUN_0001e9dc();
  *in_stack_00000000 = 0;
  if (iVar2 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_0001f380 @ 0001f380 size=76 ===== */

undefined4 FUN_0001f380(byte *param_1,char *param_2)

{
  sprintf(param_2,(char *)(DAT_0001f3cc + 0x1f3a4),(uint)param_1[5],(uint)param_1[4],
          (uint)param_1[3],(uint)param_1[2],(uint)param_1[1],(uint)*param_1);
  return 0x11;
}



/* ===== FUN_0001f3d0 @ 0001f3d0 size=52 ===== */

undefined4 FUN_0001f3d0(int param_1,char *param_2,undefined4 param_3)

{
  sprintf(param_2,(char *)(DAT_0001f404 + 0x1f3f0),(uint)*(byte *)(param_1 + 5),
          (uint)*(byte *)(param_1 + 4),(uint)*(byte *)(param_1 + 3),param_2,param_3);
  return 8;
}



/* ===== FUN_0001f408 @ 0001f408 size=132 ===== */

undefined4 FUN_0001f408(byte *param_1)

{
  byte *pbVar1;
  size_t sVar2;
  int iVar3;
  
  iVar3 = DAT_0001f48c + 0x1f41c;
  if ((param_1 != (byte *)0x0) && (sVar2 = strlen((char *)param_1), sVar2 == 0x11)) {
    iVar3 = **(int **)(iVar3 + DAT_0001f490);
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



/* ===== FUN_0001f494 @ 0001f494 size=92 ===== */

undefined4 FUN_0001f494(char *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  char *__nptr;
  char *pcVar4;
  
  iVar1 = FUN_0001f408();
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



/* ===== <EXTERNAL>::malloc @ 0001f664 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00042f2c)(__size);
  return pvVar1;
}



/* ===== FUN_0001f668 @ 0001f668 size=92 ===== */

char * FUN_0001f668(byte *param_1)

{
  char *__s;
  
  __s = malloc(0x12);
  if (__s != (char *)0x0) {
    sprintf(__s,(char *)(DAT_0001f6c4 + 0x1f6a8),(uint)*param_1,(uint)param_1[1],(uint)param_1[2],
            (uint)param_1[3],(uint)param_1[4],(uint)param_1[5]);
  }
  return __s;
}



/* ===== <EXTERNAL>::free @ 0001f740 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00042fcc)(__ptr);
  return;
}



/* ===== FUN_0001f768 @ 0001f768 size=9000 ===== */

code * FUN_0001f768(int param_1)

{
  if (param_1 == 0xb2) {
    return (code *)(DAT_000206d4 + 0x20d9c);
  }
  if (0xb2 < param_1) {
    if (param_1 == 0x10b) {
      return (code *)(DAT_00021e2c + 0x21600);
    }
    if (0x10b < param_1) {
      if (param_1 == 0x138) {
        return (code *)(DAT_00021f90 + 0x21a2c);
      }
      if (0x138 < param_1) {
        if (param_1 == 0x14e) {
          return (code *)(DAT_00022044 + 0x21c48);
        }
        if (0x14e < param_1) {
          if (param_1 == 0x159) {
            return (code *)(DAT_0002209c + 0x21d50);
          }
          if (0x159 < param_1) {
            if (param_1 == 0x15f) {
              return (code *)(DAT_000220c8 + 0x22148);
            }
            if (0x15f < param_1) {
              if (param_1 == 0x162) {
                return (code *)(DAT_000220e0 + 0x22190);
              }
              if (0x162 < param_1) {
                if (param_1 == 0x163) {
                  return (code *)(DAT_000220ec + 0x221b4);
                }
                if (param_1 != 0xffff) {
                  return (code *)(DAT_000206d0 + 0x20d90);
                }
                return FUN_000221c0 + DAT_000220f0;
              }
              if (param_1 == 0x160) {
                return (code *)(DAT_000220e4 + 0x2219c);
              }
              if (param_1 != 0x161) {
                return (code *)(DAT_000206cc + 0x20d6c);
              }
              return (code *)(DAT_000220e8 + 0x221a8);
            }
            if (param_1 == 0x15c) {
              return (code *)(DAT_000220cc + 0x22154);
            }
            if (0x15c < param_1) {
              if (param_1 == 0x15d) {
                return (code *)(DAT_000220d8 + 0x22178);
              }
              if (param_1 != 0x15e) {
                return (code *)(DAT_000206c8 + 0x20d3c);
              }
              return (code *)(DAT_000220dc + 0x22184);
            }
            if (param_1 == 0x15a) {
              return (code *)(DAT_000220d0 + 0x22160);
            }
            if (param_1 != 0x15b) {
              return (code *)(DAT_000206c4 + 0x20d18);
            }
            return (code *)(DAT_000220d4 + 0x2216c);
          }
          if (param_1 == 0x153) {
            return (code *)(DAT_000220a0 + 0x21d5c);
          }
          if (0x153 < param_1) {
            if (param_1 == 0x156) {
              return (code *)(DAT_000220b4 + 0x2210c);
            }
            if (0x156 < param_1) {
              if (param_1 == 0x157) {
                return (code *)(DAT_000220c0 + 0x22130);
              }
              if (param_1 != 0x158) {
                return (code *)(DAT_000206c0 + 0x20cd4);
              }
              return (code *)(DAT_000220c4 + 0x2213c);
            }
            if (param_1 == 0x154) {
              return (code *)(DAT_000220b8 + 0x22118);
            }
            if (param_1 != 0x155) {
              return (code *)(DAT_000206bc + 0x20cb4);
            }
            return (code *)(DAT_000220bc + 0x22124);
          }
          if (param_1 == 0x150) {
            return (code *)(DAT_000220a4 + 0x21d68);
          }
          if (param_1 < 0x150) {
            return (code *)(DAT_000220a8 + 0x21d74);
          }
          if (param_1 == 0x151) {
            return (code *)((int)&DAT_00021d80 + DAT_000220ac);
          }
          if (param_1 != 0x152) {
            return (code *)(DAT_000206b8 + 0x20c84);
          }
          return (code *)(DAT_000220b0 + 0x22100);
        }
        if (param_1 == 0x143) {
          return (code *)(DAT_00022048 + 0x21c54);
        }
        if (0x143 < param_1) {
          if (param_1 == 0x148) {
            return (code *)(DAT_00022074 + 0x21cd8);
          }
          if (0x148 < param_1) {
            if (param_1 == 0x14b) {
              return (code *)(DAT_00022088 + 0x21d14);
            }
            if (0x14b < param_1) {
              if (param_1 == 0x14c) {
                return (code *)(DAT_00022094 + 0x21d38);
              }
              if (param_1 != 0x14d) {
                return (code *)(DAT_000206b4 + 0x20c30);
              }
              return (code *)(DAT_00022098 + 0x21d44);
            }
            if (param_1 == 0x149) {
              return (code *)(DAT_0002208c + 0x21d20);
            }
            if (param_1 != 0x14a) {
              return (code *)(DAT_000206b0 + 0x20c14);
            }
            return (code *)(DAT_00022090 + 0x21d2c);
          }
          if (param_1 == 0x145) {
            return (code *)(DAT_00022078 + 0x21ce4);
          }
          if (param_1 < 0x145) {
            return (code *)(DAT_0002207c + 0x21cf0);
          }
          if (param_1 == 0x146) {
            return (code *)(DAT_00022080 + 0x21cfc);
          }
          if (param_1 != 0x147) {
            return (code *)(DAT_000206ac + 0x20bdc);
          }
          return (code *)(DAT_00022084 + 0x21d08);
        }
        if (param_1 == 0x13d) {
          return (code *)(DAT_0002204c + 0x21c60);
        }
        if (0x13d < param_1) {
          if (param_1 == 0x140) {
            return (code *)(DAT_00022060 + 0x21c9c);
          }
          if (0x140 < param_1) {
            if (param_1 == 0x141) {
              return (code *)(DAT_0002206c + 0x21cc0);
            }
            if (param_1 != 0x142) {
              return (code *)(DAT_000206a8 + 0x20b98);
            }
            return (code *)(DAT_00022070 + 0x21ccc);
          }
          if (param_1 == 0x13e) {
            return (code *)(DAT_00022064 + 0x21ca8);
          }
          if (param_1 != 0x13f) {
            return (code *)(DAT_000206a4 + 0x20b74);
          }
          return (code *)(DAT_00022068 + 0x21cb4);
        }
        if (param_1 == 0x13a) {
          return (code *)(DAT_00022050 + 0x21c6c);
        }
        if (param_1 < 0x13a) {
          return (code *)(DAT_00022054 + 0x21c78);
        }
        if (param_1 == 0x13b) {
          return (code *)(DAT_00022058 + 0x21c84);
        }
        if (param_1 != 0x13c) {
          return (code *)(DAT_000206a0 + 0x20b44);
        }
        return (code *)(DAT_0002205c + 0x21c90);
      }
      if (param_1 == 0x121) {
        return (code *)(DAT_00021f94 + 0x21a38);
      }
      if (0x121 < param_1) {
        if (param_1 == 300) {
          return (code *)(DAT_00021fec + 0x21b40);
        }
        if (300 < param_1) {
          if (param_1 == 0x132) {
            return (code *)(DAT_00022018 + 0x21bc4);
          }
          if (0x132 < param_1) {
            if (param_1 == 0x135) {
              return (code *)(DAT_00022030 + 0x21c0c);
            }
            if (0x135 < param_1) {
              if (param_1 == 0x136) {
                return (code *)(DAT_0002203c + 0x21c30);
              }
              if (param_1 != 0x137) {
                return (code *)(DAT_0002069c + 0x20ae0);
              }
              return (code *)(DAT_00022040 + 0x21c3c);
            }
            if (param_1 == 0x133) {
              return (code *)(DAT_00022034 + 0x21c18);
            }
            if (param_1 != 0x134) {
              return (code *)(DAT_00020698 + 0x20abc);
            }
            return (code *)(DAT_00022038 + 0x21c24);
          }
          if (param_1 == 0x12f) {
            return (code *)(DAT_0002201c + 0x21bd0);
          }
          if (0x12f < param_1) {
            if (param_1 == 0x130) {
              return (code *)(DAT_00022028 + 0x21bf4);
            }
            if (param_1 != 0x131) {
              return (code *)(DAT_00020694 + 0x20a8c);
            }
            return (code *)(DAT_0002202c + 0x21c00);
          }
          if (param_1 == 0x12d) {
            return (code *)(DAT_00022020 + 0x21bdc);
          }
          if (param_1 != 0x12e) {
            return (code *)(DAT_00020690 + 0x20a70);
          }
          return (code *)(DAT_00022024 + 0x21be8);
        }
        if (param_1 == 0x126) {
          return (code *)(DAT_00021ff0 + 0x21b4c);
        }
        if (0x126 < param_1) {
          if (param_1 == 0x129) {
            return (code *)(DAT_00022004 + 0x21b88);
          }
          if (0x129 < param_1) {
            if (param_1 == 0x12a) {
              return (code *)(DAT_00022010 + 0x21bac);
            }
            if (param_1 != 299) {
              return (code *)(DAT_0002068c + 0x20a28);
            }
            return (code *)(DAT_00022014 + 0x21bb8);
          }
          if (param_1 == 0x127) {
            return (code *)(DAT_00022008 + 0x21b94);
          }
          if (param_1 != 0x128) {
            return (code *)(DAT_00020688 + 0x20a04);
          }
          return (code *)(DAT_0002200c + 0x21ba0);
        }
        if (param_1 == 0x123) {
          return (code *)(DAT_00021ff4 + 0x21b58);
        }
        if (param_1 < 0x123) {
          return (code *)(DAT_00021ff8 + 0x21b64);
        }
        if (param_1 == 0x124) {
          return (code *)(DAT_00021ffc + 0x21b70);
        }
        if (param_1 != 0x125) {
          return (code *)(DAT_00020684 + 0x209d4);
        }
        return (code *)(DAT_00022000 + 0x21b7c);
      }
      if (param_1 == 0x116) {
        return (code *)(DAT_00021f98 + 0x21a44);
      }
      if (0x116 < param_1) {
        if (param_1 == 0x11b) {
          return (code *)(DAT_00021fc4 + 0x21ac8);
        }
        if (0x11b < param_1) {
          if (param_1 == 0x11e) {
            return (code *)(DAT_00021fd8 + 0x21b04);
          }
          if (0x11e < param_1) {
            if (param_1 == 0x11f) {
              return (code *)(DAT_00021fe4 + 0x21b28);
            }
            if (param_1 != 0x120) {
              return (code *)(DAT_00020680 + 0x20988);
            }
            return (code *)(DAT_00021fe8 + 0x21b34);
          }
          if (param_1 == 0x11c) {
            return (code *)(DAT_00021fdc + 0x21b10);
          }
          if (param_1 != 0x11d) {
            return (code *)(DAT_0002067c + 0x20968);
          }
          return (code *)(DAT_00021fe0 + 0x21b1c);
        }
        if (param_1 == 0x118) {
          return (code *)(DAT_00021fc8 + 0x21ad4);
        }
        if (param_1 < 0x118) {
          return (code *)(DAT_00021fcc + 0x21ae0);
        }
        if (param_1 == 0x119) {
          return (code *)(DAT_00021fd0 + 0x21aec);
        }
        if (param_1 != 0x11a) {
          return (code *)(DAT_00020678 + 0x20938);
        }
        return (code *)(DAT_00021fd4 + 0x21af8);
      }
      if (param_1 == 0x110) {
        return (code *)(DAT_00021f9c + 0x21a50);
      }
      if (0x110 < param_1) {
        if (param_1 == 0x113) {
          return (code *)(DAT_00021fb0 + 0x21a8c);
        }
        if (0x113 < param_1) {
          if (param_1 == 0x114) {
            return (code *)(DAT_00021fbc + 0x21ab0);
          }
          if (param_1 != 0x115) {
            return (code *)((int)&DAT_00020538 + DAT_00020674);
          }
          return (code *)(DAT_00021fc0 + 0x21abc);
        }
        if (param_1 == 0x111) {
          return (code *)(DAT_00021fb4 + 0x21a98);
        }
        if (param_1 != 0x112) {
          return (code *)(DAT_00020670 + 0x2051c);
        }
        return (code *)(DAT_00021fb8 + 0x21aa4);
      }
      if (param_1 == 0x10d) {
        return (code *)(DAT_00021fa0 + 0x21a5c);
      }
      if (param_1 < 0x10d) {
        return (code *)(DAT_00021fa4 + 0x21a68);
      }
      if (param_1 == 0x10e) {
        return (code *)(DAT_00021fa8 + 0x21a74);
      }
      if (param_1 != 0x10f) {
        return (code *)(DAT_0002066c + 0x204e4);
      }
      return (code *)(DAT_00021fac + 0x21a80);
    }
    if (param_1 == 0xde) {
      return (code *)(DAT_00021e30 + 0x2160c);
    }
    if (0xde < param_1) {
      if (param_1 == 0xf4) {
        return (code *)(DAT_00021ee0 + 0x2181c);
      }
      if (0xf4 < param_1) {
        if (param_1 == 0xff) {
          return (code *)(DAT_00021f38 + 0x21924);
        }
        if (0xff < param_1) {
          if (param_1 == 0x105) {
            return (code *)(DAT_00021f64 + 0x219a8);
          }
          if (0x105 < param_1) {
            if (param_1 == 0x108) {
              return (code *)(DAT_00021f7c + 0x219f0);
            }
            if (0x108 < param_1) {
              if (param_1 == 0x109) {
                return (code *)(DAT_00021f88 + 0x21a14);
              }
              if (param_1 != 0x10a) {
                return (code *)(DAT_00020668 + 0x20474);
              }
              return (code *)(DAT_00021f8c + 0x21a20);
            }
            if (param_1 == 0x106) {
              return (code *)(DAT_00021f80 + 0x219fc);
            }
            if (param_1 != 0x107) {
              return (code *)(DAT_00020664 + 0x20450);
            }
            return (code *)(DAT_00021f84 + 0x21a08);
          }
          if (param_1 == 0x102) {
            return (code *)(DAT_00021f68 + 0x219b4);
          }
          if (0x102 < param_1) {
            if (param_1 == 0x103) {
              return (code *)(DAT_00021f74 + 0x219d8);
            }
            if (param_1 != 0x104) {
              return (code *)(DAT_00020660 + 0x20420);
            }
            return (code *)(DAT_00021f78 + 0x219e4);
          }
          if (param_1 == 0x100) {
            return (code *)(DAT_00021f6c + 0x219c0);
          }
          if (param_1 != 0x101) {
            return (code *)(DAT_0002065c + 0x20400);
          }
          return (code *)(DAT_00021f70 + 0x219cc);
        }
        if (param_1 == 0xf9) {
          return (code *)(DAT_00021f3c + 0x21930);
        }
        if (0xf9 < param_1) {
          if (param_1 == 0xfc) {
            return (code *)(DAT_00021f50 + 0x2196c);
          }
          if (0xfc < param_1) {
            if (param_1 == 0xfd) {
              return (code *)(DAT_00021f5c + 0x21990);
            }
            if (param_1 != 0xfe) {
              return (code *)(DAT_00020658 + 0x203c0);
            }
            return (code *)(DAT_00021f60 + 0x2199c);
          }
          if (param_1 == 0xfa) {
            return (code *)(DAT_00021f54 + 0x21978);
          }
          if (param_1 != 0xfb) {
            return (code *)(DAT_00020654 + 0x203a4);
          }
          return (code *)(DAT_00021f58 + 0x21984);
        }
        if (param_1 == 0xf6) {
          return (code *)(DAT_00021f40 + 0x2193c);
        }
        if (param_1 < 0xf6) {
          return (code *)(DAT_00021f44 + 0x21948);
        }
        if (param_1 == 0xf7) {
          return (code *)(DAT_00021f48 + 0x21954);
        }
        if (param_1 != 0xf8) {
          return (code *)(DAT_00020650 + 0x2037c);
        }
        return (code *)(DAT_00021f4c + 0x21960);
      }
      if (param_1 == 0xe9) {
        return (code *)(DAT_00021ee4 + 0x21828);
      }
      if (0xe9 < param_1) {
        if (param_1 == 0xee) {
          return (code *)(DAT_00021f10 + 0x218ac);
        }
        if (0xee < param_1) {
          if (param_1 == 0xf1) {
            return (code *)(DAT_00021f24 + 0x218e8);
          }
          if (0xf1 < param_1) {
            if (param_1 == 0xf2) {
              return (code *)(DAT_00021f30 + 0x2190c);
            }
            if (param_1 != 0xf3) {
              return (code *)(DAT_0002064c + 0x2033c);
            }
            return (code *)(DAT_00021f34 + 0x21918);
          }
          if (param_1 == 0xef) {
            return (code *)(DAT_00021f28 + 0x218f4);
          }
          if (param_1 != 0xf0) {
            return (code *)(DAT_00020648 + 0x20320);
          }
          return (code *)(DAT_00021f2c + 0x21900);
        }
        if (param_1 == 0xeb) {
          return (code *)(DAT_00021f14 + 0x218b8);
        }
        if (param_1 < 0xeb) {
          return (code *)(DAT_00021f18 + 0x218c4);
        }
        if (param_1 == 0xec) {
          return (code *)(DAT_00021f1c + 0x218d0);
        }
        if (param_1 != 0xed) {
          return (code *)(DAT_00020644 + 0x202f8);
        }
        return (code *)(DAT_00021f20 + 0x218dc);
      }
      if (param_1 == 0xe3) {
        return (code *)(DAT_00021ee8 + 0x21834);
      }
      if (0xe3 < param_1) {
        if (param_1 == 0xe6) {
          return (code *)(DAT_00021efc + 0x21870);
        }
        if (0xe6 < param_1) {
          if (param_1 == 0xe7) {
            return (code *)(DAT_00021f08 + 0x21894);
          }
          if (param_1 != 0xe8) {
            return (code *)(DAT_00020640 + 0x202c4);
          }
          return (code *)(DAT_00021f0c + 0x218a0);
        }
        if (param_1 == 0xe4) {
          return (code *)(DAT_00021f00 + 0x2187c);
        }
        if (param_1 != 0xe5) {
          return (code *)(DAT_0002063c + 0x202a8);
        }
        return (code *)(DAT_00021f04 + 0x21888);
      }
      if (param_1 == 0xe0) {
        return (code *)(DAT_00021eec + 0x21840);
      }
      if (param_1 < 0xe0) {
        return (code *)(DAT_00021ef0 + 0x2184c);
      }
      if (param_1 == 0xe1) {
        return (code *)(DAT_00021ef4 + 0x21858);
      }
      if (param_1 != 0xe2) {
        return (code *)(DAT_00020638 + 0x20280);
      }
      return (code *)(DAT_00021ef8 + 0x21864);
    }
    if (param_1 == 200) {
      return (code *)(DAT_00021e34 + 0x21618);
    }
    if (200 < param_1) {
      if (param_1 == 0xd3) {
        return (code *)(DAT_00021e8c + 0x21720);
      }
      if (0xd3 < param_1) {
        if (param_1 == 0xd8) {
          return (code *)(DAT_00021eb8 + 0x217a4);
        }
        if (0xd8 < param_1) {
          if (param_1 == 0xdb) {
            return (code *)(DAT_00021ecc + 0x217e0);
          }
          if (0xdb < param_1) {
            if (param_1 == 0xdc) {
              return (code *)(DAT_00021ed8 + 0x21804);
            }
            if (param_1 != 0xdd) {
              return (code *)(DAT_00020634 + 0x20234);
            }
            return (code *)(DAT_00021edc + 0x21810);
          }
          if (param_1 == 0xd9) {
            return (code *)(DAT_00021ed0 + 0x217ec);
          }
          if (param_1 != 0xda) {
            return (code *)(DAT_00020630 + 0x20218);
          }
          return (code *)(DAT_00021ed4 + 0x217f8);
        }
        if (param_1 == 0xd5) {
          return (code *)(DAT_00021ebc + 0x217b0);
        }
        if (param_1 < 0xd5) {
          return (code *)(DAT_00021ec0 + 0x217bc);
        }
        if (param_1 == 0xd6) {
          return (code *)(DAT_00021ec4 + 0x217c8);
        }
        if (param_1 != 0xd7) {
          return (code *)(DAT_0002062c + 0x201f0);
        }
        return (code *)(DAT_00021ec8 + 0x217d4);
      }
      if (param_1 == 0xcd) {
        return (code *)(DAT_00021e90 + 0x2172c);
      }
      if (0xcd < param_1) {
        if (param_1 == 0xd0) {
          return (code *)(DAT_00021ea4 + 0x21768);
        }
        if (0xd0 < param_1) {
          if (param_1 == 0xd1) {
            return (code *)(DAT_00021eb0 + 0x2178c);
          }
          if (param_1 != 0xd2) {
            return (code *)(DAT_00020628 + 0x201bc);
          }
          return (code *)(DAT_00021eb4 + 0x21798);
        }
        if (param_1 == 0xce) {
          return (code *)(DAT_00021ea8 + 0x21774);
        }
        if (param_1 != 0xcf) {
          return (code *)(DAT_00020624 + 0x201a0);
        }
        return (code *)(DAT_00021eac + 0x21780);
      }
      if (param_1 == 0xca) {
        return (code *)(DAT_00021e94 + 0x21738);
      }
      if (param_1 < 0xca) {
        return (code *)(DAT_00021e98 + 0x21744);
      }
      if (param_1 == 0xcb) {
        return (code *)(DAT_00021e9c + 0x21750);
      }
      if (param_1 != 0xcc) {
        return (code *)(DAT_00020620 + 0x20178);
      }
      return (code *)(DAT_00021ea0 + 0x2175c);
    }
    if (param_1 == 0xbd) {
      return (code *)(DAT_00021e38 + 0x21624);
    }
    if (0xbd < param_1) {
      if (param_1 == 0xc2) {
        return (code *)(DAT_00021e64 + 0x216a8);
      }
      if (0xc2 < param_1) {
        if (param_1 == 0xc5) {
          return (code *)(DAT_00021e78 + 0x216e4);
        }
        if (0xc5 < param_1) {
          if (param_1 == 0xc6) {
            return (code *)(DAT_00021e84 + 0x21708);
          }
          if (param_1 != 199) {
            return (code *)(DAT_0002061c + 0x20138);
          }
          return (code *)(DAT_00021e88 + 0x21714);
        }
        if (param_1 == 0xc3) {
          return (code *)(DAT_00021e7c + 0x216f0);
        }
        if (param_1 != 0xc4) {
          return (code *)(DAT_00020618 + 0x2011c);
        }
        return (code *)(DAT_00021e80 + 0x216fc);
      }
      if (param_1 == 0xbf) {
        return (code *)(DAT_00021e68 + 0x216b4);
      }
      if (param_1 < 0xbf) {
        return (code *)(DAT_00021e6c + 0x216c0);
      }
      if (param_1 == 0xc0) {
        return (code *)(DAT_00021e70 + 0x216cc);
      }
      if (param_1 != 0xc1) {
        return (code *)(DAT_00020614 + 0x200f4);
      }
      return (code *)(DAT_00021e74 + 0x216d8);
    }
    if (param_1 == 0xb7) {
      return (code *)(DAT_00021e3c + 0x21630);
    }
    if (0xb7 < param_1) {
      if (param_1 == 0xba) {
        return (code *)(DAT_00021e50 + 0x2166c);
      }
      if (0xba < param_1) {
        if (param_1 == 0xbb) {
          return (code *)(DAT_00021e5c + 0x21690);
        }
        if (param_1 != 0xbc) {
          return (code *)(DAT_00020610 + 0x200c0);
        }
        return (code *)(DAT_00021e60 + 0x2169c);
      }
      if (param_1 == 0xb8) {
        return (code *)(DAT_00021e54 + 0x21678);
      }
      if (param_1 != 0xb9) {
        return (code *)(DAT_0002060c + 0x200a4);
      }
      return (code *)(DAT_00021e58 + 0x21684);
    }
    if (param_1 == 0xb4) {
      return (code *)(DAT_00021e40 + 0x2163c);
    }
    if (param_1 < 0xb4) {
      return (code *)(DAT_00021e44 + 0x21648);
    }
    if (param_1 == 0xb5) {
      return (code *)(DAT_00021e48 + 0x21654);
    }
    if (param_1 != 0xb6) {
      return (code *)(DAT_00020608 + 0x2007c);
    }
    return (code *)(DAT_00021e4c + 0x21660);
  }
  if (param_1 == 0x58) {
    return (code *)(DAT_000206d8 + 0x20da8);
  }
  if (0x58 < param_1) {
    if (param_1 == 0x85) {
      return (code *)(DAT_0002083c + 0x211d4);
    }
    if (0x85 < param_1) {
      if (param_1 == 0x9b) {
        return (code *)(DAT_000208f0 + 0x213f0);
      }
      if (0x9b < param_1) {
        if (param_1 == 0xa6) {
          return (code *)(DAT_00021dd4 + 0x214f8);
        }
        if (0xa6 < param_1) {
          if (param_1 == 0xac) {
            return (code *)(DAT_00021e00 + 0x2157c);
          }
          if (0xac < param_1) {
            if (param_1 == 0xaf) {
              return (code *)(DAT_00021e18 + 0x215c4);
            }
            if (0xaf < param_1) {
              if (param_1 == 0xb0) {
                return (code *)(DAT_00021e24 + 0x215e8);
              }
              if (param_1 != 0xb1) {
                return (code *)(DAT_00020604 + 0x20010);
              }
              return (code *)(DAT_00021e28 + 0x215f4);
            }
            if (param_1 == 0xad) {
              return (code *)(DAT_00021e1c + 0x215d0);
            }
            if (param_1 != 0xae) {
              return (code *)(DAT_00020600 + 0x1fff4);
            }
            return (code *)(DAT_00021e20 + 0x215dc);
          }
          if (param_1 == 0xa9) {
            return (code *)(DAT_00021e04 + 0x21588);
          }
          if (0xa9 < param_1) {
            if (param_1 == 0xaa) {
              return (code *)(DAT_00021e10 + 0x215ac);
            }
            if (param_1 != 0xab) {
              return (code *)(DAT_000205fc + 0x1ffcc);
            }
            return (code *)(DAT_00021e14 + 0x215b8);
          }
          if (param_1 == 0xa7) {
            return (code *)(DAT_00021e08 + 0x21594);
          }
          if (param_1 != 0xa8) {
            return (code *)(DAT_000205f8 + 0x1ffb0);
          }
          return (code *)(DAT_00021e0c + 0x215a0);
        }
        if (param_1 == 0xa0) {
          return (code *)(DAT_00021dd8 + 0x21504);
        }
        if (0xa0 < param_1) {
          if (param_1 == 0xa3) {
            return (code *)(DAT_00021dec + 0x21540);
          }
          if (0xa3 < param_1) {
            if (param_1 == 0xa4) {
              return (code *)(DAT_00021df8 + 0x21564);
            }
            if (param_1 != 0xa5) {
              return (code *)(DAT_000205f4 + 0x1ff7c);
            }
            return (code *)(DAT_00021dfc + 0x21570);
          }
          if (param_1 == 0xa1) {
            return (code *)(DAT_00021df0 + 0x2154c);
          }
          if (param_1 != 0xa2) {
            return (code *)(DAT_000205f0 + 0x1ff60);
          }
          return (code *)(DAT_00021df4 + 0x21558);
        }
        if (param_1 == 0x9d) {
          return (code *)(DAT_00021ddc + 0x21510);
        }
        if (param_1 < 0x9d) {
          return (code *)(DAT_00021de0 + 0x2151c);
        }
        if (param_1 == 0x9e) {
          return (code *)(DAT_00021de4 + 0x21528);
        }
        if (param_1 != 0x9f) {
          return (code *)(DAT_000205ec + 0x1ff38);
        }
        return (code *)(DAT_00021de8 + 0x21534);
      }
      if (param_1 == 0x90) {
        return (code *)(DAT_00021d80 + 0x213fc);
      }
      if (0x90 < param_1) {
        if (param_1 == 0x95) {
          return (code *)(DAT_00021dac + 0x21480);
        }
        if (0x95 < param_1) {
          if (param_1 == 0x98) {
            return (code *)(DAT_00021dc0 + 0x214bc);
          }
          if (0x98 < param_1) {
            if (param_1 == 0x99) {
              return (code *)(DAT_00021dcc + 0x214e0);
            }
            if (param_1 != 0x9a) {
              return (code *)(DAT_000205e8 + 0x1fef8);
            }
            return (code *)(DAT_00021dd0 + 0x214ec);
          }
          if (param_1 == 0x96) {
            return (code *)(DAT_00021dc4 + 0x214c8);
          }
          if (param_1 != 0x97) {
            return (code *)(DAT_000205e4 + 0x1fedc);
          }
          return (code *)(DAT_00021dc8 + 0x214d4);
        }
        if (param_1 == 0x92) {
          return (code *)(DAT_00021db0 + 0x2148c);
        }
        if (param_1 < 0x92) {
          return (code *)(DAT_00021db4 + 0x21498);
        }
        if (param_1 == 0x93) {
          return (code *)(DAT_00021db8 + 0x214a4);
        }
        if (param_1 != 0x94) {
          return (code *)(DAT_000205e0 + 0x1feb4);
        }
        return (code *)(DAT_00021dbc + 0x214b0);
      }
      if (param_1 == 0x8a) {
        return (code *)(DAT_00021d84 + 0x21408);
      }
      if (0x8a < param_1) {
        if (param_1 == 0x8d) {
          return (code *)(DAT_00021d98 + 0x21444);
        }
        if (0x8d < param_1) {
          if (param_1 == 0x8e) {
            return (code *)(DAT_00021da4 + 0x21468);
          }
          if (param_1 != 0x8f) {
            return (code *)(DAT_000205dc + 0x1fe80);
          }
          return (code *)(DAT_00021da8 + 0x21474);
        }
        if (param_1 == 0x8b) {
          return (code *)(DAT_00021d9c + 0x21450);
        }
        if (param_1 != 0x8c) {
          return (code *)(DAT_000205d8 + 0x1fe64);
        }
        return (code *)(DAT_00021da0 + 0x2145c);
      }
      if (param_1 == 0x87) {
        return (code *)(DAT_00021d88 + 0x21414);
      }
      if (param_1 < 0x87) {
        return (code *)(DAT_00021d8c + 0x21420);
      }
      if (param_1 == 0x88) {
        return (code *)(DAT_00021d90 + 0x2142c);
      }
      if (param_1 != 0x89) {
        return (code *)(DAT_000205d4 + 0x1fe3c);
      }
      return (code *)(DAT_00021d94 + 0x21438);
    }
    if (param_1 == 0x6e) {
      return (code *)(DAT_00020840 + 0x211e0);
    }
    if (0x6e < param_1) {
      if (param_1 == 0x79) {
        return (code *)(DAT_00020898 + 0x212e8);
      }
      if (0x79 < param_1) {
        if (param_1 == 0x7f) {
          return (code *)(DAT_000208c4 + 0x2136c);
        }
        if (0x7f < param_1) {
          if (param_1 == 0x82) {
            return (code *)(DAT_000208dc + 0x213b4);
          }
          if (0x82 < param_1) {
            if (param_1 == 0x83) {
              return (code *)(DAT_000208e8 + 0x213d8);
            }
            if (param_1 != 0x84) {
              return (code *)(DAT_000205d0 + 0x1fdf0);
            }
            return (code *)(DAT_000208ec + 0x213e4);
          }
          if (param_1 == 0x80) {
            return (code *)(DAT_000208e0 + 0x213c0);
          }
          if (param_1 != 0x81) {
            return (code *)(DAT_000205cc + 0x1fdd4);
          }
          return (code *)(DAT_000208e4 + 0x213cc);
        }
        if (param_1 == 0x7c) {
          return (code *)(DAT_000208c8 + 0x21378);
        }
        if (0x7c < param_1) {
          if (param_1 == 0x7d) {
            return (code *)(DAT_000208d4 + 0x2139c);
          }
          if (param_1 != 0x7e) {
            return (code *)(DAT_000205c8 + 0x1fdac);
          }
          return (code *)(DAT_000208d8 + 0x213a8);
        }
        if (param_1 == 0x7a) {
          return (code *)(DAT_000208cc + 0x21384);
        }
        if (param_1 != 0x7b) {
          return (code *)(DAT_000205c4 + 0x1fd90);
        }
        return (code *)(DAT_000208d0 + 0x21390);
      }
      if (param_1 == 0x73) {
        return (code *)(DAT_0002089c + 0x212f4);
      }
      if (0x73 < param_1) {
        if (param_1 == 0x76) {
          return (code *)(DAT_000208b0 + 0x21330);
        }
        if (0x76 < param_1) {
          if (param_1 == 0x77) {
            return (code *)(DAT_000208bc + 0x21354);
          }
          if (param_1 != 0x78) {
            return (code *)(DAT_000205c0 + 0x1fd5c);
          }
          return (code *)(DAT_000208c0 + 0x21360);
        }
        if (param_1 == 0x74) {
          return (code *)(DAT_000208b4 + 0x2133c);
        }
        if (param_1 != 0x75) {
          return (code *)(DAT_000205bc + 0x1fd40);
        }
        return (code *)(DAT_000208b8 + 0x21348);
      }
      if (param_1 == 0x70) {
        return (code *)(DAT_000208a0 + 0x21300);
      }
      if (param_1 < 0x70) {
        return (code *)(DAT_000208a4 + 0x2130c);
      }
      if (param_1 == 0x71) {
        return (code *)(DAT_000208a8 + 0x21318);
      }
      if (param_1 != 0x72) {
        return (code *)(DAT_000205b8 + 0x1fd18);
      }
      return (code *)(DAT_000208ac + 0x21324);
    }
    if (param_1 == 99) {
      return (code *)(DAT_00020844 + 0x211ec);
    }
    if (99 < param_1) {
      if (param_1 == 0x68) {
        return (code *)(DAT_00020870 + 0x21270);
      }
      if (0x68 < param_1) {
        if (param_1 == 0x6b) {
          return (code *)(DAT_00020884 + 0x212ac);
        }
        if (0x6b < param_1) {
          if (param_1 == 0x6c) {
            return (code *)(DAT_00020890 + 0x212d0);
          }
          if (param_1 != 0x6d) {
            return (code *)(DAT_000205b4 + 0x1fcd8);
          }
          return (code *)(DAT_00020894 + 0x212dc);
        }
        if (param_1 == 0x69) {
          return (code *)(DAT_00020888 + 0x212b8);
        }
        if (param_1 != 0x6a) {
          return (code *)(DAT_000205b0 + 0x1fcbc);
        }
        return (code *)(DAT_0002088c + 0x212c4);
      }
      if (param_1 == 0x65) {
        return (code *)(DAT_00020874 + 0x2127c);
      }
      if (param_1 < 0x65) {
        return (code *)(DAT_00020878 + 0x21288);
      }
      if (param_1 == 0x66) {
        return (code *)(DAT_0002087c + 0x21294);
      }
      if (param_1 != 0x67) {
        return (code *)(DAT_000205ac + 0x1fc94);
      }
      return (code *)(DAT_00020880 + 0x212a0);
    }
    if (param_1 == 0x5d) {
      return (code *)(DAT_00020848 + 0x211f8);
    }
    if (0x5d < param_1) {
      if (param_1 == 0x60) {
        return (code *)(DAT_0002085c + 0x21234);
      }
      if (0x60 < param_1) {
        if (param_1 == 0x61) {
          return (code *)(DAT_00020868 + 0x21258);
        }
        if (param_1 != 0x62) {
          return (code *)(DAT_000205a8 + 0x1fc60);
        }
        return (code *)(DAT_0002086c + 0x21264);
      }
      if (param_1 == 0x5e) {
        return (code *)(DAT_00020860 + 0x21240);
      }
      if (param_1 != 0x5f) {
        return (code *)(DAT_000205a4 + 0x1fc44);
      }
      return (code *)(DAT_00020864 + 0x2124c);
    }
    if (param_1 == 0x5a) {
      return (code *)(DAT_0002084c + 0x21204);
    }
    if (param_1 < 0x5a) {
      return (code *)(DAT_00020850 + 0x21210);
    }
    if (param_1 == 0x5b) {
      return (code *)(DAT_00020854 + 0x2121c);
    }
    if (param_1 != 0x5c) {
      return (code *)(DAT_000205a0 + 0x1fc1c);
    }
    return (code *)(DAT_00020858 + 0x21228);
  }
  if (param_1 == 0x2b) {
    return (code *)(DAT_000206dc + 0x20db4);
  }
  if (0x2b < param_1) {
    if (param_1 == 0x41) {
      return (code *)(DAT_0002078c + 0x20fc4);
    }
    if (0x41 < param_1) {
      if (param_1 == 0x4c) {
        return (code *)(DAT_000207e4 + 0x210cc);
      }
      if (0x4c < param_1) {
        if (param_1 == 0x52) {
          return (code *)(DAT_00020810 + 0x21150);
        }
        if (0x52 < param_1) {
          if (param_1 == 0x55) {
            return (code *)(DAT_00020828 + 0x21198);
          }
          if (0x55 < param_1) {
            if (param_1 == 0x56) {
              return (code *)(DAT_00020834 + 0x211bc);
            }
            if (param_1 != 0x57) {
              return (code *)(DAT_0002059c + 0x1fbc4);
            }
            return (code *)(DAT_00020838 + 0x211c8);
          }
          if (param_1 == 0x53) {
            return (code *)(DAT_0002082c + 0x211a4);
          }
          if (param_1 != 0x54) {
            return (code *)(DAT_00020598 + 0x1fba8);
          }
          return (code *)(DAT_00020830 + 0x211b0);
        }
        if (param_1 == 0x4f) {
          return (code *)(DAT_00020814 + 0x2115c);
        }
        if (0x4f < param_1) {
          if (param_1 == 0x50) {
            return (code *)(DAT_00020820 + 0x21180);
          }
          if (param_1 != 0x51) {
            return (code *)(DAT_00020594 + 0x1fb80);
          }
          return (code *)(DAT_00020824 + 0x2118c);
        }
        if (param_1 == 0x4d) {
          return (code *)(DAT_00020818 + 0x21168);
        }
        if (param_1 != 0x4e) {
          return (code *)(DAT_00020590 + 0x1fb64);
        }
        return (code *)(DAT_0002081c + 0x21174);
      }
      if (param_1 == 0x46) {
        return (code *)(DAT_000207e8 + 0x210d8);
      }
      if (0x46 < param_1) {
        if (param_1 == 0x49) {
          return (code *)(DAT_000207fc + 0x21114);
        }
        if (0x49 < param_1) {
          if (param_1 == 0x4a) {
            return (code *)(DAT_00020808 + 0x21138);
          }
          if (param_1 != 0x4b) {
            return (code *)(DAT_0002058c + 0x1fb30);
          }
          return (code *)(DAT_0002080c + 0x21144);
        }
        if (param_1 == 0x47) {
          return (code *)(DAT_00020800 + 0x21120);
        }
        if (param_1 != 0x48) {
          return (code *)(DAT_00020588 + 0x1fb14);
        }
        return (code *)(DAT_00020804 + 0x2112c);
      }
      if (param_1 == 0x43) {
        return (code *)(DAT_000207ec + 0x210e4);
      }
      if (param_1 < 0x43) {
        return (code *)(DAT_000207f0 + 0x210f0);
      }
      if (param_1 == 0x44) {
        return (code *)(DAT_000207f4 + 0x210fc);
      }
      if (param_1 != 0x45) {
        return (code *)(DAT_00020584 + 0x1faec);
      }
      return (code *)(DAT_000207f8 + 0x21108);
    }
    if (param_1 == 0x36) {
      return (code *)(DAT_00020790 + 0x20fd0);
    }
    if (0x36 < param_1) {
      if (param_1 == 0x3b) {
        return (code *)(DAT_000207bc + 0x21054);
      }
      if (0x3b < param_1) {
        if (param_1 == 0x3e) {
          return (code *)(DAT_000207d0 + 0x21090);
        }
        if (0x3e < param_1) {
          if (param_1 == 0x3f) {
            return (code *)(DAT_000207dc + 0x210b4);
          }
          if (param_1 != 0x40) {
            return (code *)(DAT_00020580 + 0x1faac);
          }
          return (code *)(DAT_000207e0 + 0x210c0);
        }
        if (param_1 == 0x3c) {
          return (code *)(DAT_000207d4 + 0x2109c);
        }
        if (param_1 != 0x3d) {
          return (code *)(DAT_0002057c + 0x1fa90);
        }
        return (code *)(DAT_000207d8 + 0x210a8);
      }
      if (param_1 == 0x38) {
        return (code *)(DAT_000207c0 + 0x21060);
      }
      if (param_1 < 0x38) {
        return (code *)(DAT_000207c4 + 0x2106c);
      }
      if (param_1 == 0x39) {
        return (code *)(DAT_000207c8 + 0x21078);
      }
      if (param_1 != 0x3a) {
        return (code *)(DAT_00020578 + 0x1fa68);
      }
      return (code *)(DAT_000207cc + 0x21084);
    }
    if (param_1 == 0x30) {
      return (code *)(DAT_00020794 + 0x20fdc);
    }
    if (0x30 < param_1) {
      if (param_1 == 0x33) {
        return (code *)(DAT_000207a8 + 0x21018);
      }
      if (0x33 < param_1) {
        if (param_1 == 0x34) {
          return (code *)(DAT_000207b4 + 0x2103c);
        }
        if (param_1 != 0x35) {
          return (code *)(DAT_00020574 + 0x1fa34);
        }
        return (code *)(DAT_000207b8 + 0x21048);
      }
      if (param_1 == 0x31) {
        return (code *)(DAT_000207ac + 0x21024);
      }
      if (param_1 != 0x32) {
        return (code *)(DAT_00020570 + 0x1fa18);
      }
      return (code *)(DAT_000207b0 + 0x21030);
    }
    if (param_1 == 0x2d) {
      return (code *)(DAT_00020798 + 0x20fe8);
    }
    if (param_1 < 0x2d) {
      return (code *)(DAT_0002079c + 0x20ff4);
    }
    if (param_1 == 0x2e) {
      return (code *)(DAT_000207a0 + 0x21000);
    }
    if (param_1 != 0x2f) {
      return (code *)(DAT_0002056c + 0x1f9f0);
    }
    return (code *)(DAT_000207a4 + 0x2100c);
  }
  if (param_1 == 0x15) {
    return (code *)(DAT_000206e0 + 0x20dc0);
  }
  if (0x15 < param_1) {
    if (param_1 == 0x20) {
      return (code *)(DAT_00020738 + 0x20ec8);
    }
    if (0x20 < param_1) {
      if (param_1 == 0x25) {
        return (code *)(DAT_00020764 + 0x20f4c);
      }
      if (0x25 < param_1) {
        if (param_1 == 0x28) {
          return (code *)(DAT_00020778 + 0x20f88);
        }
        if (0x28 < param_1) {
          if (param_1 == 0x29) {
            return (code *)(DAT_00020784 + 0x20fac);
          }
          if (param_1 != 0x2a) {
            return (code *)(DAT_00020568 + 0x1f9a4);
          }
          return (code *)(DAT_00020788 + 0x20fb8);
        }
        if (param_1 == 0x26) {
          return (code *)(DAT_0002077c + 0x20f94);
        }
        if (param_1 != 0x27) {
          return (code *)(DAT_00020564 + 0x1f988);
        }
        return (code *)(DAT_00020780 + 0x20fa0);
      }
      if (param_1 == 0x22) {
        return (code *)(DAT_00020768 + 0x20f58);
      }
      if (param_1 < 0x22) {
        return (code *)(DAT_0002076c + 0x20f64);
      }
      if (param_1 == 0x23) {
        return (code *)(DAT_00020770 + 0x20f70);
      }
      if (param_1 != 0x24) {
        return (code *)(DAT_00020560 + 0x1f960);
      }
      return (code *)(DAT_00020774 + 0x20f7c);
    }
    if (param_1 == 0x1a) {
      return (code *)(DAT_0002073c + 0x20ed4);
    }
    if (0x1a < param_1) {
      if (param_1 == 0x1d) {
        return (code *)(DAT_00020750 + 0x20f10);
      }
      if (0x1d < param_1) {
        if (param_1 == 0x1e) {
          return (code *)(DAT_0002075c + 0x20f34);
        }
        if (param_1 != 0x1f) {
          return (code *)(DAT_0002055c + 0x1f92c);
        }
        return (code *)(DAT_00020760 + 0x20f40);
      }
      if (param_1 == 0x1b) {
        return (code *)(DAT_00020754 + 0x20f1c);
      }
      if (param_1 != 0x1c) {
        return (code *)(DAT_00020558 + 0x1f910);
      }
      return (code *)(DAT_00020758 + 0x20f28);
    }
    if (param_1 == 0x17) {
      return (code *)(DAT_00020740 + 0x20ee0);
    }
    if (param_1 < 0x17) {
      return (code *)(DAT_00020744 + 0x20eec);
    }
    if (param_1 == 0x18) {
      return (code *)(DAT_00020748 + 0x20ef8);
    }
    if (param_1 != 0x19) {
      return (code *)(DAT_00020554 + 0x1f8e8);
    }
    return (code *)(DAT_0002074c + 0x20f04);
  }
  if (param_1 == 10) {
    return (code *)(DAT_000206e4 + 0x20dcc);
  }
  if (10 < param_1) {
    if (param_1 == 0xf) {
      return (code *)(DAT_00020710 + 0x20e50);
    }
    if (0xf < param_1) {
      if (param_1 == 0x12) {
        return (code *)(DAT_00020724 + 0x20e8c);
      }
      if (0x12 < param_1) {
        if (param_1 == 0x13) {
          return (code *)(DAT_00020730 + 0x20eb0);
        }
        if (param_1 != 0x14) {
          return (code *)(DAT_00020550 + 0x1f8a8);
        }
        return (code *)(DAT_00020734 + 0x20ebc);
      }
      if (param_1 == 0x10) {
        return (code *)(DAT_00020728 + 0x20e98);
      }
      if (param_1 != 0x11) {
        return (code *)(DAT_0002054c + 0x1f88c);
      }
      return (code *)(DAT_0002072c + 0x20ea4);
    }
    if (param_1 == 0xc) {
      return (code *)(DAT_00020714 + 0x20e5c);
    }
    if (param_1 < 0xc) {
      return (code *)(DAT_00020718 + 0x20e68);
    }
    if (param_1 == 0xd) {
      return (code *)(DAT_0002071c + 0x20e74);
    }
    if (param_1 != 0xe) {
      return (code *)(DAT_00020548 + 0x1f864);
    }
    return (code *)(DAT_00020720 + 0x20e80);
  }
  if (param_1 == 4) {
    return (code *)(DAT_000206e8 + 0x20dd8);
  }
  if (4 < param_1) {
    if (param_1 == 7) {
      return (code *)(DAT_000206fc + 0x20e14);
    }
    if (7 < param_1) {
      if (param_1 == 8) {
        return (code *)(DAT_00020708 + 0x20e38);
      }
      if (param_1 != 9) {
        return (code *)(DAT_00020544 + 0x1f830);
      }
      return (code *)(DAT_0002070c + 0x20e44);
    }
    if (param_1 == 5) {
      return (code *)(DAT_00020700 + 0x20e20);
    }
    if (param_1 != 6) {
      return (code *)(DAT_00020540 + 0x1f814);
    }
    return (code *)(DAT_00020704 + 0x20e2c);
  }
  if (param_1 == 1) {
    return (code *)(DAT_000206ec + 0x20de4);
  }
  if (param_1 < 2) {
    if (param_1 != 0) {
      return (code *)(DAT_00020538 + 0x1f7d0);
    }
    return (code *)(DAT_000206f0 + 0x20df0);
  }
  if (param_1 == 2) {
    return (code *)(DAT_000206f4 + 0x20dfc);
  }
  if (param_1 != 3) {
    return (code *)(DAT_0002053c + 0x1f7ec);
  }
  return (code *)(DAT_000206f8 + 0x20e08);
}



/* ===== FUN_000221c0 @ 000221c0 size=108 ===== */

char * FUN_000221c0(int *param_1,uint param_2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  char *__s;
  char *__format;
  
  pcVar2 = malloc(0x78);
  if (pcVar2 != (char *)0x0) {
    __format = (char *)(DAT_0002222c + 0x221f4);
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



/* ===== FUN_00022368 @ 00022368 size=20 ===== */

void FUN_00022368(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return;
}



/* ===== FUN_00022584 @ 00022584 size=136 ===== */

int FUN_00022584(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return (int)&DAT_0002260c + DAT_00022628;
  case 1:
    return DAT_0002260c + 0x225b8;
  case 2:
    return DAT_00022610 + 0x225c4;
  case 3:
    return DAT_00022614 + 0x225d0;
  case 4:
    return DAT_00022618 + 0x225dc;
  case 5:
    return DAT_0002261c + 0x225e8;
  case 6:
    return DAT_00022620 + 0x225f4;
  default:
    return DAT_00022624 + 0x22600;
  }
}



/* ===== FUN_00022634 @ 00022634 size=52 ===== */

int FUN_00022634(int param_1)

{
  if (param_1 == 0) {
    return DAT_0002266c + 0x2265c;
  }
  if (param_1 != 1) {
    return DAT_00022668 + 0x22650;
  }
  return (int)&DAT_00022668 + DAT_00022670;
}



/* ===== FUN_00022674 @ 00022674 size=164 ===== */

char * FUN_00022674(uint param_1)

{
  char *__dest;
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *__s;
  char *__format;
  uint local_1c;
  
  local_1c = param_1;
  __dest = malloc(0x32);
  if (__dest != (char *)0x0) {
    *__dest = '\0';
    __s = __dest;
    if ((local_1c & 1) == 0) {
      strcpy(__dest,(char *)(DAT_00022718 + 0x226b4));
      __s = __dest + 5;
    }
    __format = (char *)(DAT_00022720 + 0x226cc);
    for (piVar3 = (int *)(DAT_0002271c + 0x226c8); *piVar3 != 0; piVar3 = piVar3 + 2) {
      uVar2 = (&local_1c)[piVar3[1] >> 5] & 1 << (piVar3[1] & 0x1fU);
      if (uVar2 != 0) {
        iVar1 = sprintf(__s,__format,*piVar3,uVar2,param_1);
        __s = __s + iVar1;
      }
    }
  }
  return __dest;
}



/* ===== FUN_00022724 @ 00022724 size=20 ===== */

void FUN_00022724(undefined4 param_1)

{
  FUN_000221c0(&UNK_00022784 + DAT_00022738,param_1);
  return;
}



/* ===== FUN_0002273c @ 0002273c size=232 ===== */

void FUN_0002273c(char *param_1,uint *param_2)

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
  
  pcVar5 = (char *)((int)&DAT_000227a0 + DAT_00022754);
  uVar6 = 0;
  piVar7 = *(int **)(DAT_0002235c + 0x222a0 + DAT_00022360);
  local_2c = *piVar7;
  local_30 = pcVar5;
  puStack_28 = param_2;
  if ((param_1 != (char *)0x0) &&
     (__ptr = strdup(param_1), iVar2 = DAT_00022364, local_30 = __ptr, __ptr != (char *)0x0)) {
    *param_2 = 0;
    while (__s2 = strsep(&local_30,(char *)(iVar2 + 0x222f8)), pcVar3 = pcVar5, __s2 != (char *)0x0)
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



/* ===== FUN_0002278c @ 0002278c size=20 ===== */

void FUN_0002278c(undefined4 param_1)

{
  FUN_000221c0(DAT_000227a0 + 0x228c4,param_1);
  return;
}



/* ===== FUN_000227a4 @ 000227a4 size=24 ===== */

void FUN_000227a4(char *param_1,uint *param_2)

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
  
  pcVar5 = (char *)(DAT_000227bc + 0x228e0);
  uVar6 = 0;
  piVar7 = *(int **)(DAT_0002235c + 0x222a0 + DAT_00022360);
  iStack_2c = *piVar7;
  pcStack_30 = pcVar5;
  puStack_28 = param_2;
  if ((param_1 != (char *)0x0) &&
     (__ptr = strdup(param_1), iVar2 = DAT_00022364, pcStack_30 = __ptr, __ptr != (char *)0x0)) {
    *param_2 = 0;
    while (__s2 = strsep(&pcStack_30,(char *)(iVar2 + 0x222f8)), pcVar3 = pcVar5,
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



/* ===== FUN_000227c0 @ 000227c0 size=124 ===== */

char * FUN_000227c0(uint param_1)

{
  char *__dest;
  char *__src;
  
  __dest = malloc(0x32);
  if (__dest != (char *)0x0) {
    *__dest = '\0';
    if ((param_1 & 1) == 0) {
      strcpy(__dest,(char *)(DAT_0002283c + 0x227f4));
    }
    __src = (char *)FUN_000221c0(DAT_00022840 + 0x2295c,param_1);
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



/* ===== FUN_00022844 @ 00022844 size=24 ===== */

void FUN_00022844(char *param_1,uint *param_2)

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
  
  pcVar5 = (char *)(DAT_0002285c + 0x229b0);
  uVar6 = 0;
  piVar7 = *(int **)(DAT_0002235c + 0x222a0 + DAT_00022360);
  iStack_2c = *piVar7;
  pcStack_30 = pcVar5;
  puStack_28 = param_2;
  if ((param_1 != (char *)0x0) &&
     (__ptr = strdup(param_1), iVar2 = DAT_00022364, pcStack_30 = __ptr, __ptr != (char *)0x0)) {
    *param_2 = 0;
    while (__s2 = strsep(&pcStack_30,(char *)(iVar2 + 0x222f8)), pcVar3 = pcVar5,
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



/* ===== FUN_00022878 @ 00022878 size=368 ===== */

char * FUN_00022878(int param_1,char *param_2,int param_3)

{
  char *__s;
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  char *__s_00;
  size_t sVar5;
  char *__s_01;
  undefined4 *puVar6;
  char *__s_02;
  char *__format;
  char *__format_00;
  
  sVar5 = 10;
  for (puVar6 = (undefined4 *)(&UNK_00022a38 + DAT_000229e8); (char *)*puVar6 != (char *)0x0;
      puVar6 = puVar6 + 2) {
    if (((int)(uint)*(byte *)(param_1 + ((uint)puVar6[1] >> 3)) >> (puVar6[1] & 7) & 1U) != 0) {
      sVar2 = strlen((char *)*puVar6);
      sVar3 = 0;
      if (param_2 != (char *)0x0) {
        sVar3 = strlen(param_2);
      }
      sVar5 = sVar5 + 3 + sVar2 + sVar3;
    }
  }
  __s = malloc(sVar5);
  if (__s != (char *)0x0) {
    *__s = '\0';
    __s_01 = __s;
    if (param_2 != (char *)0x0) {
      iVar1 = sprintf(__s,(char *)(DAT_000229ec + 0x228dc),param_2);
      __s_01 = __s + iVar1;
    }
    if (param_2 == (char *)0x0) {
      param_2 = (char *)(DAT_000229f0 + 0x22900);
    }
    __format = (char *)(DAT_000229f8 + 0x2290c);
    __format_00 = (char *)(DAT_000229fc + 0x22914);
    __s_02 = __s_01;
    for (iVar1 = DAT_000229f4 + 0x22aac; __s_00 = *(char **)(iVar1 + -8), __s_00 != (char *)0x0;
        iVar1 = iVar1 + 8) {
      if (((int)(uint)*(byte *)(param_1 + (*(uint *)(iVar1 + -4) >> 3)) >>
           (*(uint *)(iVar1 + -4) & 7) & 1U) != 0) {
        sVar5 = strlen(__s_02);
        sVar3 = strlen(__s_00);
        if (param_3 - 3U < sVar5 + sVar3) {
          iVar4 = sprintf(__s_01,__format_00,param_2);
          __s_01 = __s_01 + iVar4;
          __s_02 = __s_01;
        }
        iVar4 = sprintf(__s_01,__format,*(undefined4 *)(iVar1 + -8));
        __s_01 = __s_01 + iVar4;
      }
    }
  }
  return __s;
}



/* ===== FUN_00022a00 @ 00022a00 size=116 ===== */

char * FUN_00022a00(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char *__dest;
  int iVar3;
  char *pcVar4;
  
  iVar3 = DAT_00022a18;
  __dest = malloc(0x32);
  pcVar4 = (char *)0x0;
  if (__dest != (char *)0x0) {
    iVar3 = iVar3 + 0x23300;
    *__dest = '\0';
    do {
      puVar1 = (undefined4 *)(iVar3 + -8);
      if ((char *)*puVar1 == (char *)0x0) {
        return __dest;
      }
      piVar2 = (int *)(iVar3 + -4);
      iVar3 = iVar3 + 8;
    } while (*piVar2 != param_1);
    pcVar4 = strcpy(__dest,(char *)*puVar1);
  }
  return pcVar4;
}



/* ===== thunk_FUN_00022a00 @ 00022a40 size=4 ===== */

char * thunk_FUN_00022a00(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char *__dest;
  int iVar3;
  char *pcVar4;
  
  iVar3 = DAT_00022a18;
  __dest = malloc(0x32);
  pcVar4 = (char *)0x0;
  if (__dest != (char *)0x0) {
    iVar3 = iVar3 + 0x23300;
    *__dest = '\0';
    do {
      puVar1 = (undefined4 *)(iVar3 + -8);
      if ((char *)*puVar1 == (char *)0x0) {
        return __dest;
      }
      piVar2 = (int *)(iVar3 + -4);
      iVar3 = iVar3 + 8;
    } while (*piVar2 != param_1);
    pcVar4 = strcpy(__dest,(char *)*puVar1);
  }
  return pcVar4;
}



/* ===== FUN_00022a48 @ 00022a48 size=20 ===== */

char * FUN_00022a48(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char *__dest;
  int iVar3;
  char *pcVar4;
  
  iVar3 = DAT_00022a5c;
  __dest = malloc(0x32);
  pcVar4 = (char *)0x0;
  if (__dest != (char *)0x0) {
    iVar3 = iVar3 + 0x23390;
    *__dest = '\0';
    do {
      puVar1 = (undefined4 *)(iVar3 + -8);
      if ((char *)*puVar1 == (char *)0x0) {
        return __dest;
      }
      piVar2 = (int *)(iVar3 + -4);
      iVar3 = iVar3 + 8;
    } while (*piVar2 != param_1);
    pcVar4 = strcpy(__dest,(char *)*puVar1);
  }
  return pcVar4;
}



/* ===== FUN_00022a80 @ 00022a80 size=436 ===== */

char * FUN_00022a80(byte *param_1,char *param_2,int param_3)

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
  
  iVar6 = DAT_00022c34 + 0x233e8;
  iVar4 = DAT_00022c34 + 0x23628;
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
      iVar8 = sprintf(__s,(char *)(DAT_00022c38 + 0x22b14),param_2);
      __s_01 = __s + iVar8;
    }
    pbVar7 = param_1 + 8;
    if (param_2 == (char *)0x0) {
      param_2 = (char *)(DAT_00022c3c + 0x22b30);
    }
    __format = (char *)(DAT_00022c40 + 0x22b44);
    __format_00 = (char *)(DAT_00022c44 + 0x22b48);
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



/* ===== FUN_00022c48 @ 00022c48 size=296 ===== */

uint FUN_00022c48(uint param_1,code *param_2,undefined4 param_3)

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
  __fd = socket(0x1f,DAT_00022d70,1);
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
      __request = DAT_00022d74;
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
            goto LAB_00022d28;
          }
          puVar4 = puVar4 + 4;
        }
        iVar5 = 0x13;
      }
      uVar3 = 0xffffffff;
LAB_00022d28:
      free(__ptr);
    }
    close(__fd);
    *piVar1 = iVar5;
  }
  return uVar3;
}



/* ===== FUN_00022d78 @ 00022d78 size=92 ===== */

void FUN_00022d78(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_14;
  uint local_10;
  undefined4 *local_c;
  
  piVar3 = *(int **)(DAT_00022dd4 + 0x22d8c + DAT_00022dd8);
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
  FUN_00022c48(0,DAT_00022ddc + 0x22db4,puVar2,puVar1,param_1);
  if (local_c != (undefined4 *)*piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00023114 @ 00023114 size=160 ===== */

void FUN_00023114(undefined2 param_1)

{
  int __fd;
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  sockaddr local_24;
  
  piVar4 = *(int **)(DAT_000231b4 + 0x23124 + DAT_000231b8);
  local_24.sa_data._6_4_ = *piVar4;
  __fd = socket(0x1f,DAT_000231bc,1);
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



/* ===== <EXTERNAL>::close @ 000231c0 size=4 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00042fc0)(__fd);
  return iVar1;
}



/* ===== FUN_000231c4 @ 000231c4 size=192 ===== */

void FUN_000231c4(int param_1,short param_2,int param_3,int param_4,undefined4 param_5)

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
  piVar4 = *(int **)(DAT_00023284 + 0x231e4 + DAT_00023288);
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
      goto LAB_00023268;
    }
    piVar3 = __errno_location();
  } while (*piVar3 == 4 || *piVar3 == 0xb);
  uVar2 = 0xffffffff;
LAB_00023268:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_0002328c @ 0002328c size=788 ===== */

void FUN_0002328c(int param_1,short *param_2,uint param_3)

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
  
  piVar6 = *(int **)(DAT_000235a0 + 0x232a0 + DAT_000235a4);
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
      iVar1 = FUN_000231c4(param_1,*param_2,param_2[1],(char)param_2[6],*(undefined4 *)(param_2 + 4)
                          );
      if (-1 < iVar1) {
        local_16c = 0xb;
LAB_0002356c:
        do {
          local_16c = local_16c + -1;
          if (local_16c == 0) {
LAB_000233e0:
            piVar3 = __errno_location();
            iVar1 = 0x6e;
LAB_000234b4:
            *piVar3 = iVar1;
            goto LAB_00023380;
          }
          if (param_3 != 0) {
            local_158.events = 1;
            local_158.fd = param_1;
            while( true ) {
              iVar1 = poll(&local_158,1,param_3);
              if (-1 < iVar1) break;
              piVar3 = __errno_location();
              if (*piVar3 != 4 && *piVar3 != 0xb) goto LAB_00023380;
            }
            if (iVar1 == 0) goto LAB_000233e0;
            param_3 = param_3 - 10 & ~((int)(param_3 - 10) >> 0x1f);
          }
          while (sVar4 = read(param_1,&uStack_130,0x104), sVar4 < 0) {
            piVar3 = __errno_location();
            if (*piVar3 != 4 && *piVar3 != 0xb) goto LAB_00023380;
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
              goto LAB_000234e0;
            }
            goto LAB_0002356c;
          }
          if (uVar5 < 0xf) {
            if (uVar5 != 7) goto LAB_00023440;
            if (*(int *)(param_2 + 2) != 7) goto LAB_0002356c;
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
                  goto LAB_000234b4;
                }
              }
              goto LAB_0002356c;
            }
            if (uVar5 == 0x3e) {
              if ((uint)local_12d == *(uint *)(param_2 + 2)) {
                __src = auStack_12c;
                __n = *(size_t *)(param_2 + 10);
                if ((int)(sVar4 - 4U) < (int)*(size_t *)(param_2 + 10)) {
                  __n = sVar4 - 4U;
                }
                *(size_t *)(param_2 + 10) = __n;
                goto LAB_000234e0;
              }
              goto LAB_0002356c;
            }
LAB_00023440:
            bVar8 = uVar5 == *(uint *)(param_2 + 2);
          }
        } while (!bVar8);
        __src = &local_12d;
        __n = *(size_t *)(param_2 + 10);
        if ((int)(sVar4 - 3U) < (int)*(size_t *)(param_2 + 10)) {
          __n = sVar4 - 3U;
        }
        *(size_t *)(param_2 + 10) = __n;
LAB_000234e0:
        memcpy(*(void **)(param_2 + 8),__src,__n);
        setsockopt(param_1,0,2,auStack_140,0x10);
        uVar2 = 0;
        goto LAB_00023508;
      }
LAB_00023380:
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      setsockopt(param_1,0,2,auStack_140,0x10);
      *piVar3 = iVar1;
    }
  }
  uVar2 = 0xffffffff;
LAB_00023508:
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



/* ===== FUN_000235a8 @ 000235a8 size=228 ===== */

void FUN_000235a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
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
  
  piVar4 = *(int **)(DAT_0002368c + 0x235c8 + DAT_00023690);
  local_1c = *piVar4;
  local_2c = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_23 = 0;
  local_22 = 0;
  local_20 = 0;
  FUN_00022368(&local_2c);
  local_24 = 2;
  local_50 = DAT_00023694;
  uStack_4c = 3;
  local_20 = param_5;
  local_44 = 0xd;
  local_40 = local_38;
  local_3c = 0xb;
  local_48 = &local_2c;
  local_22 = param_4;
  iVar1 = FUN_0002328c(param_1,&local_50,param_7);
  if (-1 < iVar1) {
    if ((local_38[0] & 0xff) == 0) {
      *param_6 = (short)(local_38[0] >> 8);
      uVar3 = 0;
      goto LAB_00023670;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00023670:
  if (local_1c == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_00023a28 @ 00023a28 size=180 ===== */

void FUN_00023a28(undefined4 param_1,size_t param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  char *local_120;
  undefined4 local_11c;
  char local_118;
  char acStack_117 [247];
  char local_20;
  int local_1c;
  
  piVar4 = *(int **)(DAT_00023adc + 0x23a48 + DAT_00023ae0);
  local_1c = *piVar4;
  local_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_130 = DAT_00023ae4;
  local_120 = &local_118;
  local_11c = 0xf9;
  iVar1 = FUN_0002328c(param_1,&local_130,param_4);
  if (-1 < iVar1) {
    if (local_118 == '\0') {
      local_20 = local_118;
      strncpy(param_3,acStack_117,param_2);
      uVar3 = 0;
      goto LAB_00023ac0;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00023ac0:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_00023ae8 @ 00023ae8 size=140 ===== */

int FUN_00023ae8(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_124;
  undefined4 local_120;
  char *pcStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  char acStack_10c [248];
  int local_14;
  
  piVar2 = *(int **)(DAT_00023b74 + 0x23afc + DAT_00023b78);
  local_14 = *piVar2;
  pcStack_11c = strncpy(acStack_10c,param_2,0xf8);
  uStack_110 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_120 = 0;
  local_124 = DAT_00023b7c;
  local_118 = 0xf8;
  local_114 = 0;
  iVar1 = FUN_0002328c(param_1,&local_124,param_3);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 >> 0x1f;
}



/* ===== FUN_00023b80 @ 00023b80 size=228 ===== */

void FUN_00023b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
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
  
  piVar4 = *(int **)(DAT_00023c64 + 0x23ba0 + DAT_00023c68);
  local_1c = *piVar4;
  local_128 = 0;
  uStack_126 = 0;
  uStack_122 = 0;
  uStack_121 = 0;
  local_120 = 0;
  FUN_00022368(&local_128);
  local_134 = 10;
  local_130 = local_11c;
  local_140 = DAT_00023c6c;
  uStack_13c = 7;
  local_12c = 0xff;
  local_138 = &local_128;
  local_120 = param_4;
  iVar1 = FUN_0002328c(param_1,&local_140,param_7);
  if (-1 < iVar1) {
    if (local_11c[0] == '\0') {
      local_1e = local_11c[0];
      strncpy(param_6,acStack_115,param_5);
      uVar3 = 0;
      goto LAB_00023c48;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00023c48:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_00024064 @ 00024064 size=200 ===== */

void FUN_00024064(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined1 local_34;
  undefined1 uStack_31;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = &local_38;
  piVar4 = *(int **)(DAT_0002412c + 0x24078 + DAT_00024130);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_00024134;
  local_18 = 9;
  iVar1 = FUN_0002328c(param_1,&local_2c);
  if (-1 < iVar1) {
    if (local_38 == '\0') {
      *param_2 = (short)((uint)_local_34 >> 8);
      *(undefined1 *)(param_2 + 1) = local_37;
      param_2[2] = local_36;
      *(undefined1 *)(param_2 + 3) = local_34;
      param_2[4] = CONCAT11(local_30,uStack_31);
      uVar3 = 0;
      goto LAB_00024110;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00024110:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_00024138 @ 00024138 size=192 ===== */

void FUN_00024138(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar6;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char *local_60;
  undefined4 local_5c;
  char local_58;
  undefined4 auStack_57 [16];
  undefined1 auStack_17 [11];
  undefined4 *puVar5;
  
  piVar6 = *(int **)(DAT_000241f8 + 0x2414c + DAT_000241fc);
  auStack_17._3_4_ = *piVar6;
  local_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_70 = DAT_00024200;
  local_60 = &local_58;
  local_5c = 0x41;
  iVar1 = FUN_0002328c(param_1,&local_70);
  if (-1 < iVar1) {
    if (local_58 == '\0') {
      if (param_2 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        puVar4 = auStack_57;
        do {
          puVar5 = puVar4 + 1;
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar5;
        } while (puVar5 != (undefined4 *)auStack_17);
        uVar3 = 0;
      }
      goto LAB_000241dc;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000241dc:
  if (auStack_17._3_4_ == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_000242c0 @ 000242c0 size=212 ===== */

void FUN_000242c0(undefined4 param_1,undefined1 param_2,undefined1 *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 *local_30;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_24;
  char local_20 [2];
  undefined1 local_1e;
  undefined4 local_1d;
  undefined4 local_19;
  int local_14;
  
  piVar4 = *(int **)(DAT_00024394 + 0x242e0 + DAT_00024398);
  local_14 = *piVar4;
  local_38 = DAT_0002439c;
  uStack_34 = 0;
  local_30 = local_3c;
  local_2c = 1;
  local_28 = local_20;
  local_24 = 0xb;
  local_3c[0] = param_2;
  iVar1 = FUN_0002328c(param_1,&local_38,param_5);
  if (-1 < iVar1) {
    if (local_20[0] == '\0') {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = local_1e;
      }
      if (param_4 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        *param_4 = local_1d;
        param_4[1] = local_19;
      }
      goto LAB_00024378;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00024378:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_0002445c @ 0002445c size=164 ===== */

void FUN_0002445c(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char *local_20;
  undefined4 local_1c;
  char local_18;
  undefined2 local_17;
  undefined1 local_15;
  int local_14;
  
  piVar4 = *(int **)(DAT_00024500 + 0x24470 + DAT_00024504);
  local_14 = *piVar4;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_30 = DAT_00024508;
  local_20 = &local_18;
  local_1c = 4;
  iVar1 = FUN_0002328c(param_1,&local_30);
  if (-1 < iVar1) {
    if (local_18 == '\0') {
      *param_2 = local_17;
      *(undefined1 *)(param_2 + 1) = local_15;
      uVar3 = 0;
      goto LAB_000244e4;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000244e4:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_0002450c @ 0002450c size=120 ===== */

void FUN_0002450c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 *puStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined2 local_10;
  undefined1 local_e;
  int local_c;
  
  piVar1 = *(int **)(DAT_00024584 + 0x2451c + DAT_00024588);
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_c = *piVar1;
  local_10 = (undefined2)param_2;
  local_24 = 0;
  local_e = (undefined1)((uint)param_2 >> 0x10);
  local_28 = DAT_0002458c;
  puStack_20 = &local_10;
  local_1c = 3;
  local_18 = 0;
  FUN_0002328c(param_1,&local_28);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00024590 @ 00024590 size=156 ===== */

void FUN_00024590(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = (undefined1 *)&local_30;
  piVar4 = *(int **)(DAT_0002462c + 0x245a4 + DAT_00024630);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_00024634;
  local_18 = 3;
  iVar1 = FUN_0002328c(param_1,&local_2c);
  if (-1 < iVar1) {
    if ((local_30 & 0xff) == 0) {
      *param_2 = (short)(local_30 >> 8);
      uVar3 = 0;
      goto LAB_00024610;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00024610:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_00024638 @ 00024638 size=112 ===== */

void FUN_00024638(undefined4 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined2 local_28 [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  puStack_1c = (undefined1 *)local_28;
  piVar1 = *(int **)(DAT_000246a8 + 0x24648 + DAT_000246ac);
  uStack_10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_c = *piVar1;
  local_20 = 0;
  local_14 = 0;
  local_24 = DAT_000246b0;
  local_18 = 2;
  local_28[0] = param_2;
  FUN_0002328c(param_1,&local_24);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_000246b4 @ 000246b4 size=184 ===== */

void FUN_000246b4(undefined4 param_1,byte *param_2,void *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  char *local_e8;
  undefined4 local_e4;
  char local_e0;
  byte local_df;
  undefined1 auStack_de [194];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0002476c + 0x246d4 + DAT_00024770);
  local_1c = *piVar4;
  local_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  local_f8 = DAT_00024774;
  local_e8 = &local_e0;
  local_e4 = 0xc2;
  iVar1 = FUN_0002328c(param_1,&local_f8,param_4);
  if (-1 < iVar1) {
    if (local_e0 == '\0') {
      *param_2 = local_df;
      memcpy(param_3,auStack_de,(uint)local_df * 3);
      uVar3 = 0;
      goto LAB_00024750;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00024750:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_00024778 @ 00024778 size=172 ===== */

void FUN_00024778(undefined4 param_1,int param_2,void *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 *puStack_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 local_e8;
  undefined1 auStack_e7 [195];
  int local_24;
  
  piVar1 = *(int **)(DAT_00024824 + 0x24798 + DAT_00024828);
  local_24 = *piVar1;
  memset(&local_e8,0,0xc1);
  local_e8 = (undefined1)param_2;
  memcpy(auStack_e7,param_3,param_2 * 3);
  uStack_ec = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_fc = 0;
  local_100 = DAT_0002482c;
  local_f0 = 0;
  puStack_f8 = &local_e8;
  local_f4 = param_2 * 3 + 1;
  FUN_0002328c(param_1,&local_100,param_4);
  if (local_24 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00024994 @ 00024994 size=148 ===== */

void FUN_00024994(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined2 uStack_20;
  undefined1 local_1e;
  int local_1c;
  
  piVar1 = *(int **)(DAT_00024a28 + 0x249b4 + DAT_00024a2c);
  local_1c = *piVar1;
  local_24 = 0;
  uStack_20 = 0;
  local_1e = 0;
  FUN_00022368(&local_24,param_2,param_4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_38 = 0;
  local_3c = DAT_00024a30;
  local_30 = 7;
  local_2c = 0;
  puStack_34 = &local_24;
  local_1e = param_3;
  FUN_0002328c(param_1,&local_3c);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== FUN_00024e40 @ 00024e40 size=152 ===== */

void FUN_00024e40(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = &local_30;
  piVar4 = *(int **)(DAT_00024ed8 + 0x24e54 + DAT_00024edc);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_00024ee0;
  local_18 = 2;
  iVar1 = FUN_0002328c(param_1,&local_2c);
  if (-1 < iVar1) {
    if (local_30 == '\0') {
      *param_2 = local_2f;
      uVar3 = 0;
      goto LAB_00024ebc;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00024ebc:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_00024ee4 @ 00024ee4 size=152 ===== */

void FUN_00024ee4(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_2c [4];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_00024f7c + 0x24ef4 + DAT_00024f80);
  local_14 = local_28;
  local_c = *piVar4;
  local_20 = 0;
  local_24 = DAT_00024f84;
  local_1c = local_2c;
  local_18 = 1;
  local_10 = 1;
  local_2c[0] = param_2;
  iVar1 = FUN_0002328c(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_00024f60;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00024f60:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_00024f88 @ 00024f88 size=152 ===== */

void FUN_00024f88(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = &local_30;
  piVar4 = *(int **)(DAT_00025020 + 0x24f9c + DAT_00025024);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_00025028;
  local_18 = 2;
  iVar1 = FUN_0002328c(param_1,&local_2c);
  if (-1 < iVar1) {
    if (local_30 == '\0') {
      *param_2 = local_2f;
      uVar3 = 0;
      goto LAB_00025004;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00025004:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_0002502c @ 0002502c size=152 ===== */

void FUN_0002502c(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_2c [4];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_000250c4 + 0x2503c + DAT_000250c8);
  local_14 = local_28;
  local_c = *piVar4;
  local_20 = 0;
  local_24 = DAT_000250cc;
  local_1c = local_2c;
  local_18 = 1;
  local_10 = 1;
  local_2c[0] = param_2;
  iVar1 = FUN_0002328c(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_000250a8;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000250a8:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_000250d0 @ 000250d0 size=152 ===== */

void FUN_000250d0(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = &local_30;
  piVar4 = *(int **)(DAT_00025168 + 0x250e4 + DAT_0002516c);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_00025170;
  local_18 = 2;
  iVar1 = FUN_0002328c(param_1,&local_2c);
  if (-1 < iVar1) {
    if (local_30 == '\0') {
      *param_2 = local_2f;
      uVar3 = 0;
      goto LAB_0002514c;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0002514c:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_00025174 @ 00025174 size=152 ===== */

void FUN_00025174(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_2c [4];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_0002520c + 0x25184 + DAT_00025210);
  local_14 = local_28;
  local_c = *piVar4;
  local_20 = 0;
  local_24 = DAT_00025214;
  local_1c = local_2c;
  local_18 = 1;
  local_10 = 1;
  local_2c[0] = param_2;
  iVar1 = FUN_0002328c(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_000251f0;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000251f0:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_00025218 @ 00025218 size=184 ===== */

void FUN_00025218(undefined4 param_1,undefined1 *param_2,void *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  char *local_118;
  undefined4 local_114;
  char local_110;
  undefined1 local_10f;
  undefined1 auStack_10e [242];
  int local_1c;
  
  piVar4 = *(int **)(DAT_000252d0 + 0x25238 + DAT_000252d4);
  local_1c = *piVar4;
  local_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  local_128 = DAT_000252d8;
  local_118 = &local_110;
  local_114 = 0xf2;
  iVar1 = FUN_0002328c(param_1,&local_128,param_4);
  if (-1 < iVar1) {
    if (local_110 == '\0') {
      *param_2 = local_10f;
      memcpy(param_3,auStack_10e,0xf0);
      uVar3 = 0;
      goto LAB_000252b4;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000252b4:
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_000252dc @ 000252dc size=188 ===== */

void FUN_000252dc(undefined4 param_1,undefined1 param_2,void *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_124 [4];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined1 *local_118;
  undefined4 local_114;
  char *local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined1 auStack_107 [243];
  int local_14;
  
  piVar4 = *(int **)(DAT_00025398 + 0x25300 + DAT_0002539c);
  local_14 = *piVar4;
  local_108 = param_2;
  memcpy(auStack_107,param_3,0xf0);
  local_118 = &local_108;
  local_114 = 0xf1;
  local_110 = local_124;
  local_120 = DAT_000253a0;
  uStack_11c = 0;
  local_10c = 1;
  iVar1 = FUN_0002328c(param_1,&local_120,param_4);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_124[0] == '\0') goto LAB_0002537c;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_0002537c:
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_000253a4 @ 000253a4 size=152 ===== */

void FUN_000253a4(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = &local_30;
  piVar4 = *(int **)(DAT_0002543c + 0x253b8 + DAT_00025440);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_00025444;
  local_18 = 2;
  iVar1 = FUN_0002328c(param_1,&local_2c);
  if (-1 < iVar1) {
    if (local_30 == '\0') {
      *param_2 = local_2f;
      uVar3 = 0;
      goto LAB_00025420;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00025420:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_00025448 @ 00025448 size=152 ===== */

void FUN_00025448(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_2c [4];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_000254e0 + 0x25458 + DAT_000254e4);
  local_14 = local_28;
  local_c = *piVar4;
  local_20 = 0;
  local_24 = DAT_000254e8;
  local_1c = local_2c;
  local_18 = 1;
  local_10 = 1;
  local_2c[0] = param_2;
  iVar1 = FUN_0002328c(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_000254c4;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000254c4:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== FUN_000254ec @ 000254ec size=212 ===== */

void FUN_000254ec(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char *local_40;
  undefined4 local_3c;
  char local_38;
  undefined4 auStack_37 [4];
  undefined4 auStack_27 [4];
  undefined1 auStack_17 [7];
  
  piVar6 = *(int **)(DAT_000255c0 + 0x2550c + DAT_000255c4);
  auStack_17._3_4_ = *piVar6;
  local_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_50 = DAT_000255c8;
  local_40 = &local_38;
  local_3c = 0x21;
  iVar1 = FUN_0002328c(param_1,&local_50,param_4);
  if (-1 < iVar1) {
    if (local_38 == '\0') {
      puVar4 = auStack_37;
      do {
        puVar5 = puVar4 + 1;
        *param_2 = *puVar4;
        param_2 = param_2 + 1;
        puVar4 = puVar5;
      } while (puVar5 != auStack_27);
      do {
        puVar4 = puVar5 + 1;
        *param_3 = *puVar5;
        param_3 = param_3 + 1;
        puVar5 = puVar4;
      } while (puVar4 != (undefined4 *)auStack_17);
      uVar3 = 0;
      goto LAB_000255a4;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000255a4:
  if (auStack_17._3_4_ == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_000255cc @ 000255cc size=152 ===== */

void FUN_000255cc(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_1c = &local_30;
  piVar4 = *(int **)(DAT_00025664 + 0x255e0 + DAT_00025668);
  local_14 = *piVar4;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = DAT_0002566c;
  local_18 = 2;
  iVar1 = FUN_0002328c(param_1,&local_2c);
  if (-1 < iVar1) {
    if (local_30 == '\0') {
      *param_2 = local_2f;
      uVar3 = 0;
      goto LAB_00025648;
    }
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_00025648:
  if (local_14 == *piVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== FUN_00025674 @ 00025674 size=152 ===== */

void FUN_00025674(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_2c [4];
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  int local_c;
  
  piVar4 = *(int **)(DAT_0002570c + 0x25684 + DAT_00025710);
  local_14 = local_28;
  local_c = *piVar4;
  local_20 = 0;
  local_24 = DAT_00025714;
  local_1c = local_2c;
  local_18 = 1;
  local_10 = 1;
  local_2c[0] = param_2;
  iVar1 = FUN_0002328c(param_1,&local_24);
  if (-1 < iVar1) {
    uVar3 = 0;
    if (local_28[0] == '\0') goto LAB_000256f0;
    piVar2 = __errno_location();
    *piVar2 = 5;
  }
  uVar3 = 0xffffffff;
LAB_000256f0:
  if (local_c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}



/* ===== _DT_FINI @ 0002628c size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::putchar @ 00044000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00044004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ioctl @ 00044008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::writev @ 0004400c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00044010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00044014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00044018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 0004401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::munmap @ 00044020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0004402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 00044030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00044034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00044038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0004403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 00044040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtoul @ 00044044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00044048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0004404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00044050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fstat64 @ 00044054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat64(int __fd,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 00044058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0004405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00044060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::bind @ 00044064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vprintf @ 00044068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vprintf(char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0004406c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::setsockopt @ 00044070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00044074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0004407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00044080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00044084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcasecmp @ 00044088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcasecmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcmp @ 0004408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sscanf @ 00044090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncat @ 00044094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncat(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00044098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0004409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strdup @ 000440a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strdup(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000440a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::open64 @ 000440a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open64(char *__file,int __oflag,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::poll @ 000440ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000440b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000440b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmap64 @ 000440bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strsep @ 000440c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strsep(char **__stringp,char *__delim)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getsockopt @ 000440c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 000440c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000440cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 000440d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000440d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000440d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 000440dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 000440e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfprintf @ 000440e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strpbrk @ 000440e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strpbrk(char *__s,char *__accept)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000440ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


