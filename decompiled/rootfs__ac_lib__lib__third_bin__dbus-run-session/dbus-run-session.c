// dbus-run-session — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010790 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::execvp @ 000107b4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execvp_00021f74)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 000107c0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00021f78)();
  return;
}



/* ===== <EXTERNAL>::pipe @ 000107d8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe_00021f80)(__pipedes);
  return iVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000107e4 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021f84)();
  return;
}



/* ===== <EXTERNAL>::strcmp @ 000107f0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00021f88)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 000107fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00021f8c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fork @ 00010808 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_fork_00021f90)();
  return _Var1;
}



/* ===== <EXTERNAL>::strstr @ 00010814 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_00021f94)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::kill @ 00010820 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_kill_00021f98)(__pid);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 0001082c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00021f9c)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00010838 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00021fa0)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::waitpid @ 00010844 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_waitpid_00021fa4)(__pid);
  return _Var1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010850 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00021fa8)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 0001085c size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00021fac)();
  return;
}



/* ===== <EXTERNAL>::exit @ 00010868 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00021fb0)(__status);
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010874 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00021fb4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::execlp @ 00010880 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execlp(char *__file,char *__arg,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_execlp_00021fb8)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::close @ 0001088c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00021fbc)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::read @ 00010898 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00021fc0)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::dbus_setenv @ 000108a4 size=12 ===== */

void dbus_setenv(void)

{
  (*(code *)PTR_dbus_setenv_00021fc4)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 000108b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00021fc8)();
  return piVar1;
}



/* ===== <EXTERNAL>::strerror @ 000108bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00021fcc)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::sprintf @ 000108c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00021fd0)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000108d4 size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00021fd4)();
  return;
}



/* ===== FUN_000108e0 @ 000108e0 size=2236 ===== */

void FUN_000108e0(int param_1,int param_2)

