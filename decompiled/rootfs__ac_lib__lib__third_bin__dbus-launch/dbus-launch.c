// dbus-launch — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010b98 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::execvp @ 00010bbc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execvp_00022f10)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010bc8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00022f14)();
  return;
}



/* ===== <EXTERNAL>::write @ 00010be0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00022f1c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::pipe @ 00010bec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe_00022f20)(__pipedes);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010bf8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00022f24)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 00010c04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00022f28)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00010c10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00022f2c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::putenv @ 00010c1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putenv(char *__string)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putenv_00022f30)(__string);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 00010c28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00022f34)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::fork @ 00010c34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_00022f38)();
  return _Var1;
}



/* ===== <EXTERNAL>::strcat @ 00010c40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00022f3c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::fflush @ 00010c4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00022f40)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strncmp @ 00010c58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00022f44)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strcpy @ 00010c64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00022f48)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::sleep @ 00010c70 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00022f4c)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::_dbus_strdup @ 00010c7c size=12 ===== */

void _dbus_strdup(void)

{
  (*(code *)PTR__dbus_strdup_00022f50)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 00010c88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00022f54)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::kill @ 00010c94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_kill_00022f58)(__pid);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 00010ca0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00022f5c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::_dbus_ensure_standard_fds @ 00010cac size=12 ===== */

void _dbus_ensure_standard_fds(void)

{
  (*(code *)PTR__dbus_ensure_standard_fds_00022f60)();
  return;
}



/* ===== <EXTERNAL>::printf @ 00010cb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00022f64)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::waitpid @ 00010cc4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_00022f68)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::strncpy @ 00010cd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00022f6c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::sigemptyset @ 00010cdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigemptyset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigemptyset_00022f70)(__set);
  return iVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010ce8 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00022f74)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010cf4 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00022f78)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00010d00 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00022f7c)(__status);
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010d0c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00022f80)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::execlp @ 00010d18 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execlp(char *__file,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execlp_00022f84)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::close @ 00010d24 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00022f88)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::execl @ 00010d30 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execl(char *__path,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execl_00022f8c)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 00010d3c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00022f90)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00010d48 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00022f94)();
  return piVar1;
}



/* ===== <EXTERNAL>::_dbus_strerror @ 00010d54 size=12 ===== */

void _dbus_strerror(void)

{
  (*(code *)PTR__dbus_strerror_00022f98)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00010d60 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00022f9c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::chdir @ 00010d6c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chdir(char *__path)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_chdir_00022fa0)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 00010d78 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00022fa4)(__ptr);
  return;
}



/* ===== <EXTERNAL>::isatty @ 00010d84 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isatty_00022fa8)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00010d90 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00022fac)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00010d9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00022fb0)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::select @ 00010da8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00022fb4)(__nfds);
  return iVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010db4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00022fb8)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::getenv @ 00010dc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00022fbc)(__name);
  return pcVar1;
}



/* ===== <EXTERNAL>::sigaction @ 00010dcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_00022fc0)(__sig);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00010dd8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00022fc4)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::strlen @ 00010de4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00022fc8)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::strtol @ 00010df0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00022fcc)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00010dfc size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00022fd0)();
  return;
}



/* ===== FUN_00010e08 @ 00010e08 size=4008 ===== */

