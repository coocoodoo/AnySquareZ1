// dbus-cleanup-sockets — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010768 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 0001078c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_00021f5c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00010798 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00021f60)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::connect @ 000107a4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_00021f64)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 000107b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00021f68)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::fcntl64 @ 000107bc size=12 ===== */

void fcntl64(void)

{
  (*(code *)PTR_fcntl64_00021f6c)();
  return;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 000107c8 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00021f70)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 000107d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00021f74)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::sleep @ 000107e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
  uint uVar1;
  
  uVar1 = (*(code *)PTR_sleep_00021f78)(__seconds);
  return uVar1;
}



/* ===== <EXTERNAL>::socket @ 000107ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00021f7c)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 000107f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00021f80)();
  return;
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00010804 size=12 ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00021f84)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 00010810 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00021f88)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 0001081c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_00021f8c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010828 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021f90)();
  return;
}



/* ===== <EXTERNAL>::strncmp @ 00010834 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00021f94)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00010840 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00021f98)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::unlink @ 0001084c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_00021f9c)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::realloc @ 00010858 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00021fa0)(__ptr);
  return pvVar1;
}



/* ===== <EXTERNAL>::readdir64 @ 00010864 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = (dirent64 *)(*(code *)PTR_readdir64_00021fa4)(__dirp);
  return pdVar1;
}



/* ===== <EXTERNAL>::memset @ 0001087c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00021fac)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::opendir @ 00010888 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_00021fb0)(__name);
  return pDVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00010894 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00021fb4)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 000108a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00021fb8)();
  return piVar1;
}



/* ===== <EXTERNAL>::exit @ 000108ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00021fbc)(__status);
  return;
}



/* ===== <EXTERNAL>::strlen @ 000108b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00021fc0)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::fputs @ 000108c4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00021fc4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::closedir @ 000108d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_00021fc8)(__dirp);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 000108dc size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00021fcc)();
  return;
}



/* ===== <EXTERNAL>::close @ 000108e8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00021fd0)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::free @ 000108f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00021fd4)(__ptr);
  return;
}



/* ===== FUN_00010900 @ 00010900 size=1660 ===== */

void FUN_00010900(int param_1,int param_2)

{
  char cVar1;
  DIR *__dirp;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  dirent64 *pdVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  FILE *pFVar16;
  undefined4 *puVar17;
  char *__s1;
  char *pcVar18;
  undefined1 *puVar19;
  undefined4 uVar20;
  undefined1 *puVar21;
  char *pcVar22;
  char *__name;
  bool bVar23;
  int local_b8;
  sockaddr local_9c [7];
  int local_2c;
  
  iVar15 = DAT_00010f7c + 0x10920;
  bVar23 = false;
  piVar9 = *(int **)(iVar15 + DAT_00010f80);
  pcVar22 = (char *)(DAT_00010f84 + 0x10938);
  local_2c = *piVar9;
  pcVar10 = (char *)(DAT_00010f88 + 0x1094c);
  pcVar11 = (char *)(DAT_00010f8c + 0x10958);
  pcVar12 = (char *)(DAT_00010f90 + 0x10964);
  pcVar13 = (char *)(DAT_00010f94 + 0x10970);
  __name = (char *)0x0;
  for (pcVar18 = (char *)0x1; (int)pcVar18 < param_1; pcVar18 = pcVar18 + 1) {
    __s1 = *(char **)(param_2 + (int)pcVar18 * 4);
    iVar2 = strcmp(__s1,pcVar10);
    if (((iVar2 == 0) || (iVar2 = strcmp(__s1,pcVar11), iVar2 == 0)) ||
       (iVar2 = strcmp(__s1,pcVar12), iVar2 == 0)) {
      fputs((char *)(DAT_00010fa4 + 0x10a28),(FILE *)**(undefined4 **)(iVar15 + DAT_00010f9c));
LAB_00010a2c:
      iVar15 = 0;
      goto LAB_00010a30;
    }
    iVar2 = strcmp(__s1,pcVar22);
    if (iVar2 == 0) {
      printf((char *)(DAT_00010fac + 0x10a5c),DAT_00010fa8 + 0x10a58);
      goto LAB_00010a2c;
    }
    if (bVar23) {
      if (__name != (char *)0x0) {
        pcVar18 = (char *)(DAT_00010fb4 + 0x10ac8);
        pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00010f9c);
LAB_00010aa0:
        fputs(pcVar18,pFVar16);
        goto LAB_00010aa4;
      }
    }
    else {
      iVar2 = strcmp(__s1,pcVar13);
      if (iVar2 == 0) {
        bVar23 = true;
        __s1 = __name;
      }
      else {
        cVar1 = *__s1;
        __s1 = __name;
        if (cVar1 == '-') {
          pcVar18 = (char *)(DAT_00010fb0 + 0x10aa0);
          pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00010f9c);
          goto LAB_00010aa0;
        }
      }
    }
    __name = __s1;
  }
  if (__name == (char *)0x0) {
    __name = (char *)(DAT_00010f98 + 0x10988);
  }
  pcVar10 = (char *)FUN_000111dc(8);
  __dirp = opendir(__name);
  if (__dirp == (DIR *)0x0) {
    pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00010f9c);
    piVar9 = __errno_location();
    pcVar18 = strerror(*piVar9);
    fprintf(pFVar16,(char *)(DAT_00010fa0 + 0x109d0),__name,pcVar18);