{
  bool bVar1;
  FILE *pFVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  char *__s1;
  ssize_t sVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  char *__s2;
  char *__s2_00;
  char *__s2_01;
  char *__needle;
  char *__needle_00;
  char *__s2_02;
  char *__s2_03;
  char *__s2_04;
  undefined4 *puVar13;
  char **ppcVar14;
  int iVar15;
  undefined4 uVar16;
  char *__s;
  int iVar17;
  int iVar18;
  char *local_280;
  char *local_27c;
  uint local_278;
  int local_274;
  int local_270;
  char acStack_26c [63];
  char acStack_22d [513];
  int local_2c;
  
  bVar1 = false;
  __s = acStack_22d + 1;
  iVar15 = DAT_0001119c + 0x10900;
  piVar11 = *(int **)(iVar15 + DAT_000111a0);
  local_274 = 0;
  iVar17 = 1;
  local_2c = *piVar11;
  local_270 = 0;
  local_280 = (char *)0x0;
  local_27c = (char *)0x0;
  memset(__s,0,0x200);
  pcVar12 = (char *)(DAT_000111a4 + 0x10948);
  __s2 = (char *)(DAT_000111a8 + 0x10954);
  __s2_00 = (char *)(DAT_000111ac + 0x10960);
  __s2_01 = (char *)(DAT_000111b0 + 0x1096c);
  __needle = (char *)(DAT_000111b4 + 0x10978);
  __needle_00 = (char *)(DAT_000111b8 + 0x10984);
  __s2_02 = (char *)(DAT_000111bc + 0x10990);
  __s2_03 = (char *)(DAT_000111c0 + 0x1099c);
  __s2_04 = (char *)(DAT_000111c4 + 0x109a8);
  pcVar10 = (char *)0x0;
LAB_000109a8:
  if (param_1 <= iVar17) goto code_r0x000109b8;
  __s1 = *(char **)(param_2 + iVar17 * 4);
  if (!bVar1) {
    iVar5 = strcmp(__s1,pcVar12);
    if (((iVar5 == 0) || (iVar5 = strcmp(__s1,__s2), iVar5 == 0)) ||
       (iVar5 = strcmp(__s1,__s2_00), iVar5 == 0)) {
      iVar17 = DAT_000111e8 + 0x10b10;
      fprintf((FILE *)**(undefined4 **)(iVar15 + DAT_000111c8),(char *)(DAT_000111ec + 0x10b1c),
              iVar17,iVar17,iVar17);
    }
    else {
      iVar5 = strcmp(__s1,__s2_01);
      if (iVar5 != 0) {
        pcVar4 = strstr(__s1,__needle);
        if (__s1 == pcVar4) {
          if (local_280 != (char *)0x0) {
            puVar13 = *(undefined4 **)(iVar15 + DAT_000111c8);
            iVar15 = DAT_000111fc + 0x10b94;
            pcVar10 = (char *)(DAT_00011200 + 0x10b98);
            goto LAB_00010b94;
          }
          local_280 = strchr(pcVar4,0x3d);
          local_280 = local_280 + 1;
        }
        else {
          pcVar4 = strstr(__s1,__needle_00);
          if (__s1 == pcVar4) {
            if (local_27c == (char *)0x0) {
              local_27c = strchr(pcVar4,0x3d);
              local_27c = local_27c + 1;
              goto LAB_00010ab0;
            }
            puVar13 = *(undefined4 **)(iVar15 + DAT_000111c8);
            iVar15 = DAT_00011204 + 0x10bec;
            pcVar10 = (char *)(DAT_00011208 + 0x10bf0);
            goto LAB_00010b94;
          }
          iVar5 = strcmp(__s1,__s2_02);
          if ((iVar5 != 0) && (iVar5 = strcmp(__s1,__s2_03), iVar5 != 0)) {
            if (*__s1 != '-') goto LAB_000109bc;
            iVar5 = strcmp(__s1,(char *)(DAT_0001120c + 0x10c48));
            if (iVar5 != 0) {
              puVar13 = *(undefined4 **)(iVar15 + DAT_000111c8);
              iVar15 = DAT_00011210 + 0x10c70;
              pcVar12 = (char *)(DAT_00011214 + 0x10c74);
              goto LAB_00010a7c;
            }
            iVar17 = iVar17 + 1;
            bVar1 = false;
            goto LAB_000109bc;
          }
          bVar1 = true;
        }
        goto LAB_00010ab0;
      }
      printf((char *)(DAT_000111f8 + 0x10b58),DAT_000111f4 + 0x10b54,DAT_000111f0 + 0x10b50);
    }
    iVar15 = 0;
    goto LAB_00010b24;
  }
  iVar5 = strcmp(pcVar10,__s2_04);
  if (iVar5 == 0) {
    ppcVar14 = &local_280;
    pcVar4 = local_280;
  }
  else {
    iVar5 = strcmp(pcVar10,(char *)(DAT_000111d4 + 0x10a28));
    if (iVar5 != 0) {
      puVar13 = *(undefined4 **)(iVar15 + DAT_000111c8);
      iVar15 = DAT_000111e0 + 0x10a7c;
      pcVar12 = (char *)(DAT_000111e4 + 0x10a80);
      __s1 = pcVar10;
      goto LAB_00010a7c;
    }
    ppcVar14 = &local_27c;
    pcVar4 = local_27c;
  }
  if (pcVar4 != (char *)0x0) {
    puVar13 = *(undefined4 **)(iVar15 + DAT_000111c8);
    iVar15 = DAT_000111d8 + 0x10a5c;
    pcVar12 = (char *)(DAT_000111dc + 0x10a60);
    __s1 = pcVar10;
    goto LAB_00010a7c;
  }
  *ppcVar14 = __s1;
  bVar1 = false;
LAB_00010ab0:
  iVar17 = iVar17 + 1;
  pcVar10 = __s1;
  goto LAB_000109a8;
code_r0x000109b8:
  iVar17 = 0;
LAB_000109bc:
  if (iVar17 < 1 || param_1 <= iVar17) {
    puVar13 = *(undefined4 **)(iVar15 + DAT_000111c8);
    iVar15 = DAT_000111cc + 0x109f4;
    pcVar10 = (char *)(DAT_000111d0 + 0x109f8);
LAB_00010b94:
    fprintf((FILE *)*puVar13,pcVar10,iVar15);
  }
  else {
    if (bVar1) {
      puVar13 = *(undefined4 **)(iVar15 + DAT_000111c8);
      iVar15 = DAT_00011218 + 0x10ca0;
      pcVar12 = (char *)(DAT_0001121c + 0x10ca4);
      __s1 = pcVar10;
LAB_00010a7c:
      pFVar2 = (FILE *)*puVar13;
    }
    else {
      if (local_27c == (char *)0x0) {
        local_27c = (char *)(DAT_00011220 + 0x10cb8);
      }
      iVar5 = pipe(&local_274);
      if (iVar5 < 0) {
        pFVar2 = (FILE *)**(undefined4 **)(iVar15 + DAT_000111c8);
        piVar6 = __errno_location();
        __s1 = strerror(*piVar6);
        iVar15 = DAT_00011224 + 0x10cf4;
        pcVar12 = (char *)(DAT_00011228 + 0x10cf8);
      }
      else {
        uVar3 = fork();
        pcVar12 = local_27c;
        pcVar10 = local_280;
        if ((int)uVar3 < 0) {
          pFVar2 = (FILE *)**(undefined4 **)(iVar15 + DAT_000111c8);
          piVar6 = __errno_location();
          __s1 = strerror(*piVar6);
          iVar15 = DAT_0001122c + 0x10d34;
          pcVar12 = (char *)(DAT_00011230 + 0x10d38);
        }
        else {
          if (uVar3 == 0) {
            close(local_274);
            sprintf(acStack_26c,(char *)(DAT_00011234 + 0x10d64),local_270);
            if (pcVar10 == (char *)0x0) {
              iVar17 = DAT_00011238 + 0x10d78;
            }
            else {
              iVar17 = DAT_0001124c + 0x10de8;
            }
            execlp(pcVar12,pcVar12,DAT_0001123c + 0x10d9c,DAT_00011240 + 0x10da0,acStack_26c,iVar17,
                   pcVar10,0);
            pFVar2 = (FILE *)**(undefined4 **)(iVar15 + DAT_000111c8);
            piVar6 = __errno_location();
            pcVar10 = strerror(*piVar6);
            fprintf(pFVar2,(char *)(DAT_00011248 + 0x10dd8),DAT_00011244 + 0x10dd4,pcVar12,pcVar10);
            goto LAB_00010a84;
          }
          iVar18 = 0;
          close(local_270);
          iVar5 = local_274;
          memset(__s,0,0x200);
          do {
            while( true ) {
              if (0x1ffU - iVar18 == 0) {
                iVar18 = 0x1ff;
                iVar5 = 0;
                goto LAB_00010e3c;
              }
              sVar7 = read(iVar5,__s + iVar18,0x1ffU - iVar18);
              if (sVar7 < 0) break;
              if (sVar7 == 0) {
                iVar5 = 2;
                goto LAB_00010e3c;
              }
              iVar18 = iVar18 + sVar7;
            }
            piVar6 = __errno_location();
          } while (*piVar6 == 4);
          iVar5 = 1;
LAB_00010e3c:
          if (iVar5 == 2 && iVar18 != 0) {
            iVar5 = 0;
LAB_00010e6c:
            if (__s[iVar18 + -1] == '\n') {
              __s[iVar18 + -1] = '\0';
            }
          }
          else if (iVar5 != 1 && iVar18 != 0) goto LAB_00010e6c;
          if (iVar5 == 1) {
            pFVar2 = (FILE *)**(undefined4 **)(iVar15 + DAT_000111c8);
            piVar6 = __errno_location();
            __s1 = strerror(*piVar6);
            iVar15 = DAT_00011258 + 0x10efc;
            pcVar12 = (char *)(DAT_0001125c + 0x10f00);
          }
          else {
            if (iVar5 == 2) {
              puVar13 = *(undefined4 **)(iVar15 + DAT_000111c8);
              iVar15 = DAT_00011250 + 0x10ea8;
              pcVar10 = (char *)(DAT_00011254 + 0x10eac);
              goto LAB_00010b94;
            }
            close(local_274);
            iVar5 = dbus_setenv(DAT_00011260 + 0x10f18,__s);
            if (((iVar5 == 0) || (iVar5 = dbus_setenv(DAT_0001126c + 0x10f58,0), iVar5 == 0)) ||
               ((iVar5 = dbus_setenv(DAT_00011270 + 0x10f70,0), iVar5 == 0 ||
                ((iVar5 = dbus_setenv(DAT_00011274 + 0x10f88,0), iVar5 == 0 ||
                 (iVar5 = dbus_setenv(DAT_00011278 + 0x10fa0,0), iVar5 == 0)))))) {
              fprintf((FILE *)**(undefined4 **)(iVar15 + DAT_000111c8),
                      (char *)(DAT_00011268 + 0x10f3c),DAT_00011264 + 0x10f38);
LAB_00010f40:
              iVar15 = 1;
LAB_00010b24:
                    /* WARNING: Subroutine does not return */
              exit(iVar15);
            }
            uVar8 = fork();
            if ((int)uVar8 < 0) {
              pFVar2 = (FILE *)**(undefined4 **)(iVar15 + DAT_000111c8);
              piVar6 = __errno_location();
              __s1 = strerror(*piVar6);
              iVar15 = DAT_0001127c + 0x10fe0;
              pcVar12 = (char *)(DAT_00011280 + 0x10fe4);
            }
            else {
              if (uVar8 == 0) {
                execvp(*(char **)(param_2 + iVar17 * 4),(char **)(param_2 + iVar17 * 4));
                uVar16 = *(undefined4 *)(param_2 + iVar17 * 4);
                pFVar2 = (FILE *)**(undefined4 **)(iVar15 + DAT_000111c8);
                piVar11 = __errno_location();
                pcVar10 = strerror(*piVar11);
                fprintf(pFVar2,(char *)(DAT_0001129c + 0x1109c),DAT_00011298 + 0x11098,uVar16,
                        pcVar10);
                goto LAB_00010f40;
              }
              iVar17 = DAT_00011284 + 0x10ffc;
              pcVar10 = (char *)(DAT_00011288 + 0x11000);
              iVar5 = DAT_0001128c + 0x11004;
LAB_00011000:
              do {
                uVar9 = waitpid(-1,(int *)&local_278,0);
                if (uVar9 != 0xffffffff) {
                  if (uVar3 == uVar9) {
                    pFVar2 = (FILE *)**(undefined4 **)(iVar15 + DAT_000111c8);
                    if ((local_278 & 0x7f) != 0) {
                      if ((local_278 & 0xffff) - 1 < 0xff) {
                        fprintf(pFVar2,(char *)(DAT_000112ac + 0x11104),DAT_000112a8 + 0x11100,
                                local_278 & 0x7f);
                      }
                      else {
                        fprintf(pFVar2,(char *)(DAT_000112b0 + 0x1111c),iVar5);
                      }
                      uVar3 = 0;
                      goto LAB_00011000;
                    }
                    uVar9 = (local_278 & 0xffff) >> 8;
                    uVar3 = 0;
                    pcVar12 = (char *)(DAT_000112a4 + 0x110d8);
                    iVar18 = DAT_000112a0 + 0x110d4;
                  }
                  else {
                    if (uVar8 == uVar9) {
                      if (uVar3 != 0) {
                        kill(uVar3,0xf);
                      }
                      if ((local_278 & 0x7f) == 0) {
                        uVar3 = (local_278 & 0xffff) >> 8;
                        goto LAB_00010a88;
                      }
                      if (0xfe < (local_278 & 0xffff) - 1) {
                        puVar13 = *(undefined4 **)(iVar15 + DAT_000111c8);
                        iVar15 = DAT_000112b4 + 0x11178;
                        pcVar10 = (char *)(DAT_000112b8 + 0x1117c);
                        goto LAB_00010b94;
                      }
                      uVar3 = (local_278 & 0x7f) + 0x80;
                      goto LAB_00010a88;
                    }
                    pFVar2 = (FILE *)**(undefined4 **)(iVar15 + DAT_000111c8);
                    pcVar12 = pcVar10;
                    iVar18 = iVar17;
                  }
                  fprintf(pFVar2,pcVar12,iVar18,uVar9);
                  goto LAB_00011000;
                }
                piVar6 = __errno_location();
              } while (*piVar6 == 4);
              pFVar2 = (FILE *)**(undefined4 **)(iVar15 + DAT_000111c8);
              __s1 = strerror(*piVar6);
              iVar15 = DAT_00011290 + 0x11050;
              pcVar12 = (char *)(DAT_00011294 + 0x11054);
            }
          }
        }
      }
    }
    fprintf(pFVar2,pcVar12,iVar15,__s1);
  }
LAB_00010a84:
  uVar3 = 0x7f;
LAB_00010a88:
  if (local_2c == *piVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



/* ===== entry @ 000112bc size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00021f7c)
            (*(undefined4 *)((int)&DAT_00011304 + DAT_00011310 + DAT_00011304),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_00011304 + DAT_0001130c + DAT_00011304),
             *(undefined4 *)((int)&DAT_00011304 + DAT_00011308 + DAT_00011304),param_1);
  return;
}



/* ===== FUN_00011314 @ 00011314 size=72 ===== */

void FUN_00011314(void)

{
  code *pcVar1;
  
  if (DAT_00011360 + 0x1132c == DAT_0001135c + 0x11324) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011364 + 0x11334 + DAT_00011368);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 000113d0 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_00011444 + 0x113ec;
  if (*(char *)(DAT_00011440 + 0x113e0) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00011448) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_0001144c + 0x1140c));
  }
  FUN_00011314();
  if (*(int *)(iVar1 + DAT_00011450) != 0) {
    __deregister_frame_info(DAT_00011454 + 0x1142c);
  }
  *(undefined1 *)(DAT_00011458 + 0x1143c) = 1;
  return;
}



/* ===== _INIT_0 @ 0001145c size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00011494 + 0x1146c + DAT_00011498) != 0) {
    __register_frame_info(DAT_000114a0 + 0x1148c,DAT_0001149c + 0x11488);
  }
  if (((DAT_000113c4 + 0x11384) - (DAT_000113c0 + 0x1137c) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_000113c8 + 0x1138c + DAT_000113cc);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _DT_FINI @ 000114a4 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::execvp @ 00023000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execvp(char *__file,char **__argv)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00023008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pipe @ 00023010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fork @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t fork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kill @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int kill(__pid_t __pid,int __sig)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::waitpid @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::execlp @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int execlp(char *__file,char *__arg,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dbus_setenv @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dbus_setenv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00023068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