void FUN_00010e08(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  size_t sVar10;
  __pid_t _Var11;
  char *pcVar12;
  __pid_t _Var13;
  ssize_t sVar14;
  __fd_mask *p_Var15;
  char **__argv;
  char *pcVar16;
  char *pcVar17;
  int iVar18;
  undefined4 *puVar19;
  char *pcVar20;
  char *__s2;
  char *__s2_00;
  int *piVar21;
  char *__s1;
  FILE *pFVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  sigaction *__act;
  int iVar26;
  int iVar27;
  char *pcVar28;
  char *pcVar29;
  char **ppcVar30;
  char *local_3e0;
  undefined4 local_3b0;
  char *local_3ac;
  char *local_3a8;
  char *local_3a4;
  int local_3a0;
  int local_39c;
  int local_398;
  int local_394;
  int local_390;
  int local_38c;
  undefined1 local_388 [12];
  size_t local_37c;
  ulong local_374;
  ulong uStack_370;
  uint local_36c [32];
  uint local_2ec [32];
  char acStack_26c [64];
  char acStack_22c [512];
  int local_2c;
  
  iVar26 = DAT_00011db0 + 0x10e20;
  piVar21 = *(int **)(iVar26 + DAT_00011db4);
  local_2c = *piVar21;
  iVar6 = _dbus_ensure_standard_fds(0,&local_3b0);
  if (iVar6 == 0) {
    pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
    piVar7 = __errno_location();
    uVar8 = _dbus_strerror(*piVar7);
    fprintf(pFVar22,(char *)(DAT_00011dbc + 0x10e78),local_3b0,uVar8);
    if (local_2c == *piVar21) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  pcVar28 = (char *)0x0;
  bVar3 = false;
  iVar6 = 1;
  pcVar20 = (char *)(DAT_00011e20 + 0x11258);
  bVar1 = false;
  __s2 = (char *)(DAT_00011e24 + 0x11278);
  local_3e0 = (char *)0x0;
  __s2_00 = (char *)(DAT_00011e28 + 0x11288);
  bVar5 = false;
  bVar2 = false;
  bVar4 = false;
  pcVar16 = pcVar28;
  pcVar12 = pcVar28;
  pcVar17 = pcVar28;
  pcVar29 = pcVar28;
LAB_0001105c:
  if (param_1 <= iVar6) goto code_r0x00011068;
  __s1 = *(char **)(param_2 + iVar6 * 4);
  iVar23 = strcmp(__s1,pcVar20);
  if (((iVar23 == 0) || (iVar23 = strcmp(__s1,__s2), iVar23 == 0)) ||
     (iVar23 = strcmp(__s1,__s2_00), iVar23 == 0)) {
    fputs((char *)(DAT_00011dc0 + 0x10ee8),(FILE *)**(undefined4 **)(iVar26 + DAT_00011db8));
    goto LAB_00010eec;
  }
  iVar23 = strcmp(__s1,(char *)(DAT_00011dc4 + 0x10f04));
  if (iVar23 == 0) {
    pcVar29 = (char *)0x1;
  }
  else {
    iVar23 = strcmp(__s1,(char *)(DAT_00011dc8 + 0x10f1c));
    if ((iVar23 == 0) || (iVar23 = strcmp(__s1,(char *)(DAT_00011dcc + 0x10f34)), iVar23 == 0)) {
      local_3e0 = (char *)0x1;
    }
    else {
      iVar23 = strcmp(__s1,(char *)(DAT_00011dd0 + 0x10f4c));
      if ((iVar23 == 0) || (iVar23 = strcmp(__s1,(char *)(DAT_00011dd4 + 0x10f64)), iVar23 == 0)) {
        pcVar28 = (char *)0x1;
      }
      else {
        iVar23 = strcmp(__s1,(char *)(DAT_00011dd8 + 0x10f7c));
        if (iVar23 == 0) {
          bVar5 = true;
        }
        else {
          iVar23 = strcmp(__s1,(char *)(DAT_00011ddc + 0x10f94));
          if (iVar23 == 0) {
            printf((char *)(DAT_00011de4 + 0x10fb0),DAT_00011de0 + 0x10fac);
            goto LAB_00010eec;
          }
          iVar23 = strcmp(__s1,(char *)(DAT_00011de8 + 0x10fc8));
          if (iVar23 == 0) {
            bVar4 = true;
          }
          else {
            iVar23 = strcmp(__s1,(char *)(DAT_00011dec + 0x10fe0));
            if (iVar23 == 0) {
              bVar2 = true;
            }
            else {
              iVar23 = strcmp(__s1,(char *)(DAT_00011df0 + 0x10ff8));
              if (iVar23 == 0) {
                bVar3 = true;
              }
              else {
                pcVar9 = strstr(__s1,(char *)(DAT_00011df4 + 0x11010));
                if (__s1 == pcVar9) {
                  if (pcVar16 != (char *)0x0) {
LAB_00011020:
                    pcVar16 = (char *)(DAT_00011df8 + 0x11034);
                    pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
                    goto LAB_00011034;
                  }
                  pcVar16 = strchr(pcVar9,0x3d);
                  FUN_0001227c(pcVar16 + 1);
                }
                else {
                  if ((pcVar12 == (char *)0x0) ||
                     (iVar23 = strcmp(pcVar12,(char *)(DAT_00011dfc + 0x1108c)), iVar23 != 0)) {
                    iVar23 = strcmp(__s1,(char *)(DAT_00011e00 + 0x110bc));
                    if (iVar23 == 0) {
LAB_00011238:
                      bVar1 = true;
                    }
                    else {
                      pcVar9 = strstr(__s1,(char *)(DAT_00011e04 + 0x110d4));
                      if (__s1 != pcVar9) {
                        if ((pcVar12 != (char *)0x0) &&
                           (iVar23 = strcmp(pcVar12,(char *)(DAT_00011e0c + 0x1112c)), iVar23 == 0))
                        {
                          if (pcVar17 != (char *)0x0) goto LAB_000110e4;
                          pcVar17 = (char *)FUN_00012304(__s1);
                          bVar1 = false;
                          goto LAB_00011054;
                        }
                        iVar23 = strcmp(__s1,(char *)(DAT_00011e10 + 0x11168));
                        if (iVar23 == 0) goto LAB_00011238;
                        if (*__s1 != '-') {
                          iVar23 = iVar6 + 1;
                          goto LAB_000111c8;
                        }
                        iVar23 = strcmp(__s1,(char *)(DAT_00011e14 + 0x11190));
                        if (iVar23 != 0) {
                          puVar19 = *(undefined4 **)(iVar26 + DAT_00011db8);
                          pcVar16 = (char *)(DAT_00011e18 + 0x111b0);
                          goto LAB_000111ac;
                        }
                        iVar23 = iVar6 + 2;
                        __s1 = *(char **)(param_2 + (iVar6 + 1) * 4);
                        goto LAB_000111c8;
                      }
                      if (pcVar17 != (char *)0x0) {
LAB_000110e4:
                        pcVar16 = (char *)(DAT_00011e08 + 0x110f8);
                        pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
                        goto LAB_00011034;
                      }
                      pcVar12 = strchr(pcVar9,0x3d);
                      pcVar17 = (char *)FUN_00012304(pcVar12 + 1);
                    }
                    goto LAB_00011054;
                  }
                  if (pcVar16 != (char *)0x0) goto LAB_00011020;
                  FUN_0001227c(__s1);
                  bVar1 = false;
                }
                pcVar16 = (char *)0x1;
              }
            }
          }
        }
      }
    }
  }
LAB_00011054:
  iVar6 = iVar6 + 1;
  pcVar12 = __s1;
  goto LAB_0001105c;
LAB_00011680:
  iVar6 = 0;
  p_Var15 = (__fd_mask *)local_36c;
  do {
    *p_Var15 = 0;
    iVar6 = iVar6 + 1;
    p_Var15 = p_Var15 + 1;
  } while (iVar6 != 0x20);
  iVar6 = 0;
  p_Var15 = (__fd_mask *)local_2ec;
  do {
    *p_Var15 = 0;
    iVar6 = iVar6 + 1;
    p_Var15 = p_Var15 + 1;
  } while (iVar6 != 0x20);
  local_36c[0] = local_36c[0] | 1;
  local_2ec[0] = local_2ec[0] | 1;
  select(1,(fd_set *)local_36c,(fd_set *)0x0,(fd_set *)local_2ec,(timeval *)0x0);
  if (*piVar21 != 0) goto LAB_000116ec;
  if ((local_36c[0] & 1) != 0) {
    uVar24 = read(0,acStack_22c,0x200);
    piVar7 = __errno_location();
    if (uVar24 == 0) goto LAB_000116ec;
    uVar24 = uVar24 >> 0x1f;
    if (*piVar7 == 4) {
      uVar24 = 0;
    }
    if (uVar24 != 0) {
      pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
      pcVar16 = strerror(*piVar7);
      fprintf(pFVar22,(char *)(DAT_00011e6c + 0x11670),pcVar16);
      goto LAB_000116ec;
    }
    goto LAB_00011680;
  }
  if ((local_2ec[0] & 1) != 0) {
LAB_000116ec:
    uVar8 = 0;
LAB_00011da4:
    FUN_00012340(uVar8);
    return;
  }
  goto LAB_00011680;
LAB_00011b70:
  iVar6 = iVar6 + 1;
  strncpy(pcVar12,pcVar17,sVar10 + 1);
  puVar19 = puVar19 + 1;
  goto LAB_00011a7c;
code_r0x00011068:
  iVar23 = 0;
  __s1 = (char *)0x0;
LAB_000111c8:
  if (bVar1) {
    puVar19 = *(undefined4 **)(iVar26 + DAT_00011db8);
    pcVar16 = (char *)(DAT_00011e1c + 0x111ec);
    __s1 = pcVar12;
LAB_000111ac:
    pFVar22 = (FILE *)*puVar19;
    goto LAB_000111b0;
  }
  pcVar12 = pcVar28;
  if ((pcVar29 != (char *)0x0) &&
     (pcVar20 = getenv((char *)(DAT_00011e2c + 0x112ac)), pcVar12 = pcVar29, pcVar20 != (char *)0x0)
     ) {
    sVar10 = strlen(pcVar20);
    iVar6 = strncmp(pcVar20 + (sVar10 - 3),(char *)(DAT_00011e30 + 0x112d4),3);
    if (iVar6 == 0) {
      pcVar12 = pcVar28;
      local_3e0 = pcVar29;
    }
  }
  if (pcVar16 == (char *)0x0) {
    if (bVar2) {
      pcVar16 = (char *)(DAT_00011e38 + 0x11328);
      pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
      goto LAB_00011034;
    }
    iVar6 = pipe(&local_3a0);
    if (((iVar6 < 0) || (iVar6 = pipe(&local_390), iVar6 < 0)) ||
       (iVar6 = pipe(&local_398), iVar6 < 0)) {
      pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
      piVar21 = __errno_location();
      __s1 = strerror(*piVar21);
      pcVar16 = (char *)(DAT_00011e3c + 0x11364);
LAB_000111b0:
      fprintf(pFVar22,pcVar16,__s1);
    }
    else {
      _Var11 = fork();
      if (_Var11 < 0) {
        pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
        piVar21 = __errno_location();
        __s1 = strerror(*piVar21);
        pcVar16 = (char *)(DAT_00011e40 + 0x113bc);
        goto LAB_000111b0;
      }
      if (_Var11 == 0) {
        if (bVar3) {
          puVar19 = *(undefined4 **)(iVar26 + DAT_00011db8);
          fflush((FILE *)*puVar19);
          iVar6 = _dbus_ensure_standard_fds(4,&local_3a4);
          pcVar16 = local_3a4;
          if (iVar6 == 0) {
            piVar21 = __errno_location();
            pFVar22 = (FILE *)*puVar19;
            pcVar12 = strerror(*piVar21);
            pcVar17 = (char *)(DAT_00011e44 + 0x1141c);
            goto LAB_0001141c;
          }
        }
        _Var11 = fork();
        iVar6 = DAT_00011e70;
        if (_Var11 < 0) {
          pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
          piVar21 = __errno_location();
          __s1 = strerror(*piVar21);
          pcVar16 = (char *)(DAT_00011e48 + 0x11458);
        }
        else if (_Var11 == 0) {
          close(local_3a0);
          close(local_390);
          close(local_398);
          close(local_394);
          sprintf(acStack_26c,(char *)(iVar6 + 0x11708),local_39c);
          sprintf(acStack_22c,(char *)(iVar6 + 0x11708),local_38c);
          if (bVar3) {
            iVar6 = DAT_00011e98 + 0x11864;
          }
          else {
            iVar6 = DAT_00011e74 + 0x11750;
          }
          if (pcVar17 == (char *)0x0) {
            iVar23 = DAT_00011e78 + 0x11760;
          }
          else {
            iVar23 = DAT_00011e9c + 0x11870;
          }
          pcVar12 = (char *)(DAT_00011e80 + 0x11788);
          iVar18 = DAT_00011e84 + 0x1178c;
          iVar25 = DAT_00011e7c + 0x11794;
          iVar27 = DAT_00011e88 + 0x1179c;
          execl(pcVar12,pcVar12,iVar6,iVar25,iVar27,acStack_26c,iVar18,acStack_22c,iVar23,pcVar17,0)
          ;
          puVar19 = *(undefined4 **)(iVar26 + DAT_00011db8);
          pFVar22 = (FILE *)*puVar19;
          piVar21 = __errno_location();
          pcVar16 = strerror(*piVar21);
          fprintf(pFVar22,(char *)(DAT_00011e8c + 0x117fc),pcVar12,pcVar16);
          execlp((char *)(DAT_00011e90 + 0x11818),(char *)(DAT_00011e90 + 0x11818),iVar6,iVar25,
                 iVar27,acStack_26c,iVar18,acStack_22c,iVar23,pcVar17,0);
          pFVar22 = (FILE *)*puVar19;
          __s1 = strerror(*piVar21);
          pcVar16 = (char *)(DAT_00011e94 + 0x11858);
        }
        else {
          close(local_3a0);
          close(local_39c);
          close(local_390);
          close(local_38c);
          close(local_394);
          iVar6 = chdir((char *)(DAT_00011e4c + 0x11494));
          if (iVar6 < 0) {
            pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
            piVar21 = __errno_location();
            __s1 = strerror(*piVar21);
            pcVar16 = (char *)(DAT_00011e50 + 0x114c4);
          }
          else {
            if (bVar4) {
              uVar24 = 2;
            }
            else {
              uVar24 = 3;
            }
            local_3a4 = getenv((char *)(DAT_00011e54 + 0x114d8));
            if ((local_3a4 == (char *)0x0) || (*local_3a4 == '\0')) {
              uVar24 = uVar24 | 4;
            }
            iVar6 = _dbus_ensure_standard_fds(uVar24,&local_3a4);
            pcVar16 = local_3a4;
            if (iVar6 == 0) {
              pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
              piVar21 = __errno_location();
              pcVar12 = strerror(*piVar21);
              pcVar17 = (char *)(DAT_00011e58 + 0x11540);
              goto LAB_0001141c;
            }
            _Var13 = fork();
            if (_Var13 < 0) {
              pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
              piVar21 = __errno_location();
              __s1 = strerror(*piVar21);
              pcVar16 = (char *)(DAT_00011e5c + 0x11574);
            }
            else {
              if (_Var13 != 0) {
                iVar6 = FUN_0001218c(_Var11);
                if (iVar6 < 0) {
                  pcVar16 = (char *)(DAT_00011e60 + 0x1159c);
                  pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
                  goto LAB_00011034;
                }
LAB_00010eec:
                iVar6 = 0;
                goto LAB_00010ef0;
              }
              iVar23 = DAT_00011e64 + 0x115ac;
              iVar6 = 0;
              do {
                while( true ) {
                  sVar10 = 4 - iVar6;
                  if (sVar10 == 0) {
                    if (!bVar4) goto LAB_00010eec;
                    piVar21 = (int *)(DAT_00011ef8 + 0x11d24);
                    *piVar21 = 0;
                    sigemptyset((sigset_t *)local_388);
                    local_388._8_4_ = DAT_00011efc + 0x11d3c;
                    __act = (sigaction *)(local_388 + 8);
                    local_374 = local_388._0_4_;
                    uStack_370 = local_388._4_4_;
                    local_37c = sVar10;
                    sigaction(1,__act,(sigaction *)0x0);
                    sigaction(0xf,__act,(sigaction *)0x0);
                    sigaction(2,__act,(sigaction *)0x0);
                    iVar6 = isatty(0);
                    if (iVar6 != 0) goto LAB_00011680;
                    fputs((char *)(DAT_00011f00 + 0x11d9c),
                          (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8));
                    uVar8 = 1;
                    goto LAB_00011da4;
                  }
                  sVar14 = read(local_398,(void *)(iVar23 + iVar6),sVar10);
                  if (sVar14 < 0) break;
                  if (sVar14 == 0) {
                    pcVar16 = (char *)(DAT_00011ef4 + 0x11d00);
                    pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
                    goto LAB_00011034;
                  }
                  iVar6 = iVar6 + sVar14;
                }
                piVar21 = __errno_location();
              } while (*piVar21 == 4);
              pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
              __s1 = strerror(*piVar21);
              pcVar16 = (char *)(DAT_00011e68 + 0x115f8);
            }
          }
        }
        goto LAB_000111b0;
      }
      close(local_39c);
      close(local_38c);
      close(local_398);
      iVar6 = FUN_0001218c(_Var11);
      if (iVar6 < 0) {
        pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
        piVar21 = __errno_location();
        __s1 = strerror(*piVar21);
        pcVar16 = (char *)(DAT_00011ea0 + 0x118c0);
        goto LAB_000111b0;
      }
      iVar6 = FUN_000121c4(local_390,acStack_22c,0x200);
      if (iVar6 == 1) {
        pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
        piVar21 = __errno_location();
        __s1 = strerror(*piVar21);
        pcVar16 = (char *)(DAT_00011ea8 + 0x11924);
        goto LAB_000111b0;
      }
      if (iVar6 == 2) {
        pcVar16 = (char *)(DAT_00011ea4 + 0x118f8);
        pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
        goto LAB_00011034;
      }
      pcVar16 = acStack_26c;
      close(local_390);
      iVar6 = FUN_000121c4(local_3a0,pcVar16,0x40);
      if (iVar6 == 1) {
        pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
        piVar21 = __errno_location();
        __s1 = strerror(*piVar21);
        pcVar16 = (char *)(DAT_00011eb0 + 0x11990);
        goto LAB_000111b0;
      }
      if (iVar6 == 2) {
        pcVar16 = (char *)(DAT_00011eac + 0x11964);
        pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
        goto LAB_00011034;
      }
      local_3ac = (char *)0x0;
      pcVar17 = (char *)strtol(pcVar16,&local_3ac,0);
      if (local_3ac != pcVar16 && local_3ac != (char *)0x0) {
        *(char **)(DAT_00011eb8 + 0x119f0) = pcVar17;
        close(local_3a0);
        local_3a4 = pcVar17;
        FUN_00012100(local_394,&local_3a4,4);
        close(local_394);
        if (__s1 == (char *)0x0) {
          puVar19 = *(undefined4 **)(iVar26 + DAT_00011ec8);
          local_3a8 = pcVar17;
          local_3a4 = __s1;
          if (bVar5) {
            sVar10 = strlen(acStack_22c);
            FUN_00012100(1,acStack_22c,sVar10 + 1);
            FUN_00012100(1,&local_3a8,4);
            FUN_00012100(1,&local_3a4,4);
          }
          else {
            if (local_3e0 == (char *)0x0) {
              if (pcVar12 == (char *)0x0) {
                printf((char *)(DAT_00011ee8 + 0x11cb0),acStack_22c);
                if (local_3a8 != (char *)0x0) {
                  printf((char *)(DAT_00011eec + 0x11cc8));
                }
                if (local_3a4 != (char *)0x0) {
                  pcVar16 = (char *)(DAT_00011ef0 + 0x11ce0);
                  goto LAB_00011c44;
                }
              }
              else {
                printf((char *)(DAT_00011ed8 + 0x11c68),acStack_22c);
                puts((char *)(DAT_00011edc + 0x11c74));
                if (local_3a8 != (char *)0x0) {
                  printf((char *)(DAT_00011ee0 + 0x11c8c));
                }
                if (local_3a4 != (char *)0x0) {
                  pcVar16 = (char *)(DAT_00011ee4 + 0x11ca4);
LAB_00011c44:
                  printf(pcVar16);
                }
              }
            }
            else {
              printf((char *)(DAT_00011ecc + 0x11c18),acStack_22c);
              if (local_3a8 != (char *)0x0) {
                printf((char *)(DAT_00011ed0 + 0x11c30));
              }
              if (local_3a4 != (char *)0x0) {
                pcVar16 = (char *)(DAT_00011ed4 + 0x11c48);
                goto LAB_00011c44;
              }
            }
            fflush((FILE *)*puVar19);
          }
          fflush((FILE *)*puVar19);
          fflush((FILE *)**(undefined4 **)(iVar26 + DAT_00011db8));
          close(1);
          close(2);
          goto LAB_00010eec;
        }
        sVar10 = strlen(acStack_22c);
        pcVar16 = malloc(sVar10 + 0x1a);
        __argv = malloc(((param_1 - iVar23) + 2) * 4);
        if (__argv == (char **)0x0 || pcVar16 == (char *)0x0) {
          if (pcVar16 != (char *)0x0) goto LAB_00011b34;
        }
        else {
          pcVar12 = (char *)FUN_00012304(__s1);
          *__argv = pcVar12;
          if (pcVar12 != (char *)0x0) {
            iVar6 = 1;
            puVar19 = (undefined4 *)(param_2 + iVar23 * 4);
            ppcVar30 = __argv;
LAB_00011a7c:
            iVar18 = DAT_00011ebc;
            ppcVar30 = ppcVar30 + 1;
            if (iVar6 <= param_1 - iVar23) {
              pcVar17 = (char *)*puVar19;
              sVar10 = strlen(pcVar17);
              pcVar12 = malloc(sVar10 + 1);
              *ppcVar30 = pcVar12;
              if (pcVar12 != (char *)0x0) goto LAB_00011b70;
              ppcVar30 = __argv + iVar6;
              while (ppcVar30 = ppcVar30 + -1, ppcVar30 != __argv) {
                free(*ppcVar30);
              }
              goto LAB_00011b34;
            }
            *ppcVar30 = (char *)0x0;
            strcpy(pcVar16,(char *)(iVar18 + 0x11aa0));
            strcat(pcVar16,acStack_22c);
            putenv(pcVar16);
            execvp(__s1,__argv);
            pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
            piVar21 = __errno_location();
            pcVar12 = strerror(*piVar21);
            pcVar17 = (char *)(DAT_00011ec0 + 0x11af0);
            pcVar16 = __s1;
            goto LAB_0001141c;
          }
LAB_00011b34:
          free(pcVar16);
        }
        if (__argv != (char **)0x0) {
          free(__argv);
        }
        pcVar16 = (char *)(DAT_00011ec4 + 0x11b60);
        pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
        goto LAB_00011034;
      }
      pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
      piVar21 = __errno_location();
      pcVar12 = strerror(*piVar21);
      pcVar17 = (char *)(DAT_00011eb4 + 0x119e4);
LAB_0001141c:
      fprintf(pFVar22,pcVar17,pcVar16,pcVar12);
    }
  }
  else {
    pcVar16 = (char *)(DAT_00011e34 + 0x11304);
    pFVar22 = (FILE *)**(undefined4 **)(iVar26 + DAT_00011db8);
LAB_00011034:
    fputs(pcVar16,pFVar22);
  }
  iVar6 = 1;
LAB_00010ef0:
                    /* WARNING: Subroutine does not return */
  exit(iVar6);
}



/* ===== entry @ 00011f04 size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00022f18)
            (*(undefined4 *)((int)&DAT_00011f4c + DAT_00011f58 + DAT_00011f4c),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_00011f4c + DAT_00011f54 + DAT_00011f4c),
             *(undefined4 *)((int)&DAT_00011f4c + DAT_00011f50 + DAT_00011f4c),param_1);
  return;
}



/* ===== FUN_00011f5c @ 00011f5c size=72 ===== */

void FUN_00011f5c(void)

{
  code *pcVar1;
  
  if (DAT_00011fa8 + 0x11f74 == DAT_00011fa4 + 0x11f6c) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011fac + 0x11f7c + DAT_00011fb0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00012018 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_0001208c + 0x12034;
  if (*(char *)(DAT_00012088 + 0x12028) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00012090) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00012094 + 0x12054));
  }
  FUN_00011f5c();
  if (*(int *)(iVar1 + DAT_00012098) != 0) {
    __deregister_frame_info(DAT_0001209c + 0x12074);
  }
  *(undefined1 *)(DAT_000120a0 + 0x12084) = 1;
  return;
}