LAB_00010aa4:
    iVar15 = 1;
LAB_00010a30:
                    /* WARNING: Subroutine does not return */
    exit(iVar15);
  }
  pcVar13 = (char *)0x0;
  pcVar11 = (char *)(DAT_00010fd4 + 0x10ca4);
  pcVar12 = (char *)(DAT_00010fd8 + 0x10cb0);
  puVar21 = (undefined1 *)0x2;
  do {
    do {
      pdVar5 = readdir64(__dirp);
      if (pdVar5 == (dirent64 *)0x0) {
        closedir(__dirp);
        iVar2 = DAT_00010fb8;
        pcVar11 = (char *)(DAT_00010fbc + 0x10bb8);
        do {
          local_b8 = 0;
          puVar21 = (undefined1 *)0x0;
          piVar14 = (int *)(DAT_00010fc0 + 0x10bd0);
          while (pcVar13 != puVar21) {
            pcVar18 = *(char **)(pcVar10 + (int)puVar21 * 4);
            puVar21 = puVar21 + 1;
            pcVar22 = *(char **)(pcVar18 + 8);
            if (-1 < *(int *)(pcVar18 + 4)) {
              puVar17 = *(undefined4 **)(iVar15 + DAT_00010f9c);
              pcVar18 = (char *)(DAT_00010fe0 + 0x10d04);
              goto LAB_00010c84;
            }
            if (pcVar22 == (char *)0x0) {
              if (*(int *)(pcVar18 + 0xc) < 6) {
                *(int *)(pcVar18 + 0xc) = *(int *)(pcVar18 + 0xc) + 1;
                iVar6 = socket(1,1,0);
                *(int *)(pcVar18 + 4) = iVar6;
                uVar20 = 0;
                if (iVar6 < 0) {
                  pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00010f9c);
                  piVar7 = __errno_location();
                  pcVar12 = strerror(*piVar7);
                  fprintf(pFVar16,(char *)(DAT_00010fe8 + 0x10d8c),pcVar12);
                  goto LAB_00010d8c;
                }
                iVar6 = fcntl64(iVar6,4,0x800);
                if (iVar6 < 0) {
                  uVar8 = *(undefined4 *)pcVar18;
                  pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00010f9c);
                  piVar7 = __errno_location();
                  pcVar12 = strerror(*piVar7);
                  fprintf(pFVar16,(char *)(DAT_00010fec + 0x10de0),uVar8,pcVar12);
                  goto LAB_00010d8c;
                }
                pcVar12 = memset(local_9c[0].sa_data,0,0x6c);
                local_9c[0].sa_family = 1;
                strncpy(pcVar12,*(char **)pcVar18,0x6b);
                do {
                  iVar6 = connect(*(int *)(pcVar18 + 4),local_9c,0x6e);
                  if (-1 < iVar6) {
                    uVar20 = 3;
                    *(int *)(iVar2 + 0x10bb4) = *(int *)(iVar2 + 0x10bb4) + 1;
                    goto LAB_00010d8c;
                  }
                  piVar7 = __errno_location();
                  iVar6 = *piVar7;
                } while (iVar6 == 4);
                if (iVar6 != 0x6f) {
                  if ((iVar6 != 0x73) && (iVar6 != 0xb)) {
                    uVar20 = *(undefined4 *)pcVar18;
                    pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00010f9c);
                    pcVar12 = strerror(iVar6);
                    fprintf(pFVar16,pcVar11,uVar20,pcVar12);
                    goto LAB_00010d34;
                  }
                  goto LAB_00010d8c;
                }
                pcVar12 = *(char **)pcVar18;
                *piVar14 = *piVar14 + 1;
                iVar6 = unlink(pcVar12);
                if (iVar6 < 0) {
                  uVar20 = *(undefined4 *)pcVar18;
                  pFVar16 = (FILE *)**(undefined4 **)(iVar15 + DAT_00010f9c);
                  pcVar12 = strerror(*piVar7);
                  fprintf(pFVar16,(char *)(DAT_00010ff0 + 0x10ee0),uVar20,pcVar12);
                  uVar20 = 1;
                }
                else {
                  uVar20 = 4;
                }
                *(undefined4 *)(pcVar18 + 8) = uVar20;
              }
              else {
                fprintf((FILE *)**(undefined4 **)(iVar15 + DAT_00010f9c),
                        (char *)(DAT_00010fe4 + 0x10d30),*(undefined4 *)pcVar18);
LAB_00010d34:
                uVar20 = 1;
LAB_00010d8c:
                *(undefined4 *)(pcVar18 + 8) = uVar20;
              }
              if (-1 < *(int *)(pcVar18 + 4)) {
                close(*(int *)(pcVar18 + 4));
                pcVar18[4] = -1;
                pcVar18[5] = -1;
                pcVar18[6] = -1;
                pcVar18[7] = -1;
              }
              if (*(int *)(pcVar18 + 8) == 0) {
                local_b8 = local_b8 + 1;
              }
            }
          }
          if (local_b8 == 0) {
            bVar23 = pcVar10 != (char *)0x0;
            if (bVar23) {
              pcVar18 = pcVar10;
            }
            pcVar11 = pcVar13;
            if (bVar23) {
              pcVar11 = pcVar10 + (int)pcVar13 * 4;
            }
            *(char **)(DAT_00010fc4 + 0x10bfc) =
                 pcVar13 + *(int *)(DAT_00010fc4 + 0x10bfc) +
                           (-*(int *)(DAT_00010fc4 + 0x10bf8) - *(int *)(DAT_00010fc4 + 0x10c00));
            if (bVar23) {
              while (pcVar11 != pcVar18) {
                pcVar12 = pcVar18 + 4;
                puVar17 = *(undefined4 **)pcVar18;
                pcVar18 = pcVar12;
                if (puVar17 != (undefined4 *)0x0) {
                  free((void *)*puVar17);
                  if (-1 < (int)puVar17[1]) {
                    close(puVar17[1]);
                  }
                  free(puVar17);
                }
              }
              free(pcVar10);
            }
            printf((char *)(DAT_00010fcc + 0x10c30),*(undefined4 *)(DAT_00010fc8 + 0x10c2c),__name,
                   *(undefined4 *)(DAT_00010fc8 + 0x10c34),*(undefined4 *)(DAT_00010fc8 + 0x10c30));
            if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(0);
            }
            return;
          }
          fputs((char *)(DAT_00010fdc + 0x10cc8),(FILE *)**(undefined4 **)(iVar15 + DAT_00010f9c));
          sleep(2);
        } while( true );
      }
      pcVar22 = pdVar5->d_name;
      iVar2 = strncmp(pcVar22,pcVar11,5);
      pcVar18 = pcVar22;
    } while (iVar2 != 0);
    puVar17 = (undefined4 *)FUN_000111dc(0x10);
    sVar3 = strlen(__name);
    sVar4 = strlen(pcVar22);
    pcVar18 = (char *)FUN_000111dc(sVar3 + sVar4 + 2);
    *puVar17 = pcVar18;
    pcVar18 = strcpy(pcVar18,__name);
    pcVar18 = strcat(pcVar18,pcVar12);
    strcat(pcVar18,pcVar22);
    puVar17[1] = 0xffffffff;
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar19 = puVar21;
    if (puVar21 == pcVar13) {
      puVar19 = (undefined1 *)((int)puVar21 << 1);
      pcVar22 = (char *)((int)puVar21 << 3);
      if (pcVar22 == (char *)0x0) {
        free(pcVar10);
        pcVar10 = pcVar22;
      }
      else {
        pcVar10 = realloc(pcVar10,(size_t)pcVar22);
        if (pcVar10 == (char *)0x0) {
          puVar17 = *(undefined4 **)(iVar15 + DAT_00010f9c);
          pcVar18 = (char *)(DAT_00010fd0 + 0x10c88);
LAB_00010c84:
          fprintf((FILE *)*puVar17,pcVar18,pcVar22);
          goto LAB_00010aa4;
        }
      }
    }
    *(undefined4 **)(pcVar10 + (int)pcVar13 * 4) = puVar17;
    pcVar13 = pcVar13 + 1;
    pcVar18 = pcVar22;
    puVar21 = puVar19;
  } while( true );
}



/* ===== entry @ 00010ff4 size=80 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00021fa8)
            (*(undefined4 *)((int)&DAT_0001103c + DAT_00011048 + DAT_0001103c),param_2,
             &stack0x00000004,*(undefined4 *)((int)&DAT_0001103c + DAT_00011044 + DAT_0001103c),
             *(undefined4 *)((int)&DAT_0001103c + DAT_00011040 + DAT_0001103c),param_1);
  return;
}



/* ===== FUN_0001104c @ 0001104c size=72 ===== */

void FUN_0001104c(void)

{
  code *pcVar1;
  
  if (DAT_00011098 + 0x11064 == DAT_00011094 + 0x1105c) {
    return;
  }
  pcVar1 = *(code **)(DAT_0001109c + 0x1106c + DAT_000110a0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 00011108 size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_0001117c + 0x11124;
  if (*(char *)(DAT_00011178 + 0x11118) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_00011180) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_00011184 + 0x11144));
  }
  FUN_0001104c();
  if (*(int *)(iVar1 + DAT_00011188) != 0) {
    __deregister_frame_info(DAT_0001118c + 0x11164);
  }
  *(undefined1 *)(DAT_00011190 + 0x11174) = 1;
  return;
}



/* ===== _INIT_0 @ 00011194 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_000111cc + 0x111a4 + DAT_000111d0) != 0) {
    __register_frame_info(DAT_000111d8 + 0x111c4,DAT_000111d4 + 0x111c0);
  }
  if (((DAT_000110fc + 0x110bc) - (DAT_000110f8 + 0x110b4) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00011100 + 0x110c4 + DAT_00011104);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== FUN_000111dc @ 000111dc size=64 ===== */

void FUN_000111dc(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = DAT_0001121c;
  pvVar2 = malloc(param_1);
  if (pvVar2 != (void *)0x0) {
    return;
  }
  fprintf((FILE *)**(undefined4 **)(iVar1 + 0x111f8 + DAT_00011220),(char *)(DAT_00011224 + 0x11210)
          ,param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== _DT_FINI @ 00011228 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::strcpy @ 00023000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 00023004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 00023008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 0002300c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fcntl64 @ 00023014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fcntl64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00023018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 0002301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sleep @ 00023020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sleep(uint __seconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 00023024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00023028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 0002302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00023030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcat @ 00023034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00023038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 0002303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00023040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00023044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 00023048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::realloc @ 0002304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::readdir64 @ 00023050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent64 * readdir64(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00023054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00023058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0002305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::opendir @ 00023060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00023064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 0002306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00023070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00023074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00023078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::closedir @ 0002307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00023080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00023084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 00023088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