/* ===== _INIT_0 @ 000120a4 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000120dc + 0x120b4 + DAT_000120e0) != 0) {
    __register_frame_info(DAT_000120e8 + 0x120d4,DAT_000120e4 + 0x120d0);
  }
  if (((DAT_0001200c + 0x11fcc) - (DAT_00012008 + 0x11fc4) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00012010 + 0x11fd4 + DAT_00012014);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_00012100 @ 00012100 size=128 ===== */

void FUN_00012100(int param_1,int param_2,uint param_3)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  FILE *__stream;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = DAT_00012180 + 0x12120;
  do {
    while (sVar1 = write(param_1,(void *)(param_2 + uVar4),param_3 - uVar4), -1 < sVar1) {
      uVar4 = uVar4 + sVar1;
      if (param_3 <= uVar4) {
        return;
      }
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  __stream = (FILE *)**(undefined4 **)(iVar5 + DAT_00012184);
  pcVar3 = strerror(*piVar2);
  fprintf(__stream,(char *)(DAT_00012188 + 0x12168),pcVar3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001218c @ 0001218c size=56 ===== */

__pid_t FUN_0001218c(__pid_t param_1)

{
  __pid_t _Var1;
  int *piVar2;
  
  do {
    _Var1 = waitpid(param_1,(int *)0x0,0);
    if (-1 < _Var1) {
      return _Var1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  return _Var1;
}



/* ===== FUN_000121c4 @ 000121c4 size=184 ===== */

int FUN_000121c4(int param_1,void *param_2,size_t param_3)

{
  size_t __nbytes;
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  memset(param_2,0,param_3);
  do {
    while( true ) {
      __nbytes = (param_3 - 1) - iVar4;
      iVar3 = 0;
      if (__nbytes == 0) goto LAB_0001221c;
      sVar1 = read(param_1,(void *)((int)param_2 + iVar4),__nbytes);
      if (sVar1 < 0) break;
      if (sVar1 == 0) {
        iVar3 = 2;
        goto LAB_0001221c;
      }
      iVar4 = iVar4 + sVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  iVar3 = 1;
LAB_0001221c:
  if (iVar3 == 2 && iVar4 != 0) {
    iVar3 = 0;
  }
  else if (iVar3 == 1 || iVar4 == 0) {
    return iVar3;
  }
  if (*(char *)((int)param_2 + iVar4 + -1) == '\n') {
    *(undefined1 *)((int)param_2 + iVar4 + -1) = 0;
  }
  return iVar3;
}



/* ===== FUN_0001227c @ 0001227c size=88 ===== */

void FUN_0001227c(char *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_000122d4;
  sVar2 = strlen(param_1);
  if (sVar2 != 0x20) {
    fprintf((FILE *)**(undefined4 **)(iVar1 + 0x12298 + DAT_000122d8),
            (char *)(DAT_000122dc + 0x122b0),param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  uVar3 = _dbus_strdup(param_1);
  *(undefined4 *)((int)&DAT_000122d4 + DAT_000122e0) = uVar3;
  return;
}



/* ===== FUN_00012304 @ 00012304 size=60 ===== */

void * FUN_00012304(char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  __dest = (void *)0x0;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    __dest = malloc(sVar1 + 1);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,sVar1 + 1);
    }
  }
  return __dest;
}



/* ===== FUN_00012340 @ 00012340 size=88 ===== */

void FUN_00012340(int param_1)

{
  int iVar1;
  __pid_t __pid;
  
  iVar1 = DAT_00012398;
  close(0);
  close(1);
  close(2);
  __pid = *(__pid_t *)(iVar1 + 0x1235c);
  if (0 < __pid) {
    kill(__pid,0xf);
    sleep(3);
    kill(*(__pid_t *)(iVar1 + 0x1235c),9);
  }
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* ===== _DT_FINI @ 00012438 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::execvp @ 00024000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00024008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002400c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00024010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pipe @ 00024014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00024018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0002401c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00024020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::putenv @ 00024024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putenv(char *__string)

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



/* ===== <EXTERNAL>::fork @ 0002402c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00024030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 00024034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00024038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0002403c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00024040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00024044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_strdup @ 00024048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_strdup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0002404c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kill @ 00024050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00024054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_ensure_standard_fds @ 00024058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_ensure_standard_fds(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0002405c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 00024060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00024064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigemptyset @ 00024068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigemptyset(sigset_t *__set)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00024070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00024074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00024078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002407c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execlp @ 00024080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execlp(char *__file,char *__arg,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00024084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00024088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execl @ 0002408c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execl(char *__path,char *__arg,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00024094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00024098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dbus_strerror @ 0002409c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dbus_strerror(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 000240a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::chdir @ 000240a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int chdir(char *__path)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000240a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isatty @ 000240ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isatty(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 000240b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 000240b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::select @ 000240b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 000240bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getenv @ 000240c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sigaction @ 000240c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 000240c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000240cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 000240d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000240d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


